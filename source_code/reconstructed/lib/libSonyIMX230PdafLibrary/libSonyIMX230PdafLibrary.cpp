/*
 * Reverse-Engineered Source for: libSonyIMX230PdafLibrary.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libSonyIMX230PdafLibrary"

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
#include "libSonyIMX230PdafLibrary.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: PdLibGetDefocus */
extern "C" __attribute__((visibility("default"))) int PdLibGetDefocus(void) {
    ALOGD("PdLibGetDefocus() called");
    return 0;
}

/* Demangled: PdLibGetVersion */
extern "C" __attribute__((visibility("default"))) int PdLibGetVersion(void) {
    ALOGD("PdLibGetVersion() called");
    return 0;
}
