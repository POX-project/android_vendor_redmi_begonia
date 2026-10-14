/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.dplanner@2.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_dplanner_2_0"

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
#include "vendor_mediatek_hardware_dplanner_2_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_getTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_getTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_bootCompleted(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner19_hidl_bootCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner19_hidl_bootCompletedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::bootCompleted() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13bootCompletedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13bootCompletedEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::BsDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC2EN7android2spINS3_9IDPlannerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC2EN7android2spINS3_9IDPlannerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_setTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_setTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_setTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getState(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_getStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_getStateEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getConfig(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getConfigENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getConfigENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_installTesters(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner20_hidl_installTestersEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner20_hidl_installTestersEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::clearConfig(std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11clearConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11clearConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getTest(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7getTestENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7getTestENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::BsDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC1EN7android2spINS3_9IDPlannerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerC1EN7android2spINS3_9IDPlannerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner4pingEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::castFrom(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::BpHwDPlanner(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getState(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_getStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_getStateEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_setConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_setConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_setConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runFinished(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_runFinishedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_runFinishedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getState() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8getStateEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8getStateEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runFinished() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11runFinishedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner11runFinishedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runAbort(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runAbortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runAbortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::BpHwDPlanner(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_setConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_setConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_setConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringENSt3__18functionIFvbSE_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner-in-vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_010BsDPlannerE0_NS3_9IDPlannerE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_clearConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_clearConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_clearConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BsDPlanner::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlanner13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_010BsDPlanner13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_clearConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_clearConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner17_hidl_clearConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_installTesters(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_array<unsigned char, 65536ul> const&, unsigned int, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner20_hidl_installTestersEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbSE_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner20_hidl_installTestersEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbSE_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setTest(android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7setTestERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner7setTestERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner>-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_N7android8hardware11BpInterfaceINS3_9IDPlannerEEE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_setTest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_setTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner13_hidl_setTestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runAbort(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runAbortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runAbortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner, vendor::mediatek::hardware::dplanner::V2_0::IDPlanner, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerENS7_9IDPlannerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerENS7_9IDPlannerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runAbort() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runAbortEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runAbortEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::dplanner::V2_0::IDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runFinished(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_runFinishedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner17_hidl_runFinishedEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getConfig(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15_hidl_getConfigEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getResult(std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getResultENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9getResultENSt3__18functionIFvRKN7android8hardware11hidl_stringESB_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_runStart(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14_hidl_runStartEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::dplanner::V2_0::IDPlanner-in-vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE0_NS3_9IDPlannerE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getConfig(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getConfigEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::runStart() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runStartEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner8runStartEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlannerE = NULL;

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_getResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner15_hidl_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::BnHwDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC1ERKN7android2spINS3_9IDPlannerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC1ERKN7android2spINS3_9IDPlannerEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::~BnHwDPlanner() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_bootCompleted(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19_hidl_bootCompletedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner19_hidl_bootCompletedEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::setConfig(android::hardware::hidl_string const&, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9setConfigERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner9setConfigERKN7android8hardware11hidl_stringENSt3__18functionIFvbS9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::_hidl_runStart(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlanner14_hidl_runStartEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::_hidl_getTest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_getTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner13_hidl_getTestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringESG_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BnHwDPlanner::BnHwDPlanner(android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC2ERKN7android2spINS3_9IDPlannerEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BnHwDPlannerC2ERKN7android2spINS3_9IDPlannerEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::installTesters(android::hardware::hidl_string const&, android::hardware::hidl_array<unsigned char, 65536ul> const&, unsigned int, std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14installTestersERKN7android8hardware11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbS9_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner14installTestersERKN7android8hardware11hidl_stringERKNS6_10hidl_arrayIhLm65536EJEEEjNSt3__18functionIFvbS9_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::dplanner::V2_0::IDPlanner::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware8dplanner4V2_09IDPlanner21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner> > android::hardware::details::castInterface<vendor::mediatek::hardware::dplanner::V2_0::IDPlanner, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerENS_4hidl4base4V1_05IBaseENS7_12BpHwDPlannerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware8dplanner4V2_09IDPlannerENS_4hidl4base4V1_05IBaseENS7_12BpHwDPlannerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::dplanner::V2_0::BpHwDPlanner::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware8dplanner4V2_012BpHwDPlanner15onLastStrongRefEPKv() called");
    return 0;
}
