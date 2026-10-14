/*
 * Reverse-Engineered Source for: libmlipay@1.1.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmlipay_1_1"

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
#include "libmlipay_1_1.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::ifaa_key_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::~MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD0Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::ifaa_get_idlist(unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned int> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService15ifaa_get_idlistEjNSt3__18functionIFvRKN7android8hardware8hidl_vecIjEEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService15ifaa_get_idlistEjNSt3__18functionIFvRKN7android8hardware8hidl_vecIjEEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::~MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceC2Ev() called");
    return 0;
}

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::~MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD1Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceE0_NS2_4V1_014IMlipayServiceE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::invoke_command(android::hardware::hidl_vec<unsigned char> const&, unsigned int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService14invoke_commandERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService14invoke_commandERKN7android8hardware8hidl_vecIhEEjNSt3__18functionIFvSB_EEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::~MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD1Ev() called");
    return 0;
}

/* Exported Object: vtable for vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceC1Ev() called");
    return 0;
}

/* Exported Object: VTT for vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceE = NULL;

/* Demangled: virtual thunk to vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService::~MlipayService() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD0Ev(void) {
    ALOGD("_ZTv0_n12_N6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMlipayService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMlipayService(void) {
    ALOGD("HIDL_FETCH_IMlipayService() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mlipay::V1_1::IMlipayService-in-vendor::xiaomi::hardware::mlipay::V1_1::implementation::MlipayService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware6mlipay4V1_114implementation13MlipayServiceE0_NS3_14IMlipayServiceE = NULL;

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
