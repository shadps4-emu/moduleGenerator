// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/rtc/rtc.h"

namespace Libraries::Rtc {

int PS4_SYSV_ABI sceRtcCheckValid() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcCompareTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcConvertLocalTimeToUtc() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcConvertUtcToLocalTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcEnd() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC2822() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC2822LocalTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC3339() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC3339LocalTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC3339Precise() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcFormatRFC3339PreciseLocalTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentAdNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentClock() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentClockLocalTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentDebugNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentRawNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetCurrentTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetDayOfWeek() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetDaysInMonth() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetDosTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetTickResolution() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetTime_t() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcGetWin32FileTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcInit() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcIsLeapYear() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcParseDateTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcParseRFC3339() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetConf() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetCurrentAdNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetCurrentDebugNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetCurrentNetworkTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetCurrentTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetDosTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetTick() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetTime_t() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcSetWin32FileTime() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddDays() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddHours() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddMicroseconds() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddMinutes() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddMonths() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddSeconds() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddTicks() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddWeeks() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

int PS4_SYSV_ABI sceRtcTickAddYears() {
    LOG_ERROR(Lib_Rtc, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterlibSceRtc(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("lPEBYdVX0XQ", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcCheckValid);
    LIB_FUNCTION("fNaZ4DbzHAE", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcCompareTick);
    LIB_FUNCTION("8Yr143yEnRo", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcConvertLocalTimeToUtc);
    LIB_FUNCTION("M1TvFst-jrM", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcConvertUtcToLocalTime);
    LIB_FUNCTION("8SljQx6pDP8", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcEnd);
    LIB_FUNCTION("eiuobaF-hK4", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcFormatRFC2822);
    LIB_FUNCTION("AxHBk3eat04", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcFormatRFC2822LocalTime);
    LIB_FUNCTION("WJ3rqFwymew", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcFormatRFC3339);
    LIB_FUNCTION("DwuHIlLGW8I", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcFormatRFC3339LocalTime);
    LIB_FUNCTION("lja0nNPWojg", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcFormatRFC3339Precise);
    LIB_FUNCTION("tOZ6fwwHZOA", "libSceRtc", 1, "libSceRtc", 1, 1,
                 sceRtcFormatRFC3339PreciseLocalTime);
    LIB_FUNCTION("LN3Zcb72Q0c", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentAdNetworkTick);
    LIB_FUNCTION("8lfvnRMqwEM", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentClock);
    LIB_FUNCTION("ZPD1YOKI+Kw", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentClockLocalTime);
    LIB_FUNCTION("Ot1DE3gif84", "libSceRtc", 1, "libSceRtc", 1, 1,
                 sceRtcGetCurrentDebugNetworkTick);
    LIB_FUNCTION("zO9UL3qIINQ", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentNetworkTick);
    LIB_FUNCTION("HWxHOdbM-Pg", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentRawNetworkTick);
    LIB_FUNCTION("18B2NS1y9UU", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetCurrentTick);
    LIB_FUNCTION("CyIK-i4XdgQ", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetDayOfWeek);
    LIB_FUNCTION("3O7Ln8AqJ1o", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetDaysInMonth);
    LIB_FUNCTION("E7AR4o7Ny7E", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetDosTime);
    LIB_FUNCTION("8w-H19ip48I", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetTick);
    LIB_FUNCTION("jMNwqYr4R-k", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetTickResolution);
    LIB_FUNCTION("BtqmpTRXHgk", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetTime_t);
    LIB_FUNCTION("jfRO0uTjtzA", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcGetWin32FileTime);
    LIB_FUNCTION("LlodCMDbk3o", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcInit);
    LIB_FUNCTION("Ug8pCwQvh0c", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcIsLeapYear);
    LIB_FUNCTION("NxEI1KByvCI", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcParseDateTime);
    LIB_FUNCTION("99bMGglFW3I", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcParseRFC3339);
    LIB_FUNCTION("fFLgmNUpChg", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetConf);
    LIB_FUNCTION("sV2tK+yOhBU", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetCurrentAdNetworkTick);
    LIB_FUNCTION("VLDUPKmw5L8", "libSceRtc", 1, "libSceRtc", 1, 1,
                 sceRtcSetCurrentDebugNetworkTick);
    LIB_FUNCTION("qhDBtIo+auw", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetCurrentNetworkTick);
    LIB_FUNCTION("d4fHLCGmY80", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetCurrentTick);
    LIB_FUNCTION("aYPCd1cChyg", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetDosTime);
    LIB_FUNCTION("ueega6v3GUw", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetTick);
    LIB_FUNCTION("bDEVVP4bTjQ", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetTime_t);
    LIB_FUNCTION("n5JiAJXsbcs", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcSetWin32FileTime);
    LIB_FUNCTION("NR1J0N7L2xY", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddDays);
    LIB_FUNCTION("MDc5cd8HfCA", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddHours);
    LIB_FUNCTION("XPIiw58C+GM", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddMicroseconds);
    LIB_FUNCTION("mn-tf4QiFzk", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddMinutes);
    LIB_FUNCTION("CL6y9q-XbuQ", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddMonths);
    LIB_FUNCTION("07O525HgICs", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddSeconds);
    LIB_FUNCTION("AqVMssr52Rc", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddTicks);
    LIB_FUNCTION("gI4t194c2W8", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddWeeks);
    LIB_FUNCTION("-5y2uJ62qS8", "libSceRtc", 1, "libSceRtc", 1, 1,sceRtcTickAddYears);
};

} // namespace Libraries::Rtc