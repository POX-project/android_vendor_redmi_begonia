/*
 * Reverse-Engineered Source for: libaudioprimarydevicehalifclient.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libaudioprimarydevicehalifclient"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "libaudioprimarydevicehalifclient.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::MTKPrimaryDevicesHalClientImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImplC2Ev(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImplC2Ev() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImplD1Ev(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImplD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<android::String8, android::String8> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEEE = NULL;

/* Demangled: android::Singleton<android::HalDeathHandler>::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEE11getInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEE11getInstanceEv() called");
    return 0;
}

/* Demangled: std::__1::pair<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, void*>*>, bool> std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__emplace_unique_key_args<void*, std::__1::pair<void* const, std::__1::function<void ()> > >(void* const&, std::__1::pair<void* const, std::__1::function<void ()> >&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JNS_4pairIKS2_S5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S2_EEEEbEERKT_DpOT0_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE25__emplace_unique_key_argsIS2_JNS_4pairIKS2_S5_EEEEENSJ_INS_15__hash_iteratorIPNS_11__hash_nodeIS6_S2_EEEEbEERKT_DpOT0_() called");
    return 0;
}

/* Demangled: android::Singleton<android::HalDeathHandler>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEEC1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEEC1Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::HalDeathHandler>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEED2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEED2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE8do_splatEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::HalDeathHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android15HalDeathHandlerE = NULL;

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::getParameters(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImpl13getParametersERKNS_7String8E(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImpl13getParametersERKNS_7String8E() called");
    return 0;
}

/* Demangled: virtual thunk to android::HalDeathHandler::~HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android15HalDeathHandlerD0Ev(void) {
    ALOGD("_ZTv0_n12_N7android15HalDeathHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::parametersToHal(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidl15parametersToHalERKNS_8hardware8hidl_vecINS1_5audio4V6_014ParameterValueEEEPNS_7String8E(void) {
    ALOGD("_ZN7android20ConversionHelperHidl15parametersToHalERKNS_8hardware8hidl_vecINS1_5audio4V6_014ParameterValueEEEPNS_7String8E() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::registerAtExitHandler(void*, std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandler21registerAtExitHandlerEPvNSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN7android15HalDeathHandler21registerAtExitHandlerEPvNSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6rehashEj() called");
    return 0;
}

/* Exported Object: VTT for android::HalDeathHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN7android15HalDeathHandlerE = NULL;

/* Demangled: android::MTKDeviceHalHidl::setParameters(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidl13setParametersERKNS_7String8E(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidl13setParametersERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::setParameters(android::String8 const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImpl13setParametersERKNS_7String8E(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImpl13setParametersERKNS_7String8E() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::getParameters(android::String8 const&, android::String8*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidl13getParametersERKNS_7String8EPS1_(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidl13getParametersERKNS_7String8EPS1_() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::MTKDeviceHalHidl(android::sp<android::hardware::audio::V6_0::IDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidlC2ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidlC2ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalHidl::MTKDevicesFactoryHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidlC2Ev(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidlC2Ev() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidlD1Ev(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidlD1Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_compareEPKvS6_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandlerC1Ev(void) {
    ALOGD("_ZN7android15HalDeathHandlerC1Ev() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandlerD0Ev(void) {
    ALOGD("_ZN7android15HalDeathHandlerD0Ev() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandlerD2Ev(void) {
    ALOGD("_ZN7android15HalDeathHandlerD2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::HalDeathHandler>::hasInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEE11hasInstanceEv(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEE11hasInstanceEv() called");
    return 0;
}

/* Exported Object: android::Singleton<android::HalDeathHandler>::sLock */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_15HalDeathHandlerEE5sLockE = NULL;

