/*
 * Reverse-Engineered Source for: libCamera_ov02a10afmipiraw_Flash_Preview_PF.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libCamera_ov02a10afmipiraw_Flash_Preview_PF"

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
#include "libCamera_ov02a10afmipiraw_Flash_Preview_PF.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ov02a10afmipiraw_AE_0001 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_AE_0001 = NULL;

/* Exported Object: ov02a10afmipiraw_DCE_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_DCE_0002 = NULL;

/* Exported Object: ov02a10afmipiraw_GMA_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_GMA_0002 = NULL;

/* Exported Object: ov02a10afmipiraw_LCE_0002 */
extern "C" __attribute__((visibility("default"))) void* ov02a10afmipiraw_LCE_0002 = NULL;
