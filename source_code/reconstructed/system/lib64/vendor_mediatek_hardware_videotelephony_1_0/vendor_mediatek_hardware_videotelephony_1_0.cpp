/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.videotelephony@1.0.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_videotelephony_1_0"

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
#include "vendor_mediatek_hardware_videotelephony_1_0.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::descriptor */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony10descriptorE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyE0_N7android4hidl4base4V1_08BnHwBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony4pingEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::configureFmqSyncRead(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony20configureFmqSyncReadENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::castFrom(android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony8castFromERKN7android2spIS4_EEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony8castFromERKN7android2spIS4_EEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::BpHwVideoTelephony(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyC2ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyC2ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n40_N6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv(void) {
    ALOGD("_ZTv0_n40_N6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::_hidl_configureFmqSyncWrite(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony27_hidl_configureFmqSyncWriteEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony27_hidl_configureFmqSyncWriteEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyE0_N7android8hardware7IBinderE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephonyE = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephonyE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::configureFmqSyncWrite(std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21configureFmqSyncWriteENSt3__18functionIFvbRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::BnHwVideoTelephony(android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyC2ERKN7android2spINS3_15IVideoTelephonyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyC2ERKN7android2spINS3_15IVideoTelephonyEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::_hidl_configureFmqSyncRead(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony26_hidl_configureFmqSyncReadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony26_hidl_configureFmqSyncReadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev(void) {
    ALOGD("_ZTv0_n24_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BsVideoTelephony::BsVideoTelephony(android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyC2EN7android2spINS3_15IVideoTelephonyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyC2EN7android2spINS3_15IVideoTelephonyEEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony, vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyENS7_15IVideoTelephonyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void) {
    ALOGD("_ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyENS7_15IVideoTelephonyEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb() called");
    return 0;
}

/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE8_N7android8hardware10IInterfaceE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::configureFmqMode(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony16configureFmqModeEt(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony16configureFmqModeEt() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::BpHwVideoTelephony(android::sp<android::hardware::IBinder> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyC1ERKN7android2spINS5_8hardware7IBinderEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyC1ERKN7android2spINS5_8hardware7IBinderEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony-in-vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE0_NS3_15IVideoTelephonyE = NULL;

/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BsVideoTelephony::BsVideoTelephony(android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyC1EN7android2spINS3_15IVideoTelephonyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyC1EN7android2spINS3_15IVideoTelephonyEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony-in-vendor::mediatek::hardware::videotelephony::V1_0::BsVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyE0_NS3_15IVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::_hidl_configureFmqSyncWrite(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony27_hidl_configureFmqSyncWriteEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony27_hidl_configureFmqSyncWriteEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::BnHwVideoTelephony(android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyC1ERKN7android2spINS3_15IVideoTelephonyEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyC1ERKN7android2spINS3_15IVideoTelephonyEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::_hidl_configureFmqMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony22_hidl_configureFmqModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony22_hidl_configureFmqModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE() called");
    return 0;
}

/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony> > android::hardware::details::castInterface<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephonyENS_4hidl4base4V1_05IBaseENS7_18BpHwVideoTelephonyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void) {
    ALOGD("_ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephonyENS_4hidl4base4V1_05IBaseENS7_18BpHwVideoTelephonyEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::videotelephony::V1_0::BsVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephonyE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::setHALInstrumentation() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony21setHALInstrumentationEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony21setHALInstrumentationEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE = NULL;

/* Exported Object: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony>-in-vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE0_N7android8hardware11BpInterfaceINS3_15IVideoTelephonyEEE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::_hidl_configureFmqSyncRead(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony26_hidl_configureFmqSyncReadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony26_hidl_configureFmqSyncReadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE() called");
    return 0;
}

/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void) {
    ALOGD("_ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BsVideoTelephony::addOnewayTask(std::__1::function<void ()>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephony13addOnewayTaskENSt3__18functionIFvvEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_016BsVideoTelephony13addOnewayTaskENSt3__18functionIFvvEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyE = NULL;

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::~BnHwVideoTelephony() */
extern "C" __attribute__((visibility("default"))) int _ZThn32_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev(void) {
    ALOGD("_ZThn32_N6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephonyE16_N7android8hardware11BpHwRefBaseE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::notifySyspropsChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony21notifySyspropsChangedEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony21notifySyspropsChangedEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::ping() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony4pingEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony4pingEv() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyE = NULL;

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephony12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::IVideoTelephony::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_015IVideoTelephony12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::onLastStrongRef(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZThn16_N6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv(void) {
    ALOGD("_ZThn16_N6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony15onLastStrongRefEPKv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::_hidl_configureFmqMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony22_hidl_configureFmqModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEt(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony22_hidl_configureFmqModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEt() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::videotelephony::V1_0::BpHwVideoTelephony::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware14videotelephony4V1_018BpHwVideoTelephony13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::videotelephony::V1_0::BnHwVideoTelephony */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware14videotelephony4V1_018BnHwVideoTelephonyE0_N7android8hardware9BHwBinderE = NULL;
