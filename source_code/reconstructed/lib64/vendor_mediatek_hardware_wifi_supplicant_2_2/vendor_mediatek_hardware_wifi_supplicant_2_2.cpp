/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.wifi.supplicant@2.2.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_wifi_supplicant_2_2"

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
#include "vendor_mediatek_hardware_wifi_supplicant_2_2.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::doSupplicantCommand(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19doSupplicantCommandERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESA_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19doSupplicantCommandERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESA_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_119ISupplicantStaIfaceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_119ISupplicantStaIfaceEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::_hidl_doSupplicantCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface4pingEv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getFeatureMask(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::_hidl_setScanMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface17_hidl_setScanModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEbNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface17_hidl_setScanModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEbNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getNetwork(unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::registerCallback_2_1(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS3_4V2_127ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS3_4V2_127ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::_hidl_setScanMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface17_hidl_setScanModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface17_hidl_setScanModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setScanMode(bool, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11setScanModeEbNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11setScanModeEbNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setWapiCertAliasList(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void) {
    ALOGD("_ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::_hidl_doSupplicantCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESF_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESF_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_119ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_119ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE = NULL;
