/*
 * Reverse-Engineered ABI Specification for: libsoft_attestation_cert.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libsoft_attestation_cert.so
 */

#ifndef BEGONIA_RE_LIBSOFT_ATTESTATION_CERT_H
#define BEGONIA_RE_LIBSOFT_ATTESTATION_CERT_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9keymaster17getAttestationKeyE21keymaster_algorithm_tP17keymaster_error_t */
/* Demangled: keymaster::getAttestationKey(keymaster_algorithm_t, keymaster_error_t*) */
int _ZN9keymaster17getAttestationKeyE21keymaster_algorithm_tP17keymaster_error_t(void);

/* Symbol: _ZN9keymaster19getAttestationChainE21keymaster_algorithm_tP17keymaster_error_t */
/* Demangled: keymaster::getAttestationChain(keymaster_algorithm_t, keymaster_error_t*) */
int _ZN9keymaster19getAttestationChainE21keymaster_algorithm_tP17keymaster_error_t(void);

/* Symbol: __cfi_check */
/* Demangled: __cfi_check */
int __cfi_check(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSOFT_ATTESTATION_CERT_H */
