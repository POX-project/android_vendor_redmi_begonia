/*
 * Reverse-Engineered ABI Specification for: libmtkcam.eventcallback.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmtkcam.eventcallback.so
 */

#ifndef BEGONIA_RE_LIBMTKCAM_EVENTCALLBACK_H
#define BEGONIA_RE_LIBMTKCAM_EVENTCALLBACK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5NSCam20EventCallbackMgr_Imp23onImageBufferFinishedCBEiixj */
/* Demangled: NSCam::EventCallbackMgr_Imp::onImageBufferFinishedCB(int, int, long long, unsigned int) */
int _ZN5NSCam20EventCallbackMgr_Imp23onImageBufferFinishedCBEiixj(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_Imp4initEv */
/* Demangled: NSCam::EventCallbackMgr_Imp::init() */
int _ZN5NSCam20EventCallbackMgr_Imp4initEv(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_ImpC1Ev */
/* Demangled: NSCam::EventCallbackMgr_Imp::EventCallbackMgr_Imp() */
int _ZN5NSCam20EventCallbackMgr_ImpC1Ev(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_ImpD0Ev */
/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
int _ZN5NSCam20EventCallbackMgr_ImpD0Ev(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_ImpD2Ev */
/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
int _ZN5NSCam20EventCallbackMgr_ImpD2Ev(void);

/* Symbol: _ZTVN5NSCam20EventCallbackMgr_ImpE */
/* Demangled: vtable for NSCam::EventCallbackMgr_Imp */
extern void* _ZTVN5NSCam20EventCallbackMgr_ImpE;

/* Symbol: _ZN5NSCam16EventCallbackMgr11getInstanceEv */
/* Demangled: NSCam::EventCallbackMgr::getInstance() */
int _ZN5NSCam16EventCallbackMgr11getInstanceEv(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_Imp17registerRequestCBEPFbiijyE */
/* Demangled: NSCam::EventCallbackMgr_Imp::registerRequestCB(bool (*)(int, int, unsigned int, unsigned long long)) */
int _ZN5NSCam20EventCallbackMgr_Imp17registerRequestCBEPFbiijyE(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_Imp19onRequestFinishedCBEiixj */
/* Demangled: NSCam::EventCallbackMgr_Imp::onRequestFinishedCB(int, int, long long, unsigned int) */
int _ZN5NSCam20EventCallbackMgr_Imp19onRequestFinishedCBEiixj(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_ImpC2Ev */
/* Demangled: NSCam::EventCallbackMgr_Imp::EventCallbackMgr_Imp() */
int _ZN5NSCam20EventCallbackMgr_ImpC2Ev(void);

/* Symbol: _ZN5NSCam20EventCallbackMgr_ImpD1Ev */
/* Demangled: NSCam::EventCallbackMgr_Imp::~EventCallbackMgr_Imp() */
int _ZN5NSCam20EventCallbackMgr_ImpD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKCAM_EVENTCALLBACK_H */
