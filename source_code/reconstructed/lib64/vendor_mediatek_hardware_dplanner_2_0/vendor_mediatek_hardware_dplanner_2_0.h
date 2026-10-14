/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.dplanner@2.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.dplanner@2.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DPLANNER_2_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DPLANNER_2_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE */
/* Demangled: VTT for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE */
/* Demangled: vtable for vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner */
extern void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_getTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_getTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner19_hidl_bootCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_bootCompleted(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner19_hidl_bootCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner4pingEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::ping() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13bootCompletedEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::bootCompleted() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13bootCompletedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE */
/* Demangled: VTT for vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC2EN7android2spINS3_9IDPlannerEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::BsDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC2EN7android2spINS3_9IDPlannerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD2Ev */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_setTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_setTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_setTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_getStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_getStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getConfigENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getConfig(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getConfigENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner20_hidl_installTestersEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_installTesters(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner20_hidl_installTestersEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11clearConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::clearConfig(std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11clearConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7getTestENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getTest(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7getTestENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC1EN7android2spINS3_9IDPlannerEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::BsDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC1EN7android2spINS3_9IDPlannerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner4pingEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::ping() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner4pingEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10descriptorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::descriptor */
extern void* _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::castFrom(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&, bool) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::BpHwDPlanner(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_getStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_getStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_setConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_setConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_setConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_runFinishedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runFinished(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_runFinishedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8getStateEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getState() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8getStateEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE */
/* Demangled: vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11runFinishedEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runFinished() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11runFinishedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner4pingEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::ping() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runAbortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runAbort(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runAbortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::BpHwDPlanner(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_setConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_setConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_setConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE0_NS3_9IDPlannerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner-in-vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE0_NS3_9IDPlannerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_clearConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_clearConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_clearConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE */
/* Demangled: vtable for vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlanner13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlanner13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_clearConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_clearConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_clearConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner20_hidl_installTestersEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbSE_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_installTesters(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_array<unsigned char, 65536ul> const&, unsigned int, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner20_hidl_installTestersEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbSE_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7setTestERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setTest(android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7setTestERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android8hardware11BpInterfaceINS3_9IDPlannerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android8hardware11BpInterfaceINS3_9IDPlannerEEE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_setTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_setTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_setTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runAbortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runAbort(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runAbortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerENS7_9IDPlannerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner, vendor::mediatek::hardware::dplanner::V2_0::IDPlanner, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerENS7_9IDPlannerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE */
/* Demangled: VTT for vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runAbortEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runAbort() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runAbortEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_runFinishedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runFinished(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_runFinishedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getResultENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getResult(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getResultENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runStart(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_NS3_9IDPlannerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_NS3_9IDPlannerE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runStartEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runStart() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runStartEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE */
/* Demangled: vtable for vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE;

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC1ERKN7android2spINS3_9IDPlannerEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::BnHwDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC1ERKN7android2spINS3_9IDPlannerEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
int _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19_hidl_bootCompletedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_bootCompleted(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19_hidl_bootCompletedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9setConfigERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setConfig(android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9setConfigERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runStart(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_getTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_getTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC2ERKN7android2spINS3_9IDPlannerEEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::BnHwDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC2ERKN7android2spINS3_9IDPlannerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14installTestersERKN7android8hardware11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbS9_EEE */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::installTesters(android::hardware::hidl_string const&, android::hardware::hidl_array<unsigned char, 65536ul> const&, unsigned int, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14installTestersERKN7android8hardware11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbS9_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerENS_4hidl4base4V1_05IBaseENS7_12BpHwDPlannerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> > android::hardware::details::castInterface<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerENS_4hidl4base4V1_05IBaseENS7_12BpHwDPlannerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_DPLANNER_2_0_H */
