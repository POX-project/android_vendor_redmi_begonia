/*
 * Reverse-Engineered ABI Specification for: libbluetooth_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbluetooth_mtk.so
 */

#ifndef BEGONIA_RE_LIBBLUETOOTH_MTK_H
#define BEGONIA_RE_LIBBLUETOOTH_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: store_bdaddr */
/* Demangled: store_bdaddr */
int store_bdaddr(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: parse_fw_cfg_para */
/* Demangled: parse_fw_cfg_para */
int parse_fw_cfg_para(void);

/* Symbol: clean_resource */
/* Demangled: clean_resource */
int clean_resource(void);

/* Symbol: set_callbacks */
/* Demangled: set_callbacks */
int set_callbacks(void);

/* Symbol: GetRandomByte */
/* Demangled: GetRandomByte */
int GetRandomByte(void);

/* Symbol: _parse_para */
/* Demangled: _parse_para */
int _parse_para(void);

/* Symbol: bt_init_preload_script_connac */
/* Demangled: bt_init_preload_script_connac */
extern void* bt_init_preload_script_connac;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: mtk_set_psm_control */
/* Demangled: mtk_set_psm_control */
int mtk_set_psm_control(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: BT_InitDevice */
/* Demangled: BT_InitDevice */
int BT_InitDevice(void);

/* Symbol: init_uart */
/* Demangled: init_uart */
int init_uart(void);

/* Symbol: mtk_prepare_off */
/* Demangled: mtk_prepare_off */
int mtk_prepare_off(void);

/* Symbol: wait_connsys_ready */
/* Demangled: wait_connsys_ready */
int wait_connsys_ready(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: mtk_fw_cfg */
/* Demangled: mtk_fw_cfg */
int mtk_fw_cfg(void);

/* Symbol: bt_init_preload_script_after_6893 */
/* Demangled: bt_init_preload_script_after_6893 */
extern void* bt_init_preload_script_after_6893;

/* Symbol: process_cmd_rsp */
/* Demangled: process_cmd_rsp */
int process_cmd_rsp(void);

/* Symbol: close_uart */
/* Demangled: close_uart */
int close_uart(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: bt_init_preload_script_6630 */
/* Demangled: bt_init_preload_script_6630 */
extern void* bt_init_preload_script_6630;

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _parse_cmd */
/* Demangled: _parse_cmd */
int _parse_cmd(void);

/* Symbol: bt_vnd_cbacks */
/* Demangled: bt_vnd_cbacks */
extern void* bt_vnd_cbacks;

/* Symbol: BT_DeinitDevice */
/* Demangled: BT_DeinitDevice */
int BT_DeinitDevice(void);

/* Symbol: btinit */
/* Demangled: btinit */
extern void* btinit;

/* Symbol: notify_thread_exit */
/* Demangled: notify_thread_exit */
int notify_thread_exit(void);

/* Symbol: bt_init_preload_script_6628 */
/* Demangled: bt_init_preload_script_6628 */
extern void* bt_init_preload_script_6628;

/* Symbol: bt_init_preload_script_6632 */
/* Demangled: bt_init_preload_script_6632 */
extern void* bt_init_preload_script_6632;

/* Symbol: BT_Cleanup */
/* Demangled: BT_Cleanup */
int BT_Cleanup(void);

/* Symbol: clean_callbacks */
/* Demangled: clean_callbacks */
int clean_callbacks(void);

/* Symbol: print_nv_data */
/* Demangled: print_nv_data */
int print_nv_data(void);

/* Symbol: GORM_FW_Init_Thread */
/* Demangled: GORM_FW_Init_Thread */
int GORM_FW_Init_Thread(void);

/* Symbol: btinit_ctrl */
/* Demangled: btinit_ctrl */
extern void* btinit_ctrl;

/* Symbol: bt_init_preload_script_consys */
/* Demangled: bt_init_preload_script_consys */
extern void* bt_init_preload_script_consys;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBLUETOOTH_MTK_H */
