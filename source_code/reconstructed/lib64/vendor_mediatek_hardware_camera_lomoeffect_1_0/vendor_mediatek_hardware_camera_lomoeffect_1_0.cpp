/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.lomoeffect@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_lomoeffect_1_0"

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
#include "vendor_mediatek_hardware_camera_lomoeffect_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::BsLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC2EN7android2spINS4_11ILomoEffectEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC2EN7android2spINS4_11ILomoEffectEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_allocLomoDstImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjiRKNS7_10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjiRKNS7_10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_lomoImageEnque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageEnqueEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageEnqueEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::BsLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC1EN7android2spINS4_11ILomoEffectEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC1EN7android2spINS4_11ILomoEffectEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::freeLomoDstImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoDstImageEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoDstImageEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::allocLomoDstImage(unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::uploadLomoSrcImage(android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::lomoImageEnque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::allocLomoSrcImage(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoSrcImageEjjjjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoSrcImageEjjjjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_lomoImageDeque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageDequeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageDequeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_NS4_11ILomoEffectE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::init() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4initEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4initEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::BpHwLomoEffect(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_uninit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_uploadLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::BnHwLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC1ERKN7android2spINS4_11ILomoEffectEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC1ERKN7android2spINS4_11ILomoEffectEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectENS_4hidl4base4V1_05IBaseENS8_14BpHwLomoEffectEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectENS_4hidl4base4V1_05IBaseENS8_14BpHwLomoEffectEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::lomoImageDeque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_allocLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjjjjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjjjjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect6uninitEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect6uninitEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_uninit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE0_NS4_11ILomoEffectE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffect13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffect13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_lomoImageEnque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::castFrom(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_lomoImageDeque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageDequeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageDequeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::BnHwLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC2ERKN7android2spINS4_11ILomoEffectEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC2ERKN7android2spINS4_11ILomoEffectEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android8hardware11BpInterfaceINS4_11ILomoEffectEEE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_freeLomoDstImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_freeLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_freeLomoDstImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_uploadLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_freeLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::BpHwLomoEffect(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_allocLomoDstImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_allocLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::freeLomoSrcImage() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoSrcImageEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoSrcImageEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect, vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectENS8_11ILomoEffectEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectENS8_11ILomoEffectEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}
