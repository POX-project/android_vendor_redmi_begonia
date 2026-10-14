/*
 * Reverse-Engineered ABI Specification for: libbluetoothem_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbluetoothem_mtk.so
 */

#ifndef BEGONIA_RE_LIBBLUETOOTHEM_MTK_H
#define BEGONIA_RE_LIBBLUETOOTHEM_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: em_bt_receive_data */
/* Demangled: em_bt_receive_data */
extern void* em_bt_receive_data;

/* Symbol: em_bt_set_io_attr */
/* Demangled: em_bt_set_io_attr */
extern void* em_bt_set_io_attr;

/* Symbol: EM_BT_deinit */
/* Demangled: EM_BT_deinit */
int EM_BT_deinit(void);

/* Symbol: EM_BT_polling_start */
/* Demangled: EM_BT_polling_start */
int EM_BT_polling_start(void);

/* Symbol: EM_BT_polling_stop */
/* Demangled: EM_BT_polling_stop */
int EM_BT_polling_stop(void);

/* Symbol: em_bt_restore */
/* Demangled: em_bt_restore */
extern void* em_bt_restore;

/* Symbol: EM_BT_getPatchVersion */
/* Demangled: EM_BT_getPatchVersion */
int EM_BT_getPatchVersion(void);

/* Symbol: EM_BT_init */
/* Demangled: EM_BT_init */
int EM_BT_init(void);

/* Symbol: EM_BT_set_io_attr */
/* Demangled: EM_BT_set_io_attr */
int EM_BT_set_io_attr(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: em_bt_send_data */
/* Demangled: em_bt_send_data */
extern void* em_bt_send_data;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: EM_BT_write */
/* Demangled: EM_BT_write */
int EM_BT_write(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: em_bt_init */
/* Demangled: em_bt_init */
extern void* em_bt_init;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: EM_BT_clear_io_attr */
/* Demangled: EM_BT_clear_io_attr */
int EM_BT_clear_io_attr(void);

/* Symbol: EM_BT_read */
/* Demangled: EM_BT_read */
int EM_BT_read(void);

/* Symbol: em_bt_get_io_attr */
/* Demangled: em_bt_get_io_attr */
extern void* em_bt_get_io_attr;

__END_DECLS

#endif /* BEGONIA_RE_LIBBLUETOOTHEM_MTK_H */
