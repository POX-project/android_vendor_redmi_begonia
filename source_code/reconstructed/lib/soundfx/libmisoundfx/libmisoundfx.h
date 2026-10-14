/*
 * Reverse-Engineered ABI Specification for: libmisoundfx.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libmisoundfx.so
 */

#ifndef BEGONIA_RE_LIBMISOUNDFX_H
#define BEGONIA_RE_LIBMISOUNDFX_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: MiSound_process */
/* Demangled: MiSound_process */
int MiSound_process(void);

/* Symbol: MiSound_restoreEarsCompensationExample */
/* Demangled: MiSound_restoreEarsCompensationExample */
int MiSound_restoreEarsCompensationExample(void);

/* Symbol: MiSound_saveEQ */
/* Demangled: MiSound_saveEQ */
int MiSound_saveEQ(void);

/* Symbol: MiSound_saveEarsCompensationState */
/* Demangled: MiSound_saveEarsCompensationState */
int MiSound_saveEarsCompensationState(void);

/* Symbol: MiSound_saveEarsEQLeft */
/* Demangled: MiSound_saveEarsEQLeft */
int MiSound_saveEarsEQLeft(void);

/* Symbol: MiSound_saveScenario */
/* Demangled: MiSound_saveScenario */
int MiSound_saveScenario(void);

/* Symbol: _ZN7android25MiSoundSetParameterThreadD2Ev */
/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
int _ZN7android25MiSoundSetParameterThreadD2Ev(void);

/* Symbol: MiSound_restoreEarsEQLeft */
/* Demangled: MiSound_restoreEarsEQLeft */
int MiSound_restoreEarsEQLeft(void);

/* Symbol: MiSound_restoreEffectEnable */
/* Demangled: MiSound_restoreEffectEnable */
int MiSound_restoreEffectEnable(void);

/* Symbol: MiSound_restoreHeadset */
/* Demangled: MiSound_restoreHeadset */
int MiSound_restoreHeadset(void);

/* Symbol: MiSound_saveHeadset */
/* Demangled: MiSound_saveHeadset */
int MiSound_saveHeadset(void);

/* Symbol: MiSound_saveSurroundLevel */
/* Demangled: MiSound_saveSurroundLevel */
int MiSound_saveSurroundLevel(void);

/* Symbol: MiSoundLib_Release */
/* Demangled: MiSoundLib_Release */
int MiSoundLib_Release(void);

/* Symbol: MiSound_getConfig */
/* Demangled: MiSound_getConfig */
int MiSound_getConfig(void);

/* Symbol: _ZN7android25MiSoundSetParameterThreadD1Ev */
/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
int _ZN7android25MiSoundSetParameterThreadD1Ev(void);

/* Symbol: _ZN7android2spINS_25MiSoundSetParameterThreadEEaSEPS1_ */
/* Demangled: android::sp<android::MiSoundSetParameterThread>::operator=(android::MiSoundSetParameterThread*) */
int _ZN7android2spINS_25MiSoundSetParameterThreadEEaSEPS1_(void);

/* Symbol: gPresetDSP_SPK */
/* Demangled: gPresetDSP_SPK */
extern void* gPresetDSP_SPK;

/* Symbol: MiSoundLib_Create */
/* Demangled: MiSoundLib_Create */
int MiSoundLib_Create(void);

/* Symbol: MiSound_getHIFIState */
/* Demangled: MiSound_getHIFIState */
int MiSound_getHIFIState(void);

/* Symbol: MiSound_releaseAppId */
/* Demangled: MiSound_releaseAppId */
int MiSound_releaseAppId(void);

/* Symbol: MiSound_restoreEarsCompensationState */
/* Demangled: MiSound_restoreEarsCompensationState */
int MiSound_restoreEarsCompensationState(void);

/* Symbol: MiSound_saveEarsCompensationExample */
/* Demangled: MiSound_saveEarsCompensationExample */
int MiSound_saveEarsCompensationExample(void);

/* Symbol: _ZN7android25MiSoundSetParameterThread10threadLoopEv */
/* Demangled: android::MiSoundSetParameterThread::threadLoop() */
int _ZN7android25MiSoundSetParameterThread10threadLoopEv(void);

/* Symbol: gPresetDSP_HP */
/* Demangled: gPresetDSP_HP */
extern void* gPresetDSP_HP;

/* Symbol: MiSound_allocateAppId */
/* Demangled: MiSound_allocateAppId */
int MiSound_allocateAppId(void);

/* Symbol: MiSound_saveEffectEnable */
/* Demangled: MiSound_saveEffectEnable */
int MiSound_saveEffectEnable(void);

/* Symbol: _ZN7android25MiSoundSetParameterThreadD0Ev */
/* Demangled: android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
int _ZN7android25MiSoundSetParameterThreadD0Ev(void);

/* Symbol: _ZTTN7android25MiSoundSetParameterThreadE */
/* Demangled: VTT for android::MiSoundSetParameterThread */
extern void* _ZTTN7android25MiSoundSetParameterThreadE;

