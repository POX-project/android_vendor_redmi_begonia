/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.ccap@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_ccap_1_0"

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
#include "vendor_mediatek_hardware_camera_ccap_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::BsCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC2EN7android2spINS4_12ICCAPControlEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC2EN7android2spINS4_12ICCAPControlEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_atci_op(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_const(android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15intf_ccap_constERKN7android8hardware11hidl_memoryE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_adb_op(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_NS4_12ICCAPControlE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE = NULL;

/* Exported Object: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::BpHwCCAPControl(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_adb_op(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl22_hidl_intf_ccap_adb_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::BnHwCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC1ERKN7android2spINS4_12ICCAPControlEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC1ERKN7android2spINS4_12ICCAPControlEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_atci_op(android::hardware::hidl_memory const&, android::hardware::hidl_memory const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESA_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl17intf_ccap_atci_opERKN7android8hardware11hidl_memoryESA_i() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_atci_op(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&, android::hardware::hidl_memory const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryESF_i(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl23_hidl_intf_ccap_atci_opEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryESF_i() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_init() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14intf_ccap_initEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14intf_ccap_initEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_const(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_memory const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21_hidl_intf_ccap_constEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21_hidl_intf_ccap_constEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_memoryE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware9BHwBinderE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android8hardware11BpInterfaceINS4_12ICCAPControlEEE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::_hidl_intf_ccap_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl20_hidl_intf_ccap_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl20_hidl_intf_ccap_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlENS_4hidl4base4V1_05IBaseENS8_15BpHwCCAPControlEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlENS_4hidl4base4V1_05IBaseENS8_15BpHwCCAPControlEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl-in-vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE0_NS4_12ICCAPControlE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControl13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControl13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::intf_ccap_adb_op() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl16intf_ccap_adb_opEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl16intf_ccap_adb_opEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::BpHwCCAPControl(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::BnHwCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC2ERKN7android2spINS4_12ICCAPControlEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlC2ERKN7android2spINS4_12ICCAPControlEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlE0_N7android8hardware7IBinderE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl21setHALInstrumentationEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::castFrom(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_const(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl21_hidl_intf_ccap_constEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl21_hidl_intf_ccap_constEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BsCCAPControl::BsCCAPControl(android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC1EN7android2spINS4_12ICCAPControlEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_013BsCCAPControlC1EN7android2spINS4_12ICCAPControlEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl, vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlENS8_12ICCAPControlEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControlENS8_12ICCAPControlEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControl17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::~BnHwCCAPControl() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControlD2Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BpHwCCAPControl::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BpHwCCAPControl5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::ccap::V1_0::ICCAPControl */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4ccap4V1_012ICCAPControlE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::ccap::V1_0::BnHwCCAPControl::_hidl_intf_ccap_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl20_hidl_intf_ccap_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4ccap4V1_015BnHwCCAPControl20_hidl_intf_ccap_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}
