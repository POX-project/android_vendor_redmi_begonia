/*
 * Reverse-Engineered ABI Specification for: applypatch
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Executable Service Daemon
 * Soname: applypatch
 */

#ifndef BEGONIA_RE_APPLYPATCH_H
#define BEGONIA_RE_APPLYPATCH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone(std::__1::__function::__base<void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>*) const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEPNS0_6__baseISB_EE(void);

/* Symbol: _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_ */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::operator()(char const*&&) */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EclEOS3_(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone(std::__1::__function::__base<void (char const*)>*) const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEPNS0_6__baseIS4_EE(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE7destroyEv(void);

/* Symbol: _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE */
/* Demangled: vtable for std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)> */
extern void* _ZTVNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEE;

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::__clone() const */
int _ZNKSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7__cloneEv(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::destroy_deallocate() */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EE18destroy_deallocateEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv */
/* Demangled: std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)>::destroy() */
int _ZNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_E7destroyEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_ */
/* Demangled: std::__1::__function::__func<android::base::LogdLogger, std::__1::allocator<android::base::LogdLogger>, void (android::base::LogId, android::base::LogSeverity, char const*, char const*, unsigned int, char const*)>::operator()(android::base::LogId&&, android::base::LogSeverity&&, char const*&&, char const*&&, unsigned int&&, char const*&&) */
int _ZNSt3__110__function6__funcIN7android4base10LogdLoggerENS_9allocatorIS4_EEFvNS3_5LogIdENS3_11LogSeverityEPKcSA_jSA_EEclEOS7_OS8_OSA_SF_OjSF_(void);

/* Symbol: _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE */
/* Demangled: vtable for std::__1::__function::__func<void (*)(char const*), std::__1::allocator<void (*)(char const*)>, void (char const*)> */
extern void* _ZTVNSt3__110__function6__funcIPFvPKcENS_9allocatorIS5_EES4_EE;

__END_DECLS

#endif /* BEGONIA_RE_APPLYPATCH_H */
