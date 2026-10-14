/*
 * Reverse-Engineered Source for: s5k3t2_mipi_raw_tuning.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "s5k3t2_mipi_raw_tuning"

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
#include "s5k3t2_mipi_raw_tuning.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: guard variable for NSFeature::RAWSensorInfo<12610u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN9NSFeature13RAWSensorInfoILj12610ELj0EE11getInstanceEvE4inst = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: getDefaultDataFunc */
extern "C" __attribute__((visibility("default"))) int getDefaultDataFunc(void) {
    ALOGD("getDefaultDataFunc() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: getFlickerParaFunc */
extern "C" __attribute__((visibility("default"))) int getFlickerParaFunc(void) {
    ALOGD("getFlickerParaFunc() called");
    return 0;
}

/* Demangled: NSFeature::RAWSensorInfo<12610u, 0u>::impGetFlickerPara(int, int, void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9NSFeature13RAWSensorInfoILj12610ELj0EE17impGetFlickerParaEiiPv(void) {
    ALOGD("_ZNK9NSFeature13RAWSensorInfoILj12610ELj0EE17impGetFlickerParaEiiPv() called");
    return 0;
}

/* Demangled: NSFeature::RAWSensorInfo<12610u, 0u>::impGetDefaultData(CAMERA_DATA_TYPE_ENUM, void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK9NSFeature13RAWSensorInfoILj12610ELj0EE17impGetDefaultDataE21CAMERA_DATA_TYPE_ENUMPvj(void) {
    ALOGD("_ZNK9NSFeature13RAWSensorInfoILj12610ELj0EE17impGetDefaultDataE21CAMERA_DATA_TYPE_ENUMPvj() called");
    return 0;
}

/* Exported Object: vtable for NSFeature::RAWSensorInfo<12610u, 0u> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN9NSFeature13RAWSensorInfoILj12610ELj0EEE = NULL;

/* Exported Object: NSFeature::RAWSensorInfo<12610u, 0u>::getInstance()::inst */
extern "C" __attribute__((visibility("default"))) void* _ZZN9NSFeature13RAWSensorInfoILj12610ELj0EE11getInstanceEvE4inst = NULL;

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

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
