// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

#include <unordered_map>
#include "json.hpp"

struct NidFuncTable {
    std::string m_encoded_id;
    std::string m_hex_id;
    std::string m_funcName;
    int m_libversion;
    int m_version_major;
    int m_version_minor;
};

constexpr std::string_view SpdxHeader =
    R"(// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later
)";

constexpr int MAXIMUM_LINE_LENGTH = 100;

void GenerateCodeFiles(
    const std::unordered_map<std::string, std::vector<NidFuncTable>>& libName2FuncTableMap,
    const std::string& moduleName) {
    // Generate Header
    std::string spdx{SpdxHeader};
    std::string headerCode(spdx);
    headerCode += "\n";
    headerCode += "#pragma once\n\n#include \"common/types.h\"\n\n";
    headerCode += "namespace Core::Loader {\nclass SymbolsResolver;\n}\n\n";
    std::string trimmedName = moduleName;
    if (moduleName.find("libSce") != std::string::npos) {
        trimmedName = moduleName.substr(6, moduleName.size() - 1);
    } else if (moduleName.find("lib") != std::string::npos) {
        trimmedName = moduleName.substr(3, moduleName.size() - 1);
        trimmedName[0] = toupper(trimmedName[0]);
    }
    std::string lowModName = trimmedName;
    std::transform(lowModName.begin(), lowModName.end(), lowModName.begin(), ::tolower);
    std::string headerName(lowModName + ".h");
    headerCode += "namespace Libraries::" + trimmedName + " {\n\n";
    std::unordered_set<std::string> funcDeclares;
    for (const auto& lib : libName2FuncTableMap) {
        for (const auto& func : lib.second) {
            if (funcDeclares.find(func.m_funcName) == funcDeclares.end()) {
                std::string funcDeclare("s32 PS4_SYSV_ABI " + func.m_funcName + "();\n");
                if (funcDeclare.length() > MAXIMUM_LINE_LENGTH) {
                    funcDeclare = "s32 PS4_SYSV_ABI\n" + func.m_funcName + "();\n";
                }
                headerCode += funcDeclare;
                funcDeclares.insert(func.m_funcName);
            }
        }
    }

    headerCode += "\nvoid RegisterLib(Core::Loader::SymbolsResolver* sym);\n";

    headerCode += "} // namespace Libraries::" + trimmedName;
    std::ofstream headerFile(MODULE_DIR + headerName);
    headerFile << headerCode;
    headerFile.close();

    std::string sourceName(lowModName + ".cpp");
    std::string sourceCode(spdx);
    sourceCode += "\n";
    sourceCode += "#include \"common/logging/log.h\"\n";
    sourceCode += "#include \"core/libraries/error_codes.h\"\n";
    sourceCode += "#include \"core/libraries/libs.h\"\n";
    sourceCode += "#include \"core/libraries/" + lowModName + "/" + headerName + "\"\n\n";

    sourceCode += "namespace Libraries::" + trimmedName + " {\n\n";

    // function implementation
    std::unordered_set<std::string> funcImplementation;
    for (const auto& lib : libName2FuncTableMap) {
        for (const auto& func : lib.second) {
            if (funcImplementation.find(func.m_funcName) == funcImplementation.end()) {
                std::string funcHeader = "s32 PS4_SYSV_ABI " + func.m_funcName + "() {";
                if (funcHeader.length() > MAXIMUM_LINE_LENGTH) {
                    funcHeader = "s32 PS4_SYSV_ABI\n" + func.m_funcName + "() {";
                }
                const std::string funcDeclare(funcHeader + "\n" + "    LOG_ERROR(Lib_" +
                                              trimmedName +
                                              ", \"(STUBBED) called\");\n"
                                              "    return ORBIS_OK;\n" +
                                              "}\n\n");
                sourceCode += funcDeclare;
                funcImplementation.insert(func.m_funcName);
            }
        }
    }
    sourceCode += "void RegisterLib(Core::Loader::SymbolsResolver* sym) {\n";
    for (const auto& lib : libName2FuncTableMap) {
        for (const auto& func : lib.second) {
            std::string nextLine = "    LIB_FUNCTION(\"" + func.m_encoded_id + "\", \"" +
                                   lib.first + "\", " + std::to_string(func.m_libversion) + ", \"" +
                                   moduleName + "\", " + std::to_string(func.m_version_major) +
                                   ", " + std::to_string(func.m_version_minor) + ", " +
                                   func.m_funcName + ");\n";
            if (nextLine.length() > MAXIMUM_LINE_LENGTH) {
                nextLine = "    LIB_FUNCTION(\"" + func.m_encoded_id + "\", \"" + lib.first +
                           "\", " + std::to_string(func.m_libversion) + ", \"" + moduleName +
                           "\", " + std::to_string(func.m_version_major) + ", " +
                           std::to_string(func.m_version_minor) + ",\n" + "                 " +
                           func.m_funcName + ");\n";
            }
            sourceCode += nextLine;
        }
    }

    sourceCode += "};\n\n";
    sourceCode += "} // namespace Libraries::" + trimmedName;
    std::ofstream sourceFile(MODULE_DIR + sourceName);
    sourceFile << sourceCode;
    sourceFile.close();
}

