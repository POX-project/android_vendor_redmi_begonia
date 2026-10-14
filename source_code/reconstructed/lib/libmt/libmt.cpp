/*
 * Reverse-Engineered Source for: libmt.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmt"

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
#include "libmt.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMTService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMTService(void) {
    ALOGD("HIDL_FETCH_IMTService() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::MTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC1Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>::operator=(android::sp<vendor::xiaomi::hardware::mlipay::V1_0::IMlipayService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware6mlipay4V1_014IMlipayServiceEEaSEOS7_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_NS3_10IMTServiceE = NULL;

/* Exported Object: vtable for vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE = NULL;

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::MTService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC2Ev(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceC2Ev() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
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

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20ifaa_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20ifaa_key_get_versionEv() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13ifaa_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_get_version() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20fido_key_get_versionEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService20fido_key_get_versionEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>::operator=(android::sp<vendor::xiaomi::hardware::mfidoca::V1_0::IFidoService>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor6xiaomi8hardware7mfidoca4V1_012IFidoServiceEEaSEOS7_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService13fido_key_loadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_set_state(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_set_stateEi(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_set_stateEi() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService6reloadERKN7android8hardware11hidl_stringESA_() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::soter_get_state() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_get_stateEv(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService15soter_get_stateEv() called");
    return 0;
}

/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE(void) {
    ALOGD("_ZN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvSA_EEE() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::xiaomi::hardware::mtdservice::V1_0::implementation::MTService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_014implementation9MTServiceE = NULL;

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

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
