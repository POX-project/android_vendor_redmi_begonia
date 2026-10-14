/*
 * Reverse-Engineered Source for: libbt-vendor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libbt_vendor"

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
#include "libbt_vendor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: BLUETOOTH_VENDOR_LIB_INTERFACE */
extern "C" __attribute__((visibility("default"))) void* BLUETOOTH_VENDOR_LIB_INTERFACE = NULL;

/* Demangled: mtk_bt_cleanup */
extern "C" __attribute__((visibility("default"))) int mtk_bt_cleanup(void) {
    ALOGD("mtk_bt_cleanup() called");
    return 0;
}

/* Demangled: mtk_bt_init */
extern "C" __attribute__((visibility("default"))) int mtk_bt_init(void) {
    ALOGD("mtk_bt_init() called");
    return 0;
}

/* Demangled: mtk_bt_op */
extern "C" __attribute__((visibility("default"))) int mtk_bt_op(void) {
    ALOGD("mtk_bt_op() called");
    return 0;
}
