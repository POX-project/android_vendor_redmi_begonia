/*
 * Reverse-Engineered ABI Specification for: librpc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: librpc.so
 */

#ifndef BEGONIA_RE_LIBRPC_H
#define BEGONIA_RE_LIBRPC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: xdr_void */
/* Demangled: xdr_void */
int xdr_void(void);

/* Symbol: g_lowpower_mode */
/* Demangled: g_lowpower_mode */
extern void* g_lowpower_mode;

/* Symbol: xdr_u_int */
/* Demangled: xdr_u_int */
int xdr_u_int(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: xprt_refcount */
/* Demangled: xprt_refcount */
extern void* xprt_refcount;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: xdr_recv_enum */
/* Demangled: xdr_recv_enum */
int xdr_recv_enum(void);

/* Symbol: xdr_init_common */
/* Demangled: xdr_init_common */
int xdr_init_common(void);

/* Symbol: clnt_call */
/* Demangled: clnt_call */
int clnt_call(void);

/* Symbol: silence_fprintf */
/* Demangled: silence_fprintf */
int silence_fprintf(void);

/* Symbol: r_close */
/* Demangled: r_close */
int r_close(void);

/* Symbol: r_control */
/* Demangled: r_control */
int r_control(void);

/* Symbol: set_low_power_mode */
/* Demangled: set_low_power_mode */
int set_low_power_mode(void);

/* Symbol: svcerr_systemerr */
/* Demangled: svcerr_systemerr */
int svcerr_systemerr(void);

/* Symbol: clnt_destroy */
/* Demangled: clnt_destroy */
int clnt_destroy(void);

/* Symbol: xdr_reference */
/* Demangled: xdr_reference */
int xdr_reference(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: svc_dispatch */
/* Demangled: svc_dispatch */
int svc_dispatch(void);

/* Symbol: svcerr_noproc */
/* Demangled: svcerr_noproc */
int svcerr_noproc(void);

/* Symbol: xdr_u_char */
/* Demangled: xdr_u_char */
int xdr_u_char(void);

/* Symbol: xdr_u_long */
/* Demangled: xdr_u_long */
int xdr_u_long(void);

/* Symbol: xdr_vector */
/* Demangled: xdr_vector */
int xdr_vector(void);

/* Symbol: xdr_free */
/* Demangled: xdr_free */
int xdr_free(void);

/* Symbol: svc_destroy */
/* Demangled: svc_destroy */
int svc_destroy(void);

/* Symbol: xdr_recv_reply_header */
/* Demangled: xdr_recv_reply_header */
int xdr_recv_reply_header(void);

/* Symbol: xdr_send_enum */
/* Demangled: xdr_send_enum */
int xdr_send_enum(void);

/* Symbol: xdr_reply_msg_start */
/* Demangled: xdr_reply_msg_start */
int xdr_reply_msg_start(void);

/* Symbol: svcrtr_create */
/* Demangled: svcrtr_create */
int svcrtr_create(void);

/* Symbol: xdr_bool */
/* Demangled: xdr_bool */
int xdr_bool(void);

/* Symbol: xdr_float */
/* Demangled: xdr_float */
int xdr_float(void);

/* Symbol: xdr_opaque */
/* Demangled: xdr_opaque */
int xdr_opaque(void);

/* Symbol: xdr_quad_t */
/* Demangled: xdr_quad_t */
int xdr_quad_t(void);

/* Symbol: set_is_93_ril */
/* Demangled: set_is_93_ril */
int set_is_93_ril(void);

/* Symbol: svc_register */
/* Demangled: svc_register */
int svc_register(void);

/* Symbol: r_write */
/* Demangled: r_write */
int r_write(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: xdr_u_hyper */
/* Demangled: xdr_u_hyper */
int xdr_u_hyper(void);

/* Symbol: g_is_93_ril */
/* Demangled: g_is_93_ril */
extern void* g_is_93_ril;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: xdr_int */
/* Demangled: xdr_int */
int xdr_int(void);

/* Symbol: xdr_u_short */
/* Demangled: xdr_u_short */
int xdr_u_short(void);

/* Symbol: xdr_call_msg_start */
/* Demangled: xdr_call_msg_start */
int xdr_call_msg_start(void);

/* Symbol: xdr_clone */
/* Demangled: xdr_clone */
int xdr_clone(void);

/* Symbol: r_open */
/* Demangled: r_open */
int r_open(void);

/* Symbol: xprt_register */
/* Demangled: xprt_register */
int xprt_register(void);

/* Symbol: xdr_std_xops */
/* Demangled: xdr_std_xops */
extern void* xdr_std_xops;

/* Symbol: xdr_char */
/* Demangled: xdr_char */
int xdr_char(void);

/* Symbol: xdr_long */
/* Demangled: xdr_long */
int xdr_long(void);

/* Symbol: xdr_u_quad_t */
/* Demangled: xdr_u_quad_t */
int xdr_u_quad_t(void);

/* Symbol: releaseWakeLock */
/* Demangled: releaseWakeLock */
int releaseWakeLock(void);

/* Symbol: svc_freeargs */
/* Demangled: svc_freeargs */
int svc_freeargs(void);

/* Symbol: svcerr_decode */
/* Demangled: svcerr_decode */
int svcerr_decode(void);

/* Symbol: xdr_recv_auth */
/* Demangled: xdr_recv_auth */
int xdr_recv_auth(void);

/* Symbol: xdr_array */
/* Demangled: xdr_array */
int xdr_array(void);

/* Symbol: xdr_string */
/* Demangled: xdr_string */
int xdr_string(void);

/* Symbol: xprt_unregister */
/* Demangled: xprt_unregister */
int xprt_unregister(void);

/* Symbol: svc_unregister */
/* Demangled: svc_unregister */
int svc_unregister(void);

/* Symbol: xdr_bytes */
/* Demangled: xdr_bytes */
int xdr_bytes(void);

/* Symbol: xdr_double */
/* Demangled: xdr_double */
int xdr_double(void);

/* Symbol: svc_getargs */
/* Demangled: svc_getargs */
int svc_getargs(void);

/* Symbol: svc_sendreply */
/* Demangled: svc_sendreply */
int svc_sendreply(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: xdr_enum */
/* Demangled: xdr_enum */
int xdr_enum(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: r_read */
/* Demangled: r_read */
int r_read(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: xdr_pointer */
/* Demangled: xdr_pointer */
int xdr_pointer(void);

/* Symbol: xdr_short */
/* Demangled: xdr_short */
int xdr_short(void);

/* Symbol: xdr_send_auth */
/* Demangled: xdr_send_auth */
int xdr_send_auth(void);

/* Symbol: xdr_send_reply_header */
/* Demangled: xdr_send_reply_header */
int xdr_send_reply_header(void);

/* Symbol: svc_find */
/* Demangled: svc_find */
int svc_find(void);

/* Symbol: xdr_destroy_common */
/* Demangled: xdr_destroy_common */
int xdr_destroy_common(void);

/* Symbol: grabPartialWakeLock */
/* Demangled: grabPartialWakeLock */
int grabPartialWakeLock(void);

/* Symbol: the_xprt */
/* Demangled: the_xprt */
extern void* the_xprt;

/* Symbol: clnt_create */
/* Demangled: clnt_create */
int clnt_create(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBRPC_H */
