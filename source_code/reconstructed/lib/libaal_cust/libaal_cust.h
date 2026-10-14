/*
 * Reverse-Engineered ABI Specification for: libaal_cust.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaal_cust.so
 */

#ifndef BEGONIA_RE_LIBAAL_CUST_H
#define BEGONIA_RE_LIBAAL_CUST_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: SmartBacklightRange */
/* Demangled: SmartBacklightRange */
extern void* SmartBacklightRange;

/* Symbol: BacklightBits */
/* Demangled: BacklightBits */
extern void* BacklightBits;

/* Symbol: ReadabilityEnhancementMode */
/* Demangled: ReadabilityEnhancementMode */
extern void* ReadabilityEnhancementMode;

/* Symbol: ReadabilityOffOnChangeSpeed */
/* Demangled: ReadabilityOffOnChangeSpeed */
extern void* ReadabilityOffOnChangeSpeed;

/* Symbol: SupportEssLevelCtlByKernel */
/* Demangled: SupportEssLevelCtlByKernel */
extern void* SupportEssLevelCtlByKernel;

/* Symbol: custInit */
/* Demangled: custInit */
int custInit(void);

/* Symbol: checkVariableNames */
/* Demangled: checkVariableNames */
int checkVariableNames(void);

/* Symbol: getLcmIndex */
/* Demangled: getLcmIndex */
int getLcmIndex(void);

/* Symbol: ESSVorYHist1 */
/* Demangled: ESSVorYHist1 */
extern void* ESSVorYHist1;

/* Symbol: LowBLReadabilityLevel */
/* Demangled: LowBLReadabilityLevel */
extern void* LowBLReadabilityLevel;

/* Symbol: SmartBacklightStrength */
/* Demangled: SmartBacklightStrength */
extern void* SmartBacklightStrength;

/* Symbol: DREAliThd */
/* Demangled: DREAliThd */
extern void* DREAliThd;

/* Symbol: ESSVorYHist2 */
/* Demangled: ESSVorYHist2 */
extern void* ESSVorYHist2;

/* Symbol: LcmGamma */
/* Demangled: LcmGamma */
extern void* LcmGamma;

/* Symbol: ReadabilityOnOffChangeSpeed */
/* Demangled: ReadabilityOnOffChangeSpeed */
extern void* ReadabilityOnOffChangeSpeed;

/* Symbol: ReadabilityLevel */
/* Demangled: ReadabilityLevel */
extern void* ReadabilityLevel;

/* Symbol: dimmingVirtual10ToPhysical12 */
/* Demangled: dimmingVirtual10ToPhysical12 */
int dimmingVirtual10ToPhysical12(void);

/* Symbol: ESS_alg_mode */
/* Demangled: ESS_alg_mode */
extern void* ESS_alg_mode;

/* Symbol: ReadabilityChangeDownSpeedForALI */
/* Demangled: ReadabilityChangeDownSpeedForALI */
extern void* ReadabilityChangeDownSpeedForALI;

/* Symbol: SupportDreEnableCtlByKernel */
/* Demangled: SupportDreEnableCtlByKernel */
extern void* SupportDreEnableCtlByKernel;

/* Symbol: strenth_mode */
/* Demangled: strenth_mode */
extern void* strenth_mode;

/* Symbol: ReadabilityChangeUpSpeedForALI */
/* Demangled: ReadabilityChangeUpSpeedForALI */
extern void* ReadabilityChangeUpSpeedForALI;

/* Symbol: LCM_COUNT */
/* Demangled: LCM_COUNT */
extern void* LCM_COUNT;

/* Symbol: AlsDebounceTime */
/* Demangled: AlsDebounceTime */
extern void* AlsDebounceTime;

/* Symbol: InitFunction */
/* Demangled: InitFunction */
extern void* InitFunction;

/* Symbol: MinOutBL */
/* Demangled: MinOutBL */
extern void* MinOutBL;

__END_DECLS

#endif /* BEGONIA_RE_LIBAAL_CUST_H */
