/*
 * Reverse-Engineered Source for: libmtksysutils.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtksysutils"

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
#include "libmtksysutils.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: FrameworkListener::FrameworkListener(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC1Ei(void) {
    ALOGD("_ZN17FrameworkListenerC1Ei() called");
    return 0;
}

/* Exported Object: vtable for NetlinkEvent */
extern "C" __attribute__((visibility("default"))) void* _ZTV12NetlinkEvent = NULL;

/* Demangled: SocketClient::sendData(void const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient8sendDataEPKvi(void) {
    ALOGD("_ZN12SocketClient8sendDataEPKvi() called");
    return 0;
}

/* Demangled: SocketListener::startListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener13startListenerEv(void) {
    ALOGD("_ZN14SocketListener13startListenerEv() called");
    return 0;
}

/* Demangled: FrameworkClient::FrameworkClient(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15FrameworkClientC2Ei(void) {
    ALOGD("_ZN15FrameworkClientC2Ei() called");
    return 0;
}

/* Demangled: FrameworkListener::onDataAvailable(SocketClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListener15onDataAvailableEP12SocketClient(void) {
    ALOGD("_ZN17FrameworkListener15onDataAvailableEP12SocketClient() called");
    return 0;
}

/* Demangled: NetlinkEvent::~NetlinkEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEventD1Ev(void) {
    ALOGD("_ZN12NetlinkEventD1Ev() called");
    return 0;
}

/* Demangled: NetlinkEvent::dump() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent4dumpEv(void) {
    ALOGD("_ZN12NetlinkEvent4dumpEv() called");
    return 0;
}

/* Demangled: SocketClient::SocketClient(int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientC1Eibb(void) {
    ALOGD("_ZN12SocketClientC1Eibb() called");
    return 0;
}

/* Demangled: SocketListener::release(SocketClient*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener7releaseEP12SocketClientb(void) {
    ALOGD("_ZN14SocketListener7releaseEP12SocketClientb() called");
    return 0;
}

/* Demangled: SocketListener::~SocketListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerD2Ev(void) {
    ALOGD("_ZN14SocketListenerD2Ev() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseAsciiNetlinkMessage(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent24parseAsciiNetlinkMessageEPci(void) {
    ALOGD("_ZN12NetlinkEvent24parseAsciiNetlinkMessageEPci() called");
    return 0;
}

/* Demangled: SocketClient::SocketClient(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientC2Eib(void) {
    ALOGD("_ZN12SocketClientC2Eib() called");
    return 0;
}

/* Demangled: SocketListener::runListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener11runListenerEv(void) {
    ALOGD("_ZN14SocketListener11runListenerEv() called");
    return 0;
}

/* Demangled: SocketListener::runOnEachSocket(SocketClientCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener15runOnEachSocketEP19SocketClientCommand(void) {
    ALOGD("_ZN14SocketListener15runOnEachSocketEP19SocketClientCommand() called");
    return 0;
}

/* Demangled: SocketListener::SocketListener(char const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerC2EPKcbb(void) {
    ALOGD("_ZN14SocketListenerC2EPKcbb() called");
    return 0;
}

/* Demangled: FrameworkListener::FrameworkListener(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC1EPKc(void) {
    ALOGD("_ZN17FrameworkListenerC1EPKc() called");
    return 0;
}

/* Exported Object: vtable for android::sysutils::List<FrameworkCommand*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8sysutils4ListIP16FrameworkCommandEE = NULL;

/* Demangled: NetlinkEvent::parseNoRAMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent16parseNoRAMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent16parseNoRAMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: SocketListener::sendBroadcast(int, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener13sendBroadcastEiPKcb(void) {
    ALOGD("_ZN14SocketListener13sendBroadcastEiPKcb() called");
    return 0;
}

/* Exported Object: vtable for FrameworkCommand */
extern "C" __attribute__((visibility("default"))) void* _ZTV16FrameworkCommand = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: FrameworkCommand::runCommand(SocketClient*, int, char**) */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameworkCommand10runCommandEP12SocketClientiPPc(void) {
    ALOGD("_ZN16FrameworkCommand10runCommandEP12SocketClientiPPc() called");
    return 0;
}

