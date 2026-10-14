/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.displayfeature@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_displayfeature_1_0"

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
#include "vendor_xiaomi_hardware_displayfeature_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setFeature(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature10setFeatureEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature10setFeatureEiiii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendPanelCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_sendPanelCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_sendPanelCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> > android::hardware::details::castInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureENS_4hidl4base4V1_05IBaseENS7_18BpHwDisplayFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureENS_4hidl4base4V1_05IBaseENS7_18BpHwDisplayFeatureEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::castFrom(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_notifyBrightness(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_notifyBrightnessEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_notifyBrightnessEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendMessage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_sendMessageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_sendMessageEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_setFunction(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature17_hidl_setFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendPostProcCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature25_hidl_sendPostProcCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature25_hidl_sendPostProcCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE = NULL;

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::BsDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC2EN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC2EN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::BsDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC1EN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackC1EN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android8hardware11BpInterfaceINS3_15IDisplayFeatureEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_setFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature16_hidl_setFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature16_hidl_setFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::notifyBrightness(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16notifyBrightnessEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16notifyBrightnessEi() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendPostProcCommand(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19sendPostProcCommandEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19sendPostProcCommandEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_sendRefreshCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature24_hidl_sendRefreshCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature24_hidl_sendRefreshCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::BsDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC2EN7android2spINS3_15IDisplayFeatureEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC2EN7android2spINS3_15IDisplayFeatureEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::registerCallback(int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16registerCallbackEiRKN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::BpHwDisplayFeature(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE = NULL;

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_NS3_23IDisplayFeatureCallbackE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::BsDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC1EN7android2spINS3_15IDisplayFeatureEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureC1EN7android2spINS3_15IDisplayFeatureEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::BpHwDisplayFeatureCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::fromBinder<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback>(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS6_26BpHwDisplayFeatureCallbackENS6_26BnHwDisplayFeatureCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void) {
    ALOGD("_ZN7android8hardware10fromBinderIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS6_26BpHwDisplayFeatureCallbackENS6_26BnHwDisplayFeatureCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::~BnHwDisplayFeature() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::BnHwDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC2ERKN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC2ERKN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendPanelCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_sendPanelCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_sendPanelCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::BnHwDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC1ERKN7android2spINS3_15IDisplayFeatureEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC1ERKN7android2spINS3_15IDisplayFeatureEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_notifyBrightness(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_notifyBrightnessEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_notifyBrightnessEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::displayfeatureInfoChanged(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback25displayfeatureInfoChangedEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback25displayfeatureInfoChangedEii() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android8hardware11BpInterfaceINS3_23IDisplayFeatureCallbackEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallback13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallback13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::BnHwDisplayFeatureCallback(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC1ERKN7android2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackC1ERKN7android2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback4pingEv() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback, vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackENS7_23IDisplayFeatureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackENS7_23IDisplayFeatureCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::castFrom(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendPanelCommand(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16sendPanelCommandERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback10descriptorE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS5_2spINS3_23IDisplayFeatureCallbackEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS5_2spINS3_23IDisplayFeatureCallbackEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendMessage(int, int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11sendMessageEiiRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::BpHwDisplayFeature(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> android::hardware::details::wrapPassthrough<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, void>(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEvEENS_2spIT_EESB_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackEvEENS_2spIT_EESB_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_setFunction(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_setFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::BpHwDisplayFeatureCallback(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendRefreshCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature24_hidl_sendRefreshCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature24_hidl_sendRefreshCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setFunction(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11setFunctionEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature11setFunctionEiiii() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE0_NS3_15IDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback> > android::hardware::details::castInterface<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS_4hidl4base4V1_05IBaseENS7_26BpHwDisplayFeatureCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackENS_4hidl4base4V1_05IBaseENS7_26BpHwDisplayFeatureCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::BnHwDisplayFeature(android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC2ERKN7android2spINS3_15IDisplayFeatureEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureC2ERKN7android2spINS3_15IDisplayFeatureEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature-in-vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeatureE0_NS3_15IDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature, vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureENS7_15IDisplayFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeatureENS7_15IDisplayFeatureEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendPostProcCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature25_hidl_sendPostProcCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature25_hidl_sendPostProcCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::_hidl_displayfeatureInfoChanged(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::_hidl_displayfeatureInfoChanged(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback31_hidl_displayfeatureInfoChangedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeature::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeature13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_016BsDisplayFeature13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::_hidl_setFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16_hidl_setFeatureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature16_hidl_setFeatureEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::sendRefreshCommand() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature18sendRefreshCommandEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature18sendRefreshCommandEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeatureE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeatureCallback::~BnHwDisplayFeatureCallback() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware14displayfeature4V1_026BnHwDisplayFeatureCallbackD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeature::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BpHwDisplayFeature19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::displayfeature::V1_0::BsDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware14displayfeature4V1_024BsDisplayFeatureCallbackE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature4pingEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeatureE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallbackE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeature::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_015IDisplayFeature21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BnHwDisplayFeature::_hidl_sendMessage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_sendMessageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_018BnHwDisplayFeature17_hidl_sendMessageEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::IDisplayFeatureCallback::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_023IDisplayFeatureCallback21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::displayfeature::V1_0::BpHwDisplayFeatureCallback::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware14displayfeature4V1_026BpHwDisplayFeatureCallback15onLastStrongRefEPKv() called");
    return 0;
}
