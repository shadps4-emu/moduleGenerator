// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Pad {

s32 PS4_SYSV_ABI scePadClose();
s32 PS4_SYSV_ABI scePadConnectPort();
s32 PS4_SYSV_ABI scePadDeviceClassGetExtendedInformation();
s32 PS4_SYSV_ABI scePadDeviceClassParseData();
s32 PS4_SYSV_ABI scePadDeviceOpen();
s32 PS4_SYSV_ABI scePadDisableVibration();
s32 PS4_SYSV_ABI scePadDisconnectDevice();
s32 PS4_SYSV_ABI scePadDisconnectPort();
s32 PS4_SYSV_ABI scePadEnableAutoDetect();
s32 PS4_SYSV_ABI scePadEnableExtensionPort();
s32 PS4_SYSV_ABI scePadEnableSpecificDeviceClass();
s32 PS4_SYSV_ABI scePadEnableUsbConnection();
s32 PS4_SYSV_ABI scePadGetBluetoothAddress();
s32 PS4_SYSV_ABI scePadGetCapability();
s32 PS4_SYSV_ABI scePadGetControllerInformation();
s32 PS4_SYSV_ABI scePadGetDataInternal();
s32 PS4_SYSV_ABI scePadGetDeviceId();
s32 PS4_SYSV_ABI scePadGetDeviceInfo();
s32 PS4_SYSV_ABI scePadGetExtControllerInformation();
s32 PS4_SYSV_ABI scePadGetExtensionUnitInfo();
s32 PS4_SYSV_ABI scePadGetFeatureReport();
s32 PS4_SYSV_ABI scePadGetHandle();
s32 PS4_SYSV_ABI scePadGetIdleCount();
s32 PS4_SYSV_ABI scePadGetInfo();
s32 PS4_SYSV_ABI scePadGetInfoByPortType();
s32 PS4_SYSV_ABI scePadGetLicenseControllerInformation();
s32 PS4_SYSV_ABI scePadGetMotionSensorPosition();
s32 PS4_SYSV_ABI scePadGetMotionTimerUnit();
s32 PS4_SYSV_ABI scePadGetSphereRadius();
s32 PS4_SYSV_ABI scePadGetVersionInfo();
s32 PS4_SYSV_ABI scePadInit();
s32 PS4_SYSV_ABI scePadIsBlasterConnected();
s32 PS4_SYSV_ABI scePadIsDS4Connected();
s32 PS4_SYSV_ABI scePadIsLightBarBaseBrightnessControllable();
s32 PS4_SYSV_ABI scePadIsMoveConnected();
s32 PS4_SYSV_ABI scePadIsMoveReproductionModel();
s32 PS4_SYSV_ABI scePadIsValidHandle();
s32 PS4_SYSV_ABI scePadMbusInit();
s32 PS4_SYSV_ABI scePadMbusTerm();
s32 PS4_SYSV_ABI scePadOpen();
s32 PS4_SYSV_ABI scePadOpenExt();
s32 PS4_SYSV_ABI scePadOpenExt2();
s32 PS4_SYSV_ABI scePadOutputReport();
s32 PS4_SYSV_ABI scePadRead();
s32 PS4_SYSV_ABI scePadReadBlasterForTracker();
s32 PS4_SYSV_ABI scePadReadExt();
s32 PS4_SYSV_ABI scePadReadForTracker();
s32 PS4_SYSV_ABI scePadReadHistory();
s32 PS4_SYSV_ABI scePadReadState();
s32 PS4_SYSV_ABI scePadReadStateExt();
s32 PS4_SYSV_ABI scePadResetLightBar();
s32 PS4_SYSV_ABI scePadResetLightBarAll();
s32 PS4_SYSV_ABI scePadResetLightBarAllByPortType();
s32 PS4_SYSV_ABI scePadResetOrientation();
s32 PS4_SYSV_ABI scePadResetOrientationForTracker();
s32 PS4_SYSV_ABI scePadSetAngularVelocityDeadbandState();
s32 PS4_SYSV_ABI scePadSetAutoPowerOffCount();
s32 PS4_SYSV_ABI scePadSetButtonRemappingInfo();
s32 PS4_SYSV_ABI scePadSetConnection();
s32 PS4_SYSV_ABI scePadSetExtensionReport();
s32 PS4_SYSV_ABI scePadSetFeatureReport();
s32 PS4_SYSV_ABI scePadSetForceIntercepted();
s32 PS4_SYSV_ABI scePadSetLightBar();
s32 PS4_SYSV_ABI scePadSetLightBarBaseBrightness();
s32 PS4_SYSV_ABI scePadSetLightBarBlinking();
s32 PS4_SYSV_ABI scePadSetLightBarForTracker();
s32 PS4_SYSV_ABI scePadSetLoginUserNumber();
s32 PS4_SYSV_ABI scePadSetMotionSensorState();
s32 PS4_SYSV_ABI scePadSetProcessFocus();
s32 PS4_SYSV_ABI scePadSetProcessPrivilege();
s32 PS4_SYSV_ABI scePadSetProcessPrivilegeOfButtonRemapping();
s32 PS4_SYSV_ABI scePadSetShareButtonMaskForRemotePlay();
s32 PS4_SYSV_ABI scePadSetTiltCorrectionState();
s32 PS4_SYSV_ABI scePadSetUserColor();
s32 PS4_SYSV_ABI scePadSetVibration();
s32 PS4_SYSV_ABI scePadSetVibrationForce();
s32 PS4_SYSV_ABI scePadSetVrTrackingMode();
s32 PS4_SYSV_ABI scePadShareOutputData();
s32 PS4_SYSV_ABI scePadStartRecording();
s32 PS4_SYSV_ABI scePadStopRecording();
s32 PS4_SYSV_ABI scePadSwitchConnection();
s32 PS4_SYSV_ABI scePadVertualDeviceAddDevice();
s32 PS4_SYSV_ABI scePadVirtualDeviceAddDevice();
s32 PS4_SYSV_ABI scePadVirtualDeviceDeleteDevice();
s32 PS4_SYSV_ABI scePadVirtualDeviceDisableButtonRemapping();
s32 PS4_SYSV_ABI scePadVirtualDeviceGetRemoteSetting();
s32 PS4_SYSV_ABI scePadVirtualDeviceInsertData();
s32 PS4_SYSV_ABI Func_28B998C7D8A3DA1D();
s32 PS4_SYSV_ABI Func_298D21481F94C9FA();
s32 PS4_SYSV_ABI Func_51E514BCD3A05CA5();
s32 PS4_SYSV_ABI Func_89C9237E393DA243();
s32 PS4_SYSV_ABI Func_EF103E845B6F0420();

void RegisterlibScePad(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Pad