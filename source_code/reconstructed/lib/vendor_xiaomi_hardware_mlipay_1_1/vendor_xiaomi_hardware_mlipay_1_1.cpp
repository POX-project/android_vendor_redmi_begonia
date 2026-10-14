/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.mlipay@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_mlipay_1_1"

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
#include "vendor_xiaomi_hardware_mlipay_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::castFrom(android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::_hidl_ifaa_get_idlist(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21_hidl_ifaa_get_idlistEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS6_8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21_hidl_ifaa_get_idlistEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvRKNS6_8hidl_vecIjEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BsMlipayService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE0_NS2_4V1_014IMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::_hidl_ifaa_key_dump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService19_hidl_ifaa_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService19_hidl_ifaa_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mlipay::V1_1::BsMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BsMlipayService::BsMlipayService(android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceC2EN7android2spINS3_14IMlipayServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceC2EN7android2spINS3_14IMlipayServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::_hidl_ifaa_get_idlist(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService21_hidl_ifaa_get_idlistEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService21_hidl_ifaa_get_idlistEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::_hidl_ifaa_key_dump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService19_hidl_ifaa_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService19_hidl_ifaa_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceENS_4hidl4base4V1_05IBaseENS7_17BpHwMlipayServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceENS_4hidl4base4V1_05IBaseENS7_17BpHwMlipayServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
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

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE0_NS3_14IMlipayServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::BpHwMlipayService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::invoke_command(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService14invoke_commandERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService14invoke_commandERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceE0_NS2_4V1_014IMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService, vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceENS7_14IMlipayServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceENS7_14IMlipayServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ifaa_key_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BsMlipayService::BsMlipayService(android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceC1EN7android2spINS3_14IMlipayServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceC1EN7android2spINS3_14IMlipayServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceE = NULL;

/* Exported Object: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::castFrom(android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spINS2_4V1_014IMlipayServiceEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService8castFromERKN7android2spINS2_4V1_014IMlipayServiceEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::BsMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_115BsMlipayServiceE0_NS3_14IMlipayServiceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService>-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE0_N7android8hardware11BpInterfaceINS3_14IMlipayServiceEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::~BnHwMlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::BnHwMlipayService(android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceC2ERKN7android2spINS3_14IMlipayServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceC2ERKN7android2spINS3_14IMlipayServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::ifaa_get_idlist(unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15ifaa_get_idlistEjNSt3__18functionIFvRKN7android8hardware8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService15ifaa_get_idlistEjNSt3__18functionIFvRKN7android8hardware8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::BpHwMlipayService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService, vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService, vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService>(android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceENS6_4V1_014IMlipayServiceENS7_17BpHwMlipayServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayServiceENS6_4V1_014IMlipayServiceENS7_17BpHwMlipayServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114IMlipayService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BnHwMlipayService::BnHwMlipayService(android::sp<vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceC1ERKN7android2spINS3_14IMlipayServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BnHwMlipayServiceC1ERKN7android2spINS3_14IMlipayServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::mlipay::V1_1::BpHwMlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_117BpHwMlipayServiceE8_N7android8hardware11BpHwRefBaseE = NULL;
