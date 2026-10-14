/*
 * Reverse-Engineered Source for: libCamera_s5k3t2mipiraw_Portrait_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_s5k3t2mipiraw_Portrait_Preview"

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
#include "libCamera_s5k3t2mipiraw_Portrait_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: s5k3t2mipiraw_DCE_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_DCE_0003 = NULL;

/* Exported Object: s5k3t2mipiraw_GMA_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_GMA_0003 = NULL;

/* Exported Object: s5k3t2mipiraw_LCE_0003 */
extern "C" __attribute__((visibility("default"))) void* s5k3t2mipiraw_LCE_0003 = NULL;
