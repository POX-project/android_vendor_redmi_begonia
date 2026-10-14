/*
 * Reverse-Engineered ABI Specification for: libcamalgo.fsc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.fsc.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_FSC_H
#define BEGONIA_RE_LIBCAMALGO_FSC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN20FocalScalingProvider22getMinCropRemainRegionEiiiiiiiiPi */
/* Demangled: FocalScalingProvider::getMinCropRemainRegion(int, int, int, int, int, int, int, int, int*) */
int _ZN20FocalScalingProvider22getMinCropRemainRegionEiiiiiiiiPi(void);

/* Symbol: _ZN6MTKFSCD1Ev */
/* Demangled: MTKFSC::~MTKFSC() */
int _ZN6MTKFSCD1Ev(void);

/* Symbol: _ZN6AppFSC7FSCInitEP15FSC_INIT_STRUCT */
/* Demangled: AppFSC::FSCInit(FSC_INIT_STRUCT*) */
int _ZN6AppFSC7FSCInitEP15FSC_INIT_STRUCT(void);

/* Symbol: _ZN20FocalScalingProvider13getImageScaleEiiiii */
/* Demangled: FocalScalingProvider::getImageScale(int, int, int, int, int) */
int _ZN20FocalScalingProvider13getImageScaleEiiiii(void);

/* Symbol: g_macro_to_inf_ratio */
/* Demangled: g_macro_to_inf_ratio */
extern void* g_macro_to_inf_ratio;

/* Symbol: _ZN13FSC_Algorithm12getAfRecordsEiPiS0_PA2_i */
/* Demangled: FSC_Algorithm::getAfRecords(int, int*, int*, int (*) [2]) */
int _ZN13FSC_Algorithm12getAfRecordsEiPiS0_PA2_i(void);

/* Symbol: _ZN13FSC_Algorithm13getImageScaleEiiiii */
/* Demangled: FSC_Algorithm::getImageScale(int, int, int, int, int) */
int _ZN13FSC_Algorithm13getImageScaleEiiiii(void);

/* Symbol: _ZN6MTKFSC14createInstanceEv */
/* Demangled: MTKFSC::createInstance() */
int _ZN6MTKFSC14createInstanceEv(void);

/* Symbol: _ZN6AppFSCD1Ev */
/* Demangled: AppFSC::~AppFSC() */
int _ZN6AppFSCD1Ev(void);

