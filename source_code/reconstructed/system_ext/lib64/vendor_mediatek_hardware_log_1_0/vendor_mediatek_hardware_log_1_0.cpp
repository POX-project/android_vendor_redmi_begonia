/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.log@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_log_1_0"

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
#include "vendor_mediatek_hardware_log_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::_hidl_setCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLog17_hidl_setCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::fromBinder<vendor::mediatek::hardware::log::V1_0::ILogCallback, vendor::mediatek::hardware::log::V1_0::BpHwLogCallback, vendor::mediatek::hardware::log::V1_0::BnHwLogCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS6_15BpHwLogCallbackENS6_15BnHwLogCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS6_15BpHwLogCallbackENS6_15BnHwLogCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::BnHwLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC1ERKN7android2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC1ERKN7android2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vendor::mediatek::hardware::log::V1_0::ILogCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::castFrom(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::_hidl_setCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog17_hidl_setCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::_hidl_sendToServer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLog18_hidl_sendToServerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::BsLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_05BsLogC1EN7android2spINS3_4ILogEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_05BsLogC1EN7android2spINS3_4ILogEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::log::V1_0::ILogCallback>-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_N7android8hardware11BpInterfaceINS3_12ILogCallbackEEE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILog> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::log::V1_0::BpHwLog, vendor::mediatek::hardware::log::V1_0::ILog, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_07BpHwLogENS7_4ILogEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_07BpHwLogENS7_4ILogEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::log::V1_0::ILog-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_NS3_4ILogE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::BsLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_05BsLogC2EN7android2spINS3_4ILogEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_05BsLogC2EN7android2spINS3_4ILogEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::BpHwLogCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::setCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11setCallbackERKN7android2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11setCallbackERKN7android2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_07BnHwLogE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::log::V1_0::ILog::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3log4V1_04ILog10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
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

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::BnHwLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC2ERKN7android2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackC2ERKN7android2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_012ILogCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLog::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_05BsLog13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_05BsLog13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_07BnHwLogE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::log::V1_0::BpHwLogCallback, vendor::mediatek::hardware::log::V1_0::ILogCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackENS7_12ILogCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackENS7_12ILogCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::log::V1_0::ILog-in-vendor::mediatek::hardware::log::V1_0::BsLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_05BsLogE0_NS3_4ILogE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::log::V1_0::ILogCallback, void>(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3log4V1_012ILogCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware3log4V1_012ILogCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BsLog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_05BsLogE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::BnHwLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC2ERKN7android2spINS3_4ILogEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC2ERKN7android2spINS3_4ILogEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::log::V1_0::ILog> > android::hardware::details::castInterface<vendor::mediatek::hardware::log::V1_0::ILog, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::log::V1_0::BpHwLog>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_04ILogENS_4hidl4base4V1_05IBaseENS7_7BpHwLogEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_04ILogENS_4hidl4base4V1_05IBaseENS7_7BpHwLogEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::castFrom(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::BsLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC1EN7android2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC1EN7android2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLog10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_013BsLogCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::BpHwLog(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::ILog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_04ILogE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::callbackToClient(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback16callbackToClientERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback16callbackToClientERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_012ILogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_07BpHwLogE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::ILogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_012ILogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::BnHwLog(android::sp<vendor::mediatek::hardware::log::V1_0::ILog> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC1ERKN7android2spINS3_4ILogEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLogC1ERKN7android2spINS3_4ILogEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3log4V1_07BnHwLogD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_07BpHwLogE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::log::V1_0::ILog>-in-vendor::mediatek::hardware::log::V1_0::BpHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BpHwLogE0_N7android8hardware11BpInterfaceINS3_4ILogEEE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::_hidl_callbackToClient(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback22_hidl_callbackToClientEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLog4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::BpHwLogCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback-in-vendor::mediatek::hardware::log::V1_0::BsLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE0_NS3_12ILogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_012ILogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::_hidl_callbackToClient(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback22_hidl_callbackToClientEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware3log4V1_015BpHwLogCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::_hidl_sendToServer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog18_hidl_sendToServerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::ILog */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_04ILogE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::log::V1_0::BsLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3log4V1_013BsLogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLog12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::log::V1_0::ILog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_04ILogE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BsLogCallback::BsLogCallback(android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC2EN7android2spINS3_12ILogCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_013BsLogCallbackC2EN7android2spINS3_12ILogCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLogCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BpHwLogCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::log::V1_0::ILogCallback-in-vendor::mediatek::hardware::log::V1_0::BpHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_015BpHwLogCallbackE0_NS3_12ILogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLog::~BnHwLog() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BnHwLogD2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::log::V1_0::BpHwLog::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware3log4V1_07BpHwLog15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_015BnHwLogCallback4pingEv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::log::V1_0::BnHwLogCallback::~BnHwLogCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::sendToServer(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12sendToServerERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLog12sendToServerERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::log::V1_0::BpHwLog::BpHwLog(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_07BpHwLogC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::log::V1_0::BnHwLogCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3log4V1_015BnHwLogCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::log::V1_0::ILog::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3log4V1_04ILog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3log4V1_04ILog14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::log::V1_0::BnHwLog */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3log4V1_07BnHwLogE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::log::V1_0::ILogCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::log::V1_0::ILogCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::log::V1_0::BpHwLogCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLogCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3log4V1_012ILogCallbackENS_4hidl4base4V1_05IBaseENS7_15BpHwLogCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}
