/*
 * Reverse-Engineered ABI Specification for: libmmprofile.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmmprofile.so
 */

#ifndef BEGONIA_RE_LIBMMPROFILE_H
#define BEGONIA_RE_LIBMMPROFILE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MMProfileEnableEvent */
/* Demangled: MMProfileEnableEvent */
int MMProfileEnableEvent(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: MMProfileEnableEventRecursive */
/* Demangled: MMProfileEnableEventRecursive */
int MMProfileEnableEventRecursive(void);

/* Symbol: MMProfileLog */
/* Demangled: MMProfileLog */
int MMProfileLog(void);

/* Symbol: MMProfileLogEx */
/* Demangled: MMProfileLogEx */
int MMProfileLogEx(void);

/* Symbol: MMProfileLogMeta */
/* Demangled: MMProfileLogMeta */
int MMProfileLogMeta(void);

/* Symbol: MMProfileLogMetaBitmap */
/* Demangled: MMProfileLogMetaBitmap */
int MMProfileLogMetaBitmap(void);

/* Symbol: MMProfileLogMetaString */
/* Demangled: MMProfileLogMetaString */
int MMProfileLogMetaString(void);

/* Symbol: MMProfileLogMetaStringEx */
/* Demangled: MMProfileLogMetaStringEx */
int MMProfileLogMetaStringEx(void);

/* Symbol: MMProfileQueryEnable */
/* Demangled: MMProfileQueryEnable */
int MMProfileQueryEnable(void);

/* Symbol: MMProfileFindEvent */
/* Demangled: MMProfileFindEvent */
int MMProfileFindEvent(void);

/* Symbol: MMProfileLogMetaStructure */
/* Demangled: MMProfileLogMetaStructure */
int MMProfileLogMetaStructure(void);

/* Symbol: MMProfileRegisterEvent */
/* Demangled: MMProfileRegisterEvent */
int MMProfileRegisterEvent(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMMPROFILE_H */
