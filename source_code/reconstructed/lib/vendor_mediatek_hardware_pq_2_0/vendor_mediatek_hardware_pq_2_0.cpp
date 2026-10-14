/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.pq@2.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_pq_2_0"

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
#include "vendor_mediatek_hardware_pq_2_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setRGBGain(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setRGBGainEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setRGBGainEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setTDSHPFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_setTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_setTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setPQIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setFeatureSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_setFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_setFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setExternalPanelNits(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setTuningField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getChameleonStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStableStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_0::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setChameleonStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setChameleonStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setChameleonStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setChameleonStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality, vendor::mediatek::hardware::pq::V2_0::IPictureQuality, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::enableBlueLight(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableBlueLightEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableBlueLightEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getGlobalPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getGlobalPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setColorTransform(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setColorTransformEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_10hidl_arrayIfLj4EJLj4EEEEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setColorTransformEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_10hidl_arrayIfLj4EJLj4EEEEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setPQIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGammaIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setBlueLightStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setColorTransform(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setColorTransformEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setColorTransformEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getAshmem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_getAshmemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS6_11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_getAshmemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS6_11hidl_memoryEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getColorRegion(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setAmbientLightRGBW(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_execIoctl(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_execIoctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultESE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_execIoctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultESE_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_enableChameleon(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableChameleonEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableChameleonEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setDISPScenario(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_setDISPScenarioEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_setDISPScenarioEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setColorRegion(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setColorRegionEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setColorRegionEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQSwitch(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setGlobalPQSwitchEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setGlobalPQSwitchEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getChameleonEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getChameleonEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getChameleonEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGammaIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQStableStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setBlueLightStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStableStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setExternalPanelNits(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::enableChameleon(bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableChameleonEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableChameleonEbi() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setPQMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_setPQModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_setPQModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setRGBGain(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setRGBGainEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setRGBGainEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTDSHPFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_getTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_getTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setDISPScenario(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_setDISPScenarioEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_setDISPScenarioEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setGlobalPQStrengthEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setGlobalPQStrengthEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getMappedColorIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16setFeatureSwitchENS3_11PQFeatureIDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16setFeatureSwitchENS3_11PQFeatureIDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getBlueLightEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getBlueLightEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getBlueLightEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setTDSHPFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_setTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_setTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getChameleonEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getChameleonEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getChameleonEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setColorTransform(android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setRGBGainEjjji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setRGBGainEjjji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGammaIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_setGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_setGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_enableBlueLight(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableBlueLightEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableBlueLightEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setPQIndex(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setPQIndexEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setPQIndexEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getFeatureSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getMappedTDSHPIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getBlueLightStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setTuningField(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setTuningFieldEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setTuningFieldEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setAmbientLightRGBW(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setAmbientLightRGBWEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setAmbientLightRGBWEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getChameleonStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getColorIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setColorRegion(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setAmbientLightRGBW(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getColorRegion(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setColorRegion(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTDSHPIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStrengthRange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9getAshmemENSt3__18functionIFvNS3_6ResultERKN7android8hardware11hidl_memoryEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9getAshmemENSt3__18functionIFvNS3_6ResultERKN7android8hardware11hidl_memoryEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getMappedColorIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setAmbientLightCT(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setAmbientLightCTEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setAmbientLightCTEddd() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS3_6ResultEbEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setFeatureSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_setFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_setFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDEj() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_enableChameleon(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableChameleonEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableChameleonEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getBlueLightEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getBlueLightEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getBlueLightEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getMappedTDSHPIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setAmbientLightCT(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setAmbientLightCTEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEddd(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setAmbientLightCTEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEddd() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_enableBlueLight(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableBlueLightEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableBlueLightEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getFeatureSwitchENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getFeatureSwitchENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getColorIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getExternalPanelNits(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTuningField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9execIoctlERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultES7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9execIoctlERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultES7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQStableStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTDSHPFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_getTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_getTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getAshmem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_getAshmemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_getAshmemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getExternalPanelNits(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setChameleonStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setPQMode(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9setPQModeEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9setPQModeEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTDSHPIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setBlueLightStrength(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setBlueLightStrengthEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setBlueLightStrengthEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setExternalPanelNits(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setExternalPanelNitsEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setExternalPanelNitsEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTuningField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQStableStatus(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23setGlobalPQStableStatusEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23setGlobalPQStableStatusEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getFeatureSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getGlobalPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getGlobalPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGammaIndex(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13setGammaIndexEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13setGammaIndexEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setPQMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_setPQModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_setPQModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setTuningField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getBlueLightStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_0::IPictureQuality, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE = NULL;

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setTDSHPFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12setTDSHPFlagEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12setTDSHPFlagEi() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGammaIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_setGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_setGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setAmbientLightCT(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setAmbientLightCTEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setAmbientLightCTEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStrengthRange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_execIoctl(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_execIoctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_execIoctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setDISPScenario(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15setDISPScenarioEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15setDISPScenarioEii() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_0::BsPictureQuality */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE0_NS3_15IPictureQualityE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev() called");
    return 0;
}
