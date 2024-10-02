// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h" 

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Sysmodule {

int PS4_SYSV_ABI sceSysmoduleGetModuleHandleInternal();
int PS4_SYSV_ABI sceSysmoduleGetModuleInfoForUnwind();
int PS4_SYSV_ABI sceSysmoduleIsCalledFromSysModule();
int PS4_SYSV_ABI sceSysmoduleIsCameraPreloaded();
int PS4_SYSV_ABI sceSysmoduleIsLoaded();
int PS4_SYSV_ABI sceSysmoduleIsLoadedInternal();
int PS4_SYSV_ABI sceSysmoduleLoadModule();
int PS4_SYSV_ABI sceSysmoduleLoadModuleByNameInternal();
int PS4_SYSV_ABI sceSysmoduleLoadModuleInternal();
int PS4_SYSV_ABI sceSysmoduleLoadModuleInternalWithArg();
int PS4_SYSV_ABI sceSysmoduleMapLibcForLibkernel();
int PS4_SYSV_ABI sceSysmodulePreloadModuleForLibkernel();
int PS4_SYSV_ABI sceSysmoduleUnloadModule();
int PS4_SYSV_ABI sceSysmoduleUnloadModuleByNameInternal();
int PS4_SYSV_ABI sceSysmoduleUnloadModuleInternal();
int PS4_SYSV_ABI sceSysmoduleUnloadModuleInternalWithArg();

void RegisterlibSceSysmodule(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Sysmodule