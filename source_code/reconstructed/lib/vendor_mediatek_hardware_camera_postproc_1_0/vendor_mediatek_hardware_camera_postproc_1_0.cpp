/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.postproc@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_postproc_1_0"

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
#include "vendor_mediatek_hardware_camera_postproc_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::BsPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC1EN7android2spINS4_11IPostDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC1EN7android2spINS4_11IPostDeviceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice-in-vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE0_NS4_11IPostDeviceE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE4_N7android8hardware10IInterfaceE = NULL;

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE8_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::doChromaNR(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice10doChromaNRERKNS4_13ChromaNRParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice10doChromaNRERKNS4_13ChromaNRParamE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::castFrom(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spIS5_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spIS5_EEb() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Exported Object: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&, android::hardware::Parcel*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_021writeEmbeddedToParcelERKNS4_13ChromaNRParamEPN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_021writeEmbeddedToParcelERKNS4_13ChromaNRParamEPN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware7IBinderE = NULL;

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice, vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceENS8_11IPostDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceENS8_11IPostDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDevice13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDevice13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::BnHwPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC2ERKN7android2spINS4_11IPostDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC2ERKN7android2spINS4_11IPostDeviceEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_022readEmbeddedFromParcelERKNS4_13ChromaNRParamERKN7android8hardware6ParcelEjj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_022readEmbeddedFromParcelERKNS4_13ChromaNRParamERKN7android8hardware6ParcelEjj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::_hidl_doChromaNR(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice16_hidl_doChromaNREPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice16_hidl_doChromaNREPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDevice4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::BnHwPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC1ERKN7android2spINS4_11IPostDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceC1ERKN7android2spINS4_11IPostDeviceEEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceENS_4hidl4base4V1_05IBaseENS8_14BpHwPostDeviceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceENS_4hidl4base4V1_05IBaseENS8_14BpHwPostDeviceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE0_N7android8hardware9BHwBinderE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn8_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn8_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::BpHwPostDevice(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC1ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC1ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE = NULL;

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD1Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n20_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n20_N6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BsPostDevice::BsPostDevice(android::sp<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC2EN7android2spINS4_11IPostDeviceEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_012BsPostDeviceC2EN7android2spINS4_11IPostDeviceEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice>-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_N7android8hardware11BpInterfaceINS4_11IPostDeviceEEE = NULL;

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice-in-vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE0_NS4_11IPostDeviceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD2Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceE = NULL;

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::_hidl_doChromaNR(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::camera::postproc::V1_0::ChromaNRParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice16_hidl_doChromaNREPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS4_13ChromaNRParamE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice16_hidl_doChromaNREPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS4_13ChromaNRParamE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice21notifySyspropsChangedEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZThn20_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void) {
    ALOGD("_ZThn20_N6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BnHwPostDevice::~BnHwPostDevice() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BnHwPostDeviceD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDevice4pingEv() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDevice13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::postproc::V1_0::BpHwPostDevice::BpHwPostDevice(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC2ERKN7android2spINS6_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera8postproc4V1_014BpHwPostDeviceC2ERKN7android2spINS6_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::postproc::V1_0::IPostDevice */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera8postproc4V1_011IPostDeviceE = NULL;
