/*
 * Reverse-Engineered ABI Specification for: libsysenv.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libsysenv.so
 */

#ifndef BEGONIA_RE_LIBSYSENV_H
#define BEGONIA_RE_LIBSYSENV_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z22fs_mgr_get_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE */
/* Demangled: android::fs_mgr::GetVerityDeviceName(android::fs_mgr::FstabEntry const&) */
int _ZN7android6fs_mgr19GetVerityDeviceNameERKNS0_10FstabEntryE(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_S7_EEEvDpOT_(void);

/* Symbol: g_env */
/* Demangled: g_env */
extern void* g_env;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::ReadDefaultFstab(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr16ReadDefaultFstabEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: _Z18get_android_dt_dirv */
/* Demangled: get_android_dt_dir() */
int _Z18get_android_dt_dirv(void);

/* Symbol: _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntriesForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr23GetEntriesForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZN7android4base9ParseUintIyEEbPKcPT_S4_b */
/* Demangled: bool android::base::ParseUint<unsigned long long>(char const*, unsigned long long*, unsigned long long, bool) */
int _ZN7android4base9ParseUintIyEEbPKcPT_S4_b(void);

/* Symbol: _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb */
/* Demangled: android::fs_mgr::ReadFstabFromDt(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, bool) */
int _ZN7android6fs_mgr15ReadFstabFromDtEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEEb(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry&>(android::fs_mgr::FstabEntry&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJRS3_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry>(android::fs_mgr::FstabEntry&&) */
int _ZNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEE24__emplace_back_slow_pathIJS3_EEEvDpOT_(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: sysenv_get */
/* Demangled: sysenv_get */
int sysenv_get(void);

/* Symbol: sysenv_get_all */
/* Demangled: sysenv_get_all */
int sysenv_get_all(void);

/* Symbol: _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<int>(char const*, int*, int, int) */
int _ZN7android4base8ParseIntIiEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE */
/* Demangled: android::fs_mgr::TransformFstabForDsu(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&) */
int _ZN7android6fs_mgr20TransformFstabForDsuEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS2_INS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEENS4_ISC_EEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJRS7_S7_EEEvDpOT_(void);

/* Symbol: _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_ */
/* Demangled: void std::__1::vector<android::fs_mgr::FstabEntry*, std::__1::allocator<android::fs_mgr::FstabEntry*> >::__emplace_back_slow_path<android::fs_mgr::FstabEntry*>(android::fs_mgr::FstabEntry*&&) */
int _ZNSt3__16vectorIPN7android6fs_mgr10FstabEntryENS_9allocatorIS4_EEE24__emplace_back_slow_pathIJS4_EEEvDpOT_(void);

/* Symbol: _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: fs_mgr_parse_boot_config(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _Z24fs_mgr_parse_boot_configRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void);

/* Symbol: _Z28fs_mgr_get_other_slot_suffixv */
/* Demangled: fs_mgr_get_other_slot_suffix() */
int _Z28fs_mgr_get_other_slot_suffixv(void);

/* Symbol: sysenv_get_static */
/* Demangled: sysenv_get_static */
int sysenv_get_static(void);

/* Symbol: sysenv_set */
/* Demangled: sysenv_set */
int sysenv_set(void);

/* Symbol: _Z16is_dt_compatiblev */
/* Demangled: is_dt_compatible() */
int _Z16is_dt_compatiblev(void);

/* Symbol: _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel_cmdline(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z42fs_mgr_get_boot_config_from_kernel_cmdlineRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPS5_(void);

/* Symbol: _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE */
/* Demangled: android::fs_mgr::EnableMandatoryFlags(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr20EnableMandatoryFlagsEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEE(void);

/* Symbol: _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::fs_mgr::GetEntryForMountPoint(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android6fs_mgr21GetEntryForMountPointEPNSt3__16vectorINS0_10FstabEntryENS1_9allocatorIS3_EEEERKNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE */
/* Demangled: android::fs_mgr::ReadFstabFromFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _ZN7android6fs_mgr17ReadFstabFromFileERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS1_6vectorINS0_10FstabEntryENS5_ISB_EEEE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, char const (&) [1]>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&, char const (&) [1]) */
int _ZNSt3__16vectorINS_4pairINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS5_IS8_EEE24__emplace_back_slow_pathIJS7_RA1_KcEEEvDpOT_(void);

/* Symbol: _ZN7android6fs_mgr14GetBootDevicesEv */
/* Demangled: android::fs_mgr::GetBootDevices() */
int _ZN7android6fs_mgr14GetBootDevicesEv(void);

/* Symbol: _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev */
/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS6_PNS_11__tree_nodeIS6_SD_EEiEERPNS_15__tree_end_nodeISF_EESG_RKT_(void);

/* Symbol: _ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_ */
/* Demangled: bool android::base::ParseInt<long long>(char const*, long long*, long long, long long) */
int _ZN7android4base8ParseIntIxEEbPKcPT_S4_S4_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_ */
/* Demangled: std::__1::__tree_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int> std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_hint_unique_key_args<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::__tree_const_iterator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*, int>, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE30__emplace_hint_unique_key_argsIS6_JRKS6_EEENS_15__tree_iteratorIS6_PNS_11__tree_nodeIS6_PvEEiEENS_21__tree_const_iteratorIS6_SI_iEERKT_DpOT0_(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_ */
/* Demangled: fs_mgr_get_boot_config_from_kernel(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*) */
int _Z34fs_mgr_get_boot_config_from_kernelRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_PS5_(void);

/* Symbol: sysenv_set_static */
/* Demangled: sysenv_set_static */
int sysenv_set_static(void);

/* Symbol: _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > android::base::Join<std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >, char const*>(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, char const*) */
int _ZN7android4base4JoinINSt3__16vectorINS2_12basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEENS7_IS9_EEEEPKcEES9_RKT_T0_(void);

/* Symbol: _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE */
/* Demangled: fs_mgr_update_for_slotselect(std::__1::vector<android::fs_mgr::FstabEntry, std::__1::allocator<android::fs_mgr::FstabEntry> >*) */
int _Z28fs_mgr_update_for_slotselectPNSt3__16vectorIN7android6fs_mgr10FstabEntryENS_9allocatorIS3_EEEE(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _Z22fs_mgr_get_slot_suffixv */
/* Demangled: fs_mgr_get_slot_suffix() */
int _Z22fs_mgr_get_slot_suffixv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSYSENV_H */
