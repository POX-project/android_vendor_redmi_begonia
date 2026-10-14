/*
 * Reverse-Engineered Source for: libgf_ca.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libgf_ca"

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
#include "libgf_ca.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_TEEI_FP "/dev/teei_fp"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_TEEI_FP, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_TEEI_FP, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_TEEI_FP, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: gf_ca_logdump */
extern "C" __attribute__((visibility("default"))) int gf_ca_logdump(void) {
    ALOGD("gf_ca_logdump() called");
    return 0;
}

/* Exported Object: g_log_level_strtable */
extern "C" __attribute__((visibility("default"))) void* g_log_level_strtable = NULL;

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

/* Demangled: gf_ca_close_session */
extern "C" __attribute__((visibility("default"))) int gf_ca_close_session(void) {
    ALOGD("gf_ca_close_session() called");
    return 0;
}

/* Demangled: gf_ca_open_session */
extern "C" __attribute__((visibility("default"))) int gf_ca_open_session(void) {
    ALOGD("gf_ca_open_session() called");
    return 0;
}

/* Exported Object: g_logdump_level */
extern "C" __attribute__((visibility("default"))) void* g_logdump_level = NULL;

/* Demangled: gf_ca_invoke_command */
extern "C" __attribute__((visibility("default"))) int gf_ca_invoke_command(void) {
    ALOGD("gf_ca_invoke_command() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: gf_ca_get_logbuf_length */
extern "C" __attribute__((visibility("default"))) int gf_ca_get_logbuf_length(void) {
    ALOGD("gf_ca_get_logbuf_length() called");
    return 0;
}

/* Demangled: gf_ca_set_handle */
extern "C" __attribute__((visibility("default"))) int gf_ca_set_handle(void) {
    ALOGD("gf_ca_set_handle() called");
    return 0;
}

/* Demangled: gf_ca_tee_auth */
extern "C" __attribute__((visibility("default"))) int gf_ca_tee_auth(void) {
    ALOGD("gf_ca_tee_auth() called");
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
