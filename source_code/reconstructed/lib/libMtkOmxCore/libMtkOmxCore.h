/*
 * Reverse-Engineered ABI Specification for: libMtkOmxCore.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkOmxCore.so
 */

#ifndef BEGONIA_RE_LIBMTKOMXCORE_H
#define BEGONIA_RE_LIBMTKOMXCORE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Mtk_OMX_ComponentNameEnum */
/* Demangled: Mtk_OMX_ComponentNameEnum */
int Mtk_OMX_ComponentNameEnum(void);

/* Symbol: Mtk_OMX_Deinit */
/* Demangled: Mtk_OMX_Deinit */
int Mtk_OMX_Deinit(void);

/* Symbol: _Z16free_inst_handlei */
/* Demangled: free_inst_handle(int) */
int _Z16free_inst_handlei(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: gCoreReferenceCounts */
/* Demangled: gCoreReferenceCounts */
extern void* gCoreReferenceCounts;

/* Symbol: Core_Init */
/* Demangled: Core_Init */
int Core_Init(void);

/* Symbol: Mtk_OMX_FreeHandle */
/* Demangled: Mtk_OMX_FreeHandle */
int Mtk_OMX_FreeHandle(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: Mtk_OMX_GetRolesOfComponent */
/* Demangled: Mtk_OMX_GetRolesOfComponent */
int Mtk_OMX_GetRolesOfComponent(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: Mtk_OMX_GetHandle */
/* Demangled: Mtk_OMX_GetHandle */
int Mtk_OMX_GetHandle(void);

/* Symbol: Mtk_OMX_Init */
/* Demangled: Mtk_OMX_Init */
int Mtk_OMX_Init(void);

/* Symbol: _Z14getTickCountMsv */
/* Demangled: getTickCountMs() */
int _Z14getTickCountMsv(void);

/* Symbol: gCompInstanceCount */
/* Demangled: gCompInstanceCount */
extern void* gCompInstanceCount;

/* Symbol: gCoreCompInstance */
/* Demangled: gCoreCompInstance */
extern void* gCoreCompInstance;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: Core_Deinit */
/* Demangled: Core_Deinit */
int Core_Deinit(void);

/* Symbol: Mtk_OMX_GetComponentsOfRole */
/* Demangled: Mtk_OMX_GetComponentsOfRole */
int Mtk_OMX_GetComponentsOfRole(void);

/* Symbol: gCoreComponentCounts */
/* Demangled: gCoreComponentCounts */
extern void* gCoreComponentCounts;

/* Symbol: gInitialized */
/* Demangled: gInitialized */
extern void* gInitialized;

/* Symbol: gInstancePoolLock */
/* Demangled: gInstancePoolLock */
extern void* gInstancePoolLock;

/* Symbol: gCoreComponents */
/* Demangled: gCoreComponents */
extern void* gCoreComponents;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKOMXCORE_H */
