/*
 * Reverse-Engineered Source for: libgwsd-ril.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libgwsd_ril"

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
#include "libgwsd_ril.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::sp<RfxMessage>::operator=(android::sp<RfxMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spI10RfxMessageEaSERKS2_(void) {
    ALOGD("_ZN7android2spI10RfxMessageEaSERKS2_() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::requestSetCallValidTimer(RfxBaseHandler*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandler24requestSetCallValidTimerEP14RfxBaseHandleri(void) {
    ALOGD("_ZN21RfxGwsdSettingHandler24requestSetCallValidTimerEP14RfxBaseHandleri() called");
    return 0;
}

/* Demangled: createCallControlHandler */
extern "C" __attribute__((visibility("default"))) int createCallControlHandler(void) {
    ALOGD("createCallControlHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleGwsdEvent(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler15handleGwsdEventEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler15handleGwsdEventEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::autoAcceptIncoming(RfxController*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler18autoAcceptIncomingEP13RfxControllerii(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler18autoAcceptIncomingEP13RfxControllerii() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreResponse(RfxController*, android::sp<RfxMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler23onHandleTelCoreResponseEP13RfxControllerRKN7android2spI10RfxMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler23onHandleTelCoreResponseEP13RfxControllerRKN7android2spI10RfxMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::RfxGwsdSettingHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandlerC1Ev(void) {
    ALOGD("_ZN21RfxGwsdSettingHandlerC1Ev() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::RfxGwsdSettingHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandlerC2Ev(void) {
    ALOGD("_ZN21RfxGwsdSettingHandlerC2Ev() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandlerD0Ev(void) {
    ALOGD("_ZN21RfxGwsdSettingHandlerD0Ev() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandlerD1Ev(void) {
    ALOGD("_ZN21RfxGwsdSettingHandlerD1Ev() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandlerD2Ev(void) {
    ALOGD("_ZN21RfxGwsdSettingHandlerD2Ev() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleGwsdUrc(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler13handleGwsdUrcEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler13handleGwsdUrcEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleFakeAccept(RfxController*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler16handleFakeAcceptEP13RfxController(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler16handleFakeAcceptEP13RfxController() called");
    return 0;
}

/* Demangled: destroySettingHandler */
extern "C" __attribute__((visibility("default"))) int destroySettingHandler(void) {
    ALOGD("destroySettingHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::onRadioOff(RfxController*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler10onRadioOffEP13RfxController(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler10onRadioOffEP13RfxController() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreUrc(RfxController*, android::sp<RfxMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler18onHandleTelCoreUrcEP13RfxControllerRKN7android2spI10RfxMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler18onHandleTelCoreUrcEP13RfxControllerRKN7android2spI10RfxMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleImsIncomingCall(RfxController*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler21handleImsIncomingCallEP13RfxController(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler21handleImsIncomingCallEP13RfxController() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleIcpgIndicationMessage(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler27handleIcpgIndicationMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler27handleIcpgIndicationMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::RfxGwsdCallControlHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandlerC1Ev(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandlerC1Ev() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::RfxGwsdCallControlHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandlerC2Ev(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandlerC2Ev() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandlerD0Ev(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandlerD0Ev() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandlerD1Ev(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandlerD1Ev() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandlerD2Ev(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandlerD2Ev() called");
    return 0;
}

/* Exported Object: vtable for RfxGwsdCallControlHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV25RfxGwsdCallControlHandler = NULL;

/* Demangled: RfxGwsdCallControlHandler::handleGwsdRequest(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler17handleGwsdRequestEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler17handleGwsdRequestEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::registerForGwsdEvent(RfxBaseHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler20registerForGwsdEventEP14RfxBaseHandler(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler20registerForGwsdEventEP14RfxBaseHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::handleIcpgResultMessage(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler23handleIcpgResultMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler23handleIcpgResultMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi() called");
    return 0;
}

/* Demangled: destroyCallControlHandler */
extern "C" __attribute__((visibility("default"))) int destroyCallControlHandler(void) {
    ALOGD("destroyCallControlHandler() called");
    return 0;
}

/* Exported Object: vtable for RfxGwsdSettingHandler */
extern "C" __attribute__((visibility("default"))) void* _ZTV21RfxGwsdSettingHandler = NULL;

/* Demangled: RfxGwsdCallControlHandler::handleFakeReject(RfxController*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler16handleFakeRejectEP13RfxController(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler16handleFakeRejectEP13RfxController() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::requestFakeReject(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler17requestFakeRejectEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler17requestFakeRejectEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::registerForGwsdRequest(RfxBaseHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler22registerForGwsdRequestEP14RfxBaseHandler(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler22registerForGwsdRequestEP14RfxBaseHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::notifyGwsdImsIncomingCall(RfxController*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler25notifyGwsdImsIncomingCallEP13RfxControlleri(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler25notifyGwsdImsIncomingCallEP13RfxControlleri() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::requestSetGwsdMode(RfxBaseHandler*, int, char*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandler18requestSetGwsdModeEP14RfxBaseHandleriPcS2_(void) {
    ALOGD("_ZN21RfxGwsdSettingHandler18requestSetGwsdModeEP14RfxBaseHandleriPcS2_() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::requestSetIgnoreSameNumberInterval(RfxBaseHandler*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandler34requestSetIgnoreSameNumberIntervalEP14RfxBaseHandleri(void) {
    ALOGD("_ZN21RfxGwsdSettingHandler34requestSetIgnoreSameNumberIntervalEP14RfxBaseHandleri() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::requestFakeAccept(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler17requestFakeAcceptEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler17requestFakeAcceptEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::onAutoFakeAcceptTimer(RfxController*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler21onAutoFakeAcceptTimerEP13RfxController(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler21onAutoFakeAcceptTimerEP13RfxController() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::updateRQ(RfxController*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler8updateRQEP13RfxControllerib(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler8updateRQEP13RfxControllerib() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::requestSetKeepAliveByIpData(RfxBaseHandler*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandler27requestSetKeepAliveByIpDataEP14RfxBaseHandlerPc(void) {
    ALOGD("_ZN21RfxGwsdSettingHandler27requestSetKeepAliveByIpDataEP14RfxBaseHandlerPc() called");
    return 0;
}

/* Demangled: RfxGwsdSettingHandler::requestSetKeepAliveByPDCPCtrlPDU(RfxBaseHandler*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN21RfxGwsdSettingHandler32requestSetKeepAliveByPDCPCtrlPDUEP14RfxBaseHandlerPc(void) {
    ALOGD("_ZN21RfxGwsdSettingHandler32requestSetKeepAliveByPDCPCtrlPDUEP14RfxBaseHandlerPc() called");
    return 0;
}

/* Demangled: createSettingHandler */
extern "C" __attribute__((visibility("default"))) int createSettingHandler(void) {
    ALOGD("createSettingHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::registerForGwsdUrc(RfxBaseHandler*) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler18registerForGwsdUrcEP14RfxBaseHandler(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler18registerForGwsdUrcEP14RfxBaseHandler() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::fakeGetCurrentCalls(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler19fakeGetCurrentCallsEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler19fakeGetCurrentCallsEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreRequest(RfxController*, android::sp<RfxMessage> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler22onHandleTelCoreRequestEP13RfxControllerRKN7android2spI10RfxMessageEE(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler22onHandleTelCoreRequestEP13RfxControllerRKN7android2spI10RfxMessageEE() called");
    return 0;
}

/* Demangled: RfxGwsdCallControlHandler::notifyDualSimGwsdImsIncomingCall(RfxController*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN25RfxGwsdCallControlHandler32notifyDualSimGwsdImsIncomingCallEP13RfxControlleri(void) {
    ALOGD("_ZN25RfxGwsdCallControlHandler32notifyDualSimGwsdImsIncomingCallEP13RfxControlleri() called");
    return 0;
}
