/*
 * Reverse-Engineered ABI Specification for: libwvkeybox.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libwvkeybox.so
 */

#ifndef BEGONIA_RE_LIBWVKEYBOX_H
#define BEGONIA_RE_LIBWVKEYBOX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: get_keybox_from_file */
/* Demangled: get_keybox_from_file */
int get_keybox_from_file(void);

/* Symbol: wv_check_keybox */
/* Demangled: wv_check_keybox */
int wv_check_keybox(void);

/* Symbol: get_device_name */
/* Demangled: get_device_name */
int get_device_name(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: get_project_code */
/* Demangled: get_project_code */
int get_project_code(void);

/* Symbol: save_keybox */
/* Demangled: save_keybox */
int save_keybox(void);

/* Symbol: wv_get_deviceid */
/* Demangled: wv_get_deviceid */
int wv_get_deviceid(void);

/* Symbol: wv_install_keybox */
/* Demangled: wv_install_keybox */
int wv_install_keybox(void);

/* Symbol: get_keybox_from_buffer */
/* Demangled: get_keybox_from_buffer */
int get_keybox_from_buffer(void);

/* Symbol: wv_get_key_data */
/* Demangled: wv_get_key_data */
int wv_get_key_data(void);

/* Symbol: wv_set_key_data */
/* Demangled: wv_set_key_data */
int wv_set_key_data(void);

/* Symbol: project_mapping */
/* Demangled: project_mapping */
extern void* project_mapping;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBWVKEYBOX_H */
