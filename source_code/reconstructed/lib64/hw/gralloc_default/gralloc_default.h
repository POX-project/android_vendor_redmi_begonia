/*
 * Reverse-Engineered ABI Specification for: gralloc.default.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
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

/* Symbol: _Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t */
/* Demangled: fb_device_open(hw_module_t const*, char const*, hw_device_t**) */
int _Z14fb_device_openPK11hw_module_tPKcPP11hw_device_t(void);

/* Symbol: _Z20mapFrameBufferLockedP16private_module_ti */
/* Demangled: mapFrameBufferLocked(private_module_t*, int) */
int _Z20mapFrameBufferLockedP16private_module_ti(void);

/* Symbol: _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_unregister_buffer(gralloc_module_t const*, native_handle const*) */
int _Z25gralloc_unregister_bufferPK16gralloc_module_tPK13native_handle(void);

/* Symbol: _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv */
/* Demangled: gralloc_lock(gralloc_module_t const*, native_handle const*, int, int, int, int, int, void**) */
int _Z12gralloc_lockPK16gralloc_module_tPK13native_handleiiiiiPPv(void);

/* Symbol: _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_unlock(gralloc_module_t const*, native_handle const*) */
int _Z14gralloc_unlockPK16gralloc_module_tPK13native_handle(void);

/* Symbol: _Z15terminateBufferPK16gralloc_module_tP16private_handle_t */
/* Demangled: terminateBuffer(gralloc_module_t const*, private_handle_t*) */
int _Z15terminateBufferPK16gralloc_module_tP16private_handle_t(void);

/* Symbol: _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle */
/* Demangled: gralloc_register_buffer(gralloc_module_t const*, native_handle const*) */
int _Z23gralloc_register_bufferPK16gralloc_module_tPK13native_handle(void);

/* Symbol: _Z9mapBufferPK16gralloc_module_tP16private_handle_t */
/* Demangled: mapBuffer(gralloc_module_t const*, private_handle_t*) */
int _Z9mapBufferPK16gralloc_module_tP16private_handle_t(void);

__END_DECLS

#endif /* BEGONIA_RE_GRALLOC_DEFAULT_H */
