/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.engineermode@1.3.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_engineermode_1_3"

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
#include "vendor_mediatek_hardware_engineermode_1_3.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setTestSimCardType(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18setTestSimCardTypeERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback, vendor::mediatek::hardware::engineermode::V1_1::IEmCallback, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_111IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_111IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btStartRelayer(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btStartRelayerEii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btStartRelayerEii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setEmUsbValue(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13setEmUsbValueERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setMdResetDelay(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setMdResetDelayERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_34IEmdE0_NS2_4V1_24IEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmNfcResponse::BsEmNfcResponse(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseC2EN7android2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseC2EN7android2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::isGauge30Support() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16isGauge30SupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16isGauge30SupportEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd, vendor::mediatek::hardware::engineermode::V1_3::IEmd, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdENS7_4IEmdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_011IEmCallbackEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setUsbPort(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd10setUsbPortERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdC1ERKN7android2spINS3_4IEmdEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdC1ERKN7android2spINS3_4IEmdEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BsEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_35BsEmdE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE0_NS2_4V1_011IEmCallbackE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmd, vendor::mediatek::hardware::engineermode::V1_0::IEmd, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_04IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::BnHwEmNfcResponse(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseC1ERKN7android2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseC1ERKN7android2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setBypassEn(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11setBypassEnERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setDisableC2kCap(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setDisableC2kCapERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_NS2_4V1_04IEmdE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_24IEmdEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_24IEmdEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_sendNfcRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd20_hidl_sendNfcRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd20_hidl_sendNfcRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setUsbOtgSwitch(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setUsbOtgSwitchERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btUninit() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd8btUninitEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd8btUninitEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btPollingStart() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btPollingStartEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btPollingStartEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::engineermode::V1_3::IEmd::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd10descriptorE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback, vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_011IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setSmsFormat(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setSmsFormatERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setDsbpSupport(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setDsbpSupportERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::BpHwEmNfcResponse(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_writeMnlConfigFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd24_hidl_writeMnlConfigFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEERKNSC_IiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd24_hidl_writeMnlConfigFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEERKNSC_IiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setBypassDis(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setBypassDisERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_connect(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd13_hidl_connectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd13_hidl_connectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_readMnlConfigFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd23_hidl_readMnlConfigFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd23_hidl_readMnlConfigFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setModemWarningEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21setModemWarningEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_34IEmdE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::genMdLogFilter(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14genMdLogFilterERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::sendNfcRequest(int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14sendNfcRequestEiRKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14sendNfcRequestEiRKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_NS3_11IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE0_NS2_4V1_211IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE0_NS3_14IEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::getFilePathListWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd27getFilePathListWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE8_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btEndNoSigRxTest(std::__1::function<void (android::hardware::hidl_vec<int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16btEndNoSigRxTestENSt3__18functionIFvRKN7android8hardware8hidl_vecIiEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btStartNoSigRxTest(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18btStartNoSigRxTestEiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18btStartNoSigRxTestEiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::connect() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd7connectEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd7connectEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::readMnlConfigFile(android::hardware::hidl_vec<int> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd17readMnlConfigFileERKN7android8hardware8hidl_vecIiEENSt3__18functionIFvRKNS7_IhEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd17readMnlConfigFileERKN7android8hardware8hidl_vecIiEENSt3__18functionIFvRKNS7_IhEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::BsEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackE0_NS3_11IEmCallbackE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseENS_4hidl4base4V1_05IBaseENS7_17BpHwEmNfcResponseEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseENS_4hidl4base4V1_05IBaseENS7_17BpHwEmNfcResponseEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmd> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_04IEmdEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setCtIREngMode(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setCtIREngModeERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_NS3_4IEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackC1ERKN7android2spINS3_11IEmCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmNfcResponse::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponse13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponse13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btIsEmSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btIsEmSupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btIsEmSupportEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmd, vendor::mediatek::hardware::engineermode::V1_2::IEmd, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmd>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_24IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_24IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setPreferGprsMode(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd17setPreferGprsModeERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::BpHwEmd(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS_4hidl4base4V1_05IBaseENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_34IEmdE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BsEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::sendToServerWithCallBack(android::hardware::hidl_string const&, android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd24sendToServerWithCallBackERKN7android8hardware11hidl_stringERKNS5_2spINS2_4V1_011IEmCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::callbackToClient(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback16callbackToClientERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback, vendor::mediatek::hardware::engineermode::V1_2::IEmCallback, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback>(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_211IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackENS6_4V1_211IEmCallbackENS7_14BpHwEmCallbackEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btIsComboSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16btIsComboSupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16btIsComboSupportEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_34IEmdE0_NS2_4V1_14IEmdE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::_hidl_response(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse14_hidl_responseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponse14_hidl_responseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btIsBLEEnhancedSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22btIsBLEEnhancedSupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22btIsBLEEnhancedSupportEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback, void>(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_011IEmCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setWcnCoreDump(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setWcnCoreDumpERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::BsEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_35BsEmdE0_NS3_4IEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_disconnect(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd16_hidl_disconnectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd16_hidl_disconnectEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_NS2_4V1_111IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_setNfcResponseFunction(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd28_hidl_setNfcResponseFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd28_hidl_setNfcResponseFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::BnHwEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdC2ERKN7android2spINS3_4IEmdEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdC2ERKN7android2spINS3_4IEmdEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_0::IEmCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11setCallbackERKN7android2spINS2_4V1_011IEmCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_disconnect(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16_hidl_disconnectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16_hidl_disconnectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btInit() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd6btInitEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd6btInitEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setMoms(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd7setMomsERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd7setMomsERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback>-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_N7android8hardware11BpInterfaceINS3_11IEmCallbackEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse>-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE0_N7android8hardware11BpInterfaceINS3_14IEmNfcResponseEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::writeMnlConfigFile(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<int> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18writeMnlConfigFileERKN7android8hardware8hidl_vecIhEERKNS7_IiEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd18writeMnlConfigFileERKN7android8hardware8hidl_vecIhEERKNS7_IiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_2::IEmCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_211IEmCallbackEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_211IEmCallbackEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_connect(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13_hidl_connectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13_hidl_connectEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btPollingStop() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btPollingStopEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btPollingStopEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setEmConfigure(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setEmConfigureERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setSvpLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15setSvpLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> android::hardware::fromBinder<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse, vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseENS6_17BpHwEmNfcResponseENS6_17BnHwEmNfcResponseEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseENS6_17BpHwEmNfcResponseENS6_17BnHwEmNfcResponseEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::clearItemsforRsc() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16clearItemsforRscEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16clearItemsforRscEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse, void>(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponseEvEENS_2spIT_EESB_() called");
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

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_setNfcResponseFunction(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd28_hidl_setNfcResponseFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd28_hidl_setNfcResponseFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmd::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmd13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmd13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmdC2EN7android2spINS3_4IEmdEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmdC2EN7android2spINS3_4IEmdEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_readMnlConfigFile(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<int> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd23_hidl_readMnlConfigFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIiEENSt3__18functionIFvRKNSC_IhEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd23_hidl_readMnlConfigFileEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIiEENSt3__18functionIFvRKNSC_IhEEEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::BpHwEmCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmd::BsEmd(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmdC1EN7android2spINS3_4IEmdEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_35BsEmdC1EN7android2spINS3_4IEmdEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_NS2_4V1_14IEmdE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_34IEmdE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_NS2_4V1_011IEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::_hidl_response(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse14_hidl_responseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse14_hidl_responseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_NS2_4V1_24IEmdE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btIsBLESupport() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btIsBLESupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14btIsBLESupportEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackC2EN7android2spINS3_11IEmCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_14IEmdEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd8castFromERKN7android2spINS2_4V1_14IEmdEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::sendToServer(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12sendToServerERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::_hidl_sendNfcRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd20_hidl_sendNfcRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd20_hidl_sendNfcRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setOmxCoreLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxCoreLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setEmUsbType(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12setEmUsbTypeERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD2Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setNfcResponseFunction(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setNfcResponseFunctionERKN7android2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setNfcResponseFunctionERKN7android2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btHciCommandRun(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd15btHciCommandRunERKN7android8hardware8hidl_vecIhEENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::BnHwEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackC2ERKN7android2spINS3_11IEmCallbackEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmd, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS_4hidl4base4V1_05IBaseENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::castFrom(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_111IEmCallbackEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback8castFromERKN7android2spINS2_4V1_111IEmCallbackEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setVencDriverLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setVencDriverLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btDoTest(int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd8btDoTestEiiiiiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd8btDoTestEiiiiiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallback4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::_hidl_writeMnlConfigFile(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd24_hidl_writeMnlConfigFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmd24_hidl_writeMnlConfigFileEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::disconnect() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd10disconnectEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd10disconnectEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::isNfcSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12isNfcSupportEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd12isNfcSupportEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setImsTestMode(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd14setImsTestModeERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setVolteMalPctid(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setVolteMalPctidERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setOmxVencLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxVencLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD0Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::engineermode::V1_3::BsEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::~BnHwEmNfcResponse() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_34IEmd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_0::IEmd-in-vendor::mediatek::hardware::engineermode::V1_3::IEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_34IEmdE0_NS2_4V1_04IEmdE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback, vendor::mediatek::hardware::engineermode::V1_3::IEmCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackENS7_11IEmCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmCallback::~BnHwEmCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_314BnHwEmCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::response(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse8responseERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse8responseERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd::~BnHwEmd() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmCallback::BsEmCallback(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_312BsEmCallbackC1EN7android2spINS3_11IEmCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse-in-vendor::mediatek::hardware::engineermode::V1_3::BsEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseE0_NS3_14IEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setBypassService(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd16setBypassServiceERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmd>-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmdE0_N7android8hardware11BpInterfaceINS3_4IEmdEEE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_311IEmCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_1::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::IEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_311IEmCallbackE0_NS2_4V1_111IEmCallbackE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::engineermode::V1_2::IEmCallback-in-vendor::mediatek::hardware::engineermode::V1_3::BpHwEmCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_314BpHwEmCallbackE0_NS2_4V1_211IEmCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::btStopRelayer() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btStopRelayerEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd13btStopRelayerEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseE = NULL;

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setOmxVdecLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd19setOmxVdecLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setRadioCapabilitySwitchEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd30setRadioCapabilitySwitchEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_314IEmNfcResponse17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BsEmNfcResponse::BsEmNfcResponse(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseC1EN7android2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_315BsEmNfcResponseC1EN7android2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse::BpHwEmNfcResponse(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd::setVdecDriverLogEnable(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_37BpHwEmd22setVdecDriverLogEnableERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmd> > android::hardware::details::castInterface<vendor::mediatek::hardware::engineermode::V1_3::IEmd, vendor::mediatek::hardware::engineermode::V1_1::IEmd, vendor::mediatek::hardware::engineermode::V1_3::BpHwEmd>(android::sp<vendor::mediatek::hardware::engineermode::V1_1::IEmd>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_14IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware12engineermode4V1_34IEmdENS6_4V1_14IEmdENS7_7BpHwEmdEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::engineermode::V1_3::BnHwEmNfcResponse::BnHwEmNfcResponse(android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseC2ERKN7android2spINS3_14IEmNfcResponseEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware12engineermode4V1_317BnHwEmNfcResponseC2ERKN7android2spINS3_14IEmNfcResponseEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::engineermode::V1_3::BnHwEmd */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware12engineermode4V1_37BnHwEmdE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: android::sp<vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::engineermode::V1_3::BpHwEmNfcResponse, vendor::mediatek::hardware::engineermode::V1_3::IEmNfcResponse, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseENS7_14IEmNfcResponseEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware12engineermode4V1_317BpHwEmNfcResponseENS7_14IEmNfcResponseEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}
