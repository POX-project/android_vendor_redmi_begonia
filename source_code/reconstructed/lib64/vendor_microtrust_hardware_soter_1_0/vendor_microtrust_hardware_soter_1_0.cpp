/*
 * Reverse-Engineered Source for: vendor.microtrust.hardware.soter@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_microtrust_hardware_soter_1_0"

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
#include "vendor_microtrust_hardware_soter_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_generateAskKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter24_hidl_generateAskKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter24_hidl_generateAskKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::microtrust::hardware::soter::V1_0::BnHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BnHwSoterE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_hasAuthKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter16_hidl_hasAuthKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter16_hidl_hasAuthKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_verifyAttkKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter23_hidl_verifyAttkKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter23_hidl_verifyAttkKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::microtrust::hardware::soter::V1_0::ISoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_06ISoterE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter4pingEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::exportAuthKeyPublicKey(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter22exportAuthKeyPublicKeyEjRKN7android8hardware11hidl_stringENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter22exportAuthKeyPublicKeyEjRKN7android8hardware11hidl_stringENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::BnHwSoter(android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterC1ERKN7android2spINS3_6ISoterEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterC1ERKN7android2spINS3_6ISoterEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_removeAuthKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19_hidl_removeAuthKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19_hidl_removeAuthKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter4pingEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter4pingEv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_removeAllUidKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter21_hidl_removeAllUidKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter21_hidl_removeAllUidKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_exportAuthKeyPublicKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter28_hidl_exportAuthKeyPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter28_hidl_exportAuthKeyPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_finishSign(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned long, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter16_hidl_finishSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmNSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter16_hidl_finishSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEmNSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_exportAuthKeyPublicKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter28_hidl_exportAuthKeyPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter28_hidl_exportAuthKeyPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::BnHwSoter(android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterC2ERKN7android2spINS3_6ISoterEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterC2ERKN7android2spINS3_6ISoterEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::removeAllUidKey(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter15removeAllUidKeyEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter15removeAllUidKeyEj() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::BpHwSoter(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoterC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoterC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_getDeviceId(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter17_hidl_getDeviceIdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter17_hidl_getDeviceIdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter> > android::hardware::details::castInterface<vendor::microtrust::hardware::soter::V1_0::ISoter, android::hidl::base::V1_0::IBase, vendor::microtrust::hardware::soter::V1_0::BpHwSoter>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor10microtrust8hardware5soter4V1_06ISoterENS_4hidl4base4V1_05IBaseENS7_9BpHwSoterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor10microtrust8hardware5soter4V1_06ISoterENS_4hidl4base4V1_05IBaseENS7_9BpHwSoterEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: VTT for vendor::microtrust::hardware::soter::V1_0::ISoter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor10microtrust8hardware5soter4V1_06ISoterE = NULL;

/* Demangled: virtual thunk to vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::initSign(unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter8initSignEjRKN7android8hardware11hidl_stringES9_NSt3__18functionIFvNS3_14SoterErrorCodeEmEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter8initSignEjRKN7android8hardware11hidl_stringES9_NSt3__18functionIFvNS3_14SoterErrorCodeEmEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::microtrust::hardware::soter::V1_0::ISoter-in-vendor::microtrust::hardware::soter::V1_0::BsSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_07BsSoterE0_NS3_6ISoterE = NULL;

/* Demangled: non-virtual thunk to vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev(void) {
    ALOGD("_ZThn32_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: vtable for vendor::microtrust::hardware::soter::V1_0::ISoter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor10microtrust8hardware5soter4V1_06ISoterE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::exportAskPublicKey(unsigned int, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter18exportAskPublicKeyEjNSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter18exportAskPublicKeyEjNSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::microtrust::hardware::soter::V1_0::BnHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor10microtrust8hardware5soter4V1_09BnHwSoterE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD0Ev() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_generateAttkKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_generateAttkKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEh(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_generateAttkKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEh() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::generateAskKeyPair(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter18generateAskKeyPairEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter18generateAskKeyPairEj() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::exportAttkPublicKey(std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19exportAttkPublicKeyENSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19exportAttkPublicKeyENSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_finishSign(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter16_hidl_finishSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter16_hidl_finishSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_exportAskPublicKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter24_hidl_exportAskPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter24_hidl_exportAskPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_generateAuthKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_generateAuthKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_generateAuthKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::finishSign(unsigned long, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter10finishSignEmNSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter10finishSignEmNSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::BpHwSoter(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoterC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoterC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::microtrust::hardware::soter::V1_0::BpHwSoter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BsSoter::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_07BsSoter13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_07BsSoter13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_hasAskAlready(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter19_hidl_hasAskAlreadyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter19_hidl_hasAskAlreadyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD2Ev(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoterD2Ev() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_initSign(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, unsigned long)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter14_hidl_initSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_NSt3__18functionIFvNS3_14SoterErrorCodeEmEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter14_hidl_initSignEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringESE_NSt3__18functionIFvNS3_14SoterErrorCodeEmEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_exportAskPublicKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter24_hidl_exportAskPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter24_hidl_exportAskPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjNSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::microtrust::hardware::soter::V1_0::BnHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor10microtrust8hardware5soter4V1_09BnHwSoterE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::hasAuthKey(unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter10hasAuthKeyEjRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter10hasAuthKeyEjRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::verifyAttkKeyPair() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter17verifyAttkKeyPairEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter17verifyAttkKeyPairEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::microtrust::hardware::soter::V1_0::ISoter-in-vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE0_NS3_6ISoterE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::removeAuthKey(unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13removeAuthKeyEjRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13removeAuthKeyEjRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::microtrust::hardware::soter::V1_0::BnHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BnHwSoterE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::microtrust::hardware::soter::V1_0::BnHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BnHwSoterE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_exportAttkPublicKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_exportAttkPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_exportAttkPublicKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_hasAuthKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter16_hidl_hasAuthKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter16_hidl_hasAuthKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BsSoter::BsSoter(android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_07BsSoterC1EN7android2spINS3_6ISoterEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_07BsSoterC1EN7android2spINS3_6ISoterEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter4pingEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter4pingEv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_hasAskAlready(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19_hidl_hasAskAlreadyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19_hidl_hasAskAlreadyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::microtrust::hardware::soter::V1_0::ISoter>-in-vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE0_N7android8hardware11BpInterfaceINS3_6ISoterEEE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_generateAttkKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_generateAttkKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter25_hidl_generateAttkKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_removeAllUidKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21_hidl_removeAllUidKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21_hidl_removeAllUidKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_generateAuthKeyPair(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_generateAuthKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_generateAuthKeyPairEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjRKNS6_11hidl_stringE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_removeAuthKey(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter19_hidl_removeAuthKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter19_hidl_removeAuthKeyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::microtrust::hardware::soter::V1_0::BsSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor10microtrust8hardware5soter4V1_07BsSoterE = NULL;

/* Exported Object: vtable for vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_getDeviceId(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter17_hidl_getDeviceIdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter17_hidl_getDeviceIdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::getDeviceId(std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter11getDeviceIdENSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter11getDeviceIdENSt3__18functionIFvNS3_14SoterErrorCodeERKN7android8hardware8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::microtrust::hardware::soter::V1_0::BpHwSoter::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor10microtrust8hardware5soter4V1_09BpHwSoter15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_initSign(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter14_hidl_initSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter14_hidl_initSignEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_verifyAttkKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter23_hidl_verifyAttkKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter23_hidl_verifyAttkKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::_hidl_generateAskKeyPair(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter24_hidl_generateAskKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter24_hidl_generateAskKeyPairEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::hasAskAlready(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13hasAskAlreadyEj(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter13hasAskAlreadyEj() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::_hidl_exportAttkPublicKey(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::microtrust::hardware::soter::V1_0::SoterErrorCode, android::hardware::hidl_vec<unsigned char> const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_exportAttkPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter25_hidl_exportAttkPublicKeyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_14SoterErrorCodeERKNS6_8hidl_vecIhEEjEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::microtrust::hardware::soter::V1_0::BpHwSoter */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor10microtrust8hardware5soter4V1_09BpHwSoterE = NULL;

