/*
 * Reverse-Engineered Source for: libwvkeyboxext.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libwvkeyboxext"

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
#include "libwvkeyboxext.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: restoreKeyboxFromBackup */
extern "C" __attribute__((visibility("default"))) int restoreKeyboxFromBackup(void) {
    ALOGD("restoreKeyboxFromBackup() called");
    return 0;
}

/* Demangled: hexlify(char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7hexlifyPKcj(void) {
    ALOGD("_Z7hexlifyPKcj() called");
    return 0;
}

/* Demangled: unhexlify(char const*, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z9unhexlifyPKcjPj(void) {
    ALOGD("_Z9unhexlifyPKcjPj() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: runCmd(TEEC_UUID*, unsigned int, unsigned char*, unsigned int, unsigned char*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z6runCmdP9TEEC_UUIDjPhjS1_Pj(void) {
    ALOGD("_Z6runCmdP9TEEC_UUIDjPhjS1_Pj() called");
    return 0;
}

/* Demangled: dump_to_hex(char const*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11dump_to_hexPKcS0_j(void) {
    ALOGD("_Z11dump_to_hexPKcS0_j() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}
