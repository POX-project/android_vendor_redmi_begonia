/*
 * Reverse-Engineered ABI Specification for: libNoFpsActor.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libNoFpsActor.so
 */

#ifndef BEGONIA_RE_LIBNOFPSACTOR_H
#define BEGONIA_RE_LIBNOFPSACTOR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN3ARC5Actor14GetOptionFloatEPKcPf */
/* Demangled: ARC::Actor::GetOptionFloat(char const*, float*) */
int _ZN3ARC5Actor14GetOptionFloatEPKcPf(void);

/* Symbol: _ZN10NoFPSActor17PassFpsLimitationEi */
/* Demangled: NoFPSActor::PassFpsLimitation(int) */
int _ZN10NoFPSActor17PassFpsLimitationEi(void);

/* Symbol: _ZN10NoFPSActor17passFpsLimitationEi */
/* Demangled: NoFPSActor::passFpsLimitation(int) */
int _ZN10NoFPSActor17passFpsLimitationEi(void);

/* Symbol: _ZN10NoFPSActorC2Ev */
/* Demangled: NoFPSActor::NoFPSActor() */
int _ZN10NoFPSActorC2Ev(void);

/* Symbol: _ZN10NoFPSActorD1Ev */
/* Demangled: NoFPSActor::~NoFPSActor() */
int _ZN10NoFPSActorD1Ev(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorE11getInstanceEv */
/* Demangled: android::Singleton<NoFPSActor>::getInstance() */
int _ZN7android9SingletonI10NoFPSActorE11getInstanceEv(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorE11hasInstanceEv */
/* Demangled: android::Singleton<NoFPSActor>::hasInstance() */
int _ZN7android9SingletonI10NoFPSActorE11hasInstanceEv(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorE5sLockE */
/* Demangled: android::Singleton<NoFPSActor>::sLock */
extern void* _ZN7android9SingletonI10NoFPSActorE5sLockE;

/* Symbol: _ZN7android9SingletonI10NoFPSActorE9sInstanceE */
/* Demangled: android::Singleton<NoFPSActor>::sInstance */
extern void* _ZN7android9SingletonI10NoFPSActorE9sInstanceE;

/* Symbol: _ZN10NoFPSActorD2Ev */
/* Demangled: NoFPSActor::~NoFPSActor() */
int _ZN10NoFPSActorD2Ev(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorEC1Ev */
/* Demangled: android::Singleton<NoFPSActor>::Singleton() */
int _ZN7android9SingletonI10NoFPSActorEC1Ev(void);

/* Symbol: _ZN3ARC5Actor12GetOptionIntEPKcPi */
/* Demangled: ARC::Actor::GetOptionInt(char const*, int*) */
int _ZN3ARC5Actor12GetOptionIntEPKcPi(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorEC2Ev */
/* Demangled: android::Singleton<NoFPSActor>::Singleton() */
int _ZN7android9SingletonI10NoFPSActorEC2Ev(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorED1Ev */
/* Demangled: android::Singleton<NoFPSActor>::~Singleton() */
int _ZN7android9SingletonI10NoFPSActorED1Ev(void);

/* Symbol: _ZN3ARC5Actor16GetStepFramerateEi */
/* Demangled: ARC::Actor::GetStepFramerate(int) */
int _ZN3ARC5Actor16GetStepFramerateEi(void);

/* Symbol: _ZN3ARC5Actor24GetUserAssignedFramerateEi */
/* Demangled: ARC::Actor::GetUserAssignedFramerate(int) */
int _ZN3ARC5Actor24GetUserAssignedFramerateEi(void);

/* Symbol: PassFpsLimitation */
/* Demangled: PassFpsLimitation */
int PassFpsLimitation(void);

/* Symbol: _ZN10NoFPSActorC1Ev */
/* Demangled: NoFPSActor::NoFPSActor() */
int _ZN10NoFPSActorC1Ev(void);

/* Symbol: _ZN7android9SingletonI10NoFPSActorED2Ev */
/* Demangled: android::Singleton<NoFPSActor>::~Singleton() */
int _ZN7android9SingletonI10NoFPSActorED2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBNOFPSACTOR_H */
