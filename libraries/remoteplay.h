// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Remoteplay {

s32 PS4_SYSV_ABI sceRemoteplayApprove();
s32 PS4_SYSV_ABI sceRemoteplayChangeEnterKey();
s32 PS4_SYSV_ABI sceRemoteplayClearAllRegistData();
s32 PS4_SYSV_ABI sceRemoteplayClearConnectHistory();
s32 PS4_SYSV_ABI sceRemoteplayConfirmDeviceRegist();
s32 PS4_SYSV_ABI sceRemoteplayDisconnect();
s32 PS4_SYSV_ABI sceRemoteplayGeneratePinCode();
s32 PS4_SYSV_ABI sceRemoteplayGetApMode();
s32 PS4_SYSV_ABI sceRemoteplayGetConnectHistory();
s32 PS4_SYSV_ABI sceRemoteplayGetConnectionStatus();
s32 PS4_SYSV_ABI sceRemoteplayGetConnectUserId();
s32 PS4_SYSV_ABI sceRemoteplayGetMbusDeviceInfo();
s32 PS4_SYSV_ABI sceRemoteplayGetOperationStatus();
s32 PS4_SYSV_ABI sceRemoteplayGetRemoteplayStatus();
s32 PS4_SYSV_ABI sceRemoteplayGetRpMode();
s32 PS4_SYSV_ABI sceRemoteplayImeClose();
s32 PS4_SYSV_ABI sceRemoteplayImeFilterResult();
s32 PS4_SYSV_ABI sceRemoteplayImeGetEvent();
s32 PS4_SYSV_ABI sceRemoteplayImeNotify();
s32 PS4_SYSV_ABI sceRemoteplayImeNotifyEventResult();
s32 PS4_SYSV_ABI sceRemoteplayImeOpen();
s32 PS4_SYSV_ABI sceRemoteplayImeSetCaret();
s32 PS4_SYSV_ABI sceRemoteplayImeSetText();
s32 PS4_SYSV_ABI sceRemoteplayInitialize();
s32 PS4_SYSV_ABI sceRemoteplayIsRemoteOskReady();
s32 PS4_SYSV_ABI sceRemoteplayIsRemotePlaying();
s32 PS4_SYSV_ABI sceRemoteplayNotifyMbusDeviceRegistComplete();
s32 PS4_SYSV_ABI sceRemoteplayNotifyNpPushWakeup();
s32 PS4_SYSV_ABI sceRemoteplayNotifyPinCodeError();
s32 PS4_SYSV_ABI sceRemoteplayNotifyUserDelete();
s32 PS4_SYSV_ABI sceRemoteplayPrintAllRegistData();
s32 PS4_SYSV_ABI sceRemoteplayProhibit();
s32 PS4_SYSV_ABI sceRemoteplayProhibitStreaming();
s32 PS4_SYSV_ABI sceRemoteplayServerLock();
s32 PS4_SYSV_ABI sceRemoteplayServerUnLock();
s32 PS4_SYSV_ABI sceRemoteplaySetApMode();
s32 PS4_SYSV_ABI sceRemoteplaySetLogLevel();
s32 PS4_SYSV_ABI sceRemoteplaySetProhibition();
s32 PS4_SYSV_ABI sceRemoteplaySetProhibitionForVsh();
s32 PS4_SYSV_ABI sceRemoteplaySetRpMode();
s32 PS4_SYSV_ABI sceRemoteplayTerminate();
s32 PS4_SYSV_ABI Func_1D5EE365ED5FADB3();

void RegisterlibSceRemoteplay(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Remoteplay