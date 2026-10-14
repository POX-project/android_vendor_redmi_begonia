/*
 * Reverse-Engineered ABI Specification for: libarcsoft_preview_deflicker.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libarcsoft_preview_deflicker.so
 */

#ifndef BEGONIA_RE_LIBARCSOFT_PREVIEW_DEFLICKER_H
#define BEGONIA_RE_LIBARCSOFT_PREVIEW_DEFLICKER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ADF_Detection_Init */
/* Demangled: ADF_Detection_Init */
int ADF_Detection_Init(void);

/* Symbol: ADF_Preview_GetVersion */
/* Demangled: ADF_Preview_GetVersion */
int ADF_Preview_GetVersion(void);

/* Symbol: ADF_Preview_UnInit */
/* Demangled: ADF_Preview_UnInit */
int ADF_Preview_UnInit(void);

/* Symbol: ADF_Preview_Init */
/* Demangled: ADF_Preview_Init */
int ADF_Preview_Init(void);

/* Symbol: ADF_Preview_Process */
/* Demangled: ADF_Preview_Process */
int ADF_Preview_Process(void);

/* Symbol: ADF_Detection_UnInit */
/* Demangled: ADF_Detection_UnInit */
int ADF_Detection_UnInit(void);

/* Symbol: ADF_DetectFlicker */
/* Demangled: ADF_DetectFlicker */
int ADF_DetectFlicker(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBARCSOFT_PREVIEW_DEFLICKER_H */
