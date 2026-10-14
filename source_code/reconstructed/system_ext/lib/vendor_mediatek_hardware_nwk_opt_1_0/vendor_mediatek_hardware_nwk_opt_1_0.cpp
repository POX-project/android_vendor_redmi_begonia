/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.nwk_opt@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_nwk_opt_1_0"

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
#include "vendor_mediatek_hardware_nwk_opt_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::setDisplayData(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14setDisplayDataEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14setDisplayDataEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::castFrom(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_notifyAppState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_notifyAppStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android8hardware11BpInterfaceINS3_7INwkOptEEE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::switch_game_mode(unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt16switch_game_modeEji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt16switch_game_modeEji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::BpHwNwkOpt(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_NS3_7INwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_notifyAppState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_notifyAppStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::BnHwNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC1ERKN7android2spINS3_7INwkOptEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC1ERKN7android2spINS3_7INwkOptEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_switch_game_mode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt22_hidl_switch_game_modeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt22_hidl_switch_game_modeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::BnHwNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC2ERKN7android2spINS3_7INwkOptEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptC2ERKN7android2spINS3_7INwkOptEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
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

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::BsNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC2EN7android2spINS3_7INwkOptEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC2EN7android2spINS3_7INwkOptEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::_hidl_setDisplayData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_setDisplayDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt20_hidl_setDisplayDataEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD2Ev() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> > android::hardware::details::castInterface<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptENS_4hidl4base4V1_05IBaseENS7_10BpHwNwkOptEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptENS_4hidl4base4V1_05IBaseENS7_10BpHwNwkOptEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::notifyAppState(android::hardware::hidl_string const&, android::hardware::hidl_string const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14notifyAppStateERKN7android8hardware11hidl_stringES9_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt14notifyAppStateERKN7android8hardware11hidl_stringES9_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_setDisplayData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_setDisplayDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt20_hidl_setDisplayDataEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt, vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptENS7_7INwkOptEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptENS7_7INwkOptEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOpt13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOpt13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOptE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt::BsNwkOpt(android::sp<vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC1EN7android2spINS3_7INwkOptEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptC1EN7android2spINS3_7INwkOptEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt-in-vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE0_NS3_7INwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::~BnHwNwkOpt() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::_hidl_switch_game_mode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt22_hidl_switch_game_modeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEji(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt22_hidl_switch_game_modeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEji() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOptE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptE = NULL;

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::BpHwNwkOpt(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOptC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::nwk_opt::V1_0::BnHwNwkOpt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7nwk_opt4V1_010BnHwNwkOpt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::nwk_opt::V1_0::INwkOpt::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware7nwk_opt4V1_07INwkOpt10descriptorE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::nwk_opt::V1_0::BsNwkOpt */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7nwk_opt4V1_08BsNwkOptE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::nwk_opt::V1_0::BpHwNwkOpt::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware7nwk_opt4V1_010BpHwNwkOpt15onLastStrongRefEPKv() called");
    return 0;
}
