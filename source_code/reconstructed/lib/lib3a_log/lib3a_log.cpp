/*
 * Reverse-Engineered Source for: lib3a.log.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_log"

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
#include "lib3a_log.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: blog_flush(BLog&, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z10blog_flushR4BLogPKc(void) {
    ALOGD("_Z10blog_flushR4BLogPKc() called");
    return 0;
}

/* Demangled: blog_isUserLoad() */
extern "C" __attribute__((visibility("default"))) int _Z15blog_isUserLoadv(void) {
    ALOGD("_Z15blog_isUserLoadv() called");
    return 0;
}

/* Exported Object: clog3A::bEn */
extern "C" __attribute__((visibility("default"))) void* _ZN6clog3A3bEnE = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: afBlog_print */
extern "C" __attribute__((visibility("default"))) int afBlog_print(void) {
    ALOGD("afBlog_print() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: blog_print(BLog&, char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z10blog_printR4BLogPKcS2_z(void) {
    ALOGD("_Z10blog_printR4BLogPKcS2_z() called");
    return 0;
}

/* Demangled: afBlog_flush */
extern "C" __attribute__((visibility("default"))) int afBlog_flush(void) {
    ALOGD("afBlog_flush() called");
    return 0;
}

/* Exported Object: mutexAfLog */
extern "C" __attribute__((visibility("default"))) void* mutexAfLog = NULL;

/* Exported Object: clog3A::_initializer */
extern "C" __attribute__((visibility("default"))) void* _ZN6clog3A12_initializerE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
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
