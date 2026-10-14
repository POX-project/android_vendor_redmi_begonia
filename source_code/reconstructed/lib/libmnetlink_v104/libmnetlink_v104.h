/*
 * Reverse-Engineered ABI Specification for: libmnetlink_v104.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmnetlink_v104.so
 */

#ifndef BEGONIA_RE_LIBMNETLINK_V104_H
#define BEGONIA_RE_LIBMNETLINK_V104_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mnl_socket_open */
/* Demangled: mnl_socket_open */
int mnl_socket_open(void);

/* Symbol: mnl_socket_recvfrom */
/* Demangled: mnl_socket_recvfrom */
int mnl_socket_recvfrom(void);

/* Symbol: mnl_nlmsg_batch_next */
/* Demangled: mnl_nlmsg_batch_next */
int mnl_nlmsg_batch_next(void);

/* Symbol: mnl_nlmsg_batch_stop */
/* Demangled: mnl_nlmsg_batch_stop */
int mnl_nlmsg_batch_stop(void);

/* Symbol: mnl_attr_get_payload */
/* Demangled: mnl_attr_get_payload */
int mnl_attr_get_payload(void);

/* Symbol: mnl_socket_getsockopt */
/* Demangled: mnl_socket_getsockopt */
int mnl_socket_getsockopt(void);

/* Symbol: mnl_socket_setsockopt */
/* Demangled: mnl_socket_setsockopt */
int mnl_socket_setsockopt(void);

