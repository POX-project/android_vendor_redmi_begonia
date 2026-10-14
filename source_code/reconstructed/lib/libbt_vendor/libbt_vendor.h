/*
 * Reverse-Engineered ABI Specification for: libbt-vendor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libbt-vendor.so
 */

#ifndef BEGONIA_RE_LIBBT_VENDOR_H
#define BEGONIA_RE_LIBBT_VENDOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: BLUETOOTH_VENDOR_LIB_INTERFACE */
/* Demangled: BLUETOOTH_VENDOR_LIB_INTERFACE */
extern void* BLUETOOTH_VENDOR_LIB_INTERFACE;

/* Symbol: mtk_bt_cleanup */
/* Demangled: mtk_bt_cleanup */
int mtk_bt_cleanup(void);

/* Symbol: mtk_bt_init */
/* Demangled: mtk_bt_init */
int mtk_bt_init(void);

/* Symbol: mtk_bt_op */
/* Demangled: mtk_bt_op */
int mtk_bt_op(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBBT_VENDOR_H */
