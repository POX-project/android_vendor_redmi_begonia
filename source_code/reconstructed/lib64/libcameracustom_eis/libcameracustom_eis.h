/*
 * Reverse-Engineered ABI Specification for: libcameracustom.eis.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcameracustom.eis.so
 */

#ifndef BEGONIA_RE_LIBCAMERACUSTOM_EIS_H
#define BEGONIA_RE_LIBCAMERACUSTOM_EIS_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN9EISCustom18isEnabledImageModeEv */
/* Demangled: EISCustom::isEnabledImageMode() */
int _ZN9EISCustom18isEnabledImageModeEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN9EISCustom10getEISModeEj */
/* Demangled: EISCustom::getEISMode(unsigned int) */
int _ZN9EISCustom10getEISModeEj(void);

/* Symbol: _ZN9EISCustom12getEISFactorEjj */
/* Demangled: EISCustom::getEISFactor(unsigned int, unsigned int) */
int _ZN9EISCustom12getEISFactorEjj(void);

/* Symbol: _ZN9EISCustom15getGISParameterEjPdPjS1_S1_ */
/* Demangled: EISCustom::getGISParameter(unsigned int, double*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN9EISCustom15getGISParameterEjPdPjS1_S1_(void);

/* Symbol: _ZN9EISCustom11getMVNumberEiiPiS0_ */
/* Demangled: EISCustom::getMVNumber(int, int, int*, int*) */
int _ZN9EISCustom11getMVNumberEiiPiS0_(void);

/* Symbol: _ZN9EISCustom12getEIS25DataEP29EIS25_Customize_Tuning_Para_t */
/* Demangled: EISCustom::getEIS25Data(EIS25_Customize_Tuning_Para_t*) */
int _ZN9EISCustom12getEIS25DataEP29EIS25_Customize_Tuning_Para_t(void);

/* Symbol: _ZN9EISCustom12getEIS30DataEP29EIS30_Customize_Tuning_Para_t */
/* Demangled: EISCustom::getEIS30Data(EIS30_Customize_Tuning_Para_t*) */
int _ZN9EISCustom12getEIS30DataEP29EIS30_Customize_Tuning_Para_t(void);

/* Symbol: _ZN9EISCustom13appendEISModeEjRj */
/* Demangled: EISCustom::appendEISMode(unsigned int, unsigned int&) */
int _ZN9EISCustom13appendEISModeEjRj(void);

/* Symbol: _ZN9EISCustom17getGyroIntervalMsEv */
/* Demangled: EISCustom::getGyroIntervalMs() */
int _ZN9EISCustom17getGyroIntervalMsEv(void);

/* Symbol: _ZN9EISCustom23generateEIS25FusionModeEjRj */
/* Demangled: EISCustom::generateEIS25FusionMode(unsigned int, unsigned int&) */
int _ZN9EISCustom23generateEIS25FusionModeEjRj(void);

/* Symbol: _ZN9EISCustom14isEnabledEIS22Ev */
/* Demangled: EISCustom::isEnabledEIS22() */
int _ZN9EISCustom14isEnabledEIS22Ev(void);

/* Symbol: _ZN9EISCustom14isEnabledEIS25Ev */
/* Demangled: EISCustom::isEnabledEIS25() */
int _ZN9EISCustom14isEnabledEIS25Ev(void);

/* Symbol: _ZN9EISCustom14isEnabledEIS30Ev */
/* Demangled: EISCustom::isEnabledEIS30() */
int _ZN9EISCustom14isEnabledEIS30Ev(void);

/* Symbol: _ZN9EISCustom16getForwardFramesEj */
/* Demangled: EISCustom::getForwardFrames(unsigned int) */
int _ZN9EISCustom16getForwardFramesEj(void);

/* Symbol: _ZN9EISCustom16isEnabledLMVDataEv */
/* Demangled: EISCustom::isEnabledLMVData() */
int _ZN9EISCustom16isEnabledLMVDataEv(void);

/* Symbol: _ZN9EISCustom17generateEIS22ModeEjRj */
/* Demangled: EISCustom::generateEIS22Mode(unsigned int, unsigned int&) */
int _ZN9EISCustom17generateEIS22ModeEjRj(void);

/* Symbol: _ZN9EISCustom17isEnabledGyroModeEv */
/* Demangled: EISCustom::isEnabledGyroMode() */
int _ZN9EISCustom17isEnabledGyroModeEv(void);

