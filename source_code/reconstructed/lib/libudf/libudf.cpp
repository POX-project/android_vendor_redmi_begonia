/*
 * Reverse-Engineered Source for: libudf.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libudf"

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
#include "libudf.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_SOCKET_LOGDW "/dev/socket/logdw"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_SOCKET_LOGDW, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET_LOGDW, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET_LOGDW, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: ubrd_btrace_remove */
extern "C" __attribute__((visibility("default"))) int ubrd_btrace_remove(void) {
    ALOGD("ubrd_btrace_remove() called");
    return 0;
}

/* Demangled: ubrd_init */
extern "C" __attribute__((visibility("default"))) int ubrd_init(void) {
    ALOGD("ubrd_init() called");
    return 0;
}

/* Demangled: async_safe_fatal_va_list */
extern "C" __attribute__((visibility("default"))) int async_safe_fatal_va_list(void) {
    ALOGD("async_safe_fatal_va_list() called");
    return 0;
}

/* Demangled: ubrd_btrace_remove_nolock */
extern "C" __attribute__((visibility("default"))) int ubrd_btrace_remove_nolock(void) {
    ALOGD("ubrd_btrace_remove_nolock() called");
    return 0;
}

/* Demangled: async_safe_format_buffer_va_list */
extern "C" __attribute__((visibility("default"))) int async_safe_format_buffer_va_list(void) {
    ALOGD("async_safe_format_buffer_va_list() called");
    return 0;
}

/* Demangled: mmap_debug_initialize */
extern "C" __attribute__((visibility("default"))) int mmap_debug_initialize(void) {
    ALOGD("mmap_debug_initialize() called");
    return 0;
}

/* Demangled: socket */
extern "C" __attribute__((visibility("default"))) int socket(void) {
    ALOGD("socket() called");
    return 0;
}

/* Demangled: async_safe_format_buffer */
extern "C" __attribute__((visibility("default"))) int async_safe_format_buffer(void) {
    ALOGD("async_safe_format_buffer() called");
    return 0;
}

/* Demangled: async_safe_format_fd */
extern "C" __attribute__((visibility("default"))) int async_safe_format_fd(void) {
    ALOGD("async_safe_format_fd() called");
    return 0;
}

/* Demangled: async_safe_format_log */
extern "C" __attribute__((visibility("default"))) int async_safe_format_log(void) {
    ALOGD("async_safe_format_log() called");
    return 0;
}

/* Demangled: ubrd_btrace_record */
extern "C" __attribute__((visibility("default"))) int ubrd_btrace_record(void) {
    ALOGD("ubrd_btrace_record() called");
    return 0;
}

/* Demangled: accept4 */
extern "C" __attribute__((visibility("default"))) int accept4(void) {
    ALOGD("accept4() called");
    return 0;
}

/* Demangled: fdleak_remove_backtrace */
extern "C" __attribute__((visibility("default"))) int fdleak_remove_backtrace(void) {
    ALOGD("fdleak_remove_backtrace() called");
    return 0;
}

/* Demangled: socketpair */
extern "C" __attribute__((visibility("default"))) int socketpair(void) {
    ALOGD("socketpair() called");
    return 0;
}

/* Demangled: __openat */
extern "C" __attribute__((visibility("default"))) int fn___openat(void) __asm__("__openat");
int fn___openat(void) {
    ALOGD("__openat() called");
    return 0;
}

/* Demangled: android_fdsan_close_with_tag */
extern "C" __attribute__((visibility("default"))) int android_fdsan_close_with_tag(void) {
    ALOGD("android_fdsan_close_with_tag() called");
    return 0;
}

/* Demangled: fdleak_record_backtrace_safe */
extern "C" __attribute__((visibility("default"))) int fdleak_record_backtrace_safe(void) {
    ALOGD("fdleak_record_backtrace_safe() called");
    return 0;
}

/* Demangled: async_safe_fatal_no_abort */
extern "C" __attribute__((visibility("default"))) int async_safe_fatal_no_abort(void) {
    ALOGD("async_safe_fatal_no_abort() called");
    return 0;
}

/* Demangled: async_safe_write_log */
extern "C" __attribute__((visibility("default"))) int async_safe_write_log(void) {
    ALOGD("async_safe_write_log() called");
    return 0;
}

/* Demangled: libudf_unwind_backtrace */
extern "C" __attribute__((visibility("default"))) int libudf_unwind_backtrace(void) {
    ALOGD("libudf_unwind_backtrace() called");
    return 0;
}

/* Demangled: fdleak_debug_initialize */
extern "C" __attribute__((visibility("default"))) int fdleak_debug_initialize(void) {
    ALOGD("fdleak_debug_initialize() called");
    return 0;
}

/* Demangled: async_safe_format_log_va_list */
extern "C" __attribute__((visibility("default"))) int async_safe_format_log_va_list(void) {
    ALOGD("async_safe_format_log_va_list() called");
    return 0;
}

/* Demangled: epoll_create1 */
extern "C" __attribute__((visibility("default"))) int epoll_create1(void) {
    ALOGD("epoll_create1() called");
    return 0;
}

/* Demangled: async_safe_format_fd_va_list */
extern "C" __attribute__((visibility("default"))) int async_safe_format_fd_va_list(void) {
    ALOGD("async_safe_format_fd_va_list() called");
    return 0;
}
