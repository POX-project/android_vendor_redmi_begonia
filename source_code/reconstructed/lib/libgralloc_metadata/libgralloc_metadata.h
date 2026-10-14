/*
 * Reverse-Engineered ABI Specification for: libgralloc_metadata.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libgralloc_metadata.so
 */

#ifndef BEGONIA_RE_LIBGRALLOC_METADATA_H
#define BEGONIA_RE_LIBGRALLOC_METADATA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z10gm_free_fdPi */
/* Demangled: gm_free_fd(int*) */
int _Z10gm_free_fdPi(void);

/* Symbol: _Z10gm_get_xxxiyPy */
/* Demangled: gm_get_xxx(int, unsigned long long, unsigned long long*) */
int _Z10gm_get_xxxiyPy(void);

/* Symbol: _Z10gm_set_xxxiyy */
/* Demangled: gm_set_xxx(int, unsigned long long, unsigned long long) */
int _Z10gm_set_xxxiyy(void);

/* Symbol: _Z25gm_shared_memory_allocatePiPPvPyy */
/* Demangled: gm_shared_memory_allocate(int*, void**, unsigned long long*, unsigned long long) */
int _Z25gm_shared_memory_allocatePiPPvPyy(void);

/* Symbol: _Z10gm_get_yyyiyPN8mediatek8graphics6common13gm_yyy_info_tE */
/* Demangled: gm_get_yyy(int, unsigned long long, mediatek::graphics::common::gm_yyy_info_t*) */
int _Z10gm_get_yyyiyPN8mediatek8graphics6common13gm_yyy_info_tE(void);

/* Symbol: _Z10gm_get_zzziyPN8mediatek8graphics6common13gm_zzz_info_tE */
/* Demangled: gm_get_zzz(int, unsigned long long, mediatek::graphics::common::gm_zzz_info_t*) */
int _Z10gm_get_zzziyPN8mediatek8graphics6common13gm_zzz_info_tE(void);

/* Symbol: _Z10gm_set_yyyiyN8mediatek8graphics6common13gm_yyy_info_tE */
/* Demangled: gm_set_yyy(int, unsigned long long, mediatek::graphics::common::gm_yyy_info_t) */
int _Z10gm_set_yyyiyN8mediatek8graphics6common13gm_yyy_info_tE(void);

/* Symbol: _Z10gm_set_zzziyN8mediatek8graphics6common13gm_zzz_info_tE */
/* Demangled: gm_set_zzz(int, unsigned long long, mediatek::graphics::common::gm_zzz_info_t) */
int _Z10gm_set_zzziyN8mediatek8graphics6common13gm_zzz_info_tE(void);

/* Symbol: _Z11gm_alloc_fdPiPy */
/* Demangled: gm_alloc_fd(int*, unsigned long long*) */
int _Z11gm_alloc_fdPiPy(void);

/* Symbol: _Z21gm_shared_memory_freePi */
/* Demangled: gm_shared_memory_free(int*) */
int _Z21gm_shared_memory_freePi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGRALLOC_METADATA_H */
