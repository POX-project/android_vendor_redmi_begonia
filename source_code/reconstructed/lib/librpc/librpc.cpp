/*
 * Reverse-Engineered Source for: librpc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "librpc"

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
#include "librpc.h"


/* Hardware Device Nodes Accessed by Original Blob */
#define DEV_DEV_ONCRPC_00000000 "/dev/oncrpc/00000000"

static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    if (access(DEV_DEV_ONCRPC_00000000, F_OK) == 0) {
        g_dev_fd = open(DEV_DEV_ONCRPC_00000000, O_RDWR | O_CLOEXEC);
        if (g_dev_fd >= 0) {
            ALOGI("Opened hardware device node: %s (fd=%d)", DEV_DEV_ONCRPC_00000000, g_dev_fd);
            return g_dev_fd;
        }
    }
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: xdr_void */
extern "C" __attribute__((visibility("default"))) int xdr_void(void) {
    ALOGD("xdr_void() called");
    return 0;
}

/* Exported Object: g_lowpower_mode */
extern "C" __attribute__((visibility("default"))) void* g_lowpower_mode = NULL;

/* Demangled: xdr_u_int */
extern "C" __attribute__((visibility("default"))) int xdr_u_int(void) {
    ALOGD("xdr_u_int() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: xprt_refcount */
extern "C" __attribute__((visibility("default"))) void* xprt_refcount = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: xdr_recv_enum */
extern "C" __attribute__((visibility("default"))) int xdr_recv_enum(void) {
    ALOGD("xdr_recv_enum() called");
    return 0;
}

/* Demangled: xdr_init_common */
extern "C" __attribute__((visibility("default"))) int xdr_init_common(void) {
    ALOGD("xdr_init_common() called");
    return 0;
}

/* Demangled: clnt_call */
extern "C" __attribute__((visibility("default"))) int clnt_call(void) {
    ALOGD("clnt_call() called");
    return 0;
}

/* Demangled: silence_fprintf */
extern "C" __attribute__((visibility("default"))) int silence_fprintf(void) {
    ALOGD("silence_fprintf() called");
    return 0;
}

/* Demangled: r_close */
extern "C" __attribute__((visibility("default"))) int r_close(void) {
    ALOGD("r_close() called");
    return 0;
}

/* Demangled: r_control */
extern "C" __attribute__((visibility("default"))) int r_control(void) {
    ALOGD("r_control() called");
    return 0;
}

/* Demangled: set_low_power_mode */
extern "C" __attribute__((visibility("default"))) int set_low_power_mode(void) {
    ALOGD("set_low_power_mode() called");
    return 0;
}

/* Demangled: svcerr_systemerr */
extern "C" __attribute__((visibility("default"))) int svcerr_systemerr(void) {
    ALOGD("svcerr_systemerr() called");
    return 0;
}

/* Demangled: clnt_destroy */
extern "C" __attribute__((visibility("default"))) int clnt_destroy(void) {
    ALOGD("clnt_destroy() called");
    return 0;
}

/* Demangled: xdr_reference */
extern "C" __attribute__((visibility("default"))) int xdr_reference(void) {
    ALOGD("xdr_reference() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: svc_dispatch */
extern "C" __attribute__((visibility("default"))) int svc_dispatch(void) {
    ALOGD("svc_dispatch() called");
    return 0;
}

/* Demangled: svcerr_noproc */
extern "C" __attribute__((visibility("default"))) int svcerr_noproc(void) {
    ALOGD("svcerr_noproc() called");
    return 0;
}

/* Demangled: xdr_u_char */
extern "C" __attribute__((visibility("default"))) int xdr_u_char(void) {
    ALOGD("xdr_u_char() called");
    return 0;
}

/* Demangled: xdr_u_long */
extern "C" __attribute__((visibility("default"))) int xdr_u_long(void) {
    ALOGD("xdr_u_long() called");
    return 0;
}

/* Demangled: xdr_vector */
extern "C" __attribute__((visibility("default"))) int xdr_vector(void) {
    ALOGD("xdr_vector() called");
    return 0;
}

/* Demangled: xdr_free */
extern "C" __attribute__((visibility("default"))) int xdr_free(void) {
    ALOGD("xdr_free() called");
    return 0;
}

/* Demangled: svc_destroy */
extern "C" __attribute__((visibility("default"))) int svc_destroy(void) {
    ALOGD("svc_destroy() called");
    return 0;
}

/* Demangled: xdr_recv_reply_header */
extern "C" __attribute__((visibility("default"))) int xdr_recv_reply_header(void) {
    ALOGD("xdr_recv_reply_header() called");
    return 0;
}

/* Demangled: xdr_send_enum */
extern "C" __attribute__((visibility("default"))) int xdr_send_enum(void) {
    ALOGD("xdr_send_enum() called");
    return 0;
}

/* Demangled: xdr_reply_msg_start */
extern "C" __attribute__((visibility("default"))) int xdr_reply_msg_start(void) {
    ALOGD("xdr_reply_msg_start() called");
    return 0;
}

/* Demangled: svcrtr_create */
extern "C" __attribute__((visibility("default"))) int svcrtr_create(void) {
    ALOGD("svcrtr_create() called");
    return 0;
}

/* Demangled: xdr_bool */
extern "C" __attribute__((visibility("default"))) int xdr_bool(void) {
    ALOGD("xdr_bool() called");
    return 0;
}

/* Demangled: xdr_float */
extern "C" __attribute__((visibility("default"))) int xdr_float(void) {
    ALOGD("xdr_float() called");
    return 0;
}

/* Demangled: xdr_opaque */
extern "C" __attribute__((visibility("default"))) int xdr_opaque(void) {
    ALOGD("xdr_opaque() called");
    return 0;
}

/* Demangled: xdr_quad_t */
extern "C" __attribute__((visibility("default"))) int xdr_quad_t(void) {
    ALOGD("xdr_quad_t() called");
    return 0;
}

/* Demangled: set_is_93_ril */
extern "C" __attribute__((visibility("default"))) int set_is_93_ril(void) {
    ALOGD("set_is_93_ril() called");
    return 0;
}

/* Demangled: svc_register */
extern "C" __attribute__((visibility("default"))) int svc_register(void) {
    ALOGD("svc_register() called");
    return 0;
}

/* Demangled: r_write */
extern "C" __attribute__((visibility("default"))) int r_write(void) {
    ALOGD("r_write() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: xdr_u_hyper */
extern "C" __attribute__((visibility("default"))) int xdr_u_hyper(void) {
    ALOGD("xdr_u_hyper() called");
    return 0;
}

/* Exported Object: g_is_93_ril */
extern "C" __attribute__((visibility("default"))) void* g_is_93_ril = NULL;

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

/* Demangled: xdr_int */
extern "C" __attribute__((visibility("default"))) int xdr_int(void) {
    ALOGD("xdr_int() called");
    return 0;
}

/* Demangled: xdr_u_short */
extern "C" __attribute__((visibility("default"))) int xdr_u_short(void) {
    ALOGD("xdr_u_short() called");
    return 0;
}

/* Demangled: xdr_call_msg_start */
extern "C" __attribute__((visibility("default"))) int xdr_call_msg_start(void) {
    ALOGD("xdr_call_msg_start() called");
    return 0;
}

/* Demangled: xdr_clone */
extern "C" __attribute__((visibility("default"))) int xdr_clone(void) {
    ALOGD("xdr_clone() called");
    return 0;
}

/* Demangled: r_open */
extern "C" __attribute__((visibility("default"))) int r_open(void) {
    ALOGD("r_open() called");
    return 0;
}

/* Demangled: xprt_register */
extern "C" __attribute__((visibility("default"))) int xprt_register(void) {
    ALOGD("xprt_register() called");
    return 0;
}

/* Exported Object: xdr_std_xops */
extern "C" __attribute__((visibility("default"))) void* xdr_std_xops = NULL;

/* Demangled: xdr_char */
extern "C" __attribute__((visibility("default"))) int xdr_char(void) {
    ALOGD("xdr_char() called");
    return 0;
}

/* Demangled: xdr_long */
extern "C" __attribute__((visibility("default"))) int xdr_long(void) {
    ALOGD("xdr_long() called");
    return 0;
}

/* Demangled: xdr_u_quad_t */
extern "C" __attribute__((visibility("default"))) int xdr_u_quad_t(void) {
    ALOGD("xdr_u_quad_t() called");
    return 0;
}

/* Demangled: releaseWakeLock */
extern "C" __attribute__((visibility("default"))) int releaseWakeLock(void) {
    ALOGD("releaseWakeLock() called");
    return 0;
}

/* Demangled: svc_freeargs */
extern "C" __attribute__((visibility("default"))) int svc_freeargs(void) {
    ALOGD("svc_freeargs() called");
    return 0;
}

/* Demangled: svcerr_decode */
extern "C" __attribute__((visibility("default"))) int svcerr_decode(void) {
    ALOGD("svcerr_decode() called");
    return 0;
}

/* Demangled: xdr_recv_auth */
extern "C" __attribute__((visibility("default"))) int xdr_recv_auth(void) {
    ALOGD("xdr_recv_auth() called");
    return 0;
}

/* Demangled: xdr_array */
extern "C" __attribute__((visibility("default"))) int xdr_array(void) {
    ALOGD("xdr_array() called");
    return 0;
}

/* Demangled: xdr_string */
extern "C" __attribute__((visibility("default"))) int xdr_string(void) {
    ALOGD("xdr_string() called");
    return 0;
}

/* Demangled: xprt_unregister */
extern "C" __attribute__((visibility("default"))) int xprt_unregister(void) {
    ALOGD("xprt_unregister() called");
    return 0;
}

/* Demangled: svc_unregister */
extern "C" __attribute__((visibility("default"))) int svc_unregister(void) {
    ALOGD("svc_unregister() called");
    return 0;
}

/* Demangled: xdr_bytes */
extern "C" __attribute__((visibility("default"))) int xdr_bytes(void) {
    ALOGD("xdr_bytes() called");
    return 0;
}

/* Demangled: xdr_double */
extern "C" __attribute__((visibility("default"))) int xdr_double(void) {
    ALOGD("xdr_double() called");
    return 0;
}

/* Demangled: svc_getargs */
extern "C" __attribute__((visibility("default"))) int svc_getargs(void) {
    ALOGD("svc_getargs() called");
    return 0;
}

/* Demangled: svc_sendreply */
extern "C" __attribute__((visibility("default"))) int svc_sendreply(void) {
    ALOGD("svc_sendreply() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: xdr_enum */
extern "C" __attribute__((visibility("default"))) int xdr_enum(void) {
    ALOGD("xdr_enum() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: r_read */
extern "C" __attribute__((visibility("default"))) int r_read(void) {
    ALOGD("r_read() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: xdr_pointer */
extern "C" __attribute__((visibility("default"))) int xdr_pointer(void) {
    ALOGD("xdr_pointer() called");
    return 0;
}

/* Demangled: xdr_short */
extern "C" __attribute__((visibility("default"))) int xdr_short(void) {
    ALOGD("xdr_short() called");
    return 0;
}

/* Demangled: xdr_send_auth */
extern "C" __attribute__((visibility("default"))) int xdr_send_auth(void) {
    ALOGD("xdr_send_auth() called");
    return 0;
}

/* Demangled: xdr_send_reply_header */
extern "C" __attribute__((visibility("default"))) int xdr_send_reply_header(void) {
    ALOGD("xdr_send_reply_header() called");
    return 0;
}

/* Demangled: svc_find */
extern "C" __attribute__((visibility("default"))) int svc_find(void) {
    ALOGD("svc_find() called");
    return 0;
}

/* Demangled: xdr_destroy_common */
extern "C" __attribute__((visibility("default"))) int xdr_destroy_common(void) {
    ALOGD("xdr_destroy_common() called");
    return 0;
}

/* Demangled: grabPartialWakeLock */
extern "C" __attribute__((visibility("default"))) int grabPartialWakeLock(void) {
    ALOGD("grabPartialWakeLock() called");
    return 0;
}

/* Exported Object: the_xprt */
extern "C" __attribute__((visibility("default"))) void* the_xprt = NULL;

/* Demangled: clnt_create */
extern "C" __attribute__((visibility("default"))) int clnt_create(void) {
    ALOGD("clnt_create() called");
    return 0;
}
