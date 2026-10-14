/*
 * Reverse-Engineered Source for: liblogwrap_vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "liblogwrap_vendor"

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
#include "liblogwrap_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: logwrap_fork_execvp(int, char const* const*, int*, bool, int, bool, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z19logwrap_fork_execvpiPKPKcPibibS0_(void) {
    ALOGD("_Z19logwrap_fork_execvpiPKPKcPibibS0_() called");
    return 0;
}
