/*
 * Reverse-Engineered ABI Specification for: libmtksysutils.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtksysutils.so
 */

#ifndef BEGONIA_RE_LIBMTKSYSUTILS_H
#define BEGONIA_RE_LIBMTKSYSUTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN17FrameworkListenerC1Ei */
/* Demangled: FrameworkListener::FrameworkListener(int) */
int _ZN17FrameworkListenerC1Ei(void);

/* Symbol: _ZTV12NetlinkEvent */
/* Demangled: vtable for NetlinkEvent */
extern void* _ZTV12NetlinkEvent;

/* Symbol: _ZN12SocketClient8sendDataEPKvi */
/* Demangled: SocketClient::sendData(void const*, int) */
int _ZN12SocketClient8sendDataEPKvi(void);

/* Symbol: _ZN14SocketListener13startListenerEv */
/* Demangled: SocketListener::startListener() */
int _ZN14SocketListener13startListenerEv(void);

/* Symbol: _ZN15FrameworkClientC2Ei */
/* Demangled: FrameworkClient::FrameworkClient(int) */
int _ZN15FrameworkClientC2Ei(void);

/* Symbol: _ZN17FrameworkListener15onDataAvailableEP12SocketClient */
/* Demangled: FrameworkListener::onDataAvailable(SocketClient*) */
int _ZN17FrameworkListener15onDataAvailableEP12SocketClient(void);

/* Symbol: _ZN12NetlinkEventD1Ev */
/* Demangled: NetlinkEvent::~NetlinkEvent() */
int _ZN12NetlinkEventD1Ev(void);

/* Symbol: _ZN12NetlinkEvent4dumpEv */
/* Demangled: NetlinkEvent::dump() */
int _ZN12NetlinkEvent4dumpEv(void);

/* Symbol: _ZN12SocketClientC1Eibb */
/* Demangled: SocketClient::SocketClient(int, bool, bool) */
int _ZN12SocketClientC1Eibb(void);

/* Symbol: _ZN14SocketListener7releaseEP12SocketClientb */
/* Demangled: SocketListener::release(SocketClient*, bool) */
int _ZN14SocketListener7releaseEP12SocketClientb(void);

/* Symbol: _ZN14SocketListenerD2Ev */
/* Demangled: SocketListener::~SocketListener() */
int _ZN14SocketListenerD2Ev(void);

/* Symbol: _ZN12NetlinkEvent24parseAsciiNetlinkMessageEPci */
/* Demangled: NetlinkEvent::parseAsciiNetlinkMessage(char*, int) */
int _ZN12NetlinkEvent24parseAsciiNetlinkMessageEPci(void);

/* Symbol: _ZN12SocketClientC2Eib */
/* Demangled: SocketClient::SocketClient(int, bool) */
int _ZN12SocketClientC2Eib(void);

/* Symbol: _ZN14SocketListener11runListenerEv */
/* Demangled: SocketListener::runListener() */
int _ZN14SocketListener11runListenerEv(void);

/* Symbol: _ZN14SocketListener15runOnEachSocketEP19SocketClientCommand */
/* Demangled: SocketListener::runOnEachSocket(SocketClientCommand*) */
int _ZN14SocketListener15runOnEachSocketEP19SocketClientCommand(void);

/* Symbol: _ZN14SocketListenerC2EPKcbb */
/* Demangled: SocketListener::SocketListener(char const*, bool, bool) */
int _ZN14SocketListenerC2EPKcbb(void);

/* Symbol: _ZN17FrameworkListenerC1EPKc */
/* Demangled: FrameworkListener::FrameworkListener(char const*) */
int _ZN17FrameworkListenerC1EPKc(void);

/* Symbol: _ZTVN7android8sysutils4ListIP16FrameworkCommandEE */
/* Demangled: vtable for android::sysutils::List<FrameworkCommand*> */
extern void* _ZTVN7android8sysutils4ListIP16FrameworkCommandEE;

/* Symbol: _ZN12NetlinkEvent16parseNoRAMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseNoRAMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent16parseNoRAMessageEPK8nlmsghdr(void);

/* Symbol: _ZN14SocketListener13sendBroadcastEiPKcb */
/* Demangled: SocketListener::sendBroadcast(int, char const*, bool) */
int _ZN14SocketListener13sendBroadcastEiPKcb(void);

