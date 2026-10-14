/*
 * Reverse-Engineered ABI Specification for: libfile_op.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libfile_op.so
 */

#ifndef BEGONIA_RE_LIBFILE_OP_H
#define BEGONIA_RE_LIBFILE_OP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: FileOp_CheckBackUpResult */
/* Demangled: FileOp_CheckBackUpResult */
int FileOp_CheckBackUpResult(void);

/* Symbol: FileOp_RestoreFromBinRegion */
/* Demangled: FileOp_RestoreFromBinRegion */
int FileOp_RestoreFromBinRegion(void);

/* Symbol: FileOp_RestoreFromBinRegion_ToFile */
/* Demangled: FileOp_RestoreFromBinRegion_ToFile */
int FileOp_RestoreFromBinRegion_ToFile(void);

/* Symbol: NvRamBlockNum */
/* Demangled: NvRamBlockNum */
extern void* NvRamBlockNum;

/* Symbol: strDMFileFolderPath */
/* Demangled: strDMFileFolderPath */
extern void* strDMFileFolderPath;

/* Symbol: BinRegionBlockTotalNum */
/* Demangled: BinRegionBlockTotalNum */
extern void* BinRegionBlockTotalNum;

/* Symbol: FileOp_BackupAll_NvRam */
/* Demangled: FileOp_BackupAll_NvRam */
int FileOp_BackupAll_NvRam(void);

/* Symbol: FileOp_BackupToBinRegionForDM */
/* Demangled: FileOp_BackupToBinRegionForDM */
int FileOp_BackupToBinRegionForDM(void);

/* Symbol: FileOp_BackupToBinRegion_All_Ex */
/* Demangled: FileOp_BackupToBinRegion_All_Ex */
int FileOp_BackupToBinRegion_All_Ex(void);

/* Symbol: FileOp_BackupToBinRegion_All_Exx */
/* Demangled: FileOp_BackupToBinRegion_All_Exx */
int FileOp_BackupToBinRegion_All_Exx(void);

/* Symbol: FileOp_GetBadBlockBitMap */
/* Demangled: FileOp_GetBadBlockBitMap */
int FileOp_GetBadBlockBitMap(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gFileExistMark */
/* Demangled: gFileExistMark */
extern void* gFileExistMark;

/* Symbol: isWriteOnProtection */
/* Demangled: isWriteOnProtection */
int isWriteOnProtection(void);

/* Symbol: FileOp_BackupData_Special */
/* Demangled: FileOp_BackupData_Special */
int FileOp_BackupData_Special(void);

/* Symbol: Fileop_SetBackupFileNum */
/* Demangled: Fileop_SetBackupFileNum */
int Fileop_SetBackupFileNum(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: FileOp_RecoveryData */
/* Demangled: FileOp_RecoveryData */
int FileOp_RecoveryData(void);

/* Symbol: FileOp_SetCleanBootFlag */
/* Demangled: FileOp_SetCleanBootFlag */
int FileOp_SetCleanBootFlag(void);

/* Symbol: FileOp_BackupDataToFiles */
/* Demangled: FileOp_BackupDataToFiles */
int FileOp_BackupDataToFiles(void);

/* Symbol: FileOp_CreatMdFileList */
/* Demangled: FileOp_CreatMdFileList */
int FileOp_CreatMdFileList(void);

/* Symbol: FileOp_CreateBinRegionBadBlockBitMap */
/* Demangled: FileOp_CreateBinRegionBadBlockBitMap */
int FileOp_CreateBinRegionBadBlockBitMap(void);

/* Symbol: FileOp_RestoreAll_NvRam */
/* Demangled: FileOp_RestoreAll_NvRam */
int FileOp_RestoreAll_NvRam(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: FileOp_CheckFileExist */
/* Demangled: FileOp_CheckFileExist */
int FileOp_CheckFileExist(void);

/* Symbol: FileOp_GetCleanBootFlag */
/* Demangled: FileOp_GetCleanBootFlag */
int FileOp_GetCleanBootFlag(void);

/* Symbol: FileOp_RestoreFromFiles */
/* Demangled: FileOp_RestoreFromFiles */
int FileOp_RestoreFromFiles(void);

/* Symbol: change_md_nvram_attr */
/* Demangled: change_md_nvram_attr */
int change_md_nvram_attr(void);

/* Symbol: checkNvramReady */
/* Demangled: checkNvramReady */
int checkNvramReady(void);

/* Symbol: gFileStartAddrlock */
/* Demangled: gFileStartAddrlock */
extern void* gFileStartAddrlock;

/* Symbol: FileOp_CmpBackupFileNum */
/* Demangled: FileOp_CmpBackupFileNum */
int FileOp_CmpBackupFileNum(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: FileOp_RestoreFromBinRegionForDM */
/* Demangled: FileOp_RestoreFromBinRegionForDM */
int FileOp_RestoreFromBinRegionForDM(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: FileOp_BackupToBinRegion_All */
/* Demangled: FileOp_BackupToBinRegion_All */
int FileOp_BackupToBinRegion_All(void);

/* Symbol: FileOp_IsSyncWithBinRegion */
/* Demangled: FileOp_IsSyncWithBinRegion */
int FileOp_IsSyncWithBinRegion(void);

/* Symbol: FileOp_RestoreData_All */
/* Demangled: FileOp_RestoreData_All */
int FileOp_RestoreData_All(void);

/* Symbol: dirlock */
/* Demangled: dirlock */
extern void* dirlock;

/* Symbol: gFileStartAddr */
/* Demangled: gFileStartAddr */
extern void* gFileStartAddr;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFILE_OP_H */
