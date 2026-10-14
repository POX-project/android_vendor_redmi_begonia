/*
 * Reverse-Engineered ABI Specification for: libfmq.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libfmq.so
 */

#ifndef BEGONIA_RE_LIBFMQ_H
#define BEGONIA_RE_LIBFMQ_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware9EventFlag15createEventFlagEPNSt3__16atomicIjEEPPS1_ */
/* Demangled: android::hardware::EventFlag::createEventFlag(std::__1::atomic<unsigned int>*, android::hardware::EventFlag**) */
int _ZN7android8hardware9EventFlag15createEventFlagEPNSt3__16atomicIjEEPPS1_(void);

/* Symbol: _ZN7android8hardware9EventFlag15deleteEventFlagEPPS1_ */
/* Demangled: android::hardware::EventFlag::deleteEventFlag(android::hardware::EventFlag**) */
int _ZN7android8hardware9EventFlag15deleteEventFlagEPPS1_(void);

/* Symbol: _ZN7android8hardware9EventFlagC1EPNSt3__16atomicIjEEPi */
/* Demangled: android::hardware::EventFlag::EventFlag(std::__1::atomic<unsigned int>*, int*) */
int _ZN7android8hardware9EventFlagC1EPNSt3__16atomicIjEEPi(void);

/* Symbol: _ZN7android8hardware9EventFlagD2Ev */
/* Demangled: android::hardware::EventFlag::~EventFlag() */
int _ZN7android8hardware9EventFlagD2Ev(void);

/* Symbol: _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void);

/* Symbol: _ZN7android8hardware9EventFlagC2EPNSt3__16atomicIjEEPi */
/* Demangled: android::hardware::EventFlag::EventFlag(std::__1::atomic<unsigned int>*, int*) */
int _ZN7android8hardware9EventFlagC2EPNSt3__16atomicIjEEPi(void);

/* Symbol: _ZN7android8hardware7details5checkEb */
/* Demangled: android::hardware::details::check(bool) */
int _ZN7android8hardware7details5checkEb(void);

/* Symbol: _ZN7android8hardware7details8logErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: android::hardware::details::logError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android8hardware7details8logErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android8hardware9EventFlag10waitHelperEjPjl */
/* Demangled: android::hardware::EventFlag::waitHelper(unsigned int, unsigned int*, long) */
int _ZN7android8hardware9EventFlag10waitHelperEjPjl(void);

/* Symbol: _ZN7android8hardware9EventFlag15createEventFlagEilPPS1_ */
/* Demangled: android::hardware::EventFlag::createEventFlag(int, long, android::hardware::EventFlag**) */
int _ZN7android8hardware9EventFlag15createEventFlagEilPPS1_(void);

/* Symbol: _ZN7android8hardware9EventFlag4wakeEj */
/* Demangled: android::hardware::EventFlag::wake(unsigned int) */
int _ZN7android8hardware9EventFlag4wakeEj(void);

/* Symbol: _ZN7android8hardware9EventFlagC1EilPi */
/* Demangled: android::hardware::EventFlag::EventFlag(int, long, int*) */
int _ZN7android8hardware9EventFlagC1EilPi(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN7android8hardware9EventFlag18unmapEventFlagWordEPNSt3__16atomicIjEEPb */
/* Demangled: android::hardware::EventFlag::unmapEventFlagWord(std::__1::atomic<unsigned int>*, bool*) */
int _ZN7android8hardware9EventFlag18unmapEventFlagWordEPNSt3__16atomicIjEEPb(void);

/* Symbol: _ZN7android8hardware9EventFlag4waitEjPjlb */
/* Demangled: android::hardware::EventFlag::wait(unsigned int, unsigned int*, long, bool) */
int _ZN7android8hardware9EventFlag4waitEjPjlb(void);

/* Symbol: _ZN7android8hardware9EventFlagC2EilPi */
/* Demangled: android::hardware::EventFlag::EventFlag(int, long, int*) */
int _ZN7android8hardware9EventFlagC2EilPi(void);

/* Symbol: _ZN7android8hardware9EventFlagD1Ev */
/* Demangled: android::hardware::EventFlag::~EventFlag() */
int _ZN7android8hardware9EventFlagD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBFMQ_H */
