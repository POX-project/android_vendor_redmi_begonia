/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mms@1.2.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mms@1.2.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_2_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_2_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms16_hidl_BlitStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::_hidl_BlitStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms16_hidl_BlitStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsC1ERKN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsC1ERKN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_2::IMms, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mms::V1_2::BpHwMms>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_2::BnHwMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_25BsMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_2::BsMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_25BsMmsE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD2Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms18getCopybitOutUsageEj */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::getCopybitOutUsage(unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms18getCopybitOutUsageEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_2::IMms, vendor::mediatek::hardware::mms::V1_0::IMms, vendor::mediatek::hardware::mms::V1_2::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mms::V1_2::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS3_4IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS3_4IMmsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZThn20_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_24IMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_2::IMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_24IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_25BsMms13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BsMms::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3mms4V1_25BsMms13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms14jpegOpenClientEjj */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::jpegOpenClient(unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms14jpegOpenClientEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::copybit(vendor::mediatek::hardware::mms::V1_0::HwCopybitParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms15jpegCloseClientEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::jpegCloseClient() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms15jpegCloseClientEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms27isCopybitSupportedOutFormatEi */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::isCopybitSupportedOutFormat(int) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms27isCopybitSupportedOutFormatEi(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_27BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mms::V1_2::BpHwMms, vendor::mediatek::hardware::mms::V1_2::IMms, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_27BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_25BsMmsE0_NS3_4IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_2::BsMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_25BsMmsE0_NS3_4IMmsE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_24IMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_2::IMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_24IMmsE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms16_hidl_BlitStreamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8MDPParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::_hidl_BlitStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mms::V1_2::MDPParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms16_hidl_BlitStreamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_8MDPParamE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_NS2_4V1_14IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_2::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_NS2_4V1_14IMmsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms10descriptorE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::descriptor */
extern void* _ZN6vendor8mediatek8hardware3mms4V1_24IMms10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsC2ERKN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsC2ERKN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms26getCopybitDefaultOutFormatEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::getCopybitDefaultOutFormat() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms26getCopybitDefaultOutFormatEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mms::V1_2::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZThn20_N6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_2::IMms, vendor::mediatek::hardware::mms::V1_1::IMms, vendor::mediatek::hardware::mms::V1_2::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_24IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_2::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::jpegencode(vendor::mediatek::hardware::mms::V1_0::HwJpegEncoderConfig const&, std::__1::function<void (unsigned long long, int)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_NS2_4V1_04IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_2::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_24IMmsE0_NS2_4V1_04IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BnHwMmsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::mdp_run(vendor::mediatek::hardware::mms::V1_1::HwMDPParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS2_4V1_14IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS2_4V1_14IMmsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_2::BnHwMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms10BlitStreamERKNS3_8MDPParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::BlitStream(vendor::mediatek::hardware::mms::V1_2::MDPParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms10BlitStreamERKNS3_8MDPParamE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_2::BpHwMms::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_2::BpHwMms::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_27BpHwMms15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_25BsMmsC2EN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms>) */
int _ZN6vendor8mediatek8hardware3mms4V1_25BsMmsC2EN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_N7android8hardware11BpInterfaceINS3_4IMmsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mms::V1_2::IMms>-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_N7android8hardware11BpInterfaceINS3_4IMmsEEE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_24IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::IMms::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_24IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_25BsMmsC1EN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms>) */
int _ZN6vendor8mediatek8hardware3mms4V1_25BsMmsC1EN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_2::BpHwMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_27BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mms::V1_2::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BnHwMmsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS2_4V1_04IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_2::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_27BpHwMmsE0_NS2_4V1_04IMmsE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_2_H */
