// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/camera/camera.h"

namespace Libraries::Camera {

s32 PS4_SYSV_ABI module_start() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI module_stop() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAccGetData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAudioClose() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAudioGetData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAudioGetData2() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAudioOpen() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraAudioReset() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraChangeAppModuleState() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraClose() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraCloseByHandle() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraDeviceOpen() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetAttribute() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetAutoExposureGain() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetAutoWhiteBalance() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetCalibData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetCalibDataFromDevice() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetCalibrationData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetConfig() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetContrast() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDefectivePixelCancellation() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDeviceConfig() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDeviceConfigWithoutHandle() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDeviceID() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDeviceIDWithoutOpen() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetDeviceInfo() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetExposureGain() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetFrameData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetGamma() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetHue() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetLensCorrection() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetMmapConnectedCount() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetProductInfo() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetRegister() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetRegistryInfo() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetSaturation() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetSharpness() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetVrCaptureInfo() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraGetWhiteBalance() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraInitializeRegistryCalibData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraIsAttached() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraIsConfigChangeDone() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraIsValidFrameData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraOpen() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraOpenByModuleId() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraRemoveAppModuleFocus() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetAppModuleFocus() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetAttribute() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetAttributeInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetAutoExposureGain() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetAutoWhiteBalance() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetCalibData() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetConfig() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetConfigInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetContrast() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetDebugStop() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetDefectivePixelCancellation() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetDefectivePixelCancellationInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetExposureGain() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetForceActivate() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetGamma() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetHue() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetLensCorrection() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetLensCorrectionInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetProcessFocus() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetProcessFocusByHandle() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetRegister() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetSaturation() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetSharpness() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetTrackerMode() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetUacModeInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetVideoSync() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetVideoSyncInternal() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraSetWhiteBalance() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraStart() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraStartByHandle() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraStop() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceCameraStopByHandle() {
    LOG_ERROR(Lib_Camera, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("BaOKcng8g88", "libSceMbus", 1, "libSceCamera", module_start);
    LIB_FUNCTION("KpDMrPHvt3Q", "libSceMbus", 1, "libSceCamera", module_stop);
    LIB_FUNCTION("QhjrPkRPUZQ", "libSceCamera", 1, "libSceCamera", sceCameraAccGetData);
    LIB_FUNCTION("UFonL7xopFM", "libSceCamera", 1, "libSceCamera", sceCameraAudioClose);
    LIB_FUNCTION("fkZE7Hup2ro", "libSceCamera", 1, "libSceCamera", sceCameraAudioGetData);
    LIB_FUNCTION("hftC5A1C8OQ", "libSceCamera", 1, "libSceCamera", sceCameraAudioGetData2);
    LIB_FUNCTION("DhqqFiBU+6g", "libSceCamera", 1, "libSceCamera", sceCameraAudioOpen);
    LIB_FUNCTION("wyU98EXAYxU", "libSceCamera", 1, "libSceCamera", sceCameraAudioReset);
    LIB_FUNCTION("Y0pCDajzkVQ", "libSceCamera", 1, "libSceCamera", sceCameraChangeAppModuleState);
    LIB_FUNCTION("OMS9LlcrvBo", "libSceCamera", 1, "libSceCamera", sceCameraClose);
    LIB_FUNCTION("ztqH5qNTpTk", "libSceCamera", 1, "libSceCamera", sceCameraCloseByHandle);
    LIB_FUNCTION("nBH6i2s4Glc", "libSceCamera", 1, "libSceCamera", sceCameraDeviceOpen);
    LIB_FUNCTION("0btIPD5hg5A", "libSceCamera", 1, "libSceCamera", sceCameraGetAttribute);
    LIB_FUNCTION("oEi6vM-3E2c", "libSceCamera", 1, "libSceCamera", sceCameraGetAutoExposureGain);
    LIB_FUNCTION("qTPRMh4eY60", "libSceCamera", 1, "libSceCamera", sceCameraGetAutoWhiteBalance);
    LIB_FUNCTION("hHA1frlMxYE", "libSceCamera", 1, "libSceCamera", sceCameraGetCalibData);
    LIB_FUNCTION("5Oie5RArfWs", "libSceCamera", 1, "libSceCamera",
                 sceCameraGetCalibDataFromDevice);
    LIB_FUNCTION("RHYJ7GKOSMg", "libSceCamera", 1, "libSceCamera", sceCameraGetCalibrationData);
    LIB_FUNCTION("ZaqmGEtYuL0", "libSceCamera", 1, "libSceCamera", sceCameraGetConfig);
    LIB_FUNCTION("a5xFueMZIMs", "libSceCamera", 1, "libSceCamera", sceCameraGetContrast);
    LIB_FUNCTION("tslCukqFE+E", "libSceCamera", 1, "libSceCamera",
                 sceCameraGetDefectivePixelCancellation);
    LIB_FUNCTION("DSOLCrc3Kh8", "libSceCamera", 1, "libSceCamera", sceCameraGetDeviceConfig);
    LIB_FUNCTION("n+rFeP1XXyM", "libSceCamera", 1, "libSceCamera",
                 sceCameraGetDeviceConfigWithoutHandle);
    LIB_FUNCTION("jTJCdyv9GLU", "libSceCamera", 1, "libSceCamera", sceCameraGetDeviceID);
    LIB_FUNCTION("-H3UwGQvNZI", "libSceCamera", 1, "libSceCamera",
                 sceCameraGetDeviceIDWithoutOpen);
    LIB_FUNCTION("WZpxnSAM-ds", "libSceCamera", 1, "libSceCamera", sceCameraGetDeviceInfo);
    LIB_FUNCTION("ObIste7hqdk", "libSceCamera", 1, "libSceCamera", sceCameraGetExposureGain);
    LIB_FUNCTION("mxgMmR+1Kr0", "libSceCamera", 1, "libSceCamera", sceCameraGetFrameData);
    LIB_FUNCTION("WVox2rwGuSc", "libSceCamera", 1, "libSceCamera", sceCameraGetGamma);
    LIB_FUNCTION("zrIUDKZx0iE", "libSceCamera", 1, "libSceCamera", sceCameraGetHue);
    LIB_FUNCTION("XqYRHc4aw3w", "libSceCamera", 1, "libSceCamera", sceCameraGetLensCorrection);
    LIB_FUNCTION("B260o9pSzM8", "libSceCamera", 1, "libSceCamera", sceCameraGetMmapConnectedCount);
    LIB_FUNCTION("ULxbwqiYYuU", "libSceCamera", 1, "libSceCamera", sceCameraGetProductInfo);
    LIB_FUNCTION("olojYZKYiYs", "libSceCamera", 1, "libSceCamera", sceCameraGetRegister);
    LIB_FUNCTION("hawKak+Auw4", "libSceCamera", 1, "libSceCamera", sceCameraGetRegistryInfo);
    LIB_FUNCTION("RTDOsWWqdME", "libSceCamera", 1, "libSceCamera", sceCameraGetSaturation);
    LIB_FUNCTION("c6Fp9M1EXXc", "libSceCamera", 1, "libSceCamera", sceCameraGetSharpness);
    LIB_FUNCTION("IAz2HgZQWzE", "libSceCamera", 1, "libSceCamera", sceCameraGetVrCaptureInfo);
    LIB_FUNCTION("HX5524E5tMY", "libSceCamera", 1, "libSceCamera", sceCameraGetWhiteBalance);
    LIB_FUNCTION("0wnf2a60FqI", "libSceCamera", 1, "libSceCamera",
                 sceCameraInitializeRegistryCalibData);
    LIB_FUNCTION("p6n3Npi3YY4", "libSceCamera", 1, "libSceCamera", sceCameraIsAttached);
    LIB_FUNCTION("wQfd7kfRZvo", "libSceCamera", 1, "libSceCamera", sceCameraIsConfigChangeDone);
    LIB_FUNCTION("U3BVwQl2R5Q", "libSceCamera", 1, "libSceCamera", sceCameraIsValidFrameData);
    LIB_FUNCTION("BHn83xrF92E", "libSceCamera", 1, "libSceCamera", sceCameraOpen);
    LIB_FUNCTION("eTywOSWsEiI", "libSceCamera", 1, "libSceCamera", sceCameraOpenByModuleId);
    LIB_FUNCTION("py8p6kZcHmA", "libSceCamera", 1, "libSceCamera", sceCameraRemoveAppModuleFocus);
    LIB_FUNCTION("j5isFVIlZLk", "libSceCamera", 1, "libSceCamera", sceCameraSetAppModuleFocus);
    LIB_FUNCTION("doPlf33ab-U", "libSceCamera", 1, "libSceCamera", sceCameraSetAttribute);
    LIB_FUNCTION("96F7zp1Xo+k", "libSceCamera", 1, "libSceCamera", sceCameraSetAttributeInternal);
    LIB_FUNCTION("yfSdswDaElo", "libSceCamera", 1, "libSceCamera", sceCameraSetAutoExposureGain);
    LIB_FUNCTION("zIKL4kZleuc", "libSceCamera", 1, "libSceCamera", sceCameraSetAutoWhiteBalance);
    LIB_FUNCTION("LEMk5cTHKEA", "libSceCamera", 1, "libSceCamera", sceCameraSetCalibData);
    LIB_FUNCTION("VQ+5kAqsE2Q", "libSceCamera", 1, "libSceCamera", sceCameraSetConfig);
    LIB_FUNCTION("9+SNhbctk64", "libSceCamera", 1, "libSceCamera", sceCameraSetConfigInternal);
    LIB_FUNCTION("3i5MEzrC1pg", "libSceCamera", 1, "libSceCamera", sceCameraSetContrast);
    LIB_FUNCTION("vejouEusC7g", "libSceCamera", 1, "libSceCamera", sceCameraSetDebugStop);
    LIB_FUNCTION("jMv40y2A23g", "libSceCamera", 1, "libSceCamera",
                 sceCameraSetDefectivePixelCancellation);
    LIB_FUNCTION("vER3cIMBHqI", "libSceCamera", 1, "libSceCamera",
                 sceCameraSetDefectivePixelCancellationInternal);
    LIB_FUNCTION("wgBMXJJA6K4", "libSceCamera", 1, "libSceCamera", sceCameraSetExposureGain);
    LIB_FUNCTION("jeTpU0MqKU0", "libSceCamera", 1, "libSceCamera", sceCameraSetForceActivate);
    LIB_FUNCTION("lhEIsHzB8r4", "libSceCamera", 1, "libSceCamera", sceCameraSetGamma);
    LIB_FUNCTION("QI8GVJUy2ZY", "libSceCamera", 1, "libSceCamera", sceCameraSetHue);
    LIB_FUNCTION("K7W7H4ZRwbc", "libSceCamera", 1, "libSceCamera", sceCameraSetLensCorrection);
    LIB_FUNCTION("eHa3vhGu2rQ", "libSceCamera", 1, "libSceCamera",
                 sceCameraSetLensCorrectionInternal);
    LIB_FUNCTION("lS0tM6n+Q5E", "libSceCamera", 1, "libSceCamera", sceCameraSetProcessFocus);
    LIB_FUNCTION("NVITuK83Z7o", "libSceCamera", 1, "libSceCamera",
                 sceCameraSetProcessFocusByHandle);
    LIB_FUNCTION("8MjO05qk5hA", "libSceCamera", 1, "libSceCamera", sceCameraSetRegister);
    LIB_FUNCTION("bSKEi2PzzXI", "libSceCamera", 1, "libSceCamera", sceCameraSetSaturation);
    LIB_FUNCTION("P-7MVfzvpsM", "libSceCamera", 1, "libSceCamera", sceCameraSetSharpness);
    LIB_FUNCTION("3VJOpzKoIeM", "libSceCamera", 1, "libSceCamera", sceCameraSetTrackerMode);
    LIB_FUNCTION("nnR7KAIDPv8", "libSceCamera", 1, "libSceCamera", sceCameraSetUacModeInternal);
    LIB_FUNCTION("wpeyFwJ+UEI", "libSceCamera", 1, "libSceCamera", sceCameraSetVideoSync);
    LIB_FUNCTION("8WtmqmE4edw", "libSceCamera", 1, "libSceCamera", sceCameraSetVideoSyncInternal);
    LIB_FUNCTION("k3zPIcgFNv0", "libSceCamera", 1, "libSceCamera", sceCameraSetWhiteBalance);
    LIB_FUNCTION("9EpRYMy7rHU", "libSceCamera", 1, "libSceCamera", sceCameraStart);
    LIB_FUNCTION("cLxF1QtHch0", "libSceCamera", 1, "libSceCamera", sceCameraStartByHandle);
    LIB_FUNCTION("2G2C0nmd++M", "libSceCamera", 1, "libSceCamera", sceCameraStop);
    LIB_FUNCTION("+X1Kgnn3bzg", "libSceCamera", 1, "libSceCamera", sceCameraStopByHandle);
};

} // namespace Libraries::Camera