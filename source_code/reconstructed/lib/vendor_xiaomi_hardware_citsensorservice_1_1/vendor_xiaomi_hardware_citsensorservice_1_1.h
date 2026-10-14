/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.citsensorservice@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.citsensorservice@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_CITSENSORSERVICE_1_1_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_CITSENSORSERVICE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21send_ssc_oem_test_msgERKNS3_16ssc_oem_test_msgENSt3__18functionIFvS7_EEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::send_ssc_oem_test_msg(vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&, std::__1::function<void (vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21send_ssc_oem_test_msgERKNS3_16ssc_oem_test_msgENSt3__18functionIFvS7_EEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE;

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceC2EN7android2spINS3_17ICitSensorServiceEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BsCitSensorService::BsCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceC2EN7android2spINS3_17ICitSensorServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE0_NS2_4V1_017ICitSensorServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE0_NS2_4V1_017ICitSensorServiceE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn8_N6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::BpHwCitSensorService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService */
extern void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE;

/* Symbol: _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD0Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_NS2_4V1_017ICitSensorServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_NS2_4V1_017ICitSensorServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spINS2_4V1_017ICitSensorServiceEEEb */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::castFrom(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> const&, bool) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spINS2_4V1_017ICitSensorServiceEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceC1ERKN7android2spINS3_17ICitSensorServiceEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::BnHwCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceC1ERKN7android2spINS3_17ICitSensorServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceC1EN7android2spINS3_17ICitSensorServiceEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BsCitSensorService::BsCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceC1EN7android2spINS3_17ICitSensorServiceEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService10descriptorE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::descriptor */
extern void* _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService13deinitServiceEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::deinitService() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService13deinitServiceEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::BsCitSensorService */
extern void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BsCitSensorService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService4pingEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::ping() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::BpHwCitSensorService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceENS7_17ICitSensorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService, vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceENS7_17ICitSensorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceC2ERKN7android2spINS3_17ICitSensorServiceEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::BnHwCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceC2ERKN7android2spINS3_17ICitSensorServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_N7android8hardware11BpInterfaceINS3_17ICitSensorServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService>-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_N7android8hardware11BpInterfaceINS3_17ICitSensorServiceEEE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_NS3_17ICitSensorServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE0_NS3_17ICitSensorServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService */
extern void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService4pingEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::ping() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService27_hidl_send_ssc_oem_test_msgEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_16ssc_oem_test_msgENSt3__18functionIFvSE_EEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::_hidl_send_ssc_oem_test_msg(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&, std::__1::function<void (vendor::xiaomi::hardware::citsensorservice::V1_1::ssc_oem_test_msg const&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService27_hidl_send_ssc_oem_test_msgEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_16ssc_oem_test_msgENSt3__18functionIFvSE_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD2Ev */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD2Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService */
extern void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService */
extern void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService27_hidl_send_ssc_oem_test_msgEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::_hidl_send_ssc_oem_test_msg(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorService27_hidl_send_ssc_oem_test_msgEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService::castFrom(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> const&, bool) */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BnHwCitSensorService::~BnHwCitSensorService() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BnHwCitSensorServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService11initServiceEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::initService() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService11initServiceEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService17halleventlistenerEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::halleventlistener() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService17halleventlistenerEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService4pingEv */
/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService::ping() */
int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_120BpHwCitSensorService4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceENS6_4V1_017ICitSensorServiceENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService, vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService, vendor::xiaomi::hardware::citsensorservice::V1_1::BpHwCitSensorService>(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceENS6_4V1_017ICitSensorServiceENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_117ICitSensorServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceE0_NS3_17ICitSensorServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_1::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_1::BsCitSensorService */
extern void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_118BsCitSensorServiceE0_NS3_17ICitSensorServiceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_CITSENSORSERVICE_1_1_H */
