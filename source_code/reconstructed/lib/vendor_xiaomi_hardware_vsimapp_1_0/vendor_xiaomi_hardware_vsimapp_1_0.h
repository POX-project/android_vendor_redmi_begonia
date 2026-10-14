/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.vsimapp@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.vsimapp@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_VSIMAPP_1_0_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_VSIMAPP_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService14_hidl_sim_listEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_sim_list(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService14_hidl_sim_listEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService14_hidl_sim_listEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_sim_list(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService14_hidl_sim_listEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceC2EN7android2spINS3_12IVSIMServiceEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BsVSIMService::BsVSIMService(android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceC2EN7android2spINS3_12IVSIMServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService15_hidl_enroll_v3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_enroll_v3(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService15_hidl_enroll_v3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_getEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_sim_get(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_getEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::BpHwVSIMService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZThn20_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_delEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_sim_del(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_delEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService */
extern void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12_hidl_enrollEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_enroll(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12_hidl_enrollEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::sim_list(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::BsVSIMService */
extern void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService17_hidl_is_enrolledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_is_enrolled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService17_hidl_is_enrolledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService5auth2ERKN7android8hardware11hidl_stringES9_jRKNS6_8hidl_vecIhEENSt3__18functionIFvS9_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::auth2(android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService5auth2ERKN7android8hardware11hidl_stringES9_jRKNS6_8hidl_vecIhEENSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BsVSIMService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwVSIMServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceENS_4hidl4base4V1_05IBaseENS7_15BpHwVSIMServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService17_hidl_is_enrolledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_is_enrolled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService17_hidl_is_enrolledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_delEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_sim_del(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_delEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15_hidl_enroll_v3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_enroll_v3(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15_hidl_enroll_v3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService12_hidl_enrollEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_enroll(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService12_hidl_enrollEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceC2ERKN7android2spINS3_12IVSIMServiceEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::BnHwVSIMService(android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceC2ERKN7android2spINS3_12IVSIMServiceEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::export_key(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService16_hidl_export_keyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_export_key(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService16_hidl_export_keyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceE0_NS3_12IVSIMServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService-in-vendor::xiaomi::hardware::vsimapp::V1_0::BsVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceE0_NS3_12IVSIMServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService4pingEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::ping() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::enroll(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_NS3_12IVSIMServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService-in-vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_NS3_12IVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceC1ERKN7android2spINS3_12IVSIMServiceEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::BnHwVSIMService(android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceC1ERKN7android2spINS3_12IVSIMServiceEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceENS7_12IVSIMServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService, vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceENS7_12IVSIMServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_addEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_sim_add(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService13_hidl_sim_addEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::BpHwVSIMService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService */
extern void* _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService4pingEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::ping() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService11_hidl_auth2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_auth2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService11_hidl_auth2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService */
extern void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService10_hidl_authEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_auth(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService10_hidl_authEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService4pingEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::ping() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::castFrom(android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService> const&, bool) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::enroll_v3(unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService */
extern void* _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceC1EN7android2spINS3_12IVSIMServiceEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BsVSIMService::BsVSIMService(android::sp<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_013BsVSIMServiceC1EN7android2spINS3_12IVSIMServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService16_hidl_export_keyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_export_key(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService16_hidl_export_keyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService4authERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvS9_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::auth(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService4authERKN7android8hardware11hidl_stringES9_NSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11_hidl_auth2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_jRKNS6_8hidl_vecIhEENSt3__18functionIFvSE_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_auth2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11_hidl_auth2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_jRKNS6_8hidl_vecIhEENSt3__18functionIFvSE_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_addEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_sim_add(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_addEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11is_enrolledEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::is_enrolled() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService11is_enrolledEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_addERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::sim_add(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_addERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_N7android8hardware11BpInterfaceINS3_12IVSIMServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService>-in-vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService */
extern void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMServiceE0_N7android8hardware11BpInterfaceINS3_12IVSIMServiceEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_getEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::_hidl_sim_get(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMService13_hidl_sim_getEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_delERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::sim_del(android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_delERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::sim_get(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD2Ev */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService10_hidl_authEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvSE_EEE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::BpHwVSIMService::_hidl_auth(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware7vsimapp4V1_015BpHwVSIMService10_hidl_authEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_NSt3__18functionIFvSE_EEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::vsimapp::V1_0::BnHwVSIMService::~BnHwVSIMService() */
int _ZThn20_N6vendor6xiaomi8hardware7vsimapp4V1_015BnHwVSIMServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService10descriptorE */
/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService::descriptor */
extern void* _ZN6vendor6xiaomi8hardware7vsimapp4V1_012IVSIMService10descriptorE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_VSIMAPP_1_0_H */
