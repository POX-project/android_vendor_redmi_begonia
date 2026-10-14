/*
 * Reverse-Engineered ABI Specification for: libaal_mtk.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaal_mtk.so
 */

#ifndef BEGONIA_RE_LIBAAL_MTK_H
#define BEGONIA_RE_LIBAAL_MTK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6CAALFW13PxlLumMappingEPbS0_iiPii */
/* Demangled: CAALFW::PxlLumMapping(bool*, bool*, int, int, int*, int) */
int _ZN6CAALFW13PxlLumMappingEPbS0_iiPii(void);

/* Symbol: _ZN6CAALFW19setReadabilityLevelEi */
/* Demangled: CAALFW::setReadabilityLevel(int) */
int _ZN6CAALFW19setReadabilityLevelEi(void);

/* Symbol: _ZN6CAALFW6CABC22ERK8AALInputiP9AALOutput */
/* Demangled: CAALFW::CABC22(AALInput const&, int, AALOutput*) */
int _ZN6CAALFW6CABC22ERK8AALInputiP9AALOutput(void);

/* Symbol: _ZN6CAALFW8IIR_gameEiiRiii */
/* Demangled: CAALFW::IIR_game(int, int, int&, int, int) */
int _ZN6CAALFW8IIR_gameEiiRiii(void);

