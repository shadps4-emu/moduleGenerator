// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::NpTrophy {

s32 PS4_SYSV_ABI sceNpTrophyAbortHandle();
s32 PS4_SYSV_ABI sceNpTrophyCaptureScreenshot();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophyDetails();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophyFlagArray();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophyGroupArray();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophyGroupDetails();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophySetInfo();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophySetInfoInGroup();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophySetVersion();
s32 PS4_SYSV_ABI sceNpTrophyConfigGetTrophyTitleDetails();
s32 PS4_SYSV_ABI sceNpTrophyConfigHasGroupFeature();
s32 PS4_SYSV_ABI sceNpTrophyCreateContext();
s32 PS4_SYSV_ABI sceNpTrophyCreateHandle();
s32 PS4_SYSV_ABI sceNpTrophyDestroyContext();
s32 PS4_SYSV_ABI sceNpTrophyDestroyHandle();
s32 PS4_SYSV_ABI sceNpTrophyGetGameIcon();
s32 PS4_SYSV_ABI sceNpTrophyGetGameInfo();
s32 PS4_SYSV_ABI sceNpTrophyGetGroupIcon();
s32 PS4_SYSV_ABI sceNpTrophyGetGroupInfo();
s32 PS4_SYSV_ABI sceNpTrophyGetTrophyIcon();
s32 PS4_SYSV_ABI sceNpTrophyGetTrophyInfo();
s32 PS4_SYSV_ABI sceNpTrophyGetTrophyUnlockState();
s32 PS4_SYSV_ABI sceNpTrophyGroupArrayGetNum();
s32 PS4_SYSV_ABI sceNpTrophyIntAbortHandle();
s32 PS4_SYSV_ABI sceNpTrophyIntCheckNetSyncTitles();
s32 PS4_SYSV_ABI sceNpTrophyIntCreateHandle();
s32 PS4_SYSV_ABI sceNpTrophyIntDestroyHandle();
s32 PS4_SYSV_ABI sceNpTrophyIntGetLocalTrophySummary();
s32 PS4_SYSV_ABI sceNpTrophyIntGetProgress();
s32 PS4_SYSV_ABI sceNpTrophyIntGetRunningTitle();
s32 PS4_SYSV_ABI sceNpTrophyIntGetRunningTitles();
s32 PS4_SYSV_ABI sceNpTrophyIntGetTrpIconByUri();
s32 PS4_SYSV_ABI sceNpTrophyIntNetSyncTitle();
s32 PS4_SYSV_ABI sceNpTrophyIntNetSyncTitles();
s32 PS4_SYSV_ABI sceNpTrophyNumInfoGetTotal();
s32 PS4_SYSV_ABI sceNpTrophyRegisterContext();
s32 PS4_SYSV_ABI sceNpTrophySetInfoGetTrophyFlagArray();
s32 PS4_SYSV_ABI sceNpTrophySetInfoGetTrophyNum();
s32 PS4_SYSV_ABI sceNpTrophyShowTrophyList();
s32 PS4_SYSV_ABI sceNpTrophySystemAbortHandle();
s32 PS4_SYSV_ABI sceNpTrophySystemBuildGroupIconUri();
s32 PS4_SYSV_ABI sceNpTrophySystemBuildNetTrophyIconUri();
s32 PS4_SYSV_ABI sceNpTrophySystemBuildTitleIconUri();
s32 PS4_SYSV_ABI sceNpTrophySystemBuildTrophyIconUri();
s32 PS4_SYSV_ABI sceNpTrophySystemCheckNetSyncTitles();
s32 PS4_SYSV_ABI sceNpTrophySystemCheckRecoveryRequired();
s32 PS4_SYSV_ABI sceNpTrophySystemCloseStorage();
s32 PS4_SYSV_ABI sceNpTrophySystemCreateContext();
s32 PS4_SYSV_ABI sceNpTrophySystemCreateHandle();
s32 PS4_SYSV_ABI sceNpTrophySystemDbgCtl();
s32 PS4_SYSV_ABI sceNpTrophySystemDebugLockTrophy();
s32 PS4_SYSV_ABI sceNpTrophySystemDebugUnlockTrophy();
s32 PS4_SYSV_ABI sceNpTrophySystemDestroyContext();
s32 PS4_SYSV_ABI sceNpTrophySystemDestroyHandle();
s32 PS4_SYSV_ABI sceNpTrophySystemDestroyTrophyConfig();
s32 PS4_SYSV_ABI sceNpTrophySystemGetDbgParam();
s32 PS4_SYSV_ABI sceNpTrophySystemGetDbgParamInt();
s32 PS4_SYSV_ABI sceNpTrophySystemGetGroupIcon();
s32 PS4_SYSV_ABI sceNpTrophySystemGetLocalTrophySummary();
s32 PS4_SYSV_ABI sceNpTrophySystemGetNextTitleFileEntryStatus();
s32 PS4_SYSV_ABI sceNpTrophySystemGetProgress();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTitleFileStatus();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTitleIcon();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTitleSyncStatus();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyConfig();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyData();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyGroupData();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyIcon();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyTitleData();
s32 PS4_SYSV_ABI sceNpTrophySystemGetTrophyTitleIds();
s32 PS4_SYSV_ABI sceNpTrophySystemGetUserFileInfo();
s32 PS4_SYSV_ABI sceNpTrophySystemGetUserFileStatus();
s32 PS4_SYSV_ABI sceNpTrophySystemIsServerAvailable();
s32 PS4_SYSV_ABI sceNpTrophySystemNetSyncTitle();
s32 PS4_SYSV_ABI sceNpTrophySystemNetSyncTitles();
s32 PS4_SYSV_ABI sceNpTrophySystemOpenStorage();
s32 PS4_SYSV_ABI sceNpTrophySystemPerformRecovery();
s32 PS4_SYSV_ABI sceNpTrophySystemRemoveAll();
s32 PS4_SYSV_ABI sceNpTrophySystemRemoveTitleData();
s32 PS4_SYSV_ABI sceNpTrophySystemRemoveUserData();
s32 PS4_SYSV_ABI sceNpTrophySystemSetDbgParam();
s32 PS4_SYSV_ABI sceNpTrophySystemSetDbgParamInt();
s32 PS4_SYSV_ABI sceNpTrophyUnlockTrophy();
s32 PS4_SYSV_ABI Func_149656DA81D41C59();
s32 PS4_SYSV_ABI Func_9F80071876FFA5F6();
s32 PS4_SYSV_ABI Func_F8EF6F5350A91990();
s32 PS4_SYSV_ABI Func_FA7A2DD770447552();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::NpTrophy