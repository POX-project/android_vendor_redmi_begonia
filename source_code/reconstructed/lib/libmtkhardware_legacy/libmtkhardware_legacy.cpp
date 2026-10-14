/*
 * Reverse-Engineered Source for: libmtkhardware_legacy.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkhardware_legacy"

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
#include "libmtkhardware_legacy.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: mtk_acquire_wake_lock */
extern "C" __attribute__((visibility("default"))) int mtk_acquire_wake_lock(void) {
    ALOGD("mtk_acquire_wake_lock() called");
    return 0;
}

/* Demangled: mtk_release_wake_lock */
extern "C" __attribute__((visibility("default"))) int mtk_release_wake_lock(void) {
    ALOGD("mtk_release_wake_lock() called");
    return 0;
}
