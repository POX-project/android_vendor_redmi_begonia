/*
 * Reverse-Engineered ABI Specification for: libudf.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libudf.so
 */

#ifndef BEGONIA_RE_LIBUDF_H
#define BEGONIA_RE_LIBUDF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ubrd_btrace_remove */
/* Demangled: ubrd_btrace_remove */
int ubrd_btrace_remove(void);

/* Symbol: ubrd_init */
/* Demangled: ubrd_init */
int ubrd_init(void);

/* Symbol: async_safe_fatal_va_list */
/* Demangled: async_safe_fatal_va_list */
int async_safe_fatal_va_list(void);

/* Symbol: ubrd_btrace_remove_nolock */
/* Demangled: ubrd_btrace_remove_nolock */
int ubrd_btrace_remove_nolock(void);

/* Symbol: async_safe_format_buffer_va_list */
/* Demangled: async_safe_format_buffer_va_list */
int async_safe_format_buffer_va_list(void);

/* Symbol: mmap_debug_initialize */
/* Demangled: mmap_debug_initialize */
int mmap_debug_initialize(void);

/* Symbol: socket */
/* Demangled: socket */
int socket(void);

/* Symbol: async_safe_format_buffer */
/* Demangled: async_safe_format_buffer */
int async_safe_format_buffer(void);

/* Symbol: async_safe_format_fd */
/* Demangled: async_safe_format_fd */
int async_safe_format_fd(void);

/* Symbol: async_safe_format_log */
/* Demangled: async_safe_format_log */
int async_safe_format_log(void);

/* Symbol: ubrd_btrace_record */
/* Demangled: ubrd_btrace_record */
int ubrd_btrace_record(void);

/* Symbol: accept4 */
/* Demangled: accept4 */
int accept4(void);

/* Symbol: fdleak_remove_backtrace */
/* Demangled: fdleak_remove_backtrace */
int fdleak_remove_backtrace(void);

/* Symbol: socketpair */
/* Demangled: socketpair */
int socketpair(void);

/* Symbol: __openat */
/* Demangled: __openat */
int fn___openat(void) __asm__("__openat");

/* Symbol: android_fdsan_close_with_tag */
/* Demangled: android_fdsan_close_with_tag */
int android_fdsan_close_with_tag(void);

/* Symbol: fdleak_record_backtrace_safe */
/* Demangled: fdleak_record_backtrace_safe */
int fdleak_record_backtrace_safe(void);

/* Symbol: async_safe_fatal_no_abort */
/* Demangled: async_safe_fatal_no_abort */
int async_safe_fatal_no_abort(void);

/* Symbol: async_safe_write_log */
/* Demangled: async_safe_write_log */
int async_safe_write_log(void);

/* Symbol: libudf_unwind_backtrace */
/* Demangled: libudf_unwind_backtrace */
int libudf_unwind_backtrace(void);

/* Symbol: fdleak_debug_initialize */
/* Demangled: fdleak_debug_initialize */
int fdleak_debug_initialize(void);

/* Symbol: async_safe_format_log_va_list */
/* Demangled: async_safe_format_log_va_list */
int async_safe_format_log_va_list(void);

/* Symbol: epoll_create1 */
/* Demangled: epoll_create1 */
int epoll_create1(void);

/* Symbol: async_safe_format_fd_va_list */
/* Demangled: async_safe_format_fd_va_list */
int async_safe_format_fd_va_list(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBUDF_H */
