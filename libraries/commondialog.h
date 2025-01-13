// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::CommonDialog {

s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil12getSelfAppIdEv();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6Client11closeModuleEv();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6Client11updateStateEv();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6ClientD0Ev();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6ClientD1Ev();
s32 PS4_SYSV_ABI _ZN3sce16CommonDialogUtil6ClientD2Ev();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client10isCloseReqEv();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client14getClientStateEv();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client8getAppIdEv();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client8isFinishEv();
s32 PS4_SYSV_ABI _ZNK3sce16CommonDialogUtil6Client9getResultEv();
s32 PS4_SYSV_ABI _ZTVN3sce16CommonDialogUtil6ClientE();
s32 PS4_SYSV_ABI sceCommonDialogInitialize();
s32 PS4_SYSV_ABI sceCommonDialogIsUsed();
s32 PS4_SYSV_ABI Func_0FF577E4E8457883();
s32 PS4_SYSV_ABI Func_41716C2CE379416C();
s32 PS4_SYSV_ABI Func_483A427D8F6E0748();
s32 PS4_SYSV_ABI Func_6944B83E02727BDF();
s32 PS4_SYSV_ABI Func_69F2DD23A8B4950C();
s32 PS4_SYSV_ABI Func_9954673DEAC170AD();
s32 PS4_SYSV_ABI Func_A7D4D3AB86CB7455();
s32 PS4_SYSV_ABI Func_ADE4C51256B8350C();
s32 PS4_SYSV_ABI Func_B71349CF15FACAB0();
s32 PS4_SYSV_ABI Func_CB18E00EFA946C64();
s32 PS4_SYSV_ABI Func_F2AEE270605622B0();

void RegisterlibSceCommonDialog(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::CommonDialog