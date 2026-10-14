/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.pq@2.3.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_pq_2_3"

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
#include "vendor_mediatek_hardware_pq_2_3.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_custInvoke(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality16_hidl_custInvokeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality16_hidl_custInvokeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::writeField(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10writeFieldEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10writeFieldEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BsPictureQuality::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_getESSLEDMinStep(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22_hidl_getESSLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22_hidl_getESSLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_3::IPictureQuality, vendor::mediatek::hardware::pq::V2_0::IPictureQuality, vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_015IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setESSLEDMinStep(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality22_hidl_setESSLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality22_hidl_setESSLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_3::IPictureQuality, vendor::mediatek::hardware::pq::V2_1::IPictureQuality, vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_115IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_115IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setLowBLReadabilityLevel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality30_hidl_setLowBLReadabilityLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality30_hidl_setLowBLReadabilityLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_NS2_4V2_215IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setReadabilityLevel(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality25_hidl_setReadabilityLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality25_hidl_setReadabilityLevelEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setFunction(unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality11setFunctionEjb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality11setFunctionEjb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setColorTransform(android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_readField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15_hidl_readFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15_hidl_readFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setColorRegion(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setColorRegionEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setColorRegionEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setBlueLightStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setBlueLightStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setBlueLightStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_getESSOLEDMinStep(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality23_hidl_getESSOLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality23_hidl_getESSOLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setDISPScenario(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15setDISPScenarioEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15setDISPScenarioEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setSmartBacklightRange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22setSmartBacklightRangeEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22setSmartBacklightRangeEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_getESSOLEDMinStep(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23_hidl_getESSOLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23_hidl_getESSOLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setLowBLReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality24setLowBLReadabilityLevelEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality24setLowBLReadabilityLevelEi() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_3::IPictureQuality, vendor::mediatek::hardware::pq::V2_2::IPictureQuality, vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality>(android::sp<vendor::mediatek::hardware::pq::V2_2::IPictureQuality>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_215IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS6_4V2_215IPictureQualityENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_3::IPictureQuality, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_315IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality, vendor::mediatek::hardware::pq::V2_3::IPictureQuality, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16setFeatureSwitchENS2_4V2_011PQFeatureIDEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_NS2_4V2_115IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setScreenState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20_hidl_setScreenStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20_hidl_setScreenStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setGlobalPQStableStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23setGlobalPQStableStatusEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23setGlobalPQStableStatusEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9execIoctlERKNS2_4V2_017dispPQIoctlParamsENSt3__18functionIFvNS5_6ResultES8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15globalPQIndex_tEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::readField(unsigned int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9readFieldEjNSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_NS2_4V2_015IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setESSLEDMinStep(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22_hidl_setESSLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality22_hidl_setESSLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setSmartBacklightStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality25setSmartBacklightStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality25setSmartBacklightStrengthEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS2_4V2_06ResultEbEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_3::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::enableBlueLight(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15enableBlueLightEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15enableBlueLightEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_writeField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16_hidl_writeFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16_hidl_writeFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjj() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10setRGBGainEjjji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10setRGBGainEjjji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setESSLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16setESSLEDMinStepEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16setESSLEDMinStepEj() called");
    return 0;
}

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

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_readField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality15_hidl_readFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality15_hidl_readFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS2_4V2_06ResultERKNS7_15dispPQWinParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setPQMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9setPQModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9setPQModeEii() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_316BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setSmartBacklightRange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality28_hidl_setSmartBacklightRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality28_hidl_setSmartBacklightRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::custInvoke(int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10custInvokeEix(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10custInvokeEix() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setLowBLReadabilityLevel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality30_hidl_setLowBLReadabilityLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality30_hidl_setLowBLReadabilityLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality9getAshmemENSt3__18functionIFvNS2_4V2_06ResultERKN7android8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_writeField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality16_hidl_writeFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality16_hidl_writeFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setFunction(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setChameleonStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setChameleonStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setChameleonStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS2_4V2_06ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setSmartBacklightRange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality28_hidl_setSmartBacklightRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality28_hidl_setSmartBacklightRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_custInvoke(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16_hidl_custInvokeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEix(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16_hidl_custInvokeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEix() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setESSOLEDMinStep(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setESSOLEDMinStepEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setESSOLEDMinStepEj() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setGlobalPQStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setGlobalPQStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setGlobalPQStrengthEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_015IPictureQualityEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getESSOLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17getESSOLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setReadabilityLevel(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality25_hidl_setReadabilityLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality25_hidl_setReadabilityLevelEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
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

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::pq::V2_3::IPictureQuality>-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_2::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_215IPictureQualityEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_215IPictureQualityEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setReadabilityLevel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setReadabilityLevelEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setReadabilityLevelEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_1::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_115IPictureQualityEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spINS2_4V2_115IPictureQualityEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setScreenState(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setScreenStateEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setScreenStateEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setESSOLEDMinStep(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23_hidl_setESSOLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality23_hidl_setESSOLEDMinStepEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS2_4V2_06ResultERKNS7_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setAmbientLightRGBW(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setAmbientLightRGBWEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality19setAmbientLightRGBWEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::_hidl_setFunction(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_2::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE0_NS2_4V2_215IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setESSOLEDMinStep(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality23_hidl_setESSOLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality23_hidl_setESSOLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setTDSHPFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12setTDSHPFlagEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality12setTDSHPFlagEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setGammaIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13setGammaIndexEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality13setGammaIndexEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setGlobalPQSwitch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setGlobalPQSwitchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setGlobalPQSwitchEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setExternalPanelNits(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setExternalPanelNitsEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality20setExternalPanelNitsEj() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_1::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE0_NS2_4V2_115IPictureQualityE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setColorMatrix3x3(android::hardware::hidl_array<int, 3u, 3u> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLj3EJLj3EEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setColorMatrix3x3ERKN7android8hardware10hidl_arrayIiLj3EJLj3EEEEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_3::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_setScreenState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality20_hidl_setScreenStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality20_hidl_setScreenStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::_hidl_getESSLEDMinStep(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality22_hidl_getESSLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQuality22_hidl_getESSLEDMinStepEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::enableChameleon(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15enableChameleonEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality15enableChameleonEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getESSLEDMinStep(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getESSLEDMinStepENSt3__18functionIFvNS2_4V2_06ResultEjEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE0_NS2_4V2_015IPictureQualityE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::IPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_315IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setTuningField(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setTuningFieldEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality14setTuningFieldEiii() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_3::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_315IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setPQIndex(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10setPQIndexEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality10setPQIndexEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality16getFeatureSwitchENS2_4V2_011PQFeatureIDENSt3__18functionIFvNS5_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_3::BpHwPictureQuality::setAmbientLightCT(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setAmbientLightCTEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_318BpHwPictureQuality17setAmbientLightCTEddd() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_3::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_318BnHwPictureQualityE = NULL;
