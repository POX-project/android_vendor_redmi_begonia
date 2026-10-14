/*
 * Reverse-Engineered Source for: libmtkflvextractor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libmtkflvextractor"

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
#include "libmtkflvextractor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: GETEXTRACTORDEF */
extern "C" __attribute__((visibility("default"))) int GETEXTRACTORDEF(void) {
    ALOGD("GETEXTRACTORDEF() called");
    return 0;
}

/* Demangled: __cfi_check */
extern "C" __attribute__((visibility("default"))) int fn___cfi_check(void) __asm__("__cfi_check");
int fn___cfi_check(void) {
    ALOGD("__cfi_check() called");
    return 0;
}
