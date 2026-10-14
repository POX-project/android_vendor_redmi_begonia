/*
 * Reverse-Engineered Source for: libkeystore-engine-wifi-hidl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libkeystore_engine_wifi_hidl"

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
#include "libkeystore_engine_wifi_hidl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: EVP_PKEY_from_keystore */
extern "C" __attribute__((visibility("default"))) int EVP_PKEY_from_keystore(void) {
    ALOGD("EVP_PKEY_from_keystore() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int __cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}
