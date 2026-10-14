/*
 * Reverse-Engineered ABI Specification for: libimgsensorca.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libimgsensorca.so
 */

#ifndef BEGONIA_RE_LIBIMGSENSORCA_H
#define BEGONIA_RE_LIBIMGSENSORCA_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: seninf_ca_checkpipe */
/* Demangled: seninf_ca_checkpipe */
int seninf_ca_checkpipe(void);

/* Symbol: seninf_ca_close_session */
/* Demangled: seninf_ca_close_session */
int seninf_ca_close_session(void);

/* Symbol: seninf_ca_free */
/* Demangled: seninf_ca_free */
int seninf_ca_free(void);

/* Symbol: seninf_ca_open_session */
/* Demangled: seninf_ca_open_session */
int seninf_ca_open_session(void);

/* Symbol: seninf_ca_sync_to_pa */
/* Demangled: seninf_ca_sync_to_pa */
int seninf_ca_sync_to_pa(void);

/* Symbol: seninf_ca_sync_to_va */
/* Demangled: seninf_ca_sync_to_va */
int seninf_ca_sync_to_va(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMGSENSORCA_H */
