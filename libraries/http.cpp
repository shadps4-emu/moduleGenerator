// SPDX-FileCopyrightText: Copyright 2025 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "common/logging/log.h"
#include "core/libraries/error_codes.h"
#include "core/libraries/libs.h"
#include "core/libraries/http/http.h"

namespace Libraries::Http {

s32 PS4_SYSV_ABI sceHttpAbortRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAbortRequestForce() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAbortWaitRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAddCookie() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAddQuery() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAddRequestHeader() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAddRequestHeaderRaw() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAuthCacheExport() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAuthCacheFlush() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpAuthCacheImport() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCacheRedirectedConnectionEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCookieExport() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCookieFlush() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCookieImport() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateConnection() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateConnectionWithURL() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateEpoll() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateRequest2() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateRequestWithURL() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateRequestWithURL2() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpCreateTemplate() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgEnableProfile() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgGetConnectionStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgGetRequestStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgSetPrintf() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgShowConnectionStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgShowMemoryPoolStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgShowRequestStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDbgShowStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDeleteConnection() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDeleteRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDeleteTemplate() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpDestroyEpoll() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetAcceptEncodingGZIPEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetAllResponseHeaders() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetAuthEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetAutoRedirect() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetConnectionStat() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetCookie() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetCookieEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetCookieStats() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetEpoll() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetEpollId() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetLastErrno() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetMemoryPoolStats() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetNonblock() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetRegisteredCtxIds() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetResponseContentLength() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpGetStatusCode() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpInit() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpParseResponseHeader() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpParseStatusLine() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpReadData() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpRedirectCacheFlush() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpRemoveRequestHeader() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpRequestGetAllHeaders() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsDisableOption() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsDisableOptionPrivate() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsEnableOption() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsEnableOptionPrivate() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSendRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetAcceptEncodingGZIPEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetAuthEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetAuthInfoCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetAutoRedirect() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetChunkedTransferEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetConnectTimeOut() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieMaxNum() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieMaxNumPerDomain() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieMaxSize() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieRecvCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieSendCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetCookieTotalMaxSize() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetDefaultAcceptEncodingGZIPEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetDelayBuildRequestEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetEpoll() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetEpollId() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetHttp09Enabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetInflateGZIPEnabled() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetNonblock() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetPolicyOption() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetPriorityOption() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetProxy() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetRecvBlockSize() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetRecvTimeOut() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetRedirectCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetRequestContentLength() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetRequestStatusCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetResolveRetry() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetResolveTimeOut() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetResponseHeaderMaxSize() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetSendTimeOut() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpSetSocketCreationCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsFreeCaList() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsGetCaList() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsGetSslError() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsLoadCert() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsSetMinSslVersion() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsSetSslCallback() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsSetSslVersion() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpsUnloadCert() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpTerm() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpTryGetNonblock() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpTrySetNonblock() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUnsetEpoll() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriBuild() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriCopy() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriEscape() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriMerge() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriParse() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriSweepPath() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpUriUnescape() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

s32 PS4_SYSV_ABI sceHttpWaitRequest() {
    LOG_ERROR(Lib_Http, "(STUBBED) called");
    return ORBIS_OK;
}

void RegisterLib(Core::Loader::SymbolsResolver* sym) {
    LIB_FUNCTION("hvG6GfBMXg8", "libSceHttp", 1, "libSceHttp", sceHttpAbortRequest);
    LIB_FUNCTION("JKl06ZIAl6A", "libSceHttp", 1, "libSceHttp", sceHttpAbortRequestForce);
    LIB_FUNCTION("sWQiqKvYTVA", "libSceHttp", 1, "libSceHttp", sceHttpAbortWaitRequest);
    LIB_FUNCTION("mNan6QSnpeY", "libSceHttp", 1, "libSceHttp", sceHttpAddCookie);
    LIB_FUNCTION("JM58a21mtrQ", "libSceHttp", 1, "libSceHttp", sceHttpAddQuery);
    LIB_FUNCTION("EY28T2bkN7k", "libSceHttp", 1, "libSceHttp", sceHttpAddRequestHeader);
    LIB_FUNCTION("lGAjftanhFs", "libSceHttp", 1, "libSceHttp", sceHttpAddRequestHeaderRaw);
    LIB_FUNCTION("Y1DCjN-s2BA", "libSceHttp", 1, "libSceHttp", sceHttpAuthCacheExport);
    LIB_FUNCTION("zzB0StvRab4", "libSceHttp", 1, "libSceHttp", sceHttpAuthCacheFlush);
    LIB_FUNCTION("wF0KcxK20BE", "libSceHttp", 1, "libSceHttp", sceHttpAuthCacheImport);
    LIB_FUNCTION("A7n9nNg7NBg", "libSceHttp", 1, "libSceHttp",
                 sceHttpCacheRedirectedConnectionEnabled);
    LIB_FUNCTION("nOkViL17ZOo", "libSceHttp", 1, "libSceHttp", sceHttpCookieExport);
    LIB_FUNCTION("seCvUt91WHY", "libSceHttp", 1, "libSceHttp", sceHttpCookieFlush);
    LIB_FUNCTION("pFnXDxo3aog", "libSceHttp", 1, "libSceHttp", sceHttpCookieImport);
    LIB_FUNCTION("Kiwv9r4IZCc", "libSceHttp", 1, "libSceHttp", sceHttpCreateConnection);
    LIB_FUNCTION("qgxDBjorUxs", "libSceHttp", 1, "libSceHttp", sceHttpCreateConnectionWithURL);
    LIB_FUNCTION("6381dWF+xsQ", "libSceHttp", 1, "libSceHttp", sceHttpCreateEpoll);
    LIB_FUNCTION("tsGVru3hCe8", "libSceHttp", 1, "libSceHttp", sceHttpCreateRequest);
    LIB_FUNCTION("rGNm+FjIXKk", "libSceHttp", 1, "libSceHttp", sceHttpCreateRequest2);
    LIB_FUNCTION("Aeu5wVKkF9w", "libSceHttp", 1, "libSceHttp", sceHttpCreateRequestWithURL);
    LIB_FUNCTION("Cnp77podkCU", "libSceHttp", 1, "libSceHttp", sceHttpCreateRequestWithURL2);
    LIB_FUNCTION("0gYjPTR-6cY", "libSceHttp", 1, "libSceHttp", sceHttpCreateTemplate);
    LIB_FUNCTION("Lffcxao-QMM", "libSceHttp", 1, "libSceHttp", sceHttpDbgEnableProfile);
    LIB_FUNCTION("6gyx-I0Oob4", "libSceHttp", 1, "libSceHttp", sceHttpDbgGetConnectionStat);
    LIB_FUNCTION("fzzBpJjm9Kw", "libSceHttp", 1, "libSceHttp", sceHttpDbgGetRequestStat);
    LIB_FUNCTION("VmqSnjZ5mE4", "libSceHttp", 1, "libSceHttp", sceHttpDbgSetPrintf);
    LIB_FUNCTION("KJtUHtp6y0U", "libSceHttp", 1, "libSceHttp", sceHttpDbgShowConnectionStat);
    LIB_FUNCTION("oEuPssSYskA", "libSceHttp", 1, "libSceHttp", sceHttpDbgShowMemoryPoolStat);
    LIB_FUNCTION("L2gM3qptqHs", "libSceHttp", 1, "libSceHttp", sceHttpDbgShowRequestStat);
    LIB_FUNCTION("pxBsD-X9eH0", "libSceHttp", 1, "libSceHttp", sceHttpDbgShowStat);
    LIB_FUNCTION("P6A3ytpsiYc", "libSceHttp", 1, "libSceHttp", sceHttpDeleteConnection);
    LIB_FUNCTION("qe7oZ+v4PWA", "libSceHttp", 1, "libSceHttp", sceHttpDeleteRequest);
    LIB_FUNCTION("4I8vEpuEhZ8", "libSceHttp", 1, "libSceHttp", sceHttpDeleteTemplate);
    LIB_FUNCTION("wYhXVfS2Et4", "libSceHttp", 1, "libSceHttp", sceHttpDestroyEpoll);
    LIB_FUNCTION("1rpZqxdMRwQ", "libSceHttp", 1, "libSceHttp",
                 sceHttpGetAcceptEncodingGZIPEnabled);
    LIB_FUNCTION("aCYPMSUIaP8", "libSceHttp", 1, "libSceHttp", sceHttpGetAllResponseHeaders);
    LIB_FUNCTION("9m8EcOGzcIQ", "libSceHttp", 1, "libSceHttp", sceHttpGetAuthEnabled);
    LIB_FUNCTION("mmLexUbtnfY", "libSceHttp", 1, "libSceHttp", sceHttpGetAutoRedirect);
    LIB_FUNCTION("L-DwVoHXLtU", "libSceHttp", 1, "libSceHttp", sceHttpGetConnectionStat);
    LIB_FUNCTION("+G+UsJpeXPc", "libSceHttp", 1, "libSceHttp", sceHttpGetCookie);
    LIB_FUNCTION("iSZjWw1TGiA", "libSceHttp", 1, "libSceHttp", sceHttpGetCookieEnabled);
    LIB_FUNCTION("xkymWiGdMiI", "libSceHttp", 1, "libSceHttp", sceHttpGetCookieStats);
    LIB_FUNCTION("7j9VcwnrZo4", "libSceHttp", 1, "libSceHttp", sceHttpGetEpoll);
    LIB_FUNCTION("IQOP6McWJcY", "libSceHttp", 1, "libSceHttp", sceHttpGetEpollId);
    LIB_FUNCTION("0onIrKx9NIE", "libSceHttp", 1, "libSceHttp", sceHttpGetLastErrno);
    LIB_FUNCTION("16sMmVuOvgU", "libSceHttp", 1, "libSceHttp", sceHttpGetMemoryPoolStats);
    LIB_FUNCTION("Wq4RNB3snSQ", "libSceHttp", 1, "libSceHttp", sceHttpGetNonblock);
    LIB_FUNCTION("hkcfqAl+82w", "libSceHttp", 1, "libSceHttp", sceHttpGetRegisteredCtxIds);
    LIB_FUNCTION("yuO2H2Uvnos", "libSceHttp", 1, "libSceHttp", sceHttpGetResponseContentLength);
    LIB_FUNCTION("0a2TBNfE3BU", "libSceHttp", 1, "libSceHttp", sceHttpGetStatusCode);
    LIB_FUNCTION("A9cVMUtEp4Y", "libSceHttp", 1, "libSceHttp", sceHttpInit);
    LIB_FUNCTION("hPTXo3bICzI", "libSceHttp", 1, "libSceHttp", sceHttpParseResponseHeader);
    LIB_FUNCTION("Qq8SfuJJJqE", "libSceHttp", 1, "libSceHttp", sceHttpParseStatusLine);
    LIB_FUNCTION("P5pdoykPYTk", "libSceHttp", 1, "libSceHttp", sceHttpReadData);
    LIB_FUNCTION("u05NnI+P+KY", "libSceHttp", 1, "libSceHttp", sceHttpRedirectCacheFlush);
    LIB_FUNCTION("zNGh-zoQTD0", "libSceHttp", 1, "libSceHttp", sceHttpRemoveRequestHeader);
    LIB_FUNCTION("4fgkfVeVsGU", "libSceHttp", 1, "libSceHttp", sceHttpRequestGetAllHeaders);
    LIB_FUNCTION("mSQCxzWTwVI", "libSceHttp", 1, "libSceHttp", sceHttpsDisableOption);
    LIB_FUNCTION("zJYi5br6ZiQ", "libSceHttp", 1, "libSceHttp", sceHttpsDisableOptionPrivate);
    LIB_FUNCTION("f42K37mm5RM", "libSceHttp", 1, "libSceHttp", sceHttpsEnableOption);
    LIB_FUNCTION("I4+4hKttt1w", "libSceHttp", 1, "libSceHttp", sceHttpsEnableOptionPrivate);
    LIB_FUNCTION("1e2BNwI-XzE", "libSceHttp", 1, "libSceHttp", sceHttpSendRequest);
    LIB_FUNCTION("HRX1iyDoKR8", "libSceHttp", 1, "libSceHttp",
                 sceHttpSetAcceptEncodingGZIPEnabled);
    LIB_FUNCTION("qFg2SuyTJJY", "libSceHttp", 1, "libSceHttp", sceHttpSetAuthEnabled);
    LIB_FUNCTION("jf4TB2nUO40", "libSceHttp", 1, "libSceHttp", sceHttpSetAuthInfoCallback);
    LIB_FUNCTION("T-mGo9f3Pu4", "libSceHttp", 1, "libSceHttp", sceHttpSetAutoRedirect);
    LIB_FUNCTION("PDxS48xGQLs", "libSceHttp", 1, "libSceHttp", sceHttpSetChunkedTransferEnabled);
    LIB_FUNCTION("0S9tTH0uqTU", "libSceHttp", 1, "libSceHttp", sceHttpSetConnectTimeOut);
    LIB_FUNCTION("XNUoD2B9a6A", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieEnabled);
    LIB_FUNCTION("pM--+kIeW-8", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieMaxNum);
    LIB_FUNCTION("Kp6juCJUJGQ", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieMaxNumPerDomain);
    LIB_FUNCTION("7Y4364GBras", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieMaxSize);
    LIB_FUNCTION("Kh6bS2HQKbo", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieRecvCallback);
    LIB_FUNCTION("GnVDzYfy-KI", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieSendCallback);
    LIB_FUNCTION("pHc3bxUzivU", "libSceHttp", 1, "libSceHttp", sceHttpSetCookieTotalMaxSize);
    LIB_FUNCTION("8kzIXsRy1bY", "libSceHttp", 1, "libSceHttp",
                 sceHttpSetDefaultAcceptEncodingGZIPEnabled);
    LIB_FUNCTION("22buO-UufJY", "libSceHttp", 1, "libSceHttp", sceHttpSetDelayBuildRequestEnabled);
    LIB_FUNCTION("-xm7kZQNpHI", "libSceHttp", 1, "libSceHttp", sceHttpSetEpoll);
    LIB_FUNCTION("LG1YW1Uhkgo", "libSceHttp", 1, "libSceHttp", sceHttpSetEpollId);
    LIB_FUNCTION("pk0AuomQM1o", "libSceHttp", 1, "libSceHttp", sceHttpSetHttp09Enabled);
    LIB_FUNCTION("i9mhafzkEi8", "libSceHttp", 1, "libSceHttp", sceHttpSetInflateGZIPEnabled);
    LIB_FUNCTION("s2-NPIvz+iA", "libSceHttp", 1, "libSceHttp", sceHttpSetNonblock);
    LIB_FUNCTION("gZ9TpeFQ7Gk", "libSceHttp", 1, "libSceHttp", sceHttpSetPolicyOption);
    LIB_FUNCTION("2NeZnMEP3-0", "libSceHttp", 1, "libSceHttp", sceHttpSetPriorityOption);
    LIB_FUNCTION("i+quCZCL+D8", "libSceHttp", 1, "libSceHttp", sceHttpSetProxy);
    LIB_FUNCTION("mMcB2XIDoV4", "libSceHttp", 1, "libSceHttp", sceHttpSetRecvBlockSize);
    LIB_FUNCTION("yigr4V0-HTM", "libSceHttp", 1, "libSceHttp", sceHttpSetRecvTimeOut);
    LIB_FUNCTION("h9wmFZX4i-4", "libSceHttp", 1, "libSceHttp", sceHttpSetRedirectCallback);
    LIB_FUNCTION("PTiFIUxCpJc", "libSceHttp", 1, "libSceHttp", sceHttpSetRequestContentLength);
    LIB_FUNCTION("vO4B-42ef-k", "libSceHttp", 1, "libSceHttp", sceHttpSetRequestStatusCallback);
    LIB_FUNCTION("K1d1LqZRQHQ", "libSceHttp", 1, "libSceHttp", sceHttpSetResolveRetry);
    LIB_FUNCTION("Tc-hAYDKtQc", "libSceHttp", 1, "libSceHttp", sceHttpSetResolveTimeOut);
    LIB_FUNCTION("a4VsZ4oqn68", "libSceHttp", 1, "libSceHttp", sceHttpSetResponseHeaderMaxSize);
    LIB_FUNCTION("xegFfZKBVlw", "libSceHttp", 1, "libSceHttp", sceHttpSetSendTimeOut);
    LIB_FUNCTION("POJ0azHZX3w", "libSceHttp", 1, "libSceHttp", sceHttpSetSocketCreationCallback);
    LIB_FUNCTION("7WcNoAI9Zcw", "libSceHttp", 1, "libSceHttp", sceHttpsFreeCaList);
    LIB_FUNCTION("gcUjwU3fa0M", "libSceHttp", 1, "libSceHttp", sceHttpsGetCaList);
    LIB_FUNCTION("JBN6N-EY+3M", "libSceHttp", 1, "libSceHttp", sceHttpsGetSslError);
    LIB_FUNCTION("DK+GoXCNT04", "libSceHttp", 1, "libSceHttp", sceHttpsLoadCert);
    LIB_FUNCTION("jUjp+yqMNdQ", "libSceHttp", 1, "libSceHttp", sceHttpsSetMinSslVersion);
    LIB_FUNCTION("htyBOoWeS58", "libSceHttp", 1, "libSceHttp", sceHttpsSetSslCallback);
    LIB_FUNCTION("U5ExQGyyx9s", "libSceHttp", 1, "libSceHttp", sceHttpsSetSslVersion);
    LIB_FUNCTION("zXqcE0fizz0", "libSceHttp", 1, "libSceHttp", sceHttpsUnloadCert);
    LIB_FUNCTION("Ik-KpLTlf7Q", "libSceHttp", 1, "libSceHttp", sceHttpTerm);
    LIB_FUNCTION("V-noPEjSB8c", "libSceHttp", 1, "libSceHttp", sceHttpTryGetNonblock);
    LIB_FUNCTION("fmOs6MzCRqk", "libSceHttp", 1, "libSceHttp", sceHttpTrySetNonblock);
    LIB_FUNCTION("59tL1AQBb8U", "libSceHttp", 1, "libSceHttp", sceHttpUnsetEpoll);
    LIB_FUNCTION("5LZA+KPISVA", "libSceHttp", 1, "libSceHttp", sceHttpUriBuild);
    LIB_FUNCTION("CR-l-yI-o7o", "libSceHttp", 1, "libSceHttp", sceHttpUriCopy);
    LIB_FUNCTION("YuOW3dDAKYc", "libSceHttp", 1, "libSceHttp", sceHttpUriEscape);
    LIB_FUNCTION("3lgQ5Qk42ok", "libSceHttp", 1, "libSceHttp", sceHttpUriMerge);
    LIB_FUNCTION("IWalAn-guFs", "libSceHttp", 1, "libSceHttp", sceHttpUriParse);
    LIB_FUNCTION("mUU363n4yc0", "libSceHttp", 1, "libSceHttp", sceHttpUriSweepPath);
    LIB_FUNCTION("thTS+57zoLM", "libSceHttp", 1, "libSceHttp", sceHttpUriUnescape);
    LIB_FUNCTION("qISjDHrxONc", "libSceHttp", 1, "libSceHttp", sceHttpWaitRequest);
};

} // namespace Libraries::Http