/*
 * Reverse-Engineered ABI Specification for: libfvaudio.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libfvparser.so
 */

#ifndef BEGONIA_RE_LIBFVAUDIO_H
#define BEGONIA_RE_LIBFVAUDIO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Decrypt_process */
/* Demangled: Decrypt_process */
int Decrypt_process(void);

/* Symbol: FV_arsi_assign_lib_fp */
/* Demangled: FV_arsi_assign_lib_fp */
int FV_arsi_assign_lib_fp(void);

/* Symbol: FV_arsi_create_handler */
/* Demangled: FV_arsi_create_handler */
int FV_arsi_create_handler(void);

/* Symbol: FV_arsi_destroy_handler */
/* Demangled: FV_arsi_destroy_handler */
int FV_arsi_destroy_handler(void);

/* Symbol: FV_arsi_get_addr_value */
/* Demangled: FV_arsi_get_addr_value */
int FV_arsi_get_addr_value(void);

/* Symbol: FV_arsi_get_key_value_pair */
/* Demangled: FV_arsi_get_key_value_pair */
int FV_arsi_get_key_value_pair(void);

/* Symbol: FV_arsi_get_lib_version */
/* Demangled: FV_arsi_get_lib_version */
int FV_arsi_get_lib_version(void);

/* Symbol: FV_arsi_load_param */
/* Demangled: FV_arsi_load_param */
int FV_arsi_load_param(void);

/* Symbol: FV_arsi_parsing_param_file_by_custom_info */
/* Demangled: FV_arsi_parsing_param_file_by_custom_info */
int FV_arsi_parsing_param_file_by_custom_info(void);

/* Symbol: FV_arsi_process_dl_buf */
/* Demangled: FV_arsi_process_dl_buf */
int FV_arsi_process_dl_buf(void);

/* Symbol: FV_arsi_process_ul_buf */
/* Demangled: FV_arsi_process_ul_buf */
int FV_arsi_process_ul_buf(void);

/* Symbol: FV_arsi_query_max_debug_dump_buf_size */
/* Demangled: FV_arsi_query_max_debug_dump_buf_size */
int FV_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: FV_arsi_query_param_buf_size_by_custom_info */
/* Demangled: FV_arsi_query_param_buf_size_by_custom_info */
int FV_arsi_query_param_buf_size_by_custom_info(void);

/* Symbol: FV_arsi_query_working_buf_size */
/* Demangled: FV_arsi_query_working_buf_size */
int FV_arsi_query_working_buf_size(void);

/* Symbol: FV_arsi_reset_handler */
/* Demangled: FV_arsi_reset_handler */
int FV_arsi_reset_handler(void);

/* Symbol: FV_arsi_set_addr_value */
/* Demangled: FV_arsi_set_addr_value */
int FV_arsi_set_addr_value(void);

/* Symbol: FV_arsi_set_debug_log_fp */
/* Demangled: FV_arsi_set_debug_log_fp */
int FV_arsi_set_debug_log_fp(void);

/* Symbol: FV_arsi_set_dl_digital_gain */
/* Demangled: FV_arsi_set_dl_digital_gain */
int FV_arsi_set_dl_digital_gain(void);

/* Symbol: FV_arsi_set_dl_enhance */
/* Demangled: FV_arsi_set_dl_enhance */
int FV_arsi_set_dl_enhance(void);

/* Symbol: FV_arsi_set_dl_mute */
/* Demangled: FV_arsi_set_dl_mute */
int FV_arsi_set_dl_mute(void);

/* Symbol: FV_arsi_set_key_value_pair */
/* Demangled: FV_arsi_set_key_value_pair */
int FV_arsi_set_key_value_pair(void);

/* Symbol: FV_arsi_set_ul_digital_gain */
/* Demangled: FV_arsi_set_ul_digital_gain */
int FV_arsi_set_ul_digital_gain(void);

/* Symbol: FV_arsi_set_ul_enhance */
/* Demangled: FV_arsi_set_ul_enhance */
int FV_arsi_set_ul_enhance(void);

/* Symbol: FV_arsi_set_ul_mute */
/* Demangled: FV_arsi_set_ul_mute */
int FV_arsi_set_ul_mute(void);

/* Symbol: FV_arsi_update_device */
/* Demangled: FV_arsi_update_device */
int FV_arsi_update_device(void);

/* Symbol: FV_arsi_update_param */
/* Demangled: FV_arsi_update_param */
int FV_arsi_update_param(void);

/* Symbol: SAMRecvBatch_Default */
/* Demangled: SAMRecvBatch_Default */
extern void* SAMRecvBatch_Default;

/* Symbol: SAMSendBatch_Default */
/* Demangled: SAMSendBatch_Default */
extern void* SAMSendBatch_Default;

/* Symbol: arsi2fm_mode_id */
/* Demangled: arsi2fm_mode_id */
extern void* arsi2fm_mode_id;

/* Symbol: aurisys_dbg_dump */
/* Demangled: aurisys_dbg_dump */
int aurisys_dbg_dump(void);

/* Symbol: aurisys_dbg_dump_init */
/* Demangled: aurisys_dbg_dump_init */
int aurisys_dbg_dump_init(void);

/* Symbol: debug_stop */
/* Demangled: debug_stop */
int debug_stop(void);

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: g_arsi_debug_log */
/* Demangled: g_arsi_debug_log */
extern void* g_arsi_debug_log;

/* Symbol: g_param_buf */
/* Demangled: g_param_buf */
extern void* g_param_buf;

/* Symbol: g_param_buf_size */
/* Demangled: g_param_buf_size */
extern void* g_param_buf_size;

/* Symbol: Decrypt */
/* Demangled: Decrypt */
int Decrypt(void);

/* Symbol: Encrypt */
/* Demangled: Encrypt */
int Encrypt(void);

/* Symbol: HMAC_Ex */
/* Demangled: HMAC_Ex */
int HMAC_Ex(void);

/* Symbol: Scramble */
/* Demangled: Scramble */
int Scramble(void);

/* Symbol: SHA_1_Ex */
/* Demangled: SHA_1_Ex */
int SHA_1_Ex(void);

/* Symbol: crc16_ccitt */
/* Demangled: crc16_ccitt */
int crc16_ccitt(void);

/* Symbol: crc_fp */
/* Demangled: crc_fp */
extern void* crc_fp;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBFVAUDIO_H */
