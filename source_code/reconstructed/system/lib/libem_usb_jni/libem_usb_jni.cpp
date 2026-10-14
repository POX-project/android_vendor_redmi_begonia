/*
 * Reverse-Engineered Source for: libem_usb_jni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libem_usb_jni"

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
#include "libem_usb_jni.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_MT_OTG_TEST "/dev/mt_otg_test"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_MT_OTG_TEST, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_MT_OTG_TEST, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_MT_OTG_TEST, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: JNI_OnLoad */
extern "C" __attribute__((visibility("default"))) int JNI_OnLoad(void) {
    ALOGD("JNI_OnLoad() called");
    return 0;
}

/* Exported Object: fd */
extern "C" __attribute__((visibility("default"))) void* fd = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;
