/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.power@2.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_power_2_1"

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
#include "vendor_mediatek_hardware_power_2_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_0::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_0::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_16IPowerE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BsPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_17BsPowerE0_NS3_6IPowerE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::power::V2_1::IPower>-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware11BpInterfaceINS3_6IPowerEEE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS3_6IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC1EN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_17BsPowerC1EN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_1::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_1::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_16IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnDisable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10scnDisableEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10scnDisableEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::querySysInfo(vendor::mediatek::hardware::power::V2_0::MtkQueryCmd, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12querySysInfoENS2_4V2_011MtkQueryCmdEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12querySysInfoENS2_4V2_011MtkQueryCmdEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hardware::power::V1_2::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hardware::power::V1_2::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS0_5power4V1_26IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC1ERKN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC1ERKN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::power::V2_1::IPower> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::power::V2_1::BpHwPower, vendor::mediatek::hardware::power::V2_1::IPower, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_19BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5power4V2_19BpHwPowerENS7_6IPowerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnReg() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower6scnRegEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower6scnRegEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_1::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_16IPowerE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_16IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_setSysInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower16_hidl_setSysInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_NS2_4V2_06IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setFeature(android::hardware::power::V1_0::Feature, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setFeatureEN7android8hardware5power4V1_07FeatureEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifyAppState_2_1(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18notifyAppState_2_1ERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18notifyAppState_2_1ERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_06IPowerE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::mtkPowerHint(vendor::mediatek::hardware::power::V2_0::MtkPowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12mtkPowerHintENS2_4V2_012MtkPowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12mtkPowerHintENS2_4V2_012MtkPowerHintEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setInteractive(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14setInteractiveEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14setInteractiveEb() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14notifyAppStateERKN7android8hardware11hidl_stringES9_iNS2_4V2_011MtkActStateE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getSubsystemLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_1::PowerStateSubsystem> const&, android::hardware::power::V1_0::Status)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower25getSubsystemLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_119PowerStateSubsystemEEENSA_4V1_06StatusEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_19BnHwPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_0::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_06IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, vendor::mediatek::hardware::power::V2_0::IPower, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<vendor::mediatek::hardware::power::V2_0::IPower>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS6_4V2_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS6_4V2_06IPowerENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_19BnHwPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnConfig(int, vendor::mediatek::hardware::power::V2_0::MtkPowerCmd, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnConfigEiNS2_4V2_011MtkPowerCmdEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnConfigEiNS2_4V2_011MtkPowerCmdEiiii() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnUltraCfg(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11scnUltraCfgEiiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11scnUltraCfgEiiiiii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_0::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_06IPowerE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_scnConfig_2_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower19_hidl_scnConfig_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower19_hidl_scnConfig_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnEnable(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnEnableEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9scnEnableEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_2::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_26IPowerEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android8hardware5power4V1_26IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHint(android::hardware::power::V1_0::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower9powerHintEN7android8hardware5power4V1_09PowerHintEi() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_16IPowerE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware5power4V2_19BpHwPowerE = NULL;

/* Exported Object: vendor::mediatek::hardware::power::V2_1::IPower::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware5power4V2_16IPower10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<vendor::mediatek::hardware::power::V2_0::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS2_4V2_06IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS2_4V2_06IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hardware::power::V1_1::IPower> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_8hardware5power4V1_16IPowerEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::BnHwPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC2ERKN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerC2ERKN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::mtkCusPowerHint(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15mtkCusPowerHintEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower15mtkCusPowerHintEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::power::V2_1::BnHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BnHwPowerE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::power::V2_0::IPower-in-vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_19BpHwPowerE0_NS2_4V2_06IPowerE = NULL;

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHintAsync(android::hardware::power::V1_0::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower14powerHintAsyncEN7android8hardware5power4V1_09PowerHintEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::powerHintAsync_1_2(android::hardware::power::V1_2::PowerHint, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower18powerHintAsync_1_2EN7android8hardware5power4V1_29PowerHintEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnUnreg(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower8scnUnregEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower8scnUnregEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_1::BsPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_17BsPowerE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::power::V2_1::BpHwPower */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware5power4V2_19BpHwPowerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::_hidl_notifyAppState_2_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPower24_hidl_notifyAppState_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPower24_hidl_notifyAppState_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_scnConfig_2_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::power::V2_1::MtkPowerCmd, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19_hidl_scnConfig_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower19_hidl_scnConfig_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNS3_11MtkPowerCmdEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::BpHwPower(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPowerC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::BsPower(android::sp<vendor::mediatek::hardware::power::V2_1::IPower>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_17BsPowerC2EN7android2spINS3_6IPowerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_17BsPowerC2EN7android2spINS3_6IPowerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_setSysInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower16_hidl_setSysInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::_hidl_notifyAppState_2_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int, vendor::mediatek::hardware::power::V2_0::MtkActState, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24_hidl_notifyAppState_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS2_4V2_011MtkActStateEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24_hidl_notifyAppState_2_1EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_iNS2_4V2_011MtkActStateEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getPlatformLowPowerStats(std::__1::function<void (android::hardware::hidl_vec<android::hardware::power::V1_0::PowerStatePlatformSleepState> const&, android::hardware::power::V1_0::Status)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower24getPlatformLowPowerStatsENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_5power4V1_028PowerStatePlatformSleepStateEEENSB_6StatusEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::power::V2_1::IPower> > android::hardware::details::castInterface<vendor::mediatek::hardware::power::V2_1::IPower, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::power::V2_1::BpHwPower>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5power4V2_16IPowerENS_4hidl4base4V1_05IBaseENS7_9BpHwPowerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware5power4V2_19BnHwPowerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BsPower::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_17BsPower13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_17BsPower13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BnHwPower::~BnHwPower() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BnHwPowerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::scnConfig_2_1(int, vendor::mediatek::hardware::power::V2_1::MtkPowerCmd, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13scnConfig_2_1EiNS3_11MtkPowerCmdEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower13scnConfig_2_1EiNS3_11MtkPowerCmdEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::IPower::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_16IPower8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::power::V2_1::BpHwPower::setSysInfo(int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setSysInfoEiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware5power4V2_19BpHwPower10setSysInfoEiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::power::V1_2::IPower-in-vendor::mediatek::hardware::power::V2_1::IPower */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware5power4V2_16IPowerE0_N7android8hardware5power4V1_26IPowerE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::power::V2_1::BpHwPower::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware5power4V2_19BpHwPower15onLastStrongRefEPKv() called");
    return 0;
}
