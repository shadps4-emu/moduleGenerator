// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/sysmodule/sysmodule.h"

namespace Libraries::Sysmodule {

s32 PS4_SYSV_ABI sceSysmoduleGetModuleHandleInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleGetModuleInfoForUnwind() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleIsCalledFromSysModule() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleIsCameraPreloaded() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleIsLoaded() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleIsLoadedInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleLoadModule() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleLoadModuleByNameInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleLoadModuleInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleLoadModuleInternalWithArg() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleMapLibcForLibkernel() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmodulePreloadModuleForLibkernel() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleUnloadModule() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleByNameInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleInternal() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleInternalWithArg() {
    LOG_ERROR(Lib_Sysmodule, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("D8cuU4d72xM", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleGetModuleHandleInternal);
    LIB_FUNCTION("4fU5yvOkVG4", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleGetModuleInfoForUnwind);
    LIB_FUNCTION("ctfO7dQ7geg", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleIsCalledFromSysModule);
    LIB_FUNCTION("no6T3EfiS3E", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleIsCameraPreloaded);
    LIB_FUNCTION("fMP5NHUOaMk", "libSceSysmodule", 1, "libSceSysmodule", sceSysmoduleIsLoaded);
    LIB_FUNCTION("ynFKQ5bfGks", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleIsLoadedInternal);
    LIB_FUNCTION("g8cM39EUZ6o", "libSceSysmodule", 1, "libSceSysmodule", sceSysmoduleLoadModule);
    LIB_FUNCTION("CU8m+Qs+HN4", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleLoadModuleByNameInternal);
    LIB_FUNCTION("39iV5E1HoCk", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleLoadModuleInternal);
    LIB_FUNCTION("hHrGoGoNf+s", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleLoadModuleInternalWithArg);
    LIB_FUNCTION("lZ6RvVl0vo0", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleMapLibcForLibkernel);
    LIB_FUNCTION("DOO+zuW1lrE", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmodulePreloadModuleForLibkernel);
    LIB_FUNCTION("eR2bZFAAU0Q", "libSceSysmodule", 1, "libSceSysmodule", sceSysmoduleUnloadModule);
    LIB_FUNCTION("vpTHmA6Knvg", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleUnloadModuleByNameInternal);
    LIB_FUNCTION("vXZhrtJxkGc", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleUnloadModuleInternal);
    LIB_FUNCTION("aKa6YfBKZs4", "libSceSysmodule", 1, "libSceSysmodule",
                 sceSysmoduleUnloadModuleInternalWithArg);
};

} // namespace Libraries::Sysmodule