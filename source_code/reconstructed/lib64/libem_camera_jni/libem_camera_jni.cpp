/*
 * Reverse-Engineered Source for: libem_camera_jni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libem_camera_jni"

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
#include "libem_camera_jni.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Java_com_mediatek_emcamera_CameraJni_getCamHalVersion */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_emcamera_CameraJni_getCamHalVersion(void) {
    ALOGD("Java_com_mediatek_emcamera_CameraJni_getCamHalVersion() called");
    return 0;
}

/* Demangled: Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion(void) {
    ALOGD("Java_com_mediatek_emcamera_CameraJni_getEmcameraVersion() called");
    return 0;
}

/* Demangled: Java_com_mediatek_emcamera_CameraJni_isFeatureSupported */
extern "C" __attribute__((visibility("default"))) int Java_com_mediatek_emcamera_CameraJni_isFeatureSupported(void) {
    ALOGD("Java_com_mediatek_emcamera_CameraJni_isFeatureSupported() called");
    return 0;
}
