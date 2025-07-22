// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Sysmodule {

s32 PS4_SYSV_ABI sceSysmoduleGetModuleHandleInternal();
s32 PS4_SYSV_ABI sceSysmoduleGetModuleInfoForUnwind();
s32 PS4_SYSV_ABI sceSysmoduleIsCalledFromSysModule();
s32 PS4_SYSV_ABI sceSysmoduleIsCameraPreloaded();
s32 PS4_SYSV_ABI sceSysmoduleIsLoaded();
s32 PS4_SYSV_ABI sceSysmoduleIsLoadedInternal();
s32 PS4_SYSV_ABI sceSysmoduleLoadModule();
s32 PS4_SYSV_ABI sceSysmoduleLoadModuleByNameInternal();
s32 PS4_SYSV_ABI sceSysmoduleLoadModuleInternal();
s32 PS4_SYSV_ABI sceSysmoduleLoadModuleInternalWithArg();
s32 PS4_SYSV_ABI sceSysmoduleMapLibcForLibkernel();
s32 PS4_SYSV_ABI sceSysmodulePreloadModuleForLibkernel();
s32 PS4_SYSV_ABI sceSysmoduleUnloadModule();
s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleByNameInternal();
s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleInternal();
s32 PS4_SYSV_ABI sceSysmoduleUnloadModuleInternalWithArg();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Sysmodule