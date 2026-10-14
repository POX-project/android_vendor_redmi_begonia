/*
 * Reverse-Engineered Source for: libmtkperf_client_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkperf_client_vendor"

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
#include "libmtkperf_client_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEED2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEOS7_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf>::operator=(vendor::mediatek::hardware::mtkpower::V1_0::IMtkPerf*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_08IMtkPerfEEaSEPS6_() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Exported Object: vtable for MtkPerfDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTV21MtkPerfDeathRecipient = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: android::sp<MtkPerfDeathRecipient>::operator=(MtkPerfDeathRecipient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI21MtkPerfDeathRecipientEaSEPS1_(void) {
    ALOGD("_ZN7android2spI21MtkPerfDeathRecipientEaSEPS1_() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: perf_cus_lock_hint */
extern "C" __attribute__((visibility("default"))) int perf_cus_lock_hint(void) {
    ALOGD("perf_cus_lock_hint() called");
    return 0;
}

/* Demangled: perf_lock_rel */
extern "C" __attribute__((visibility("default"))) int perf_lock_rel(void) {
    ALOGD("perf_lock_rel() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: android::sp<MtkPerfDeathRecipient>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI21MtkPerfDeathRecipientED2Ev(void) {
    ALOGD("_ZN7android2spI21MtkPerfDeathRecipientED2Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEED2Ev() called");
    return 0;
}

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

/* Demangled: perf_lock_acq */
extern "C" __attribute__((visibility("default"))) int perf_lock_acq(void) {
    ALOGD("perf_lock_acq() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>::operator=(android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEEaSEOS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEEaSEOS7_() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf>::operator=(vendor::mediatek::hardware::mtkpower::V1_1::IMtkPerf*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware8mtkpower4V1_18IMtkPerfEEaSEPS6_() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
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
