/*
 * Reverse-Engineered ABI Specification for: libgz_gp_client.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgz_gp_client.so
 */

#ifndef BEGONIA_RE_LIBGZ_GP_CLIENT_H
#define BEGONIA_RE_LIBGZ_GP_CLIENT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: TEEC_CloseSession */
/* Demangled: TEEC_CloseSession */
int TEEC_CloseSession(void);

/* Symbol: TEEC_FinalizeContext */
/* Demangled: TEEC_FinalizeContext */
int TEEC_FinalizeContext(void);

/* Symbol: TEEC_InitializeContext */
/* Demangled: TEEC_InitializeContext */
int TEEC_InitializeContext(void);

/* Symbol: TEEC_InvokeCommand */
/* Demangled: TEEC_InvokeCommand */
int TEEC_InvokeCommand(void);

/* Symbol: TEEC_OpenSession */
/* Demangled: TEEC_OpenSession */
int TEEC_OpenSession(void);

/* Symbol: TEEC_RegisterSharedMemory */
/* Demangled: TEEC_RegisterSharedMemory */
int TEEC_RegisterSharedMemory(void);

/* Symbol: TEEC_ReleaseSharedMemory */
/* Demangled: TEEC_ReleaseSharedMemory */
int TEEC_ReleaseSharedMemory(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGZ_GP_CLIENT_H */
