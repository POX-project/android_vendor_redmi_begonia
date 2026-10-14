/*
 * Reverse-Engineered Source for: libteeclientjni.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libteeclientjni"

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
#include "libteeclientjni.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: print_result(int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z12print_resultiPc(void) {
    ALOGD("_Z12print_resultiPc() called");
    return 0;
}

/* Demangled: key_load(unsigned char*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z8key_loadPhj(void) {
    ALOGD("_Z8key_loadPhj() called");
    return 0;
}

/* Demangled: bytetoInt(char*) */
extern "C" __attribute__((visibility("default"))) int _Z9bytetoIntPc(void) {
    ALOGD("_Z9bytetoIntPc() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: kpi_end_time_ms */
extern "C" __attribute__((visibility("default"))) void* kpi_end_time_ms = NULL;

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

/* Demangled: key_prepare(unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11key_preparePhPj(void) {
    ALOGD("_Z11key_preparePhPj() called");
    return 0;
}

/* Demangled: invoke_command(void*, unsigned int, void*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z14invoke_commandPvjS_Pj(void) {
    ALOGD("_Z14invoke_commandPvjS_Pj() called");
    return 0;
}

/* Demangled: get_current_ms() */
extern "C" __attribute__((visibility("default"))) int _Z14get_current_msv(void) {
    ALOGD("_Z14get_current_msv() called");
    return 0;
}

/* Demangled: get_key_version() */
extern "C" __attribute__((visibility("default"))) int _Z15get_key_versionv(void) {
    ALOGD("_Z15get_key_versionv() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Exported Object: kpi_start_time_ms */
extern "C" __attribute__((visibility("default"))) void* kpi_start_time_ms = NULL;

/* Demangled: get_cmd_str(int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z11get_cmd_striPc(void) {
    ALOGD("_Z11get_cmd_striPc() called");
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
