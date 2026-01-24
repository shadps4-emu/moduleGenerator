// SPDX-FileCopyrightText: Copyright 2024-2026 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Audio3d {

s32 PS4_SYSV_ABI sceAudio3dAudioOutClose();
s32 PS4_SYSV_ABI sceAudio3dAudioOutOpen();
s32 PS4_SYSV_ABI sceAudio3dAudioOutOutput();
s32 PS4_SYSV_ABI sceAudio3dAudioOutOutputs();
s32 PS4_SYSV_ABI sceAudio3dBedWrite();
s32 PS4_SYSV_ABI sceAudio3dBedWrite2();
s32 PS4_SYSV_ABI sceAudio3dCreateSpeakerArray();
s32 PS4_SYSV_ABI sceAudio3dDeleteSpeakerArray();
s32 PS4_SYSV_ABI sceAudio3dGetDefaultOpenParameters();
s32 PS4_SYSV_ABI sceAudio3dGetSpeakerArrayMemorySize();
s32 PS4_SYSV_ABI sceAudio3dGetSpeakerArrayMixCoefficients();
s32 PS4_SYSV_ABI sceAudio3dGetSpeakerArrayMixCoefficients2();
s32 PS4_SYSV_ABI sceAudio3dInitialize();
s32 PS4_SYSV_ABI sceAudio3dObjectReserve();
s32 PS4_SYSV_ABI sceAudio3dObjectSetAttributes();
s32 PS4_SYSV_ABI sceAudio3dObjectUnreserve();
s32 PS4_SYSV_ABI sceAudio3dPortAdvance();
s32 PS4_SYSV_ABI sceAudio3dPortClose();
s32 PS4_SYSV_ABI sceAudio3dPortCreate();
s32 PS4_SYSV_ABI sceAudio3dPortDestroy();
s32 PS4_SYSV_ABI sceAudio3dPortFlush();
s32 PS4_SYSV_ABI sceAudio3dPortFreeState();
s32 PS4_SYSV_ABI sceAudio3dPortGetAttributesSupported();
s32 PS4_SYSV_ABI sceAudio3dPortGetList();
s32 PS4_SYSV_ABI sceAudio3dPortGetParameters();
s32 PS4_SYSV_ABI sceAudio3dPortGetQueueLevel();
s32 PS4_SYSV_ABI sceAudio3dPortGetState();
s32 PS4_SYSV_ABI sceAudio3dPortGetStatus();
s32 PS4_SYSV_ABI sceAudio3dPortOpen();
s32 PS4_SYSV_ABI sceAudio3dPortPush();
s32 PS4_SYSV_ABI sceAudio3dPortQueryDebug();
s32 PS4_SYSV_ABI sceAudio3dPortSetAttribute();
s32 PS4_SYSV_ABI sceAudio3dReportRegisterHandler();
s32 PS4_SYSV_ABI sceAudio3dReportUnregisterHandler();
s32 PS4_SYSV_ABI sceAudio3dSetGpuRenderer();
s32 PS4_SYSV_ABI sceAudio3dStrError();
s32 PS4_SYSV_ABI sceAudio3dTerminate();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Audio3d