void GetSymbolsFromLibDoc(std::vector<std::string>& importModules) {
    for (uint32_t index = 0; index < importModules.size(); index++) {
        const std::string& moduleName = importModules[index] + ".sprx.json";

        std::ifstream file(LIBDOC_DIR + moduleName);
        if (std::filesystem::exists(LIBDOC_DIR + moduleName)) {
            printf("module found %s\n", moduleName.c_str());
            nlohmann::json m_json_data = nlohmann::json::parse(file);
            bool bFound = false;
            // parse "modules": [
            for (auto& modules : m_json_data["modules"]) {
                std::string subModuleName =
                    modules.at("name").get<std::string>(); // get the name of module
                if (subModuleName == importModules[index]) {
                    int m_version_major = modules.at("version_major").get<int>();
                    int m_version_minor = modules.at("version_minor").get<int>();
                    std::unordered_map<std::string, std::vector<NidFuncTable>> libName2FuncTableMap;
                    for (auto& libraries : modules["libraries"]) {
                        std::string libName = libraries["name"].get<std::string>();
                        if (libName2FuncTableMap.find(libName) == libName2FuncTableMap.end()) {
                            libName2FuncTableMap.emplace(
                                std::make_pair(libName, std::vector<NidFuncTable>()));
                        }
                        int libVersion = libraries["version"].get<int>();
                        for (auto& symbols : libraries["symbols"]) {
                            std::string encoded_id = symbols["encoded_id"].get<std::string>();
                            std::string hex_id = symbols["hex_id"].get<std::string>();
                            std::string symName;
                            if (symbols["name"] != nullptr) {
                                symName = symbols["name"].get<std::string>();
                            } else {
                                symName = "Func_" + hex_id;
                            }

                            libName2FuncTableMap[libName].push_back(
                                NidFuncTable{encoded_id, hex_id, symName, libVersion,
                                             m_version_major, m_version_minor});
                        }
                    }

                    GenerateCodeFiles(libName2FuncTableMap, subModuleName);
                    bFound = true;
                }
            }
            if (!bFound) {
                printf("module can't be found %s\n", moduleName.c_str());
            }
        } else {
            printf("module file can't be found %s\n", moduleName.c_str());
        }
    }
}
int main(int argc, char* argv[]) {
    std::filesystem::path genFolder(MODULE_DIR);
    if (!std::filesystem::exists(genFolder)) {
        std::filesystem::create_directories(genFolder);
    }

    std::vector<std::string> modules_to_generate;
    modules_to_generate.push_back(std::string("libSceGnmDriver"));
    modules_to_generate.push_back(std::string("libScePad"));
    modules_to_generate.push_back(std::string("libSceVideoOut"));
    modules_to_generate.push_back(std::string("libkernel"));
    modules_to_generate.push_back(std::string("libSceSystemService"));
    modules_to_generate.push_back(std::string("libSceUserService"));
    modules_to_generate.push_back(std::string("libSceCommonDialog"));
    modules_to_generate.push_back(std::string("libSceMsgDialog"));
    modules_to_generate.push_back(std::string("libSceAudioOut"));
    modules_to_generate.push_back(std::string("libSceAudioIn"));
    modules_to_generate.push_back(std::string("libSceNet"));
    modules_to_generate.push_back(std::string("libSceNetCtl"));
    modules_to_generate.push_back(std::string("libSceSsl"));
    modules_to_generate.push_back(std::string("libSceHttp"));
    modules_to_generate.push_back(std::string("libSceSaveData"));
    modules_to_generate.push_back(std::string("libSceSysmodule"));
    modules_to_generate.push_back(std::string("libSceSaveDataDialog"));
    modules_to_generate.push_back(std::string("libSceNpManager"));
    modules_to_generate.push_back(std::string("libSceNpTrophy"));
    modules_to_generate.push_back(std::string("libSceScreenShot"));
    modules_to_generate.push_back(std::string("libSceLibcInternal"));
    modules_to_generate.push_back(std::string("libSceRtc"));
    modules_to_generate.push_back(std::string("libSceGameLiveStreaming"));
    modules_to_generate.push_back(std::string("libSceSharePlay"));
    modules_to_generate.push_back(std::string("libSceRemoteplay"));
    modules_to_generate.push_back(std::string("libSceIme"));
    modules_to_generate.push_back(std::string("libSceVideodec"));
    modules_to_generate.push_back(std::string("libSceCompanionHttpd"));
    modules_to_generate.push_back(std::string("libSceCamera"));
    GetSymbolsFromLibDoc(modules_to_generate);

    return 0;
}