/* Symbol: MiSoundLib_QueryEffect */
/* Demangled: MiSoundLib_QueryEffect */
int MiSoundLib_QueryEffect(void);

/* Symbol: MiSound_restoreSurround */
/* Demangled: MiSound_restoreSurround */
int MiSound_restoreSurround(void);

/* Symbol: _ZN7android25MiSoundSetParameterThreadC1EPNS_11setParamBufE */
/* Demangled: android::MiSoundSetParameterThread::MiSoundSetParameterThread(android::setParamBuf*) */
int _ZN7android25MiSoundSetParameterThreadC1EPNS_11setParamBufE(void);

/* Symbol: _ZTCN7android25MiSoundSetParameterThreadE0_NS_6ThreadE */
/* Demangled: construction vtable for android::Thread-in-android::MiSoundSetParameterThread */
extern void* _ZTCN7android25MiSoundSetParameterThreadE0_NS_6ThreadE;

/* Symbol: gAppIdUsed */
/* Demangled: gAppIdUsed */
extern void* gAppIdUsed;

/* Symbol: DSPVarFS */
/* Demangled: DSPVarFS */
extern void* DSPVarFS;

/* Symbol: MiSound_command */
/* Demangled: MiSound_command */
int MiSound_command(void);

/* Symbol: MiSound_restoreEarsEQRight */
/* Demangled: MiSound_restoreEarsEQRight */
int MiSound_restoreEarsEQRight(void);

/* Symbol: MiSound_saveMusicState */
/* Demangled: MiSound_saveMusicState */
int MiSound_saveMusicState(void);

/* Symbol: _ZTVN7android25MiSoundSetParameterThreadE */
/* Demangled: vtable for android::MiSoundSetParameterThread */
extern void* _ZTVN7android25MiSoundSetParameterThreadE;

/* Symbol: _ZTv0_n12_N7android25MiSoundSetParameterThreadD1Ev */
/* Demangled: virtual thunk to android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
int _ZTv0_n12_N7android25MiSoundSetParameterThreadD1Ev(void);

/* Symbol: MiSound_restoreEQ */
/* Demangled: MiSound_restoreEQ */
int MiSound_restoreEQ(void);

/* Symbol: MiSound_saveVocalLevel */
/* Demangled: MiSound_saveVocalLevel */
int MiSound_saveVocalLevel(void);

/* Symbol: MiSound_updateState */
/* Demangled: MiSound_updateState */
int MiSound_updateState(void);

/* Symbol: MiSound_getDescriptor */
/* Demangled: MiSound_getDescriptor */
int MiSound_getDescriptor(void);

/* Symbol: _ZN7android25MiSoundSetParameterThreadC2EPNS_11setParamBufE */
/* Demangled: android::MiSoundSetParameterThread::MiSoundSetParameterThread(android::setParamBuf*) */
int _ZN7android25MiSoundSetParameterThreadC2EPNS_11setParamBufE(void);

/* Symbol: gMiSoundInterface */
/* Demangled: gMiSoundInterface */
extern void* gMiSoundInterface;

/* Symbol: parameterInfoInit */
/* Demangled: parameterInfoInit */
int parameterInfoInit(void);

/* Symbol: MiSoundLib_GetDescriptor */
/* Demangled: MiSoundLib_GetDescriptor */
int MiSoundLib_GetDescriptor(void);

/* Symbol: MiSoundLib_QueryNumberEffects */
/* Demangled: MiSoundLib_QueryNumberEffects */
int MiSoundLib_QueryNumberEffects(void);

/* Symbol: MiSound_saveEarsEQRight */
/* Demangled: MiSound_saveEarsEQRight */
int MiSound_saveEarsEQRight(void);

/* Symbol: MiSound_saveMode */
/* Demangled: MiSound_saveMode */
int MiSound_saveMode(void);

/* Symbol: MiSound_setConfig */
/* Demangled: MiSound_setConfig */
int MiSound_setConfig(void);

/* Symbol: _ZTv0_n12_N7android25MiSoundSetParameterThreadD0Ev */
/* Demangled: virtual thunk to android::MiSoundSetParameterThread::~MiSoundSetParameterThread() */
int _ZTv0_n12_N7android25MiSoundSetParameterThreadD0Ev(void);

/* Symbol: AELI */
/* Demangled: AELI */
extern void* AELI;

/* Symbol: MiSound_restoreVocal */
/* Demangled: MiSound_restoreVocal */
int MiSound_restoreVocal(void);

/* Symbol: MiSound_restoreMusicState */
/* Demangled: MiSound_restoreMusicState */
int MiSound_restoreMusicState(void);

/* Symbol: MiSound_restoreScenario */
/* Demangled: MiSound_restoreScenario */
int MiSound_restoreScenario(void);

/* Symbol: MiSound_saveHIFIState */
/* Demangled: MiSound_saveHIFIState */
int MiSound_saveHIFIState(void);

/* Symbol: Misound_getDeviceIndex */
/* Demangled: Misound_getDeviceIndex */
int Misound_getDeviceIndex(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMISOUNDFX_H */
