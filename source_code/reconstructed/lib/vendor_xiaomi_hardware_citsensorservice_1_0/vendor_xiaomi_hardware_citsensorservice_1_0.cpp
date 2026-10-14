/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.citsensorservice@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_citsensorservice_1_0"

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
#include "vendor_xiaomi_hardware_citsensorservice_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::_hidl_deinitService(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService19_hidl_deinitServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService19_hidl_deinitServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorServiceENS_4hidl4base4V1_05IBaseENS7_20BpHwCitSensorServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::_hidl_halleventlistener(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService23_hidl_halleventlistenerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService23_hidl_halleventlistenerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD2Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService>-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE0_N7android8hardware11BpInterfaceINS3_17ICitSensorServiceEEE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::BpHwCitSensorService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
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

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::BsCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE0_NS3_17ICitSensorServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BsCitSensorService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::halleventlistener() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService17halleventlistenerEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService17halleventlistenerEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::BpHwCitSensorService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BsCitSensorService::BsCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceC2EN7android2spINS3_17ICitSensorServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceC2EN7android2spINS3_17ICitSensorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::BnHwCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceC1ERKN7android2spINS3_17ICitSensorServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceC1ERKN7android2spINS3_17ICitSensorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::deinitService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService13deinitServiceEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService13deinitServiceEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::_hidl_halleventlistener(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService23_hidl_halleventlistenerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService23_hidl_halleventlistenerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::~BnHwCitSensorService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::_hidl_initService(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService17_hidl_initServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService17_hidl_initServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::initService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService11initServiceEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService11initServiceEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE = NULL;

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::_hidl_initService(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService17_hidl_initServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService17_hidl_initServiceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService, vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceENS7_17ICitSensorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorServiceENS7_17ICitSensorServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BsCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceE0_NS3_17ICitSensorServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BsCitSensorService::BsCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceC1EN7android2spINS3_17ICitSensorServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_018BsCitSensorServiceC1EN7android2spINS3_17ICitSensorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::BnHwCitSensorService(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceC2ERKN7android2spINS3_17ICitSensorServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceC2ERKN7android2spINS3_17ICitSensorServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BpHwCitSensorService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BpHwCitSensorService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService::castFrom(android::sp<vendor::xiaomi::hardware::citsensorservice::V1_0::ICitSensorService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_017ICitSensorService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::citsensorservice::V1_0::BnHwCitSensorService::_hidl_deinitService(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService19_hidl_deinitServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware16citsensorservice4V1_020BnHwCitSensorService19_hidl_deinitServiceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}
