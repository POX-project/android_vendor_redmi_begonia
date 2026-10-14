/*
 * Reverse-Engineered ABI Specification for: kmsetkey.beanpod.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: kmsetkey.beanpod.so
 */

#ifndef BEGONIA_RE_KMSETKEY_BEANPOD_H
#define BEGONIA_RE_KMSETKEY_BEANPOD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: TEE_Free_KM_Buffer */
/* Demangled: TEE_Free_KM_Buffer */
int TEE_Free_KM_Buffer(void);

/* Symbol: ut_km_check_google_key */
/* Demangled: ut_km_check_google_key */
int ut_km_check_google_key(void);

/* Symbol: TEE_Alloc_KM_Buffer_And_Reset */
/* Demangled: TEE_Alloc_KM_Buffer_And_Reset */
int TEE_Alloc_KM_Buffer_And_Reset(void);

/* Symbol: keymaster_buffer */
/* Demangled: keymaster_buffer */
extern void* keymaster_buffer;

/* Symbol: _Z29ut_km_import_google_key_modelPhj */
/* Demangled: ut_km_import_google_key_model(unsigned char*, unsigned int) */
int _Z29ut_km_import_google_key_modelPhj(void);

/* Symbol: ut_km_import_google_key */
/* Demangled: ut_km_import_google_key */
int ut_km_import_google_key(void);

/* Symbol: ut_km_import_google_key_and_model */
/* Demangled: ut_km_import_google_key_and_model */
int ut_km_import_google_key_and_model(void);

__END_DECLS

#endif /* BEGONIA_RE_KMSETKEY_BEANPOD_H */
