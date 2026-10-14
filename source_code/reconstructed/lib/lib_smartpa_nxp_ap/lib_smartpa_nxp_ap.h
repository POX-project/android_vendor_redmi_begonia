/*
 * Reverse-Engineered ABI Specification for: lib_smartpa_nxp_ap.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libtfadsp_parser_g7.so
 */

#ifndef BEGONIA_RE_LIB_SMARTPA_NXP_AP_H
#define BEGONIA_RE_LIB_SMARTPA_NXP_AP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: tfadsp_arsi_assign_lib_fp */
/* Demangled: tfadsp_arsi_assign_lib_fp */
int tfadsp_arsi_assign_lib_fp(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: tfadsp_arsi_get_lib_version */
/* Demangled: tfadsp_arsi_get_lib_version */
int tfadsp_arsi_get_lib_version(void);

/* Symbol: tfadsp_arsi_load_param */
/* Demangled: tfadsp_arsi_load_param */
int tfadsp_arsi_load_param(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: tfadsp_arsi_parsing_param_file_by_custom_info */
/* Demangled: tfadsp_arsi_parsing_param_file_by_custom_info */
int tfadsp_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: tfadsp_arsi_query_param_buf_size_by_custom_info */
/* Demangled: tfadsp_arsi_query_param_buf_size_by_custom_info */
int tfadsp_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: verfiy_tfa_output_device */
/* Demangled: verfiy_tfa_output_device */
int verfiy_tfa_output_device(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB_SMARTPA_NXP_AP_H */
