/*
 * Reverse-Engineered ABI Specification for: libaurisysdemo.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaurisysdemo.so
 */

#ifndef BEGONIA_RE_LIBAURISYSDEMO_H
#define BEGONIA_RE_LIBAURISYSDEMO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: demo_arsi_get_buf */
/* Demangled: demo_arsi_get_buf */
int demo_arsi_get_buf(void);

/* Symbol: demo_arsi_set_addr_value */
/* Demangled: demo_arsi_set_addr_value */
int demo_arsi_set_addr_value(void);

/* Symbol: demo_arsi_update_device */
/* Demangled: demo_arsi_update_device */
int demo_arsi_update_device(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: demo_arsi_set_debug_log_fp */
/* Demangled: demo_arsi_set_debug_log_fp */
int demo_arsi_set_debug_log_fp(void);

/* Symbol: demo_arsi_get_arsi_version */
/* Demangled: demo_arsi_get_arsi_version */
int demo_arsi_get_arsi_version(void);

/* Symbol: demo_arsi_set_buf */
/* Demangled: demo_arsi_set_buf */
int demo_arsi_set_buf(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: demo_arsi_reset_handler */
/* Demangled: demo_arsi_reset_handler */
int demo_arsi_reset_handler(void);

/* Symbol: demo_arsi_set_ul_mute */
/* Demangled: demo_arsi_set_ul_mute */
int demo_arsi_set_ul_mute(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: demo_arsi_query_max_debug_dump_buf_size */
/* Demangled: demo_arsi_query_max_debug_dump_buf_size */
int demo_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: demo_arsi_set_dl_enhance */
/* Demangled: demo_arsi_set_dl_enhance */
int demo_arsi_set_dl_enhance(void);

/* Symbol: demo_arsi_set_dl_mute */
/* Demangled: demo_arsi_set_dl_mute */
int demo_arsi_set_dl_mute(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: demo_arsi_get_addr_value */
/* Demangled: demo_arsi_get_addr_value */
int demo_arsi_get_addr_value(void);

/* Symbol: demo_arsi_get_key_value_pair */
/* Demangled: demo_arsi_get_key_value_pair */
int demo_arsi_get_key_value_pair(void);

/* Symbol: demo_arsi_parsing_param_file_by_custom_info */
/* Demangled: demo_arsi_parsing_param_file_by_custom_info */
int demo_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: demo_arsi_process_dl_buf */
/* Demangled: demo_arsi_process_dl_buf */
int demo_arsi_process_dl_buf(void);

/* Symbol: demo_arsi_process_ul_buf */
/* Demangled: demo_arsi_process_ul_buf */
int demo_arsi_process_ul_buf(void);

/* Symbol: demo_arsi_query_process_unit_bytes */
/* Demangled: demo_arsi_query_process_unit_bytes */
int demo_arsi_query_process_unit_bytes(void);

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: demo_arsi_assign_lib_fp */
/* Demangled: demo_arsi_assign_lib_fp */
int demo_arsi_assign_lib_fp(void);

/* Symbol: demo_arsi_create_handler */
/* Demangled: demo_arsi_create_handler */
int demo_arsi_create_handler(void);

/* Symbol: demo_arsi_destroy_handler */
/* Demangled: demo_arsi_destroy_handler */
int demo_arsi_destroy_handler(void);

/* Symbol: demo_arsi_load_param */
/* Demangled: demo_arsi_load_param */
int demo_arsi_load_param(void);

/* Symbol: demo_arsi_query_param_buf_size_by_custom_info */
/* Demangled: demo_arsi_query_param_buf_size_by_custom_info */
int demo_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: demo_arsi_query_working_buf_size */
/* Demangled: demo_arsi_query_working_buf_size */
int demo_arsi_query_working_buf_size(void);

/* Symbol: demo_arsi_set_key_value_pair */
/* Demangled: demo_arsi_set_key_value_pair */
int demo_arsi_set_key_value_pair(void);

/* Symbol: demo_arsi_set_ul_digital_gain */
/* Demangled: demo_arsi_set_ul_digital_gain */
int demo_arsi_set_ul_digital_gain(void);

/* Symbol: demo_arsi_set_ul_enhance */
/* Demangled: demo_arsi_set_ul_enhance */
int demo_arsi_set_ul_enhance(void);

/* Symbol: demo_arsi_update_param */
/* Demangled: demo_arsi_update_param */
int demo_arsi_update_param(void);

/* Symbol: demo_arsi_get_lib_version */
/* Demangled: demo_arsi_get_lib_version */
int demo_arsi_get_lib_version(void);

/* Symbol: demo_arsi_set_dl_digital_gain */
/* Demangled: demo_arsi_set_dl_digital_gain */
int demo_arsi_set_dl_digital_gain(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAURISYSDEMO_H */
