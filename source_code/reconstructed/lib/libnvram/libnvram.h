/*
 * Reverse-Engineered ABI Specification for: libnvram.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libnvram.so
 */

#ifndef BEGONIA_RE_LIBNVRAM_H
#define BEGONIA_RE_LIBNVRAM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: BinRegionBlockTotalNum */
/* Demangled: BinRegionBlockTotalNum */
extern void* BinRegionBlockTotalNum;

/* Symbol: _Z16is_dt_compatiblev */
/* Demangled: is_dt_compatible() */
int _Z16is_dt_compatiblev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_(void);

/* Symbol: NVM_CheckFileSize */
/* Demangled: NVM_CheckFileSize */
int NVM_CheckFileSize(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: NVM_InSpecialLidList */
/* Demangled: NVM_InSpecialLidList */
int NVM_InSpecialLidList(void);

/* Symbol: recoverlock */
/* Demangled: recoverlock */
extern void* recoverlock;

/* Symbol: NVM_CloseFileDesc */
/* Demangled: NVM_CloseFileDesc */
int NVM_CloseFileDesc(void);

/* Symbol: NVM_CmpFileVerNo */
/* Demangled: NVM_CmpFileVerNo */
int NVM_CmpFileVerNo(void);

/* Symbol: g_NVRAM_NVDATA_DEVICE */
/* Demangled: g_NVRAM_NVDATA_DEVICE */
extern void* g_NVRAM_NVDATA_DEVICE;

/* Symbol: nvram_platform_header_offset */
/* Demangled: nvram_platform_header_offset */
extern void* nvram_platform_header_offset;

/* Symbol: _Z18get_android_dt_dirv */
/* Demangled: get_android_dt_dir() */
int _Z18get_android_dt_dirv(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: Check_FileVerinFirstBoot */
/* Demangled: Check_FileVerinFirstBoot */
int Check_FileVerinFirstBoot(void);

/* Symbol: NVM_EraseDeviceBlock */
/* Demangled: NVM_EraseDeviceBlock */
int NVM_EraseDeviceBlock(void);

/* Symbol: _Z15NVM_SetCheckSumj */
/* Demangled: NVM_SetCheckSum(unsigned int) */
int _Z15NVM_SetCheckSumj(void);

/* Symbol: _ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<long long>(char const*, long long*, long long, long long) */
int _ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE */
/* Demangled: android::fs_mgr::GetVerityDeviceName(android::fs_mgr::FstabEntry const&) */
int _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE(void);

/* Symbol: g_NVRAM_BACKUP_DEVICE */
/* Demangled: g_NVRAM_BACKUP_DEVICE */
extern void* g_NVRAM_BACKUP_DEVICE;

/* Symbol: _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntriesForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: NVM_HistoryLog */
/* Demangled: NVM_HistoryLog */
int NVM_HistoryLog(void);

/* Symbol: _Z14NVM_SetCheckNoPKcb */
/* Demangled: NVM_SetCheckNo(char const*, bool) */
int _Z14NVM_SetCheckNoPKcb(void);

/* Symbol: nvram_platform_layout_version */
/* Demangled: nvram_platform_layout_version */
extern void* nvram_platform_layout_version;

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZN7android6fs_mgr14GetBootDevicesEv */
/* Demangled: android::fs_mgr::GetBootDevices() */
int _ZN7android6fs_mgr14GetBootDevicesEv(void);

/* Symbol: NVM_UpdateFileVerNo */
/* Demangled: NVM_UpdateFileVerNo */
int NVM_UpdateFileVerNo(void);

/* Symbol: _Z19open_file_with_dirsPKcit */
/* Demangled: open_file_with_dirs(char const*, int, unsigned short) */
int _Z19open_file_with_dirsPKcit(void);

/* Symbol: nvram_platform_log_block */
/* Demangled: nvram_platform_log_block */
extern void* nvram_platform_log_block;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: NVM_AddBackupNum */
/* Demangled: NVM_AddBackupNum */
int NVM_AddBackupNum(void);

/* Symbol: NVM_CheckBackFlag */
/* Demangled: NVM_CheckBackFlag */
int NVM_CheckBackFlag(void);

/* Symbol: NVM_MiscIncSeqNum */
/* Demangled: NVM_MiscIncSeqNum */
int NVM_MiscIncSeqNum(void);

/* Symbol: generateFileVerlock */
/* Demangled: generateFileVerlock */
extern void* generateFileVerlock;

/* Symbol: NVM_CheckFileInfo */
/* Demangled: NVM_CheckFileInfo */
int NVM_CheckFileInfo(void);

/* Symbol: NVM_ComputeBackflagCheckSum */
/* Demangled: NVM_ComputeBackflagCheckSum */
int NVM_ComputeBackflagCheckSum(void);

/* Symbol: _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntryForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: dirlock */
/* Demangled: dirlock */
extern void* dirlock;

/* Symbol: _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE */
/* Demangled: fs_mgr_update_for_slotselect(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE(void);

/* Symbol: _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE */
/* Demangled: android::fs_mgr::TransformFstabForDsu(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry*, std::__1::allocator<android::fs_mgr::FstabEntry*> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry*>(android::fs_mgr::FstabEntry*&&) */
int _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void);

/* Symbol: NVM_ResetFileToDefault */
/* Demangled: NVM_ResetFileToDefault */
int NVM_ResetFileToDefault(void);

/* Symbol: NVM_RestoreFromBinRegion_OneFile */
/* Demangled: NVM_RestoreFromBinRegion_OneFile */
int NVM_RestoreFromBinRegion_OneFile(void);

/* Symbol: _Z19NVM_GetCfgFileTablei */
/* Demangled: NVM_GetCfgFileTable(int) */
int _Z19NVM_GetCfgFileTablei(void);

/* Symbol: _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: NVM_Init */
/* Demangled: NVM_Init */
int NVM_Init(void);

/* Symbol: g_i4MaxNvRamLid */
/* Demangled: g_i4MaxNvRamLid */
extern void* g_i4MaxNvRamLid;

/* Symbol: nvram_platform_resv_block */
/* Demangled: nvram_platform_resv_block */
extern void* nvram_platform_resv_block;

/* Symbol: _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<int>(char const*, int*, int, int) */
int _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_(void);

/* Symbol: NVM_MiscLog */
/* Demangled: NVM_MiscLog */
int NVM_MiscLog(void);

/* Symbol: nvram_platform_DM_block */
/* Demangled: nvram_platform_DM_block */
extern void* nvram_platform_DM_block;

/* Symbol: NVM_GetDeviceInfo */
/* Demangled: NVM_GetDeviceInfo */
int NVM_GetDeviceInfo(void);

/* Symbol: NVM_GetFileDesc */
/* Demangled: NVM_GetFileDesc */
int NVM_GetFileDesc(void);

/* Symbol: gFileStartAddr */
/* Demangled: gFileStartAddr */
extern void* gFileStartAddr;

/* Symbol: _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel_cmdline(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: NVM_DataVerConvert */
/* Demangled: NVM_DataVerConvert */
int NVM_DataVerConvert(void);

/* Symbol: _Z28fs_mgr_get_other_slot_suffixv */
/* Demangled: fs_mgr_get_other_slot_suffix() */
int _Z28fs_mgr_get_other_slot_suffixv(void);

/* Symbol: NVM_CheckVerFile */
/* Demangled: NVM_CheckVerFile */
int NVM_CheckVerFile(void);

/* Symbol: gFileNameArray */
/* Demangled: gFileNameArray */
extern void* gFileNameArray;

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: fs_mgr_parse_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: NVM_GetLIDByName */
/* Demangled: NVM_GetLIDByName */
int NVM_GetLIDByName(void);

/* Symbol: _ZNSt3__113__vector_baseIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEED2Ev */
/* Demangled: std::__1::__vector_base<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::~__vector_base() */
int _ZNSt3__113__vector_baseIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEED2Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: g_NVRAM_PROINFO_DEVICE */
/* Demangled: g_NVRAM_PROINFO_DEVICE */
extern void* g_NVRAM_PROINFO_DEVICE;

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char const*>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char const*) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_(void);

