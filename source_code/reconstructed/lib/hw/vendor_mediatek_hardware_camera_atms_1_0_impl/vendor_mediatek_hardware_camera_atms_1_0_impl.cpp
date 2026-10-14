/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.camera.atms@1.0-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_camera_atms_1_0_impl"

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
#include "vendor_mediatek_hardware_camera_atms_1_0_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMsWrap::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap11getInstanceEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap11getInstanceEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMsWrap::setFactor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap9setFactorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEESD_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap9setFactorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEESD_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::camera::atms::V1_0::IATMs-in-vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_NS4_5IATMsE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IATMs */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IATMs(void) {
    ALOGD("HIDL_FETCH_IATMs() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs::get_atms_factor(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSB_EEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSB_EEE() called");
    return 0;
}

/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void) {
    ALOGD("_ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs::set_atms_factor(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15set_atms_factorERKN7android8hardware11hidl_stringESB_(void) {
    ALOGD("_ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15set_atms_factorERKN7android8hardware11hidl_stringESB_() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}
