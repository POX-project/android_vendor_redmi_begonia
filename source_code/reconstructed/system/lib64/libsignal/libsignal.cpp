/*
 * Reverse-Engineered Source for: libsignal.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libsignal"

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
#include "libsignal.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__1::shared_ptr<android::ImsSignal>::~shared_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__110shared_ptrIN7android9ImsSignalEED2Ev(void) {
    ALOGD("_ZNSt3__110shared_ptrIN7android9ImsSignalEED2Ev() called");
    return 0;
}

/* Exported Object: android::ImsSignal::mInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9ImsSignal9mInstanceE = NULL;

/* Exported Object: vtable for std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEEE = NULL;

/* Demangled: android::ImsSignal::ImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignalC2Ev(void) {
    ALOGD("_ZN7android9ImsSignalC2Ev() called");
    return 0;
}

/* Demangled: android::ImsSignal::getSignal(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal9getSignalEPiS1_(void) {
    ALOGD("_ZN7android9ImsSignal9getSignalEPiS1_() called");
    return 0;
}

/* Demangled: android::ImsSignal::~ImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignalD1Ev(void) {
    ALOGD("_ZN7android9ImsSignalD1Ev() called");
    return 0;
}

/* Demangled: android::ImsSignal::getDefaultImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal19getDefaultImsSignalEv(void) {
    ALOGD("_ZN7android9ImsSignal19getDefaultImsSignalEv() called");
    return 0;
}

/* Exported Object: android::ImsSignal::mutex */
extern "C" __attribute__((visibility("default"))) void* _ZN7android9ImsSignal5mutexE = NULL;

/* Demangled: android::ImsSignal::~ImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignalD2Ev(void) {
    ALOGD("_ZN7android9ImsSignalD2Ev() called");
    return 0;
}

/* Demangled: android::ImsSignal::feedSignal(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal10feedSignalEi(void) {
    ALOGD("_ZN7android9ImsSignal10feedSignalEi() called");
    return 0;
}

/* Demangled: void std::__1::vector<std::__1::pair<long, int>, std::__1::allocator<std::__1::pair<long, int> > >::__push_back_slow_path<std::__1::pair<long, int> >(std::__1::pair<long, int>&&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_4pairIliEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorINS_4pairIliEENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_() called");
    return 0;
}

/* Demangled: android::ImsSignal::deleteDefaultImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal22deleteDefaultImsSignalEv(void) {
    ALOGD("_ZN7android9ImsSignal22deleteDefaultImsSignalEv() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> >::__on_zero_shared_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE21__on_zero_shared_weakEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE21__on_zero_shared_weakEv() called");
    return 0;
}

/* Demangled: android::ImsSignal::ImsSignal() */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignalC1Ev(void) {
    ALOGD("_ZN7android9ImsSignalC1Ev() called");
    return 0;
}

/* Demangled: android::ImsSignal::signalToString(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal14signalToStringEi(void) {
    ALOGD("_ZN7android9ImsSignal14signalToStringEi() called");
    return 0;
}

/* Demangled: android::ImsSignal::signalToBitrateRatio(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android9ImsSignal20signalToBitrateRatioEi(void) {
    ALOGD("_ZN7android9ImsSignal20signalToBitrateRatioEi() called");
    return 0;
}

/* Demangled: std::__1::__shared_ptr_emplace<android::ImsSignal, std::__1::allocator<android::ImsSignal> >::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt3__120__shared_ptr_emplaceIN7android9ImsSignalENS_9allocatorIS2_EEE16__on_zero_sharedEv() called");
    return 0;
}
