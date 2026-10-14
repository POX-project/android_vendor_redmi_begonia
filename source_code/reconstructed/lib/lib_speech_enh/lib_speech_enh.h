/*
 * Reverse-Engineered ABI Specification for: lib_speech_enh.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib_speech_enh.so
 */

#ifndef BEGONIA_RE_LIB_SPEECH_ENH_H
#define BEGONIA_RE_LIB_SPEECH_ENH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: mtk_arsi_create_handler */
/* Demangled: mtk_arsi_create_handler */
int mtk_arsi_create_handler(void);

/* Symbol: mtk_arsi_destroy_handler */
/* Demangled: mtk_arsi_destroy_handler */
int mtk_arsi_destroy_handler(void);

/* Symbol: mtk_arsi_set_ul_enhance */
/* Demangled: mtk_arsi_set_ul_enhance */
int mtk_arsi_set_ul_enhance(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: memcpy_fromBit16 */
/* Demangled: memcpy_fromBit16 */
int memcpy_fromBit16(void);

/* Symbol: memcpy_toBit16 */
/* Demangled: memcpy_toBit16 */
int memcpy_toBit16(void);

/* Symbol: mtk_arsi_get_key_value_pair */
/* Demangled: mtk_arsi_get_key_value_pair */
int mtk_arsi_get_key_value_pair(void);

/* Symbol: mtk_arsi_reset_handler */
/* Demangled: mtk_arsi_reset_handler */
int mtk_arsi_reset_handler(void);

/* Symbol: mtk_arsi_set_dl_mute */
/* Demangled: mtk_arsi_set_dl_mute */
int mtk_arsi_set_dl_mute(void);

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: mtk_arsi_parsing_param_file_by_custom_info */
/* Demangled: mtk_arsi_parsing_param_file_by_custom_info */
int mtk_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: mtk_arsi_get_addr_value */
/* Demangled: mtk_arsi_get_addr_value */
int mtk_arsi_get_addr_value(void);

/* Symbol: mtk_arsi_process_dl_buf */
/* Demangled: mtk_arsi_process_dl_buf */
int mtk_arsi_process_dl_buf(void);

/* Symbol: mtk_arsi_process_ul_buf */
/* Demangled: mtk_arsi_process_ul_buf */
int mtk_arsi_process_ul_buf(void);

/* Symbol: mtk_arsi_query_working_buf_size */
/* Demangled: mtk_arsi_query_working_buf_size */
int mtk_arsi_query_working_buf_size(void);

/* Symbol: mtk_arsi_set_ul_mute */
/* Demangled: mtk_arsi_set_ul_mute */
int mtk_arsi_set_ul_mute(void);

/* Symbol: mtk_arsi_update_device */
/* Demangled: mtk_arsi_update_device */
int mtk_arsi_update_device(void);

/* Symbol: Sph_Mic_IIR_In_default */
/* Demangled: Sph_Mic_IIR_In_default */
extern void* Sph_Mic_IIR_In_default;

/* Symbol: get_voip_category_path */
/* Demangled: get_voip_category_path */
int get_voip_category_path(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: Sph_DMNR_WB_default */
/* Demangled: Sph_DMNR_WB_default */
extern void* Sph_DMNR_WB_default;

/* Symbol: mtk_arsi_query_param_buf_size_by_custom_info */
/* Demangled: mtk_arsi_query_param_buf_size_by_custom_info */
int mtk_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: mtk_arsi_set_addr_value */
/* Demangled: mtk_arsi_set_addr_value */
int mtk_arsi_set_addr_value(void);

/* Symbol: mtk_arsi_set_debug_log_fp */
/* Demangled: mtk_arsi_set_debug_log_fp */
int mtk_arsi_set_debug_log_fp(void);

/* Symbol: mtk_arsi_set_key_value_pair */
/* Demangled: mtk_arsi_set_key_value_pair */
int mtk_arsi_set_key_value_pair(void);

/* Symbol: mtk_arsi_set_ul_digital_gain */
/* Demangled: mtk_arsi_set_ul_digital_gain */
int mtk_arsi_set_ul_digital_gain(void);

/* Symbol: Sph_DMNR_NB_default */
/* Demangled: Sph_DMNR_NB_default */
extern void* Sph_DMNR_NB_default;

/* Symbol: enh_debug_log */
/* Demangled: enh_debug_log */
extern void* enh_debug_log;

/* Symbol: mtk_arsi_get_lib_version */
/* Demangled: mtk_arsi_get_lib_version */
int mtk_arsi_get_lib_version(void);

/* Symbol: mtk_arsi_update_param */
/* Demangled: mtk_arsi_update_param */
int mtk_arsi_update_param(void);

/* Symbol: mtk_sp_team_arsi_assign_lib_fp */
/* Demangled: mtk_sp_team_arsi_assign_lib_fp */
int mtk_sp_team_arsi_assign_lib_fp(void);

/* Symbol: Sph_IIR_default */
/* Demangled: Sph_IIR_default */
extern void* Sph_IIR_default;

/* Symbol: mtk_arsi_query_max_debug_dump_buf_size */
/* Demangled: mtk_arsi_query_max_debug_dump_buf_size */
int mtk_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: mtk_arsi_set_dl_enhance */
/* Demangled: mtk_arsi_set_dl_enhance */
int mtk_arsi_set_dl_enhance(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: mtk_arsi_set_dl_digital_gain */
/* Demangled: mtk_arsi_set_dl_digital_gain */
int mtk_arsi_set_dl_digital_gain(void);

/* Symbol: Sph_DMNR_SWB_default */
/* Demangled: Sph_DMNR_SWB_default */
extern void* Sph_DMNR_SWB_default;

/* Symbol: get_record_category_path */
/* Demangled: get_record_category_path */
int get_record_category_path(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: getSceneName */
/* Demangled: getSceneName */
int getSceneName(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB_SPEECH_ENH_H */
