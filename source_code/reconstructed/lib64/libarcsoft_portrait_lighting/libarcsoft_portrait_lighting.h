/*
 * Reverse-Engineered ABI Specification for: libarcsoft_portrait_lighting.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libarcsoft_portrait_lighting.so
 */

#ifndef BEGONIA_RE_LIBARCSOFT_PORTRAIT_LIGHTING_H
#define BEGONIA_RE_LIBARCSOFT_PORTRAIT_LIGHTING_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ARC_PLI_SetExtraData */
/* Demangled: ARC_PLI_SetExtraData */
int ARC_PLI_SetExtraData(void);

/* Symbol: ARC_PLI_SetLightSource */
/* Demangled: ARC_PLI_SetLightSource */
int ARC_PLI_SetLightSource(void);

/* Symbol: ARC_PLI_FaceDetect */
/* Demangled: ARC_PLI_FaceDetect */
int ARC_PLI_FaceDetect(void);

/* Symbol: ARC_PLI_GetExtraDataSize */
/* Demangled: ARC_PLI_GetExtraDataSize */
int ARC_PLI_GetExtraDataSize(void);

/* Symbol: ARC_PLI_GetLightSource */
/* Demangled: ARC_PLI_GetLightSource */
int ARC_PLI_GetLightSource(void);

/* Symbol: ARC_PLI_PreProcess */
/* Demangled: ARC_PLI_PreProcess */
int ARC_PLI_PreProcess(void);

/* Symbol: ARC_PLI_GetExtraData */
/* Demangled: ARC_PLI_GetExtraData */
int ARC_PLI_GetExtraData(void);

/* Symbol: ARC_PLI_GetVersion */
/* Demangled: ARC_PLI_GetVersion */
int ARC_PLI_GetVersion(void);

/* Symbol: ARC_PLI_PreProcess_inner */
/* Demangled: ARC_PLI_PreProcess_inner */
int ARC_PLI_PreProcess_inner(void);

/* Symbol: ARC_PLI_Process */
/* Demangled: ARC_PLI_Process */
int ARC_PLI_Process(void);

/* Symbol: ARC_PLI_Uninit */
/* Demangled: ARC_PLI_Uninit */
int ARC_PLI_Uninit(void);

/* Symbol: ARC_PLI_Init */
/* Demangled: ARC_PLI_Init */
int ARC_PLI_Init(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBARCSOFT_PORTRAIT_LIGHTING_H */