/* Symbol: _ZTV16FrameworkCommand */
/* Demangled: vtable for FrameworkCommand */
extern void* _ZTV16FrameworkCommand;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN16FrameworkCommand10runCommandEP12SocketClientiPPc */
/* Demangled: FrameworkCommand::runCommand(SocketClient*, int, char**) */
int _ZN16FrameworkCommand10runCommandEP12SocketClientiPPc(void);

/* Symbol: _ZN17FrameworkListenerC2EPKcb */
/* Demangled: FrameworkListener::FrameworkListener(char const*, bool) */
int _ZN17FrameworkListenerC2EPKcb(void);

/* Symbol: _ZN12NetlinkEvent9findParamEPKc */
/* Demangled: NetlinkEvent::findParam(char const*) */
int _ZN12NetlinkEvent9findParamEPKc(void);

/* Symbol: _ZN12SocketClientD2Ev */
/* Demangled: SocketClient::~SocketClient() */
int _ZN12SocketClientD2Ev(void);

/* Symbol: _ZN14ServiceManagerC2Ev */
/* Demangled: ServiceManager::ServiceManager() */
int _ZN14ServiceManagerC2Ev(void);

/* Symbol: _ZN14SocketListenerC2EPKcb */
/* Demangled: SocketListener::SocketListener(char const*, bool) */
int _ZN14SocketListenerC2EPKcb(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN17FrameworkListenerC2Ei */
/* Demangled: FrameworkListener::FrameworkListener(int) */
int _ZN17FrameworkListenerC2Ei(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN17FrameworkListener15dispatchCommandEP12SocketClientPc */
/* Demangled: FrameworkListener::dispatchCommand(SocketClient*, char*) */
int _ZN17FrameworkListener15dispatchCommandEP12SocketClientPc(void);

/* Symbol: _ZN12NetlinkEventD2Ev */
/* Demangled: NetlinkEvent::~NetlinkEvent() */
int _ZN12NetlinkEventD2Ev(void);

/* Symbol: _ZTV15FrameworkClient */
/* Demangled: vtable for FrameworkClient */
extern void* _ZTV15FrameworkClient;

/* Symbol: _ZN17FrameworkListener11registerCmdEP16FrameworkCommand */
/* Demangled: FrameworkListener::registerCmd(FrameworkCommand*) */
int _ZN17FrameworkListener11registerCmdEP16FrameworkCommand(void);

/* Symbol: _ZN17FrameworkListenerC1EPKcb */
/* Demangled: FrameworkListener::FrameworkListener(char const*, bool) */
int _ZN17FrameworkListenerC1EPKcb(void);

/* Symbol: _ZN12NetlinkEvent18parseIfAddrMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseIfAddrMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent18parseIfAddrMessageEPK8nlmsghdr(void);

/* Symbol: _ZN12NetlinkEvent22parseUlogPacketMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseUlogPacketMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent22parseUlogPacketMessageEPK8nlmsghdr(void);

/* Symbol: _ZN12NetlinkEvent25parseBinaryNetlinkMessageEPci */
/* Demangled: NetlinkEvent::parseBinaryNetlinkMessage(char*, int) */
int _ZN12NetlinkEvent25parseBinaryNetlinkMessageEPci(void);

/* Symbol: _ZN15NetlinkListener15onDataAvailableEP12SocketClient */
/* Demangled: NetlinkListener::onDataAvailable(SocketClient*) */
int _ZN15NetlinkListener15onDataAvailableEP12SocketClient(void);

/* Symbol: _ZTV12SocketClient */
/* Demangled: vtable for SocketClient */
extern void* _ZTV12SocketClient;

/* Symbol: _ZN14SocketListener13startListenerEi */
/* Demangled: SocketListener::startListener(int) */
int _ZN14SocketListener13startListenerEi(void);

/* Symbol: _ZN14SocketListenerD0Ev */
/* Demangled: SocketListener::~SocketListener() */
int _ZN14SocketListenerD0Ev(void);

/* Symbol: _ZTV14SocketListener */
/* Demangled: vtable for SocketListener */
extern void* _ZTV14SocketListener;

/* Symbol: _ZTVN7android8sysutils4ListIP12SocketClientEE */
/* Demangled: vtable for android::sysutils::List<SocketClient*> */
extern void* _ZTVN7android8sysutils4ListIP12SocketClientEE;

/* Symbol: _ZN14ServiceManager4stopEPKc */
/* Demangled: ServiceManager::stop(char const*) */
int _ZN14ServiceManager4stopEPKc(void);

/* Symbol: _ZTV14ServiceManager */
/* Demangled: vtable for ServiceManager */
extern void* _ZTV14ServiceManager;

/* Symbol: _ZN12SocketClient4initEibb */
/* Demangled: SocketClient::init(int, bool, bool) */
int _ZN12SocketClient4initEibb(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: _ZN12NetlinkEvent21parseNdUserOptMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseNdUserOptMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent21parseNdUserOptMessageEPK8nlmsghdr(void);

/* Symbol: _ZN12SocketClient15sendDataLockedvEP5ioveci */
/* Demangled: SocketClient::sendDataLockedv(iovec*, int) */
int _ZN12SocketClient15sendDataLockedvEP5ioveci(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN12NetlinkEventC1Ev */
/* Demangled: NetlinkEvent::NetlinkEvent() */
int _ZN12NetlinkEventC1Ev(void);

/* Symbol: _ZN12SocketClient13sendBinaryMsgEiPKvi */
/* Demangled: SocketClient::sendBinaryMsg(int, void const*, int) */
int _ZN12SocketClient13sendBinaryMsgEiPKvi(void);

/* Symbol: _ZN12SocketClientD0Ev */
/* Demangled: SocketClient::~SocketClient() */
int _ZN12SocketClientD0Ev(void);

/* Symbol: _ZN14SocketListenerC2Eib */
/* Demangled: SocketListener::SocketListener(int, bool) */
int _ZN14SocketListenerC2Eib(void);

/* Symbol: _ZN17FrameworkListener4initEPKcb */
/* Demangled: FrameworkListener::init(char const*, bool) */
int _ZN17FrameworkListener4initEPKcb(void);

/* Symbol: _ZN12SocketClient6decRefEv */
/* Demangled: SocketClient::decRef() */
int _ZN12SocketClient6decRefEv(void);

/* Symbol: _ZN12SocketClient7sendMsgEPKc */
/* Demangled: SocketClient::sendMsg(char const*) */
int _ZN12SocketClient7sendMsgEPKc(void);

/* Symbol: _ZN12SocketClient8sendCodeEi */
/* Demangled: SocketClient::sendCode(int) */
int _ZN12SocketClient8sendCodeEi(void);

/* Symbol: _ZN12SocketClientC1Eib */
/* Demangled: SocketClient::SocketClient(int, bool) */
int _ZN12SocketClientC1Eib(void);

/* Symbol: _ZN15FrameworkClientC1Ei */
/* Demangled: FrameworkClient::FrameworkClient(int) */
int _ZN15FrameworkClientC1Ei(void);

/* Symbol: _ZN12NetlinkEventD0Ev */
/* Demangled: NetlinkEvent::~NetlinkEvent() */
int _ZN12NetlinkEventD0Ev(void);

/* Symbol: _ZN14SocketListener11threadStartEPv */
/* Demangled: SocketListener::threadStart(void*) */
int _ZN14SocketListener11threadStartEPv(void);

/* Symbol: _ZN15FrameworkClient7sendMsgEPKc */
/* Demangled: FrameworkClient::sendMsg(char const*) */
int _ZN15FrameworkClient7sendMsgEPKc(void);

/* Symbol: _ZN15FrameworkClient7sendMsgEPKcS1_ */
/* Demangled: FrameworkClient::sendMsg(char const*, char const*) */
int _ZN15FrameworkClient7sendMsgEPKcS1_(void);

/* Symbol: _ZN12SocketClient7sendMsgEiPKcb */
/* Demangled: SocketClient::sendMsg(int, char const*, bool) */
int _ZN12SocketClient7sendMsgEiPKcb(void);

/* Symbol: _ZN14ServiceManager9isRunningEPKc */
/* Demangled: ServiceManager::isRunning(char const*) */
int _ZN14ServiceManager9isRunningEPKc(void);

/* Symbol: _ZN12SocketClient7sendMsgEiPKcbb */
/* Demangled: SocketClient::sendMsg(int, char const*, bool, bool) */
int _ZN12SocketClient7sendMsgEiPKcbb(void);

/* Symbol: _ZN16FrameworkCommandC2EPKc */
/* Demangled: FrameworkCommand::FrameworkCommand(char const*) */
int _ZN16FrameworkCommandC2EPKc(void);

/* Symbol: uevent_kernel_recv */
/* Demangled: uevent_kernel_recv */
int uevent_kernel_recv(void);

/* Symbol: _ZN12SocketClient8quoteArgEPKc */
/* Demangled: SocketClient::quoteArg(char const*) */
int _ZN12SocketClient8quoteArgEPKc(void);

/* Symbol: _ZN14SocketListener4initEPKcibb */
/* Demangled: SocketListener::init(char const*, int, bool, bool) */
int _ZN14SocketListener4initEPKcibb(void);

/* Symbol: _ZN14SocketListenerD1Ev */
/* Demangled: SocketListener::~SocketListener() */
int _ZN14SocketListenerD1Ev(void);

/* Symbol: _Z15clearRaInfoFlagPc */
/* Demangled: clearRaInfoFlag(char*) */
int _Z15clearRaInfoFlagPc(void);

/* Symbol: _ZN12NetlinkEvent6decodeEPcii */
/* Demangled: NetlinkEvent::decode(char*, int, int) */
int _ZN12NetlinkEvent6decodeEPcii(void);

/* Symbol: _ZN15NetlinkListenerC2Eii */
/* Demangled: NetlinkListener::NetlinkListener(int, int) */
int _ZN15NetlinkListenerC2Eii(void);

/* Symbol: _ZN14ServiceManager5startEPKc */
/* Demangled: ServiceManager::start(char const*) */
int _ZN14ServiceManager5startEPKc(void);

/* Symbol: _ZN12NetlinkEvent14parseRtMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseRtMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent14parseRtMessageEPK8nlmsghdr(void);

/* Symbol: _ZN12NetlinkEvent18parseIfInfoMessageEPK8nlmsghdr */
/* Demangled: NetlinkEvent::parseIfInfoMessage(nlmsghdr const*) */
int _ZN12NetlinkEvent18parseIfInfoMessageEPK8nlmsghdr(void);

/* Symbol: _ZN12SocketClient6incRefEv */
/* Demangled: SocketClient::incRef() */
int _ZN12SocketClient6incRefEv(void);

/* Symbol: _ZN12SocketClientC2Eibb */
/* Demangled: SocketClient::SocketClient(int, bool, bool) */
int _ZN12SocketClientC2Eibb(void);

/* Symbol: _ZN12NetlinkEventC2Ev */
/* Demangled: NetlinkEvent::NetlinkEvent() */
int _ZN12NetlinkEventC2Ev(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZTV15NetlinkListener */
/* Demangled: vtable for NetlinkListener */
extern void* _ZTV15NetlinkListener;

/* Symbol: _ZN12SocketClient9sendDatavEP5ioveci */
/* Demangled: SocketClient::sendDatav(iovec*, int) */
int _ZN12SocketClient9sendDatavEP5ioveci(void);

/* Symbol: _ZN12SocketClientD1Ev */
/* Demangled: SocketClient::~SocketClient() */
int _ZN12SocketClientD1Ev(void);

/* Symbol: _ZN14SocketListener12stopListenerEv */
/* Demangled: SocketListener::stopListener() */
int _ZN14SocketListener12stopListenerEv(void);

/* Symbol: _ZN17FrameworkListenerC2EPKc */
/* Demangled: FrameworkListener::FrameworkListener(char const*) */
int _ZN17FrameworkListenerC2EPKc(void);

/* Symbol: _ZTV17FrameworkListener */
/* Demangled: vtable for FrameworkListener */
extern void* _ZTV17FrameworkListener;

/* Symbol: _ZN12NetlinkEvent20parseNfPacketMessageEP8nlmsghdr */
/* Demangled: NetlinkEvent::parseNfPacketMessage(nlmsghdr*) */
int _ZN12NetlinkEvent20parseNfPacketMessageEP8nlmsghdr(void);

/* Symbol: _ZN15NetlinkListenerC2Ei */
/* Demangled: NetlinkListener::NetlinkListener(int) */
int _ZN15NetlinkListenerC2Ei(void);

/* Symbol: _ZN14ServiceManagerC1Ev */
/* Demangled: ServiceManager::ServiceManager() */
int _ZN14ServiceManagerC1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKSYSUTILS_H */
