/*
 * Reverse-Engineered ABI Specification for: libsignal.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libsignal.so
 */

#ifndef BEGONIA_RE_LIBSIGNAL_H
#define BEGONIA_RE_LIBSIGNAL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__110shared_ptrIN7android9ImsSignalEED2Ev */
/* Demangled: std::__1::shared_ptr<android::ImsSignal>::~shared_ptr() */
int _ZNSt3__110shared_ptrIN7android9ImsSignalEED2Ev(void);

/* Symbol: _ZN7android9ImsSignal9mInstanceE */
/* Demangled: android::ImsSignal::mInstance */
extern void* _ZN7android9ImsSignal9mInstanceE;

/* Symbol: _ZTVNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEEE */
/* Demangled: vtable for std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> > */
extern void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEEE;

/* Symbol: _ZN7android9ImsSignalC2Ev */
/* Demangled: android::ImsSignal::ImsSignal() */
int _ZN7android9ImsSignalC2Ev(void);

/* Symbol: _ZN7android9ImsSignal9getSignalEPiS1_ */
/* Demangled: android::ImsSignal::getSignal(int*, int*) */
int _ZN7android9ImsSignal9getSignalEPiS1_(void);

/* Symbol: _ZN7android9ImsSignalD1Ev */
/* Demangled: android::ImsSignal::~ImsSignal() */
int _ZN7android9ImsSignalD1Ev(void);

/* Symbol: _ZN7android9ImsSignal19getDefaultImsSignalEv */
/* Demangled: android::ImsSignal::getDefaultImsSignal() */
int _ZN7android9ImsSignal19getDefaultImsSignalEv(void);

/* Symbol: _ZN7android9ImsSignal5mutexE */
/* Demangled: android::ImsSignal::mutex */
extern void* _ZN7android9ImsSignal5mutexE;

/* Symbol: _ZN7android9ImsSignalD2Ev */
/* Demangled: android::ImsSignal::~ImsSignal() */
int _ZN7android9ImsSignalD2Ev(void);

/* Symbol: _ZN7android9ImsSignal10feedSignalEi */
/* Demangled: android::ImsSignal::feedSignal(int) */
int _ZN7android9ImsSignal10feedSignalEi(void);

/* Symbol: _ZNSt3__16vectorINS_4pairIliEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_ */
/* Demangled: void std::__1::vector<std::__1::pair<long, int>, std::__1::allocator<std::__1::pair<long, int> > >::__push_back_slow_path<std::__1::pair<long, int> >(std::__1::pair<long, int>&&) */
int _ZNSt3__16vectorINS_4pairIliEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void);

/* Symbol: _ZN7android9ImsSignal22deleteDefaultImsSignalEv */
/* Demangled: android::ImsSignal::deleteDefaultImsSignal() */
int _ZN7android9ImsSignal22deleteDefaultImsSignalEv(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE21__on_zero_shared_weakEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> >::__on_zero_shared_weak() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void);

/* Symbol: _ZN7android9ImsSignalC1Ev */
/* Demangled: android::ImsSignal::ImsSignal() */
int _ZN7android9ImsSignalC1Ev(void);

/* Symbol: _ZN7android9ImsSignal14signalToStringEi */
/* Demangled: android::ImsSignal::signalToString(int) */
int _ZN7android9ImsSignal14signalToStringEi(void);

/* Symbol: _ZN7android9ImsSignal20signalToBitrateRatioEi */
/* Demangled: android::ImsSignal::signalToBitrateRatio(int) */
int _ZN7android9ImsSignal20signalToBitrateRatioEi(void);

/* Symbol: _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE16__on_zero_sharedEv */
/* Demangled: std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> >::__on_zero_shared() */
int _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE16__on_zero_sharedEv(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSIGNAL_H */
