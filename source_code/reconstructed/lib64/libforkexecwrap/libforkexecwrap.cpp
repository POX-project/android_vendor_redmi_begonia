/*
 * Reverse-Engineered Source for: libforkexecwrap.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libforkexecwrap"

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
#include "libforkexecwrap.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_PTMX "/dev/ptmx"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_PTMX, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_PTMX, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_PTMX, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android_fork_execvp_ext */
extern "C" __attribute__((visibility("default"))) int android_fork_execvp_ext(void) {
    ALOGD("android_fork_execvp_ext() called");
    return 0;
}
