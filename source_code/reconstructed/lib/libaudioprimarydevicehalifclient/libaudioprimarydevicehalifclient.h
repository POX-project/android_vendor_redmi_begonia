/*
 * Reverse-Engineered ABI Specification for: libaudioprimarydevicehalifclient.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudioprimarydevicehalifclient.so
 */

#ifndef BEGONIA_RE_LIBAUDIOPRIMARYDEVICEHALIFCLIENT_H
#define BEGONIA_RE_LIBAUDIOPRIMARYDEVICEHALIFCLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImplC2Ev */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::MTKPrimaryDevicesHalClientImpl() */
int _ZN7android30MTKPrimaryDevicesHalClientImplC2Ev(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImplD1Ev */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
int _ZN7android30MTKPrimaryDevicesHalClientImplD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE;

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEE11getInstanceEv */
/* Demangled: android::Singleton<android::HalDeathHandler>::getInstance() */
int _ZN7android9SingletonINS_15HalDeathHandlerEE11getInstanceEv(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JNS_4pairIKS2_S5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S2_EEEEbEERKT_DpOT0_ */
/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__emplace_unique_key_args<void*, std::__1::pair<void* const, std::__1::function<void ()> > >(void* const&, std::__1::pair<void* const, std::__1::function<void ()> >&&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JNS_4pairIKS2_S5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S2_EEEEbEERKT_DpOT0_(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEEC1Ev */
/* Demangled: android::Singleton<android::HalDeathHandler>::Singleton() */
int _ZN7android9SingletonINS_15HalDeathHandlerEEC1Ev(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEED2Ev */
/* Demangled: android::Singleton<android::HalDeathHandler>::~Singleton() */
int _ZN7android9SingletonINS_15HalDeathHandlerEED2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void);

/* Symbol: _ZTVN7android15HalDeathHandlerE */
/* Demangled: vtable for android::HalDeathHandler */
extern void* _ZTVN7android15HalDeathHandlerE;

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImpl13getParametersERKNS_7String8E */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::getParameters(android::String8 const&) */
int _ZN7android30MTKPrimaryDevicesHalClientImpl13getParametersERKNS_7String8E(void);

/* Symbol: _ZTv0_n12_N7android15HalDeathHandlerD0Ev */
/* Demangled: virtual thunk to android::HalDeathHandler::~HalDeathHandler() */
int _ZTv0_n12_N7android15HalDeathHandlerD0Ev(void);

/* Symbol: _ZN7android20ConversionHelperHidl15parametersToHalERKNS_8hardware8hidl_vecINS1_5audio4V6_014ParameterValueEEEPNS_7String8E */
/* Demangled: android::ConversionHelperHidl::parametersToHal(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::String8*) */
int _ZN7android20ConversionHelperHidl15parametersToHalERKNS_8hardware8hidl_vecINS1_5audio4V6_014ParameterValueEEEPNS_7String8E(void);

/* Symbol: _ZN7android15HalDeathHandler21registerAtExitHandlerEPvNSt3__18functionIFvvEEE */
/* Demangled: android::HalDeathHandler::registerAtExitHandler(void*, std::__1::function<void ()>) */
int _ZN7android15HalDeathHandler21registerAtExitHandlerEPvNSt3__18functionIFvvEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6rehashEj(void);

/* Symbol: _ZTTN7android15HalDeathHandlerE */
/* Demangled: VTT for android::HalDeathHandler */
extern void* _ZTTN7android15HalDeathHandlerE;

/* Symbol: _ZN7android16MTKDeviceHalHidl13setParametersERKNS_7String8E */
/* Demangled: android::MTKDeviceHalHidl::setParameters(android::String8 const&) */
int _ZN7android16MTKDeviceHalHidl13setParametersERKNS_7String8E(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImpl13setParametersERKNS_7String8E */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::setParameters(android::String8 const&) */
int _ZN7android30MTKPrimaryDevicesHalClientImpl13setParametersERKNS_7String8E(void);

/* Symbol: _ZN7android16MTKDeviceHalHidl13getParametersERKNS_7String8EPS1_ */
/* Demangled: android::MTKDeviceHalHidl::getParameters(android::String8 const&, android::String8*) */
int _ZN7android16MTKDeviceHalHidl13getParametersERKNS_7String8EPS1_(void);

/* Symbol: _ZN7android16MTKDeviceHalHidlC2ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE */
/* Demangled: android::MTKDeviceHalHidl::MTKDeviceHalHidl(android::sp<android::hardware::audio::V6_0::IDevice> const&) */
int _ZN7android16MTKDeviceHalHidlC2ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE(void);

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidlC2Ev */
/* Demangled: android::MTKDevicesFactoryHalHidl::MTKDevicesFactoryHalHidl() */
int _ZN7android24MTKDevicesFactoryHalHidlC2Ev(void);

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidlD1Ev */
/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
int _ZN7android24MTKDevicesFactoryHalHidlD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: _ZN7android15HalDeathHandlerC1Ev */
/* Demangled: android::HalDeathHandler::HalDeathHandler() */
int _ZN7android15HalDeathHandlerC1Ev(void);

/* Symbol: _ZN7android15HalDeathHandlerD0Ev */
/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
int _ZN7android15HalDeathHandlerD0Ev(void);

/* Symbol: _ZN7android15HalDeathHandlerD2Ev */
/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
int _ZN7android15HalDeathHandlerD2Ev(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEE11hasInstanceEv */
/* Demangled: android::Singleton<android::HalDeathHandler>::hasInstance() */
int _ZN7android9SingletonINS_15HalDeathHandlerEE11hasInstanceEv(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEE5sLockE */
/* Demangled: android::Singleton<android::HalDeathHandler>::sLock */
extern void* _ZN7android9SingletonINS_15HalDeathHandlerEE5sLockE;

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIS2_EEjRKT_ */
/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__erase_unique<void*>(void* const&) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIS2_EEjRKT_(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S2_EEEE */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, void*>*>) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S2_EEEE(void);

/* Symbol: _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE8__rehashEj */
/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__rehash(unsigned int) */
int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE8__rehashEj(void);

/* Symbol: _ZN7android16MTKDeviceHalHidlC1ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE */
/* Demangled: android::MTKDeviceHalHidl::MTKDeviceHalHidl(android::sp<android::hardware::audio::V6_0::IDevice> const&) */
int _ZN7android16MTKDeviceHalHidlC1ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE(void);

/* Symbol: _ZN7android16MTKDeviceHalHidlD0Ev */
/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
int _ZN7android16MTKDeviceHalHidlD0Ev(void);

/* Symbol: _ZN7android16MTKDeviceHalHidlD2Ev */
/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
int _ZN7android16MTKDeviceHalHidlD2Ev(void);

/* Symbol: _ZN7android26MTKPrimaryDevicesHalClient15destroyInstanceEv */
/* Demangled: android::MTKPrimaryDevicesHalClient::destroyInstance() */
int _ZN7android26MTKPrimaryDevicesHalClient15destroyInstanceEv(void);

/* Symbol: _ZN7android20ConversionHelperHidlC2EPKc */
/* Demangled: android::ConversionHelperHidl::ConversionHelperHidl(char const*) */
int _ZN7android20ConversionHelperHidlC2EPKc(void);

/* Symbol: _ZN7android15HalDeathHandler11getInstanceEv */
/* Demangled: android::HalDeathHandler::getInstance() */
int _ZN7android15HalDeathHandler11getInstanceEv(void);

/* Symbol: _ZN7android15HalDeathHandler23unregisterAtExitHandlerEPv */
/* Demangled: android::HalDeathHandler::unregisterAtExitHandler(void*) */
int _ZN7android15HalDeathHandler23unregisterAtExitHandlerEPv(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEE9sInstanceE */
/* Demangled: android::Singleton<android::HalDeathHandler>::sInstance */
extern void* _ZN7android9SingletonINS_15HalDeathHandlerEE9sInstanceE;

/* Symbol: _ZTVN7android16MTKDeviceHalHidlE */
/* Demangled: vtable for android::MTKDeviceHalHidl */
extern void* _ZTVN7android16MTKDeviceHalHidlE;

/* Symbol: _ZN7android26MTKPrimaryDevicesHalClient11getInstanceEv */
/* Demangled: android::MTKPrimaryDevicesHalClient::getInstance() */
int _ZN7android26MTKPrimaryDevicesHalClient11getInstanceEv(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImplC1Ev */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::MTKPrimaryDevicesHalClientImpl() */
int _ZN7android30MTKPrimaryDevicesHalClientImplC1Ev(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImplD0Ev */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
int _ZN7android30MTKPrimaryDevicesHalClientImplD0Ev(void);

/* Symbol: _ZN7android30MTKPrimaryDevicesHalClientImplD2Ev */
/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
int _ZN7android30MTKPrimaryDevicesHalClientImplD2Ev(void);

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidl10openDeviceEPKcPNS_2spINS_21MTKDeviceHalInterfaceEEE */
/* Demangled: android::MTKDevicesFactoryHalHidl::openDevice(char const*, android::sp<android::MTKDeviceHalInterface>*) */
int _ZN7android24MTKDevicesFactoryHalHidl10openDeviceEPKcPNS_2spINS_21MTKDeviceHalInterfaceEEE(void);

/* Symbol: _ZN7android20ConversionHelperHidl13analyzeResultERKNS_8hardware5audio4V6_06ResultE */
/* Demangled: android::ConversionHelperHidl::analyzeResult(android::hardware::audio::V6_0::Result const&) */
int _ZN7android20ConversionHelperHidl13analyzeResultERKNS_8hardware5audio4V6_06ResultE(void);

/* Symbol: _ZN7android20ConversionHelperHidl17parametersFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_5audio4V6_014ParameterValueEEE */
/* Demangled: android::ConversionHelperHidl::parametersFromHal(android::String8 const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue>*) */
int _ZN7android20ConversionHelperHidl17parametersFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_5audio4V6_014ParameterValueEEE(void);

/* Symbol: _ZN7android20ConversionHelperHidl9emitErrorEPKcS2_ */
/* Demangled: android::ConversionHelperHidl::emitError(char const*, char const*) */
int _ZN7android20ConversionHelperHidl9emitErrorEPKcS2_(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEEC2Ev */
/* Demangled: android::Singleton<android::HalDeathHandler>::Singleton() */
int _ZN7android9SingletonINS_15HalDeathHandlerEEC2Ev(void);

/* Symbol: _ZN7android9SingletonINS_15HalDeathHandlerEED1Ev */
/* Demangled: android::Singleton<android::HalDeathHandler>::~Singleton() */
int _ZN7android9SingletonINS_15HalDeathHandlerEED1Ev(void);

/* Symbol: _ZN7android29MTKDevicesFactoryHalInterface6createEv */
/* Demangled: android::MTKDevicesFactoryHalInterface::create() */
int _ZN7android29MTKDevicesFactoryHalInterface6createEv(void);

/* Symbol: _ZTVN7android30MTKPrimaryDevicesHalClientImplE */
/* Demangled: vtable for android::MTKPrimaryDevicesHalClientImpl */
extern void* _ZTVN7android30MTKPrimaryDevicesHalClientImplE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void);

/* Symbol: _ZTv0_n12_N7android15HalDeathHandlerD1Ev */
/* Demangled: virtual thunk to android::HalDeathHandler::~HalDeathHandler() */
int _ZTv0_n12_N7android15HalDeathHandlerD1Ev(void);

/* Symbol: _ZTVN7android24MTKDevicesFactoryHalHidlE */
/* Demangled: vtable for android::MTKDevicesFactoryHalHidl */
extern void* _ZTVN7android24MTKDevicesFactoryHalHidlE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void);

/* Symbol: _ZTVN7android21MTKDeviceHalInterfaceE */
/* Demangled: vtable for android::MTKDeviceHalInterface */
extern void* _ZTVN7android21MTKDeviceHalInterfaceE;

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidlC1Ev */
/* Demangled: android::MTKDevicesFactoryHalHidl::MTKDevicesFactoryHalHidl() */
int _ZN7android24MTKDevicesFactoryHalHidlC1Ev(void);

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidlD0Ev */
/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
int _ZN7android24MTKDevicesFactoryHalHidlD0Ev(void);

/* Symbol: _ZN7android24MTKDevicesFactoryHalHidlD2Ev */
/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
int _ZN7android24MTKDevicesFactoryHalHidlD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void);

/* Symbol: _ZN7android15HalDeathHandler11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::HalDeathHandler::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android15HalDeathHandler11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN7android15HalDeathHandlerC2Ev */
/* Demangled: android::HalDeathHandler::HalDeathHandler() */
int _ZN7android15HalDeathHandlerC2Ev(void);

/* Symbol: _ZN7android15HalDeathHandlerD1Ev */
/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
int _ZN7android15HalDeathHandlerD1Ev(void);

/* Symbol: _ZN7android16MTKDeviceHalHidlD1Ev */
/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
int _ZN7android16MTKDeviceHalHidlD1Ev(void);

/* Symbol: _ZN7android20ConversionHelperHidl11keysFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_11hidl_stringEEE */
/* Demangled: android::ConversionHelperHidl::keysFromHal(android::String8 const&, android::hardware::hidl_vec<android::hardware::hidl_string>*) */
int _ZN7android20ConversionHelperHidl11keysFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_11hidl_stringEEE(void);

/* Symbol: _ZN7android20ConversionHelperHidlC1EPKc */
/* Demangled: android::ConversionHelperHidl::ConversionHelperHidl(char const*) */
int _ZN7android20ConversionHelperHidlC1EPKc(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj */
/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: _ZTCN7android15HalDeathHandlerE0_NS_8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::HalDeathHandler */
extern void* _ZTCN7android15HalDeathHandlerE0_NS_8hardware20hidl_death_recipientE;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOPRIMARYDEVICEHALIFCLIENT_H */
