/*
 * Reverse-Engineered ABI Specification for: vendor.nxp.hardware.nfc@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.nxp.hardware.nfc@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_NXP_HARDWARE_NFC_1_0_H
#define BEGONIA_RE_VENDOR_NXP_HARDWARE_NFC_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21setHALInstrumentationEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::setHALInstrumentation() */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android8hardware11BpInterfaceINS3_6INqNfcEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::nxp::hardware::nfc::V1_0::INqNfc>-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android8hardware11BpInterfaceINS3_6INqNfcEEE;

/* Symbol: _ZTTN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE */
/* Demangled: VTT for vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern void* _ZTTN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc11_hidl_ioctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::_hidl_ioctl(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc11_hidl_ioctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD2Ev */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD2Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21setHALInstrumentationEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::setHALInstrumentation() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE */
/* Demangled: vtable for vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTVN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE;

/* Symbol: _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev */
/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21notifySyspropsChangedEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::notifySyspropsChanged() */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc4pingEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::ping() */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc4pingEv(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21notifySyspropsChangedEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::notifySyspropsChanged() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTVN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE */
/* Demangled: vtable for vendor::nxp::hardware::nfc::V1_0::BsNqNfc */
extern void* _ZTVN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC2ERKN7android2spINS3_6INqNfcEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::BnHwNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC2ERKN7android2spINS3_6INqNfcEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcENS7_6INqNfcEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> android::hardware::details::getServiceInternal<vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc, vendor::nxp::hardware::nfc::V1_0::INqNfc, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcENS7_6INqNfcEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev */
/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10descriptorE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::descriptor */
extern void* _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc10descriptorE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5ioctlEmRKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::ioctl(unsigned long, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc5ioctlEmRKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev */
/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZThn32_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD0Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::BpHwNqNfc(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE */
/* Demangled: vtable for vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc */
extern void* _ZTVN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfc13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfc13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev */
/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZTv0_n24_N6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void);

/* Symbol: _ZTv0_n40_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::castFrom(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&, bool) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC1ERKN7android2spINS3_6INqNfcEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::BnHwNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcC1ERKN7android2spINS3_6INqNfcEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::BpHwNqNfc(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE */
/* Demangled: VTT for vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTTN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc4pingEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::ping() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor3nxp8hardware3nfc4V1_06INqNfcENS_4hidl4base4V1_05IBaseENS7_9BpHwNqNfcEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc> > android::hardware::details::castInterface<vendor::nxp::hardware::nfc::V1_0::INqNfc, android::hidl::base::V1_0::IBase, vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor3nxp8hardware3nfc4V1_06INqNfcENS_4hidl4base4V1_05IBaseENS7_9BpHwNqNfcEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_NS3_6INqNfcE */
/* Demangled: construction vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE0_NS3_6INqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::~BnHwNqNfc() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfcD1Ev(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC1EN7android2spINS3_6INqNfcEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::BsNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc>) */
int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC1EN7android2spINS3_6INqNfcEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11_hidl_ioctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmRKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::_hidl_ioctl(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc11_hidl_ioctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmRKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_06INqNfcE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_06INqNfcE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor3nxp8hardware3nfc4V1_06INqNfcE */
/* Demangled: VTT for vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern void* _ZTTN6vendor3nxp8hardware3nfc4V1_06INqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC2EN7android2spINS3_6INqNfcEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BsNqNfc::BsNqNfc(android::sp<vendor::nxp::hardware::nfc::V1_0::INqNfc>) */
int _ZN6vendor3nxp8hardware3nfc4V1_07BsNqNfcC2EN7android2spINS3_6INqNfcEEE(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE0_NS3_6INqNfcE */
/* Demangled: construction vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc-in-vendor::nxp::hardware::nfc::V1_0::BsNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_07BsNqNfcE0_NS3_6INqNfcE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc4pingEv */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::BnHwNqNfc::ping() */
int _ZN6vendor3nxp8hardware3nfc4V1_09BnHwNqNfc4pingEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc */
extern void* _ZTCN6vendor3nxp8hardware3nfc4V1_09BpHwNqNfcE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::nxp::hardware::nfc::V1_0::INqNfc::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor3nxp8hardware3nfc4V1_06INqNfc24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTVN6vendor3nxp8hardware3nfc4V1_06INqNfcE */
/* Demangled: vtable for vendor::nxp::hardware::nfc::V1_0::INqNfc */
extern void* _ZTVN6vendor3nxp8hardware3nfc4V1_06INqNfcE;

/* Symbol: _ZThn16_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::nxp::hardware::nfc::V1_0::BpHwNqNfc::onLastStrongRef(void const*) */
int _ZThn16_N6vendor3nxp8hardware3nfc4V1_09BpHwNqNfc15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_NXP_HARDWARE_NFC_1_0_H */
