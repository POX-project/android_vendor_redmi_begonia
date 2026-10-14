/*
 * Reverse-Engineered ABI Specification for: APUWareUtilsServer.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: APUWareUtilsServer.so
 */

#ifndef BEGONIA_RE_APUWAREUTILSSERVER_H
#define BEGONIA_RE_APUWAREUTILSSERVER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZGVZN10NeuronPerf11GetInstanceEvE9sInstance */
/* Demangled: guard variable for NeuronPerf::GetInstance()::sInstance */
extern void* _ZGVZN10NeuronPerf11GetInstanceEvE9sInstance;

/* Symbol: _ZN10NeuronPerf15ReleasePerfLockEi */
/* Demangled: NeuronPerf::ReleasePerfLock(int) */
int _ZN10NeuronPerf15ReleasePerfLockEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void);

/* Symbol: _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_NS4_13IApuwareUtilsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils-in-vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_NS4_13IApuwareUtilsE;

/* Symbol: _ZN10NeuronPerfD2Ev */
/* Demangled: NeuronPerf::~NeuronPerf() */
int _ZN10NeuronPerfD2Ev(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void);

/* Symbol: APUWareUtilsServerInitInternal */
/* Demangled: APUWareUtilsServerInitInternal */
int APUWareUtilsServerInitInternal(void);

/* Symbol: _ZN10NeuronPerf15AcquirePerfLockEiN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDEj */
/* Demangled: NeuronPerf::AcquirePerfLock(int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
int _ZN10NeuronPerf15AcquirePerfLockEiN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::queryHwConfig(std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::acquirePerformanceLock(int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22releasePerformanceLockEi */
/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::releasePerformanceLock(int) */
int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22releasePerformanceLockEi(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN10NeuronPerfD1Ev */
/* Demangled: NeuronPerf::~NeuronPerf() */
int _ZN10NeuronPerfD1Ev(void);

/* Symbol: _Z11LoadPerfApiv */
/* Demangled: LoadPerfApi() */
int _Z11LoadPerfApiv(void);

/* Symbol: _Z12ClosePerfLib13NeuronPerfApi */
/* Demangled: ClosePerfLib(NeuronPerfApi) */
int _Z12ClosePerfLib13NeuronPerfApi(void);

/* Symbol: _ZN10NeuronPerfC2Ev */
/* Demangled: NeuronPerf::NeuronPerf() */
int _ZN10NeuronPerfC2Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void);

/* Symbol: _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE;

/* Symbol: DEBUG_LOG_XRP */
/* Demangled: DEBUG_LOG_XRP */
extern void* DEBUG_LOG_XRP;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern void* _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE;

/* Symbol: _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE */
/* Demangled: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE;

/* Symbol: _ZN10NeuronPerfC1Ev */
/* Demangled: NeuronPerf::NeuronPerf() */
int _ZN10NeuronPerfC1Ev(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void);

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void);

/* Symbol: APUWareUtilsServerDeinitInternal */
/* Demangled: APUWareUtilsServerDeinitInternal */
int APUWareUtilsServerDeinitInternal(void);

/* Symbol: _ZN10NeuronPerf13GetPerfParamsEN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDE */
/* Demangled: NeuronPerf::GetPerfParams(vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD) */
int _ZN10NeuronPerf13GetPerfParamsEN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDE(void);

/* Symbol: _ZN10NeuronPerfD0Ev */
/* Demangled: NeuronPerf::~NeuronPerf() */
int _ZN10NeuronPerfD0Ev(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE;

/* Symbol: _Z26InitUtilsServerDebugConfigv */
/* Demangled: InitUtilsServerDebugConfig() */
int _Z26InitUtilsServerDebugConfigv(void);

/* Symbol: _ZTV10NeuronPerf */
/* Demangled: vtable for NeuronPerf */
extern void* _ZTV10NeuronPerf;

/* Symbol: _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv */
/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZZN10NeuronPerf11GetInstanceEvE9sInstance */
/* Demangled: NeuronPerf::GetInstance()::sInstance */
extern void* _ZZN10NeuronPerf11GetInstanceEvE9sInstance;

__END_DECLS

#endif /* BEGONIA_RE_APUWAREUTILSSERVER_H */
