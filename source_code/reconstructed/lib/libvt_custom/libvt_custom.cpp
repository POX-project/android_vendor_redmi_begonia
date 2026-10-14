/*
 * Reverse-Engineered Source for: libvt_custom.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libvt_custom"

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
#include "libvt_custom.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: _Custom_VT_GetCodecParam */
extern "C" __attribute__((visibility("default"))) int _Custom_VT_GetCodecParam(void) {
    ALOGD("_Custom_VT_GetCodecParam() called");
    return 0;
}

/* Demangled: _Custom_VT_GetDynamicRangeTable */
extern "C" __attribute__((visibility("default"))) int _Custom_VT_GetDynamicRangeTable(void) {
    ALOGD("_Custom_VT_GetDynamicRangeTable() called");
    return 0;
}

/* Demangled: _Custom_VT_GetFrameRates */
extern "C" __attribute__((visibility("default"))) int _Custom_VT_GetFrameRates(void) {
    ALOGD("_Custom_VT_GetFrameRates() called");
    return 0;
}
