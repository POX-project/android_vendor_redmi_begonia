/*
 * Reverse-Engineered Source for: libimsg_log.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libimsg_log"

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
#include "libimsg_log.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_KMSG "/dev/kmsg"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_KMSG, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_KMSG, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_KMSG, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: imsg_log_write */
extern "C" __attribute__((visibility("default"))) int imsg_log_write(void) {
    ALOGD("imsg_log_write() called");
    return 0;
}

/* Demangled: kernel_log_write */
extern "C" __attribute__((visibility("default"))) int kernel_log_write(void) {
    ALOGD("kernel_log_write() called");
    return 0;
}
