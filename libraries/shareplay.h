// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::SharePlay {

s32 PS4_SYSV_ABI sceSharePlayCrashDaemon();
s32 PS4_SYSV_ABI sceSharePlayGetCurrentConnectionInfo();
s32 PS4_SYSV_ABI sceSharePlayGetCurrentConnectionInfoA();
s32 PS4_SYSV_ABI sceSharePlayGetCurrentInfo();
s32 PS4_SYSV_ABI sceSharePlayGetEvent();
s32 PS4_SYSV_ABI sceSharePlayInitialize();
s32 PS4_SYSV_ABI sceSharePlayNotifyDialogOpen();
s32 PS4_SYSV_ABI sceSharePlayNotifyForceCloseForCdlg();
s32 PS4_SYSV_ABI sceSharePlayNotifyOpenQuickMenu();
s32 PS4_SYSV_ABI sceSharePlayResumeScreenForCdlg();
s32 PS4_SYSV_ABI sceSharePlayServerLock();
s32 PS4_SYSV_ABI sceSharePlayServerUnLock();
s32 PS4_SYSV_ABI sceSharePlaySetMode();
s32 PS4_SYSV_ABI sceSharePlaySetProhibition();
s32 PS4_SYSV_ABI sceSharePlaySetProhibitionModeWithAppId();
s32 PS4_SYSV_ABI sceSharePlayStartStandby();
s32 PS4_SYSV_ABI sceSharePlayStartStreaming();
s32 PS4_SYSV_ABI sceSharePlayStopStandby();
s32 PS4_SYSV_ABI sceSharePlayStopStreaming();
s32 PS4_SYSV_ABI sceSharePlayTerminate();
s32 PS4_SYSV_ABI Func_2E93C0EA6A6B67C4();
s32 PS4_SYSV_ABI Func_C1C236728D88E177();
s32 PS4_SYSV_ABI Func_E9E80C474781F115();
s32 PS4_SYSV_ABI Func_F3DD6199DA15ED44();

void RegisterlibSceSharePlay(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::SharePlay