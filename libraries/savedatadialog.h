// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::SaveDataDialog {

s32 PS4_SYSV_ABI sceSaveDataDialogClose();
s32 PS4_SYSV_ABI sceSaveDataDialogGetResult();
s32 PS4_SYSV_ABI sceSaveDataDialogGetStatus();
s32 PS4_SYSV_ABI sceSaveDataDialogInitialize();
s32 PS4_SYSV_ABI sceSaveDataDialogIsReadyToDisplay();
s32 PS4_SYSV_ABI sceSaveDataDialogOpen();
s32 PS4_SYSV_ABI sceSaveDataDialogProgressBarInc();
s32 PS4_SYSV_ABI sceSaveDataDialogProgressBarSetValue();
s32 PS4_SYSV_ABI sceSaveDataDialogTerminate();
s32 PS4_SYSV_ABI sceSaveDataDialogUpdateStatus();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::SaveDataDialog