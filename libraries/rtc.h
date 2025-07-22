// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::Rtc {

s32 PS4_SYSV_ABI sceRtcCheckValid();
s32 PS4_SYSV_ABI sceRtcCompareTick();
s32 PS4_SYSV_ABI sceRtcConvertLocalTimeToUtc();
s32 PS4_SYSV_ABI sceRtcConvertUtcToLocalTime();
s32 PS4_SYSV_ABI sceRtcEnd();
s32 PS4_SYSV_ABI sceRtcFormatRFC2822();
s32 PS4_SYSV_ABI sceRtcFormatRFC2822LocalTime();
s32 PS4_SYSV_ABI sceRtcFormatRFC3339();
s32 PS4_SYSV_ABI sceRtcFormatRFC3339LocalTime();
s32 PS4_SYSV_ABI sceRtcFormatRFC3339Precise();
s32 PS4_SYSV_ABI sceRtcFormatRFC3339PreciseLocalTime();
s32 PS4_SYSV_ABI sceRtcGetCurrentAdNetworkTick();
s32 PS4_SYSV_ABI sceRtcGetCurrentClock();
s32 PS4_SYSV_ABI sceRtcGetCurrentClockLocalTime();
s32 PS4_SYSV_ABI sceRtcGetCurrentDebugNetworkTick();
s32 PS4_SYSV_ABI sceRtcGetCurrentNetworkTick();
s32 PS4_SYSV_ABI sceRtcGetCurrentRawNetworkTick();
s32 PS4_SYSV_ABI sceRtcGetCurrentTick();
s32 PS4_SYSV_ABI sceRtcGetDayOfWeek();
s32 PS4_SYSV_ABI sceRtcGetDaysInMonth();
s32 PS4_SYSV_ABI sceRtcGetDosTime();
s32 PS4_SYSV_ABI sceRtcGetTick();
s32 PS4_SYSV_ABI sceRtcGetTickResolution();
s32 PS4_SYSV_ABI sceRtcGetTime_t();
s32 PS4_SYSV_ABI sceRtcGetWin32FileTime();
s32 PS4_SYSV_ABI sceRtcInit();
s32 PS4_SYSV_ABI sceRtcIsLeapYear();
s32 PS4_SYSV_ABI sceRtcParseDateTime();
s32 PS4_SYSV_ABI sceRtcParseRFC3339();
s32 PS4_SYSV_ABI sceRtcSetConf();
s32 PS4_SYSV_ABI sceRtcSetCurrentAdNetworkTick();
s32 PS4_SYSV_ABI sceRtcSetCurrentDebugNetworkTick();
s32 PS4_SYSV_ABI sceRtcSetCurrentNetworkTick();
s32 PS4_SYSV_ABI sceRtcSetCurrentTick();
s32 PS4_SYSV_ABI sceRtcSetDosTime();
s32 PS4_SYSV_ABI sceRtcSetTick();
s32 PS4_SYSV_ABI sceRtcSetTime_t();
s32 PS4_SYSV_ABI sceRtcSetWin32FileTime();
s32 PS4_SYSV_ABI sceRtcTickAddDays();
s32 PS4_SYSV_ABI sceRtcTickAddHours();
s32 PS4_SYSV_ABI sceRtcTickAddMicroseconds();
s32 PS4_SYSV_ABI sceRtcTickAddMinutes();
s32 PS4_SYSV_ABI sceRtcTickAddMonths();
s32 PS4_SYSV_ABI sceRtcTickAddSeconds();
s32 PS4_SYSV_ABI sceRtcTickAddTicks();
s32 PS4_SYSV_ABI sceRtcTickAddWeeks();
s32 PS4_SYSV_ABI sceRtcTickAddYears();

void RegisterLib(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::Rtc