/*
 * Reverse-Engineered ABI Specification for: libVDSuperPhotoAPI.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libVDSuperPhotoAPI.so
 */

#ifndef BEGONIA_RE_LIBVDSUPERPHOTOAPI_H
#define BEGONIA_RE_LIBVDSUPERPHOTOAPI_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: VDSuperPhoto_Process_phase2 */
/* Demangled: VDSuperPhoto_Process_phase2 */
int VDSuperPhoto_Process_phase2(void);

/* Symbol: VDSuperPhoto_GetOuputWidth */
/* Demangled: VDSuperPhoto_GetOuputWidth */
int VDSuperPhoto_GetOuputWidth(void);

/* Symbol: VDReleaseSuperPhoto */
/* Demangled: VDReleaseSuperPhoto */
int VDReleaseSuperPhoto(void);

/* Symbol: VDSuperPhoto_AddFrame */
/* Demangled: VDSuperPhoto_AddFrame */
int VDSuperPhoto_AddFrame(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: VDSuperPhoto_GetBaseFrameIndex */
/* Demangled: VDSuperPhoto_GetBaseFrameIndex */
int VDSuperPhoto_GetBaseFrameIndex(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: VDSuperPhoto_AddOutputBufferPlanes */
/* Demangled: VDSuperPhoto_AddOutputBufferPlanes */
int VDSuperPhoto_AddOutputBufferPlanes(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: VDSuperPhoto_CancelRequest */
/* Demangled: VDSuperPhoto_CancelRequest */
int VDSuperPhoto_CancelRequest(void);

/* Symbol: VDSuperPhoto_InitializeWithSpecificCores */
/* Demangled: VDSuperPhoto_InitializeWithSpecificCores */
int VDSuperPhoto_InitializeWithSpecificCores(void);

/* Symbol: VDSuperPhoto_SetBaseFrameIndex */
/* Demangled: VDSuperPhoto_SetBaseFrameIndex */
int VDSuperPhoto_SetBaseFrameIndex(void);

/* Symbol: VDSuperPhoto_AddMultiplaneYUV420Frame */
/* Demangled: VDSuperPhoto_AddMultiplaneYUV420Frame */
int VDSuperPhoto_AddMultiplaneYUV420Frame(void);

/* Symbol: VDSuperPhoto_AddFramePlanar */
/* Demangled: VDSuperPhoto_AddFramePlanar */
int VDSuperPhoto_AddFramePlanar(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: VDSuperPhoto_ConvertNV21_To_JPEG */
/* Demangled: VDSuperPhoto_ConvertNV21_To_JPEG */
int VDSuperPhoto_ConvertNV21_To_JPEG(void);

/* Symbol: VDSuperPhoto_AddFrameAndAllocate */
/* Demangled: VDSuperPhoto_AddFrameAndAllocate */
int VDSuperPhoto_AddFrameAndAllocate(void);

/* Symbol: VDInitializeSuperPhoto */
/* Demangled: VDInitializeSuperPhoto */
int VDInitializeSuperPhoto(void);

/* Symbol: VDSuperPhoto_AddOutputBuffer */
/* Demangled: VDSuperPhoto_AddOutputBuffer */
int VDSuperPhoto_AddOutputBuffer(void);

/* Symbol: VDSuperPhoto_GetOuputHeight */
/* Demangled: VDSuperPhoto_GetOuputHeight */
int VDSuperPhoto_GetOuputHeight(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: VDSuperPhoto_GetLowLightSceneValue */
/* Demangled: VDSuperPhoto_GetLowLightSceneValue */
int VDSuperPhoto_GetLowLightSceneValue(void);

/* Symbol: VDSuperPhoto_AddOutputP010 */
/* Demangled: VDSuperPhoto_AddOutputP010 */
int VDSuperPhoto_AddOutputP010(void);

/* Symbol: VDSuperPhoto_GetVersion */
/* Demangled: VDSuperPhoto_GetVersion */
int VDSuperPhoto_GetVersion(void);

/* Symbol: VDSuperPhoto_Process */
/* Demangled: VDSuperPhoto_Process */
int VDSuperPhoto_Process(void);

/* Symbol: VDSuperPhoto_Process_phase1 */
/* Demangled: VDSuperPhoto_Process_phase1 */
int VDSuperPhoto_Process_phase1(void);

/* Symbol: VDInitializeSuperPhotoWithCores */
/* Demangled: VDInitializeSuperPhotoWithCores */
int VDInitializeSuperPhotoWithCores(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBVDSUPERPHOTOAPI_H */
