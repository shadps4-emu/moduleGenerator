// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::MsgDialog {

s32 PS4_SYSV_ABI sceMsgDialogClose();
s32 PS4_SYSV_ABI sceMsgDialogGetResult();
s32 PS4_SYSV_ABI sceMsgDialogGetStatus();
s32 PS4_SYSV_ABI sceMsgDialogInitialize();
s32 PS4_SYSV_ABI sceMsgDialogOpen();
s32 PS4_SYSV_ABI sceMsgDialogProgressBarInc();
s32 PS4_SYSV_ABI sceMsgDialogProgressBarSetMsg();
s32 PS4_SYSV_ABI sceMsgDialogProgressBarSetValue();
s32 PS4_SYSV_ABI sceMsgDialogTerminate();
s32 PS4_SYSV_ABI sceMsgDialogUpdateStatus();

void RegisterlibSceMsgDialog(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::MsgDialog