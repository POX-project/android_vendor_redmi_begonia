/*
 * Reverse-Engineered Source for: libnvram.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libnvram"

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
#include "libnvram.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_BLOCK "/dev/block"
#define DEV_DEV_BLOCK "/dev/block/"
#define DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME "/dev/block/bootdevice/by-name"
#define DEV_DEV_BLOCK_BY_NAME "/dev/block/by-name"
#define DEV_DEV_MISC "/dev/misc"
#define DEV_DEV_NVRAM "/dev/nvram"
#define DEV_DEV_PRO_INFO "/dev/pro_info"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BOOTDEVICE_BY_NAME, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_BLOCK_BY_NAME, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_BLOCK_BY_NAME, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_BLOCK_BY_NAME, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_MISC, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MISC, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MISC, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_NVRAM, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_NVRAM, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_NVRAM, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_PRO_INFO, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_PRO_INFO, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_PRO_INFO, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: BinRegionBlockTotalNum */
extern "C" __attribute__((visibility("default"))) void* BinRegionBlockTotalNum = NULL;

/* Demangled: is_dt_compatible() */
extern "C" __attribute__((visibility("default"))) int _Z16is_dt_compatiblev(void) {
    ALOGD("_Z16is_dt_compatiblev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: fs_mgr_get_boot_config_from_kernel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_(void) {
    ALOGD("_Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_() called");
    return 0;
}

/* Demangled: NVM_CheckFileSize */
extern "C" __attribute__((visibility("default"))) int NVM_CheckFileSize(void) {
    ALOGD("NVM_CheckFileSize() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: __divmoddi4 */
extern "C" __attribute__((visibility("default"))) int __divmoddi4(void) {
    ALOGD("__divmoddi4() called");
    return 0;
}

/* Demangled: __aeabi_uidivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidivmod(void) {
    ALOGD("__aeabi_uidivmod() called");
    return 0;
}

/* Demangled: NVM_InSpecialLidList */
extern "C" __attribute__((visibility("default"))) int NVM_InSpecialLidList(void) {
    ALOGD("NVM_InSpecialLidList() called");
    return 0;
}

/* Exported Object: recoverlock */
extern "C" __attribute__((visibility("default"))) void* recoverlock = NULL;

/* Demangled: NVM_CloseFileDesc */
extern "C" __attribute__((visibility("default"))) int NVM_CloseFileDesc(void) {
    ALOGD("NVM_CloseFileDesc() called");
    return 0;
}

/* Demangled: NVM_CmpFileVerNo */
extern "C" __attribute__((visibility("default"))) int NVM_CmpFileVerNo(void) {
    ALOGD("NVM_CmpFileVerNo() called");
    return 0;
}

/* Exported Object: g_NVRAM_NVDATA_DEVICE */
extern "C" __attribute__((visibility("default"))) void* g_NVRAM_NVDATA_DEVICE = NULL;

/* Exported Object: nvram_platform_header_offset */
extern "C" __attribute__((visibility("default"))) void* nvram_platform_header_offset = NULL;

/* Demangled: get_android_dt_dir() */
extern "C" __attribute__((visibility("default"))) int _Z18get_android_dt_dirv(void) {
    ALOGD("_Z18get_android_dt_dirv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: Check_FileVerinFirstBoot */
extern "C" __attribute__((visibility("default"))) int Check_FileVerinFirstBoot(void) {
    ALOGD("Check_FileVerinFirstBoot() called");
    return 0;
}

/* Demangled: NVM_EraseDeviceBlock */
extern "C" __attribute__((visibility("default"))) int NVM_EraseDeviceBlock(void) {
    ALOGD("NVM_EraseDeviceBlock() called");
    return 0;
}

/* Demangled: NVM_SetCheckSum(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15NVM_SetCheckSumj(void) {
    ALOGD("_Z15NVM_SetCheckSumj() called");
    return 0;
}

/* Demangled: bool android::base::ParseInt<long long>(char const*, long long*, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_(void) {
    ALOGD("_ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetVerityDeviceName(android::fs_mgr::FstabEntry const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE(void) {
    ALOGD("_ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE() called");
    return 0;
}

/* Exported Object: g_NVRAM_BACKUP_DEVICE */
extern "C" __attribute__((visibility("default"))) void* g_NVRAM_BACKUP_DEVICE = NULL;

/* Demangled: android::fs_mgr::GetEntriesForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: __udivmodsi4 */
extern "C" __attribute__((visibility("default"))) int __udivmodsi4(void) {
    ALOGD("__udivmodsi4() called");
    return 0;
}

/* Demangled: __udivmoddi4 */
extern "C" __attribute__((visibility("default"))) int __udivmoddi4(void) {
    ALOGD("__udivmoddi4() called");
    return 0;
}

/* Demangled: NVM_HistoryLog */
extern "C" __attribute__((visibility("default"))) int NVM_HistoryLog(void) {
    ALOGD("NVM_HistoryLog() called");
    return 0;
}

/* Demangled: NVM_SetCheckNo(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z14NVM_SetCheckNoPKcb(void) {
    ALOGD("_Z14NVM_SetCheckNoPKcb() called");
    return 0;
}

/* Exported Object: nvram_platform_layout_version */
extern "C" __attribute__((visibility("default"))) void* nvram_platform_layout_version = NULL;

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetBootDevices() */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr14GetBootDevicesEv(void) {
    ALOGD("_ZN7android6fs_mgr14GetBootDevicesEv() called");
    return 0;
}

/* Demangled: NVM_UpdateFileVerNo */
extern "C" __attribute__((visibility("default"))) int NVM_UpdateFileVerNo(void) {
    ALOGD("NVM_UpdateFileVerNo() called");
    return 0;
}

/* Demangled: open_file_with_dirs(char const*, int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z19open_file_with_dirsPKcit(void) {
    ALOGD("_Z19open_file_with_dirsPKcit() called");
    return 0;
}

/* Exported Object: nvram_platform_log_block */
extern "C" __attribute__((visibility("default"))) void* nvram_platform_log_block = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NVM_AddBackupNum */
extern "C" __attribute__((visibility("default"))) int NVM_AddBackupNum(void) {
    ALOGD("NVM_AddBackupNum() called");
    return 0;
}

/* Demangled: NVM_CheckBackFlag */
extern "C" __attribute__((visibility("default"))) int NVM_CheckBackFlag(void) {
    ALOGD("NVM_CheckBackFlag() called");
    return 0;
}

/* Demangled: NVM_MiscIncSeqNum */
extern "C" __attribute__((visibility("default"))) int NVM_MiscIncSeqNum(void) {
    ALOGD("NVM_MiscIncSeqNum() called");
    return 0;
}

/* Exported Object: generateFileVerlock */
extern "C" __attribute__((visibility("default"))) void* generateFileVerlock = NULL;

/* Demangled: NVM_CheckFileInfo */
extern "C" __attribute__((visibility("default"))) int NVM_CheckFileInfo(void) {
    ALOGD("NVM_CheckFileInfo() called");
    return 0;
}

/* Demangled: NVM_ComputeBackflagCheckSum */
extern "C" __attribute__((visibility("default"))) int NVM_ComputeBackflagCheckSum(void) {
    ALOGD("NVM_ComputeBackflagCheckSum() called");
    return 0;
}

/* Demangled: android::fs_mgr::GetEntryForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void) {
    ALOGD("_ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE() called");
    return 0;
}

/* Exported Object: dirlock */
extern "C" __attribute__((visibility("default"))) void* dirlock = NULL;

/* Demangled: fs_mgr_update_for_slotselect(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE(void) {
    ALOGD("_Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: android::fs_mgr::TransformFstabForDsu(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry*, std::__1::allocator<android::fs_mgr::FstabEntry*> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry*>(android::fs_mgr::FstabEntry*&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_() called");
    return 0;
}

/* Demangled: NVM_ResetFileToDefault */
extern "C" __attribute__((visibility("default"))) int NVM_ResetFileToDefault(void) {
    ALOGD("NVM_ResetFileToDefault() called");
    return 0;
}

/* Demangled: NVM_RestoreFromBinRegion_OneFile */
extern "C" __attribute__((visibility("default"))) int NVM_RestoreFromBinRegion_OneFile(void) {
    ALOGD("NVM_RestoreFromBinRegion_OneFile() called");
    return 0;
}

/* Demangled: NVM_GetCfgFileTable(int) */
extern "C" __attribute__((visibility("default"))) int _Z19NVM_GetCfgFileTablei(void) {
    ALOGD("_Z19NVM_GetCfgFileTablei() called");
    return 0;
}

/* Demangled: fs_mgr_get_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void) {
    ALOGD("_Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_() called");
    return 0;
}

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: NVM_Init */
extern "C" __attribute__((visibility("default"))) int NVM_Init(void) {
    ALOGD("NVM_Init() called");
    return 0;
}

/* Exported Object: g_i4MaxNvRamLid */
extern "C" __attribute__((visibility("default"))) void* g_i4MaxNvRamLid = NULL;

/* Exported Object: nvram_platform_resv_block */
extern "C" __attribute__((visibility("default"))) void* nvram_platform_resv_block = NULL;

/* Demangled: bool android::base::ParseInt<int>(char const*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_(void) {
    ALOGD("_ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: NVM_MiscLog */
extern "C" __attribute__((visibility("default"))) int NVM_MiscLog(void) {
    ALOGD("NVM_MiscLog() called");
    return 0;
}

/* Exported Object: nvram_platform_DM_block */
extern "C" __attribute__((visibility("default"))) void* nvram_platform_DM_block = NULL;

/* Demangled: NVM_GetDeviceInfo */
extern "C" __attribute__((visibility("default"))) int NVM_GetDeviceInfo(void) {
    ALOGD("NVM_GetDeviceInfo() called");
    return 0;
}

/* Demangled: NVM_GetFileDesc */
extern "C" __attribute__((visibility("default"))) int NVM_GetFileDesc(void) {
    ALOGD("NVM_GetFileDesc() called");
    return 0;
}

/* Exported Object: gFileStartAddr */
extern "C" __attribute__((visibility("default"))) void* gFileStartAddr = NULL;

/* Demangled: fs_mgr_get_boot_config_from_kernel_cmdline(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
extern "C" __attribute__((visibility("default"))) int _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void) {
    ALOGD("_Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_() called");
    return 0;
}

/* Demangled: NVM_DataVerConvert */
extern "C" __attribute__((visibility("default"))) int NVM_DataVerConvert(void) {
    ALOGD("NVM_DataVerConvert() called");
    return 0;
}

/* Demangled: fs_mgr_get_other_slot_suffix() */
extern "C" __attribute__((visibility("default"))) int _Z28fs_mgr_get_other_slot_suffixv(void) {
    ALOGD("_Z28fs_mgr_get_other_slot_suffixv() called");
    return 0;
}

/* Demangled: NVM_CheckVerFile */
extern "C" __attribute__((visibility("default"))) int NVM_CheckVerFile(void) {
    ALOGD("NVM_CheckVerFile() called");
    return 0;
}

/* Exported Object: gFileNameArray */
extern "C" __attribute__((visibility("default"))) void* gFileNameArray = NULL;

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: fs_mgr_parse_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: NVM_GetLIDByName */
extern "C" __attribute__((visibility("default"))) int NVM_GetLIDByName(void) {
    ALOGD("NVM_GetLIDByName() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEED2Ev() called");
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

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: g_NVRAM_PROINFO_DEVICE */
extern "C" __attribute__((visibility("default"))) void* g_NVRAM_PROINFO_DEVICE = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char const*>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_(void) {
    ALOGD("_ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_() called");
    return 0;
}

/* Demangled: NVM_CheckMDBackFlag */
extern "C" __attribute__((visibility("default"))) int NVM_CheckMDBackFlag(void) {
    ALOGD("NVM_CheckMDBackFlag() called");
    return 0;
}

/* Demangled: NVM_HistoryLog_add_file(char const*, char const*, nvram_journal_handle*) */
extern "C" __attribute__((visibility("default"))) int _Z23NVM_HistoryLog_add_filePKcS0_P20nvram_journal_handle(void) {
    ALOGD("_Z23NVM_HistoryLog_add_filePKcS0_P20nvram_journal_handle() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: gFileStartAddrlock */
extern "C" __attribute__((visibility("default"))) void* gFileStartAddrlock = NULL;

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry>(android::fs_mgr::FstabEntry&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_() called");
    return 0;
}

/* Demangled: __mulodi4 */
extern "C" __attribute__((visibility("default"))) int __mulodi4(void) {
    ALOGD("__mulodi4() called");
    return 0;
}

/* Demangled: bool android::base::ParseUint<unsigned long long>(char const*, unsigned long long*, unsigned long long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android4base9ParseUintIyEEbPKcPT_S4_b(void) {
    ALOGD("_ZN7android4base9ParseUintIyEEbPKcPT_S4_b() called");
    return 0;
}

/* Demangled: NVM_CheckFileID */
extern "C" __attribute__((visibility("default"))) int NVM_CheckFileID(void) {
    ALOGD("NVM_CheckFileID() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NVM_ReadFileVerInfo */
extern "C" __attribute__((visibility("default"))) int NVM_ReadFileVerInfo(void) {
    ALOGD("NVM_ReadFileVerInfo() called");
    return 0;
}

/* Demangled: NVM_RestoreFromFiles_OneFile(int, int, char const*, bool*) */
extern "C" __attribute__((visibility("default"))) int _Z28NVM_RestoreFromFiles_OneFileiiPKcPb(void) {
    ALOGD("_Z28NVM_RestoreFromFiles_OneFileiiPKcPb() called");
    return 0;
}

/* Demangled: android::fs_mgr::ReadDefaultFstab(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: android::fs_mgr::ReadFstabFromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int> std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry&>(android::fs_mgr::FstabEntry&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const (&) [1]>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, char const (&) [1]) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: Check_UpdateStatus */
extern "C" __attribute__((visibility("default"))) int Check_UpdateStatus(void) {
    ALOGD("Check_UpdateStatus() called");
    return 0;
}

/* Exported Object: g_MISC_DEVICE */
extern "C" __attribute__((visibility("default"))) void* g_MISC_DEVICE = NULL;

/* Exported Object: nvram_init_flag */
extern "C" __attribute__((visibility("default"))) void* nvram_init_flag = NULL;

/* Exported Object: strVerInfo */
extern "C" __attribute__((visibility("default"))) void* strVerInfo = NULL;

/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_() called");
    return 0;
}

/* Demangled: fs_mgr_get_slot_suffix() */
extern "C" __attribute__((visibility("default"))) int _Z22fs_mgr_get_slot_suffixv(void) {
    ALOGD("_Z22fs_mgr_get_slot_suffixv() called");
    return 0;
}

/* Demangled: NVM_DataVerConvertAll */
extern "C" __attribute__((visibility("default"))) int NVM_DataVerConvertAll(void) {
    ALOGD("NVM_DataVerConvertAll() called");
    return 0;
}

/* Demangled: NVM_GenerateFileVer */
extern "C" __attribute__((visibility("default"))) int NVM_GenerateFileVer(void) {
    ALOGD("NVM_GenerateFileVer() called");
    return 0;
}

/* Demangled: NVM_ProtectDataFile */
extern "C" __attribute__((visibility("default"))) int NVM_ProtectDataFile(void) {
    ALOGD("NVM_ProtectDataFile() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NVM_HistoryLog_Time */
extern "C" __attribute__((visibility("default"))) int NVM_HistoryLog_Time(void) {
    ALOGD("NVM_HistoryLog_Time() called");
    return 0;
}

/* Demangled: NVM_ComputeCheckNo(char const*, char*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z18NVM_ComputeCheckNoPKcPcb(void) {
    ALOGD("_Z18NVM_ComputeCheckNoPKcPcb() called");
    return 0;
}

/* Demangled: android::fs_mgr::EnableMandatoryFlags(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void) {
    ALOGD("_ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE() called");
    return 0;
}

/* Demangled: NVM_CheckFile */
extern "C" __attribute__((visibility("default"))) int NVM_CheckFile(void) {
    ALOGD("NVM_CheckFile() called");
    return 0;
}

/* Exported Object: NvRamBlockNum */
extern "C" __attribute__((visibility("default"))) void* NvRamBlockNum = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: NVM_GetSequenceNum */
extern "C" __attribute__((visibility("default"))) int NVM_GetSequenceNum(void) {
    ALOGD("NVM_GetSequenceNum() called");
    return 0;
}

/* Demangled: NVM_MiscGetSeqNum */
extern "C" __attribute__((visibility("default"))) int NVM_MiscGetSeqNum(void) {
    ALOGD("NVM_MiscGetSeqNum() called");
    return 0;
}

/* Demangled: NVM_CheckData_OneFile(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z21NVM_CheckData_OneFileiPKc(void) {
    ALOGD("_Z21NVM_CheckData_OneFileiPKc() called");
    return 0;
}

/* Exported Object: nvram_gpt_flag */
extern "C" __attribute__((visibility("default"))) void* nvram_gpt_flag = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_() called");
    return 0;
}

/* Demangled: NVM_AddBackupFileNum */
extern "C" __attribute__((visibility("default"))) int NVM_AddBackupFileNum(void) {
    ALOGD("NVM_AddBackupFileNum() called");
    return 0;
}

/* Demangled: NVM_GetBackupFileNum */
extern "C" __attribute__((visibility("default"))) int NVM_GetBackupFileNum(void) {
    ALOGD("NVM_GetBackupFileNum() called");
    return 0;
}

/* Exported Object: g_LOG_DEVICE */
extern "C" __attribute__((visibility("default"))) void* g_LOG_DEVICE = NULL;

/* Demangled: android::fs_mgr::ReadFstabFromDt(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb(void) {
    ALOGD("_ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Demangled: NVM_IncSequenceNum */
extern "C" __attribute__((visibility("default"))) int NVM_IncSequenceNum(void) {
    ALOGD("NVM_IncSequenceNum() called");
    return 0;
}

/* Exported Object: backuplock */
extern "C" __attribute__((visibility("default"))) void* backuplock = NULL;

/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void) {
    ALOGD("_ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_() called");
    return 0;
}
