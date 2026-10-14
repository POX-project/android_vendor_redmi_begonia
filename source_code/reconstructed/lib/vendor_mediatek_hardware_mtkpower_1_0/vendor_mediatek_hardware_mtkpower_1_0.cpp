/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkpower@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkpower_1_0"

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
#include "vendor_mediatek_hardware_mtkpower_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC2ERKN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::perfLockAcquire(int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockAcquireEijRKN7android8hardware8hidl_vecIiEEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_querySysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_querySysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::_hidl_perfLockRelease(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockReleaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockReleaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfENS7_8IMtkPerfEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_mtkPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_mtkPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_setSysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_mtkCusPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_mtkCusPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower, vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerENS7_9IMtkPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfENS_4hidl4base4V1_05IBaseENS7_11BpHwMtkPerfEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::castFrom(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::BpHwMtkPerf(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerENS_4hidl4base4V1_05IBaseENS7_12BpHwMtkPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_mtkCusPowerHint(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_mtkCusPowerHintEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC1ERKN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_setSysInfoAsync(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_setSysInfoAsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21_hidl_setSysInfoAsyncEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::BpHwMtkPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_NS3_8IMtkPerfE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC2EN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf-in-vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE0_NS3_8IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::BnHwMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfC1ERKN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_NS3_9IMtkPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::mtkPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12mtkPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12mtkPowerHintEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE0_N7android8hardware11BpInterfaceINS3_8IMtkPerfEEE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setSysInfoAsync(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15setSysInfoAsyncEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iii() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::BnHwMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerC2ERKN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::BsMtkPower(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerC1EN7android2spINS3_9IMtkPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::_hidl_perfLockAcquire(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int, android::hardware::hidl_vec<int> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockAcquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEijRKNS6_8hidl_vecIiEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockAcquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEijRKNS6_8hidl_vecIiEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerf13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower>-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android8hardware11BpInterfaceINS3_9IMtkPowerEEE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_querySysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower18_hidl_querySysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::_hidl_setSysInfoAsync(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_setSysInfoAsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPower21_hidl_setSysInfoAsyncEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::querySysInfo(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12querySysInfoEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower12querySysInfoEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::perfLockRelease(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockReleaseEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf15perfLockReleaseEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC2EN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_setSysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::mtkCusPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15mtkCusPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15mtkCusPowerHintEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPerf::BsMtkPerf(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09BsMtkPerfC1EN7android2spINS3_8IMtkPerfEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPower::~BnHwMtkPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BnHwMtkPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::~BnHwMtkPerf() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerfD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::_hidl_mtkPowerHint(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower18_hidl_mtkPowerHintEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower-in-vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPowerE0_NS3_9IMtkPowerE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::_hidl_perfLockRelease(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockReleaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf21_hidl_perfLockReleaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BnHwMtkPerf::_hidl_perfLockAcquire(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockAcquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BnHwMtkPerf21_hidl_perfLockAcquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerf12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BsMtkPower::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_010BsMtkPower13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPowerE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8mtkpower4V1_011BpHwMtkPerfE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mtkpower::V1_0::BpHwMtkPower::setSysInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8mtkpower4V1_012BpHwMtkPower10setSysInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkpower::V1_0::IMtkPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8mtkpower4V1_09IMtkPowerE = NULL;
