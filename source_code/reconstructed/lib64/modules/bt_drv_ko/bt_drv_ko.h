/*
 * Reverse-Engineered ABI Specification for: bt_drv.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: bt_drv.ko
 */

#ifndef BEGONIA_RE_BT_DRV_KO_H
#define BEGONIA_RE_BT_DRV_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: BT_poll */
/* Demangled: BT_poll */
int BT_poll(void);

/* Symbol: gBtDbgLevel */
/* Demangled: gBtDbgLevel */
extern void* gBtDbgLevel;

/* Symbol: send_hci_frame */
/* Demangled: send_hci_frame */
int send_hci_frame(void);

/* Symbol: BT_write_iter */
/* Demangled: BT_write_iter */
int BT_write_iter(void);

/* Symbol: BT_write */
/* Demangled: BT_write */
int BT_write(void);

/* Symbol: BT_read */
/* Demangled: BT_read */
int BT_read(void);

/* Symbol: g_bt_dbg_st */
/* Demangled: g_bt_dbg_st */
extern void* g_bt_dbg_st;

/* Symbol: BT_unlocked_ioctl */
/* Demangled: BT_unlocked_ioctl */
int BT_unlocked_ioctl(void);

/* Symbol: BT_compat_ioctl */
/* Demangled: BT_compat_ioctl */
int BT_compat_ioctl(void);

/* Symbol: bt_state_notify */
/* Demangled: bt_state_notify */
int bt_state_notify(void);

/* Symbol: bt_dev_dbg_set_state */
/* Demangled: bt_dev_dbg_set_state */
int bt_dev_dbg_set_state(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: BT_fops */
/* Demangled: BT_fops */
extern void* BT_fops;

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

/* Symbol: fw_log_bt_init */
/* Demangled: fw_log_bt_init */
int fw_log_bt_init(void);

/* Symbol: bt_dev_dbg_init */
/* Demangled: bt_dev_dbg_init */
int bt_dev_dbg_init(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: bt_dev_dbg_deinit */
/* Demangled: bt_dev_dbg_deinit */
int bt_dev_dbg_deinit(void);

/* Symbol: fw_log_bt_exit */
/* Demangled: fw_log_bt_exit */
int fw_log_bt_exit(void);

/* Symbol: _bt_dbg_reset_dump_buf */
/* Demangled: _bt_dbg_reset_dump_buf */
int _bt_dbg_reset_dump_buf(void);

/* Symbol: bt_dbg_read */
/* Demangled: bt_dbg_read */
int bt_dbg_read(void);

/* Symbol: _osal_strtol */
/* Demangled: _osal_strtol */
int _osal_strtol(void);

/* Symbol: bt_dbg_user_trx_cb */
/* Demangled: bt_dbg_user_trx_cb */
int bt_dbg_user_trx_cb(void);

/* Symbol: bt_dbg_user_trx_proc */
/* Demangled: bt_dbg_user_trx_proc */
int bt_dbg_user_trx_proc(void);

/* Symbol: bt_dbg_write */
/* Demangled: bt_dbg_write */
int bt_dbg_write(void);

/* Symbol: fw_log_bt_unlocked_ioctl */
/* Demangled: fw_log_bt_unlocked_ioctl */
int fw_log_bt_unlocked_ioctl(void);

/* Symbol: fw_log_bt_compat_ioctl */
/* Demangled: fw_log_bt_compat_ioctl */
int fw_log_bt_compat_ioctl(void);

/* Symbol: BT_log_wq */
/* Demangled: BT_log_wq */
extern void* BT_log_wq;

/* Symbol: log_fops */
/* Demangled: log_fops */
extern void* log_fops;

__END_DECLS

#endif /* BEGONIA_RE_BT_DRV_KO_H */
