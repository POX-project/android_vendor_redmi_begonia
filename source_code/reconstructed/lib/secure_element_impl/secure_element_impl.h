/*
 * Reverse-Engineered ABI Specification for: secure_element-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: secure_element-impl.so
 */

#ifndef BEGONIA_RE_SECURE_ELEMENT_IMPL_H
#define BEGONIA_RE_SECURE_ELEMENT_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: seCloseChannel */
/* Demangled: seCloseChannel */
int seCloseChannel(void);

/* Symbol: open_spi_clk */
/* Demangled: open_spi_clk */
int open_spi_clk(void);

/* Symbol: _Z7memscpyPvjPKvj */
/* Demangled: memscpy(void*, unsigned int, void const*, unsigned int) */
int _Z7memscpyPvjPKvj(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _Z17allChannelsClosedv */
/* Demangled: allChannelsClosed() */
int _Z17allChannelsClosedv(void);

/* Symbol: gp_open */
/* Demangled: gp_open */
int gp_open(void);

/* Symbol: isGetAtrOnce */
/* Demangled: isGetAtrOnce */
extern void* isGetAtrOnce;

/* Symbol: wrapper_invoke_cmd */
/* Demangled: wrapper_invoke_cmd */
int wrapper_invoke_cmd(void);

/* Symbol: close_spi_clk */
/* Demangled: close_spi_clk */
int close_spi_clk(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: jcop_fail_flag */
/* Demangled: jcop_fail_flag */
extern void* jcop_fail_flag;

/* Symbol: seInit */
/* Demangled: seInit */
int seInit(void);

/* Symbol: seIsCardPresent */
/* Demangled: seIsCardPresent */
int seIsCardPresent(void);

/* Symbol: seOpenBasicChannel */
/* Demangled: seOpenBasicChannel */
int seOpenBasicChannel(void);

/* Symbol: _Z25prepare_and_do_transceivePKhiPhiPi */
/* Demangled: prepare_and_do_transceive(unsigned char const*, int, unsigned char*, int, int*) */
int _Z25prepare_and_do_transceivePKhiPhiPi(void);

/* Symbol: ese_power_on */
/* Demangled: ese_power_on */
int ese_power_on(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: context */
/* Demangled: context */
extern void* context;

/* Symbol: gp_close */
/* Demangled: gp_close */
int gp_close(void);

/* Symbol: seGetAtr */
/* Demangled: seGetAtr */
int seGetAtr(void);

/* Symbol: _Z9ese_closev */
/* Demangled: ese_close() */
int _Z9ese_closev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: iseSEGPOpen */
/* Demangled: iseSEGPOpen */
extern void* iseSEGPOpen;

/* Symbol: session */
/* Demangled: session */
extern void* session;

/* Symbol: _Z15resetJcopUpdatev */
/* Demangled: resetJcopUpdate() */
int _Z15resetJcopUpdatev(void);

/* Symbol: gp_generic_transceive */
/* Demangled: gp_generic_transceive */
int gp_generic_transceive(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: ese_hard_reset */
/* Demangled: ese_hard_reset */
int ese_hard_reset(void);

/* Symbol: seTransmit */
/* Demangled: seTransmit */
int seTransmit(void);

/* Symbol: _Z8ese_initv */
/* Demangled: ese_init() */
int _Z8ese_initv(void);

/* Symbol: _Z8ese_openv */
/* Demangled: ese_open() */
int _Z8ese_openv(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: seOpenLogicalChannel */
/* Demangled: seOpenLogicalChannel */
int seOpenLogicalChannel(void);

/* Symbol: _Z11memsApducmpPKhjS0_j */
/* Demangled: memsApducmp(unsigned char const*, unsigned int, unsigned char const*, unsigned int) */
int _Z11memsApducmpPKhjS0_j(void);

/* Symbol: _Z10print_textNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKhi */
/* Demangled: print_text(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, unsigned char const*, int) */
int _Z10print_textNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPKhi(void);

/* Symbol: ese_power_off */
/* Demangled: ese_power_off */
int ese_power_off(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

__END_DECLS

#endif /* BEGONIA_RE_SECURE_ELEMENT_IMPL_H */