/* Demangled: FrameworkListener::FrameworkListener(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC2EPKcb(void) {
    ALOGD("_ZN17FrameworkListenerC2EPKcb() called");
    return 0;
}

/* Demangled: NetlinkEvent::findParam(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent9findParamEPKc(void) {
    ALOGD("_ZN12NetlinkEvent9findParamEPKc() called");
    return 0;
}

/* Demangled: SocketClient::~SocketClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientD2Ev(void) {
    ALOGD("_ZN12SocketClientD2Ev() called");
    return 0;
}

/* Demangled: ServiceManager::ServiceManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14ServiceManagerC2Ev(void) {
    ALOGD("_ZN14ServiceManagerC2Ev() called");
    return 0;
}

/* Demangled: SocketListener::SocketListener(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerC2EPKcb(void) {
    ALOGD("_ZN14SocketListenerC2EPKcb() called");
    return 0;
}

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: FrameworkListener::FrameworkListener(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC2Ei(void) {
    ALOGD("_ZN17FrameworkListenerC2Ei() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: FrameworkListener::dispatchCommand(SocketClient*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListener15dispatchCommandEP12SocketClientPc(void) {
    ALOGD("_ZN17FrameworkListener15dispatchCommandEP12SocketClientPc() called");
    return 0;
}

/* Demangled: NetlinkEvent::~NetlinkEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEventD2Ev(void) {
    ALOGD("_ZN12NetlinkEventD2Ev() called");
    return 0;
}

/* Exported Object: vtable for FrameworkClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV15FrameworkClient = NULL;

/* Demangled: FrameworkListener::registerCmd(FrameworkCommand*) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListener11registerCmdEP16FrameworkCommand(void) {
    ALOGD("_ZN17FrameworkListener11registerCmdEP16FrameworkCommand() called");
    return 0;
}

/* Demangled: FrameworkListener::FrameworkListener(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC1EPKcb(void) {
    ALOGD("_ZN17FrameworkListenerC1EPKcb() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseIfAddrMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent18parseIfAddrMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent18parseIfAddrMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseUlogPacketMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent22parseUlogPacketMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent22parseUlogPacketMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseBinaryNetlinkMessage(char*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent25parseBinaryNetlinkMessageEPci(void) {
    ALOGD("_ZN12NetlinkEvent25parseBinaryNetlinkMessageEPci() called");
    return 0;
}

/* Demangled: NetlinkListener::onDataAvailable(SocketClient*) */
extern "C" __attribute__((visibility("default"))) int _ZN15NetlinkListener15onDataAvailableEP12SocketClient(void) {
    ALOGD("_ZN15NetlinkListener15onDataAvailableEP12SocketClient() called");
    return 0;
}

/* Exported Object: vtable for SocketClient */
extern "C" __attribute__((visibility("default"))) void* _ZTV12SocketClient = NULL;

/* Demangled: SocketListener::startListener(int) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener13startListenerEi(void) {
    ALOGD("_ZN14SocketListener13startListenerEi() called");
    return 0;
}

/* Demangled: SocketListener::~SocketListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerD0Ev(void) {
    ALOGD("_ZN14SocketListenerD0Ev() called");
    return 0;
}

/* Exported Object: vtable for SocketListener */
extern "C" __attribute__((visibility("default"))) void* _ZTV14SocketListener = NULL;

/* Exported Object: vtable for android::sysutils::List<SocketClient*> */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android8sysutils4ListIP12SocketClientEE = NULL;

/* Demangled: ServiceManager::stop(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ServiceManager4stopEPKc(void) {
    ALOGD("_ZN14ServiceManager4stopEPKc() called");
    return 0;
}

/* Exported Object: vtable for ServiceManager */
extern "C" __attribute__((visibility("default"))) void* _ZTV14ServiceManager = NULL;

