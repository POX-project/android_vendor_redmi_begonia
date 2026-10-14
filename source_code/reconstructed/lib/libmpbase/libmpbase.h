/*
 * Reverse-Engineered ABI Specification for: libmpbase.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmpbase.so
 */

#ifndef BEGONIA_RE_LIBMPBASE_H
#define BEGONIA_RE_LIBMPBASE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MMemSet */
/* Demangled: MMemSet */
int MMemSet(void);

/* Symbol: MMemCpy */
/* Demangled: MMemCpy */
int MMemCpy(void);

/* Symbol: MMemMove */
/* Demangled: MMemMove */
int MMemMove(void);

/* Symbol: MMemCmp */
/* Demangled: MMemCmp */
int MMemCmp(void);

/* Symbol: MMemMgrCreate */
/* Demangled: MMemMgrCreate */
int MMemMgrCreate(void);

/* Symbol: MMemMgrDestroy */
/* Demangled: MMemMgrDestroy */
int MMemMgrDestroy(void);

/* Symbol: MMemAllocStatic */
/* Demangled: MMemAllocStatic */
int MMemAllocStatic(void);

/* Symbol: MMemAlloc */
/* Demangled: MMemAlloc */
int MMemAlloc(void);

/* Symbol: MMemFreeStatic */
/* Demangled: MMemFreeStatic */
int MMemFreeStatic(void);

/* Symbol: MMemFree */
/* Demangled: MMemFree */
int MMemFree(void);

/* Symbol: MMemReallocStatic */
/* Demangled: MMemReallocStatic */
int MMemReallocStatic(void);

/* Symbol: MMemRealloc */
/* Demangled: MMemRealloc */
int MMemRealloc(void);

/* Symbol: GetMaxAllocMemSize */
/* Demangled: GetMaxAllocMemSize */
int GetMaxAllocMemSize(void);

/* Symbol: Mpbase_GetVersion */
/* Demangled: Mpbase_GetVersion */
int Mpbase_GetVersion(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

__END_DECLS

#endif /* BEGONIA_RE_LIBMPBASE_H */
