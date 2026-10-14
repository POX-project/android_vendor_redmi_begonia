/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkpower@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkpower_1_1"

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
#include "vendor_mediatek_hardware_mtkpower_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS2_4V1_09IMtkPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS2_4V1_09IMtkPowerEEEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14notifyAppStateERKN7android8hardware11hidl_stringES9_iii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::_hidl_mtkPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS3_8IMtkPerfE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::mtkCusPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15mtkCusPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15mtkCusPowerHintEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE0_NS3_9IMtkPowerE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS2_4V1_09IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower>(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS6_4V1_09IMtkPowerENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS6_4V1_09IMtkPowerENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS2_4V1_08IMtkPerfEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS2_4V1_08IMtkPerfEEEb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfCusLockHint(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfCusLockHintEij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfCusLockHintEij() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfLockAcquire(int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::mtkPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12mtkPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12mtkPowerHintEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_NS2_4V1_08IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setSysInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE = NULL;

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::_hidl_mtkPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfE0_NS3_8IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::perfLockRelease(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockReleaseEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf15perfLockReleaseEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS6_20BpHwMtkPowerCallbackENS6_20BnHwMtkPowerCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS6_20BpHwMtkPowerCallbackENS6_20BnHwMtkPowerCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackENS7_17IMtkPowerCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackENS7_17IMtkPowerCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setSysInfoAsync(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower19setMtkPowerCallbackERKN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::BpHwMtkPowerCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::_hidl_perfCusLockHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf21_hidl_perfCusLockHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf21_hidl_perfCusLockHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::mtkPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12mtkPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12mtkPowerHintEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE0_NS2_4V1_08IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_N7android8hardware11BpInterfaceINS3_17IMtkPowerCallbackEEE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_110BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::BpHwMtkPowerCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf, vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::_hidl_setMtkPowerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower25_hidl_setMtkPowerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPower25_hidl_setMtkPowerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::querySysInfo(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12querySysInfoEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12querySysInfoEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwMtkPowerCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackENS_4hidl4base4V1_05IBaseENS7_20BpHwMtkPowerCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::BnHwMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC2ERKN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC2ERKN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE0_NS3_9IMtkPowerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPerf::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback, void>(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::BsMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC2EN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC2EN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerf4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::BnHwMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC1ERKN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackC1ERKN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::_hidl_setMtkPowerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower25_hidl_setMtkPowerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower25_hidl_setMtkPowerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback::BsMtkPowerCallback(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC1EN7android2spINS3_17IMtkPowerCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackC1EN7android2spINS3_17IMtkPowerCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf>(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS6_4V1_08IMtkPerfENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS6_4V1_08IMtkPerfENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerfE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallback20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::~BnHwMtkPowerCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_112BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_112BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPowerE0_NS2_4V1_09IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPowerCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_120BnHwMtkPowerCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf::_hidl_perfCusLockHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21_hidl_perfCusLockHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEij(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_111BpHwMtkPerf21_hidl_perfCusLockHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEij() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_19IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_117IMtkPowerCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_1::IMtkPowerCallback-in-vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE0_NS3_17IMtkPowerCallbackE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_120BpHwMtkPowerCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_1::BsMtkPowerCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_118BsMtkPowerCallbackE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_1::BpHwMtkPerf>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_1::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_111BnHwMtkPerfE0_N7android8hardware9BHwBinderE = NULL;
