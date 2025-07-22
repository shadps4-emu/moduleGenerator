// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Videodec {

s32 PS4_SYSV_ABI sceVideodecCreateDecoder();
s32 PS4_SYSV_ABI sceVideodecDecode();
s32 PS4_SYSV_ABI sceVideodecDeleteDecoder();
s32 PS4_SYSV_ABI sceVideodecFlush();
s32 PS4_SYSV_ABI sceVideodecMapMemory();
s32 PS4_SYSV_ABI sceVideodecQueryResourceInfo();
s32 PS4_SYSV_ABI sceVideodecReset();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Videodec