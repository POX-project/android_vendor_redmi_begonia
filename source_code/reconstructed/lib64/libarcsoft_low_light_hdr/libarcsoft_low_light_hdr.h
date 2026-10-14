/*
 * Reverse-Engineered ABI Specification for: libarcsoft_low_light_hdr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libarcsoft_low_light_hdr.so
 */

#ifndef BEGONIA_RE_LIBARCSOFT_LOW_LIGHT_HDR_H
#define BEGONIA_RE_LIBARCSOFT_LOW_LIGHT_HDR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ARC_LLHDR_SetCallback */
/* Demangled: ARC_LLHDR_SetCallback */
int ARC_LLHDR_SetCallback(void);

/* Symbol: ARC_LLHDR_SetDRCGain */
/* Demangled: ARC_LLHDR_SetDRCGain */
int ARC_LLHDR_SetDRCGain(void);

/* Symbol: ARC_LLHDR_Process */
/* Demangled: ARC_LLHDR_Process */
int ARC_LLHDR_Process(void);

/* Symbol: ARC_LLHDR_Init */
/* Demangled: ARC_LLHDR_Init */
int ARC_LLHDR_Init(void);

/* Symbol: ARC_LLHDR_SetISPGain */
/* Demangled: ARC_LLHDR_SetISPGain */
int ARC_LLHDR_SetISPGain(void);

/* Symbol: ARC_LLHDR_GetVersion */
/* Demangled: ARC_LLHDR_GetVersion */
int ARC_LLHDR_GetVersion(void);

/* Symbol: ARC_LLHDR_Uninit */
/* Demangled: ARC_LLHDR_Uninit */
int ARC_LLHDR_Uninit(void);

/* Symbol: ARC_LLHDR_SetEVValue */
/* Demangled: ARC_LLHDR_SetEVValue */
int ARC_LLHDR_SetEVValue(void);

/* Symbol: ARC_LLHDR_GetDefaultParam */
/* Demangled: ARC_LLHDR_GetDefaultParam */
int ARC_LLHDR_GetDefaultParam(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBARCSOFT_LOW_LIGHT_HDR_H */
