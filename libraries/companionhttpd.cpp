// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/companionhttpd/companionhttpd.h"

namespace Libraries::CompanionHttpd {

s32 PS4_SYSV_ABI sceCompanionHttpdAddHeader() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdGet2ndScreenStatus() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdGetEvent() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdGetUserId() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdInitialize() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdInitialize2() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdOptParamInitialize() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdRegisterRequestBodyReceptionCallback() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdRegisterRequestCallback() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdRegisterRequestCallback2() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdSetBody() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdSetStatus() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdStart() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdStop() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdTerminate() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdUnregisterRequestBodyReceptionCallback() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCompanionHttpdUnregisterRequestCallback() {
    LOG_ERROR(Lib_CompanionHttpd, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("8pWltDG7h6A", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdAddHeader);
    LIB_FUNCTION("B-QBMeFdNgY", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdGet2ndScreenStatus);
    LIB_FUNCTION("Vku4big+IYM", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdGetEvent);
    LIB_FUNCTION("0SySxcuVNG0", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdGetUserId);
    LIB_FUNCTION("ykNpWs3ktLY", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdInitialize);
    LIB_FUNCTION("OA6FbORefbo", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdInitialize2);
    LIB_FUNCTION("r-2-a0c7Kfc", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdOptParamInitialize);
    LIB_FUNCTION("fHNmij7kAUM", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdRegisterRequestBodyReceptionCallback);
    LIB_FUNCTION("OaWw+IVEdbI", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdRegisterRequestCallback);
    LIB_FUNCTION("-0c9TCTwnGs", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdRegisterRequestCallback2);
    LIB_FUNCTION("h3OvVxzX4qM", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdSetBody);
    LIB_FUNCTION("w7oz0AWHpT4", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdSetStatus);
    LIB_FUNCTION("k7F0FcDM-Xc", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdStart);
    LIB_FUNCTION("0SCgzfVQHpo", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdStop);
    LIB_FUNCTION("+-du9tWgE9s", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdTerminate);
    LIB_FUNCTION("ZSHiUfYK+QI", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdUnregisterRequestBodyReceptionCallback);
    LIB_FUNCTION("xweOi2QT-BE", "libSceCompanionHttpd", 1, "libSceCompanionHttpd", 1, 1,
                 sceCompanionHttpdUnregisterRequestCallback);
};

} // namespace Libraries::CompanionHttpd