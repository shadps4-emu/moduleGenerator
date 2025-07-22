// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Ime {

s32 PS4_SYSV_ABI FinalizeImeModule();
s32 PS4_SYSV_ABI InitializeImeModule();
s32 PS4_SYSV_ABI sceImeCheckFilterText();
s32 PS4_SYSV_ABI sceImeCheckRemoteEventParam();
s32 PS4_SYSV_ABI sceImeCheckUpdateTextInfo();
s32 PS4_SYSV_ABI sceImeClose();
s32 PS4_SYSV_ABI sceImeConfigGet();
s32 PS4_SYSV_ABI sceImeConfigSet();
s32 PS4_SYSV_ABI sceImeConfirmCandidate();
s32 PS4_SYSV_ABI sceImeDicAddWord();
s32 PS4_SYSV_ABI sceImeDicDeleteLearnDics();
s32 PS4_SYSV_ABI sceImeDicDeleteUserDics();
s32 PS4_SYSV_ABI sceImeDicDeleteWord();
s32 PS4_SYSV_ABI sceImeDicGetWords();
s32 PS4_SYSV_ABI sceImeDicReplaceWord();
s32 PS4_SYSV_ABI sceImeDisableController();
s32 PS4_SYSV_ABI sceImeFilterText();
s32 PS4_SYSV_ABI sceImeForTestFunction();
s32 PS4_SYSV_ABI sceImeGetPanelPositionAndForm();
s32 PS4_SYSV_ABI sceImeGetPanelSize();
s32 PS4_SYSV_ABI sceImeKeyboardClose();
s32 PS4_SYSV_ABI sceImeKeyboardGetInfo();
s32 PS4_SYSV_ABI sceImeKeyboardGetResourceId();
s32 PS4_SYSV_ABI sceImeKeyboardOpen();
s32 PS4_SYSV_ABI sceImeKeyboardOpenInternal();
s32 PS4_SYSV_ABI sceImeKeyboardSetMode();
s32 PS4_SYSV_ABI sceImeKeyboardUpdate();
s32 PS4_SYSV_ABI sceImeOpen();
s32 PS4_SYSV_ABI sceImeOpenInternal();
s32 PS4_SYSV_ABI sceImeParamInit();
s32 PS4_SYSV_ABI sceImeSetCandidateIndex();
s32 PS4_SYSV_ABI sceImeSetCaret();
s32 PS4_SYSV_ABI sceImeSetText();
s32 PS4_SYSV_ABI sceImeSetTextGeometry();
s32 PS4_SYSV_ABI sceImeUpdate();
s32 PS4_SYSV_ABI sceImeVshClearPreedit();
s32 PS4_SYSV_ABI sceImeVshClose();
s32 PS4_SYSV_ABI sceImeVshConfirmPreedit();
s32 PS4_SYSV_ABI sceImeVshDisableController();
s32 PS4_SYSV_ABI sceImeVshGetPanelPositionAndForm();
s32 PS4_SYSV_ABI sceImeVshInformConfirmdString();
s32 PS4_SYSV_ABI sceImeVshInformConfirmdString2();
s32 PS4_SYSV_ABI sceImeVshOpen();
s32 PS4_SYSV_ABI sceImeVshSendTextInfo();
s32 PS4_SYSV_ABI sceImeVshSetCaretGeometry();
s32 PS4_SYSV_ABI sceImeVshSetCaretIndexInPreedit();
s32 PS4_SYSV_ABI sceImeVshSetPanelPosition();
s32 PS4_SYSV_ABI sceImeVshSetParam();
s32 PS4_SYSV_ABI sceImeVshSetPreeditGeometry();
s32 PS4_SYSV_ABI sceImeVshSetSelectGeometry();
s32 PS4_SYSV_ABI sceImeVshSetSelectionText();
s32 PS4_SYSV_ABI sceImeVshUpdate();
s32 PS4_SYSV_ABI sceImeVshUpdateContext();
s32 PS4_SYSV_ABI sceImeVshUpdateContext2();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Ime