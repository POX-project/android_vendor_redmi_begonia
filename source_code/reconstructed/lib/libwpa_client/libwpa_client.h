/*
 * Reverse-Engineered ABI Specification for: libwpa_client.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwpa_client.so
 */

#ifndef BEGONIA_RE_LIBWPA_CLIENT_H
#define BEGONIA_RE_LIBWPA_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: os_get_time */
/* Demangled: os_get_time */
int os_get_time(void);

/* Symbol: os_program_deinit */
/* Demangled: os_program_deinit */
int os_program_deinit(void);

/* Symbol: os_readfile */
/* Demangled: os_readfile */
int os_readfile(void);

/* Symbol: os_unsetenv */
/* Demangled: os_unsetenv */
int os_unsetenv(void);

/* Symbol: os_get_reltime */
/* Demangled: os_get_reltime */
int os_get_reltime(void);

/* Symbol: os_sleep */
/* Demangled: os_sleep */
int os_sleep(void);

/* Symbol: os_exec */
/* Demangled: os_exec */
int os_exec(void);

/* Symbol: os_memcmp_const */
/* Demangled: os_memcmp_const */
int os_memcmp_const(void);

/* Symbol: os_random */
/* Demangled: os_random */
int os_random(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: wpa_ctrl_close */
/* Demangled: wpa_ctrl_close */
int wpa_ctrl_close(void);

/* Symbol: wpa_ctrl_open */
/* Demangled: wpa_ctrl_open */
int wpa_ctrl_open(void);

/* Symbol: os_get_random */
/* Demangled: os_get_random */
int os_get_random(void);

/* Symbol: os_zalloc */
/* Demangled: os_zalloc */
int os_zalloc(void);

/* Symbol: wpa_ctrl_pending */
/* Demangled: wpa_ctrl_pending */
int wpa_ctrl_pending(void);

/* Symbol: os_fdatasync */
/* Demangled: os_fdatasync */
int os_fdatasync(void);

/* Symbol: os_gmtime */
/* Demangled: os_gmtime */
int os_gmtime(void);

/* Symbol: os_program_init */
/* Demangled: os_program_init */
int os_program_init(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: os_memdup */
/* Demangled: os_memdup */
int os_memdup(void);

/* Symbol: wpa_ctrl_attach */
/* Demangled: wpa_ctrl_attach */
int wpa_ctrl_attach(void);

/* Symbol: wpa_ctrl_get_fd */
/* Demangled: wpa_ctrl_get_fd */
int wpa_ctrl_get_fd(void);

/* Symbol: wpa_ctrl_request */
/* Demangled: wpa_ctrl_request */
int wpa_ctrl_request(void);

/* Symbol: os_setenv */
/* Demangled: os_setenv */
int os_setenv(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: wpa_ctrl_cleanup */
/* Demangled: wpa_ctrl_cleanup */
int wpa_ctrl_cleanup(void);

/* Symbol: wpa_ctrl_open2 */
/* Demangled: wpa_ctrl_open2 */
int wpa_ctrl_open2(void);

/* Symbol: wpa_ctrl_recv */
/* Demangled: wpa_ctrl_recv */
int wpa_ctrl_recv(void);

/* Symbol: os_daemonize */
/* Demangled: os_daemonize */
int os_daemonize(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: os_file_exists */
/* Demangled: os_file_exists */
int os_file_exists(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: os_daemonize_terminate */
/* Demangled: os_daemonize_terminate */
int os_daemonize_terminate(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: os_strlcpy */
/* Demangled: os_strlcpy */
int os_strlcpy(void);

/* Symbol: wpa_ctrl_detach */
/* Demangled: wpa_ctrl_detach */
int wpa_ctrl_detach(void);

/* Symbol: os_mktime */
/* Demangled: os_mktime */
int os_mktime(void);

/* Symbol: os_rel2abs_path */
/* Demangled: os_rel2abs_path */
int os_rel2abs_path(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWPA_CLIENT_H */
