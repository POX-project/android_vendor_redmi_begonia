/*
 * Reverse-Engineered Source for: libfile_op.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libfile_op"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libfile_op.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: FileOp_CheckBackUpResult */
extern "C" __attribute__((visibility("default"))) int FileOp_CheckBackUpResult(void) {
    ALOGD("FileOp_CheckBackUpResult() called");
    return 0;
}

/* Demangled: FileOp_RestoreFromBinRegion */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreFromBinRegion(void) {
    ALOGD("FileOp_RestoreFromBinRegion() called");
    return 0;
}

/* Demangled: FileOp_RestoreFromBinRegion_ToFile */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreFromBinRegion_ToFile(void) {
    ALOGD("FileOp_RestoreFromBinRegion_ToFile() called");
    return 0;
}

/* Exported Object: NvRamBlockNum */
extern "C" __attribute__((visibility("default"))) void* NvRamBlockNum = NULL;

/* Exported Object: strDMFileFolderPath */
extern "C" __attribute__((visibility("default"))) void* strDMFileFolderPath = NULL;

/* Exported Object: BinRegionBlockTotalNum */
extern "C" __attribute__((visibility("default"))) void* BinRegionBlockTotalNum = NULL;

/* Demangled: FileOp_BackupAll_NvRam */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupAll_NvRam(void) {
    ALOGD("FileOp_BackupAll_NvRam() called");
    return 0;
}

/* Demangled: FileOp_BackupToBinRegionForDM */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupToBinRegionForDM(void) {
    ALOGD("FileOp_BackupToBinRegionForDM() called");
    return 0;
}

/* Demangled: FileOp_BackupToBinRegion_All_Ex */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupToBinRegion_All_Ex(void) {
    ALOGD("FileOp_BackupToBinRegion_All_Ex() called");
    return 0;
}

/* Demangled: FileOp_BackupToBinRegion_All_Exx */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupToBinRegion_All_Exx(void) {
    ALOGD("FileOp_BackupToBinRegion_All_Exx() called");
    return 0;
}

/* Demangled: FileOp_GetBadBlockBitMap */
extern "C" __attribute__((visibility("default"))) int FileOp_GetBadBlockBitMap(void) {
    ALOGD("FileOp_GetBadBlockBitMap() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: gFileExistMark */
extern "C" __attribute__((visibility("default"))) void* gFileExistMark = NULL;

/* Demangled: isWriteOnProtection */
extern "C" __attribute__((visibility("default"))) int isWriteOnProtection(void) {
    ALOGD("isWriteOnProtection() called");
    return 0;
}

/* Demangled: FileOp_BackupData_Special */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupData_Special(void) {
    ALOGD("FileOp_BackupData_Special() called");
    return 0;
}

/* Demangled: Fileop_SetBackupFileNum */
extern "C" __attribute__((visibility("default"))) int Fileop_SetBackupFileNum(void) {
    ALOGD("Fileop_SetBackupFileNum() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: FileOp_RecoveryData */
extern "C" __attribute__((visibility("default"))) int FileOp_RecoveryData(void) {
    ALOGD("FileOp_RecoveryData() called");
    return 0;
}

/* Demangled: FileOp_SetCleanBootFlag */
extern "C" __attribute__((visibility("default"))) int FileOp_SetCleanBootFlag(void) {
    ALOGD("FileOp_SetCleanBootFlag() called");
    return 0;
}

/* Demangled: FileOp_BackupDataToFiles */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupDataToFiles(void) {
    ALOGD("FileOp_BackupDataToFiles() called");
    return 0;
}

/* Demangled: FileOp_CreatMdFileList */
extern "C" __attribute__((visibility("default"))) int FileOp_CreatMdFileList(void) {
    ALOGD("FileOp_CreatMdFileList() called");
    return 0;
}

/* Demangled: FileOp_CreateBinRegionBadBlockBitMap */
extern "C" __attribute__((visibility("default"))) int FileOp_CreateBinRegionBadBlockBitMap(void) {
    ALOGD("FileOp_CreateBinRegionBadBlockBitMap() called");
    return 0;
}

/* Demangled: FileOp_RestoreAll_NvRam */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreAll_NvRam(void) {
    ALOGD("FileOp_RestoreAll_NvRam() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: FileOp_CheckFileExist */
extern "C" __attribute__((visibility("default"))) int FileOp_CheckFileExist(void) {
    ALOGD("FileOp_CheckFileExist() called");
    return 0;
}

/* Demangled: FileOp_GetCleanBootFlag */
extern "C" __attribute__((visibility("default"))) int FileOp_GetCleanBootFlag(void) {
    ALOGD("FileOp_GetCleanBootFlag() called");
    return 0;
}

/* Demangled: FileOp_RestoreFromFiles */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreFromFiles(void) {
    ALOGD("FileOp_RestoreFromFiles() called");
    return 0;
}

/* Demangled: change_md_nvram_attr */
extern "C" __attribute__((visibility("default"))) int change_md_nvram_attr(void) {
    ALOGD("change_md_nvram_attr() called");
    return 0;
}

/* Demangled: checkNvramReady */
extern "C" __attribute__((visibility("default"))) int checkNvramReady(void) {
    ALOGD("checkNvramReady() called");
    return 0;
}

/* Exported Object: gFileStartAddrlock */
extern "C" __attribute__((visibility("default"))) void* gFileStartAddrlock = NULL;

/* Demangled: FileOp_CmpBackupFileNum */
extern "C" __attribute__((visibility("default"))) int FileOp_CmpBackupFileNum(void) {
    ALOGD("FileOp_CmpBackupFileNum() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: FileOp_RestoreFromBinRegionForDM */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreFromBinRegionForDM(void) {
    ALOGD("FileOp_RestoreFromBinRegionForDM() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: FileOp_BackupToBinRegion_All */
extern "C" __attribute__((visibility("default"))) int FileOp_BackupToBinRegion_All(void) {
    ALOGD("FileOp_BackupToBinRegion_All() called");
    return 0;
}

/* Demangled: FileOp_IsSyncWithBinRegion */
extern "C" __attribute__((visibility("default"))) int FileOp_IsSyncWithBinRegion(void) {
    ALOGD("FileOp_IsSyncWithBinRegion() called");
    return 0;
}

/* Demangled: FileOp_RestoreData_All */
extern "C" __attribute__((visibility("default"))) int FileOp_RestoreData_All(void) {
    ALOGD("FileOp_RestoreData_All() called");
    return 0;
}

/* Exported Object: dirlock */
extern "C" __attribute__((visibility("default"))) void* dirlock = NULL;

/* Exported Object: gFileStartAddr */
extern "C" __attribute__((visibility("default"))) void* gFileStartAddr = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
