/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mms@1.3.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mms_1_3"

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
#include "vendor_mediatek_hardware_mms_1_3.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::copybit(vendor::mediatek::hardware::mms::V1_0::HwCopybitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_04IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_24IMmsEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_24IMmsEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegencode(vendor::mediatek::hardware::mms::V1_0::HwJpegEncoderConfig const&, std::__1::function<void (unsigned long long, int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_04IMmsE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mms::V1_3::BsMms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3mms4V1_35BsMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_35BsMms13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_35BsMms13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mms::V1_3::BpHwMms, vendor::mediatek::hardware::mms::V1_3::IMms, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_37BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_37BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::writeEmbeddedToParcel(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_321writeEmbeddedToParcelERKNS3_10MDPParamFDEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_321writeEmbeddedToParcelERKNS3_10MDPParamFDEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::mdp_run(vendor::mediatek::hardware::mms::V1_1::HwMDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getCopybitDefaultOutFormat() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms26getCopybitDefaultOutFormatEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms26getCopybitDefaultOutFormatEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms4pingEv() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3mms4V1_34IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC2EN7android2spINS3_4IMmsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC2EN7android2spINS3_4IMmsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegCloseClient() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15jpegCloseClientEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15jpegCloseClientEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::_hidl_BlitStreamFD(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18_hidl_BlitStreamFDEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_10MDPParamFDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18_hidl_BlitStreamFDEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_10MDPParamFDE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::isCopybitSupportedOutFormat(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms27isCopybitSupportedOutFormatEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms27isCopybitSupportedOutFormatEi() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_0::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::readEmbeddedFromParcel(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_322readEmbeddedFromParcelERKNS3_10MDPParamFDERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_322readEmbeddedFromParcelERKNS3_10MDPParamFDERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC1ERKN7android2spINS3_4IMmsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC1ERKN7android2spINS3_4IMmsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE = NULL;

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_1::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegOpenClient(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14jpegOpenClientEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14jpegOpenClientEjj() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mms::V1_3::IMms>-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android8hardware11BpInterfaceINS3_4IMmsEEE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_3::IMms-in-vendor::mediatek::hardware::mms::V1_3::BsMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_35BsMmsE0_NS3_4IMmsE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE4_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_24IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getCopybitOutUsage(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18getCopybitOutUsageEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18getCopybitOutUsageEj() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC1EN7android2spINS3_4IMmsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC1EN7android2spINS3_4IMmsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::_hidl_BlitStreamFD(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms18_hidl_BlitStreamFDEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms18_hidl_BlitStreamFDEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_2::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_24IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_24IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_24IMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BlitStream(vendor::mediatek::hardware::mms::V1_2::MDPParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10BlitStreamERKNS2_4V1_28MDPParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10BlitStreamERKNS2_4V1_28MDPParamE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_14IMmsE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BlitStreamFD(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12BlitStreamFDERKNS3_10MDPParamFDE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12BlitStreamFDERKNS3_10MDPParamFDE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::mms::V1_3::IMms::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware3mms4V1_34IMms10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_14IMmsE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE = NULL;

/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC2ERKN7android2spINS3_4IMmsEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC2ERKN7android2spINS3_4IMmsEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::mms::V1_3::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS3_4IMmsE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mms::V1_3::IMms */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware3mms4V1_34IMmsE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv() called");
    return 0;
}
