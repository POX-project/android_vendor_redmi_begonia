/*
 * Reverse-Engineered Source for: libapu-apuwareutils.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libapu_apuwareutils_mtk"

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
#include "libapu_apuwareutils_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev() called");
    return 0;
}

/* Demangled: acquirePerformanceLockInternal */
extern "C" __attribute__((visibility("default"))) int acquirePerformanceLockInternal(void) {
    ALOGD("acquirePerformanceLockInternal() called");
    return 0;
}

/* Demangled: queryHwConfigInternal */
extern "C" __attribute__((visibility("default"))) int queryHwConfigInternal(void) {
    ALOGD("queryHwConfigInternal() called");
    return 0;
}

/* Demangled: releasePerformanceLockInternal */
extern "C" __attribute__((visibility("default"))) int releasePerformanceLockInternal(void) {
    ALOGD("releasePerformanceLockInternal() called");
    return 0;
}

/* Exported Object: utilsService */
extern "C" __attribute__((visibility("default"))) void* utilsService = NULL;
