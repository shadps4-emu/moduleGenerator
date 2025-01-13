// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "common/types.h"

namespace Core::Loader {
class SymbolsResolver;
}

namespace Libraries::SaveData {

s32 PS4_SYSV_ABI sceSaveDataAbort();
s32 PS4_SYSV_ABI sceSaveDataBackup();
s32 PS4_SYSV_ABI sceSaveDataBindPsnAccount();
s32 PS4_SYSV_ABI sceSaveDataBindPsnAccountForSystemBackup();
s32 PS4_SYSV_ABI sceSaveDataChangeDatabase();
s32 PS4_SYSV_ABI sceSaveDataChangeInternal();
s32 PS4_SYSV_ABI sceSaveDataCheckBackupData();
s32 PS4_SYSV_ABI sceSaveDataCheckBackupDataForCdlg();
s32 PS4_SYSV_ABI sceSaveDataCheckBackupDataInternal();
s32 PS4_SYSV_ABI sceSaveDataCheckCloudData();
s32 PS4_SYSV_ABI sceSaveDataCheckIpmiIfSize();
s32 PS4_SYSV_ABI sceSaveDataCheckSaveDataBroken();
s32 PS4_SYSV_ABI sceSaveDataCheckSaveDataVersion();
s32 PS4_SYSV_ABI sceSaveDataCheckSaveDataVersionLatest();
s32 PS4_SYSV_ABI sceSaveDataClearProgress();
s32 PS4_SYSV_ABI sceSaveDataCopy5();
s32 PS4_SYSV_ABI sceSaveDataCreateUploadData();
s32 PS4_SYSV_ABI sceSaveDataDebug();
s32 PS4_SYSV_ABI sceSaveDataDebugCleanMount();
s32 PS4_SYSV_ABI sceSaveDataDebugCompiledSdkVersion();
s32 PS4_SYSV_ABI sceSaveDataDebugCreateSaveDataRoot();
s32 PS4_SYSV_ABI sceSaveDataDebugGetThreadId();
s32 PS4_SYSV_ABI sceSaveDataDebugRemoveSaveDataRoot();
s32 PS4_SYSV_ABI sceSaveDataDebugTarget();
s32 PS4_SYSV_ABI sceSaveDataDelete();
s32 PS4_SYSV_ABI sceSaveDataDelete5();
s32 PS4_SYSV_ABI sceSaveDataDeleteAllUser();
s32 PS4_SYSV_ABI sceSaveDataDeleteCloudData();
s32 PS4_SYSV_ABI sceSaveDataDeleteUser();
s32 PS4_SYSV_ABI sceSaveDataDirNameSearch();
s32 PS4_SYSV_ABI sceSaveDataDirNameSearchInternal();
s32 PS4_SYSV_ABI sceSaveDataDownload();
s32 PS4_SYSV_ABI sceSaveDataGetAllSize();
s32 PS4_SYSV_ABI sceSaveDataGetAppLaunchedUser();
s32 PS4_SYSV_ABI sceSaveDataGetAutoUploadConditions();
s32 PS4_SYSV_ABI sceSaveDataGetAutoUploadRequestInfo();
s32 PS4_SYSV_ABI sceSaveDataGetAutoUploadSetting();
s32 PS4_SYSV_ABI sceSaveDataGetBoundPsnAccountCount();
s32 PS4_SYSV_ABI sceSaveDataGetClientThreadPriority();
s32 PS4_SYSV_ABI sceSaveDataGetCloudQuotaInfo();
s32 PS4_SYSV_ABI sceSaveDataGetDataBaseFilePath();
s32 PS4_SYSV_ABI sceSaveDataGetEventInfo();
s32 PS4_SYSV_ABI sceSaveDataGetEventResult();
s32 PS4_SYSV_ABI sceSaveDataGetFormat();
s32 PS4_SYSV_ABI sceSaveDataGetMountedSaveDataCount();
s32 PS4_SYSV_ABI sceSaveDataGetMountInfo();
s32 PS4_SYSV_ABI sceSaveDataGetParam();
s32 PS4_SYSV_ABI sceSaveDataGetProgress();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataCount();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataMemory();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataMemory2();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataRootDir();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataRootPath();
s32 PS4_SYSV_ABI sceSaveDataGetSaveDataRootUsbPath();
s32 PS4_SYSV_ABI sceSaveDataGetSavePoint();
s32 PS4_SYSV_ABI sceSaveDataGetUpdatedDataCount();
s32 PS4_SYSV_ABI sceSaveDataInitialize();
s32 PS4_SYSV_ABI sceSaveDataInitialize2();
s32 PS4_SYSV_ABI sceSaveDataInitialize3();
s32 PS4_SYSV_ABI sceSaveDataInitializeForCdlg();
s32 PS4_SYSV_ABI sceSaveDataIsDeletingUsbDb();
s32 PS4_SYSV_ABI sceSaveDataIsMounted();
s32 PS4_SYSV_ABI sceSaveDataLoadIcon();
s32 PS4_SYSV_ABI sceSaveDataMount();
s32 PS4_SYSV_ABI sceSaveDataMount2();
s32 PS4_SYSV_ABI sceSaveDataMount5();
s32 PS4_SYSV_ABI sceSaveDataMountInternal();
s32 PS4_SYSV_ABI sceSaveDataMountSys();
s32 PS4_SYSV_ABI sceSaveDataPromote5();
s32 PS4_SYSV_ABI sceSaveDataRebuildDatabase();
s32 PS4_SYSV_ABI sceSaveDataRegisterEventCallback();
s32 PS4_SYSV_ABI sceSaveDataRestoreBackupData();
s32 PS4_SYSV_ABI sceSaveDataRestoreBackupDataForCdlg();
s32 PS4_SYSV_ABI sceSaveDataRestoreLoadSaveDataMemory();
s32 PS4_SYSV_ABI sceSaveDataSaveIcon();
s32 PS4_SYSV_ABI sceSaveDataSetAutoUploadSetting();
s32 PS4_SYSV_ABI sceSaveDataSetEventInfo();
s32 PS4_SYSV_ABI sceSaveDataSetParam();
s32 PS4_SYSV_ABI sceSaveDataSetSaveDataLibraryUser();
s32 PS4_SYSV_ABI sceSaveDataSetSaveDataMemory();
s32 PS4_SYSV_ABI sceSaveDataSetSaveDataMemory2();
s32 PS4_SYSV_ABI sceSaveDataSetupSaveDataMemory();
s32 PS4_SYSV_ABI sceSaveDataSetupSaveDataMemory2();
s32 PS4_SYSV_ABI sceSaveDataShutdownStart();
s32 PS4_SYSV_ABI sceSaveDataSupportedFakeBrokenStatus();
s32 PS4_SYSV_ABI sceSaveDataSyncCloudList();
s32 PS4_SYSV_ABI sceSaveDataSyncSaveDataMemory();
s32 PS4_SYSV_ABI sceSaveDataTerminate();
s32 PS4_SYSV_ABI sceSaveDataTransferringMount();
s32 PS4_SYSV_ABI sceSaveDataUmount();
s32 PS4_SYSV_ABI sceSaveDataUmountSys();
s32 PS4_SYSV_ABI sceSaveDataUmountWithBackup();
s32 PS4_SYSV_ABI sceSaveDataUnregisterEventCallback();
s32 PS4_SYSV_ABI sceSaveDataUpload();
s32 PS4_SYSV_ABI Func_02E4C4D201716422();

void RegisterlibSceSaveData(Core::Loader::SymbolsResolver* sym);
} // namespace Libraries::SaveData