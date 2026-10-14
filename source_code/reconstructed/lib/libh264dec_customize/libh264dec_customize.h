/*
 * Reverse-Engineered ABI Specification for: libh264dec_customize.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libh264dec_customize.so
 */

#ifndef BEGONIA_RE_LIBH264DEC_CUSTOMIZE_H
#define BEGONIA_RE_LIBH264DEC_CUSTOMIZE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: SWH264GetSkipBLevel */
/* Demangled: SWH264GetSkipBLevel */
int SWH264GetSkipBLevel(void);

/* Symbol: SWH264GetLossyQty */
/* Demangled: SWH264GetLossyQty */
int SWH264GetLossyQty(void);

/* Symbol: SWH264LossyQueryDynamicSwitch */
/* Demangled: SWH264LossyQueryDynamicSwitch */
int SWH264LossyQueryDynamicSwitch(void);

/* Symbol: SWH264LossyQuerySwitchPercent */
/* Demangled: SWH264LossyQuerySwitchPercent */
int SWH264LossyQuerySwitchPercent(void);

/* Symbol: SWH264QueryConcealSetting */
/* Demangled: SWH264QueryConcealSetting */
int SWH264QueryConcealSetting(void);

/* Symbol: SWH264TurnOnSubsample */
/* Demangled: SWH264TurnOnSubsample */
int SWH264TurnOnSubsample(void);

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

#endif /* BEGONIA_RE_LIBH264DEC_CUSTOMIZE_H */
