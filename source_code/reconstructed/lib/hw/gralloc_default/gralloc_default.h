/*
 * Reverse-Engineered ABI Specification for: gralloc.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: gralloc.default.so
 */

#ifndef BEGONIA_RE_GRALLOC_DEFAULT_H
#define BEGONIA_RE_GRALLOC_DEFAULT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _Z20mapFrameBufferLockedP16private_module_ti */
/* Demangled: mapFrameBufferLocked(private_module_t*, int) */
int _Z20mapFrameBufferLockedP16private_module_ti(void);

/* Symbol: _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_unregister_buffer(gralloc_module_t const*, native_handle const*) */
int _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t */
/* Demangled: fb_device_open(hw_module_t const*, char const*, hw_device_t**) */
int _Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv */
/* Demangled: gralloc_lock(gralloc_module_t const*, native_handle const*, int, int, int, int, int, void**) */
int _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv(void);

/* Symbol: _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_unlock(gralloc_module_t const*, native_handle const*) */
int _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle(void);

/* Symbol: _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_register_buffer(gralloc_module_t const*, native_handle const*) */
int _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle(void);

/* Symbol: _Z9mapBufferPK16gralloc_module_tP16private_handle_t */
/* Demangled: mapBuffer(gralloc_module_t const*, private_handle_t*) */
int _Z9mapBufferPK16gralloc_module_tP16private_handle_t(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: _Z15terminateBufferPK16gralloc_module_tP16private_handle_t */
/* Demangled: terminateBuffer(gralloc_module_t const*, private_handle_t*) */
int _Z15terminateBufferPK16gralloc_module_tP16private_handle_t(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

__END_DECLS

#endif /* BEGONIA_RE_GRALLOC_DEFAULT_H */
