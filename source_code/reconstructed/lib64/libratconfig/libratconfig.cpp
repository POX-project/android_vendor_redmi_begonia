/*
 * Reverse-Engineered Source for: libratconfig.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libratconfig"

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
#include "libratconfig.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: RatConfig_isC2kSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isC2kSupported(void) {
    ALOGD("RatConfig_isC2kSupported() called");
    return 0;
}

/* Demangled: RatConfig_isGsmSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isGsmSupported(void) {
    ALOGD("RatConfig_isGsmSupported() called");
    return 0;
}

/* Demangled: RatConfig_isLteFddSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isLteFddSupported(void) {
    ALOGD("RatConfig_isLteFddSupported() called");
    return 0;
}

/* Demangled: RatConfig_isLteTddSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isLteTddSupported(void) {
    ALOGD("RatConfig_isLteTddSupported() called");
    return 0;
}

/* Demangled: RatConfig_isNrSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isNrSupported(void) {
    ALOGD("RatConfig_isNrSupported() called");
    return 0;
}

/* Demangled: RatConfig_isTdscdmaSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isTdscdmaSupported(void) {
    ALOGD("RatConfig_isTdscdmaSupported() called");
    return 0;
}

/* Demangled: RatConfig_isWcdmaSupported */
extern "C" __attribute__((visibility("default"))) int RatConfig_isWcdmaSupported(void) {
    ALOGD("RatConfig_isWcdmaSupported() called");
    return 0;
}
