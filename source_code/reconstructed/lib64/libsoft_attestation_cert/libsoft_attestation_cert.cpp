/*
 * Reverse-Engineered Source for: libsoft_attestation_cert.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libsoft_attestation_cert"

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
#include "libsoft_attestation_cert.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: keymaster::getAttestationKey(keymaster_algorithm_t, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster17getAttestationKeyE21keymaster_algorithm_tP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster17getAttestationKeyE21keymaster_algorithm_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: keymaster::getAttestationChain(keymaster_algorithm_t, keymaster_error_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9keymaster19getAttestationChainE21keymaster_algorithm_tP17keymaster_error_t(void) {
    ALOGD("_ZN9keymaster19getAttestationChainE21keymaster_algorithm_tP17keymaster_error_t() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}
