/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.pq@2.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_pq_2_1"

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
#include "vendor_mediatek_hardware_pq_2_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setGlobalPQSwitch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setGlobalPQSwitchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setGlobalPQSwitchEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setBlueLightStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setBlueLightStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setBlueLightStrengthEii() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BsPictureQuality::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setPQMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9setPQModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9setPQModeEii() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setSmartBacklightStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality25setSmartBacklightStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality25setSmartBacklightStrengthEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_1::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setChameleonStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setChameleonStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setChameleonStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_1::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_115IPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setPQIndex(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality10setPQIndexEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality10setPQIndexEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::_hidl_setSmartBacklightStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality31_hidl_setSmartBacklightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality31_hidl_setSmartBacklightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::enableBlueLight(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15enableBlueLightEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15enableBlueLightEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::enableChameleon(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15enableChameleonEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15enableChameleonEbi() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_1::IPictureQuality, vendor::mediatek::hardware::pq::V2_0::IPictureQuality, vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_115IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_115IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_1::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setColorRegion(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14setColorRegionEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14setColorRegionEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setAmbientLightCT(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setAmbientLightCTEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setAmbientLightCTEddd() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::_hidl_setSmartBacklightStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality31_hidl_setSmartBacklightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQuality31_hidl_setSmartBacklightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setDISPScenario(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15setDISPScenarioEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality15setDISPScenarioEii() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_1::IPictureQuality, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_115IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_115IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE0_NS2_4V2_015IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setGlobalPQStableStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality23setGlobalPQStableStatusEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality23setGlobalPQStableStatusEi() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_1::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_115IPictureQualityE0_NS2_4V2_015IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setTDSHPFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12setTDSHPFlagEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12setTDSHPFlagEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setColorTransform(android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setGlobalPQStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19setGlobalPQStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19setGlobalPQStrengthEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setGammaIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13setGammaIndexEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13setGammaIndexEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality, vendor::mediatek::hardware::pq::V2_1::IPictureQuality, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_116BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setAmbientLightRGBW(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19setAmbientLightRGBWEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19setAmbientLightRGBWEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setTuningField(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14setTuningFieldEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality14setTuningFieldEiii() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::pq::V2_1::IPictureQuality>-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setExternalPanelNits(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setExternalPanelNitsEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality20setExternalPanelNitsEj() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_1::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_115IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::IPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_115IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_115IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality10setRGBGainEjjji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality10setRGBGainEjjji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_1::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_118BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_1::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_118BnHwPictureQualityD1Ev() called");
    return 0;
}
