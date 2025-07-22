// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::ScreenShot {

s32 PS4_SYSV_ABI sceScreenShotSetDrcParam();
s32 PS4_SYSV_ABI _Z5dummyv();
s32 PS4_SYSV_ABI sceScreenShotCapture();
s32 PS4_SYSV_ABI sceScreenShotDisable();
s32 PS4_SYSV_ABI sceScreenShotDisableNotification();
s32 PS4_SYSV_ABI sceScreenShotEnable();
s32 PS4_SYSV_ABI sceScreenShotEnableNotification();
s32 PS4_SYSV_ABI sceScreenShotGetAppInfo();
s32 PS4_SYSV_ABI sceScreenShotGetDrcParam();
s32 PS4_SYSV_ABI sceScreenShotIsDisabled();
s32 PS4_SYSV_ABI sceScreenShotIsVshScreenCaptureDisabled();
s32 PS4_SYSV_ABI sceScreenShotSetOverlayImage();
s32 PS4_SYSV_ABI sceScreenShotSetOverlayImageWithOrigin();
s32 PS4_SYSV_ABI sceScreenShotSetParam();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::ScreenShot