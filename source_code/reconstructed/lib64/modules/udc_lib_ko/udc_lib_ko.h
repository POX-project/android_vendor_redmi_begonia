/*
 * Reverse-Engineered ABI Specification for: udc_lib.ko
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: udc_lib.ko
 */

#ifndef BEGONIA_RE_UDC_LIB_KO_H
#define BEGONIA_RE_UDC_LIB_KO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: adler32 */
/* Demangled: adler32 */
int adler32(void);

/* Symbol: adler32_combine */
/* Demangled: adler32_combine */
int adler32_combine(void);

/* Symbol: adler32_combine64 */
/* Demangled: adler32_combine64 */
int adler32_combine64(void);

/* Symbol: get_crc_table */
/* Demangled: get_crc_table */
int get_crc_table(void);

/* Symbol: crc32 */
/* Demangled: crc32 */
int crc32(void);

/* Symbol: crc32_combine */
/* Demangled: crc32_combine */
int crc32_combine(void);

/* Symbol: crc32_combine64 */
/* Demangled: crc32_combine64 */
int crc32_combine64(void);

/* Symbol: zlibVersion */
/* Demangled: zlibVersion */
int zlibVersion(void);

/* Symbol: zlibCompileFlags */
/* Demangled: zlibCompileFlags */
int zlibCompileFlags(void);

/* Symbol: zError */
/* Demangled: zError */
int zError(void);

/* Symbol: z_errmsg */
/* Demangled: z_errmsg */
extern void* z_errmsg;

/* Symbol: zmemcpy */
/* Demangled: zmemcpy */
int zmemcpy(void);

/* Symbol: zmemcmp */
/* Demangled: zmemcmp */
int zmemcmp(void);

/* Symbol: zmemzero */
/* Demangled: zmemzero */
int zmemzero(void);

/* Symbol: deflateInit_ */
/* Demangled: deflateInit_ */
int deflateInit_(void);

/* Symbol: deflateInit2_ */
/* Demangled: deflateInit2_ */
int deflateInit2_(void);

/* Symbol: deflateResetKeep */
/* Demangled: deflateResetKeep */
int deflateResetKeep(void);

/* Symbol: deflateEnd */
/* Demangled: deflateEnd */
int deflateEnd(void);

/* Symbol: deflateReset */
/* Demangled: deflateReset */
int deflateReset(void);

/* Symbol: deflateSetDictionary */
/* Demangled: deflateSetDictionary */
int deflateSetDictionary(void);

/* Symbol: deflateGetDictionary */
/* Demangled: deflateGetDictionary */
int deflateGetDictionary(void);

/* Symbol: _tr_init */
/* Demangled: _tr_init */
int _tr_init(void);

/* Symbol: deflateSetHeader */
/* Demangled: deflateSetHeader */
int deflateSetHeader(void);

/* Symbol: deflatePending */
/* Demangled: deflatePending */
int deflatePending(void);

/* Symbol: deflatePrime */
/* Demangled: deflatePrime */
int deflatePrime(void);

/* Symbol: _tr_flush_bits */
/* Demangled: _tr_flush_bits */
int _tr_flush_bits(void);

/* Symbol: deflateParams */
/* Demangled: deflateParams */
int deflateParams(void);

/* Symbol: deflate */
/* Demangled: deflate */
int deflate(void);

/* Symbol: _tr_flush_block */
/* Demangled: _tr_flush_block */
int _tr_flush_block(void);

/* Symbol: _tr_align */
/* Demangled: _tr_align */
int _tr_align(void);

/* Symbol: _length_code */
/* Demangled: _length_code */
extern void* _length_code;

/* Symbol: _dist_code */
/* Demangled: _dist_code */
extern void* _dist_code;

/* Symbol: _tr_stored_block */
/* Demangled: _tr_stored_block */
int _tr_stored_block(void);

/* Symbol: deflateTune */
/* Demangled: deflateTune */
int deflateTune(void);

/* Symbol: deflateBound */
/* Demangled: deflateBound */
int deflateBound(void);

/* Symbol: deflateCopy */
/* Demangled: deflateCopy */
int deflateCopy(void);

/* Symbol: udcChecksum */
/* Demangled: udcChecksum */
int udcChecksum(void);

/* Symbol: udcQueryParam */
/* Demangled: udcQueryParam */
int udcQueryParam(void);

/* Symbol: udcGetCmpLen */
/* Demangled: udcGetCmpLen */
int udcGetCmpLen(void);

/* Symbol: deflate_copyright */
/* Demangled: deflate_copyright */
extern void* deflate_copyright;

/* Symbol: _tr_tally */
/* Demangled: _tr_tally */
int _tr_tally(void);

/* Symbol: init_module */
/* Demangled: init_module */
int init_module(void);

/* Symbol: cleanup_module */
/* Demangled: cleanup_module */
int cleanup_module(void);

/* Symbol: __this_module */
/* Demangled: __this_module */
extern void* __this_module;

__END_DECLS

#endif /* BEGONIA_RE_UDC_LIB_KO_H */
