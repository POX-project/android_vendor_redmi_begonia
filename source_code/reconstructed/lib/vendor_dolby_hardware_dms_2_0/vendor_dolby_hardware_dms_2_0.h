/*
 * Reverse-Engineered ABI Specification for: vendor.dolby.hardware.dms@2.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.dolby.hardware.dms@2.0.so
 */

#ifndef BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_H
#define BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZThn8_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
int _ZThn8_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10descriptorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::descriptor */
extern void* _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10descriptorE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getProfileName(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_setIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEERKNSC_IxEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setIntParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long long> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_setIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEERKNSC_IxEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setChannelCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC2ERKN7android2spINS3_4IDmsEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::BnHwDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC2ERKN7android2spINS3_4IDmsEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC2EN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::BsDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC2EN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getStoredParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getStoredParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getStoredParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacks13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDmsCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDmsCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksEvEENS_2spIT_EESB_(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjx */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setIntParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, long long) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjx(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNS9_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getStoredParams(bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNS9_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setChannelCountEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setChannelCount(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setChannelCountEj(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_DapParameterId_ValueCacheEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_DapParameterId_ValueCacheEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_setSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setSelectedTuningDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_setSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD2Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD2Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_04IDmsE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::IDms */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_04IDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::BpHwDecCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC1ERKN7android2spINS3_13IDmsCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::BnHwDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC1ERKN7android2spINS3_13IDmsCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacks13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_07BpHwDmsE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_07BpHwDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS7_IxEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getIntParams(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long long> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS7_IxEEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS6_16BpHwDecCallbacksENS6_16BnHwDecCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS6_16BpHwDecCallbacksENS6_16BnHwDecCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks4pingEv(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksENS7_13IVqeCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks, vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksENS7_13IVqeCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms34_hidl_getAvailableTuningDevicesLenEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getAvailableTuningDevicesLen(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms34_hidl_getAvailableTuningDevicesLenEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksENS7_13IDmsCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks, vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksENS7_13IDmsCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::registerVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22notifyAudioTrackChangeEjjjjjjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::notifyAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22notifyAudioTrackChangeEjjjjjjj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10descriptorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::descriptor */
extern void* _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10descriptorE;

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS6_16BpHwVqeCallbacksENS6_16BnHwVqeCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS6_16BpHwVqeCallbacksENS6_16BnHwVqeCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12onDecChangedEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onDecChanged(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12onDecChangedEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC1ERKN7android2spINS3_4IDmsEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::BnHwDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDmsC1ERKN7android2spINS3_4IDmsEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::_hidl_onAudioTrackChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::BpHwDmsCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC2EN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::BsVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC2EN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getChannelCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS7_IxEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setIntParams(android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long long> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS7_IxEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getIntParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getIntParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getActiveDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_getActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28_hidl_notifyAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_notifyAudioTrackChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28_hidl_notifyAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_04IDmsE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::IDms */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_04IDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerVqeCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC2ERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::BnHwDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC2ERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacks13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacks13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks4pingEv(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_04IDmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_04IDmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getChannelCountEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getChannelCount() */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getChannelCountEv(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_07BpHwDmsE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_07BpHwDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::_hidl_onDapParamUpdate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getIntParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDms::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_07BpHwDms15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC1EN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDecCallbacks::BsDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksC1EN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_DapParameterId_ValueCacheERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_34KeyValue_DapParameterId_ValueCacheERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_getProfileNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getProfileName(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_getProfileNameEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC1EN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks::BsVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksC1EN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_NS3_13IVqeCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_NS3_13IVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC1ERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::BnHwVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC1ERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::BpHwDmsCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE0_NS3_13IDecCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE0_NS3_13IDecCallbacksE;

/* Symbol: _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks4pingEv(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE0_NS3_13IVqeCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IVqeCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsVqeCallbacksE0_NS3_13IVqeCallbacksE;

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterVqeCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterVqeCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setDapParamERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setDapParam(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setDapParamERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_10ValueCacheERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::ValueCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_10ValueCacheERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms10descriptorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::descriptor */
extern void* _ZN6vendor5dolby8hardware3dms4V2_04IDms10descriptorE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_getIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEENSt3__18functionIFvRKNSC_IxEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getIntParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long long> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms18_hidl_getIntParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIjEENSt3__18functionIFvRKNSC_IxEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerDecCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms25_hidl_registerDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android8hardware11BpInterfaceINS3_4IDmsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDms>-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android8hardware11BpInterfaceINS3_4IDmsEEE;

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE;

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void);

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::onLastStrongRef(void const*) */
int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::details::wrapPassthrough<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, void>(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDecCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDecCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IDecCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwDecCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::_hidl_onAudioTrackChange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks24_hidl_onAudioTrackChangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjjjjjj(void);

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getDapParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_getDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_setSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setSelectedTuningDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_setSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_NS3_13IDecCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDecCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_NS3_13IDecCallbacksE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks18_hidl_onDecChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::_hidl_onDecChanged(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacks18_hidl_onDecChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_getIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getIntParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_getIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms31_hidl_getAvailableTuningDevicesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getAvailableTuningDevices(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms31_hidl_getAvailableTuningDevicesEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_05BsDms13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor5dolby8hardware3dms4V2_05BsDms13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::_hidl_onDapParamUpdate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks22_hidl_onDapParamUpdateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setIntParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setIntParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setActiveDeviceEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setActiveDevice(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15setActiveDeviceEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setChannelCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setChannelCountEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::BpHwDms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC2EN7android2spINS3_13IDmsCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::BsDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC2EN7android2spINS3_13IDmsCallbacksEEE(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE;

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_013IDecCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC2ERKN7android2spINS3_13IDmsCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::BnHwDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksC2ERKN7android2spINS3_13IDmsCallbacksEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD2Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD2Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_13DapParamCacheEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::DapParamCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_13DapParamCacheEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setActiveDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms21_hidl_setActiveDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_getSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getSelectedTuningDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms29_hidl_getSelectedTuningDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getStoredParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbiNSt3__18functionIFvbRKNS6_8hidl_vecIiEERKNSE_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getStoredParams(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getStoredParamsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbiNSt3__18functionIFvbRKNS6_8hidl_vecIiEERKNSE_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterDecCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms27_hidl_unregisterDecCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_13DapParamCacheERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::readEmbeddedFromParcel(vendor::dolby::hardware::dms::V2_0::DapParamCache const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_022readEmbeddedFromParcelERKNS3_13DapParamCacheERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacks10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_registerClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms20_hidl_registerClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::~BnHwDecCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksD0Ev(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDecCallbacksEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDecCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDecCallbacksEEE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC2EN7android2spINS3_4IDmsEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::BsDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms>) */
int _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC2EN7android2spINS3_4IDmsEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterDecCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::IVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_34KeyValue_AudioDevice_DapParamCacheEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setActiveDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_setActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerVqeCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getAvailableTuningDevices(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_NS3_13IDmsCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_NS3_13IDmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getActiveDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getActiveDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC2ERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::BnHwVqeCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksC2ERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksENS7_13IDecCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks, vendor::dolby::hardware::dms::V2_0::IDecCallbacks, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksENS7_13IDecCallbacksEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_setIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setIntParams(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms18_hidl_setIntParamsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_07BnHwDmsE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_07BnHwDmsE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms28_hidl_notifyAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_notifyAudioTrackChange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms28_hidl_notifyAudioTrackChangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSA_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getDapParam(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSA_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getChannelCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21_hidl_getChannelCountEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms34_hidl_getAvailableTuningDevicesLenEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getAvailableTuningDevicesLen(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms34_hidl_getAvailableTuningDevicesLenEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21setHALInstrumentationEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::setHALInstrumentation() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDms> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms31_hidl_getAvailableTuningDevicesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getAvailableTuningDevices(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms31_hidl_getAvailableTuningDevicesEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms22_hidl_unregisterClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_unregisterClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms22_hidl_unregisterClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getIntParamEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getIntParam(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11getIntParamEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_setDapParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms17_hidl_setDapParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setSelectedTuningDevice(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterVqeCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms27_hidl_unregisterVqeCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::BpHwDms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDmsC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE0_NS3_13IDmsCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE0_NS3_13IDmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::BpHwVqeCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_setDapParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_setDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks4pingEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::ping() */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks4pingEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks18onAudioTrackChangeEjjjjjjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks18onAudioTrackChangeEjjjjjjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC1ERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDecCallbacks::BnHwDecCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDecCallbacksC1ERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC1EN7android2spINS3_4IDmsEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDms::BsDms(android::sp<vendor::dolby::hardware::dms::V2_0::IDms>) */
int _ZN6vendor5dolby8hardware3dms4V2_05BsDmsC1EN7android2spINS3_4IDmsEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22_hidl_unregisterClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_unregisterClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms22_hidl_unregisterClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_getSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getSelectedTuningDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms29_hidl_getSelectedTuningDeviceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getSelectedTuningDevice(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksE;

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setIntParamEjx */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::setIntParam(unsigned int, long long) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11setIntParamEjx(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getActiveDeviceEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getActiveDevice() */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms15getActiveDeviceEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_registerDecCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms25_hidl_registerDecCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28getAvailableTuningDevicesLenEi */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::getAvailableTuningDevicesLen(int) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms28getAvailableTuningDevicesLenEi(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_07BpHwDmsENS7_4IDmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDms> android::hardware::details::getServiceInternal<vendor::dolby::hardware::dms::V2_0::BpHwDms, vendor::dolby::hardware::dms::V2_0::IDms, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor5dolby8hardware3dms4V2_07BpHwDmsENS7_4IDmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_04IDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_04IDms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFviSF_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::_hidl_getDapParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms17_hidl_getDapParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFviSF_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks18_hidl_onDecChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::_hidl_onDecChanged(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks18_hidl_onDecChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_05BsDmsE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BsDms */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_05BsDmsE;

/* Symbol: _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZThn20_N6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD0Ev(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDmsCallbacksEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android8hardware11BpInterfaceINS3_13IDmsCallbacksEEE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BnHwDms::~BnHwDms() */
int _ZTv0_n12_N6vendor5dolby8hardware3dms4V2_07BnHwDmsD0Ev(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BnHwDmsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::onLastStrongRef(void const*) */
int _ZThn8_N6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_10ValueCacheEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::writeEmbeddedToParcel(vendor::dolby::hardware::dms::V2_0::ValueCache const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_021writeEmbeddedToParcelERKNS3_10ValueCacheEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDmsCallbacks::castFrom(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDmsCallbacks8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwVqeCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_013IVqeCallbacksENS_4hidl4base4V1_05IBaseENS7_16BpHwVqeCallbacksEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_getProfileNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_getProfileName(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_getProfileNameEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS6_16BpHwDmsCallbacksENS6_16BnHwDmsCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> android::hardware::fromBinder<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks, vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks, vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksENS6_16BpHwDmsCallbacksENS6_16BnHwDmsCallbacksEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android8hardware11BpInterfaceINS3_13IVqeCallbacksEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks>-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android8hardware11BpInterfaceINS3_13IVqeCallbacksEEE;

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDms::unregisterDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_07BpHwDms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_NS3_4IDmsE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::BpHwDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_07BpHwDmsE0_NS3_4IDmsE;

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_07BnHwDmsE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::BnHwDms */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_07BnHwDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD2Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD2Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10descriptorE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IVqeCallbacks::descriptor */
extern void* _ZN6vendor5dolby8hardware3dms4V2_013IVqeCallbacks10descriptorE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC1EN7android2spINS3_13IDmsCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BsDmsCallbacks::BsDmsCallbacks(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks>) */
int _ZN6vendor5dolby8hardware3dms4V2_014BsDmsCallbacksC1EN7android2spINS3_13IDmsCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21notifySyspropsChangedEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::notifySyspropsChanged() */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacks21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::BpHwDecCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacksC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_registerClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDms::_hidl_registerClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_07BnHwDms20_hidl_registerClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_04IDmsENS_4hidl4base4V1_05IBaseENS7_7BpHwDmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::dolby::hardware::dms::V2_0::IDms> > android::hardware::details::castInterface<vendor::dolby::hardware::dms::V2_0::IDms, android::hidl::base::V1_0::IBase, vendor::dolby::hardware::dms::V2_0::BpHwDms>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor5dolby8hardware3dms4V2_04IDmsENS_4hidl4base4V1_05IBaseENS7_7BpHwDmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::BpHwDmsCallbacks::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor5dolby8hardware3dms4V2_016BpHwDmsCallbacks15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD2Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwVqeCallbacks::~BnHwVqeCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwVqeCallbacksD2Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::IDecCallbacks::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_013IDecCallbacks19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_05BsDmsE0_NS3_4IDmsE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::BsDms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_05BsDmsE0_NS3_4IDmsE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BnHwDmsCallbacks::~BnHwDmsCallbacks() */
int _ZN6vendor5dolby8hardware3dms4V2_016BnHwDmsCallbacksD1Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwVqeCallbacks::BpHwVqeCallbacks(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwVqeCallbacksC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::BpHwDecCallbacks::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_016BpHwDecCallbacks13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::BsDecCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014BsDecCallbacksE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_H */