/* Demangled: non-virtual thunk to vendor::microtrust::hardware::soter::V1_0::BnHwSoter::~BnHwSoter() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev(void) {
    ALOGD("_ZThn32_N6vendor10microtrust8hardware5soter4V1_09BnHwSoterD1Ev() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BsSoter::BsSoter(android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_07BsSoterC2EN7android2spINS3_6ISoterEEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_07BsSoterC2EN7android2spINS3_6ISoterEEE() called");
    return 0;
}

/* Exported Object: vendor::microtrust::hardware::soter::V1_0::ISoter::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor10microtrust8hardware5soter4V1_06ISoter10descriptorE = NULL;

/* Demangled: vendor::microtrust::hardware::soter::V1_0::ISoter::castFrom(android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_06ISoter8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_06ISoter8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BnHwSoter::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BnHwSoter10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::generateAttkKeyPair(unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19generateAttkKeyPairEh(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19generateAttkKeyPairEh() called");
    return 0;
}

/* Demangled: vendor::microtrust::hardware::soter::V1_0::BpHwSoter::generateAuthKeyPair(unsigned int, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19generateAuthKeyPairEjRKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor10microtrust8hardware5soter4V1_09BpHwSoter19generateAuthKeyPairEjRKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: android::sp<vendor::microtrust::hardware::soter::V1_0::ISoter> android::hardware::details::getServiceInternal<vendor::microtrust::hardware::soter::V1_0::BpHwSoter, vendor::microtrust::hardware::soter::V1_0::ISoter, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor10microtrust8hardware5soter4V1_09BpHwSoterENS7_6ISoterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor10microtrust8hardware5soter4V1_09BpHwSoterENS7_6ISoterEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}
