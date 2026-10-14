/*
 * Reverse-Engineered ABI Specification for: wmt_chrdev_wifi.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: wmt_chrdev_wifi.ko
 */

#ifndef BEGONIA_RE_WMT_CHRDEV_WIFI_KO_H
#define BEGONIA_RE_WMT_CHRDEV_WIFI_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __crc_register_set_p2p_mode_handler */
/* Demangled: __crc_register_set_p2p_mode_handler */
extern void* __crc_register_set_p2p_mode_handler;

/* Symbol: __crc_update_driver_loaded_status */
/* Demangled: __crc_update_driver_loaded_status */
extern void* __crc_update_driver_loaded_status;

/* Symbol: __crc_get_low_latency_mode */
/* Demangled: __crc_get_low_latency_mode */
extern void* __crc_get_low_latency_mode;

/* Symbol: __crc_register_file_buf_handler */
/* Demangled: __crc_register_file_buf_handler */
extern void* __crc_register_file_buf_handler;

/* Symbol: __crc_wifi_reset_start */
/* Demangled: __crc_wifi_reset_start */
extern void* __crc_wifi_reset_start;

/* Symbol: __crc_wifi_reset_end */
/* Demangled: __crc_wifi_reset_end */
extern void* __crc_wifi_reset_end;

/* Symbol: register_set_p2p_mode_handler */
/* Demangled: register_set_p2p_mode_handler */
int register_set_p2p_mode_handler(void);

/* Symbol: gDbgLevel */
/* Demangled: gDbgLevel */
extern void* gDbgLevel;

/* Symbol: update_driver_loaded_status */
/* Demangled: update_driver_loaded_status */
int update_driver_loaded_status(void);

/* Symbol: set_low_latency_mode */
/* Demangled: set_low_latency_mode */
int set_low_latency_mode(void);

/* Symbol: get_low_latency_mode */
/* Demangled: get_low_latency_mode */
int get_low_latency_mode(void);

/* Symbol: register_file_buf_handler */
/* Demangled: register_file_buf_handler */
int register_file_buf_handler(void);

/* Symbol: wifi_reset_start */
/* Demangled: wifi_reset_start */
int wifi_reset_start(void);

/* Symbol: wifi_reset_end */
/* Demangled: wifi_reset_end */
int wifi_reset_end(void);

/* Symbol: WIFI_write */
/* Demangled: WIFI_write */
int WIFI_write(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: WIFI_fops */
/* Demangled: WIFI_fops */
extern void* WIFI_fops;

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: fw_log_wifi_init */
/* Demangled: fw_log_wifi_init */
int fw_log_wifi_init(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: fw_log_wifi_deinit */
/* Demangled: fw_log_wifi_deinit */
int fw_log_wifi_deinit(void);

/* Symbol: __crc_wifi_fwlog_event_func_register */
/* Demangled: __crc_wifi_fwlog_event_func_register */
extern void* __crc_wifi_fwlog_event_func_register;

/* Symbol: __crc_wifi_fwlog_onoff_status */
/* Demangled: __crc_wifi_fwlog_onoff_status */
extern void* __crc_wifi_fwlog_onoff_status;

/* Symbol: __crc_fw_log_wifi_init */
/* Demangled: __crc_fw_log_wifi_init */
extern void* __crc_fw_log_wifi_init;

/* Symbol: __crc_fw_log_wifi_deinit */
/* Demangled: __crc_fw_log_wifi_deinit */
extern void* __crc_fw_log_wifi_deinit;

/* Symbol: wifi_fwlog_event_func_register */
/* Demangled: wifi_fwlog_event_func_register */
int wifi_fwlog_event_func_register(void);

/* Symbol: fwDbgLevel */
/* Demangled: fwDbgLevel */
extern void* fwDbgLevel;

/* Symbol: pfFwEventFuncCB */
/* Demangled: pfFwEventFuncCB */
extern void* pfFwEventFuncCB;

/* Symbol: wifi_fwlog_onoff_status */
/* Demangled: wifi_fwlog_onoff_status */
int wifi_fwlog_onoff_status(void);

/* Symbol: fw_log_wifi_fops */
/* Demangled: fw_log_wifi_fops */
extern void* fw_log_wifi_fops;

__END_DECLS

#endif /* BEGONIA_RE_WMT_CHRDEV_WIFI_KO_H */
