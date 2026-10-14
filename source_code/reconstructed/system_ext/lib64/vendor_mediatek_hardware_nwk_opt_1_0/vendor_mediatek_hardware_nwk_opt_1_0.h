/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.nwk_opt@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.nwk_opt@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NWK_OPT_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NWK_OPT_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE */
/* Demangled: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14setDisplayDataEiii */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::setDisplayData(int, int, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14setDisplayDataEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::castFrom(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&, bool) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_i */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt4pingEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::ping() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android8hardware11BpInterfaceINS3_7INwkOptEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android8hardware11BpInterfaceINS3_7INwkOptEEE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt16switch_game_modeEji */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::switch_game_mode(unsigned int, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt16switch_game_modeEji(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::BpHwNwkOpt(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_NS3_7INwkOptE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_NS3_7INwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE */
/* Demangled: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC1ERKN7android2spINS3_7INwkOptEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::BnHwNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC1ERKN7android2spINS3_7INwkOptEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt22_hidl_switch_game_modeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_switch_game_mode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt22_hidl_switch_game_modeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC2ERKN7android2spINS3_7INwkOptEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::BnHwNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC2ERKN7android2spINS3_7INwkOptEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZThn32_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC2EN7android2spINS3_7INwkOptEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::BsNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC2EN7android2spINS3_7INwkOptEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_setDisplayDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_setDisplayData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_setDisplayDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE */
/* Demangled: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE */
/* Demangled: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD2Ev */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD2Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptENS_4hidl4base4V1_05IBaseENS7_10BpHwNwkOptEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> > android::hardware::details::castInterface<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptENS_4hidl4base4V1_05IBaseENS7_10BpHwNwkOptEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZThn32_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZTv0_n24_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14notifyAppStateERKN7android8hardware11hidl_stringES9_i */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14notifyAppStateERKN7android8hardware11hidl_stringES9_i(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_setDisplayDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_setDisplayData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_setDisplayDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt4pingEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::ping() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptENS7_7INwkOptEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt, vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptENS7_7INwkOptEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZTv0_n24_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOpt13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOpt13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC1EN7android2spINS3_7INwkOptEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::BsNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC1EN7android2spINS3_7INwkOptEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE0_NS3_7INwkOptE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt-in-vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt */
extern void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE0_NS3_7INwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt22_hidl_switch_game_modeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEji */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_switch_game_mode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, int) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt22_hidl_switch_game_modeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEji(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt4pingEv */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::ping() */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE */
/* Demangled: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE;

/* Symbol: _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE */
/* Demangled: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE;

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::BpHwNwkOpt(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10descriptorE */
/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::descriptor */
extern void* _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10descriptorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE */
/* Demangled: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt */
extern void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NWK_OPT_1_0_H */
