/*
 * Reverse-Engineered ABI Specification for: libladder.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libladder.so
 */

#ifndef BEGONIA_RE_LIBLADDER_H
#define BEGONIA_RE_LIBLADDER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: UnwindCurThreadBT */
/* Demangled: UnwindCurThreadBT */
int UnwindCurThreadBT(void);

/* Symbol: UnwindThreadBT */
/* Demangled: UnwindThreadBT */
int UnwindThreadBT(void);

/* Symbol: _ZTVN11unwindstack8UnwinderE */
/* Demangled: vtable for unwindstack::Unwinder */
extern void* _ZTVN11unwindstack8UnwinderE;

/* Symbol: UnwindCurProcessBT */
/* Demangled: UnwindCurProcessBT */
int UnwindCurProcessBT(void);

/* Symbol: UnwindCurProcessBT_Vector */
/* Demangled: UnwindCurProcessBT_Vector */
int UnwindCurProcessBT_Vector(void);

/* Symbol: _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj */
/* Demangled: std::__1::vector<unwindstack::FrameData, std::__1::allocator<unwindstack::FrameData> >::reserve(unsigned int) */
int _ZNSt3__16vectorIN11unwindstack9FrameDataENS_9allocatorIS2_EEE7reserveEj(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__push_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE21__push_back_slow_pathIRKS6_EEvOT_(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZTVN11unwindstack9LocalMapsE */
/* Demangled: vtable for unwindstack::LocalMaps */
extern void* _ZTVN11unwindstack9LocalMapsE;

__END_DECLS

#endif /* BEGONIA_RE_LIBLADDER_H */
