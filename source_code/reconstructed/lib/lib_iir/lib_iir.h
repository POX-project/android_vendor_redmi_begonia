/*
 * Reverse-Engineered ABI Specification for: lib_iir.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib_iir.so
 */

#ifndef BEGONIA_RE_LIB_IIR_H
#define BEGONIA_RE_LIB_IIR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ENH_API_Get_FE_Memory */
/* Demangled: ENH_API_Get_FE_Memory */
int ENH_API_Get_FE_Memory(void);

/* Symbol: ENH_API_Get_SCH_Memory */
/* Demangled: ENH_API_Get_SCH_Memory */
int ENH_API_Get_SCH_Memory(void);

/* Symbol: iir_arsi_create_handler */
/* Demangled: iir_arsi_create_handler */
int iir_arsi_create_handler(void);

/* Symbol: IIR_64 */
/* Demangled: IIR_64 */
int IIR_64(void);

/* Symbol: IIR_allpass_96Neon24 */
/* Demangled: IIR_allpass_96Neon24 */
int IIR_allpass_96Neon24(void);

/* Symbol: extract_parm */
/* Demangled: extract_parm */
int extract_parm(void);

/* Symbol: iir_arsi_query_param_buf_size */
/* Demangled: iir_arsi_query_param_buf_size */
int iir_arsi_query_param_buf_size(void);

/* Symbol: iir_arsi_set_ul_mute */
/* Demangled: iir_arsi_set_ul_mute */
int iir_arsi_set_ul_mute(void);

/* Symbol: IIR_a2_NB */
/* Demangled: IIR_a2_NB */
extern void* IIR_a2_NB;

/* Symbol: IIR_b2_192k */
/* Demangled: IIR_b2_192k */
extern void* IIR_b2_192k;

/* Symbol: Show_param */
/* Demangled: Show_param */
int Show_param(void);

/* Symbol: iir_arsi_get_lib_version */
/* Demangled: iir_arsi_get_lib_version */
int iir_arsi_get_lib_version(void);

/* Symbol: iir_arsi_reset_handler */
/* Demangled: iir_arsi_reset_handler */
int iir_arsi_reset_handler(void);

/* Symbol: DataCopy_1in */
/* Demangled: DataCopy_1in */
int DataCopy_1in(void);

/* Symbol: iir_arsi_set_debug_log_fp */
/* Demangled: iir_arsi_set_debug_log_fp */
int iir_arsi_set_debug_log_fp(void);

/* Symbol: iir_arsi_set_dl_mute */
/* Demangled: iir_arsi_set_dl_mute */
int iir_arsi_set_dl_mute(void);

/* Symbol: IIR_b1_192k */
/* Demangled: IIR_b1_192k */
extern void* IIR_b1_192k;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: Aurisys_dump */
/* Demangled: Aurisys_dump */
int Aurisys_dump(void);

/* Symbol: CommLog_Parser */
/* Demangled: CommLog_Parser */
int CommLog_Parser(void);

/* Symbol: ENH_API_FE_Alloc */
/* Demangled: ENH_API_FE_Alloc */
int ENH_API_FE_Alloc(void);

/* Symbol: ENH_API_Init_FE_arsi */
/* Demangled: ENH_API_Init_FE_arsi */
int ENH_API_Init_FE_arsi(void);

/* Symbol: iir_arsi_set_ul_digital_gain */
/* Demangled: iir_arsi_set_ul_digital_gain */
int iir_arsi_set_ul_digital_gain(void);

/* Symbol: iir_arsi_update_device */
/* Demangled: iir_arsi_update_device */
int iir_arsi_update_device(void);

/* Symbol: IIR_b1_WB */
/* Demangled: IIR_b1_WB */
extern void* IIR_b1_WB;

/* Symbol: UL_FrontEnd_16k_arsi */
/* Demangled: UL_FrontEnd_16k_arsi */
int UL_FrontEnd_16k_arsi(void);

/* Symbol: UL_FrontEnd_96k */
/* Demangled: UL_FrontEnd_96k */
int UL_FrontEnd_96k(void);