/* Symbol: _ZN6CAALFWD2Ev */
/* Demangled: CAALFW::~CAALFW() */
int _ZN6CAALFWD2Ev(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: _ZN10AALLicenseD1Ev */
/* Demangled: AALLicense::~AALLicense() */
int _ZN10AALLicenseD1Ev(void);

/* Symbol: _ZN6CAALFW14CalcAdpIIRCoefERK8AALInputi */
/* Demangled: CAALFW::CalcAdpIIRCoef(AALInput const&, int) */
int _ZN6CAALFW14CalcAdpIIRCoefERK8AALInputi(void);

/* Symbol: _ZN6CAALFW14PreBLIDecisionEif */
/* Demangled: CAALFW::PreBLIDecision(int, float) */
int _ZN6CAALFW14PreBLIDecisionEif(void);

/* Symbol: _ZN6CAALFW22enterPartialUpdateFlowERK8AALInputP9AALOutput */
/* Demangled: CAALFW::enterPartialUpdateFlow(AALInput const&, AALOutput*) */
int _ZN6CAALFW22enterPartialUpdateFlowERK8AALInputP9AALOutput(void);

/* Symbol: _ZN6CAALFW24setBrighteningSpeedLevelEi */
/* Demangled: CAALFW::setBrighteningSpeedLevel(int) */
int _ZN6CAALFW24setBrighteningSpeedLevelEi(void);

/* Symbol: _ZN6CAALFW6GamePQERK8AALInputP9AALOutput */
/* Demangled: CAALFW::GamePQ(AALInput const&, AALOutput*) */
int _ZN6CAALFW6GamePQERK8AALInputP9AALOutput(void);

/* Symbol: _ZN8CAAL30FW22u1DrvGetLumaHistWeightEPKjPtttt */
/* Demangled: CAAL30FW::u1DrvGetLumaHistWeight(unsigned int const*, unsigned short*, unsigned short, unsigned short, unsigned short) */
int _ZN8CAAL30FW22u1DrvGetLumaHistWeightEPKjPtttt(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _ZN6CAALFW12DREFrmTrggr3ERK8AALInput */
/* Demangled: CAALFW::DREFrmTrggr3(AALInput const&) */
int _ZN6CAALFW12DREFrmTrggr3ERK8AALInput(void);

/* Symbol: _ZN8CAAL30FW13LowPassFilterEPjjjj */
/* Demangled: CAAL30FW::LowPassFilter(unsigned int*, unsigned int, unsigned int, unsigned int) */
int _ZN8CAAL30FW13LowPassFilterEPjjjj(void);

/* Symbol: _ZN11DRE_CPQDCFWD1Ev */
/* Demangled: DRE_CPQDCFW::~DRE_CPQDCFW() */
int _ZN11DRE_CPQDCFWD1Ev(void);

/* Symbol: _ZN6CAALFW17DRE_BLIGainIdxCalEv */
/* Demangled: CAALFW::DRE_BLIGainIdxCal() */
int _ZN6CAALFW17DRE_BLIGainIdxCalEv(void);

/* Symbol: _ZN11DRE_CPQDCFW21vAdapSecondLumaWeightEj */
/* Demangled: DRE_CPQDCFW::vAdapSecondLumaWeight(unsigned int) */
int _ZN11DRE_CPQDCFW21vAdapSecondLumaWeightEj(void);

/* Symbol: _ZN6CAALFW18DREGainIdxCal_gameERK8AALInput */
/* Demangled: CAALFW::DREGainIdxCal_game(AALInput const&) */
int _ZN6CAALFW18DREGainIdxCal_gameERK8AALInput(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: _ZN8CAAL30FW17vAdaptGreenWeightEj */
/* Demangled: CAAL30FW::vAdaptGreenWeight(unsigned int) */
int _ZN8CAAL30FW17vAdaptGreenWeightEj(void);

/* Symbol: _ZN8CAAL30FW21vBuildSecondLumaCurveEPKtPtjRtjjj */
/* Demangled: CAAL30FW::vBuildSecondLumaCurve(unsigned short const*, unsigned short*, unsigned int, unsigned short&, unsigned int, unsigned int, unsigned int) */
int _ZN8CAAL30FW21vBuildSecondLumaCurveEPKtPtjRtjjj(void);

/* Symbol: _ZN12AALInterface13setDebugFlagsEj */
/* Demangled: AALInterface::setDebugFlags(unsigned int) */
int _ZN12AALInterface13setDebugFlagsEj(void);

/* Symbol: _ZN6CAALFW14DynCAdaptCoef3EPKiPiS2_ */
/* Demangled: CAALFW::DynCAdaptCoef3(int const*, int*, int*) */
int _ZN6CAALFW14DynCAdaptCoef3EPKiPiS2_(void);

/* Symbol: _ZN8CAAL30FW7HistFIREPKtPtPjjj */
/* Demangled: CAAL30FW::HistFIR(unsigned short const*, unsigned short*, unsigned int*, unsigned int, unsigned int) */
int _ZN8CAAL30FW7HistFIREPKtPtPjjj(void);

/* Symbol: __aeabi_uidivmod */
/* Demangled: __aeabi_uidivmod */
int __aeabi_uidivmod(void);

/* Symbol: _ZN11DRE_CPQDCFW18LocalHistEqualizedEPKtPt */
/* Demangled: DRE_CPQDCFW::LocalHistEqualized(unsigned short const*, unsigned short*) */
int _ZN11DRE_CPQDCFW18LocalHistEqualizedEPKtPt(void);

/* Symbol: _ZN11DRE_CPQDCFW19vDrvDynamicWSOffsetEv */
/* Demangled: DRE_CPQDCFW::vDrvDynamicWSOffset() */
int _ZN11DRE_CPQDCFW19vDrvDynamicWSOffsetEv(void);

/* Symbol: _ZN6CAALFW13DREGainIdxCalERK8AALInput */
/* Demangled: CAALFW::DREGainIdxCal(AALInput const&) */
int _ZN6CAALFW13DREGainIdxCalERK8AALInput(void);

/* Symbol: _ZN6CAALFW17calBlkSpaFltParamEi */
/* Demangled: CAALFW::calBlkSpaFltParam(int) */
int _ZN6CAALFW17calBlkSpaFltParamEi(void);

/* Symbol: _ZN6CAALFW25enterPartialUpdateInkModeERK8AALInputP9AALOutput */
/* Demangled: CAALFW::enterPartialUpdateInkMode(AALInput const&, AALOutput*) */
int _ZN6CAALFW25enterPartialUpdateInkModeERK8AALInputP9AALOutput(void);

/* Symbol: _ZN11DRE_CPQDCFW19vDrvADLBuildDefaultEPt */
/* Demangled: DRE_CPQDCFW::vDrvADLBuildDefault(unsigned short*) */
int _ZN11DRE_CPQDCFW19vDrvADLBuildDefaultEPt(void);

/* Symbol: _ZN6CAALFW12setTuningRegEPcPi */
/* Demangled: CAALFW::setTuningReg(char*, int*) */
int _ZN6CAALFW12setTuningRegEPcPi(void);

/* Symbol: _ZN6CAALFW17DREDarkStrngthCalERK8AALInput */
/* Demangled: CAALFW::DREDarkStrngthCal(AALInput const&) */
int _ZN6CAALFW17DREDarkStrngthCalERK8AALInput(void);

/* Symbol: _ZN8CAAL30FW19vDrvADLBuildDefaultEPt */
/* Demangled: CAAL30FW::vDrvADLBuildDefault(unsigned short*) */
int _ZN8CAAL30FW19vDrvADLBuildDefaultEPt(void);

/* Symbol: _ZN12AALInterface14setDRERegByVerEi */
/* Demangled: AALInterface::setDRERegByVer(int) */
int _ZN12AALInterface14setDRERegByVerEi(void);

/* Symbol: _ZN6CAALFWC2Ev */
/* Demangled: CAALFW::CAALFW() */
int _ZN6CAALFWC2Ev(void);

/* Symbol: _ZN8CAAL30FW14DRESwitchGPQ2DEv */
/* Demangled: CAAL30FW::DRESwitchGPQ2D() */
int _ZN8CAAL30FW14DRESwitchGPQ2DEv(void);

/* Symbol: _ZN8CAAL30FW20vSpikeLumaCurve_gameEPKtPtS1_ */
/* Demangled: CAAL30FW::vSpikeLumaCurve_game(unsigned short const*, unsigned short*, unsigned short const*) */
int _ZN8CAAL30FW20vSpikeLumaCurve_gameEPKtPtS1_(void);

/* Symbol: _ZN12AALInterface16setESS_CurveTypeEi */
/* Demangled: AALInterface::setESS_CurveType(int) */
int _ZN12AALInterface16setESS_CurveTypeEi(void);

/* Symbol: _ZN10AALLicenseC1Ev */
/* Demangled: AALLicense::AALLicense() */
int _ZN10AALLicenseC1Ev(void);

/* Symbol: _ZN6CAALFW22setReadabilityBLILevelEi */
/* Demangled: CAALFW::setReadabilityBLILevel(int) */
int _ZN6CAALFW22setReadabilityBLILevelEi(void);

/* Symbol: _ZN6CAALFW9ALIIdxCalERK8AALInput */
/* Demangled: CAALFW::ALIIdxCal(AALInput const&) */
int _ZN6CAALFW9ALIIdxCalERK8AALInput(void);

/* Symbol: _ZN6CAALFW14DREGainIdxCal2ERK8AALInput */
/* Demangled: CAALFW::DREGainIdxCal2(AALInput const&) */
int _ZN6CAALFW14DREGainIdxCal2ERK8AALInput(void);

/* Symbol: _ZN6CAALFW3IIREiRiii */
/* Demangled: CAALFW::IIR(int, int&, int, int) */
int _ZN6CAALFW3IIREiRiii(void);

/* Symbol: _ZN11DRE_CPQDCFWC1Ev */
/* Demangled: DRE_CPQDCFW::DRE_CPQDCFW() */
int _ZN11DRE_CPQDCFWC1Ev(void);

/* Symbol: _ZN6CAALFW12setGammaInfoEf */
/* Demangled: CAALFW::setGammaInfo(float) */
int _ZN6CAALFW12setGammaInfoEf(void);

/* Symbol: _ZN6CAALFW16BLIInterpolationEif */
/* Demangled: CAALFW::BLIInterpolation(int, float) */
int _ZN6CAALFW16BLIInterpolationEif(void);

/* Symbol: _ZN6CAALFW18DREGainIdxFlt_gameERK8AALInputP9AALOutput */
/* Demangled: CAALFW::DREGainIdxFlt_game(AALInput const&, AALOutput*) */
int _ZN6CAALFW18DREGainIdxFlt_gameERK8AALInputP9AALOutput(void);

/* Symbol: _ZN12AALInterface12isFieldLegalEji */
/* Demangled: AALInterface::isFieldLegal(unsigned int, int) */
int _ZN12AALInterface12isFieldLegalEji(void);

/* Symbol: _ZN11DRE_CPQDCFW22u1DrvGetLumaHistWeightEPKjPtttt */
/* Demangled: DRE_CPQDCFW::u1DrvGetLumaHistWeight(unsigned int const*, unsigned short*, unsigned short, unsigned short, unsigned short) */
int _ZN11DRE_CPQDCFW22u1DrvGetLumaHistWeightEPKjPtttt(void);

/* Symbol: _ZN6CAALFW11LABCMappingERK8AALInput */
/* Demangled: CAALFW::LABCMapping(AALInput const&) */
int _ZN6CAALFW11LABCMappingERK8AALInput(void);

/* Symbol: _ZN6CAALFW14DREGainIdxCal3ERK8AALInput */
/* Demangled: CAALFW::DREGainIdxCal3(AALInput const&) */
int _ZN6CAALFW14DREGainIdxCal3ERK8AALInput(void);

/* Symbol: _ZN6CAALFW18CABC_BoundEstimateEPfi */
/* Demangled: CAALFW::CABC_BoundEstimate(float*, int) */
int _ZN6CAALFW18CABC_BoundEstimateEPfi(void);

/* Symbol: _ZN8CAAL30FW12BasicInfoCalEjjPjS0_jjS0_ */
/* Demangled: CAAL30FW::BasicInfoCal(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int*) */
int _ZN8CAAL30FW12BasicInfoCalEjjPjS0_jjS0_(void);

/* Symbol: _ZN8CAAL30FW23LocalHistEqualized_gameEPKtPt */
/* Demangled: CAAL30FW::LocalHistEqualized_game(unsigned short const*, unsigned short*) */
int _ZN8CAAL30FW23LocalHistEqualized_gameEPKtPt(void);

/* Symbol: _ZN10AALLicense6s_LockE */
/* Demangled: AALLicense::s_Lock */
extern void* _ZN10AALLicense6s_LockE;

/* Symbol: _ZN6CAALFW12DREFrmTrggr2Ev */
/* Demangled: CAALFW::DREFrmTrggr2() */
int _ZN6CAALFW12DREFrmTrggr2Ev(void);

/* Symbol: _ZN6CAALFW12onInitCommonERK12AALInitParamP10AALInitReg */
/* Demangled: CAALFW::onInitCommon(AALInitParam const&, AALInitReg*) */
int _ZN6CAALFW12onInitCommonERK12AALInitParamP10AALInitReg(void);

/* Symbol: _ZN6CAALFW15initDRERegEntryEv */
/* Demangled: CAALFW::initDRERegEntry() */
int _ZN6CAALFW15initDRERegEntryEv(void);

/* Symbol: _ZN8CAAL30FW23bHistogramNormalizationEPKjPthttt */
/* Demangled: CAAL30FW::bHistogramNormalization(unsigned int const*, unsigned short*, unsigned char, unsigned short, unsigned short, unsigned short) */
int _ZN8CAAL30FW23bHistogramNormalizationEPKjPthttt(void);

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: _ZN6CAALFW5ESS30ERK8AALInputiiP9AALOutput */
/* Demangled: CAALFW::ESS30(AALInput const&, int, int, AALOutput*) */
int _ZN6CAALFW5ESS30ERK8AALInputiiP9AALOutput(void);

/* Symbol: _ZN10AALLicense11s_pInstanceE */
/* Demangled: AALLicense::s_pInstance */
extern void* _ZN10AALLicense11s_pInstanceE;

/* Symbol: _ZN11DRE_CPQDCFW18vDrvDynamicADLParaEv */
/* Demangled: DRE_CPQDCFW::vDrvDynamicADLPara() */
int _ZN11DRE_CPQDCFW18vDrvDynamicADLParaEv(void);

/* Symbol: _ZN11DRE_CPQDCFW23bHistogramNormalizationEPKjPthttt */
/* Demangled: DRE_CPQDCFW::bHistogramNormalization(unsigned int const*, unsigned short*, unsigned char, unsigned short, unsigned short, unsigned short) */
int _ZN11DRE_CPQDCFW23bHistogramNormalizationEPKjPthttt(void);

/* Symbol: _ZN11DRE_CPQDCFW7HistFIREPKtPtPj */
/* Demangled: DRE_CPQDCFW::HistFIR(unsigned short const*, unsigned short*, unsigned int*) */
int _ZN11DRE_CPQDCFW7HistFIREPKtPtPj(void);

/* Symbol: _ZN6CAALFW14setESSRegByVerEi */
/* Demangled: CAALFW::setESSRegByVer(int) */
int _ZN6CAALFW14setESSRegByVerEi(void);

/* Symbol: _ZN6CAALFW5SRE35ERK8AALInputP9AALOutput */
/* Demangled: CAALFW::SRE35(AALInput const&, AALOutput*) */
int _ZN6CAALFW5SRE35ERK8AALInputP9AALOutput(void);

/* Symbol: _ZN6CAALFW5OpLvlERK8AALInput */
/* Demangled: CAALFW::OpLvl(AALInput const&) */
int _ZN6CAALFW5OpLvlERK8AALInput(void);

/* Symbol: _ZN6CAALFWD1Ev */
/* Demangled: CAALFW::~CAALFW() */
int _ZN6CAALFWD1Ev(void);

/* Symbol: _ZN8CAAL30FW16vDrvADLProc_gameERK14DRE30_ADLInputP15DRE30_ADLOutput */
/* Demangled: CAAL30FW::vDrvADLProc_game(DRE30_ADLInput const&, DRE30_ADLOutput*) */
int _ZN8CAAL30FW16vDrvADLProc_gameERK14DRE30_ADLInputP15DRE30_ADLOutput(void);

/* Symbol: _ZN12AALInterface16setESS_PanelTypeEi */
/* Demangled: AALInterface::setESS_PanelType(int) */
int _ZN12AALInterface16setESS_PanelTypeEi(void);

/* Symbol: _ZN6CAALFW20DREFinalGainCal_gameERK8AALInputP9AALOutput */
/* Demangled: CAALFW::DREFinalGainCal_game(AALInput const&, AALOutput*) */
int _ZN6CAALFW20DREFinalGainCal_gameERK8AALInputP9AALOutput(void);

/* Symbol: _ZN8CAAL30FW21vSpikeLumaWeight_gameEPKt */
/* Demangled: CAAL30FW::vSpikeLumaWeight_game(unsigned short const*) */
int _ZN8CAAL30FW21vSpikeLumaWeight_gameEPKt(void);

/* Symbol: _ZN12AALInterface25setSmartBacklightStrengthEi */
/* Demangled: AALInterface::setSmartBacklightStrength(int) */
int _ZN12AALInterface25setSmartBacklightStrengthEi(void);

/* Symbol: _ZN12AALInterfaceD2Ev */
/* Demangled: AALInterface::~AALInterface() */
int _ZN12AALInterfaceD2Ev(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: _ZN11DRE_CPQDCFW12BasicInfoCalEjjjPjS0_j */
/* Demangled: DRE_CPQDCFW::BasicInfoCal(unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int) */
int _ZN11DRE_CPQDCFW12BasicInfoCalEjjjPjS0_j(void);

/* Symbol: _ZN11DRE_CPQDCFW13LowPassFilterEPj */
/* Demangled: DRE_CPQDCFW::LowPassFilter(unsigned int*) */
int _ZN11DRE_CPQDCFW13LowPassFilterEPj(void);

/* Symbol: _ZN6CAALFW12genDynCCurveERK8AALInput */
/* Demangled: CAALFW::genDynCCurve(AALInput const&) */
int _ZN6CAALFW12genDynCCurveERK8AALInput(void);

/* Symbol: _ZN12AALInterface10getAALInfoEP7AALInfo */
/* Demangled: AALInterface::getAALInfo(AALInfo*) */
int _ZN12AALInterface10getAALInfoEP7AALInfo(void);

/* Symbol: _ZN6CAALFW11calPointOutEiPi */
/* Demangled: CAALFW::calPointOut(int, int*) */
int _ZN6CAALFW11calPointOutEiPi(void);

/* Symbol: _ZN12AALInterface13getParametersEP14ImplParameters */
/* Demangled: AALInterface::getParameters(ImplParameters*) */
int _ZN12AALInterface13getParametersEP14ImplParameters(void);

/* Symbol: _ZN12AALInterface14onInitPlatformERK12AALInitParamR14CustParametersP10AALInitRegi */
/* Demangled: AALInterface::onInitPlatform(AALInitParam const&, CustParameters&, AALInitReg*, int) */
int _ZN12AALInterface14onInitPlatformERK12AALInitParamR14CustParametersP10AALInitRegi(void);

/* Symbol: _ZN6CAALFW19EventTriggerSettingERK8AALInputP9AALOutputi */
/* Demangled: CAALFW::EventTriggerSetting(AALInput const&, AALOutput*, int) */
int _ZN6CAALFW19EventTriggerSettingERK8AALInputP9AALOutputi(void);

/* Symbol: _ZN6CAALFW27DualPipeDISPBlockStatisticsER8AALInputS1_S1_RK12AALInitParamRK11DualInfoAALi */
/* Demangled: CAALFW::DualPipeDISPBlockStatistics(AALInput&, AALInput&, AALInput&, AALInitParam const&, DualInfoAAL const&, int) */
int _ZN6CAALFW27DualPipeDISPBlockStatisticsER8AALInputS1_S1_RK12AALInitParamRK11DualInfoAALi(void);

/* Symbol: _ZN6CAALFW9CalcRatioEii */
/* Demangled: CAALFW::CalcRatio(int, int) */
int _ZN6CAALFW9CalcRatioEii(void);

/* Symbol: _ZN12AALInterface12getTuningRegEPcPi */
/* Demangled: AALInterface::getTuningReg(char*, int*) */
int _ZN12AALInterface12getTuningRegEPcPi(void);

/* Symbol: __udivsi3 */
/* Demangled: __udivsi3 */
int __udivsi3(void);

/* Symbol: _ZN6CAALFW11onCalculateERK8AALInputP9AALOutput */
/* Demangled: CAALFW::onCalculate(AALInput const&, AALOutput*) */
int _ZN6CAALFW11onCalculateERK8AALInputP9AALOutput(void);

/* Symbol: _ZN6CAALFW16DREGainCurveCal3EiPi */
/* Demangled: CAALFW::DREGainCurveCal3(int, int*) */
int _ZN6CAALFW16DREGainCurveCal3EiPi(void);

/* Symbol: _ZN6CAALFW16setBL_SmoothTypeEi */
/* Demangled: CAALFW::setBL_SmoothType(int) */
int _ZN6CAALFW16setBL_SmoothTypeEi(void);

/* Symbol: _ZN6CAALFW17partialUpdateFlowERK8AALInputP9AALOutput */
/* Demangled: CAALFW::partialUpdateFlow(AALInput const&, AALOutput*) */
int _ZN6CAALFW17partialUpdateFlowERK8AALInputP9AALOutput(void);

/* Symbol: __udivmoddi4 */
/* Demangled: __udivmoddi4 */
int __udivmoddi4(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN8CAAL30FW13printSWRegValEv */
/* Demangled: CAAL30FW::printSWRegVal() */
int _ZN8CAAL30FW13printSWRegValEv(void);

/* Symbol: _ZN6CAALFWC1Ev */
/* Demangled: CAALFW::CAALFW() */
int _ZN6CAALFWC1Ev(void);

/* Symbol: _ZN11DRE_CPQDCFW14RGBMaxCurveMapEjRjPt */
/* Demangled: DRE_CPQDCFW::RGBMaxCurveMap(unsigned int, unsigned int&, unsigned short*) */
int _ZN11DRE_CPQDCFW14RGBMaxCurveMapEjRjPt(void);

/* Symbol: _ZN6CAALFW8GainCal2EiPi */
/* Demangled: CAALFW::GainCal2(int, int*) */
int _ZN6CAALFW8GainCal2EiPi(void);

/* Symbol: aalfw_tuning_reg_name */
/* Demangled: aalfw_tuning_reg_name */
extern void* aalfw_tuning_reg_name;

/* Symbol: _ZN12AALInterfaceC2Ev */
/* Demangled: AALInterface::AALInterface() */
int _ZN12AALInterfaceC2Ev(void);

/* Symbol: _ZN6CAALFW7LABC_FWEv */
/* Demangled: CAALFW::LABC_FW() */
int _ZN6CAALFW7LABC_FWEv(void);

/* Symbol: _ZN12AALInterface12onInitCommonERK12AALInitParamP10AALInitRegi */
/* Demangled: AALInterface::onInitCommon(AALInitParam const&, AALInitReg*, int) */
int _ZN12AALInterface12onInitCommonERK12AALInitParamP10AALInitRegi(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: _ZN12AALInterface14onInitFunctionEv */
/* Demangled: AALInterface::onInitFunction() */
int _ZN12AALInterface14onInitFunctionEv(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: _ZN6CAALFW14PowerSavingAdjERK8AALInputi */
/* Demangled: CAALFW::PowerSavingAdj(AALInput const&, int) */
int _ZN6CAALFW14PowerSavingAdjERK8AALInputi(void);

/* Symbol: _ZN8CAAL30FW21vLowLvlProtCurve_gameEPt */
/* Demangled: CAAL30FW::vLowLvlProtCurve_game(unsigned short*) */
int _ZN8CAAL30FW21vLowLvlProtCurve_gameEPt(void);

/* Symbol: _ZN10AALLicense11getInstanceEv */
/* Demangled: AALLicense::getInstance() */
int _ZN10AALLicense11getInstanceEv(void);

/* Symbol: _ZN11DRE_CPQDCFW15vSpikeLumaCurveEPKtPtS1_ */
/* Demangled: DRE_CPQDCFW::vSpikeLumaCurve(unsigned short const*, unsigned short*, unsigned short const*) */
int _ZN11DRE_CPQDCFW15vSpikeLumaCurveEPKtPtS1_(void);

/* Symbol: _ZN6CAALFW12getTuningRegEPcPi */
/* Demangled: CAALFW::getTuningReg(char*, int*) */
int _ZN6CAALFW12getTuningRegEPcPi(void);

/* Symbol: _ZN6CAALFW13DREGainIdxFltERK8AALInput */
/* Demangled: CAALFW::DREGainIdxFlt(AALInput const&) */
int _ZN6CAALFW13DREGainIdxFltERK8AALInput(void);

/* Symbol: _ZN6CAALFW24combineDispDualPipeInputER8AALInputS1_S1_RK12AALInitParam */
/* Demangled: CAALFW::combineDispDualPipeInput(AALInput&, AALInput&, AALInput&, AALInitParam const&) */
int _ZN6CAALFW24combineDispDualPipeInputER8AALInputS1_S1_RK12AALInitParam(void);

/* Symbol: _ZN12AALInterface15isAALFwBypassedEv */
/* Demangled: AALInterface::isAALFwBypassed() */
int _ZN12AALInterface15isAALFwBypassedEv(void);

/* Symbol: _ZN6CAALFW20DREDarkStrngthCal3_GEPt */
/* Demangled: CAALFW::DREDarkStrngthCal3_G(unsigned short*) */
int _ZN6CAALFW20DREDarkStrngthCal3_GEPt(void);

/* Symbol: _ZN6CAALFW20turnOffPartialUpdateEP9AALOutput */
/* Demangled: CAALFW::turnOffPartialUpdate(AALOutput*) */
int _ZN6CAALFW20turnOffPartialUpdateEP9AALOutput(void);

/* Symbol: _ZN8CAAL30FW21vAdapSecondLumaWeightEjjj */
/* Demangled: CAAL30FW::vAdapSecondLumaWeight(unsigned int, unsigned int, unsigned int) */
int _ZN8CAAL30FW21vAdapSecondLumaWeightEjjj(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: _ZN6CAALFW14DRESwitchD2GPQER12AALInitParamP10AALInitRegP9AALOutput */
/* Demangled: CAALFW::DRESwitchD2GPQ(AALInitParam&, AALInitReg*, AALOutput*) */
int _ZN6CAALFW14DRESwitchD2GPQER12AALInitParamP10AALInitRegP9AALOutput(void);

/* Symbol: _ZN12AALInterfaceD1Ev */
/* Demangled: AALInterface::~AALInterface() */
int _ZN12AALInterfaceD1Ev(void);

/* Symbol: _ZN19AdaptiveStepControl16getBL_SmoothTypeEi */
/* Demangled: AdaptiveStepControl::getBL_SmoothType(int) */
int _ZN19AdaptiveStepControl16getBL_SmoothTypeEi(void);

/* Symbol: _ZN11DRE_CPQDCFW25bDrvADLDetectSceneChangedEPKtj */
/* Demangled: DRE_CPQDCFW::bDrvADLDetectSceneChanged(unsigned short const*, unsigned int) */
int _ZN11DRE_CPQDCFW25bDrvADLDetectSceneChangedEPKtj(void);

/* Symbol: _ZN6CAALFW13RampImgDetectEPbPKi */
/* Demangled: CAALFW::RampImgDetect(bool*, int const*) */
int _ZN6CAALFW13RampImgDetectEPbPKi(void);

/* Symbol: _ZN6CAALFW14CABC_TrigFrameEiii */
/* Demangled: CAALFW::CABC_TrigFrame(int, int, int) */
int _ZN6CAALFW14CABC_TrigFrameEiii(void);

/* Symbol: _ZN6CAALFW16setESS_CurveTypeEi */
/* Demangled: CAALFW::setESS_CurveType(int) */
int _ZN6CAALFW16setESS_CurveTypeEi(void);

/* Symbol: _ZN6CAALFW9DREReset3ERK8AALInput */
/* Demangled: CAALFW::DREReset3(AALInput const&) */
int _ZN6CAALFW9DREReset3ERK8AALInput(void);

/* Symbol: _ZN8CAAL30FW13ADLInitializeEv */
/* Demangled: CAAL30FW::ADLInitialize() */
int _ZN8CAAL30FW13ADLInitializeEv(void);

/* Symbol: _ZN8CAAL30FW16vSpikeLumaWeightEPKt */
/* Demangled: CAAL30FW::vSpikeLumaWeight(unsigned short const*) */
int _ZN8CAAL30FW16vSpikeLumaWeightEPKt(void);

/* Symbol: _ZN12AALInterface22setSmartBacklightRangeEi */
/* Demangled: AALInterface::setSmartBacklightRange(int) */
int _ZN12AALInterface22setSmartBacklightRangeEi(void);

/* Symbol: _ZN11DRE_CPQDCFW21vBuildSecondLumaCurveEPKtPtj */
/* Demangled: DRE_CPQDCFW::vBuildSecondLumaCurve(unsigned short const*, unsigned short*, unsigned int) */
int _ZN11DRE_CPQDCFW21vBuildSecondLumaCurveEPKtPtj(void);

/* Symbol: _ZN8CAAL30FW19vDrvDynamicBSOffsetEv */
/* Demangled: CAAL30FW::vDrvDynamicBSOffset() */
int _ZN8CAAL30FW19vDrvDynamicBSOffsetEv(void);

/* Symbol: _ZN8CAAL30FW25bDrvADLDetectSceneChangedEPKtj */
/* Demangled: CAAL30FW::bDrvADLDetectSceneChanged(unsigned short const*, unsigned int) */
int _ZN8CAAL30FW25bDrvADLDetectSceneChangedEPKtj(void);

/* Symbol: _ZN8CAAL30FWD2Ev */
/* Demangled: CAAL30FW::~CAAL30FW() */
int _ZN8CAAL30FWD2Ev(void);

/* Symbol: _ZN6CAALFW13setTuningModeEb */
/* Demangled: CAALFW::setTuningMode(bool) */
int _ZN6CAALFW13setTuningModeEb(void);

/* Symbol: _ZN6CAALFW13HistGainCurveEPiS0_S0_S0_PKiS2_ */
/* Demangled: CAALFW::HistGainCurve(int*, int*, int*, int*, int const*, int const*) */
int _ZN6CAALFW13HistGainCurveEPiS0_S0_S0_PKiS2_(void);

/* Symbol: _ZN6CAALFW13LEDimmingStepEPbiiPi */
/* Demangled: CAALFW::LEDimmingStep(bool*, int, int, int*) */
int _ZN6CAALFW13LEDimmingStepEPbiiPi(void);

/* Symbol: _ZN6CAALFW21calPartialUpdateParamEv */
/* Demangled: CAALFW::calPartialUpdateParam() */
int _ZN6CAALFW21calPartialUpdateParamEv(void);

/* Symbol: _ZN6CAALFW15DREGainCurveCalEiPi */
/* Demangled: CAALFW::DREGainCurveCal(int, int*) */
int _ZN6CAALFW15DREGainCurveCalEiPi(void);

/* Symbol: _ZN8CAAL30FW18LocalHistEqualizedEPKtPt */
/* Demangled: CAAL30FW::LocalHistEqualized(unsigned short const*, unsigned short*) */
int _ZN8CAAL30FW18LocalHistEqualizedEPKtPt(void);

/* Symbol: _ZN6CAALFW13PanelUltraDimEbbiP9AALOutput */
/* Demangled: CAALFW::PanelUltraDim(bool, bool, int, AALOutput*) */
int _ZN6CAALFW13PanelUltraDimEbbiP9AALOutput(void);

/* Symbol: _ZN6CAALFW15CABC_SigmaDeltaEiii */
/* Demangled: CAALFW::CABC_SigmaDelta(int, int, int) */
int _ZN6CAALFW15CABC_SigmaDeltaEiii(void);

/* Symbol: _ZN6CAALFW19EGLmappingAppGamePQEPj */
/* Demangled: CAALFW::EGLmappingAppGamePQ(unsigned int*) */
int _ZN6CAALFW19EGLmappingAppGamePQEPj(void);

/* Symbol: _ZN6CAALFW22setDarkeningSpeedLevelEi */
/* Demangled: CAALFW::setDarkeningSpeedLevel(int) */
int _ZN6CAALFW22setDarkeningSpeedLevelEi(void);

/* Symbol: _ZN6CAALFW25setSmartBacklightStrengthEi */
/* Demangled: CAALFW::setSmartBacklightStrength(int) */
int _ZN6CAALFW25setSmartBacklightStrengthEi(void);

/* Symbol: _ZN6CAALFW3DREERK8AALInputP9AALOutput */
/* Demangled: CAALFW::DRE(AALInput const&, AALOutput*) */
int _ZN6CAALFW3DREERK8AALInputP9AALOutput(void);

/* Symbol: __aeabi_uidiv */
/* Demangled: __aeabi_uidiv */
int __aeabi_uidiv(void);

/* Symbol: _ZN6CAALFW10DREMappingEP9AALOutput */
/* Demangled: CAALFW::DREMapping(AALOutput*) */
int _ZN6CAALFW10DREMappingEP9AALOutput(void);

/* Symbol: _ZN6CAALFW13genDynCCurve3ERK8AALInput */
/* Demangled: CAALFW::genDynCCurve3(AALInput const&) */
int _ZN6CAALFW13genDynCCurve3ERK8AALInput(void);

/* Symbol: _ZN6CAALFW14setDRERegByVerEi */
/* Demangled: CAALFW::setDRERegByVer(int) */
int _ZN6CAALFW14setDRERegByVerEi(void);

/* Symbol: _ZN6CAALFW20L_AdaptiveLuma_BlockEiiiPiiiiS0_ */
/* Demangled: CAALFW::L_AdaptiveLuma_Block(int, int, int, int*, int, int, int, int*) */
int _ZN6CAALFW20L_AdaptiveLuma_BlockEiiiPiiiiS0_(void);

/* Symbol: _ZN6CAALFW4LABCERK8AALInput */
/* Demangled: CAALFW::LABC(AALInput const&) */
int _ZN6CAALFW4LABCERK8AALInput(void);

/* Symbol: _ZN6CAALFW6SupDimEii */
/* Demangled: CAALFW::SupDim(int, int) */
int _ZN6CAALFW6SupDimEii(void);

/* Symbol: _ZN6CAALFW7ESS_APLEPiS0_PKi */
/* Demangled: CAALFW::ESS_APL(int*, int*, int const*) */
int _ZN6CAALFW7ESS_APLEPiS0_PKi(void);

/* Symbol: _ZN8CAAL30FW15vDrvADLProc_intERK14DRE30_ADLInputP15DRE30_ADLOutput */
/* Demangled: CAAL30FW::vDrvADLProc_int(DRE30_ADLInput const&, DRE30_ADLOutput*) */
int _ZN8CAAL30FW15vDrvADLProc_intERK14DRE30_ADLInputP15DRE30_ADLOutput(void);

/* Symbol: _ZN12AALInterfaceC1Ev */
/* Demangled: AALInterface::AALInterface() */
int _ZN12AALInterfaceC1Ev(void);

/* Symbol: _ZN6CAALFW16onLoadTable_gameEi */
/* Demangled: CAALFW::onLoadTable_game(int) */
int _ZN6CAALFW16onLoadTable_gameEi(void);

/* Symbol: _ZN6CAALFW16setESS_PanelTypeEi */
/* Demangled: CAALFW::setESS_PanelType(int) */
int _ZN6CAALFW16setESS_PanelTypeEi(void);

/* Symbol: _ZN12AALInterface11onCalculateER8AALInputP9AALOutputiPjii */
/* Demangled: AALInterface::onCalculate(AALInput&, AALOutput*, int, unsigned int*, int, int) */
int _ZN12AALInterface11onCalculateER8AALInputP9AALOutputiPjii(void);

/* Symbol: _ZN12AALInterface13onSelectTableEiib */
/* Demangled: AALInterface::onSelectTable(int, int, bool) */
int _ZN12AALInterface13onSelectTableEiib(void);

/* Symbol: __udivmodsi4 */
/* Demangled: __udivmodsi4 */
int __udivmodsi4(void);

/* Symbol: _ZN6CAALFW14RGBMaxCurveMapEiRiPKi */
/* Demangled: CAALFW::RGBMaxCurveMap(int, int&, int const*) */
int _ZN6CAALFW14RGBMaxCurveMapEiRiPKi(void);

/* Symbol: _ZN6CAALFW18setBrightnessLevelEi */
/* Demangled: CAALFW::setBrightnessLevel(int) */
int _ZN6CAALFW18setBrightnessLevelEi(void);

/* Symbol: _ZN12AALInterface16loadGameDRETableER14CustParameters */
/* Demangled: AALInterface::loadGameDRETable(CustParameters&) */
int _ZN12AALInterface16loadGameDRETableER14CustParameters(void);

/* Symbol: _ZN6CAALFW19DRECurveCalculationERK8AALInput */
/* Demangled: CAALFW::DRECurveCalculation(AALInput const&) */
int _ZN6CAALFW19DRECurveCalculationERK8AALInput(void);

/* Symbol: _ZNK6CAALFW11dumpOnLayerEPcj */
/* Demangled: CAALFW::dumpOnLayer(char*, unsigned int) const */
int _ZNK6CAALFW11dumpOnLayerEPcj(void);

/* Symbol: _ZNK6CAALFW9dumpToLogEv */
/* Demangled: CAALFW::dumpToLog() const */
int _ZNK6CAALFW9dumpToLogEv(void);

/* Symbol: _ZN8CAAL30FWC2Ev */
/* Demangled: CAAL30FW::CAAL30FW() */
int _ZN8CAAL30FWC2Ev(void);

/* Symbol: _ZN10AALLicense15destroyInstanceEv */
/* Demangled: AALLicense::destroyInstance() */
int _ZN10AALLicense15destroyInstanceEv(void);

/* Symbol: _ZN6CAALFW12LABCFrmTrggrEv */
/* Demangled: CAALFW::LABCFrmTrggr() */
int _ZN6CAALFW12LABCFrmTrggrEv(void);

/* Symbol: _ZN6CAALFW14CABC_GainCurveEPfPi */
/* Demangled: CAALFW::CABC_GainCurve(float*, int*) */
int _ZN6CAALFW14CABC_GainCurveEPfPi(void);

/* Symbol: _ZN8CAAL30FW14RGBMaxCurveMapEjRjPKt */
/* Demangled: CAAL30FW::RGBMaxCurveMap(unsigned int, unsigned int&, unsigned short const*) */
int _ZN8CAAL30FW14RGBMaxCurveMapEjRjPKt(void);

/* Symbol: __divmoddi4 */
/* Demangled: __divmoddi4 */
int __divmoddi4(void);

/* Symbol: _ZN11DRE_CPQDCFW22vDrvGetBlackWhiteIndexEPKt */
/* Demangled: DRE_CPQDCFW::vDrvGetBlackWhiteIndex(unsigned short const*) */
int _ZN11DRE_CPQDCFW22vDrvGetBlackWhiteIndexEPKt(void);

/* Symbol: _ZN6CAALFW14DREGainIdxFlt2ERK8AALInput */
/* Demangled: CAALFW::DREGainIdxFlt2(AALInput const&) */
int _ZN6CAALFW14DREGainIdxFlt2ERK8AALInput(void);

/* Symbol: _ZN6CAALFW5SRE25ERK8AALInputP9AALOutput */
/* Demangled: CAALFW::SRE25(AALInput const&, AALOutput*) */
int _ZN6CAALFW5SRE25ERK8AALInputP9AALOutput(void);

/* Symbol: _ZN12AALInterface14setESSRegByVerEi */
/* Demangled: AALInterface::setESSRegByVer(int) */
int _ZN12AALInterface14setESSRegByVerEi(void);

/* Symbol: _ZN19AdaptiveStepControl11getMilliSecEv */
/* Demangled: AdaptiveStepControl::getMilliSec() */
int _ZN19AdaptiveStepControl11getMilliSecEv(void);

/* Symbol: _ZN6CAALFW11MaxInfoCalcERK8AALInput */
/* Demangled: CAALFW::MaxInfoCalc(AALInput const&) */
int _ZN6CAALFW11MaxInfoCalcERK8AALInput(void);

/* Symbol: _ZN6CAALFW6BlkSPFERK8AALInputP9AALOutput */
/* Demangled: CAALFW::BlkSPF(AALInput const&, AALOutput*) */
int _ZN6CAALFW6BlkSPFERK8AALInputP9AALOutput(void);

/* Symbol: _ZN6CAALFW8DREResetEv */
/* Demangled: CAALFW::DREReset() */
int _ZN6CAALFW8DREResetEv(void);

/* Symbol: _ZN8CAAL30FW16vLowLvlProtCurveEPt */
/* Demangled: CAAL30FW::vLowLvlProtCurve(unsigned short*) */
int _ZN8CAAL30FW16vLowLvlProtCurveEPt(void);

/* Symbol: _ZN6CAALFW12calBinCntSumERK8AALInput */
/* Demangled: CAALFW::calBinCntSum(AALInput const&) */
int _ZN6CAALFW12calBinCntSumERK8AALInput(void);

/* Symbol: _ZN6CAALFW14DREGainIdxFlt3ERK8AALInput */
/* Demangled: CAALFW::DREGainIdxFlt3(AALInput const&) */
int _ZN6CAALFW14DREGainIdxFlt3ERK8AALInput(void);

/* Symbol: _ZN6CAALFW17DRE_ALIGainIdxCalERK8AALInput */
/* Demangled: CAALFW::DRE_ALIGainIdxCal(AALInput const&) */
int _ZN6CAALFW17DRE_ALIGainIdxCalERK8AALInput(void);

/* Symbol: _ZN6CAALFW18DynCAdaptCoef_gameEPKiS1_Pii */
/* Demangled: CAALFW::DynCAdaptCoef_game(int const*, int const*, int*, int) */
int _ZN6CAALFW18DynCAdaptCoef_gameEPKiS1_Pii(void);

/* Symbol: _ZN6CAALFW23DREGainCurveProtection3EiPi */
/* Demangled: CAALFW::DREGainCurveProtection3(int, int*) */
int _ZN6CAALFW23DREGainCurveProtection3EiPi(void);

/* Symbol: _ZN11DRE_CPQDCFW16vSpikeLumaWeightEPKt */
/* Demangled: DRE_CPQDCFW::vSpikeLumaWeight(unsigned short const*) */
int _ZN11DRE_CPQDCFW16vSpikeLumaWeightEPKt(void);

/* Symbol: _ZN6CAALFW16calIIRForceRangeEv */
/* Demangled: CAALFW::calIIRForceRange() */
int _ZN6CAALFW16calIIRForceRangeEv(void);

/* Symbol: _ZN6CAALFW17AALFunctionChangeERK8AALInput */
/* Demangled: CAALFW::AALFunctionChange(AALInput const&) */
int _ZN6CAALFW17AALFunctionChangeERK8AALInput(void);

/* Symbol: _ZN6CAALFW22setSmartBacklightRangeEi */
/* Demangled: CAALFW::setSmartBacklightRange(int) */
int _ZN6CAALFW22setSmartBacklightRangeEi(void);

/* Symbol: _ZN8CAAL30FW14DRESwitchD2GPQEv */
/* Demangled: CAAL30FW::DRESwitchD2GPQ() */
int _ZN8CAAL30FW14DRESwitchD2GPQEv(void);

/* Symbol: _ZN8CAAL30FW18vAPLCompCurve_gameEPKtPt */
/* Demangled: CAAL30FW::vAPLCompCurve_game(unsigned short const*, unsigned short*) */
int _ZN8CAAL30FW18vAPLCompCurve_gameEPKtPt(void);

/* Symbol: _ZN12AALInterface10writeFieldEjji */
/* Demangled: AALInterface::writeField(unsigned int, unsigned int, int) */
int _ZN12AALInterface10writeFieldEjji(void);

/* Symbol: _ZN12AALInterface19setReadabilityLevelEi */
/* Demangled: AALInterface::setReadabilityLevel(int) */
int _ZN12AALInterface19setReadabilityLevelEi(void);

/* Symbol: _ZN10AALLicenseD2Ev */
/* Demangled: AALLicense::~AALLicense() */
int _ZN10AALLicenseD2Ev(void);

/* Symbol: _ZN6CAALFW18DREDarkStrngthCal3ERK8AALInput */
/* Demangled: CAALFW::DREDarkStrngthCal3(AALInput const&) */
int _ZN6CAALFW18DREDarkStrngthCal3ERK8AALInput(void);

/* Symbol: _ZN6CAALFW14DRESwitchGPQ2DER12AALInitParamP10AALInitRegP9AALOutput */
/* Demangled: CAALFW::DRESwitchGPQ2D(AALInitParam&, AALInitReg*, AALOutput*) */
int _ZN6CAALFW14DRESwitchGPQ2DER12AALInitParamP10AALInitRegP9AALOutput(void);

/* Symbol: _ZN6CAALFW15onInitPart_gameERK12AALInitParamP9AALOutput */
/* Demangled: CAALFW::onInitPart_game(AALInitParam const&, AALOutput*) */
int _ZN6CAALFW15onInitPart_gameERK12AALInitParamP9AALOutput(void);

/* Symbol: _ZN6CAALFW16setDRE30_Tmp_KeyEi */
/* Demangled: CAALFW::setDRE30_Tmp_Key(int) */
int _ZN6CAALFW16setDRE30_Tmp_KeyEi(void);

/* Symbol: _ZN6CAALFW5BLMapEi */
/* Demangled: CAALFW::BLMap(int) */
int _ZN6CAALFW5BLMapEi(void);

/* Symbol: _ZN11DRE_CPQDCFW13printSWRegValEv */
/* Demangled: DRE_CPQDCFW::printSWRegVal() */
int _ZN11DRE_CPQDCFW13printSWRegValEv(void);

/* Symbol: _ZN11DRE_CPQDCFWD2Ev */
/* Demangled: DRE_CPQDCFW::~DRE_CPQDCFW() */
int _ZN11DRE_CPQDCFWD2Ev(void);

/* Symbol: _ZN6CAALFW13DynCAdaptCoefEv */
/* Demangled: CAALFW::DynCAdaptCoef() */
int _ZN6CAALFW13DynCAdaptCoefEv(void);

/* Symbol: _ZN6CAALFW25DREDynCGainCurveCalForALIEPiS0_i */
/* Demangled: CAALFW::DREDynCGainCurveCalForALI(int*, int*, int) */
int _ZN6CAALFW25DREDynCGainCurveCalForALIEPiS0_i(void);

/* Symbol: _ZN8CAAL30FWD1Ev */
/* Demangled: CAAL30FW::~CAAL30FW() */
int _ZN8CAAL30FWD1Ev(void);

/* Symbol: _ZN11DRE_CPQDCFW15vDrvADLProc_intERK12DRE_ADLInputP13DRE_ADLOutput */
/* Demangled: DRE_CPQDCFW::vDrvADLProc_int(DRE_ADLInput const&, DRE_ADLOutput*) */
int _ZN11DRE_CPQDCFW15vDrvADLProc_intERK12DRE_ADLInputP13DRE_ADLOutput(void);

/* Symbol: _ZN6CAALFW14fixed_to_floatEs */
/* Demangled: CAALFW::fixed_to_float(short) */
int _ZN6CAALFW14fixed_to_floatEs(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: _ZN8CAAL30FW19vDrvDynamicWSOffsetEv */
/* Demangled: CAAL30FW::vDrvDynamicWSOffset() */
int _ZN8CAAL30FW19vDrvDynamicWSOffsetEv(void);

/* Symbol: _ZN12AALInterface9readFieldEjPji */
/* Demangled: AALInterface::readField(unsigned int, unsigned int*, int) */
int _ZN12AALInterface9readFieldEjPji(void);

/* Symbol: _ZN10AALLicense13getAALSupportEv */
/* Demangled: AALLicense::getAALSupport() */
int _ZN10AALLicense13getAALSupportEv(void);

/* Symbol: _ZN11DRE_CPQDCFW19vDrvDynamicBSOffsetEv */
/* Demangled: DRE_CPQDCFW::vDrvDynamicBSOffset() */
int _ZN11DRE_CPQDCFW19vDrvDynamicBSOffsetEv(void);

/* Symbol: _ZN6CAALFW12ScreenChangeERK8AALInput */
/* Demangled: CAALFW::ScreenChange(AALInput const&) */
int _ZN6CAALFW12ScreenChangeERK8AALInput(void);

/* Symbol: _ZN6CAALFW15setDREGammaInfoEf */
/* Demangled: CAALFW::setDREGammaInfo(float) */
int _ZN6CAALFW15setDREGammaInfoEf(void);

/* Symbol: _ZN6CAALFW6DRE_FWEv */
/* Demangled: CAALFW::DRE_FW() */
int _ZN6CAALFW6DRE_FWEv(void);

/* Symbol: _ZN6CAALFW14onInitPlatformERK12AALInitParamR14CustParametersP10AALInitReg */
/* Demangled: CAALFW::onInitPlatform(AALInitParam const&, CustParameters&, AALInitReg*) */
int _ZN6CAALFW14onInitPlatformERK12AALInitParamR14CustParametersP10AALInitReg(void);

/* Symbol: _ZN6CAALFW11DREFrmTrggrEv */
/* Demangled: CAALFW::DREFrmTrggr() */
int _ZN6CAALFW11DREFrmTrggrEv(void);

/* Symbol: _ZN6CAALFW11calPointOutEi */
/* Demangled: CAALFW::calPointOut(int) */
int _ZN6CAALFW11calPointOutEi(void);

/* Symbol: _ZN6CAALFW13MaxPxlMappingEPbPiiiS1_ */
/* Demangled: CAALFW::MaxPxlMapping(bool*, int*, int, int, int*) */
int _ZN6CAALFW13MaxPxlMappingEPbPiiiS1_(void);

/* Symbol: _ZN6CAALFW11BLIStpCntrlERK8AALInput */
/* Demangled: CAALFW::BLIStpCntrl(AALInput const&) */
int _ZN6CAALFW11BLIStpCntrlERK8AALInput(void);

/* Symbol: _ZN6CAALFW22DREGainCurveProtectionEiPi */
/* Demangled: CAALFW::DREGainCurveProtection(int, int*) */
int _ZN6CAALFW22DREGainCurveProtectionEiPi(void);

/* Symbol: _ZN12AALInterface15setESS_HistTypeEi */
/* Demangled: AALInterface::setESS_HistType(int) */
int _ZN12AALInterface15setESS_HistTypeEi(void);

/* Symbol: _ZN6CAALFW14DREBlkHWRegCalEiiRiS0_S0_ */
/* Demangled: CAALFW::DREBlkHWRegCal(int, int, int&, int&, int&) */
int _ZN6CAALFW14DREBlkHWRegCalEiiRiS0_S0_(void);

/* Symbol: _ZN6CAALFW16DREFinalGainCal2EP9AALOutput */
/* Demangled: CAALFW::DREFinalGainCal2(AALOutput*) */
int _ZN6CAALFW16DREFinalGainCal2EP9AALOutput(void);

/* Symbol: _ZN6CAALFW17onInitCommon_gameERK12AALInitParamP10AALInitReg */
/* Demangled: CAALFW::onInitCommon_game(AALInitParam const&, AALInitReg*) */
int _ZN6CAALFW17onInitCommon_gameERK12AALInitParamP10AALInitReg(void);

/* Symbol: _ZN6CAALFW7BlkSTFPERK8AALInputP9AALOutput */
/* Demangled: CAALFW::BlkSTFP(AALInput const&, AALOutput*) */
int _ZN6CAALFW7BlkSTFPERK8AALInputP9AALOutput(void);

/* Symbol: _ZN12AALInterface15onSwitchDREFuncER12AALInitParamP10AALInitRegP9AALOutputi */
/* Demangled: AALInterface::onSwitchDREFunc(AALInitParam&, AALInitReg*, AALOutput*, int) */
int _ZN12AALInterface15onSwitchDREFuncER12AALInitParamP10AALInitRegP9AALOutputi(void);

/* Symbol: _ZN10AALLicenseC2Ev */
/* Demangled: AALLicense::AALLicense() */
int _ZN10AALLicenseC2Ev(void);

/* Symbol: _ZN6CAALFW15DREFinalGainCalEP9AALOutput */
/* Demangled: CAALFW::DREFinalGainCal(AALOutput*) */
int _ZN6CAALFW15DREFinalGainCalEP9AALOutput(void);

/* Symbol: _ZN6CAALFW7GainCalEiP9AALOutput */
/* Demangled: CAALFW::GainCal(int, AALOutput*) */
int _ZN6CAALFW7GainCalEiP9AALOutput(void);

/* Symbol: _ZN11DRE_CPQDCFW23vDrvADLLumaCurveLowPassEPKtPt */
/* Demangled: DRE_CPQDCFW::vDrvADLLumaCurveLowPass(unsigned short const*, unsigned short*) */
int _ZN11DRE_CPQDCFW23vDrvADLLumaCurveLowPassEPKtPt(void);

/* Symbol: _ZN6CAALFW10onInitPartERK12AALInitParamP9AALOutput */
/* Demangled: CAALFW::onInitPart(AALInitParam const&, AALOutput*) */
int _ZN6CAALFW10onInitPartERK12AALInitParamP9AALOutput(void);

/* Symbol: _ZN6CAALFW6CABC21ERK8AALInputiiP9AALOutput */
/* Demangled: CAALFW::CABC21(AALInput const&, int, int, AALOutput*) */
int _ZN6CAALFW6CABC21ERK8AALInputiiP9AALOutput(void);

/* Symbol: _ZN8CAAL30FW18vCompactLumaWeightEPKt */
/* Demangled: CAAL30FW::vCompactLumaWeight(unsigned short const*) */
int _ZN8CAAL30FW18vCompactLumaWeightEPKt(void);

/* Symbol: _ZN8CAAL30FW22vCompactLumaCurve_gameEPKtPtS1_j */
/* Demangled: CAAL30FW::vCompactLumaCurve_game(unsigned short const*, unsigned short*, unsigned short const*, unsigned int) */
int _ZN8CAAL30FW22vCompactLumaCurve_gameEPKtPtS1_j(void);

/* Symbol: _ZN12AALInterface10setUDCurveEiii */
/* Demangled: AALInterface::setUDCurve(int, int, int) */
int _ZN12AALInterface10setUDCurveEiii(void);

/* Symbol: _ZN11DRE_CPQDCFWC2Ev */
/* Demangled: DRE_CPQDCFW::DRE_CPQDCFW() */
int _ZN11DRE_CPQDCFWC2Ev(void);

/* Symbol: _ZN6CAALFW10PxlGainMapEi */
/* Demangled: CAALFW::PxlGainMap(int) */
int _ZN6CAALFW10PxlGainMapEi(void);

/* Symbol: _ZN6CAALFW13TopPxlMappingEbiPiS0_ */
/* Demangled: CAALFW::TopPxlMapping(bool, int, int*, int*) */
int _ZN6CAALFW13TopPxlMappingEbiPiS0_(void);

/* Symbol: _ZN6CAALFW15CABC_tgtSettingEibPiS0_S0_ */
/* Demangled: CAALFW::CABC_tgtSetting(int, bool, int*, int*, int*) */
int _ZN6CAALFW15CABC_tgtSettingEibPiS0_S0_(void);

/* Symbol: _ZN6CAALFW15setESS_HistTypeEi */
/* Demangled: CAALFW::setESS_HistType(int) */
int _ZN6CAALFW15setESS_HistTypeEi(void);

/* Symbol: _ZN8CAAL30FWC1Ev */
/* Demangled: CAAL30FW::CAAL30FW() */
int _ZN8CAAL30FWC1Ev(void);

/* Symbol: _ZN8CAAL30FW13vAPLCompCurveEPKtPt */
/* Demangled: CAAL30FW::vAPLCompCurve(unsigned short const*, unsigned short*) */
int _ZN8CAAL30FW13vAPLCompCurveEPKtPt(void);

/* Symbol: _ZN12AALInterface22setReadabilityBLILevelEi */
/* Demangled: AALInterface::setReadabilityBLILevel(int) */
int _ZN12AALInterface22setReadabilityBLILevelEi(void);

/* Symbol: _ZN6CAALFW16onCalculate_gameERK8AALInputP9AALOutputiPjii */
/* Demangled: CAALFW::onCalculate_game(AALInput const&, AALOutput*, int, unsigned int*, int, int) */
int _ZN6CAALFW16onCalculate_gameERK8AALInputP9AALOutputiPjii(void);

/* Symbol: _ZN6CAALFW3ESSERK8AALInputiiP9AALOutput */
/* Demangled: CAALFW::ESS(AALInput const&, int, int, AALOutput*) */
int _ZN6CAALFW3ESSERK8AALInputiiP9AALOutput(void);

/* Symbol: _ZN8CAAL30FW18vDrvDynamicADLParaEv */
/* Demangled: CAAL30FW::vDrvDynamicADLPara() */
int _ZN8CAAL30FW18vDrvDynamicADLParaEv(void);

/* Symbol: _ZN12AALInterface16setBL_SmoothTypeEi */
/* Demangled: AALInterface::setBL_SmoothType(int) */
int _ZN12AALInterface16setBL_SmoothTypeEi(void);

/* Symbol: _ZN6CAALFW13FlatImgDetectEPbPKi */
/* Demangled: CAALFW::FlatImgDetect(bool*, int const*) */
int _ZN6CAALFW13FlatImgDetectEPbPKi(void);

/* Symbol: _ZN6CAALFW26DREDynCGainCurveCalForALI3EPiS0_i */
/* Demangled: CAALFW::DREDynCGainCurveCalForALI3(int*, int*, int) */
int _ZN6CAALFW26DREDynCGainCurveCalForALI3EPiS0_i(void);

/* Symbol: _ZN6CAALFW26setAppGamePQ20_Key_EnabledEb */
/* Demangled: CAALFW::setAppGamePQ20_Key_Enabled(bool) */
int _ZN6CAALFW26setAppGamePQ20_Key_EnabledEb(void);

/* Symbol: _ZN8CAAL30FW15vSpikeLumaCurveEPKtPtS1_ */
/* Demangled: CAAL30FW::vSpikeLumaCurve(unsigned short const*, unsigned short*, unsigned short const*) */
int _ZN8CAAL30FW15vSpikeLumaCurveEPKtPtS1_(void);

/* Symbol: _ZN8CAAL30FW23vDrvADLLumaCurveLowPassEPKtPt */
/* Demangled: CAAL30FW::vDrvADLLumaCurveLowPass(unsigned short const*, unsigned short*) */
int _ZN8CAAL30FW23vDrvADLLumaCurveLowPassEPKtPt(void);

/* Symbol: _ZN11DRE_CPQDCFW13ADLInitializeEv */
/* Demangled: DRE_CPQDCFW::ADLInitialize() */
int _ZN11DRE_CPQDCFW13ADLInitializeEv(void);

/* Symbol: _ZN6CAALFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_ */
/* Demangled: CAALFW::G_AdaptiveLuma_Block(int, int, int, int*, int, int, int, int*) */
int _ZN6CAALFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_(void);

/* Symbol: _ZN8CAAL30FW22vDrvGetBlackWhiteIndexEPKt */
/* Demangled: CAAL30FW::vDrvGetBlackWhiteIndex(unsigned short const*) */
int _ZN8CAAL30FW22vDrvGetBlackWhiteIndexEPKt(void);

/* Symbol: _ZN19AdaptiveStepControl9setTargetEi */
/* Demangled: AdaptiveStepControl::setTarget(int) */
int _ZN19AdaptiveStepControl9setTargetEi(void);

/* Symbol: _ZN6CAALFW16DREFinalGainCal3ERK8AALInputP9AALOutput */
/* Demangled: CAALFW::DREFinalGainCal3(AALInput const&, AALOutput*) */
int _ZN6CAALFW16DREFinalGainCal3ERK8AALInputP9AALOutput(void);

/* Symbol: _ZN6CAALFW9DREReset2Ev */
/* Demangled: CAALFW::DREReset2() */
int _ZN6CAALFW9DREReset2Ev(void);

/* Symbol: _ZN12AALInterface12setTuningRegEPcPi */
/* Demangled: AALInterface::setTuningReg(char*, int*) */
int _ZN12AALInterface12setTuningRegEPcPi(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAAL_MTK_H */
