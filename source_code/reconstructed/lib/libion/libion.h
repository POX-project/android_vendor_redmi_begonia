/*
 * Reverse-Engineered ABI Specification for: libion.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libion.so
 */

#ifndef BEGONIA_RE_LIBION_H
#define BEGONIA_RE_LIBION_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: ion_is_legacy */
/* Demangled: ion_is_legacy */
int ion_is_legacy(void);

/* Symbol: ion_free */
/* Demangled: ion_free */
int ion_free(void);

/* Symbol: ion_open */
/* Demangled: ion_open */
int ion_open(void);

/* Symbol: ion_close */
/* Demangled: ion_close */
int ion_close(void);

/* Symbol: ion_is_using_modular_heaps */
/* Demangled: ion_is_using_modular_heaps */
int ion_is_using_modular_heaps(void);

/* Symbol: ion_share */
/* Demangled: ion_share */
int ion_share(void);

/* Symbol: ion_query_get_heaps */
/* Demangled: ion_query_get_heaps */
int ion_query_get_heaps(void);

/* Symbol: ion_alloc */
/* Demangled: ion_alloc */
int ion_alloc(void);

/* Symbol: ion_map */
/* Demangled: ion_map */
int ion_map(void);

/* Symbol: ion_alloc_fd */
/* Demangled: ion_alloc_fd */
int ion_alloc_fd(void);

/* Symbol: ion_import */
/* Demangled: ion_import */
int ion_import(void);

/* Symbol: ion_sync_fd */
/* Demangled: ion_sync_fd */
int ion_sync_fd(void);

/* Symbol: ion_query_heap_cnt */
/* Demangled: ion_query_heap_cnt */
int ion_query_heap_cnt(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBION_H */
