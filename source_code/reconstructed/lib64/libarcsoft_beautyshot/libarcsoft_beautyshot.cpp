/*
 * Reverse-Engineered Source for: libarcsoft_beautyshot.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libarcsoft_beautyshot"

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
#include "libarcsoft_beautyshot.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Create_BeautyShot_Video_Algorithm */
extern "C" __attribute__((visibility("default"))) int Create_BeautyShot_Video_Algorithm(void) {
    ALOGD("Create_BeautyShot_Video_Algorithm() called");
    return 0;
}

/* Demangled: Create_BeautyShot_Image_Algorithm */
extern "C" __attribute__((visibility("default"))) int Create_BeautyShot_Image_Algorithm(void) {
    ALOGD("Create_BeautyShot_Image_Algorithm() called");
    return 0;
}
