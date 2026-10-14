/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mdmonitor@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mdmonitor_1_0"

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
#include "vendor_mediatek_hardware_mdmonitor_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::sendMCPData(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11sendMCPDataERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11sendMCPDataERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android8hardware11BpInterfaceINS3_17IMDMonitorServiceEEE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_registerTrapCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService26_hidl_registerTrapCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService26_hidl_registerTrapCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::BnHwMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC1ERKN7android2spINS3_17IMDMonitorServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC1ERKN7android2spINS3_17IMDMonitorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService, vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceENS7_17IMDMonitorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceENS7_17IMDMonitorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::BsMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC1EN7android2spINS3_17IMDMonitorServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC1EN7android2spINS3_17IMDMonitorServiceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::_hidl_MCPReceiver(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_sendMCPData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService17_hidl_sendMCPDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService17_hidl_sendMCPDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEENSt3__18functionIFvSF_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::castFrom(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev() called");
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

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> > android::hardware::details::castInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwMDMonitorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwMDMonitorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::BnHwMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC2ERKN7android2spINS3_17IMDMonitorServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceC2ERKN7android2spINS3_17IMDMonitorServiceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::BsMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC1EN7android2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC1EN7android2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::BpHwMDMonitorClientCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, void>(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::castFrom(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorServiceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::BpHwMDMonitorService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::BnHwMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC1ERKN7android2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC1ERKN7android2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackENS7_24IMDMonitorClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackENS7_24IMDMonitorClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::BsMDMonitorService(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC2EN7android2spINS3_17IMDMonitorServiceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceC2EN7android2spINS3_17IMDMonitorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_getModemBinData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService21_hidl_getModemBinDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService21_hidl_getModemBinDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::_hidl_MCPReceiver(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallback17_hidl_MCPReceiverEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::BnHwMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC2ERKN7android2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackC2ERKN7android2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback-in-vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackE0_NS3_24IMDMonitorClientCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::registerTrapCallback(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService20registerTrapCallbackERKN7android8hardware11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService20registerTrapCallbackERKN7android8hardware11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_registerTrapCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService26_hidl_registerTrapCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService26_hidl_registerTrapCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS5_2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::getModemBinData(vendor::mediatek::hardware::mdmonitor::V1_0::MtkModemBinType, unsigned int, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15getModemBinDataENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService15getModemBinDataENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> android::hardware::fromBinder<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback, vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS6_27BpHwMDMonitorClientCallbackENS6_27BnHwMDMonitorClientCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS6_27BpHwMDMonitorClientCallbackENS6_27BnHwMDMonitorClientCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::MCPReceiver(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11MCPReceiverERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback11MCPReceiverERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::_hidl_getModemBinData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mdmonitor::V1_0::MtkModemBinType, unsigned int, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21_hidl_getModemBinDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21_hidl_getModemBinDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_15MtkModemBinTypeEjjNSt3__18functionIFvRKNS6_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService::BpHwMDMonitorService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::_hidl_sendMCPData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService17_hidl_sendMCPDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorService17_hidl_sendMCPDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService10descriptorE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService-in-vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_018BsMDMonitorServiceE0_NS3_17IMDMonitorServiceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE0_N7android8hardware11BpInterfaceINS3_24IMDMonitorClientCallbackEEE = NULL;

/* Exported Object: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BsMDMonitorClientCallback::BsMDMonitorClientCallback(android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC2EN7android2spINS3_24IMDMonitorClientCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_025BsMDMonitorClientCallbackC2EN7android2spINS3_24IMDMonitorClientCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback::BpHwMDMonitorClientCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD1Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorClientCallback::~BnHwMDMonitorClientCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_027BnHwMDMonitorClientCallbackD0Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorClientCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMDMonitorClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9mdmonitor4V1_024IMDMonitorClientCallbackENS_4hidl4base4V1_05IBaseENS7_27BpHwMDMonitorClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorClientCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_027BpHwMDMonitorClientCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_017IMDMonitorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService::~BnHwMDMonitorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mdmonitor::V1_0::BnHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BnHwMDMonitorServiceE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mdmonitor::V1_0::IMDMonitorService-in-vendor::mediatek::hardware::mdmonitor::V1_0::BpHwMDMonitorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware9mdmonitor4V1_020BpHwMDMonitorServiceE0_NS3_17IMDMonitorServiceE = NULL;