/* Symbol: mnl_nlmsg_batch_size */
/* Demangled: mnl_nlmsg_batch_size */
int mnl_nlmsg_batch_size(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: mnl_attr_put */
/* Demangled: mnl_attr_put */
int mnl_attr_put(void);

/* Symbol: mnl_attr_get_u32 */
/* Demangled: mnl_attr_get_u32 */
int mnl_attr_get_u32(void);

/* Symbol: mnl_attr_nest_start */
/* Demangled: mnl_attr_nest_start */
int mnl_attr_nest_start(void);

/* Symbol: mnl_attr_next */
/* Demangled: mnl_attr_next */
int mnl_attr_next(void);

/* Symbol: mnl_cb_run2 */
/* Demangled: mnl_cb_run2 */
int mnl_cb_run2(void);

/* Symbol: mnl_nlmsg_get_payload_len */
/* Demangled: mnl_nlmsg_get_payload_len */
int mnl_nlmsg_get_payload_len(void);

/* Symbol: mnl_attr_nest_start_check */
/* Demangled: mnl_attr_nest_start_check */
int mnl_attr_nest_start_check(void);

/* Symbol: mnl_attr_validate */
/* Demangled: mnl_attr_validate */
int mnl_attr_validate(void);

/* Symbol: mnl_socket_get_fd */
/* Demangled: mnl_socket_get_fd */
int mnl_socket_get_fd(void);

/* Symbol: mnl_nlmsg_batch_current */
/* Demangled: mnl_nlmsg_batch_current */
int mnl_nlmsg_batch_current(void);

/* Symbol: mnl_attr_nest_end */
/* Demangled: mnl_attr_nest_end */
int mnl_attr_nest_end(void);

/* Symbol: mnl_attr_put_u64 */
/* Demangled: mnl_attr_put_u64 */
int mnl_attr_put_u64(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: mnl_nlmsg_batch_is_empty */
/* Demangled: mnl_nlmsg_batch_is_empty */
int mnl_nlmsg_batch_is_empty(void);

/* Symbol: mnl_attr_get_len */
/* Demangled: mnl_attr_get_len */
int mnl_attr_get_len(void);

/* Symbol: mnl_attr_get_payload_len */
/* Demangled: mnl_attr_get_payload_len */
int mnl_attr_get_payload_len(void);

/* Symbol: mnl_attr_nest_cancel */
/* Demangled: mnl_attr_nest_cancel */
int mnl_attr_nest_cancel(void);

/* Symbol: mnl_socket_get_portid */
/* Demangled: mnl_socket_get_portid */
int mnl_socket_get_portid(void);

/* Symbol: mnl_socket_open2 */
/* Demangled: mnl_socket_open2 */
int mnl_socket_open2(void);

/* Symbol: mnl_attr_get_type */
/* Demangled: mnl_attr_get_type */
int mnl_attr_get_type(void);

/* Symbol: mnl_attr_get_u8 */
/* Demangled: mnl_attr_get_u8 */
int mnl_attr_get_u8(void);

/* Symbol: mnl_attr_put_u16_check */
/* Demangled: mnl_attr_put_u16_check */
int mnl_attr_put_u16_check(void);

/* Symbol: mnl_socket_bind */
/* Demangled: mnl_socket_bind */
int mnl_socket_bind(void);

/* Symbol: mnl_nlmsg_ok */
/* Demangled: mnl_nlmsg_ok */
int mnl_nlmsg_ok(void);

/* Symbol: mnl_attr_parse */
/* Demangled: mnl_attr_parse */
int mnl_attr_parse(void);

/* Symbol: mnl_attr_put_u8 */
/* Demangled: mnl_attr_put_u8 */
int mnl_attr_put_u8(void);

/* Symbol: mnl_attr_put_u8_check */
/* Demangled: mnl_attr_put_u8_check */
int mnl_attr_put_u8_check(void);

/* Symbol: mnl_attr_validate2 */
/* Demangled: mnl_attr_validate2 */
int mnl_attr_validate2(void);

/* Symbol: mnl_socket_close */
/* Demangled: mnl_socket_close */
int mnl_socket_close(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: mnl_nlmsg_batch_reset */
/* Demangled: mnl_nlmsg_batch_reset */
int mnl_nlmsg_batch_reset(void);

/* Symbol: mnl_attr_get_u64 */
/* Demangled: mnl_attr_get_u64 */
int mnl_attr_get_u64(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: mnl_socket_sendto */
/* Demangled: mnl_socket_sendto */
int mnl_socket_sendto(void);

/* Symbol: mnl_attr_ok */
/* Demangled: mnl_attr_ok */
int mnl_attr_ok(void);

/* Symbol: mnl_attr_put_u32_check */
/* Demangled: mnl_attr_put_u32_check */
int mnl_attr_put_u32_check(void);

/* Symbol: mnl_nlmsg_batch_start */
/* Demangled: mnl_nlmsg_batch_start */
int mnl_nlmsg_batch_start(void);

/* Symbol: mnl_nlmsg_put_extra_header */
/* Demangled: mnl_nlmsg_put_extra_header */
int mnl_nlmsg_put_extra_header(void);

/* Symbol: mnl_attr_put_str */
/* Demangled: mnl_attr_put_str */
int mnl_attr_put_str(void);

/* Symbol: mnl_attr_put_strz */
/* Demangled: mnl_attr_put_strz */
int mnl_attr_put_strz(void);

/* Symbol: mnl_cb_run */
/* Demangled: mnl_cb_run */
int mnl_cb_run(void);

/* Symbol: mnl_nlmsg_portid_ok */
/* Demangled: mnl_nlmsg_portid_ok */
int mnl_nlmsg_portid_ok(void);

/* Symbol: mnl_nlmsg_get_payload */
/* Demangled: mnl_nlmsg_get_payload */
int mnl_nlmsg_get_payload(void);

/* Symbol: mnl_nlmsg_batch_head */
/* Demangled: mnl_nlmsg_batch_head */
int mnl_nlmsg_batch_head(void);

/* Symbol: mnl_attr_parse_nested */
/* Demangled: mnl_attr_parse_nested */
int mnl_attr_parse_nested(void);

/* Symbol: mnl_attr_parse_payload */
/* Demangled: mnl_attr_parse_payload */
int mnl_attr_parse_payload(void);

/* Symbol: mnl_attr_put_strz_check */
/* Demangled: mnl_attr_put_strz_check */
int mnl_attr_put_strz_check(void);

/* Symbol: mnl_attr_put_u16 */
/* Demangled: mnl_attr_put_u16 */
int mnl_attr_put_u16(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: mnl_nlmsg_put_header */
/* Demangled: mnl_nlmsg_put_header */
int mnl_nlmsg_put_header(void);

/* Symbol: mnl_attr_get_str */
/* Demangled: mnl_attr_get_str */
int mnl_attr_get_str(void);

/* Symbol: mnl_attr_put_str_check */
/* Demangled: mnl_attr_put_str_check */
int mnl_attr_put_str_check(void);

/* Symbol: mnl_nlmsg_next */
/* Demangled: mnl_nlmsg_next */
int mnl_nlmsg_next(void);

/* Symbol: mnl_nlmsg_seq_ok */
/* Demangled: mnl_nlmsg_seq_ok */
int mnl_nlmsg_seq_ok(void);

/* Symbol: mnl_nlmsg_fprintf */
/* Demangled: mnl_nlmsg_fprintf */
int mnl_nlmsg_fprintf(void);

/* Symbol: mnl_attr_type_valid */
/* Demangled: mnl_attr_type_valid */
int mnl_attr_type_valid(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: mnl_socket_fdopen */
/* Demangled: mnl_socket_fdopen */
int mnl_socket_fdopen(void);

/* Symbol: mnl_nlmsg_size */
/* Demangled: mnl_nlmsg_size */
int mnl_nlmsg_size(void);

/* Symbol: mnl_nlmsg_get_payload_offset */
/* Demangled: mnl_nlmsg_get_payload_offset */
int mnl_nlmsg_get_payload_offset(void);

/* Symbol: mnl_nlmsg_get_payload_tail */
/* Demangled: mnl_nlmsg_get_payload_tail */
int mnl_nlmsg_get_payload_tail(void);

/* Symbol: mnl_attr_get_u16 */
/* Demangled: mnl_attr_get_u16 */
int mnl_attr_get_u16(void);

/* Symbol: mnl_attr_put_check */
/* Demangled: mnl_attr_put_check */
int mnl_attr_put_check(void);

/* Symbol: mnl_attr_put_u32 */
/* Demangled: mnl_attr_put_u32 */
int mnl_attr_put_u32(void);

/* Symbol: mnl_attr_put_u64_check */
/* Demangled: mnl_attr_put_u64_check */
int mnl_attr_put_u64_check(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMNETLINK_V104_H */