/* Symbol: _ZN9EISCustom21generateEIS25GyroModeEjRj */
/* Demangled: EISCustom::generateEIS25GyroMode(unsigned int, unsigned int&) */
int _ZN9EISCustom21generateEIS25GyroModeEjRj(void);

/* Symbol: _ZN9EISCustom21generateEIS30GyroModeEjRj */
/* Demangled: EISCustom::generateEIS30GyroMode(unsigned int, unsigned int&) */
int _ZN9EISCustom21generateEIS30GyroModeEjRj(void);

/* Symbol: _ZN9EISCustom21isEnabledLosslessModeEv */
/* Demangled: EISCustom::isEnabledLosslessMode() */
int _ZN9EISCustom21isEnabledLosslessModeEv(void);

/* Symbol: _ZN9EISCustom22generateEIS25ImageModeEjRj */
/* Demangled: EISCustom::generateEIS25ImageMode(unsigned int, unsigned int&) */
int _ZN9EISCustom22generateEIS25ImageModeEjRj(void);

/* Symbol: _ZN9EISCustom23generateEIS30FusionModeEjRj */
/* Demangled: EISCustom::generateEIS30FusionMode(unsigned int, unsigned int&) */
int _ZN9EISCustom23generateEIS30FusionModeEjRj(void);

/* Symbol: _ZN9EISCustom23isEnabledFOVWarpCombineEj */
/* Demangled: EISCustom::isEnabledFOVWarpCombine(unsigned int) */
int _ZN9EISCustom23isEnabledFOVWarpCombineEj(void);

/* Symbol: _ZN9EISCustom10getEISDataEP20EIS_Customize_Para_t */
/* Demangled: EISCustom::getEISData(EIS_Customize_Para_t*) */
int _ZN9EISCustom10getEISDataEP20EIS_Customize_Para_t(void);

/* Symbol: _ZN9EISCustom11getEISRatioEjj */
/* Demangled: EISCustom::getEISRatio(unsigned int, unsigned int) */
int _ZN9EISCustom11getEISRatioEjj(void);

/* Symbol: _ZN9EISCustom14getEISPlusDataEP25EIS_PLUS_Customize_Para_tj */
/* Demangled: EISCustom::getEISPlusData(EIS_PLUS_Customize_Para_t*, unsigned int) */
int _ZN9EISCustom14getEISPlusDataEP25EIS_PLUS_Customize_Para_tj(void);

/* Symbol: _ZN9EISCustom16get4K2KRecordFPSEv */
/* Demangled: EISCustom::get4K2KRecordFPS() */
int _ZN9EISCustom16get4K2KRecordFPSEv(void);

/* Symbol: _ZN9EISCustom17isEnabledFixedFPSEv */
/* Demangled: EISCustom::isEnabledFixedFPS() */
int _ZN9EISCustom17isEnabledFixedFPSEv(void);

/* Symbol: _ZN9EISCustom13isForcedEIS12Ev */
/* Demangled: EISCustom::isForcedEIS12() */
int _ZN9EISCustom13isForcedEIS12Ev(void);

/* Symbol: _ZN9EISCustom19isSupportPreviewEISEv */
/* Demangled: EISCustom::isSupportPreviewEIS() */
int _ZN9EISCustom19isSupportPreviewEISEv(void);

/* Symbol: _ZN9EISCustom20isEnabledForwardModeEj */
/* Demangled: EISCustom::isEnabledForwardMode(unsigned int) */
int _ZN9EISCustom20isEnabledForwardModeEj(void);

/* Symbol: _ZN9EISCustom20isSupportAdvEIS_HAL3Ev */
/* Demangled: EISCustom::isSupportAdvEIS_HAL3() */
int _ZN9EISCustom20isSupportAdvEIS_HAL3Ev(void);

/* Symbol: _ZN9EISCustom14getEIS12FactorEv */
/* Demangled: EISCustom::getEIS12Factor() */
int _ZN9EISCustom14getEIS12FactorEv(void);

/* Symbol: _ZN9EISCustom20getForwardStartFrameEv */
/* Demangled: EISCustom::getForwardStartFrame() */
int _ZN9EISCustom20getForwardStartFrameEv(void);

/* Symbol: _ZN9EISCustom21getHeightToWidthRatioEv */
/* Demangled: EISCustom::getHeightToWidthRatio() */
int _ZN9EISCustom21getHeightToWidthRatioEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN9EISCustom22generateEIS30ImageModeEjRj */
/* Demangled: EISCustom::generateEIS30ImageMode(unsigned int, unsigned int&) */
int _ZN9EISCustom22generateEIS30ImageModeEjRj(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMERACUSTOM_EIS_H */