/* Demangled: SocketClient::init(int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient4initEibb(void) {
    ALOGD("_ZN12SocketClient4initEibb() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseNdUserOptMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent21parseNdUserOptMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent21parseNdUserOptMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: SocketClient::sendDataLockedv(iovec*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient15sendDataLockedvEP5ioveci(void) {
    ALOGD("_ZN12SocketClient15sendDataLockedvEP5ioveci() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: NetlinkEvent::NetlinkEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEventC1Ev(void) {
    ALOGD("_ZN12NetlinkEventC1Ev() called");
    return 0;
}

/* Demangled: SocketClient::sendBinaryMsg(int, void const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient13sendBinaryMsgEiPKvi(void) {
    ALOGD("_ZN12SocketClient13sendBinaryMsgEiPKvi() called");
    return 0;
}

/* Demangled: SocketClient::~SocketClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientD0Ev(void) {
    ALOGD("_ZN12SocketClientD0Ev() called");
    return 0;
}

/* Demangled: SocketListener::SocketListener(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerC2Eib(void) {
    ALOGD("_ZN14SocketListenerC2Eib() called");
    return 0;
}

/* Demangled: FrameworkListener::init(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListener4initEPKcb(void) {
    ALOGD("_ZN17FrameworkListener4initEPKcb() called");
    return 0;
}

/* Demangled: SocketClient::decRef() */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient6decRefEv(void) {
    ALOGD("_ZN12SocketClient6decRefEv() called");
    return 0;
}

/* Demangled: SocketClient::sendMsg(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient7sendMsgEPKc(void) {
    ALOGD("_ZN12SocketClient7sendMsgEPKc() called");
    return 0;
}

/* Demangled: SocketClient::sendCode(int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient8sendCodeEi(void) {
    ALOGD("_ZN12SocketClient8sendCodeEi() called");
    return 0;
}

/* Demangled: SocketClient::SocketClient(int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientC1Eib(void) {
    ALOGD("_ZN12SocketClientC1Eib() called");
    return 0;
}

/* Demangled: FrameworkClient::FrameworkClient(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15FrameworkClientC1Ei(void) {
    ALOGD("_ZN15FrameworkClientC1Ei() called");
    return 0;
}

/* Demangled: NetlinkEvent::~NetlinkEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEventD0Ev(void) {
    ALOGD("_ZN12NetlinkEventD0Ev() called");
    return 0;
}

/* Demangled: SocketListener::threadStart(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener11threadStartEPv(void) {
    ALOGD("_ZN14SocketListener11threadStartEPv() called");
    return 0;
}

/* Demangled: FrameworkClient::sendMsg(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15FrameworkClient7sendMsgEPKc(void) {
    ALOGD("_ZN15FrameworkClient7sendMsgEPKc() called");
    return 0;
}

/* Demangled: FrameworkClient::sendMsg(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15FrameworkClient7sendMsgEPKcS1_(void) {
    ALOGD("_ZN15FrameworkClient7sendMsgEPKcS1_() called");
    return 0;
}

/* Demangled: SocketClient::sendMsg(int, char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient7sendMsgEiPKcb(void) {
    ALOGD("_ZN12SocketClient7sendMsgEiPKcb() called");
    return 0;
}

/* Demangled: ServiceManager::isRunning(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ServiceManager9isRunningEPKc(void) {
    ALOGD("_ZN14ServiceManager9isRunningEPKc() called");
    return 0;
}

/* Demangled: SocketClient::sendMsg(int, char const*, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient7sendMsgEiPKcbb(void) {
    ALOGD("_ZN12SocketClient7sendMsgEiPKcbb() called");
    return 0;
}

/* Demangled: FrameworkCommand::FrameworkCommand(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16FrameworkCommandC2EPKc(void) {
    ALOGD("_ZN16FrameworkCommandC2EPKc() called");
    return 0;
}

/* Demangled: uevent_kernel_recv */
extern "C" __attribute__((visibility("default"))) int uevent_kernel_recv(void) {
    ALOGD("uevent_kernel_recv() called");
    return 0;
}

