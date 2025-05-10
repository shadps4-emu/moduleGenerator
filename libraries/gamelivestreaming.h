// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::GameLiveStreaming {

s32 PS4_SYSV_ABI sceGameLiveStreamingStartDebugBroadcast();
s32 PS4_SYSV_ABI sceGameLiveStreamingStopDebugBroadcast();
s32 PS4_SYSV_ABI sceGameLiveStreamingApplySocialFeedbackMessageFilter();
s32 PS4_SYSV_ABI sceGameLiveStreamingCheckCallback();
s32 PS4_SYSV_ABI sceGameLiveStreamingClearPresetSocialFeedbackCommands();
s32 PS4_SYSV_ABI sceGameLiveStreamingClearSocialFeedbackMessages();
s32 PS4_SYSV_ABI sceGameLiveStreamingClearSpoilerTag();
s32 PS4_SYSV_ABI sceGameLiveStreamingEnableLiveStreaming();
s32 PS4_SYSV_ABI sceGameLiveStreamingEnableSocialFeedback();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetCurrentBroadcastScreenLayout();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetCurrentStatus();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetCurrentStatus2();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetProgramInfo();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetSocialFeedbackMessages();
s32 PS4_SYSV_ABI sceGameLiveStreamingGetSocialFeedbackMessagesCount();
s32 PS4_SYSV_ABI sceGameLiveStreamingInitialize();
s32 PS4_SYSV_ABI sceGameLiveStreamingLaunchLiveViewer();
s32 PS4_SYSV_ABI sceGameLiveStreamingLaunchLiveViewerA();
s32 PS4_SYSV_ABI sceGameLiveStreamingPermitLiveStreaming();
s32 PS4_SYSV_ABI sceGameLiveStreamingPermitServerSideRecording();
s32 PS4_SYSV_ABI sceGameLiveStreamingPostSocialMessage();
s32 PS4_SYSV_ABI sceGameLiveStreamingRegisterCallback();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenCloseSeparateMode();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenConfigureSeparateMode();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenInitialize();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenInitializeSeparateModeParameter();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenOpenSeparateMode();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenSetMode();
s32 PS4_SYSV_ABI sceGameLiveStreamingScreenTerminate();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetCameraFrameSetting();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetDefaultServiceProviderPermission();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetGuardAreas();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetInvitationSessionId();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetLinkCommentPreset();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetMaxBitrate();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetMetadata();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetPresetSocialFeedbackCommands();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetPresetSocialFeedbackCommandsDescription();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetServiceProviderPermission();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetSpoilerTag();
s32 PS4_SYSV_ABI sceGameLiveStreamingSetStandbyScreenResource();
s32 PS4_SYSV_ABI sceGameLiveStreamingStartGenerateStandbyScreenResource();
s32 PS4_SYSV_ABI sceGameLiveStreamingStartSocialFeedbackMessageFiltering();
s32 PS4_SYSV_ABI sceGameLiveStreamingStopGenerateStandbyScreenResource();
s32 PS4_SYSV_ABI sceGameLiveStreamingStopSocialFeedbackMessageFiltering();
s32 PS4_SYSV_ABI sceGameLiveStreamingTerminate();
s32 PS4_SYSV_ABI sceGameLiveStreamingUnregisterCallback();

void RegisterlibSceGameLiveStreaming(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::GameLiveStreaming