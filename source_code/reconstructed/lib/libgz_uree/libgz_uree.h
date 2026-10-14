/*
 * Reverse-Engineered ABI Specification for: libgz_uree.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgz_uree.so
 */

#ifndef BEGONIA_RE_LIBGZ_UREE_H
#define BEGONIA_RE_LIBGZ_UREE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: TZ_GetErrorString */
/* Demangled: TZ_GetErrorString */
int TZ_GetErrorString(void);

/* Symbol: UREE_RegisterSharedmemWithTag */
/* Demangled: UREE_RegisterSharedmemWithTag */
int UREE_RegisterSharedmemWithTag(void);

/* Symbol: UREE_RegisterSharedmem_ReadOnly */
/* Demangled: UREE_RegisterSharedmem_ReadOnly */
int UREE_RegisterSharedmem_ReadOnly(void);

/* Symbol: UREE_ReleaseSecurechunkmem */
/* Demangled: UREE_ReleaseSecurechunkmem */
int UREE_ReleaseSecurechunkmem(void);

/* Symbol: UREE_WriteSecurechunkmem */
/* Demangled: UREE_WriteSecurechunkmem */
int UREE_WriteSecurechunkmem(void);

/* Symbol: UREE_CreateSessionWithTag */
/* Demangled: UREE_CreateSessionWithTag */
int UREE_CreateSessionWithTag(void);

/* Symbol: UREE_FOD_ShareMem_Enable */
/* Demangled: UREE_FOD_ShareMem_Enable */
int UREE_FOD_ShareMem_Enable(void);

/* Symbol: UREE_RegisterSharedmem_ReadOnlyWithTag */
/* Demangled: UREE_RegisterSharedmem_ReadOnlyWithTag */
int UREE_RegisterSharedmem_ReadOnlyWithTag(void);

/* Symbol: UREE_ReferenceSecurechunkmem */
/* Demangled: UREE_ReferenceSecurechunkmem */
int UREE_ReferenceSecurechunkmem(void);

/* Symbol: UREE_UnreferenceSecuremem */
/* Demangled: UREE_UnreferenceSecuremem */
int UREE_UnreferenceSecuremem(void);

/* Symbol: UREE_BindCpu */
/* Demangled: UREE_BindCpu */
int UREE_BindCpu(void);

/* Symbol: UREE_AppendTzmem */
/* Demangled: UREE_AppendTzmem */
int UREE_AppendTzmem(void);

/* Symbol: UREE_ReferenceSecureMultichunkmem */
/* Demangled: UREE_ReferenceSecureMultichunkmem */
int UREE_ReferenceSecureMultichunkmem(void);

/* Symbol: UREE_ION_TEST_UPT_CHMDATA */
/* Demangled: UREE_ION_TEST_UPT_CHMDATA */
int UREE_ION_TEST_UPT_CHMDATA(void);

/* Symbol: UREE_RegisterSharedmem */
/* Demangled: UREE_RegisterSharedmem */
int UREE_RegisterSharedmem(void);

/* Symbol: UREE_SecureCamera_to_MTEE */
/* Demangled: UREE_SecureCamera_to_MTEE */
int UREE_SecureCamera_to_MTEE(void);

/* Symbol: UREE_CloseSession */
/* Demangled: UREE_CloseSession */
int UREE_CloseSession(void);

/* Symbol: UREE_UnregisterSharedmem */
/* Demangled: UREE_UnregisterSharedmem */
int UREE_UnregisterSharedmem(void);

/* Symbol: UREE_AllocSecureMultichunkmem */
/* Demangled: UREE_AllocSecureMultichunkmem */
int UREE_AllocSecureMultichunkmem(void);

/* Symbol: UREE_AllocSecureMultichunkmemWithTag */
/* Demangled: UREE_AllocSecureMultichunkmemWithTag */
int UREE_AllocSecureMultichunkmemWithTag(void);

/* Symbol: UREE_ReleaseTzmem */
/* Demangled: UREE_ReleaseTzmem */
int UREE_ReleaseTzmem(void);

/* Symbol: UREE_UnreferenceSecureMultichunkmem */
/* Demangled: UREE_UnreferenceSecureMultichunkmem */
int UREE_UnreferenceSecureMultichunkmem(void);

/* Symbol: UREE_ZallocSecurememWithTag */
/* Demangled: UREE_ZallocSecurememWithTag */
int UREE_ZallocSecurememWithTag(void);

/* Symbol: UREE_CreateSession */
/* Demangled: UREE_CreateSession */
int UREE_CreateSession(void);

/* Symbol: UREE_ION_CP_Chm2Shm */
/* Demangled: UREE_ION_CP_Chm2Shm */
int UREE_ION_CP_Chm2Shm(void);

/* Symbol: UREE_TeeServiceCall */
/* Demangled: UREE_TeeServiceCall */
int UREE_TeeServiceCall(void);

/* Symbol: UREE_UnreferenceSecurechunkmem */
/* Demangled: UREE_UnreferenceSecurechunkmem */
int UREE_UnreferenceSecurechunkmem(void);

/* Symbol: UREE_ZallocSecureMultichunkmem */
/* Demangled: UREE_ZallocSecureMultichunkmem */
int UREE_ZallocSecureMultichunkmem(void);

/* Symbol: UREE_ZallocSecureMultichunkmemWithTag */
/* Demangled: UREE_ZallocSecureMultichunkmemWithTag */
int UREE_ZallocSecureMultichunkmemWithTag(void);

/* Symbol: UREE_ION_TO_SHM_HANDLE */
/* Demangled: UREE_ION_TO_SHM_HANDLE */
int UREE_ION_TO_SHM_HANDLE(void);

/* Symbol: __UREE_UnregisterSharedmem */
/* Demangled: __UREE_UnregisterSharedmem */
int __UREE_UnregisterSharedmem(void);

/* Symbol: UREE_AllocSecurememWithTag */
/* Demangled: UREE_AllocSecurememWithTag */
int UREE_AllocSecurememWithTag(void);

/* Symbol: UREE_ReadSecurechunkmem */
/* Demangled: UREE_ReadSecurechunkmem */
int UREE_ReadSecurechunkmem(void);

/* Symbol: UREE_UnregisterSharedmem_ReadOnly */
/* Demangled: UREE_UnregisterSharedmem_ReadOnly */
int UREE_UnregisterSharedmem_ReadOnly(void);

/* Symbol: uree_init_mutex */
/* Demangled: uree_init_mutex */
extern void* uree_init_mutex;

/* Symbol: UREE_AllocSecuremem */
/* Demangled: UREE_AllocSecuremem */
int UREE_AllocSecuremem(void);

/* Symbol: UREE_AppendSecurechunkmem */
/* Demangled: UREE_AppendSecurechunkmem */
int UREE_AppendSecurechunkmem(void);

/* Symbol: UREE_ReferenceSecuremem */
/* Demangled: UREE_ReferenceSecuremem */
int UREE_ReferenceSecuremem(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGZ_UREE_H */
