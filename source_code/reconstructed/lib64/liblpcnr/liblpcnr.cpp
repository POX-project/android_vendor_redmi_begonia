/*
 * Reverse-Engineered Source for: liblpcnr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "liblpcnr"

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
#include "liblpcnr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: lpcnr::ILpcnr::supportLpcnr() */
extern "C" __attribute__((visibility("default"))) int _ZN5lpcnr6ILpcnr12supportLpcnrEv(void) {
    ALOGD("_ZN5lpcnr6ILpcnr12supportLpcnrEv() called");
    return 0;
}

/* Demangled: lpcnr::ILpcnr::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN5lpcnr6ILpcnr14createInstanceEv(void) {
    ALOGD("_ZN5lpcnr6ILpcnr14createInstanceEv() called");
    return 0;
}
