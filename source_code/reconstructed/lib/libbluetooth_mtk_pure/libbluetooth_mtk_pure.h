/*
 * Reverse-Engineered ABI Specification for: libbluetooth_mtk_pure.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbluetooth_mtk_pure.so
 */

#ifndef BEGONIA_RE_LIBBLUETOOTH_MTK_PURE_H
#define BEGONIA_RE_LIBBLUETOOTH_MTK_PURE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: GetRandomByte */
/* Demangled: GetRandomByte */
int GetRandomByte(void);

/* Symbol: bt_init_script_6628 */
/* Demangled: bt_init_script_6628 */
extern void* bt_init_script_6628;

/* Symbol: bt_init_script_consys */
/* Demangled: bt_init_script_consys */
extern void* bt_init_script_consys;

/* Symbol: BT_InitDevice */
/* Demangled: BT_InitDevice */
int BT_InitDevice(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: bt_get_io_attr */
/* Demangled: bt_get_io_attr */
int bt_get_io_attr(void);

/* Symbol: bt_init */
/* Demangled: bt_init */
int bt_init(void);

/* Symbol: BT_ReadExpectedEvent */
/* Demangled: BT_ReadExpectedEvent */
int BT_ReadExpectedEvent(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: bt_restore */
/* Demangled: bt_restore */
int bt_restore(void);

/* Symbol: print_nv_data */
/* Demangled: print_nv_data */
int print_nv_data(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: mtk_bt_op */
/* Demangled: mtk_bt_op */
int mtk_bt_op(void);

/* Symbol: bt_init_script_6630 */
/* Demangled: bt_init_script_6630 */
extern void* bt_init_script_6630;

/* Symbol: bt_init_script_after_6893 */
/* Demangled: bt_init_script_after_6893 */
extern void* bt_init_script_after_6893;

/* Symbol: BT_DeinitDevice */
/* Demangled: BT_DeinitDevice */
int BT_DeinitDevice(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: audio_conf_map */
/* Demangled: audio_conf_map */
extern void* audio_conf_map;

/* Symbol: bt_receive_data */
/* Demangled: bt_receive_data */
int bt_receive_data(void);

/* Symbol: bt_send_data */
/* Demangled: bt_send_data */
int bt_send_data(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: bt_init_script_connac */
/* Demangled: bt_init_script_connac */
extern void* bt_init_script_connac;

/* Symbol: bt_set_io_attr */
/* Demangled: bt_set_io_attr */
int bt_set_io_attr(void);

/* Symbol: wait_connsys_ready */
/* Demangled: wait_connsys_ready */
int wait_connsys_ready(void);

/* Symbol: BT_SendHciCommand */
/* Demangled: BT_SendHciCommand */
int BT_SendHciCommand(void);

/* Symbol: GORM_Init */
/* Demangled: GORM_Init */
int GORM_Init(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: bt_init_script_6632 */
/* Demangled: bt_init_script_6632 */
extern void* bt_init_script_6632;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBLUETOOTH_MTK_PURE_H */
