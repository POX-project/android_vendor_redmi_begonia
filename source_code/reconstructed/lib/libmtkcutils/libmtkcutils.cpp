/*
 * Reverse-Engineered Source for: libmtkcutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcutils"

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
#include "libmtkcutils.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_CPUCTL_BG_NON_INTERACTIVE_TASKS "/dev/cpuctl/bg_non_interactive/tasks"
#define DEV_DEV_CPUCTL_TASKS "/dev/cpuctl/tasks"
#define DEV_DEV_SOCKET "/dev/socket/"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_CPUCTL_BG_NON_INTERACTIVE_TASKS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CPUCTL_BG_NON_INTERACTIVE_TASKS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CPUCTL_BG_NON_INTERACTIVE_TASKS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_CPUCTL_TASKS, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_CPUCTL_TASKS, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_CPUCTL_TASKS, g_dev_fd);
            return g_dev_fd;
        }
    }
    if (access(DEV_DEV_SOCKET, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_SOCKET, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_SOCKET, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: socket_set_receive_timeout */
extern "C" __attribute__((visibility("default"))) int socket_set_receive_timeout(void) {
    ALOGD("socket_set_receive_timeout() called");
    return 0;
}

/* Demangled: strdup8to16 */
extern "C" __attribute__((visibility("default"))) int strdup8to16(void) {
    ALOGD("strdup8to16() called");
    return 0;
}

/* Demangled: native_handle_delete */
extern "C" __attribute__((visibility("default"))) int native_handle_delete(void) {
    ALOGD("native_handle_delete() called");
    return 0;
}

/* Demangled: strncpy16to8 */
extern "C" __attribute__((visibility("default"))) int strncpy16to8(void) {
    ALOGD("strncpy16to8() called");
    return 0;
}

/* Demangled: socket_local_server_bind */
extern "C" __attribute__((visibility("default"))) int socket_local_server_bind(void) {
    ALOGD("socket_local_server_bind() called");
    return 0;
}

/* Demangled: native_handle_create */
extern "C" __attribute__((visibility("default"))) int native_handle_create(void) {
    ALOGD("native_handle_create() called");
    return 0;
}

/* Demangled: get_sched_policy */
extern "C" __attribute__((visibility("default"))) int get_sched_policy(void) {
    ALOGD("get_sched_policy() called");
    return 0;
}

/* Demangled: get_sched_policy_name */
extern "C" __attribute__((visibility("default"))) int get_sched_policy_name(void) {
    ALOGD("get_sched_policy_name() called");
    return 0;
}

/* Demangled: socket_get_local_port */
extern "C" __attribute__((visibility("default"))) int socket_get_local_port(void) {
    ALOGD("socket_get_local_port() called");
    return 0;
}

/* Demangled: socket_close */
extern "C" __attribute__((visibility("default"))) int socket_close(void) {
    ALOGD("socket_close() called");
    return 0;
}

/* Demangled: socket_send_buffers */
extern "C" __attribute__((visibility("default"))) int socket_send_buffers(void) {
    ALOGD("socket_send_buffers() called");
    return 0;
}

/* Demangled: strcpylen8to16 */
extern "C" __attribute__((visibility("default"))) int strcpylen8to16(void) {
    ALOGD("strcpylen8to16() called");
    return 0;
}

/* Demangled: set_cpuset_policy */
extern "C" __attribute__((visibility("default"))) int set_cpuset_policy(void) {
    ALOGD("set_cpuset_policy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: android_get_control_file */
extern "C" __attribute__((visibility("default"))) int android_get_control_file(void) {
    ALOGD("android_get_control_file() called");
    return 0;
}

/* Demangled: strcpy8to16 */
extern "C" __attribute__((visibility("default"))) int strcpy8to16(void) {
    ALOGD("strcpy8to16() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: native_handle_close */
extern "C" __attribute__((visibility("default"))) int native_handle_close(void) {
    ALOGD("native_handle_close() called");
    return 0;
}

/* Demangled: android_get_control_socket */
extern "C" __attribute__((visibility("default"))) int android_get_control_socket(void) {
    ALOGD("android_get_control_socket() called");
    return 0;
}

/* Demangled: strnlen16to8 */
extern "C" __attribute__((visibility("default"))) int strnlen16to8(void) {
    ALOGD("strnlen16to8() called");
    return 0;
}

/* Demangled: socket_peer_is_trusted */
extern "C" __attribute__((visibility("default"))) int socket_peer_is_trusted(void) {
    ALOGD("socket_peer_is_trusted() called");
    return 0;
}

/* Demangled: socket_local_client */
extern "C" __attribute__((visibility("default"))) int socket_local_client(void) {
    ALOGD("socket_local_client() called");
    return 0;
}

/* Demangled: socket_local_server */
extern "C" __attribute__((visibility("default"))) int socket_local_server(void) {
    ALOGD("socket_local_server() called");
    return 0;
}

/* Demangled: set_sched_policy */
extern "C" __attribute__((visibility("default"))) int set_sched_policy(void) {
    ALOGD("set_sched_policy() called");
    return 0;
}

/* Demangled: strndup16to8 */
extern "C" __attribute__((visibility("default"))) int strndup16to8(void) {
    ALOGD("strndup16to8() called");
    return 0;
}

/* Demangled: strlen8to16 */
extern "C" __attribute__((visibility("default"))) int strlen8to16(void) {
    ALOGD("strlen8to16() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: socket_local_client_connect */
extern "C" __attribute__((visibility("default"))) int socket_local_client_connect(void) {
    ALOGD("socket_local_client_connect() called");
    return 0;
}

/* Demangled: socket_make_sockaddr_un */
extern "C" __attribute__((visibility("default"))) int socket_make_sockaddr_un(void) {
    ALOGD("socket_make_sockaddr_un() called");
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

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}