/* Demangled: SocketClient::quoteArg(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient8quoteArgEPKc(void) {
    ALOGD("_ZN12SocketClient8quoteArgEPKc() called");
    return 0;
}

/* Demangled: SocketListener::init(char const*, int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener4initEPKcibb(void) {
    ALOGD("_ZN14SocketListener4initEPKcibb() called");
    return 0;
}

/* Demangled: SocketListener::~SocketListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListenerD1Ev(void) {
    ALOGD("_ZN14SocketListenerD1Ev() called");
    return 0;
}

/* Demangled: clearRaInfoFlag(char*) */
extern "C" __attribute__((visibility("default"))) int _Z15clearRaInfoFlagPc(void) {
    ALOGD("_Z15clearRaInfoFlagPc() called");
    return 0;
}

/* Demangled: NetlinkEvent::decode(char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent6decodeEPcii(void) {
    ALOGD("_ZN12NetlinkEvent6decodeEPcii() called");
    return 0;
}

/* Demangled: NetlinkListener::NetlinkListener(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15NetlinkListenerC2Eii(void) {
    ALOGD("_ZN15NetlinkListenerC2Eii() called");
    return 0;
}

/* Demangled: ServiceManager::start(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14ServiceManager5startEPKc(void) {
    ALOGD("_ZN14ServiceManager5startEPKc() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseRtMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent14parseRtMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent14parseRtMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: NetlinkEvent::parseIfInfoMessage(nlmsghdr const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent18parseIfInfoMessageEPK8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent18parseIfInfoMessageEPK8nlmsghdr() called");
    return 0;
}

/* Demangled: SocketClient::incRef() */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient6incRefEv(void) {
    ALOGD("_ZN12SocketClient6incRefEv() called");
    return 0;
}

/* Demangled: SocketClient::SocketClient(int, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientC2Eibb(void) {
    ALOGD("_ZN12SocketClientC2Eibb() called");
    return 0;
}

/* Demangled: NetlinkEvent::NetlinkEvent() */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEventC2Ev(void) {
    ALOGD("_ZN12NetlinkEventC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: vtable for NetlinkListener */
extern "C" __attribute__((visibility("default"))) void* _ZTV15NetlinkListener = NULL;

/* Demangled: SocketClient::sendDatav(iovec*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClient9sendDatavEP5ioveci(void) {
    ALOGD("_ZN12SocketClient9sendDatavEP5ioveci() called");
    return 0;
}

/* Demangled: SocketClient::~SocketClient() */
extern "C" __attribute__((visibility("default"))) int _ZN12SocketClientD1Ev(void) {
    ALOGD("_ZN12SocketClientD1Ev() called");
    return 0;
}

/* Demangled: SocketListener::stopListener() */
extern "C" __attribute__((visibility("default"))) int _ZN14SocketListener12stopListenerEv(void) {
    ALOGD("_ZN14SocketListener12stopListenerEv() called");
    return 0;
}

/* Demangled: FrameworkListener::FrameworkListener(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17FrameworkListenerC2EPKc(void) {
    ALOGD("_ZN17FrameworkListenerC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for FrameworkListener */
extern "C" __attribute__((visibility("default"))) void* _ZTV17FrameworkListener = NULL;

/* Demangled: NetlinkEvent::parseNfPacketMessage(nlmsghdr*) */
extern "C" __attribute__((visibility("default"))) int _ZN12NetlinkEvent20parseNfPacketMessageEP8nlmsghdr(void) {
    ALOGD("_ZN12NetlinkEvent20parseNfPacketMessageEP8nlmsghdr() called");
    return 0;
}

/* Demangled: NetlinkListener::NetlinkListener(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15NetlinkListenerC2Ei(void) {
    ALOGD("_ZN15NetlinkListenerC2Ei() called");
    return 0;
}

/* Demangled: ServiceManager::ServiceManager() */
extern "C" __attribute__((visibility("default"))) int _ZN14ServiceManagerC1Ev(void) {
    ALOGD("_ZN14ServiceManagerC1Ev() called");
    return 0;
}
