/*
 * Reverse-Engineered ABI Specification for: libgwsd-ril.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libgwsd-ril.so
 */

#ifndef BEGONIA_RE_LIBGWSD_RIL_H
#define BEGONIA_RE_LIBGWSD_RIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android2spI10RfxMessageEaSERKS2_ */
/* Demangled: android::sp<RfxMessage>::operator=(android::sp<RfxMessage> const&) */
int _ZN7android2spI10RfxMessageEaSERKS2_(void);

/* Symbol: _ZN21RfxGwsdSettingHandler24requestSetCallValidTimerEP14RfxBaseHandleri */
/* Demangled: RfxGwsdSettingHandler::requestSetCallValidTimer(RfxBaseHandler*, int) */
int _ZN21RfxGwsdSettingHandler24requestSetCallValidTimerEP14RfxBaseHandleri(void);

/* Symbol: createCallControlHandler */
/* Demangled: createCallControlHandler */
int createCallControlHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler15handleGwsdEventEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE */
/* Demangled: RfxGwsdCallControlHandler::handleGwsdEvent(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
int _ZN25RfxGwsdCallControlHandler15handleGwsdEventEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler18autoAcceptIncomingEP13RfxControllerii */
/* Demangled: RfxGwsdCallControlHandler::autoAcceptIncoming(RfxController*, int, int) */
int _ZN25RfxGwsdCallControlHandler18autoAcceptIncomingEP13RfxControllerii(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler23onHandleTelCoreResponseEP13RfxControllerRKN7android2spI10RfxMessageEE */
/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreResponse(RfxController*, android::sp<RfxMessage> const&) */
int _ZN25RfxGwsdCallControlHandler23onHandleTelCoreResponseEP13RfxControllerRKN7android2spI10RfxMessageEE(void);

/* Symbol: _ZN21RfxGwsdSettingHandlerC1Ev */
/* Demangled: RfxGwsdSettingHandler::RfxGwsdSettingHandler() */
int _ZN21RfxGwsdSettingHandlerC1Ev(void);

/* Symbol: _ZN21RfxGwsdSettingHandlerC2Ev */
/* Demangled: RfxGwsdSettingHandler::RfxGwsdSettingHandler() */
int _ZN21RfxGwsdSettingHandlerC2Ev(void);

/* Symbol: _ZN21RfxGwsdSettingHandlerD0Ev */
/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
int _ZN21RfxGwsdSettingHandlerD0Ev(void);

/* Symbol: _ZN21RfxGwsdSettingHandlerD1Ev */
/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
int _ZN21RfxGwsdSettingHandlerD1Ev(void);

/* Symbol: _ZN21RfxGwsdSettingHandlerD2Ev */
/* Demangled: RfxGwsdSettingHandler::~RfxGwsdSettingHandler() */
int _ZN21RfxGwsdSettingHandlerD2Ev(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler13handleGwsdUrcEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi */
/* Demangled: RfxGwsdCallControlHandler::handleGwsdUrc(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
int _ZN25RfxGwsdCallControlHandler13handleGwsdUrcEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler16handleFakeAcceptEP13RfxController */
/* Demangled: RfxGwsdCallControlHandler::handleFakeAccept(RfxController*) */
int _ZN25RfxGwsdCallControlHandler16handleFakeAcceptEP13RfxController(void);

/* Symbol: destroySettingHandler */
/* Demangled: destroySettingHandler */
int destroySettingHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler10onRadioOffEP13RfxController */
/* Demangled: RfxGwsdCallControlHandler::onRadioOff(RfxController*) */
int _ZN25RfxGwsdCallControlHandler10onRadioOffEP13RfxController(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler18onHandleTelCoreUrcEP13RfxControllerRKN7android2spI10RfxMessageEE */
/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreUrc(RfxController*, android::sp<RfxMessage> const&) */
int _ZN25RfxGwsdCallControlHandler18onHandleTelCoreUrcEP13RfxControllerRKN7android2spI10RfxMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler21handleImsIncomingCallEP13RfxController */
/* Demangled: RfxGwsdCallControlHandler::handleImsIncomingCall(RfxController*) */
int _ZN25RfxGwsdCallControlHandler21handleImsIncomingCallEP13RfxController(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler27handleIcpgIndicationMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi */
/* Demangled: RfxGwsdCallControlHandler::handleIcpgIndicationMessage(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
int _ZN25RfxGwsdCallControlHandler27handleIcpgIndicationMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void);

/* Symbol: _ZN25RfxGwsdCallControlHandlerC1Ev */
/* Demangled: RfxGwsdCallControlHandler::RfxGwsdCallControlHandler() */
int _ZN25RfxGwsdCallControlHandlerC1Ev(void);

/* Symbol: _ZN25RfxGwsdCallControlHandlerC2Ev */
/* Demangled: RfxGwsdCallControlHandler::RfxGwsdCallControlHandler() */
int _ZN25RfxGwsdCallControlHandlerC2Ev(void);

/* Symbol: _ZN25RfxGwsdCallControlHandlerD0Ev */
/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
int _ZN25RfxGwsdCallControlHandlerD0Ev(void);

/* Symbol: _ZN25RfxGwsdCallControlHandlerD1Ev */
/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
int _ZN25RfxGwsdCallControlHandlerD1Ev(void);

/* Symbol: _ZN25RfxGwsdCallControlHandlerD2Ev */
/* Demangled: RfxGwsdCallControlHandler::~RfxGwsdCallControlHandler() */
int _ZN25RfxGwsdCallControlHandlerD2Ev(void);

/* Symbol: _ZTV25RfxGwsdCallControlHandler */
/* Demangled: vtable for RfxGwsdCallControlHandler */
extern void* _ZTV25RfxGwsdCallControlHandler;

/* Symbol: _ZN25RfxGwsdCallControlHandler17handleGwsdRequestEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE */
/* Demangled: RfxGwsdCallControlHandler::handleGwsdRequest(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
int _ZN25RfxGwsdCallControlHandler17handleGwsdRequestEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler20registerForGwsdEventEP14RfxBaseHandler */
/* Demangled: RfxGwsdCallControlHandler::registerForGwsdEvent(RfxBaseHandler*) */
int _ZN25RfxGwsdCallControlHandler20registerForGwsdEventEP14RfxBaseHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler23handleIcpgResultMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi */
/* Demangled: RfxGwsdCallControlHandler::handleIcpgResultMessage(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
int _ZN25RfxGwsdCallControlHandler23handleIcpgResultMessageEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void);

/* Symbol: destroyCallControlHandler */
/* Demangled: destroyCallControlHandler */
int destroyCallControlHandler(void);

/* Symbol: _ZTV21RfxGwsdSettingHandler */
/* Demangled: vtable for RfxGwsdSettingHandler */
extern void* _ZTV21RfxGwsdSettingHandler;

/* Symbol: _ZN25RfxGwsdCallControlHandler16handleFakeRejectEP13RfxController */
/* Demangled: RfxGwsdCallControlHandler::handleFakeReject(RfxController*) */
int _ZN25RfxGwsdCallControlHandler16handleFakeRejectEP13RfxController(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler17requestFakeRejectEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE */
/* Demangled: RfxGwsdCallControlHandler::requestFakeReject(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
int _ZN25RfxGwsdCallControlHandler17requestFakeRejectEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler22registerForGwsdRequestEP14RfxBaseHandler */
/* Demangled: RfxGwsdCallControlHandler::registerForGwsdRequest(RfxBaseHandler*) */
int _ZN25RfxGwsdCallControlHandler22registerForGwsdRequestEP14RfxBaseHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler25notifyGwsdImsIncomingCallEP13RfxControlleri */
/* Demangled: RfxGwsdCallControlHandler::notifyGwsdImsIncomingCall(RfxController*, int) */
int _ZN25RfxGwsdCallControlHandler25notifyGwsdImsIncomingCallEP13RfxControlleri(void);

/* Symbol: _ZN21RfxGwsdSettingHandler18requestSetGwsdModeEP14RfxBaseHandleriPcS2_ */
/* Demangled: RfxGwsdSettingHandler::requestSetGwsdMode(RfxBaseHandler*, int, char*, char*) */
int _ZN21RfxGwsdSettingHandler18requestSetGwsdModeEP14RfxBaseHandleriPcS2_(void);

/* Symbol: _ZN21RfxGwsdSettingHandler34requestSetIgnoreSameNumberIntervalEP14RfxBaseHandleri */
/* Demangled: RfxGwsdSettingHandler::requestSetIgnoreSameNumberInterval(RfxBaseHandler*, int) */
int _ZN21RfxGwsdSettingHandler34requestSetIgnoreSameNumberIntervalEP14RfxBaseHandleri(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler17requestFakeAcceptEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE */
/* Demangled: RfxGwsdCallControlHandler::requestFakeAccept(RfxBaseHandler*, android::sp<RfxMclMessage> const&) */
int _ZN25RfxGwsdCallControlHandler17requestFakeAcceptEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler21onAutoFakeAcceptTimerEP13RfxController */
/* Demangled: RfxGwsdCallControlHandler::onAutoFakeAcceptTimer(RfxController*) */
int _ZN25RfxGwsdCallControlHandler21onAutoFakeAcceptTimerEP13RfxController(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler8updateRQEP13RfxControllerib */
/* Demangled: RfxGwsdCallControlHandler::updateRQ(RfxController*, int, bool) */
int _ZN25RfxGwsdCallControlHandler8updateRQEP13RfxControllerib(void);

/* Symbol: _ZN21RfxGwsdSettingHandler27requestSetKeepAliveByIpDataEP14RfxBaseHandlerPc */
/* Demangled: RfxGwsdSettingHandler::requestSetKeepAliveByIpData(RfxBaseHandler*, char*) */
int _ZN21RfxGwsdSettingHandler27requestSetKeepAliveByIpDataEP14RfxBaseHandlerPc(void);

/* Symbol: _ZN21RfxGwsdSettingHandler32requestSetKeepAliveByPDCPCtrlPDUEP14RfxBaseHandlerPc */
/* Demangled: RfxGwsdSettingHandler::requestSetKeepAliveByPDCPCtrlPDU(RfxBaseHandler*, char*) */
int _ZN21RfxGwsdSettingHandler32requestSetKeepAliveByPDCPCtrlPDUEP14RfxBaseHandlerPc(void);

/* Symbol: createSettingHandler */
/* Demangled: createSettingHandler */
int createSettingHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler18registerForGwsdUrcEP14RfxBaseHandler */
/* Demangled: RfxGwsdCallControlHandler::registerForGwsdUrc(RfxBaseHandler*) */
int _ZN25RfxGwsdCallControlHandler18registerForGwsdUrcEP14RfxBaseHandler(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler19fakeGetCurrentCallsEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi */
/* Demangled: RfxGwsdCallControlHandler::fakeGetCurrentCalls(RfxBaseHandler*, android::sp<RfxMclMessage> const&, int) */
int _ZN25RfxGwsdCallControlHandler19fakeGetCurrentCallsEP14RfxBaseHandlerRKN7android2spI13RfxMclMessageEEi(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler22onHandleTelCoreRequestEP13RfxControllerRKN7android2spI10RfxMessageEE */
/* Demangled: RfxGwsdCallControlHandler::onHandleTelCoreRequest(RfxController*, android::sp<RfxMessage> const&) */
int _ZN25RfxGwsdCallControlHandler22onHandleTelCoreRequestEP13RfxControllerRKN7android2spI10RfxMessageEE(void);

/* Symbol: _ZN25RfxGwsdCallControlHandler32notifyDualSimGwsdImsIncomingCallEP13RfxControlleri */
/* Demangled: RfxGwsdCallControlHandler::notifyDualSimGwsdImsIncomingCall(RfxController*, int) */
int _ZN25RfxGwsdCallControlHandler32notifyDualSimGwsdImsIncomingCallEP13RfxControlleri(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBGWSD_RIL_H */
