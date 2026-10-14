/*
 * Reverse-Engineered Source for: libimsma_socketwrapper.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libimsma_socketwrapper"

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
#include "libimsma_socketwrapper.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: SocketWrapper::receiveThread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper13receiveThreadEPv(void) {
    ALOGD("_ZN13SocketWrapper13receiveThreadEPv() called");
    return 0;
}

/* Demangled: SocketWrapper::setUdpConnect() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper13setUdpConnectEv(void) {
    ALOGD("_ZN13SocketWrapper13setUdpConnectEv() called");
    return 0;
}

/* Demangled: SocketWrapper::setSock() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper7setSockEv(void) {
    ALOGD("_ZN13SocketWrapper7setSockEv() called");
    return 0;
}

/* Demangled: SocketWrapper::setRxCallBack(void*, int (*)(void*, android::sp<android::ABuffer> const&)) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper13setRxCallBackEPvPFiS0_RKN7android2spINS1_7ABufferEEEE(void) {
    ALOGD("_ZN13SocketWrapper13setRxCallBackEPvPFiS0_RKN7android2spINS1_7ABufferEEEE() called");
    return 0;
}

/* Demangled: SocketWrapper::~SocketWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapperD0Ev(void) {
    ALOGD("_ZN13SocketWrapperD0Ev() called");
    return 0;
}

/* Demangled: SocketWrapper::setParam(Sock_param) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper8setParamE10Sock_param(void) {
    ALOGD("_ZN13SocketWrapper8setParamE10Sock_param() called");
    return 0;
}

/* Demangled: SocketWrapper::getParam(Sock_param*) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper8getParamEP10Sock_param(void) {
    ALOGD("_ZN13SocketWrapper8getParamEP10Sock_param() called");
    return 0;
}

/* Demangled: SocketWrapper::writeSock(android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper9writeSockERKN7android2spINS0_7ABufferEEE(void) {
    ALOGD("_ZN13SocketWrapper9writeSockERKN7android2spINS0_7ABufferEEE() called");
    return 0;
}

/* Demangled: SocketWrapper::SocketWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapperC1Ev(void) {
    ALOGD("_ZN13SocketWrapperC1Ev() called");
    return 0;
}

/* Demangled: SocketWrapper::SocketWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapperC2Ev(void) {
    ALOGD("_ZN13SocketWrapperC2Ev() called");
    return 0;
}

/* Exported Object: vtable for SocketWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV13SocketWrapper = NULL;

/* Demangled: SocketWrapper::~SocketWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapperD1Ev(void) {
    ALOGD("_ZN13SocketWrapperD1Ev() called");
    return 0;
}

/* Demangled: SocketWrapper::createSock() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper10createSockEv(void) {
    ALOGD("_ZN13SocketWrapper10createSockEv() called");
    return 0;
}

/* Demangled: SocketWrapper::readSock(int, android::sp<android::ABuffer> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper8readSockEiRKN7android2spINS0_7ABufferEEE(void) {
    ALOGD("_ZN13SocketWrapper8readSockEiRKN7android2spINS0_7ABufferEEE() called");
    return 0;
}

/* Demangled: SocketWrapper::~SocketWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapperD2Ev(void) {
    ALOGD("_ZN13SocketWrapperD2Ev() called");
    return 0;
}

/* Demangled: SocketWrapper::dumpAddr(sockaddr*) */
extern "C" __attribute__((visibility("default"))) int _ZN13SocketWrapper8dumpAddrEP8sockaddr(void) {
    ALOGD("_ZN13SocketWrapper8dumpAddrEP8sockaddr() called");
    return 0;
}
