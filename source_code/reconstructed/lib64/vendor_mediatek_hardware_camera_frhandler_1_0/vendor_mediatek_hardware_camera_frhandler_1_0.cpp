/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.frhandler@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_frhandler_1_0"

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
#include "vendor_mediatek_hardware_camera_frhandler_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::BsFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC2EN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC2EN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackENS8_17IFRClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackENS8_17IFRClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_deleteFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler19_hidl_deleteFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler19_hidl_deleteFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::startCompareFeature(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19startCompareFeatureERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19startCompareFeatureERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::deleteFeature(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13deleteFeatureERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13deleteFeatureERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::init(int, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4initEiRKN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4initEiRKN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::castFrom(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::BpHwFRHandler(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE0_NS4_10IFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&, android::hardware::Parcel*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_021writeEmbeddedToParcelERKNS4_9FRCbParamEPN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_021writeEmbeddedToParcelERKNS4_9FRCbParamEPN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_stopCompareFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler24_hidl_stopCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler24_hidl_stopCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::BsFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC1EN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackC1EN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_startSaveFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_startSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_startSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_uninit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::registerCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16registerCallbackERKN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16registerCallbackERKN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::stopCompareFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18stopCompareFeatureEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18stopCompareFeatureEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_startCompareFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler25_hidl_startCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler25_hidl_startCompareFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::BpHwFRHandler(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_stopCompareFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler24_hidl_stopCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler24_hidl_stopCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getFRImageFormat(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<vendor::mediatek::hardware::camera::frhandler::V1_0::FRImageFormat> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16getFRImageFormatENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS4_13FRImageFormatEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16getFRImageFormatENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS4_13FRImageFormatEEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallbackE0_NS4_17IFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::BsFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC2EN7android2spINS4_10IFRHandlerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC2EN7android2spINS4_10IFRHandlerEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS_4hidl4base4V1_05IBaseENS8_20BpHwFRClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS_4hidl4base4V1_05IBaseENS8_20BpHwFRClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback, vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS7_20BpHwFRClientCallbackENS7_20BnHwFRClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackENS7_20BpHwFRClientCallbackENS7_20BnHwFRClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&, android::hardware::Parcel const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_022readEmbeddedFromParcelERKNS4_9FRCbParamERKN7android8hardware6ParcelEmm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_022readEmbeddedFromParcelERKNS4_9FRCbParamERKN7android8hardware6ParcelEmm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_NS4_10IFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onFRClientCallback(int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback18onFRClientCallbackEiiRKNS4_9FRCbParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback18onFRClientCallbackEiiRKNS4_9FRCbParamE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::_hidl_onFRClientCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback24_hidl_onFRClientCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback24_hidl_onFRClientCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::BsFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC1EN7android2spINS4_10IFRHandlerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandlerC1EN7android2spINS4_10IFRHandlerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::BnHwFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC1ERKN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC1ERKN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::BnHwFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC1ERKN7android2spINS4_10IFRHandlerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC1ERKN7android2spINS4_10IFRHandlerEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_NS4_17IFRClientCallbackE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRClientCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_018BsFRClientCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::startSaveFeature(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16startSaveFeatureERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler16startSaveFeatureERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_stopSaveFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21_hidl_stopSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21_hidl_stopSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_startSaveFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_startSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_startSaveFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_uninit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_getFRImageFormat(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<vendor::mediatek::hardware::camera::frhandler::V1_0::FRImageFormat> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_getFRImageFormatEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS4_13FRImageFormatEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler22_hidl_getFRImageFormatEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS4_13FRImageFormatEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::_hidl_onFRClientCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback24_hidl_onFRClientCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback24_hidl_onFRClientCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_simCbRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_simCbRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_simCbRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_9FRCbParamE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::BpHwFRClientCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler6uninitEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler6uninitEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::BnHwFRClientCallback(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC2ERKN7android2spINS4_17IFRClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackC2ERKN7android2spINS4_17IFRClientCallbackEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler>-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android8hardware11BpInterfaceINS4_10IFRHandlerEEE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::setPowerMode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12setPowerModeEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12setPowerModeEi() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::BnHwFRHandler(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC2ERKN7android2spINS4_10IFRHandlerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerC2ERKN7android2spINS4_10IFRHandlerEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::BpHwFRClientCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE0_N7android8hardware11BpInterfaceINS4_17IFRClientCallbackEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_stopSaveFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler21_hidl_stopSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler21_hidl_stopSaveFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_getFRImageFormat(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_getFRImageFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler22_hidl_getFRImageFormatEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_startCompareFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler25_hidl_startCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler25_hidl_startCompareFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerENS_4hidl4base4V1_05IBaseENS8_13BpHwFRHandlerEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandlerENS_4hidl4base4V1_05IBaseENS8_13BpHwFRHandlerEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback, void>(android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_setPowerMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_setPowerModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_setPowerModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::stopSaveFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15stopSaveFeatureEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler15stopSaveFeatureEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::_hidl_simCbRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_simCbRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandler18_hidl_simCbRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_deleteFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19_hidl_deleteFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler19_hidl_deleteFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_017IFRClientCallback4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::~BnHwFRClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRHandler::~BnHwFRHandler() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera9frhandler4V1_013BnHwFRHandlerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera9frhandler4V1_020BpHwFRClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::_hidl_setPowerMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_setPowerModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler18_hidl_setPowerModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BsFRHandler::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandler13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_011BsFRHandler13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BnHwFRClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_020BnHwFRClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_010IFRHandler13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler::simCbRequest(int, int, vendor::mediatek::hardware::camera::frhandler::V1_0::FRCbParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12simCbRequestEiiRKNS4_9FRCbParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandler12simCbRequestEiiRKNS4_9FRCbParamE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::frhandler::V1_0::BpHwFRHandler, vendor::mediatek::hardware::camera::frhandler::V1_0::IFRHandler, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerENS8_10IFRHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9frhandler4V1_013BpHwFRHandlerENS8_10IFRHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}
