/*
 * Reverse-Engineered ABI Specification for: libimsma_socketwrapper.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libimsma_socketwrapper.so
 */

#ifndef BEGONIA_RE_LIBIMSMA_SOCKETWRAPPER_H
#define BEGONIA_RE_LIBIMSMA_SOCKETWRAPPER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN13SocketWrapper13receiveThreadEPv */
/* Demangled: SocketWrapper::receiveThread(void*) */
int _ZN13SocketWrapper13receiveThreadEPv(void);

/* Symbol: _ZN13SocketWrapper13setUdpConnectEv */
/* Demangled: SocketWrapper::setUdpConnect() */
int _ZN13SocketWrapper13setUdpConnectEv(void);

/* Symbol: _ZN13SocketWrapper7setSockEv */
/* Demangled: SocketWrapper::setSock() */
int _ZN13SocketWrapper7setSockEv(void);

/* Symbol: _ZN13SocketWrapper13setRxCallBackEPvPFiS0_RKN7android2spINS1_7ABufferEEEE */
/* Demangled: SocketWrapper::setRxCallBack(void*, int (*)(void*, android::sp<android::ABuffer> const&)) */
int _ZN13SocketWrapper13setRxCallBackEPvPFiS0_RKN7android2spINS1_7ABufferEEEE(void);

/* Symbol: _ZN13SocketWrapperD0Ev */
/* Demangled: SocketWrapper::~SocketWrapper() */
int _ZN13SocketWrapperD0Ev(void);

/* Symbol: _ZN13SocketWrapper8setParamE10Sock_param */
/* Demangled: SocketWrapper::setParam(Sock_param) */
int _ZN13SocketWrapper8setParamE10Sock_param(void);

/* Symbol: _ZN13SocketWrapper8getParamEP10Sock_param */
/* Demangled: SocketWrapper::getParam(Sock_param*) */
int _ZN13SocketWrapper8getParamEP10Sock_param(void);

/* Symbol: _ZN13SocketWrapper9writeSockERKN7android2spINS0_7ABufferEEE */
/* Demangled: SocketWrapper::writeSock(android::sp<android::ABuffer> const&) */
int _ZN13SocketWrapper9writeSockERKN7android2spINS0_7ABufferEEE(void);

/* Symbol: _ZN13SocketWrapperC1Ev */
/* Demangled: SocketWrapper::SocketWrapper() */
int _ZN13SocketWrapperC1Ev(void);

/* Symbol: _ZN13SocketWrapperC2Ev */
/* Demangled: SocketWrapper::SocketWrapper() */
int _ZN13SocketWrapperC2Ev(void);

/* Symbol: _ZTV13SocketWrapper */
/* Demangled: vtable for SocketWrapper */
extern void* _ZTV13SocketWrapper;

/* Symbol: _ZN13SocketWrapperD1Ev */
/* Demangled: SocketWrapper::~SocketWrapper() */
int _ZN13SocketWrapperD1Ev(void);

/* Symbol: _ZN13SocketWrapper10createSockEv */
/* Demangled: SocketWrapper::createSock() */
int _ZN13SocketWrapper10createSockEv(void);

/* Symbol: _ZN13SocketWrapper8readSockEiRKN7android2spINS0_7ABufferEEE */
/* Demangled: SocketWrapper::readSock(int, android::sp<android::ABuffer> const&) */
int _ZN13SocketWrapper8readSockEiRKN7android2spINS0_7ABufferEEE(void);

/* Symbol: _ZN13SocketWrapperD2Ev */
/* Demangled: SocketWrapper::~SocketWrapper() */
int _ZN13SocketWrapperD2Ev(void);

/* Symbol: _ZN13SocketWrapper8dumpAddrEP8sockaddr */
/* Demangled: SocketWrapper::dumpAddr(sockaddr*) */
int _ZN13SocketWrapper8dumpAddrEP8sockaddr(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBIMSMA_SOCKETWRAPPER_H */
