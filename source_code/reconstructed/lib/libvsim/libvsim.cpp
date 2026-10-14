/*
 * Reverse-Engineered Source for: libvsim.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvsim"

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
#include "libvsim.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::is_enrolled() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService11is_enrolledEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService11is_enrolledEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::auth(android::hardware::hidl_string const&, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService4authERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService4authERKN7android8hardware11hidl_stringESA_NSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::auth2(android::hardware::hidl_string const&, android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService5auth2ERKN7android8hardware11hidl_stringESA_jRKNS7_8hidl_vecIhEENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService5auth2ERKN7android8hardware11hidl_stringESA_jRKNS7_8hidl_vecIhEENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_add(android::hardware::hidl_vec<unsigned char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_addERKN7android8hardware8hidl_vecIhEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_addERKN7android8hardware8hidl_vecIhEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_get(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_8hidl_vecIhEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_getERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_8hidl_vecIhEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_list(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService8sim_listENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IVSIMService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IVSIMService(void) {
    ALOGD("HIDL_FETCH_IVSIMService() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::sim_del(android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_delERKN7android8hardware11hidl_stringE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService7sim_delERKN7android8hardware11hidl_stringE() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::enroll_v3(unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService9enroll_v3EjNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::tee_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation9tee_mutexE = NULL;

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

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::enroll(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService6enrollENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::vsimapp::V1_0::IVSIMService-in-vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMServiceE0_NS3_12IVSIMServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::vsimapp::V1_0::implementation::VSIMService::export_key(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware7vsimapp4V1_014implementation11VSIMService10export_keyENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
