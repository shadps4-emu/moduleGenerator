// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/videodec/videodec.h"

namespace Libraries::Videodec {

int PS4_SYSV_ABI sceVideodecCreateDecoder() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecDecode() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecDeleteDecoder() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecFlush() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecMapMemory() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecQueryResourceInfo() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceVideodecReset() {
    LOG_ERROR(Lib_Videodec, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterlibSceVideodec(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("qkgRiwHyheU", "libSceVideodec", 1, "libSceVideodec", 1, 1,
                 sceVideodecCreateDecoder);
    LIB_FUNCTION("q0W5GJMovMs", "libSceVideodec", 1, "libSceVideodec", 1, 1, sceVideodecDecode);
    LIB_FUNCTION("U0kpGF1cl90", "libSceVideodec", 1, "libSceVideodec", 1, 1,
                 sceVideodecDeleteDecoder);
    LIB_FUNCTION("jeigLlKdp5I", "libSceVideodec", 1, "libSceVideodec", 1, 1, sceVideodecFlush);
    LIB_FUNCTION("kg+lH0V61hM", "libSceVideodec", 1, "libSceVideodec", 1, 1, sceVideodecMapMemory);
    LIB_FUNCTION("leCAscipfFY", "libSceVideodec", 1, "libSceVideodec", 1, 1,
                 sceVideodecQueryResourceInfo);
    LIB_FUNCTION("f8AgDv-1X8A", "libSceVideodec", 1, "libSceVideodec", 1, 1, sceVideodecReset);
};

} // namespace Libraries::Videodec