/*
 * Reverse-Engineered Source for: APUWareUtilsServer.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "APUWareUtilsServer"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "APUWareUtilsServer.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: guard variable for NeuronPerf::GetInstance()::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZGVZN10NeuronPerf11GetInstanceEvE9sInstance = NULL;

/* Demangled: NeuronPerf::ReleasePerfLock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerf15ReleasePerfLockEi(void) {
    ALOGD("_ZN10NeuronPerf15ReleasePerfLockEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: VTT for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::apuware::utils::V1_0::IApuwareUtils-in-vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_NS4_13IApuwareUtilsE = NULL;

/* Demangled: NeuronPerf::~NeuronPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerfD2Ev(void) {
    ALOGD("_ZN10NeuronPerfD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void) {
    ALOGD("_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: APUWareUtilsServerInitInternal */
extern "C" __attribute__((visibility("default"))) int APUWareUtilsServerInitInternal(void) {
    ALOGD("APUWareUtilsServerInitInternal() called");
    return 0;
}

/* Demangled: NeuronPerf::AcquirePerfLock(int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerf15AcquirePerfLockEiN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDEj(void) {
    ALOGD("_ZN10NeuronPerf15AcquirePerfLockEiN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::queryHwConfig(std::__1::function<void (bool, android::hardware::hidl_string const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils13queryHwConfigENSt3__18functionIFvbRKN7android8hardware11hidl_stringEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::acquirePerformanceLock(int, vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22acquirePerformanceLockEiNS4_21PERFORMANCE_MODE_E_HDEj() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils::releasePerformanceLock(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22releasePerformanceLockEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtils22releasePerformanceLockEi() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: NeuronPerf::~NeuronPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerfD1Ev(void) {
    ALOGD("_ZN10NeuronPerfD1Ev() called");
    return 0;
}

/* Demangled: LoadPerfApi() */
extern "C" __attribute__((visibility("default"))) int _Z11LoadPerfApiv(void) {
    ALOGD("_Z11LoadPerfApiv() called");
    return 0;
}

/* Demangled: ClosePerfLib(NeuronPerfApi) */
extern "C" __attribute__((visibility("default"))) int _Z12ClosePerfLib13NeuronPerfApi(void) {
    ALOGD("_Z12ClosePerfLib13NeuronPerfApi() called");
    return 0;
}

/* Demangled: NeuronPerf::NeuronPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerfC2Ev(void) {
    ALOGD("_ZN10NeuronPerfC2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Exported Object: vtable for std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: DEBUG_LOG_XRP */
extern "C" __attribute__((visibility("default"))) void* DEBUG_LOG_XRP = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::seekpos(std::__1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::~basic_filebuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: VTT for vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE = NULL;

/* Exported Object: vtable for std::__1::basic_filebuf<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__113basic_filebufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: NeuronPerf::NeuronPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerfC1Ev(void) {
    ALOGD("_ZN10NeuronPerfC1Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::imbue(std::__1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Demangled: APUWareUtilsServerDeinitInternal */
extern "C" __attribute__((visibility("default"))) int APUWareUtilsServerDeinitInternal(void) {
    ALOGD("APUWareUtilsServerDeinitInternal() called");
    return 0;
}

/* Demangled: NeuronPerf::GetPerfParams(vendor::mediatek::hardware::apuware::utils::V1_0::PERFORMANCE_MODE_E_HD) */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerf13GetPerfParamsEN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDE(void) {
    ALOGD("_ZN10NeuronPerf13GetPerfParamsEN6vendor8mediatek8hardware7apuware5utils4V1_021PERFORMANCE_MODE_E_HDE() called");
    return 0;
}

/* Demangled: NeuronPerf::~NeuronPerf() */
extern "C" __attribute__((visibility("default"))) int _ZN10NeuronPerfD0Ev(void) {
    ALOGD("_ZN10NeuronPerfD0Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::apuware::utils::V1_0::implementation::ApuwareUtils */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware7apuware5utils4V1_014implementation12ApuwareUtilsE = NULL;

/* Demangled: InitUtilsServerDebugConfig() */
extern "C" __attribute__((visibility("default"))) int _Z26InitUtilsServerDebugConfigv(void) {
    ALOGD("_Z26InitUtilsServerDebugConfigv() called");
    return 0;
}

/* Exported Object: vtable for NeuronPerf */
extern "C" __attribute__((visibility("default"))) void* _ZTV10NeuronPerf = NULL;

/* Demangled: std::__1::basic_filebuf<char, std::__1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__113basic_filebufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_ifstream<char, std::__1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt3__114basic_ifstreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Exported Object: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE = NULL;

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void) {
    ALOGD("_ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv() called");
    return 0;
}

/* Exported Object: NeuronPerf::GetInstance()::sInstance */
extern "C" __attribute__((visibility("default"))) void* _ZZN10NeuronPerf11GetInstanceEvE9sInstance = NULL;