/* Demangled: unsigned int std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__erase_unique<void*>(void* const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIS2_EEjRKT_(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE14__erase_uniqueIS2_EEjRKT_() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::remove(std::__1::__hash_const_iterator<std::__1::__hash_node<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, void*>*>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S2_EEEE(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE6removeENS_21__hash_const_iteratorIPNS_11__hash_nodeIS6_S2_EEEE() called");
    return 0;
}

/* Demangled: std::__1::__hash_table<std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::__unordered_map_hasher<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::hash<void*>, true>, std::__1::__unordered_map_equal<void*, std::__1::__hash_value_type<void*, std::__1::function<void ()> >, std::__1::equal_to<void*>, true>, std::__1::allocator<std::__1::__hash_value_type<void*, std::__1::function<void ()> > > >::__rehash(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE8__rehashEj(void) {
    ALOGD("_ZNSt3__112__hash_tableINS_17__hash_value_typeIPvNS_8functionIFvvEEEEENS_22__unordered_map_hasherIS2_S6_NS_4hashIS2_EELb1EEENS_21__unordered_map_equalIS2_S6_NS_8equal_toIS2_EELb1EEENS_9allocatorIS6_EEE8__rehashEj() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::MTKDeviceHalHidl(android::sp<android::hardware::audio::V6_0::IDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidlC1ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidlC1ERKNS_2spINS_8hardware5audio4V6_07IDeviceEEE() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidlD0Ev(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidlD0Ev() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidlD2Ev(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidlD2Ev() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClient::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android26MTKPrimaryDevicesHalClient15destroyInstanceEv(void) {
    ALOGD("_ZN7android26MTKPrimaryDevicesHalClient15destroyInstanceEv() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::ConversionHelperHidl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidlC2EPKc(void) {
    ALOGD("_ZN7android20ConversionHelperHidlC2EPKc() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandler11getInstanceEv(void) {
    ALOGD("_ZN7android15HalDeathHandler11getInstanceEv() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::unregisterAtExitHandler(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandler23unregisterAtExitHandlerEPv(void) {
    ALOGD("_ZN7android15HalDeathHandler23unregisterAtExitHandlerEPv() called");
    return 0;
}

/* Exported Object: android::Singleton<android::HalDeathHandler>::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9SingletonINS_15HalDeathHandlerEE9sInstanceE = NULL;

/* Exported Object: vtable for android::MTKDeviceHalHidl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android16MTKDeviceHalHidlE = NULL;

/* Demangled: android::MTKPrimaryDevicesHalClient::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7android26MTKPrimaryDevicesHalClient11getInstanceEv(void) {
    ALOGD("_ZN7android26MTKPrimaryDevicesHalClient11getInstanceEv() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::MTKPrimaryDevicesHalClientImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImplC1Ev(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImplC1Ev() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImplD0Ev(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImplD0Ev() called");
    return 0;
}

/* Demangled: android::MTKPrimaryDevicesHalClientImpl::~MTKPrimaryDevicesHalClientImpl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android30MTKPrimaryDevicesHalClientImplD2Ev(void) {
    ALOGD("_ZN7android30MTKPrimaryDevicesHalClientImplD2Ev() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalHidl::openDevice(char const*, android::sp<android::MTKDeviceHalInterface>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidl10openDeviceEPKcPNS_2spINS_21MTKDeviceHalInterfaceEEE(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidl10openDeviceEPKcPNS_2spINS_21MTKDeviceHalInterfaceEEE() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::analyzeResult(android::hardware::audio::V6_0::Result const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidl13analyzeResultERKNS_8hardware5audio4V6_06ResultE(void) {
    ALOGD("_ZN7android20ConversionHelperHidl13analyzeResultERKNS_8hardware5audio4V6_06ResultE() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::parametersFromHal(android::String8 const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidl17parametersFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_5audio4V6_014ParameterValueEEE(void) {
    ALOGD("_ZN7android20ConversionHelperHidl17parametersFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_5audio4V6_014ParameterValueEEE() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::emitError(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidl9emitErrorEPKcS2_(void) {
    ALOGD("_ZN7android20ConversionHelperHidl9emitErrorEPKcS2_() called");
    return 0;
}

/* Demangled: android::Singleton<android::HalDeathHandler>::Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEEC2Ev(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEEC2Ev() called");
    return 0;
}

/* Demangled: android::Singleton<android::HalDeathHandler>::~Singleton() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9SingletonINS_15HalDeathHandlerEED1Ev(void) {
    ALOGD("_ZN7android9SingletonINS_15HalDeathHandlerEED1Ev() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalInterface::create() */
extern "C" __attribute__((visibility("default"))) int _ZN7android29MTKDevicesFactoryHalInterface6createEv(void) {
    ALOGD("_ZN7android29MTKDevicesFactoryHalInterface6createEv() called");
    return 0;
}

/* Exported Object: vtable for android::MTKPrimaryDevicesHalClientImpl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android30MTKPrimaryDevicesHalClientImplE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Demangled: virtual thunk to android::HalDeathHandler::~HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N7android15HalDeathHandlerD1Ev(void) {
    ALOGD("_ZTv0_n12_N7android15HalDeathHandlerD1Ev() called");
    return 0;
}

/* Exported Object: vtable for android::MTKDevicesFactoryHalHidl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android24MTKDevicesFactoryHalHidlE = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE7do_copyEPvPKvj() called");
    return 0;
}

/* Exported Object: vtable for android::MTKDeviceHalInterface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android21MTKDeviceHalInterfaceE = NULL;

/* Demangled: android::MTKDevicesFactoryHalHidl::MTKDevicesFactoryHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidlC1Ev(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidlC1Ev() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidlD0Ev(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidlD0Ev() called");
    return 0;
}

/* Demangled: android::MTKDevicesFactoryHalHidl::~MTKDevicesFactoryHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android24MTKDevicesFactoryHalHidlD2Ev(void) {
    ALOGD("_ZN7android24MTKDevicesFactoryHalHidlD2Ev() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::serviceDied(unsigned long long, android::wp<android::hidl::base::V1_0::IBase> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandler11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void) {
    ALOGD("_ZN7android15HalDeathHandler11serviceDiedEyRKNS_2wpINS_4hidl4base4V1_05IBaseEEE() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandlerC2Ev(void) {
    ALOGD("_ZN7android15HalDeathHandlerC2Ev() called");
    return 0;
}

/* Demangled: android::HalDeathHandler::~HalDeathHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN7android15HalDeathHandlerD1Ev(void) {
    ALOGD("_ZN7android15HalDeathHandlerD1Ev() called");
    return 0;
}

/* Demangled: android::MTKDeviceHalHidl::~MTKDeviceHalHidl() */
extern "C" __attribute__((visibility("default"))) int _ZN7android16MTKDeviceHalHidlD1Ev(void) {
    ALOGD("_ZN7android16MTKDeviceHalHidlD1Ev() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::keysFromHal(android::String8 const&, android::hardware::hidl_vec<android::hardware::hidl_string>*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidl11keysFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_11hidl_stringEEE(void) {
    ALOGD("_ZN7android20ConversionHelperHidl11keysFromHalERKNS_7String8EPNS_8hardware8hidl_vecINS4_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::ConversionHelperHidl::ConversionHelperHidl(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android20ConversionHelperHidlC1EPKc(void) {
    ALOGD("_ZN7android20ConversionHelperHidlC1EPKc() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<android::String8, android::String8> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tINS_7String8ES2_EEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::hidl_death_recipient-in-android::HalDeathHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN7android15HalDeathHandlerE0_NS_8hardware20hidl_death_recipientE = NULL;
