/*
 * Reverse-Engineered ABI Specification for: libarcsoft_dualcam_refocus.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libarcsoft_dualcam_refocus.so
 */

#ifndef BEGONIA_RE_LIBARCSOFT_DUALCAM_REFOCUS_H
#define BEGONIA_RE_LIBARCSOFT_DUALCAM_REFOCUS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ARC_BuildDeviceKernelBin */
/* Demangled: ARC_BuildDeviceKernelBin */
int ARC_BuildDeviceKernelBin(void);

/* Symbol: ARC_DCIR_CalcDisparityData */
/* Demangled: ARC_DCIR_CalcDisparityData */
int ARC_DCIR_CalcDisparityData(void);

/* Symbol: ARC_DCIR_GetCaliData */
/* Demangled: ARC_DCIR_GetCaliData */
int ARC_DCIR_GetCaliData(void);

/* Symbol: ARC_DCIR_GetDefaultParam */
/* Demangled: ARC_DCIR_GetDefaultParam */
int ARC_DCIR_GetDefaultParam(void);

/* Symbol: ARC_DCIR_GetDisparityData */
/* Demangled: ARC_DCIR_GetDisparityData */
int ARC_DCIR_GetDisparityData(void);

/* Symbol: ARC_DCIR_GetDisparityDataSize */
/* Demangled: ARC_DCIR_GetDisparityDataSize */
int ARC_DCIR_GetDisparityDataSize(void);

/* Symbol: ARC_DCIR_GetVersion */
/* Demangled: ARC_DCIR_GetVersion */
int ARC_DCIR_GetVersion(void);

/* Symbol: ARC_DCIR_Init */
/* Demangled: ARC_DCIR_Init */
int ARC_DCIR_Init(void);

/* Symbol: ARC_DCIR_Process */
/* Demangled: ARC_DCIR_Process */
int ARC_DCIR_Process(void);

/* Symbol: ARC_DCIR_Reset */
/* Demangled: ARC_DCIR_Reset */
int ARC_DCIR_Reset(void);

/* Symbol: ARC_DCIR_SetCaliData */
/* Demangled: ARC_DCIR_SetCaliData */
int ARC_DCIR_SetCaliData(void);

/* Symbol: ARC_DCIR_SetCameraImageInfo */
/* Demangled: ARC_DCIR_SetCameraImageInfo */
int ARC_DCIR_SetCameraImageInfo(void);

/* Symbol: ARC_DCIR_SetDistortionCoef */
/* Demangled: ARC_DCIR_SetDistortionCoef */
int ARC_DCIR_SetDistortionCoef(void);

/* Symbol: ARC_DCIR_SetFilterIntensity */
/* Demangled: ARC_DCIR_SetFilterIntensity */
int ARC_DCIR_SetFilterIntensity(void);

/* Symbol: ARC_DCIR_SetFilterMode */
/* Demangled: ARC_DCIR_SetFilterMode */
int ARC_DCIR_SetFilterMode(void);

/* Symbol: ARC_DCIR_Uninit */
/* Demangled: ARC_DCIR_Uninit */
int ARC_DCIR_Uninit(void);

/* Symbol: ARC_DCVR_GetCaliData */
/* Demangled: ARC_DCVR_GetCaliData */
int ARC_DCVR_GetCaliData(void);

/* Symbol: ARC_DCVR_GetDefaultParam */
/* Demangled: ARC_DCVR_GetDefaultParam */
int ARC_DCVR_GetDefaultParam(void);

/* Symbol: ARC_DCVR_GetVersion */
/* Demangled: ARC_DCVR_GetVersion */
int ARC_DCVR_GetVersion(void);

/* Symbol: ARC_DCVR_Init */
/* Demangled: ARC_DCVR_Init */
int ARC_DCVR_Init(void);

/* Symbol: ARC_DCVR_Process */
/* Demangled: ARC_DCVR_Process */
int ARC_DCVR_Process(void);

/* Symbol: ARC_DCVR_SetCaliData */
/* Demangled: ARC_DCVR_SetCaliData */
int ARC_DCVR_SetCaliData(void);

/* Symbol: ARC_DCVR_SetCameraImageInfo */
/* Demangled: ARC_DCVR_SetCameraImageInfo */
int ARC_DCVR_SetCameraImageInfo(void);

/* Symbol: ARC_DCVR_SetDepthInfo */
/* Demangled: ARC_DCVR_SetDepthInfo */
int ARC_DCVR_SetDepthInfo(void);

/* Symbol: ARC_DCVR_SetFilterIntensity */
/* Demangled: ARC_DCVR_SetFilterIntensity */
int ARC_DCVR_SetFilterIntensity(void);

/* Symbol: ARC_DCVR_SetFilterMode */
/* Demangled: ARC_DCVR_SetFilterMode */
int ARC_DCVR_SetFilterMode(void);

/* Symbol: ARC_DCVR_SetImageDegree */
/* Demangled: ARC_DCVR_SetImageDegree */
int ARC_DCVR_SetImageDegree(void);

/* Symbol: ARC_DCVR_Uninit */
/* Demangled: ARC_DCVR_Uninit */
int ARC_DCVR_Uninit(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBARCSOFT_DUALCAM_REFOCUS_H */
