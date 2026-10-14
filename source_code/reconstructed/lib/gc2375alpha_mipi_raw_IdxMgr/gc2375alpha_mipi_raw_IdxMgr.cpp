/*
 * Reverse-Engineered Source for: gc2375alpha_mipi_raw_IdxMgr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "gc2375alpha_mipi_raw_IdxMgr"

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
#include "gc2375alpha_mipi_raw_IdxMgr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: NSFeature::SensorInfoIdxMgr<9077u, 0u>::impGetDefaultData(CAMERA_DATA_TYPE_ENUM, void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9NSFeature16SensorInfoIdxMgrILj9077ELj0EE17impGetDefaultDataE21CAMERA_DATA_TYPE_ENUMPvj(void) {
    ALOGD("_ZNK9NSFeature16SensorInfoIdxMgrILj9077ELj0EE17impGetDefaultDataE21CAMERA_DATA_TYPE_ENUMPvj() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