/* Symbol: iir_arsi_set_addr_value */
/* Demangled: iir_arsi_set_addr_value */
int iir_arsi_set_addr_value(void);

/* Symbol: Parse_from_EPL */
/* Demangled: Parse_from_EPL */
int Parse_from_EPL(void);

/* Symbol: close_files */
/* Demangled: close_files */
int close_files(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: iir_arsi_set_key_value_pair */
/* Demangled: iir_arsi_set_key_value_pair */
int iir_arsi_set_key_value_pair(void);

/* Symbol: IIR_b1_NB */
/* Demangled: IIR_b1_NB */
extern void* IIR_b1_NB;

/* Symbol: IIR_b2_96k */
/* Demangled: IIR_b2_96k */
extern void* IIR_b2_96k;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: SP_ENH_ID */
/* Demangled: SP_ENH_ID */
extern void* SP_ENH_ID;

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: iir_arsi_set_dl_enhance */
/* Demangled: iir_arsi_set_dl_enhance */
int iir_arsi_set_dl_enhance(void);

/* Symbol: parse_wave_files */
/* Demangled: parse_wave_files */
int parse_wave_files(void);

/* Symbol: sph_enh_ctrl_parms_prop */
/* Demangled: sph_enh_ctrl_parms_prop */
extern void* sph_enh_ctrl_parms_prop;

/* Symbol: UL_FrontEnd_32k */
/* Demangled: UL_FrontEnd_32k */
int UL_FrontEnd_32k(void);

/* Symbol: UL_FrontEnd_48k_arsi */
/* Demangled: UL_FrontEnd_48k_arsi */
int UL_FrontEnd_48k_arsi(void);

/* Symbol: iir_arsi_get_addr_value */
/* Demangled: iir_arsi_get_addr_value */
int iir_arsi_get_addr_value(void);

/* Symbol: IIR_64_arsi */
/* Demangled: IIR_64_arsi */
int IIR_64_arsi(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: IIR_a1_WB */
/* Demangled: IIR_a1_WB */
extern void* IIR_a1_WB;

/* Symbol: IIR_b2_48k */
/* Demangled: IIR_b2_48k */
extern void* IIR_b2_48k;

/* Symbol: UL_FrontEnd_init */
/* Demangled: UL_FrontEnd_init */
int UL_FrontEnd_init(void);

/* Symbol: EPL_Common_Log_arsi */
/* Demangled: EPL_Common_Log_arsi */
int EPL_Common_Log_arsi(void);

/* Symbol: IIR_allpass */
/* Demangled: IIR_allpass */
int IIR_allpass(void);

/* Symbol: IIR_allpass_96Neon */
/* Demangled: IIR_allpass_96Neon */
int IIR_allpass_96Neon(void);

/* Symbol: IIR_allpass_stereo192 */
/* Demangled: IIR_allpass_stereo192 */
int IIR_allpass_stereo192(void);

/* Symbol: IIR_b2_32k */
/* Demangled: IIR_b2_32k */
extern void* IIR_b2_32k;

/* Symbol: extract_arsi_parm */
/* Demangled: extract_arsi_parm */
int extract_arsi_parm(void);

/* Symbol: sqrt_fr1x16 */
/* Demangled: sqrt_fr1x16 */
int sqrt_fr1x16(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: IIR_64i */
/* Demangled: IIR_64i */
int IIR_64i(void);

/* Symbol: IIR_a1_NB */
/* Demangled: IIR_a1_NB */
extern void* IIR_a1_NB;

/* Symbol: IIR_b1_96k */
/* Demangled: IIR_b1_96k */
extern void* IIR_b1_96k;

/* Symbol: iir_arsi_destroy_handler */
/* Demangled: iir_arsi_destroy_handler */
int iir_arsi_destroy_handler(void);

/* Symbol: iir_arsi_get_key_value_pair */
/* Demangled: iir_arsi_get_key_value_pair */
int iir_arsi_get_key_value_pair(void);

/* Symbol: IIR_allpass_96Neon16 */
/* Demangled: IIR_allpass_96Neon16 */
int IIR_allpass_96Neon16(void);

/* Symbol: IIR_allpass_stereo */
/* Demangled: IIR_allpass_stereo */
int IIR_allpass_stereo(void);

/* Symbol: aris_API_Init_FE */
/* Demangled: aris_API_Init_FE */
int aris_API_Init_FE(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: iir_arsi_assign_lib_fp */
/* Demangled: iir_arsi_assign_lib_fp */
int iir_arsi_assign_lib_fp(void);

/* Symbol: iir_arsi_process_dl_buf */
/* Demangled: iir_arsi_process_dl_buf */
int iir_arsi_process_dl_buf(void);

/* Symbol: iir_arsi_query_working_buf_size */
/* Demangled: iir_arsi_query_working_buf_size */
int iir_arsi_query_working_buf_size(void);

/* Symbol: iir_arsi_set_ul_enhance */
/* Demangled: iir_arsi_set_ul_enhance */
int iir_arsi_set_ul_enhance(void);

/* Symbol: IIR_a2_32k */
/* Demangled: IIR_a2_32k */
extern void* IIR_a2_32k;

/* Symbol: IIR_b1_48k */
/* Demangled: IIR_b1_48k */
extern void* IIR_b1_48k;

/* Symbol: iir_arsi_process_ul_buf */
/* Demangled: iir_arsi_process_ul_buf */
int iir_arsi_process_ul_buf(void);

/* Symbol: IIR_32k */
/* Demangled: IIR_32k */
int IIR_32k(void);

/* Symbol: IIR_b1_32k */
/* Demangled: IIR_b1_32k */
extern void* IIR_b1_32k;

/* Symbol: IIR_b2_WB */
/* Demangled: IIR_b2_WB */
extern void* IIR_b2_WB;

/* Symbol: arsi_parsing_param_file_fake */
/* Demangled: arsi_parsing_param_file_fake */
int arsi_parsing_param_file_fake(void);

/* Symbol: open_files */
/* Demangled: open_files */
int open_files(void);

/* Symbol: save_wave_header */
/* Demangled: save_wave_header */
int save_wave_header(void);

/* Symbol: iir_arsi_parsing_param_file */
/* Demangled: iir_arsi_parsing_param_file */
int iir_arsi_parsing_param_file(void);

/* Symbol: IIR_allpass_stereoInt */
/* Demangled: IIR_allpass_stereoInt */
int IIR_allpass_stereoInt(void);

/* Symbol: IIR_64i_arsi */
/* Demangled: IIR_64i_arsi */
int IIR_64i_arsi(void);

/* Symbol: IIR_allpass96k */
/* Demangled: IIR_allpass96k */
int IIR_allpass96k(void);

/* Symbol: IIR_b2_NB */
/* Demangled: IIR_b2_NB */
extern void* IIR_b2_NB;

/* Symbol: transf_sph_enh_ctrl_parms */
/* Demangled: transf_sph_enh_ctrl_parms */
int transf_sph_enh_ctrl_parms(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: iir_arsi_query_max_debug_dump_buf_size */
/* Demangled: iir_arsi_query_max_debug_dump_buf_size */
int iir_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: UL_FrontEnd_init_arsi */
/* Demangled: UL_FrontEnd_init_arsi */
int UL_FrontEnd_init_arsi(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: iir_arsi_set_dl_digital_gain */
/* Demangled: iir_arsi_set_dl_digital_gain */
int iir_arsi_set_dl_digital_gain(void);

/* Symbol: IIR_a1_32k */
/* Demangled: IIR_a1_32k */
extern void* IIR_a1_32k;

/* Symbol: UL_FrontEnd_192k */
/* Demangled: UL_FrontEnd_192k */
int UL_FrontEnd_192k(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: iir_arsi_update_param */
/* Demangled: iir_arsi_update_param */
int iir_arsi_update_param(void);

/* Symbol: IIR_a2_WB */
/* Demangled: IIR_a2_WB */
extern void* IIR_a2_WB;

/* Symbol: read_sph_enh_ctrl_parms */
/* Demangled: read_sph_enh_ctrl_parms */
int read_sph_enh_ctrl_parms(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB_IIR_H */
