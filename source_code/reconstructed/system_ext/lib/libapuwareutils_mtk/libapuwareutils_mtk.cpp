/*
 * Reverse-Engineered Source for: libapuwareutils.mtk.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libapuwareutils_mtk"

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
#include "libapuwareutils_mtk.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: ApuwareutilsClient::utilsService */
extern "C" __attribute__((visibility("default"))) void* _ZN18ApuwareutilsClient12utilsServiceE = NULL;

/* Demangled: ApuwareutilsClient::queryHwConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN18ApuwareutilsClient13queryHwConfigEv(void) {
    ALOGD("_ZN18ApuwareutilsClient13queryHwConfigEv() called");
    return 0;
}

/* Demangled: ApuwareutilsClient::acquirePerformanceLock(int, PERFORMANCE_MODE_E, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN18ApuwareutilsClient22acquirePerformanceLockEi18PERFORMANCE_MODE_Ej(void) {
    ALOGD("_ZN18ApuwareutilsClient22acquirePerformanceLockEi18PERFORMANCE_MODE_Ej() called");
    return 0;
}

/* Demangled: ApuwareutilsClient::releasePerformanceLock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN18ApuwareutilsClient22releasePerformanceLockEi(void) {
    ALOGD("_ZN18ApuwareutilsClient22releasePerformanceLockEi() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils>::~sp() */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware7apuware5utils4V1_013IApuwareUtilsEED2Ev() called");
    return 0;
}

/* Demangled: releasePerformanceLockInternal */
extern "C" __attribute__((visibility("default"))) int releasePerformanceLockInternal(void) {
    ALOGD("releasePerformanceLockInternal() called");
    return 0;
}

/* Demangled: ApuwareutilsClient::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN18ApuwareutilsClient14createInstanceEv(void) {
    ALOGD("_ZN18ApuwareutilsClient14createInstanceEv() called");
    return 0;
}

/* Exported Object: ApuwareutilsClient::apuClient */
extern "C" __attribute__((visibility("default"))) void* _ZN18ApuwareutilsClient9apuClientE = NULL;

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