/* Symbol: _ZN20FocalScalingProvider22getCropSettingsByScaleEfiiiiiiiiPi */
/* Demangled: FocalScalingProvider::getCropSettingsByScale(float, int, int, int, int, int, int, int, int, int*) */
int _ZN20FocalScalingProvider22getCropSettingsByScaleEfiiiiiiiiPi(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZN13FSC_Algorithm12getDacEventsEiiPA2_ifPiPA2_f */
/* Demangled: FSC_Algorithm::getDacEvents(int, int, int (*) [2], float, int*, float (*) [2]) */
int _ZN13FSC_Algorithm12getDacEventsEiiPA2_ifPiPA2_f(void);

/* Symbol: _ZN20FocalScalingProviderD1Ev */
/* Demangled: FocalScalingProvider::~FocalScalingProvider() */
int _ZN20FocalScalingProviderD1Ev(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN13FSC_Algorithm11setMaxScaleEfiiii */
/* Demangled: FSC_Algorithm::setMaxScale(float, int, int, int, int) */
int _ZN13FSC_Algorithm11setMaxScaleEfiiii(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN13FSC_AlgorithmD2Ev */
/* Demangled: FSC_Algorithm::~FSC_Algorithm() */
int _ZN13FSC_AlgorithmD2Ev(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN20FocalScalingProvider22getCropRemainSizeRatioEiiiii */
/* Demangled: FocalScalingProvider::getCropRemainSizeRatio(int, int, int, int, int) */
int _ZN20FocalScalingProvider22getCropRemainSizeRatioEiiiii(void);

/* Symbol: g_dac_macro */
/* Demangled: g_dac_macro */
extern void* g_dac_macro;

/* Symbol: _ZN20FocalScalingProvider20getFSC_Param_MdpCropEiiiiiiiiiiPi */
/* Demangled: FocalScalingProvider::getFSC_Param_MdpCrop(int, int, int, int, int, int, int, int, int, int, int*) */
int _ZN20FocalScalingProvider20getFSC_Param_MdpCropEiiiiiiiiiiPi(void);

/* Symbol: _ZN6MTKFSCD2Ev */
/* Demangled: MTKFSC::~MTKFSC() */
int _ZN6MTKFSCD2Ev(void);

/* Symbol: _ZN13FSC_Algorithm19getImageSlicesScaleEiiiiibfPf */
/* Demangled: FSC_Algorithm::getImageSlicesScale(int, int, int, int, int, bool, float, float*) */
int _ZN13FSC_Algorithm19getImageSlicesScaleEiiiiibfPf(void);

/* Symbol: _ZN20FocalScalingProvider26updateDacToScalePolynomialEi */
/* Demangled: FocalScalingProvider::updateDacToScalePolynomial(int) */
int _ZN20FocalScalingProvider26updateDacToScalePolynomialEi(void);

/* Symbol: _ZN6AppFSC14FSCFeatureCtrlEjPvS0_ */
/* Demangled: AppFSC::FSCFeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppFSC14FSCFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN13FSC_Algorithm11getDacScaleEf */
/* Demangled: FSC_Algorithm::getDacScale(float) */
int _ZN13FSC_Algorithm11getDacScaleEf(void);

/* Symbol: _ZN13FSC_AlgorithmD1Ev */
/* Demangled: FSC_Algorithm::~FSC_Algorithm() */
int _ZN13FSC_AlgorithmD1Ev(void);

/* Symbol: _ZN13FSC_Algorithm9updateDACEiii */
/* Demangled: FSC_Algorithm::updateDAC(int, int, int) */
int _ZN13FSC_Algorithm9updateDACEiii(void);

/* Symbol: _ZN6AppFSCC2Ev */
/* Demangled: AppFSC::AppFSC() */
int _ZN6AppFSCC2Ev(void);

/* Symbol: _ZN6MTKFSC15destroyInstanceEv */
/* Demangled: MTKFSC::destroyInstance() */
int _ZN6MTKFSC15destroyInstanceEv(void);

/* Symbol: _ZN13FSC_Algorithm19getDacEvents_1SliceEiiiiffiPA2_fPiS1_ */
/* Demangled: FSC_Algorithm::getDacEvents_1Slice(int, int, int, int, float, float, int, float (*) [2], int*, float (*) [2]) */
int _ZN13FSC_Algorithm19getDacEvents_1SliceEiiiiffiPA2_fPiS1_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN6MTKFSC7FSCInitEP15FSC_INIT_STRUCT */
/* Demangled: MTKFSC::FSCInit(FSC_INIT_STRUCT*) */
int _ZN6MTKFSC7FSCInitEP15FSC_INIT_STRUCT(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6AppFSC15destroyInstanceEv */
/* Demangled: AppFSC::destroyInstance() */
int _ZN6AppFSC15destroyInstanceEv(void);

/* Symbol: _ZN13FSC_AlgorithmC2Effiiiiii */
/* Demangled: FSC_Algorithm::FSC_Algorithm(float, float, int, int, int, int, int, int) */
int _ZN13FSC_AlgorithmC2Effiiiiii(void);

/* Symbol: _ZN6MTKFSCD0Ev */
/* Demangled: MTKFSC::~MTKFSC() */
int _ZN6MTKFSCD0Ev(void);

/* Symbol: _ZN6AppFSCD2Ev */
/* Demangled: AppFSC::~AppFSC() */
int _ZN6AppFSCD2Ev(void);

/* Symbol: _ZN6AppFSCC1Ev */
/* Demangled: AppFSC::AppFSC() */
int _ZN6AppFSCC1Ev(void);

/* Symbol: _ZN20FocalScalingProvider9updateDACEiii */
/* Demangled: FocalScalingProvider::updateDAC(int, int, int) */
int _ZN20FocalScalingProvider9updateDACEiii(void);

/* Symbol: _ZN20FocalScalingProvider22getFSC_Param_ScaleListEiiiiiiiiiiPi */
/* Demangled: FocalScalingProvider::getFSC_Param_ScaleList(int, int, int, int, int, int, int, int, int, int, int*) */
int _ZN20FocalScalingProvider22getFSC_Param_ScaleListEiiiiiiiiiiPi(void);

/* Symbol: _ZN6AppFSCD0Ev */
/* Demangled: AppFSC::~AppFSC() */
int _ZN6AppFSCD0Ev(void);

/* Symbol: g_max_cropped_ratio */
/* Demangled: g_max_cropped_ratio */
extern void* g_max_cropped_ratio;

/* Symbol: _ZN20FocalScalingProvider13getImageScaleEiiiiiPf */
/* Demangled: FocalScalingProvider::getImageScale(int, int, int, int, int, float*) */
int _ZN20FocalScalingProvider13getImageScaleEiiiiiPf(void);

/* Symbol: _ZN13FSC_Algorithm26updateDacToScalePolynomialEf */
/* Demangled: FSC_Algorithm::updateDacToScalePolynomial(float) */
int _ZN13FSC_Algorithm26updateDacToScalePolynomialEf(void);

/* Symbol: _ZN20FocalScalingProviderD2Ev */
/* Demangled: FocalScalingProvider::~FocalScalingProvider() */
int _ZN20FocalScalingProviderD2Ev(void);

/* Symbol: _ZTV6MTKFSC */
/* Demangled: vtable for MTKFSC */
extern void* _ZTV6MTKFSC;

/* Symbol: g_dac_inf */
/* Demangled: g_dac_inf */
extern void* g_dac_inf;

/* Symbol: _ZN20FocalScalingProviderC1Eiiiiiiii */
/* Demangled: FocalScalingProvider::FocalScalingProvider(int, int, int, int, int, int, int, int) */
int _ZN20FocalScalingProviderC1Eiiiiiiii(void);

/* Symbol: _ZN13FSC_AlgorithmC1Effiiiiii */
/* Demangled: FSC_Algorithm::FSC_Algorithm(float, float, int, int, int, int, int, int) */
int _ZN13FSC_AlgorithmC1Effiiiiii(void);

/* Symbol: g_enable_debug */
/* Demangled: g_enable_debug */
extern void* g_enable_debug;

/* Symbol: _ZTV6AppFSC */
/* Demangled: vtable for AppFSC */
extern void* _ZTV6AppFSC;

/* Symbol: _ZN13FSC_Algorithm24getBufferIndex_FrameInitEi */
/* Demangled: FSC_Algorithm::getBufferIndex_FrameInit(int) */
int _ZN13FSC_Algorithm24getBufferIndex_FrameInitEi(void);

/* Symbol: _ZN6AppFSC11getInstanceEv */
/* Demangled: AppFSC::getInstance() */
int _ZN6AppFSC11getInstanceEv(void);

/* Symbol: _ZN20FocalScalingProvider15getMaxFSC_ScaleEv */
/* Demangled: FocalScalingProvider::getMaxFSC_Scale() */
int _ZN20FocalScalingProvider15getMaxFSC_ScaleEv(void);

/* Symbol: _ZN6MTKFSC14FSCFeatureCtrlEjPvS0_ */
/* Demangled: MTKFSC::FSCFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKFSC14FSCFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN20FocalScalingProviderC2Eiiiiiiii */
/* Demangled: FocalScalingProvider::FocalScalingProvider(int, int, int, int, int, int, int, int) */
int _ZN20FocalScalingProviderC2Eiiiiiiii(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_FSC_H */
