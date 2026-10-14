/*
 * Reverse-Engineered Source for: libSonyIMX386PdafLibrary.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libSonyIMX386PdafLibrary"

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
#include "libSonyIMX386PdafLibrary.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SonyPdLibGetDefocus */
extern "C" __attribute__((visibility("default"))) int SonyPdLibGetDefocus(void) {
    ALOGD("SonyPdLibGetDefocus() called");
    return 0;
}

/* Demangled: SonyPdLibGetImagerRegDataOnPdaf */
extern "C" __attribute__((visibility("default"))) int SonyPdLibGetImagerRegDataOnPdaf(void) {
    ALOGD("SonyPdLibGetImagerRegDataOnPdaf() called");
    return 0;
}

/* Demangled: SonyPdLibGetVersion */
extern "C" __attribute__((visibility("default"))) int SonyPdLibGetVersion(void) {
    ALOGD("SonyPdLibGetVersion() called");
    return 0;
}
