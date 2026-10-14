/*
 * Reverse-Engineered Source for: libfmq.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libfmq"

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
#include "libfmq.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::hardware::EventFlag::createEventFlag(std::__1::atomic<unsigned int>*, android::hardware::EventFlag**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag15createEventFlagEPNSt3__16atomicIjEEPPS1_(void) {
    ALOGD("_ZN7android8hardware9EventFlag15createEventFlagEPNSt3__16atomicIjEEPPS1_() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::deleteEventFlag(android::hardware::EventFlag**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag15deleteEventFlagEPPS1_(void) {
    ALOGD("_ZN7android8hardware9EventFlag15deleteEventFlagEPPS1_() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::EventFlag(std::__1::atomic<unsigned int>*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagC1EPNSt3__16atomicIjEEPi(void) {
    ALOGD("_ZN7android8hardware9EventFlagC1EPNSt3__16atomicIjEEPi() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::~EventFlag() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagD2Ev(void) {
    ALOGD("_ZN7android8hardware9EventFlagD2Ev() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::operator<< <char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE(void) {
    ALOGD("_ZNSt3__1lsIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_ostreamIT_T0_EES9_RKNS_12basic_stringIS6_S7_T1_EE() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::EventFlag(std::__1::atomic<unsigned int>*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagC2EPNSt3__16atomicIjEEPi(void) {
    ALOGD("_ZN7android8hardware9EventFlagC2EPNSt3__16atomicIjEEPi() called");
    return 0;
}

/* Demangled: android::hardware::details::check(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details5checkEb(void) {
    ALOGD("_ZN7android8hardware7details5checkEb() called");
    return 0;
}

/* Demangled: android::hardware::details::logError(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware7details8logErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void) {
    ALOGD("_ZN7android8hardware7details8logErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::waitHelper(unsigned int, unsigned int*, long) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag10waitHelperEjPjl(void) {
    ALOGD("_ZN7android8hardware9EventFlag10waitHelperEjPjl() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::createEventFlag(int, long, android::hardware::EventFlag**) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag15createEventFlagEilPPS1_(void) {
    ALOGD("_ZN7android8hardware9EventFlag15createEventFlagEilPPS1_() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::wake(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag4wakeEj(void) {
    ALOGD("_ZN7android8hardware9EventFlag4wakeEj() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::EventFlag(int, long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagC1EilPi(void) {
    ALOGD("_ZN7android8hardware9EventFlagC1EilPi() called");
    return 0;
}

/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void) {
    ALOGD("_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::unmapEventFlagWord(std::__1::atomic<unsigned int>*, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag18unmapEventFlagWordEPNSt3__16atomicIjEEPb(void) {
    ALOGD("_ZN7android8hardware9EventFlag18unmapEventFlagWordEPNSt3__16atomicIjEEPb() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::wait(unsigned int, unsigned int*, long, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlag4waitEjPjlb(void) {
    ALOGD("_ZN7android8hardware9EventFlag4waitEjPjlb() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::EventFlag(int, long, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagC2EilPi(void) {
    ALOGD("_ZN7android8hardware9EventFlagC2EilPi() called");
    return 0;
}

/* Demangled: android::hardware::EventFlag::~EventFlag() */
extern "C" __attribute__((visibility("default"))) int _ZN7android8hardware9EventFlagD1Ev(void) {
    ALOGD("_ZN7android8hardware9EventFlagD1Ev() called");
    return 0;
}
