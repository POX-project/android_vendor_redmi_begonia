/*
 * Reverse-Engineered ABI Specification for: gatekeeper.beanpod.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: gatekeeper.beanpod.so
 */

#ifndef BEGONIA_RE_GATEKEEPER_BEANPOD_H
#define BEGONIA_RE_GATEKEEPER_BEANPOD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Standard Android Hardware Module Symbol */
extern struct hw_module_t HAL_MODULE_INFO_SYM;

/* Symbol: _Z17ut_gk_delete_userPK17gatekeeper_devicej */
/* Demangled: ut_gk_delete_user(gatekeeper_device const*, unsigned int) */
int _Z17ut_gk_delete_userPK17gatekeeper_devicej(void);

/* Symbol: _Z22ut_gk_delete_all_usersPK17gatekeeper_device */
/* Demangled: ut_gk_delete_all_users(gatekeeper_device const*) */
int _Z22ut_gk_delete_all_usersPK17gatekeeper_device(void);

/* Symbol: dev */
/* Demangled: dev */
extern void* dev;

__END_DECLS

#endif /* BEGONIA_RE_GATEKEEPER_BEANPOD_H */
