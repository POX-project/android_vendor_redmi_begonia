/*
 * Reverse-Engineered ABI Specification for: libvia-ril.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libvia-ril.so
 */

#ifndef BEGONIA_RE_LIBVIA_RIL_H
#define BEGONIA_RE_LIBVIA_RIL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN10ViaHandler17registerForViaUrcEP14RfxBaseHandler */
/* Demangled: ViaHandler::registerForViaUrc(RfxBaseHandler*) */
int _ZN10ViaHandler17registerForViaUrcEP14RfxBaseHandler(void);

/* Symbol: _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP23CDMA_CELL_LOCATION_INFO */
/* Demangled: ViaHandler::getCdmaLocationInfo(RfxBaseHandler*, CDMA_CELL_LOCATION_INFO*) */
int _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP23CDMA_CELL_LOCATION_INFO(void);

/* Symbol: _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP25RIL_VOICE_REG_STATE_CACHE */
/* Demangled: ViaHandler::getCdmaLocationInfo(RfxBaseHandler*, RIL_VOICE_REG_STATE_CACHE*) */
int _ZN10ViaHandler19getCdmaLocationInfoEP14RfxBaseHandlerP25RIL_VOICE_REG_STATE_CACHE(void);

/* Symbol: _ZN10ViaHandler22handleCdmaSubscriptionEP14RfxBaseHandlerPPcP9RIL_Errno */
/* Demangled: ViaHandler::handleCdmaSubscription(RfxBaseHandler*, char**, RIL_Errno*) */
int _ZN10ViaHandler22handleCdmaSubscriptionEP14RfxBaseHandlerPPcP9RIL_Errno(void);

/* Symbol: _ZN10ViaHandlerC2Ev */
/* Demangled: ViaHandler::ViaHandler() */
int _ZN10ViaHandlerC2Ev(void);

/* Symbol: _ZN10ViaHandler12handleViaUrcERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri */
/* Demangled: ViaHandler::handleViaUrc(android::sp<RfxMclMessage> const&, RfxBaseHandler*, int) */
int _ZN10ViaHandler12handleViaUrcERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri(void);

/* Symbol: _ZN10ViaHandler20handleCdmaPrlChangedERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri */
/* Demangled: ViaHandler::handleCdmaPrlChanged(android::sp<RfxMclMessage> const&, RfxBaseHandler*, int) */
int _ZN10ViaHandler20handleCdmaPrlChangedERKN7android2spI13RfxMclMessageEEP14RfxBaseHandleri(void);

/* Symbol: _ZN10ViaHandlerC1Ev */
/* Demangled: ViaHandler::ViaHandler() */
int _ZN10ViaHandlerC1Ev(void);

/* Symbol: create */
/* Demangled: create */
int create(void);

/* Symbol: destroy */
/* Demangled: destroy */
int destroy(void);

/* Symbol: _ZN10ViaHandler15sendCommandDemoEP14RfxBaseHandlerPc */
/* Demangled: ViaHandler::sendCommandDemo(RfxBaseHandler*, char*) */
int _ZN10ViaHandler15sendCommandDemoEP14RfxBaseHandlerPc(void);

/* Symbol: _ZN10ViaHandler18convertCdmaEvdoSigEii */
/* Demangled: ViaHandler::convertCdmaEvdoSig(int, int) */
int _ZN10ViaHandler18convertCdmaEvdoSigEii(void);

/* Symbol: _ZN10ViaHandler18requestAgpsConnindEP14RfxBaseHandleriP9RIL_Errno */
/* Demangled: ViaHandler::requestAgpsConnind(RfxBaseHandler*, int, RIL_Errno*) */
int _ZN10ViaHandler18requestAgpsConnindEP14RfxBaseHandleriP9RIL_Errno(void);

/* Symbol: _ZN10ViaHandler35requestSetPreferredVoicePrivacyModeEP14RfxBaseHandleriP9RIL_Errno */
/* Demangled: ViaHandler::requestSetPreferredVoicePrivacyMode(RfxBaseHandler*, int, RIL_Errno*) */
int _ZN10ViaHandler35requestSetPreferredVoicePrivacyModeEP14RfxBaseHandleriP9RIL_Errno(void);

/* Symbol: _ZN10ViaHandlerD2Ev */
/* Demangled: ViaHandler::~ViaHandler() */
int _ZN10ViaHandlerD2Ev(void);

/* Symbol: _ZN10ViaHandler10getAgpsUrcEv */
/* Demangled: ViaHandler::getAgpsUrc() */
int _ZN10ViaHandler10getAgpsUrcEv(void);

/* Symbol: _ZN10ViaHandlerD1Ev */
/* Demangled: ViaHandler::~ViaHandler() */
int _ZN10ViaHandlerD1Ev(void);

/* Symbol: _ZN10ViaHandler21getViaAllowedUrcForNwEv */
/* Demangled: ViaHandler::getViaAllowedUrcForNw() */
int _ZN10ViaHandler21getViaAllowedUrcForNwEv(void);

/* Symbol: _ZN10ViaHandler37requestQueryPreferredVoicePrivacyModeEP14RfxBaseHandlerPiP9RIL_Errno */
/* Demangled: ViaHandler::requestQueryPreferredVoicePrivacyMode(RfxBaseHandler*, int*, RIL_Errno*) */
int _ZN10ViaHandler37requestQueryPreferredVoicePrivacyModeEP14RfxBaseHandlerPiP9RIL_Errno(void);

/* Symbol: _ZN10ViaHandlerD0Ev */
/* Demangled: ViaHandler::~ViaHandler() */
int _ZN10ViaHandlerD0Ev(void);

/* Symbol: _ZTV10ViaHandler */
/* Demangled: vtable for ViaHandler */
extern void* _ZTV10ViaHandler;

__END_DECLS

#endif /* BEGONIA_RE_LIBVIA_RIL_H */
