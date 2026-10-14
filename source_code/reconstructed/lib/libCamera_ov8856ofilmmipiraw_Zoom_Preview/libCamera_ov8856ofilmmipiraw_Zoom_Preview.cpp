/*
 * Reverse-Engineered Source for: libCamera_ov8856ofilmmipiraw_Zoom_Preview.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov8856ofilmmipiraw_Zoom_Preview"

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
#include "libCamera_ov8856ofilmmipiraw_Zoom_Preview.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov8856ofilmmipiraw_AE_0006 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_AE_0006 = NULL;

/* Exported Object: ov8856ofilmmipiraw_DCE_0007 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_DCE_0007 = NULL;

/* Exported Object: ov8856ofilmmipiraw_GMA_0007 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_GMA_0007 = NULL;

/* Exported Object: ov8856ofilmmipiraw_LCE_0007 */
extern "C" __attribute__((visibility("default"))) void* ov8856ofilmmipiraw_LCE_0007 = NULL;
