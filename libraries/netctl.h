// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::NetCtl {

s32 PS4_SYSV_ABI sceNetCtlGetInfoV6();
s32 PS4_SYSV_ABI sceNetCtlGetResultV6();
s32 PS4_SYSV_ABI sceNetCtlGetStateV6();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallbackV6();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallbackV6();
s32 PS4_SYSV_ABI sceNetCtlCheckCallbackForNpToolkit();
s32 PS4_SYSV_ABI sceNetCtlClearEventForNpToolkit();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallbackForNpToolkit();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallbackForNpToolkit();
s32 PS4_SYSV_ABI sceNetCtlApAppInitWpaKey();
s32 PS4_SYSV_ABI sceNetCtlApAppInitWpaKeyForQa();
s32 PS4_SYSV_ABI sceNetCtlApAppStartWithRetry();
s32 PS4_SYSV_ABI sceNetCtlApAppStartWithRetryPid();
s32 PS4_SYSV_ABI sceNetCtlApRestart();
s32 PS4_SYSV_ABI sceNetCtlApRpCheckCallback();
s32 PS4_SYSV_ABI sceNetCtlApRpClearEvent();
s32 PS4_SYSV_ABI sceNetCtlApRpGetInfo();
s32 PS4_SYSV_ABI sceNetCtlApRpGetResult();
s32 PS4_SYSV_ABI sceNetCtlApRpGetState();
s32 PS4_SYSV_ABI sceNetCtlApRpRegisterCallback();
s32 PS4_SYSV_ABI sceNetCtlApRpStart();
s32 PS4_SYSV_ABI sceNetCtlApRpStartConf();
s32 PS4_SYSV_ABI sceNetCtlApRpStartWithRetry();
s32 PS4_SYSV_ABI sceNetCtlApRpStop();
s32 PS4_SYSV_ABI sceNetCtlApRpUnregisterCallback();
s32 PS4_SYSV_ABI sceNetCtlApCheckCallback();
s32 PS4_SYSV_ABI sceNetCtlApClearEvent();
s32 PS4_SYSV_ABI sceNetCtlApGetConnectInfo();
s32 PS4_SYSV_ABI sceNetCtlApGetInfo();
s32 PS4_SYSV_ABI sceNetCtlApGetResult();
s32 PS4_SYSV_ABI sceNetCtlApGetState();
s32 PS4_SYSV_ABI sceNetCtlApInit();
s32 PS4_SYSV_ABI sceNetCtlApRegisterCallback();
s32 PS4_SYSV_ABI sceNetCtlApStop();
s32 PS4_SYSV_ABI sceNetCtlApTerm();
s32 PS4_SYSV_ABI sceNetCtlApUnregisterCallback();
s32 PS4_SYSV_ABI sceNetCtlCheckCallback();
s32 PS4_SYSV_ABI sceNetCtlCheckCallbackForLibIpcInt();
s32 PS4_SYSV_ABI sceNetCtlClearEventForLibIpcInt();
s32 PS4_SYSV_ABI sceNetCtlClearEventIpcInt();
s32 PS4_SYSV_ABI sceNetCtlConnectConfIpcInt();
s32 PS4_SYSV_ABI sceNetCtlConnectIpcInt();
s32 PS4_SYSV_ABI sceNetCtlConnectWithRetryIpcInt();
s32 PS4_SYSV_ABI sceNetCtlDisableBandwidthManagementIpcInt();
s32 PS4_SYSV_ABI sceNetCtlDisconnectIpcInt();
s32 PS4_SYSV_ABI sceNetCtlEnableBandwidthManagementIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetBandwidthInfoIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetEtherLinkMode();
s32 PS4_SYSV_ABI sceNetCtlGetIfStat();
s32 PS4_SYSV_ABI sceNetCtlGetInfo();
s32 PS4_SYSV_ABI sceNetCtlGetInfoIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetInfoV6IpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetNatInfo();
s32 PS4_SYSV_ABI sceNetCtlGetNatInfoIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetNetEvConfigInfoIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetResult();
s32 PS4_SYSV_ABI sceNetCtlGetResultIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetResultV6IpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetScanInfoBssidForSsidListScanIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetScanInfoBssidIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetScanInfoByBssidIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetScanInfoForSsidListScanIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetScanInfoForSsidScanIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetState();
s32 PS4_SYSV_ABI sceNetCtlGetState2IpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetStateIpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetStateV6IpcInt();
s32 PS4_SYSV_ABI sceNetCtlGetWifiType();
s32 PS4_SYSV_ABI sceNetCtlInit();
s32 PS4_SYSV_ABI sceNetCtlIsBandwidthManagementEnabledIpcInt();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallback();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallbackForLibIpcInt();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallbackIpcInt();
s32 PS4_SYSV_ABI sceNetCtlRegisterCallbackV6IpcInt();
s32 PS4_SYSV_ABI sceNetCtlScanIpcInt();
s32 PS4_SYSV_ABI sceNetCtlSetErrorNotificationEnabledIpcInt();
s32 PS4_SYSV_ABI sceNetCtlSetStunWithPaddingFlagIpcInt();
s32 PS4_SYSV_ABI sceNetCtlTerm();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallback();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallbackForLibIpcInt();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallbackIpcInt();
s32 PS4_SYSV_ABI sceNetCtlUnregisterCallbackV6IpcInt();
s32 PS4_SYSV_ABI sceNetCtlUnsetStunWithPaddingFlagIpcInt();
s32 PS4_SYSV_ABI Func_D8DCB6973537A3DC();
s32 PS4_SYSV_ABI sceNetBweCheckCallbackIpcInt();
s32 PS4_SYSV_ABI sceNetBweClearEventIpcInt();
s32 PS4_SYSV_ABI sceNetBweFinishInternetConnectionTestIpcInt();
s32 PS4_SYSV_ABI sceNetBweGetInfoIpcInt();
s32 PS4_SYSV_ABI sceNetBweRegisterCallbackIpcInt();
s32 PS4_SYSV_ABI sceNetBweSetInternetConnectionTestResultIpcInt();
s32 PS4_SYSV_ABI sceNetBweStartInternetConnectionTestBandwidthTestIpcInt();
s32 PS4_SYSV_ABI sceNetBweStartInternetConnectionTestIpcInt();
s32 PS4_SYSV_ABI sceNetBweUnregisterCallbackIpcInt();

void RegisterlibSceNetCtl(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::NetCtl