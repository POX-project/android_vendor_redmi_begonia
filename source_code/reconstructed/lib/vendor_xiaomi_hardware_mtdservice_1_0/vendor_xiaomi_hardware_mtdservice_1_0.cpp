/*
 * Reverse-Engineered Source for: vendor.xiaomi.hardware.mtdservice@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_xiaomi_hardware_mtdservice_1_0"

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
#include "vendor_xiaomi_hardware_mtdservice_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceC1EN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceC1EN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_soter_get_state(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService21_hidl_soter_get_stateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService21_hidl_soter_get_stateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_enroll(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_enrollEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEiNSt3__18functionIFvSE_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_enrollEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringEiNSt3__18functionIFvSE_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_eccSign(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService13_hidl_eccSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService13_hidl_eccSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_soter_generate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService20_hidl_soter_generateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService20_hidl_soter_generateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_eccSign(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13_hidl_eccSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringENSt3__18functionIFvSE_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13_hidl_eccSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringENSt3__18functionIFvSE_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::soter_get_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15soter_get_stateEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15soter_get_stateEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_getFid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_getFidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_getFidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_reload(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_reloadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_reloadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_ifaa_key_load(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService19_hidl_ifaa_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService19_hidl_ifaa_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_soter_set_state(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21_hidl_soter_set_stateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21_hidl_soter_set_stateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_ifaa_key_get_version(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService26_hidl_ifaa_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService26_hidl_ifaa_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceC2EN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceC2EN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_enroll(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_enrollEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12_hidl_enrollEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_ifaa_key_prepare(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService22_hidl_ifaa_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService22_hidl_ifaa_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_reload(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_reloadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_reloadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_soter_generate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20_hidl_soter_generateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService20_hidl_soter_generateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_010IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>-in-vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE0_N7android8hardware11BpInterfaceINS3_10IMTServiceEEE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_fido_key_prepare(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService22_hidl_fido_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService22_hidl_fido_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService, vendor::xiaomi::hardware::mtdservice::V1_0::IMTService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_getFid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_getFidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12_hidl_getFidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_soter_set_state(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService21_hidl_soter_set_stateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService21_hidl_soter_set_stateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_ifaa_key_get_version(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService26_hidl_ifaa_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService26_hidl_ifaa_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTServiceE0_NS3_10IMTServiceE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_ifaa_key_load(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19_hidl_ifaa_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19_hidl_ifaa_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BsMTService::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTService13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTService13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_fido_key_load(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19_hidl_fido_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService19_hidl_fido_key_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_soter_get_state(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21_hidl_soter_get_stateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21_hidl_soter_get_stateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService4pingEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService4pingEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
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

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::soter_set_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15soter_set_stateEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService15soter_set_stateEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_fido_key_get_version(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService26_hidl_fido_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService26_hidl_fido_key_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_0::BsMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceE0_NS3_10IMTServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::BsMTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_011BsMTServiceE = NULL;

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::mtdservice::V1_0::IMTService::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware10mtdservice4V1_010IMTService10descriptorE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_fido_key_get_version(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService26_hidl_fido_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService26_hidl_fido_key_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_fido_key_load(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService19_hidl_fido_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService19_hidl_fido_key_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::_hidl_ifaa_key_prepare(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService22_hidl_ifaa_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTService22_hidl_ifaa_key_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD1Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::_hidl_fido_key_prepare(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService22_hidl_fido_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService22_hidl_fido_key_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::BpHwMTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_013BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_0::BnHwMTService::~BnHwMTService() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor6xiaomi8hardware10mtdservice4V1_013BnHwMTServiceD0Ev() called");
    return 0;
}
