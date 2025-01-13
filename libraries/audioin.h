// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::AudioIn {

s32 PS4_SYSV_ABI sceAudioInChangeAppModuleState();
s32 PS4_SYSV_ABI sceAudioInClose();
s32 PS4_SYSV_ABI sceAudioInCountPorts();
s32 PS4_SYSV_ABI sceAudioInDeviceHqOpen();
s32 PS4_SYSV_ABI sceAudioInDeviceIdHqOpen();
s32 PS4_SYSV_ABI sceAudioInDeviceIdOpen();
s32 PS4_SYSV_ABI sceAudioInDeviceOpen();
s32 PS4_SYSV_ABI sceAudioInDeviceOpenEx();
s32 PS4_SYSV_ABI sceAudioInExtClose();
s32 PS4_SYSV_ABI sceAudioInExtCtrl();
s32 PS4_SYSV_ABI sceAudioInExtInput();
s32 PS4_SYSV_ABI sceAudioInExtOpen();
s32 PS4_SYSV_ABI sceAudioInExtSetAecMode();
s32 PS4_SYSV_ABI sceAudioInGetGain();
s32 PS4_SYSV_ABI sceAudioInGetHandleStatusInfo();
s32 PS4_SYSV_ABI sceAudioInGetRerouteCount();
s32 PS4_SYSV_ABI sceAudioInGetSilentState();
s32 PS4_SYSV_ABI sceAudioInHqOpen();
s32 PS4_SYSV_ABI sceAudioInHqOpenEx();
s32 PS4_SYSV_ABI sceAudioInInit();
s32 PS4_SYSV_ABI sceAudioInInput();
s32 PS4_SYSV_ABI sceAudioInInputs();
s32 PS4_SYSV_ABI sceAudioInIsSharedDevice();
s32 PS4_SYSV_ABI sceAudioInOpen();
s32 PS4_SYSV_ABI sceAudioInOpenEx();
s32 PS4_SYSV_ABI sceAudioInSetAllMute();
s32 PS4_SYSV_ABI sceAudioInSetCompressorPreGain();
s32 PS4_SYSV_ABI sceAudioInSetConnections();
s32 PS4_SYSV_ABI sceAudioInSetConnectionsForUser();
s32 PS4_SYSV_ABI sceAudioInSetDevConnection();
s32 PS4_SYSV_ABI sceAudioInSetFocusForUser();
s32 PS4_SYSV_ABI sceAudioInSetMode();
s32 PS4_SYSV_ABI sceAudioInSetMode2();
s32 PS4_SYSV_ABI sceAudioInSetPortConnections();
s32 PS4_SYSV_ABI sceAudioInSetPortStatuses();
s32 PS4_SYSV_ABI sceAudioInSetSparkParam();
s32 PS4_SYSV_ABI sceAudioInSetSparkSideTone();
s32 PS4_SYSV_ABI sceAudioInSetUsbGain();
s32 PS4_SYSV_ABI sceAudioInSetUserMute();
s32 PS4_SYSV_ABI sceAudioInVmicCreate();
s32 PS4_SYSV_ABI sceAudioInVmicDestroy();
s32 PS4_SYSV_ABI sceAudioInVmicWrite();

void RegisterlibSceAudioIn(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::AudioIn