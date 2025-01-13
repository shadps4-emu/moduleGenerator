// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::UserService {

s32 PS4_SYSV_ABI sceUserServiceInitializeForShellCore();
s32 PS4_SYSV_ABI sceUserServiceTerminateForShellCore();
s32 PS4_SYSV_ABI sceUserServiceGetRegisteredUserIdList();
s32 PS4_SYSV_ABI sceUserServiceRegisterEventCallback();
s32 PS4_SYSV_ABI sceUserServiceUnregisterEventCallback();
s32 PS4_SYSV_ABI sceUserServiceDestroyUser();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityKeyremapData();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityKeyremapEnable();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityPressAndHoldDelay();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityVibration();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityZoom();
s32 PS4_SYSV_ABI sceUserServiceGetAccessibilityZoomEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetAccountRemarks();
s32 PS4_SYSV_ABI sceUserServiceGetAgeVerified();
s32 PS4_SYSV_ABI sceUserServiceGetAppearOfflineSetting();
s32 PS4_SYSV_ABI sceUserServiceGetAppSortOrder();
s32 PS4_SYSV_ABI sceUserServiceGetAutoLoginEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetCreatedVersion();
s32 PS4_SYSV_ABI sceUserServiceGetCurrentUserGroupIndex();
s32 PS4_SYSV_ABI sceUserServiceGetDefaultNewUserGroupName();
s32 PS4_SYSV_ABI sceUserServiceGetDeletedUserInfo();
s32 PS4_SYSV_ABI sceUserServiceGetDiscPlayerFlag();
s32 PS4_SYSV_ABI sceUserServiceGetEvent();
s32 PS4_SYSV_ABI sceUserServiceGetEventCalendarType();
s32 PS4_SYSV_ABI sceUserServiceGetEventFilterTeamEvent();
s32 PS4_SYSV_ABI sceUserServiceGetEventSortEvent();
s32 PS4_SYSV_ABI sceUserServiceGetEventSortTitle();
s32 PS4_SYSV_ABI sceUserServiceGetEventUiFlag();
s32 PS4_SYSV_ABI sceUserServiceGetEventVsh();
s32 PS4_SYSV_ABI sceUserServiceGetFaceRecognitionDeleteCount();
s32 PS4_SYSV_ABI sceUserServiceGetFaceRecognitionRegisterCount();
s32 PS4_SYSV_ABI sceUserServiceGetFileBrowserFilter();
s32 PS4_SYSV_ABI sceUserServiceGetFileBrowserSortContent();
s32 PS4_SYSV_ABI sceUserServiceGetFileBrowserSortTitle();
s32 PS4_SYSV_ABI sceUserServiceGetFileSelectorFilter();
s32 PS4_SYSV_ABI sceUserServiceGetFileSelectorSortContent();
s32 PS4_SYSV_ABI sceUserServiceGetFileSelectorSortTitle();
s32 PS4_SYSV_ABI sceUserServiceGetForegroundUser();
s32 PS4_SYSV_ABI sceUserServiceGetFriendCustomListLastFocus();
s32 PS4_SYSV_ABI sceUserServiceGetFriendFlag();
s32 PS4_SYSV_ABI sceUserServiceGetGlsAccessTokenNiconicoLive();
s32 PS4_SYSV_ABI sceUserServiceGetGlsAccessTokenTwitch();
s32 PS4_SYSV_ABI sceUserServiceGetGlsAccessTokenUstream();
s32 PS4_SYSV_ABI sceUserServiceGetGlsAnonymousUserId();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBcTags();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBcTitle();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBroadcastChannel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBroadcastersComment();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBroadcastersCommentColor();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBroadcastService();
s32 PS4_SYSV_ABI sceUserServiceGetGlsBroadcastUiLayout();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCamCrop();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraBgFilter();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraBrightness();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraChromaKeyLevel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraContrast();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraDepthLevel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraEdgeLevel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraEffect();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraEliminationLevel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraPosition();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraReflection();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraSize();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCameraTransparency();
s32 PS4_SYSV_ABI sceUserServiceGetGlsCommunityId();
s32 PS4_SYSV_ABI sceUserServiceGetGlsFloatingMessage();
s32 PS4_SYSV_ABI sceUserServiceGetGlsHintFlag();
s32 PS4_SYSV_ABI sceUserServiceGetGlsInitSpectating();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsCameraHidden();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsFacebookEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsMuteEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsRecDisabled();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsRecievedMessageHidden();
s32 PS4_SYSV_ABI sceUserServiceGetGlsIsTwitterEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLanguageFilter();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLfpsSortOrder();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLiveQuality();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLiveQuality2();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLiveQuality3();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLiveQuality4();
s32 PS4_SYSV_ABI sceUserServiceGetGlsLiveQuality5();
s32 PS4_SYSV_ABI sceUserServiceGetGlsMessageFilterLevel();
s32 PS4_SYSV_ABI sceUserServiceGetGlsTtsFlags();
s32 PS4_SYSV_ABI sceUserServiceGetGlsTtsPitch();
s32 PS4_SYSV_ABI sceUserServiceGetGlsTtsSpeed();
s32 PS4_SYSV_ABI sceUserServiceGetGlsTtsVolume();
s32 PS4_SYSV_ABI sceUserServiceGetHmuBrightness();
s32 PS4_SYSV_ABI sceUserServiceGetHmuZoom();
s32 PS4_SYSV_ABI sceUserServiceGetHoldAudioOutDevice();
s32 PS4_SYSV_ABI sceUserServiceGetHomeDirectory();
s32 PS4_SYSV_ABI sceUserServiceGetImeAutoCapitalEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetImeInitFlag();
s32 PS4_SYSV_ABI sceUserServiceGetImeInputType();
s32 PS4_SYSV_ABI sceUserServiceGetImeLastUnit();
s32 PS4_SYSV_ABI sceUserServiceGetImePointerMode();
s32 PS4_SYSV_ABI sceUserServiceGetImePredictiveTextEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetImeRunCount();
s32 PS4_SYSV_ABI sceUserServiceGetInitialUser();
s32 PS4_SYSV_ABI sceUserServiceGetIPDLeft();
s32 PS4_SYSV_ABI sceUserServiceGetIPDRight();
s32 PS4_SYSV_ABI sceUserServiceGetIsFakePlus();
s32 PS4_SYSV_ABI sceUserServiceGetIsQuickSignup();
s32 PS4_SYSV_ABI sceUserServiceGetIsRemotePlayAllowed();
s32 PS4_SYSV_ABI sceUserServiceGetJapaneseInputType();
s32 PS4_SYSV_ABI sceUserServiceGetKeyboardType();
s32 PS4_SYSV_ABI sceUserServiceGetKeyRepeatSpeed();
s32 PS4_SYSV_ABI sceUserServiceGetKeyRepeatStartingTime();
s32 PS4_SYSV_ABI sceUserServiceGetKratosPrimaryUser();
s32 PS4_SYSV_ABI sceUserServiceGetLastLoginOrder();
s32 PS4_SYSV_ABI sceUserServiceGetLightBarBaseBrightness();
s32 PS4_SYSV_ABI sceUserServiceGetLoginFlag();
s32 PS4_SYSV_ABI sceUserServiceGetLoginUserIdList();
s32 PS4_SYSV_ABI sceUserServiceGetMicLevel();
s32 PS4_SYSV_ABI sceUserServiceGetMouseHandType();
s32 PS4_SYSV_ABI sceUserServiceGetMousePointerSpeed();
s32 PS4_SYSV_ABI sceUserServiceGetNotificationBehavior();
s32 PS4_SYSV_ABI sceUserServiceGetNotificationSettings();
s32 PS4_SYSV_ABI sceUserServiceGetNpAccountId();
s32 PS4_SYSV_ABI sceUserServiceGetNpAccountUpgradeFlag();
s32 PS4_SYSV_ABI sceUserServiceGetNpAge();
s32 PS4_SYSV_ABI sceUserServiceGetNpAuthErrorFlag();
s32 PS4_SYSV_ABI sceUserServiceGetNpCountryCode();
s32 PS4_SYSV_ABI sceUserServiceGetNpDateOfBirth();
s32 PS4_SYSV_ABI sceUserServiceGetNpEnv();
s32 PS4_SYSV_ABI sceUserServiceGetNpLanguageCode();
s32 PS4_SYSV_ABI sceUserServiceGetNpLanguageCode2();
s32 PS4_SYSV_ABI sceUserServiceGetNpLoginId();
s32 PS4_SYSV_ABI sceUserServiceGetNpMAccountId();
s32 PS4_SYSV_ABI sceUserServiceGetNpNpId();
s32 PS4_SYSV_ABI sceUserServiceGetNpOfflineAccountAdult();
s32 PS4_SYSV_ABI sceUserServiceGetNpOfflineAccountId();
s32 PS4_SYSV_ABI sceUserServiceGetNpOnlineId();
s32 PS4_SYSV_ABI sceUserServiceGetNpSubAccount();
s32 PS4_SYSV_ABI sceUserServiceGetPadSpeakerVolume();
s32 PS4_SYSV_ABI sceUserServiceGetParentalBdAge();
s32 PS4_SYSV_ABI sceUserServiceGetParentalBrowser();
s32 PS4_SYSV_ABI sceUserServiceGetParentalDvd();
s32 PS4_SYSV_ABI sceUserServiceGetParentalDvdRegion();
s32 PS4_SYSV_ABI sceUserServiceGetParentalGame();
s32 PS4_SYSV_ABI sceUserServiceGetParentalGameAgeLevel();
s32 PS4_SYSV_ABI sceUserServiceGetParentalMorpheus();
s32 PS4_SYSV_ABI sceUserServiceGetPartyMuteList();
s32 PS4_SYSV_ABI sceUserServiceGetPartyMuteListA();
s32 PS4_SYSV_ABI sceUserServiceGetPartySettingFlags();
s32 PS4_SYSV_ABI sceUserServiceGetPasscode();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcAdditionalTime();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcFlag();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcFridayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcFridayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcFridayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcMode();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcMondayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcMondayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcMondayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcPlayTime();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcPlayTimeLastUpdated();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSaturdayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSaturdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSaturdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSundayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSundayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcSundayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcThursdayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcThursdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcThursdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcTuesdayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcTuesdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcTuesdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcTzOffset();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcWednesdayDuration();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcWednesdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceGetPbtcWednesdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceGetPlayTogetherFlags();
s32 PS4_SYSV_ABI sceUserServiceGetPsnPasswordForDebug();
s32 PS4_SYSV_ABI sceUserServiceGetRegisteredHomeUserIdList();
s32 PS4_SYSV_ABI sceUserServiceGetSaveDataAutoUpload();
s32 PS4_SYSV_ABI sceUserServiceGetSaveDataSort();
s32 PS4_SYSV_ABI sceUserServiceGetSaveDataTutorialFlag();
s32 PS4_SYSV_ABI sceUserServiceGetSecureHomeDirectory();
s32 PS4_SYSV_ABI sceUserServiceGetShareButtonAssign();
s32 PS4_SYSV_ABI sceUserServiceGetShareDailymotionAccessToken();
s32 PS4_SYSV_ABI sceUserServiceGetShareDailymotionRefreshToken();
s32 PS4_SYSV_ABI sceUserServiceGetSharePlayFlags();
s32 PS4_SYSV_ABI sceUserServiceGetSharePlayFramerateHost();
s32 PS4_SYSV_ABI sceUserServiceGetSharePlayResolutionHost();
s32 PS4_SYSV_ABI sceUserServiceGetShareStatus();
s32 PS4_SYSV_ABI sceUserServiceGetShareStatus2();
s32 PS4_SYSV_ABI sceUserServiceGetSystemLoggerHashedAccountId();
s32 PS4_SYSV_ABI sceUserServiceGetSystemLoggerHashedAccountIdClockType();
s32 PS4_SYSV_ABI sceUserServiceGetSystemLoggerHashedAccountIdParam();
s32 PS4_SYSV_ABI sceUserServiceGetSystemLoggerHashedAccountIdTtl();
s32 PS4_SYSV_ABI sceUserServiceGetTeamShowAboutTeam();
s32 PS4_SYSV_ABI sceUserServiceGetThemeBgImageDimmer();
s32 PS4_SYSV_ABI sceUserServiceGetThemeBgImageWaveColor();
s32 PS4_SYSV_ABI sceUserServiceGetThemeBgImageZoom();
s32 PS4_SYSV_ABI sceUserServiceGetThemeEntitlementId();
s32 PS4_SYSV_ABI sceUserServiceGetThemeHomeShareOwner();
s32 PS4_SYSV_ABI sceUserServiceGetThemeTextShadow();
s32 PS4_SYSV_ABI sceUserServiceGetThemeWaveColor();
s32 PS4_SYSV_ABI sceUserServiceGetTopMenuLimitItem();
s32 PS4_SYSV_ABI sceUserServiceGetTopMenuNotificationFlag();
s32 PS4_SYSV_ABI sceUserServiceGetTopMenuTutorialFlag();
s32 PS4_SYSV_ABI sceUserServiceGetTraditionalChineseInputType();
s32 PS4_SYSV_ABI sceUserServiceGetUserColor();
s32 PS4_SYSV_ABI sceUserServiceGetUserGroupName();
s32 PS4_SYSV_ABI sceUserServiceGetUserGroupNameList();
s32 PS4_SYSV_ABI sceUserServiceGetUserGroupNum();
s32 PS4_SYSV_ABI sceUserServiceGetUserName();
s32 PS4_SYSV_ABI sceUserServiceGetUserStatus();
s32 PS4_SYSV_ABI sceUserServiceGetVibrationEnabled();
s32 PS4_SYSV_ABI sceUserServiceGetVoiceRecognitionLastUsedOsk();
s32 PS4_SYSV_ABI sceUserServiceGetVoiceRecognitionTutorialState();
s32 PS4_SYSV_ABI sceUserServiceGetVolumeForController();
s32 PS4_SYSV_ABI sceUserServiceGetVolumeForGenericUSB();
s32 PS4_SYSV_ABI sceUserServiceGetVolumeForMorpheusSidetone();
s32 PS4_SYSV_ABI sceUserServiceGetVolumeForSidetone();
s32 PS4_SYSV_ABI sceUserServiceInitialize();
s32 PS4_SYSV_ABI sceUserServiceInitialize2();
s32 PS4_SYSV_ABI sceUserServiceIsGuestUser();
s32 PS4_SYSV_ABI sceUserServiceIsKratosPrimaryUser();
s32 PS4_SYSV_ABI sceUserServiceIsKratosUser();
s32 PS4_SYSV_ABI sceUserServiceIsLoggedIn();
s32 PS4_SYSV_ABI sceUserServiceIsLoggedInWithoutLock();
s32 PS4_SYSV_ABI sceUserServiceIsSharePlayClientUser();
s32 PS4_SYSV_ABI sceUserServiceIsUserStorageAccountBound();
s32 PS4_SYSV_ABI sceUserServiceLogin();
s32 PS4_SYSV_ABI sceUserServiceLogout();
s32 PS4_SYSV_ABI sceUserServiceSetAccessibilityKeyremapData();
s32 PS4_SYSV_ABI sceUserServiceSetAccessibilityKeyremapEnable();
s32 PS4_SYSV_ABI sceUserServiceSetAccessibilityZoom();
s32 PS4_SYSV_ABI sceUserServiceSetAccountRemarks();
s32 PS4_SYSV_ABI sceUserServiceSetAgeVerified();
s32 PS4_SYSV_ABI sceUserServiceSetAppearOfflineSetting();
s32 PS4_SYSV_ABI sceUserServiceSetAppSortOrder();
s32 PS4_SYSV_ABI sceUserServiceSetAutoLoginEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetCreatedVersion();
s32 PS4_SYSV_ABI sceUserServiceSetDiscPlayerFlag();
s32 PS4_SYSV_ABI sceUserServiceSetEventCalendarType();
s32 PS4_SYSV_ABI sceUserServiceSetEventFilterTeamEvent();
s32 PS4_SYSV_ABI sceUserServiceSetEventSortEvent();
s32 PS4_SYSV_ABI sceUserServiceSetEventSortTitle();
s32 PS4_SYSV_ABI sceUserServiceSetEventUiFlag();
s32 PS4_SYSV_ABI sceUserServiceSetFaceRecognitionDeleteCount();
s32 PS4_SYSV_ABI sceUserServiceSetFaceRecognitionRegisterCount();
s32 PS4_SYSV_ABI sceUserServiceSetFileBrowserFilter();
s32 PS4_SYSV_ABI sceUserServiceSetFileBrowserSortContent();
s32 PS4_SYSV_ABI sceUserServiceSetFileBrowserSortTitle();
s32 PS4_SYSV_ABI sceUserServiceSetFileSelectorFilter();
s32 PS4_SYSV_ABI sceUserServiceSetFileSelectorSortContent();
s32 PS4_SYSV_ABI sceUserServiceSetFileSelectorSortTitle();
s32 PS4_SYSV_ABI sceUserServiceSetForegroundUser();
s32 PS4_SYSV_ABI sceUserServiceSetFriendCustomListLastFocus();
s32 PS4_SYSV_ABI sceUserServiceSetFriendFlag();
s32 PS4_SYSV_ABI sceUserServiceSetGlsAccessTokenNiconicoLive();
s32 PS4_SYSV_ABI sceUserServiceSetGlsAccessTokenTwitch();
s32 PS4_SYSV_ABI sceUserServiceSetGlsAccessTokenUstream();
s32 PS4_SYSV_ABI sceUserServiceSetGlsAnonymousUserId();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBcTags();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBcTitle();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBroadcastChannel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBroadcastersComment();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBroadcastersCommentColor();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBroadcastService();
s32 PS4_SYSV_ABI sceUserServiceSetGlsBroadcastUiLayout();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCamCrop();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraBgFilter();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraBrightness();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraChromaKeyLevel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraContrast();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraDepthLevel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraEdgeLevel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraEffect();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraEliminationLevel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraPosition();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraReflection();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraSize();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCameraTransparency();
s32 PS4_SYSV_ABI sceUserServiceSetGlsCommunityId();
s32 PS4_SYSV_ABI sceUserServiceSetGlsFloatingMessage();
s32 PS4_SYSV_ABI sceUserServiceSetGlsHintFlag();
s32 PS4_SYSV_ABI sceUserServiceSetGlsInitSpectating();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsCameraHidden();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsFacebookEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsMuteEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsRecDisabled();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsRecievedMessageHidden();
s32 PS4_SYSV_ABI sceUserServiceSetGlsIsTwitterEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLanguageFilter();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLfpsSortOrder();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLiveQuality();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLiveQuality2();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLiveQuality3();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLiveQuality4();
s32 PS4_SYSV_ABI sceUserServiceSetGlsLiveQuality5();
s32 PS4_SYSV_ABI sceUserServiceSetGlsMessageFilterLevel();
s32 PS4_SYSV_ABI sceUserServiceSetGlsTtsFlags();
s32 PS4_SYSV_ABI sceUserServiceSetGlsTtsPitch();
s32 PS4_SYSV_ABI sceUserServiceSetGlsTtsSpeed();
s32 PS4_SYSV_ABI sceUserServiceSetGlsTtsVolume();
s32 PS4_SYSV_ABI sceUserServiceSetHmuBrightness();
s32 PS4_SYSV_ABI sceUserServiceSetHmuZoom();
s32 PS4_SYSV_ABI sceUserServiceSetHoldAudioOutDevice();
s32 PS4_SYSV_ABI sceUserServiceSetImeAutoCapitalEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetImeInitFlag();
s32 PS4_SYSV_ABI sceUserServiceSetImeInputType();
s32 PS4_SYSV_ABI sceUserServiceSetImeLastUnit();
s32 PS4_SYSV_ABI sceUserServiceSetImePointerMode();
s32 PS4_SYSV_ABI sceUserServiceSetImePredictiveTextEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetImeRunCount();
s32 PS4_SYSV_ABI sceUserServiceSetIPDLeft();
s32 PS4_SYSV_ABI sceUserServiceSetIPDRight();
s32 PS4_SYSV_ABI sceUserServiceSetIsFakePlus();
s32 PS4_SYSV_ABI sceUserServiceSetIsQuickSignup();
s32 PS4_SYSV_ABI sceUserServiceSetIsRemotePlayAllowed();
s32 PS4_SYSV_ABI sceUserServiceSetJapaneseInputType();
s32 PS4_SYSV_ABI sceUserServiceSetKeyboardType();
s32 PS4_SYSV_ABI sceUserServiceSetKeyRepeatSpeed();
s32 PS4_SYSV_ABI sceUserServiceSetKeyRepeatStartingTime();
s32 PS4_SYSV_ABI sceUserServiceSetLightBarBaseBrightness();
s32 PS4_SYSV_ABI sceUserServiceSetLoginFlag();
s32 PS4_SYSV_ABI sceUserServiceSetMicLevel();
s32 PS4_SYSV_ABI sceUserServiceSetMouseHandType();
s32 PS4_SYSV_ABI sceUserServiceSetMousePointerSpeed();
s32 PS4_SYSV_ABI sceUserServiceSetNotificationBehavior();
s32 PS4_SYSV_ABI sceUserServiceSetNotificationSettings();
s32 PS4_SYSV_ABI sceUserServiceSetNpAccountUpgradeFlag();
s32 PS4_SYSV_ABI sceUserServiceSetNpAge();
s32 PS4_SYSV_ABI sceUserServiceSetNpAuthErrorFlag();
s32 PS4_SYSV_ABI sceUserServiceSetNpCountryCode();
s32 PS4_SYSV_ABI sceUserServiceSetNpDateOfBirth();
s32 PS4_SYSV_ABI sceUserServiceSetNpEnv();
s32 PS4_SYSV_ABI sceUserServiceSetNpLanguageCode();
s32 PS4_SYSV_ABI sceUserServiceSetNpLanguageCode2();
s32 PS4_SYSV_ABI sceUserServiceSetNpLoginId();
s32 PS4_SYSV_ABI sceUserServiceSetNpMAccountId();
s32 PS4_SYSV_ABI sceUserServiceSetNpNpId();
s32 PS4_SYSV_ABI sceUserServiceSetNpOfflineAccountAdult();
s32 PS4_SYSV_ABI sceUserServiceSetNpOnlineId();
s32 PS4_SYSV_ABI sceUserServiceSetNpSubAccount();
s32 PS4_SYSV_ABI sceUserServiceSetPadSpeakerVolume();
s32 PS4_SYSV_ABI sceUserServiceSetParentalBdAge();
s32 PS4_SYSV_ABI sceUserServiceSetParentalBrowser();
s32 PS4_SYSV_ABI sceUserServiceSetParentalDvd();
s32 PS4_SYSV_ABI sceUserServiceSetParentalDvdRegion();
s32 PS4_SYSV_ABI sceUserServiceSetParentalGame();
s32 PS4_SYSV_ABI sceUserServiceSetParentalGameAgeLevel();
s32 PS4_SYSV_ABI sceUserServiceSetParentalMorpheus();
s32 PS4_SYSV_ABI sceUserServiceSetPartyMuteList();
s32 PS4_SYSV_ABI sceUserServiceSetPartyMuteListA();
s32 PS4_SYSV_ABI sceUserServiceSetPartySettingFlags();
s32 PS4_SYSV_ABI sceUserServiceSetPasscode();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcAdditionalTime();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcFlag();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcFridayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcFridayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcFridayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcMode();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcMondayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcMondayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcMondayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcPlayTime();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcPlayTimeLastUpdated();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSaturdayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSaturdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSaturdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSundayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSundayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcSundayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcThursdayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcThursdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcThursdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcTuesdayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcTuesdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcTuesdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcTzOffset();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcWednesdayDuration();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcWednesdayHoursEnd();
s32 PS4_SYSV_ABI sceUserServiceSetPbtcWednesdayHoursStart();
s32 PS4_SYSV_ABI sceUserServiceSetPlayTogetherFlags();
s32 PS4_SYSV_ABI sceUserServiceSetPsnPasswordForDebug();
s32 PS4_SYSV_ABI sceUserServiceSetSaveDataAutoUpload();
s32 PS4_SYSV_ABI sceUserServiceSetSaveDataSort();
s32 PS4_SYSV_ABI sceUserServiceSetSaveDataTutorialFlag();
s32 PS4_SYSV_ABI sceUserServiceSetShareButtonAssign();
s32 PS4_SYSV_ABI sceUserServiceSetShareDailymotionAccessToken();
s32 PS4_SYSV_ABI sceUserServiceSetShareDailymotionRefreshToken();
s32 PS4_SYSV_ABI sceUserServiceSetSharePlayFlags();
s32 PS4_SYSV_ABI sceUserServiceSetSharePlayFramerateHost();
s32 PS4_SYSV_ABI sceUserServiceSetSharePlayResolutionHost();
s32 PS4_SYSV_ABI sceUserServiceSetShareStatus();
s32 PS4_SYSV_ABI sceUserServiceSetShareStatus2();
s32 PS4_SYSV_ABI sceUserServiceSetSystemLoggerHashedAccountId();
s32 PS4_SYSV_ABI sceUserServiceSetSystemLoggerHashedAccountIdClockType();
s32 PS4_SYSV_ABI sceUserServiceSetSystemLoggerHashedAccountIdParam();
s32 PS4_SYSV_ABI sceUserServiceSetSystemLoggerHashedAccountIdTtl();
s32 PS4_SYSV_ABI sceUserServiceSetTeamShowAboutTeam();
s32 PS4_SYSV_ABI sceUserServiceSetThemeBgImageDimmer();
s32 PS4_SYSV_ABI sceUserServiceSetThemeBgImageWaveColor();
s32 PS4_SYSV_ABI sceUserServiceSetThemeBgImageZoom();
s32 PS4_SYSV_ABI sceUserServiceSetThemeEntitlementId();
s32 PS4_SYSV_ABI sceUserServiceSetThemeHomeShareOwner();
s32 PS4_SYSV_ABI sceUserServiceSetThemeTextShadow();
s32 PS4_SYSV_ABI sceUserServiceSetThemeWaveColor();
s32 PS4_SYSV_ABI sceUserServiceSetTopMenuLimitItem();
s32 PS4_SYSV_ABI sceUserServiceSetTopMenuNotificationFlag();
s32 PS4_SYSV_ABI sceUserServiceSetTopMenuTutorialFlag();
s32 PS4_SYSV_ABI sceUserServiceSetTraditionalChineseInputType();
s32 PS4_SYSV_ABI sceUserServiceSetUserGroupIndex();
s32 PS4_SYSV_ABI sceUserServiceSetUserGroupName();
s32 PS4_SYSV_ABI sceUserServiceSetUserName();
s32 PS4_SYSV_ABI sceUserServiceSetUserStatus();
s32 PS4_SYSV_ABI sceUserServiceSetVibrationEnabled();
s32 PS4_SYSV_ABI sceUserServiceSetVoiceRecognitionLastUsedOsk();
s32 PS4_SYSV_ABI sceUserServiceSetVoiceRecognitionTutorialState();
s32 PS4_SYSV_ABI sceUserServiceSetVolumeForController();
s32 PS4_SYSV_ABI sceUserServiceSetVolumeForGenericUSB();
s32 PS4_SYSV_ABI sceUserServiceSetVolumeForMorpheusSidetone();
s32 PS4_SYSV_ABI sceUserServiceSetVolumeForSidetone();
s32 PS4_SYSV_ABI sceUserServiceTerminate();
s32 PS4_SYSV_ABI Func_8AC6DC4168D5FEA5();
s32 PS4_SYSV_ABI Func_A6BDC9DFDAFD02B4();
s32 PS4_SYSV_ABI Func_BB9491DFE6B4953C();
s32 PS4_SYSV_ABI Func_D2B814603E7B4477();

void RegisterlibSceUserService(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::UserService