/*
 * Reverse-Engineered ABI Specification for: libaudioloudc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudioloudc.so
 */

#ifndef BEGONIA_RE_LIBAUDIOLOUDC_H
#define BEGONIA_RE_LIBAUDIOLOUDC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: audioloud_arsi_set_addr_value */
/* Demangled: audioloud_arsi_set_addr_value */
int audioloud_arsi_set_addr_value(void);

/* Symbol: audioloud_arsi_set_debug_log_fp */
/* Demangled: audioloud_arsi_set_debug_log_fp */
int audioloud_arsi_set_debug_log_fp(void);

/* Symbol: get_filter_bydevice */
/* Demangled: get_filter_bydevice */
int get_filter_bydevice(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: audioloud_arsi_create_handler */
/* Demangled: audioloud_arsi_create_handler */
int audioloud_arsi_create_handler(void);

/* Symbol: audioloud_arsi_destroy_handler */
/* Demangled: audioloud_arsi_destroy_handler */
int audioloud_arsi_destroy_handler(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: get_samplingrate_index */
/* Demangled: get_samplingrate_index */
int get_samplingrate_index(void);

/* Symbol: lib_update_filterparam */
/* Demangled: lib_update_filterparam */
int lib_update_filterparam(void);

/* Symbol: audioloud_arsi_get_lib_version */
/* Demangled: audioloud_arsi_get_lib_version */
int audioloud_arsi_get_lib_version(void);

/* Symbol: audioloud_arsi_query_param_buf_size_by_custom_info */
/* Demangled: audioloud_arsi_query_param_buf_size_by_custom_info */
int audioloud_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: audioloud_arsi_update_device */
/* Demangled: audioloud_arsi_update_device */
int audioloud_arsi_update_device(void);

/* Symbol: mFilterType */
/* Demangled: mFilterType */
extern void* mFilterType;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: audioloud_arsi_get_key_value_pair */
/* Demangled: audioloud_arsi_get_key_value_pair */
int audioloud_arsi_get_key_value_pair(void);

/* Symbol: audioloud_arsi_query_process_unit_bytes */
/* Demangled: audioloud_arsi_query_process_unit_bytes */
int audioloud_arsi_query_process_unit_bytes(void);

/* Symbol: audioloud_arsi_set_dl_mute */
/* Demangled: audioloud_arsi_set_dl_mute */
int audioloud_arsi_set_dl_mute(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: audioloud_arsi_get_addr_value */
/* Demangled: audioloud_arsi_get_addr_value */
int audioloud_arsi_get_addr_value(void);

/* Symbol: audioloud_arsi_parsing_param_file_by_custom_info */
/* Demangled: audioloud_arsi_parsing_param_file_by_custom_info */
int audioloud_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: audioloud_arsi_process_dl_buf */
/* Demangled: audioloud_arsi_process_dl_buf */
int audioloud_arsi_process_dl_buf(void);

/* Symbol: audioloud_arsi_query_working_buf_size */
/* Demangled: audioloud_arsi_query_working_buf_size */
int audioloud_arsi_query_working_buf_size(void);

/* Symbol: audioloud_arsi_reset_handler */
/* Demangled: audioloud_arsi_reset_handler */
int audioloud_arsi_reset_handler(void);

/* Symbol: audioloud_arsi_set_dl_digital_gain */
/* Demangled: audioloud_arsi_set_dl_digital_gain */
int audioloud_arsi_set_dl_digital_gain(void);

/* Symbol: audioloud_arsi_set_dl_enhance */
/* Demangled: audioloud_arsi_set_dl_enhance */
int audioloud_arsi_set_dl_enhance(void);

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: audioloud_arsi_process_ul_buf */
/* Demangled: audioloud_arsi_process_ul_buf */
int audioloud_arsi_process_ul_buf(void);

/* Symbol: audioloud_arsi_set_key_value_pair */
/* Demangled: audioloud_arsi_set_key_value_pair */
int audioloud_arsi_set_key_value_pair(void);

/* Symbol: audioloud_arsi_set_ul_digital_gain */
/* Demangled: audioloud_arsi_set_ul_digital_gain */
int audioloud_arsi_set_ul_digital_gain(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: audioloud_arsi_set_ul_mute */
/* Demangled: audioloud_arsi_set_ul_mute */
int audioloud_arsi_set_ul_mute(void);

/* Symbol: convert_filter_type */
/* Demangled: convert_filter_type */
int convert_filter_type(void);

/* Symbol: lib_switch_drcparam */
/* Demangled: lib_switch_drcparam */
int lib_switch_drcparam(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: audioloud_arsi_set_ul_enhance */
/* Demangled: audioloud_arsi_set_ul_enhance */
int audioloud_arsi_set_ul_enhance(void);

/* Symbol: audioloud_arsi_update_param */
/* Demangled: audioloud_arsi_update_param */
int audioloud_arsi_update_param(void);

/* Symbol: set_lib_parameter */
/* Demangled: set_lib_parameter */
int set_lib_parameter(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOLOUDC_H */
