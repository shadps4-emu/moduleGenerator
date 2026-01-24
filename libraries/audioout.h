// SPDX-FileCopyrightText: Copyright 2024-2026 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::AudioOut {

s32 PS4_SYSV_ABI sceAudioOutDeviceIdOpen();
s32 PS4_SYSV_ABI sceAudioDeviceControlGet();
s32 PS4_SYSV_ABI sceAudioDeviceControlSet();
s32 PS4_SYSV_ABI sceAudioOutA3dControl();
s32 PS4_SYSV_ABI sceAudioOutA3dExit();
s32 PS4_SYSV_ABI sceAudioOutA3dInit();
s32 PS4_SYSV_ABI sceAudioOutAttachToApplicationByPid();
s32 PS4_SYSV_ABI sceAudioOutChangeAppModuleState();
s32 PS4_SYSV_ABI sceAudioOutClose();
s32 PS4_SYSV_ABI sceAudioOutDetachFromApplicationByPid();
s32 PS4_SYSV_ABI sceAudioOutExConfigureOutputMode();
s32 PS4_SYSV_ABI sceAudioOutExGetSystemInfo();
s32 PS4_SYSV_ABI sceAudioOutExPtClose();
s32 PS4_SYSV_ABI sceAudioOutExPtGetLastOutputTime();
s32 PS4_SYSV_ABI sceAudioOutExPtOpen();
s32 PS4_SYSV_ABI sceAudioOutExSystemInfoIsSupportedAudioOutExMode();
s32 PS4_SYSV_ABI sceAudioOutGetFocusEnablePid();
s32 PS4_SYSV_ABI sceAudioOutGetHandleStatusInfo();
s32 PS4_SYSV_ABI sceAudioOutGetInfo();
s32 PS4_SYSV_ABI sceAudioOutGetInfoOpenNum();
s32 PS4_SYSV_ABI sceAudioOutGetLastOutputTime();
s32 PS4_SYSV_ABI sceAudioOutGetPortState();
s32 PS4_SYSV_ABI sceAudioOutGetSimulatedBusUsableStatusByBusType();
s32 PS4_SYSV_ABI sceAudioOutGetSimulatedHandleStatusInfo();
s32 PS4_SYSV_ABI sceAudioOutGetSimulatedHandleStatusInfo2();
s32 PS4_SYSV_ABI sceAudioOutGetSparkVss();
s32 PS4_SYSV_ABI sceAudioOutGetSystemState();
s32 PS4_SYSV_ABI sceAudioOutInit();
s32 PS4_SYSV_ABI sceAudioOutInitIpmiGetSession();
s32 PS4_SYSV_ABI sceAudioOutMasteringGetState();
s32 PS4_SYSV_ABI sceAudioOutMasteringInit();
s32 PS4_SYSV_ABI sceAudioOutMasteringSetParam();
s32 PS4_SYSV_ABI sceAudioOutMasteringTerm();
s32 PS4_SYSV_ABI sceAudioOutMbusInit();
s32 PS4_SYSV_ABI sceAudioOutOpen();
s32 PS4_SYSV_ABI sceAudioOutOpenEx();
s32 PS4_SYSV_ABI sceAudioOutOutput();
s32 PS4_SYSV_ABI sceAudioOutOutputs();
s32 PS4_SYSV_ABI sceAudioOutPtClose();
s32 PS4_SYSV_ABI sceAudioOutPtGetLastOutputTime();
s32 PS4_SYSV_ABI sceAudioOutPtOpen();
s32 PS4_SYSV_ABI sceAudioOutSetConnections();
s32 PS4_SYSV_ABI sceAudioOutSetConnectionsForUser();
s32 PS4_SYSV_ABI sceAudioOutSetDevConnection();
s32 PS4_SYSV_ABI sceAudioOutSetHeadphoneOutMode();
s32 PS4_SYSV_ABI sceAudioOutSetJediJackVolume();
s32 PS4_SYSV_ABI sceAudioOutSetJediSpkVolume();
s32 PS4_SYSV_ABI sceAudioOutSetMainOutput();
s32 PS4_SYSV_ABI sceAudioOutSetMixLevelPadSpk();
s32 PS4_SYSV_ABI sceAudioOutSetMorpheusParam();
s32 PS4_SYSV_ABI sceAudioOutSetMorpheusWorkingMode();
s32 PS4_SYSV_ABI sceAudioOutSetPortConnections();
s32 PS4_SYSV_ABI sceAudioOutSetPortStatuses();
s32 PS4_SYSV_ABI sceAudioOutSetRecMode();
s32 PS4_SYSV_ABI sceAudioOutSetSparkParam();
s32 PS4_SYSV_ABI sceAudioOutSetUsbVolume();
s32 PS4_SYSV_ABI sceAudioOutSetVolume();
s32 PS4_SYSV_ABI sceAudioOutSetVolumeDown();
s32 PS4_SYSV_ABI sceAudioOutStartAuxBroadcast();
s32 PS4_SYSV_ABI sceAudioOutStartSharePlay();
s32 PS4_SYSV_ABI sceAudioOutStopAuxBroadcast();
s32 PS4_SYSV_ABI sceAudioOutStopSharePlay();
s32 PS4_SYSV_ABI sceAudioOutSuspendResume();
s32 PS4_SYSV_ABI sceAudioOutSysConfigureOutputMode();
s32 PS4_SYSV_ABI sceAudioOutSysGetHdmiMonitorInfo();
s32 PS4_SYSV_ABI sceAudioOutSysGetSystemInfo();
s32 PS4_SYSV_ABI sceAudioOutSysHdmiMonitorInfoIsSupportedAudioOutMode();
s32 PS4_SYSV_ABI sceAudioOutSystemControlGet();
s32 PS4_SYSV_ABI sceAudioOutSystemControlSet();
s32 PS4_SYSV_ABI sceAudioOutSparkControlSetEqCoef();
s32 PS4_SYSV_ABI sceAudioOutSetSystemDebugState();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::AudioOut