/* Symbol: NVM_CheckMDBackFlag */
/* Demangled: NVM_CheckMDBackFlag */
int NVM_CheckMDBackFlag(void);

/* Symbol: _Z23NVM_HistoryLog_add_filePKcS0_P20nvram_journal_handle */
/* Demangled: NVM_HistoryLog_add_file(char const*, char const*, nvram_journal_handle*) */
int _Z23NVM_HistoryLog_add_filePKcS0_P20nvram_journal_handle(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: gFileStartAddrlock */
/* Demangled: gFileStartAddrlock */
extern void* gFileStartAddrlock;

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry>(android::fs_mgr::FstabEntry&&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void);

/* Symbol: __mulodi4 */
/* Demangled: __mulodi4 */
int __mulodi4(void);

/* Symbol: _ZN7android4base9ParseUintIyEEbPKcPT_S4_b */
/* Demangled: bool android::base::ParseUint<unsigned long long>(char const*, unsigned long long*, unsigned long long, bool) */
int _ZN7android4base9ParseUintIyEEbPKcPT_S4_b(void);

/* Symbol: NVM_CheckFileID */
/* Demangled: NVM_CheckFileID */
int NVM_CheckFileID(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: NVM_ReadFileVerInfo */
/* Demangled: NVM_ReadFileVerInfo */
int NVM_ReadFileVerInfo(void);

/* Symbol: _Z28NVM_RestoreFromFiles_OneFileiiPKcPb */
/* Demangled: NVM_RestoreFromFiles_OneFile(int, int, char const*, bool*) */
int _Z28NVM_RestoreFromFiles_OneFileiiPKcPb(void);

/* Symbol: _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::ReadDefaultFstab(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE */
/* Demangled: android::fs_mgr::ReadFstabFromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int> std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_(void);

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry&>(android::fs_mgr::FstabEntry&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const (&) [1]>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, char const (&) [1]) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: Check_UpdateStatus */
/* Demangled: Check_UpdateStatus */
int Check_UpdateStatus(void);

/* Symbol: g_MISC_DEVICE */
/* Demangled: g_MISC_DEVICE */
extern void* g_MISC_DEVICE;

/* Symbol: nvram_init_flag */
/* Demangled: nvram_init_flag */
extern void* nvram_init_flag;

/* Symbol: strVerInfo */
/* Demangled: strVerInfo */
extern void* strVerInfo;

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_(void);

/* Symbol: _Z22fs_mgr_get_slot_suffixv */
/* Demangled: fs_mgr_get_slot_suffix() */
int _Z22fs_mgr_get_slot_suffixv(void);

/* Symbol: NVM_DataVerConvertAll */
/* Demangled: NVM_DataVerConvertAll */
int NVM_DataVerConvertAll(void);

/* Symbol: NVM_GenerateFileVer */
/* Demangled: NVM_GenerateFileVer */
int NVM_GenerateFileVer(void);

/* Symbol: NVM_ProtectDataFile */
/* Demangled: NVM_ProtectDataFile */
int NVM_ProtectDataFile(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: NVM_HistoryLog_Time */
/* Demangled: NVM_HistoryLog_Time */
int NVM_HistoryLog_Time(void);

/* Symbol: _Z18NVM_ComputeCheckNoPKcPcb */
/* Demangled: NVM_ComputeCheckNo(char const*, char*, bool) */
int _Z18NVM_ComputeCheckNoPKcPcb(void);

/* Symbol: _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::EnableMandatoryFlags(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: NVM_CheckFile */
/* Demangled: NVM_CheckFile */
int NVM_CheckFile(void);

/* Symbol: NvRamBlockNum */
/* Demangled: NvRamBlockNum */
extern void* NvRamBlockNum;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: NVM_GetSequenceNum */
/* Demangled: NVM_GetSequenceNum */
int NVM_GetSequenceNum(void);

/* Symbol: NVM_MiscGetSeqNum */
/* Demangled: NVM_MiscGetSeqNum */
int NVM_MiscGetSeqNum(void);

/* Symbol: _Z21NVM_CheckData_OneFileiPKc */
/* Demangled: NVM_CheckData_OneFile(int, char const*) */
int _Z21NVM_CheckData_OneFileiPKc(void);

/* Symbol: nvram_gpt_flag */
/* Demangled: nvram_gpt_flag */
extern void* nvram_gpt_flag;

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: NVM_AddBackupFileNum */
/* Demangled: NVM_AddBackupFileNum */
int NVM_AddBackupFileNum(void);

/* Symbol: NVM_GetBackupFileNum */
/* Demangled: NVM_GetBackupFileNum */
int NVM_GetBackupFileNum(void);

/* Symbol: g_LOG_DEVICE */
/* Demangled: g_LOG_DEVICE */
extern void* g_LOG_DEVICE;

/* Symbol: _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb */
/* Demangled: android::fs_mgr::ReadFstabFromDt(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, bool) */
int _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: NVM_IncSequenceNum */
/* Demangled: NVM_IncSequenceNum */
int NVM_IncSequenceNum(void);

/* Symbol: backuplock */
/* Demangled: backuplock */
extern void* backuplock;

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNVRAM_H */
