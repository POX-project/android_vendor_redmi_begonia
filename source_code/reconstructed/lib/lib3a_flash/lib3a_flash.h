/*
 * Reverse-Engineered ABI Specification for: lib3a.flash.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib3a.flash.so
 */

#ifndef BEGONIA_RE_LIB3A_FLASH_H
#define BEGONIA_RE_LIB3A_FLASH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: __adddf3 */
/* Demangled: __adddf3 */
int __adddf3(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM16MapFlashDutyStepEiPiS1_PNS_17FlashAlgStrobeLimEPd */
/* Demangled: NS3A::FlashAlgStrobeProfileM::MapFlashDutyStep(int, int*, int*, NS3A::FlashAlgStrobeLim*, double*) */
int _ZN4NS3A22FlashAlgStrobeProfileM16MapFlashDutyStepEiPiS1_PNS_17FlashAlgStrobeLimEPd(void);

/* Symbol: _ZN4NS3A9FlashAlgM11ResetReportEv */
/* Demangled: NS3A::FlashAlgM::ResetReport() */
int _ZN4NS3A9FlashAlgM11ResetReportEv(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileMD1Ev */
/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
int _ZN4NS3A22FlashAlgStrobeProfileMD1Ev(void);

/* Symbol: __aeabi_l2d */
/* Demangled: __aeabi_l2d */
int __aeabi_l2d(void);

/* Symbol: _ZN4NS3A9FlashAlgM4LOG2Ed */
/* Demangled: NS3A::FlashAlgM::LOG2(double) */
int _ZN4NS3A9FlashAlgM4LOG2Ed(void);

/* Symbol: _ZN4NS3A9FlashAlgM14AddAEStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b */
/* Demangled: NS3A::FlashAlgM::AddAEStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
int _ZN4NS3A9FlashAlgM14AddAEStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: __aeabi_dadd */
/* Demangled: __aeabi_dadd */
int __aeabi_dadd(void);

/* Symbol: _ZN4NS3A9FlashAlgM11setDebugDirEPKcS2_ */
/* Demangled: NS3A::FlashAlgM::setDebugDir(char const*, char const*) */
int _ZN4NS3A9FlashAlgM11setDebugDirEPKcS2_(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM7nwFloatEiPKc */
/* Demangled: NS3A::FlashAlgStrobeProfileM::nwFloat(int, char const*) */
int _ZN4NS3A22FlashAlgStrobeProfileM7nwFloatEiPKc(void);

/* Symbol: __aeabi_ui2d */
/* Demangled: __aeabi_ui2d */
int __aeabi_ui2d(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM9RemoveAdrEPv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::RemoveAdr(void*) */
int _ZN4NS3A22FlashAlgStrobeProfileM9RemoveAdrEPv(void);

/* Symbol: __aeabi_drsub */
/* Demangled: __aeabi_drsub */
int __aeabi_drsub(void);

/* Symbol: _ZTVN4NS3A9FlashAlgME */
/* Demangled: vtable for NS3A::FlashAlgM */
extern void* _ZTVN4NS3A9FlashAlgME;

/* Symbol: _ZN4NS3A9FlashAlgM12CalFgTargetYEv */
/* Demangled: NS3A::FlashAlgM::CalFgTargetY() */
int _ZN4NS3A9FlashAlgM12CalFgTargetYEv(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _ZN4NS3A9FlashAlgM14EstimateBaseEVEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::EstimateBaseEV(NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM14EstimateBaseEVEPNS_15FlashAlgEstParaE(void);

/* Symbol: _ZN4NS3A9FlashAlgM19getReflectionTblIdxEP18REFLECTION_TBL_IDX */
/* Demangled: NS3A::FlashAlgM::getReflectionTblIdx(REFLECTION_TBL_IDX*) */
int _ZN4NS3A9FlashAlgM19getReflectionTblIdxEP18REFLECTION_TBL_IDX(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _ZN4NS3A9FlashAlgM21getAvgFlashContributeEv */
/* Demangled: NS3A::FlashAlgM::getAvgFlashContribute() */
int _ZN4NS3A9FlashAlgM21getAvgFlashContributeEv(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM14setPreFlashEngEi */
/* Demangled: NS3A::FlashAlgStrobeProfileM::setPreFlashEng(int) */
int _ZN4NS3A22FlashAlgStrobeProfileM14setPreFlashEngEi(void);

/* Symbol: _ZN4NS3A9FlashAlgM18getPfExpLevelRangeEPdS1_ */
/* Demangled: NS3A::FlashAlgM::getPfExpLevelRange(double*, double*) */
int _ZN4NS3A9FlashAlgM18getPfExpLevelRangeEPdS1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM12lookupExpIsoEdiPNS_17FlashAlgPLineNodeEPiS3_ */
/* Demangled: NS3A::FlashAlgM::lookupExpIso(double, int, NS3A::FlashAlgPLineNode*, int*, int*) */
int _ZN4NS3A9FlashAlgM12lookupExpIsoEdiPNS_17FlashAlgPLineNodeEPiS3_(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileMC2Ev */
/* Demangled: NS3A::FlashAlgStrobeProfileM::FlashAlgStrobeProfileM() */
int _ZN4NS3A22FlashAlgStrobeProfileMC2Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM16EstimateExposureEddddPiS1_S1_S1_ */
/* Demangled: NS3A::FlashAlgM::EstimateExposure(double, double, double, double, int*, int*, int*, int*) */
int _ZN4NS3A9FlashAlgM16EstimateExposureEddddPiS1_S1_S1_(void);

/* Symbol: _ZN4NS3A8FlashAlgD0Ev */
/* Demangled: NS3A::FlashAlg::~FlashAlg() */
int _ZN4NS3A8FlashAlgD0Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM17calLocationWeightEjj */
/* Demangled: NS3A::FlashAlgM::calLocationWeight(unsigned int, unsigned int) */
int _ZN4NS3A9FlashAlgM17calLocationWeightEjj(void);

/* Symbol: _ZN4NS3A9FlashAlgM19getCapExpLevelRangeEPdS1_ */
/* Demangled: NS3A::FlashAlgM::getCapExpLevelRange(double*, double*) */
int _ZN4NS3A9FlashAlgM19getCapExpLevelRangeEPdS1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM10CreateWTabEiPiS1_S1_ */
/* Demangled: NS3A::FlashAlgM::CreateWTab(int, int*, int*, int*) */
int _ZN4NS3A9FlashAlgM10CreateWTabEiPiS1_S1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM18InterpolateCalDataEiPsS1_PNS_7CalDataES1_P10AWB_GAIN_TiiS5_S1_b */
/* Demangled: NS3A::FlashAlgM::InterpolateCalData(int, short*, short*, NS3A::CalData*, short*, AWB_GAIN_T*, int, int, AWB_GAIN_T*, short*, bool) */
int _ZN4NS3A9FlashAlgM18InterpolateCalDataEiPsS1_PNS_7CalDataES1_P10AWB_GAIN_TiiS5_S1_b(void);

/* Symbol: _ZN4NS3A9FlashAlgM28getFlashCalibration_revisionEv */
/* Demangled: NS3A::FlashAlgM::getFlashCalibration_revision() */
int _ZN4NS3A9FlashAlgM28getFlashCalibration_revisionEv(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE1EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)1> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE1EE;

/* Symbol: _ZN4NS3A9FlashAlgM3SimEPKcPviiPNS_15FlashAlgFacePosE */
/* Demangled: NS3A::FlashAlgM::Sim(char const*, void*, int, int, NS3A::FlashAlgFacePos*) */
int _ZN4NS3A9FlashAlgM3SimEPKcPviiPNS_15FlashAlgFacePosE(void);

/* Symbol: __floatunsidf */
/* Demangled: __floatunsidf */
int __floatunsidf(void);

/* Symbol: _ZN4NS3A8FlashAlg11getInstanceEi */
/* Demangled: NS3A::FlashAlg::getInstance(int) */
int _ZN4NS3A8FlashAlg11getInstanceEi(void);

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZN4NS3A8FlashAlgD2Ev */
/* Demangled: NS3A::FlashAlg::~FlashAlg() */
int _ZN4NS3A8FlashAlgD2Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM11getInstanceEi */
/* Demangled: NS3A::FlashAlgM::getInstance(int) */
int _ZN4NS3A9FlashAlgM11getInstanceEi(void);

/* Symbol: _ZN4NS3A9FlashAlgM21EstimateIncreFlashEngEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::EstimateIncreFlashEng(NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM21EstimateIncreFlashEngEPNS_15FlashAlgEstParaE(void);

/* Symbol: _ZN4NS3A9FlashAlgM9CalAECoefEv */
/* Demangled: NS3A::FlashAlgM::CalAECoef() */
int _ZN4NS3A9FlashAlgM9CalAECoefEv(void);

/* Symbol: _Z9EncodeMemiPvi */
/* Demangled: EncodeMem(int, void*, int) */
int _Z9EncodeMemiPvi(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE3EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)3> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE3EE;

/* Symbol: _ZN4NS3A9FlashAlgM16AddPureStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b */
/* Demangled: NS3A::FlashAlgM::AddPureStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
int _ZN4NS3A9FlashAlgM16AddPureStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _ZN4NS3A9FlashAlgM8nwDoubleEiPKc */
/* Demangled: NS3A::FlashAlgM::nwDouble(int, char const*) */
int _ZN4NS3A9FlashAlgM8nwDoubleEiPKc(void);

/* Symbol: __subdf3 */
/* Demangled: __subdf3 */
int __subdf3(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM16EstimateFlashEngEii */
/* Demangled: NS3A::FlashAlgStrobeProfileM::EstimateFlashEng(int, int) */
int _ZN4NS3A22FlashAlgStrobeProfileM16EstimateFlashEngEii(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM6AddAdrEPvPKc */
/* Demangled: NS3A::FlashAlgStrobeProfileM::AddAdr(void*, char const*) */
int _ZN4NS3A22FlashAlgStrobeProfileM6AddAdrEPvPKc(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM14calPreFlashEngEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::calPreFlashEng() */
int _ZN4NS3A22FlashAlgStrobeProfileM14calPreFlashEngEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM11CalPureCoefEv */
/* Demangled: NS3A::FlashAlgM::CalPureCoef() */
int _ZN4NS3A9FlashAlgM11CalPureCoefEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM2nwEiiPKc */
/* Demangled: NS3A::FlashAlgM::nw(int, int, char const*) */
int _ZN4NS3A9FlashAlgM2nwEiiPKc(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN4NS3A9FlashAlgM6linestEiPdS1_S1_S1_ */
/* Demangled: NS3A::FlashAlgM::linest(int, double*, double*, double*, double*) */
int _ZN4NS3A9FlashAlgM6linestEiPdS1_S1_S1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM11calStepDutyEiiiPiS1_ */
/* Demangled: NS3A::FlashAlgM::calStepDuty(int, int, int, int*, int*) */
int _ZN4NS3A9FlashAlgM11calStepDutyEiiiPiS1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM15GetYPrimeWeightEj */
/* Demangled: NS3A::FlashAlgM::GetYPrimeWeight(unsigned int) */
int _ZN4NS3A9FlashAlgM15GetYPrimeWeightEj(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE5EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)5> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE5EE;

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZN4NS3A9FlashAlgM5EstAeEd */
/* Demangled: NS3A::FlashAlgM::EstAe(double) */
int _ZN4NS3A9FlashAlgM5EstAeEd(void);

/* Symbol: _ZN4NS3A9FlashAlgM16calEachBlkWeightEiP18REFLECTION_TBL_IDX */
/* Demangled: NS3A::FlashAlgM::calEachBlkWeight(int, REFLECTION_TBL_IDX*) */
int _ZN4NS3A9FlashAlgM16calEachBlkWeightEiP18REFLECTION_TBL_IDX(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _ZN4NS3A9FlashAlgM12isValueCloseEddd */
/* Demangled: NS3A::FlashAlgM::isValueClose(double, double, double) */
int _ZN4NS3A9FlashAlgM12isValueCloseEddd(void);

/* Symbol: _ZN4NS3A9FlashAlgM14getCurrentTimeEv */
/* Demangled: NS3A::FlashAlgM::getCurrentTime() */
int _ZN4NS3A9FlashAlgM14getCurrentTimeEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM6nwCharEiPKc */
/* Demangled: NS3A::FlashAlgM::nwChar(int, char const*) */
int _ZN4NS3A9FlashAlgM6nwCharEiPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM9CalFbCoefEPdi */
/* Demangled: NS3A::FlashAlgM::CalFbCoef(double*, int) */
int _ZN4NS3A9FlashAlgM9CalFbCoefEPdi(void);

/* Symbol: _ZN4NS3A9FlashAlgM7nwFloatEiPKc */
/* Demangled: NS3A::FlashAlgM::nwFloat(int, char const*) */
int _ZN4NS3A9FlashAlgM7nwFloatEiPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM13SimulateImageEdddPdid */
/* Demangled: NS3A::FlashAlgM::SimulateImage(double, double, double, double*, int, double) */
int _ZN4NS3A9FlashAlgM13SimulateImageEdddPdid(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE7EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)7> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE7EE;

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _ZN4NS3A9FlashAlgM9RemoveAdrEPv */
/* Demangled: NS3A::FlashAlgM::RemoveAdr(void*) */
int _ZN4NS3A9FlashAlgM9RemoveAdrEPv(void);

/* Symbol: _ZN4NS3A9FlashAlgM22DecideFlashCombinationEj */
/* Demangled: NS3A::FlashAlgM::DecideFlashCombination(unsigned int) */
int _ZN4NS3A9FlashAlgM22DecideFlashCombinationEj(void);

/* Symbol: _Z15writeDataToFileP7__sFILEPvi */
/* Demangled: writeDataToFile(__sFILE*, void*, int) */
int _Z15writeDataToFileP7__sFILEPvi(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN4NS3A9FlashAlgM16setDebugDataSizeEi */
/* Demangled: NS3A::FlashAlgM::setDebugDataSize(int) */
int _ZN4NS3A9FlashAlgM16setDebugDataSizeEi(void);

/* Symbol: _ZN4NS3A9FlashAlgM11CalFgWeightEv */
/* Demangled: NS3A::FlashAlgM::CalFgWeight() */
int _ZN4NS3A9FlashAlgM11CalFgWeightEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM12lookupExpIsoEdPNS_5PLineEiPiS3_ */
/* Demangled: NS3A::FlashAlgM::lookupExpIso(double, NS3A::PLine*, int, int*, int*) */
int _ZN4NS3A9FlashAlgM12lookupExpIsoEdPNS_5PLineEiPiS3_(void);

/* Symbol: _ZN4NS3A9FlashAlgM15EstimateIncreEVEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::EstimateIncreEV(NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM15EstimateIncreEVEPNS_15FlashAlgEstParaE(void);

/* Symbol: _ZN4NS3A9FlashAlgM14CalFbWeightedYEdddd */
/* Demangled: NS3A::FlashAlgM::CalFbWeightedY(double, double, double, double) */
int _ZN4NS3A9FlashAlgM14CalFbWeightedYEdddd(void);

/* Symbol: _ZN4NS3A9FlashAlgMD0Ev */
/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
int _ZN4NS3A9FlashAlgMD0Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM11LowRefCheckEPdi */
/* Demangled: NS3A::FlashAlgM::LowRefCheck(double*, int) */
int _ZN4NS3A9FlashAlgM11LowRefCheckEPdi(void);

/* Symbol: __aeabi_dsub */
/* Demangled: __aeabi_dsub */
int __aeabi_dsub(void);

/* Symbol: _Z12SetFileCountPKci */
/* Demangled: SetFileCount(char const*, int) */
int _Z12SetFileCountPKci(void);

/* Symbol: _ZN4NS3A9FlashAlgM16ReadSimDataToTxtEPKcS2_Pi */
/* Demangled: NS3A::FlashAlgM::ReadSimDataToTxt(char const*, char const*, int*) */
int _ZN4NS3A9FlashAlgM16ReadSimDataToTxtEPKcS2_Pi(void);

/* Symbol: _ZN4NS3A9FlashAlgM14EstimateEVCompEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::EstimateEVComp(NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM14EstimateEVCompEPNS_15FlashAlgEstParaE(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: _ZN4NS3A9FlashAlgM21CalHistStretchTargetYEdddd */
/* Demangled: NS3A::FlashAlgM::CalHistStretchTargetY(double, double, double, double) */
int _ZN4NS3A9FlashAlgM21CalHistStretchTargetYEdddd(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM4CopyEPNS_21FlashAlgStrobeProfileE */
/* Demangled: NS3A::FlashAlgStrobeProfileM::Copy(NS3A::FlashAlgStrobeProfile*) */
int _ZN4NS3A22FlashAlgStrobeProfileM4CopyEPNS_21FlashAlgStrobeProfileE(void);

/* Symbol: _ZN4NS3A9FlashAlgM9nwPointerEiPKc */
/* Demangled: NS3A::FlashAlgM::nwPointer(int, char const*) */
int _ZN4NS3A9FlashAlgM9nwPointerEiPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM17ResetIntermediateEv */
/* Demangled: NS3A::FlashAlgM::ResetIntermediate() */
int _ZN4NS3A9FlashAlgM17ResetIntermediateEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM8EVExpCapEPNS_15FlashAlgExpParaEdS2_ */
/* Demangled: NS3A::FlashAlgM::EVExpCap(NS3A::FlashAlgExpPara*, double, NS3A::FlashAlgExpPara*) */
int _ZN4NS3A9FlashAlgM8EVExpCapEPNS_15FlashAlgExpParaEdS2_(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM16ReadFlashProfileEPKc */
/* Demangled: NS3A::FlashAlgStrobeProfileM::ReadFlashProfile(char const*) */
int _ZN4NS3A22FlashAlgStrobeProfileM16ReadFlashProfileEPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM16setPreflashPLineEiPNS_17FlashAlgPLineNodeE */
/* Demangled: NS3A::FlashAlgM::setPreflashPLine(int, NS3A::FlashAlgPLineNode*) */
int _ZN4NS3A9FlashAlgM16setPreflashPLineEiPNS_17FlashAlgPLineNodeE(void);

/* Symbol: _ZN4NS3A9FlashAlgM18DecideCalFlashCombEiPsiiPNS_12ChooseResultEb */
/* Demangled: NS3A::FlashAlgM::DecideCalFlashComb(int, short*, int, int, NS3A::ChooseResult*, bool) */
int _ZN4NS3A9FlashAlgM18DecideCalFlashCombEiPsiiPNS_12ChooseResultEb(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN4NS3A9FlashAlgMD2Ev */
/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
int _ZN4NS3A9FlashAlgMD2Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM14fillDbgDataFWBEv */
/* Demangled: NS3A::FlashAlgM::fillDbgDataFWB() */
int _ZN4NS3A9FlashAlgM14fillDbgDataFWBEv(void);

/* Symbol: _ZNSt3__16vectorIN4NS3A5nwMemENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<NS3A::nwMem, std::__1::allocator<NS3A::nwMem> >::__push_back_slow_path<NS3A::nwMem const&>(NS3A::nwMem const&) */
int _ZNSt3__16vectorIN4NS3A5nwMemENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZN4NS3A9FlashAlgM10AddWarningEii */
/* Demangled: NS3A::FlashAlgM::AddWarning(int, int) */
int _ZN4NS3A9FlashAlgM10AddWarningEii(void);

/* Symbol: _ZN4NS3A9FlashAlgM9createDirEPc */
/* Demangled: NS3A::FlashAlgM::createDir(char*) */
int _ZN4NS3A9FlashAlgM9createDirEPc(void);

/* Symbol: __aeabi_i2d */
/* Demangled: __aeabi_i2d */
int __aeabi_i2d(void);

/* Symbol: _ZN4NS3A9FlashAlgM20setStrobeMaxDutyStepEiiiiii */
/* Demangled: NS3A::FlashAlgM::setStrobeMaxDutyStep(int, int, int, int, int, int) */
int _ZN4NS3A9FlashAlgM20setStrobeMaxDutyStepEiiiiii(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __floatdidf */
/* Demangled: __floatdidf */
int __floatdidf(void);

/* Symbol: _ZN4NS3A9FlashAlgMC2ENS_14EFLASH_ID_TYPEE */
/* Demangled: NS3A::FlashAlgM::FlashAlgM(NS3A::EFLASH_ID_TYPE) */
int _ZN4NS3A9FlashAlgMC2ENS_14EFLASH_ID_TYPEE(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM3dltEPv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::dlt(void*) */
int _ZN4NS3A22FlashAlgStrobeProfileM3dltEPv(void);

/* Symbol: _ZN4NS3A9FlashAlgM14getLastWarningEPiS1_S1_ */
/* Demangled: NS3A::FlashAlgM::getLastWarning(int*, int*, int*) */
int _ZN4NS3A9FlashAlgM14getLastWarningEPiS1_S1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM19fillDbgDataEstimateEv */
/* Demangled: NS3A::FlashAlgM::fillDbgDataEstimate() */
int _ZN4NS3A9FlashAlgM19fillDbgDataEstimateEv(void);

/* Symbol: _ZN4NS3A9FlashAlgMC1ENS_14EFLASH_ID_TYPEE */
/* Demangled: NS3A::FlashAlgM::FlashAlgM(NS3A::EFLASH_ID_TYPE) */
int _ZN4NS3A9FlashAlgMC1ENS_14EFLASH_ID_TYPEE(void);

/* Symbol: _ZN4NS3A9FlashAlgM12ReadFromFileEP7__sFILEiPvi */
/* Demangled: NS3A::FlashAlgM::ReadFromFile(__sFILE*, int, void*, int) */
int _ZN4NS3A9FlashAlgM12ReadFromFileEP7__sFILEiPvi(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileMD0Ev */
/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
int _ZN4NS3A22FlashAlgStrobeProfileMD0Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM10getDbgDataEP18FLASH_DEBUG_INFO_T */
/* Demangled: NS3A::FlashAlgM::getDbgData(FLASH_DEBUG_INFO_T*) */
int _ZN4NS3A9FlashAlgM10getDbgDataEP18FLASH_DEBUG_INFO_T(void);

/* Symbol: _ZN4NS3A9FlashAlgM19setIsSaveSimBinFileEi */
/* Demangled: NS3A::FlashAlgM::setIsSaveSimBinFile(int) */
int _ZN4NS3A9FlashAlgM19setIsSaveSimBinFileEi(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM20MapFlashDutyStepUpDnEiPiS1_S1_S1_PNS_17FlashAlgStrobeLimEPdS4_ */
/* Demangled: NS3A::FlashAlgStrobeProfileM::MapFlashDutyStepUpDn(int, int*, int*, int*, int*, NS3A::FlashAlgStrobeLim*, double*, double*) */
int _ZN4NS3A22FlashAlgStrobeProfileM20MapFlashDutyStepUpDnEiPiS1_S1_S1_PNS_17FlashAlgStrobeLimEPdS4_(void);

/* Symbol: _ZN4NS3A9FlashAlgM15getDistanceInfoEv */
/* Demangled: NS3A::FlashAlgM::getDistanceInfo() */
int _ZN4NS3A9FlashAlgM15getDistanceInfoEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN4NS3A9FlashAlgM11calFlashEngEii */
/* Demangled: NS3A::FlashAlgM::calFlashEng(int, int) */
int _ZN4NS3A9FlashAlgM11calFlashEngEii(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN4NS3A9FlashAlgM19ReadSimDataFromFileEPKcPNS_14FlashBinHeaderE */
/* Demangled: NS3A::FlashAlgM::ReadSimDataFromFile(char const*, NS3A::FlashBinHeader*) */
int _ZN4NS3A9FlashAlgM19ReadSimDataFromFileEPKcPNS_14FlashBinHeaderE(void);

/* Symbol: _ZN4NS3A9FlashAlgM5EVExpEPNS_15FlashAlgExpParaEdS2_ */
/* Demangled: NS3A::FlashAlgM::EVExp(NS3A::FlashAlgExpPara*, double, NS3A::FlashAlgExpPara*) */
int _ZN4NS3A9FlashAlgM5EVExpEPNS_15FlashAlgExpParaEdS2_(void);

/* Symbol: _ZN4NS3A9FlashAlgM12setWTable256EiiPs */
/* Demangled: NS3A::FlashAlgM::setWTable256(int, int, short*) */
int _ZN4NS3A9FlashAlgM12setWTable256EiiPs(void);

/* Symbol: _ZN4NS3A9FlashAlgM28getDualFlashDecider_revisionEv */
/* Demangled: NS3A::FlashAlgM::getDualFlashDecider_revision() */
int _ZN4NS3A9FlashAlgM28getDualFlashDecider_revisionEv(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN4NS3A9FlashAlgM6AddAdrEPvPKc */
/* Demangled: NS3A::FlashAlgM::AddAdr(void*, char const*) */
int _ZN4NS3A9FlashAlgM6AddAdrEPvPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM18StrobeCaliDataProcEiPiS1_PfiiS1_S2_S2_ */
/* Demangled: NS3A::FlashAlgM::StrobeCaliDataProc(int, int*, int*, float*, int, int, int*, float*, float*) */
int _ZN4NS3A9FlashAlgM18StrobeCaliDataProcEiPiS1_PfiiS1_S2_S2_(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM10WriteToMemEPv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::WriteToMem(void*) */
int _ZN4NS3A22FlashAlgStrobeProfileM10WriteToMemEPv(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileMD2Ev */
/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
int _ZN4NS3A22FlashAlgStrobeProfileMD2Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM13SolveCircuit2EiPfS1_S1_fiS1_ */
/* Demangled: NS3A::FlashAlgM::SolveCircuit2(int, float*, float*, float*, float, int, float*) */
int _ZN4NS3A9FlashAlgM13SolveCircuit2EiPfS1_S1_fiS1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM4initEv */
/* Demangled: NS3A::FlashAlgM::init() */
int _ZN4NS3A9FlashAlgM4initEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM18doXrYrTuningOffsetEP23DUAL_FL_XY_COORDINATE_TS2_ */
/* Demangled: NS3A::FlashAlgM::doXrYrTuningOffset(DUAL_FL_XY_COORDINATE_T*, DUAL_FL_XY_COORDINATE_T*) */
int _ZN4NS3A9FlashAlgM18doXrYrTuningOffsetEP23DUAL_FL_XY_COORDINATE_TS2_(void);

/* Symbol: _ZN4NS3A9FlashAlgM6powIntEii */
/* Demangled: NS3A::FlashAlgM::powInt(int, int) */
int _ZN4NS3A9FlashAlgM6powIntEii(void);

/* Symbol: _ZN4NS3A9FlashAlgM10getLastErrEPiS1_S1_ */
/* Demangled: NS3A::FlashAlgM::getLastErr(int*, int*, int*) */
int _ZN4NS3A9FlashAlgM10getLastErrEPiS1_S1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM16setPreflashPLineEPNS_5PLineEi */
/* Demangled: NS3A::FlashAlgM::setPreflashPLine(NS3A::PLine*, int) */
int _ZN4NS3A9FlashAlgM16setPreflashPLineEPNS_5PLineEi(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _ZN4NS3A9FlashAlgM17ForegroundSegmentEPdiS1_S1_S1_ */
/* Demangled: NS3A::FlashAlgM::ForegroundSegment(double*, int, double*, double*, double*) */
int _ZN4NS3A9FlashAlgM17ForegroundSegmentEPdiS1_S1_S1_(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM14CalProfileSizeEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::CalProfileSize() */
int _ZN4NS3A22FlashAlgStrobeProfileM14CalProfileSizeEv(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM14getPreFlashEngEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::getPreFlashEng() */
int _ZN4NS3A22FlashAlgStrobeProfileM14getPreFlashEngEv(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM17EstimateFlashMeanEii */
/* Demangled: NS3A::FlashAlgStrobeProfileM::EstimateFlashMean(int, int) */
int _ZN4NS3A22FlashAlgStrobeProfileM17EstimateFlashMeanEii(void);

/* Symbol: _ZN4NS3A9FlashAlgM14Flash_Awb_InitER16FLASH_AWB_INIT_T */
/* Demangled: NS3A::FlashAlgM::Flash_Awb_Init(FLASH_AWB_INIT_T&) */
int _ZN4NS3A9FlashAlgM14Flash_Awb_InitER16FLASH_AWB_INIT_T(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM9getMaxEngEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::getMaxEng() */
int _ZN4NS3A22FlashAlgStrobeProfileM9getMaxEngEv(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileMC1Ev */
/* Demangled: NS3A::FlashAlgStrobeProfileM::FlashAlgStrobeProfileM() */
int _ZN4NS3A22FlashAlgStrobeProfileMC1Ev(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM10CalBinSizeEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::CalBinSize() */
int _ZN4NS3A22FlashAlgStrobeProfileM10CalBinSizeEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM12AddStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b */
/* Demangled: NS3A::FlashAlgM::AddStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
int _ZN4NS3A9FlashAlgM12AddStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM11ReadFromMemEPvi */
/* Demangled: NS3A::FlashAlgStrobeProfileM::ReadFromMem(void*, int) */
int _ZN4NS3A22FlashAlgStrobeProfileM11ReadFromMemEPvi(void);

/* Symbol: _ZTVN4NS3A8FlashAlgE */
/* Demangled: vtable for NS3A::FlashAlg */
extern void* _ZTVN4NS3A8FlashAlgE;

/* Symbol: _ZN4NS3A9FlashAlgM16ListNotDltMemoryEv */
/* Demangled: NS3A::FlashAlgM::ListNotDltMemory() */
int _ZN4NS3A9FlashAlgM16ListNotDltMemoryEv(void);

/* Symbol: __aeabi_ul2d */
/* Demangled: __aeabi_ul2d */
int __aeabi_ul2d(void);

/* Symbol: _ZN4NS3A9FlashAlgM8AddErrorEii */
/* Demangled: NS3A::FlashAlgM::AddError(int, int) */
int _ZN4NS3A9FlashAlgM8AddErrorEii(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE0EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)0> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE0EE;

/* Symbol: _ZN4NS3A9FlashAlgM20setStrobeMinDutyStepEiii */
/* Demangled: NS3A::FlashAlgM::setStrobeMinDutyStep(int, int, int) */
int _ZN4NS3A9FlashAlgM20setStrobeMinDutyStepEiii(void);

/* Symbol: _ZN4NS3A8FlashAlgD1Ev */
/* Demangled: NS3A::FlashAlg::~FlashAlg() */
int _ZN4NS3A8FlashAlgD1Ev(void);

/* Symbol: _ZN4NS3A9FlashAlgM18lookUpPLineByIndexEPNS_5PLineEiiPiS3_ */
/* Demangled: NS3A::FlashAlgM::lookUpPLineByIndex(NS3A::PLine*, int, int, int*, int*) */
int _ZN4NS3A9FlashAlgM18lookUpPLineByIndexEPNS_5PLineEiiPiS3_(void);

/* Symbol: _Z12saveTxtImagePKcPviii */
/* Demangled: saveTxtImage(char const*, void*, int, int, int) */
int _Z12saveTxtImagePKcPviii(void);

/* Symbol: _ZN4NS3A9FlashAlgM17CalFirstEquAEParaEPNS_15FlashAlgExpParaES2_ */
/* Demangled: NS3A::FlashAlgM::CalFirstEquAEPara(NS3A::FlashAlgExpPara*, NS3A::FlashAlgExpPara*) */
int _ZN4NS3A9FlashAlgM17CalFirstEquAEParaEPNS_15FlashAlgExpParaES2_(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE2EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)2> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE2EE;

/* Symbol: _ZN4NS3A9FlashAlgM12WriteSimDataEv */
/* Demangled: NS3A::FlashAlgM::WriteSimData() */
int _ZN4NS3A9FlashAlgM12WriteSimDataEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM11WriteToFileEP7__sFILEiPvi */
/* Demangled: NS3A::FlashAlgM::WriteToFile(__sFILE*, int, void*, int) */
int _ZN4NS3A9FlashAlgM11WriteToFileEP7__sFILEiPvi(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE4EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)4> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE4EE;

/* Symbol: _ZN4NS3A9FlashAlgM6DirCatEPcPKc */
/* Demangled: NS3A::FlashAlgM::DirCat(char*, char const*) */
int _ZN4NS3A9FlashAlgM6DirCatEPcPKc(void);

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM9calMaxEngEv */
/* Demangled: NS3A::FlashAlgStrobeProfileM::calMaxEng() */
int _ZN4NS3A22FlashAlgStrobeProfileM9calMaxEngEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM15setCapturePLineEiPNS_17FlashAlgPLineNodeE */
/* Demangled: NS3A::FlashAlgM::setCapturePLine(int, NS3A::FlashAlgPLineNode*) */
int _ZN4NS3A9FlashAlgM15setCapturePLineEiPNS_17FlashAlgPLineNodeE(void);

/* Symbol: _ZN4NS3A9FlashAlgM21setDefaultPreferencesEv */
/* Demangled: NS3A::FlashAlgM::setDefaultPreferences() */
int _ZN4NS3A9FlashAlgM21setDefaultPreferencesEv(void);

/* Symbol: __floatsidf */
/* Demangled: __floatsidf */
int __floatsidf(void);

/* Symbol: _ZN4NS3A9FlashAlgM14CalInitPureExpEPKNS_15FlashAlgExpParaEPS1_ */
/* Demangled: NS3A::FlashAlgM::CalInitPureExp(NS3A::FlashAlgExpPara const*, NS3A::FlashAlgExpPara*) */
int _ZN4NS3A9FlashAlgM14CalInitPureExpEPKNS_15FlashAlgExpParaEPS1_(void);

/* Symbol: _ZN4NS3A9FlashAlgM5nwIntEiPKc */
/* Demangled: NS3A::FlashAlgM::nwInt(int, char const*) */
int _ZN4NS3A9FlashAlgM5nwIntEiPKc(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN4NS3A9FlashAlgM16AddStaData10_subEPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b */
/* Demangled: NS3A::FlashAlgM::AddStaData10_sub(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
int _ZN4NS3A9FlashAlgM16AddStaData10_subEPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void);

/* Symbol: _ZN4NS3A9FlashAlgM24ForegroundSegmentByKmeanEPdiS1_S1_S1_ */
/* Demangled: NS3A::FlashAlgM::ForegroundSegmentByKmean(double*, int, double*, double*, double*) */
int _ZN4NS3A9FlashAlgM24ForegroundSegmentByKmeanEPdiS1_S1_S1_(void);

/* Symbol: _Z15CalXrYrDistanceP23DUAL_FL_XY_COORDINATE_TS0_d */
/* Demangled: CalXrYrDistance(DUAL_FL_XY_COORDINATE_T*, DUAL_FL_XY_COORDINATE_T*, double) */
int _Z15CalXrYrDistanceP23DUAL_FL_XY_COORDINATE_TS0_d(void);

/* Symbol: _ZN4NS3A9FlashAlgM11setCaliDataEiPiS1_S1_ii */
/* Demangled: NS3A::FlashAlgM::setCaliData(int, int*, int*, int*, int, int) */
int _ZN4NS3A9FlashAlgM11setCaliDataEiPiS1_S1_ii(void);

/* Symbol: _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE6EE */
/* Demangled: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)6> */
extern void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE6EE;

/* Symbol: _ZN4NS3A9FlashAlgM3dltEPv */
/* Demangled: NS3A::FlashAlgM::dlt(void*) */
int _ZN4NS3A9FlashAlgM3dltEPv(void);

/* Symbol: _ZN4NS3A9FlashAlgM9setEVCompEf */
/* Demangled: NS3A::FlashAlgM::setEVComp(float) */
int _ZN4NS3A9FlashAlgM9setEVCompEf(void);

/* Symbol: _ZTVN4NS3A22FlashAlgStrobeProfileME */
/* Demangled: vtable for NS3A::FlashAlgStrobeProfileM */
extern void* _ZTVN4NS3A22FlashAlgStrobeProfileME;

/* Symbol: _ZN4NS3A9FlashAlgM20getFlashAwb_revisionEv */
/* Demangled: NS3A::FlashAlgM::getFlashAwb_revision() */
int _ZN4NS3A9FlashAlgM20getFlashAwb_revisionEv(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN4NS3A9FlashAlgM18flash_property_getEPKci */
/* Demangled: NS3A::FlashAlgM::flash_property_get(char const*, int) */
int _ZN4NS3A9FlashAlgM18flash_property_getEPKci(void);

/* Symbol: _ZN4NS3A9FlashAlgM19checkInputParaErrorEPiS1_ */
/* Demangled: NS3A::FlashAlgM::checkInputParaError(int*, int*) */
int _ZN4NS3A9FlashAlgM19checkInputParaErrorEPiS1_(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _ZN4NS3A22FlashAlgStrobeProfileM9nwPointerEiPKc */
/* Demangled: NS3A::FlashAlgStrobeProfileM::nwPointer(int, char const*) */
int _ZN4NS3A22FlashAlgStrobeProfileM9nwPointerEiPKc(void);

/* Symbol: _ZN4NS3A9FlashAlgM11setEVCompExEfff */
/* Demangled: NS3A::FlashAlgM::setEVCompEx(float, float, float) */
int _ZN4NS3A9FlashAlgM11setEVCompExEfff(void);

/* Symbol: __floatundidf */
/* Demangled: __floatundidf */
int __floatundidf(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN4NS3A9FlashAlgM19ParameterRangeCheckEP24FLASH_AWB_TUNING_PARAM_T */
/* Demangled: NS3A::FlashAlgM::ParameterRangeCheck(FLASH_AWB_TUNING_PARAM_T*) */
int _ZN4NS3A9FlashAlgM19ParameterRangeCheckEP24FLASH_AWB_TUNING_PARAM_T(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: __aeabi_f2d */
/* Demangled: __aeabi_f2d */
int __aeabi_f2d(void);

/* Symbol: _ZN4NS3A9FlashAlgM8EstimateEPNS_15FlashAlgExpParaEPNS_15FlashAlgFacePosEPi */
/* Demangled: NS3A::FlashAlgM::Estimate(NS3A::FlashAlgExpPara*, NS3A::FlashAlgFacePos*, int*) */
int _ZN4NS3A9FlashAlgM8EstimateEPNS_15FlashAlgExpParaEPNS_15FlashAlgFacePosEPi(void);

/* Symbol: _Z12AWBGain2XrYr10AWB_GAIN_TR23DUAL_FL_XY_COORDINATE_Tiii */
/* Demangled: AWBGain2XrYr(AWB_GAIN_T, DUAL_FL_XY_COORDINATE_T&, int, int, int) */
int _Z12AWBGain2XrYr10AWB_GAIN_TR23DUAL_FL_XY_COORDINATE_Tiii(void);

/* Symbol: _Z12GetFileCountPKcPii */
/* Demangled: GetFileCount(char const*, int*, int) */
int _Z12GetFileCountPKcPii(void);

/* Symbol: _ZN4NS3A9FlashAlgM15setFlashProfileEPNS_21FlashAlgStrobeProfileE */
/* Demangled: NS3A::FlashAlgM::setFlashProfile(NS3A::FlashAlgStrobeProfile*) */
int _ZN4NS3A9FlashAlgM15setFlashProfileEPNS_21FlashAlgStrobeProfileE(void);

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN4NS3A9FlashAlgM9DecodeMemEiPvi */
/* Demangled: NS3A::FlashAlgM::DecodeMem(int, void*, int) */
int _ZN4NS3A9FlashAlgM9DecodeMemEiPvi(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _ZN4NS3A9FlashAlgM15EstimateDecreEVEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::EstimateDecreEV(NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM15EstimateDecreEVEPNS_15FlashAlgEstParaE(void);

/* Symbol: _ZN4NS3A9FlashAlgM15setCapturePLineEPNS_5PLineEi */
/* Demangled: NS3A::FlashAlgM::setCapturePLine(NS3A::PLine*, int) */
int _ZN4NS3A9FlashAlgM15setCapturePLineEPNS_5PLineEi(void);

/* Symbol: _ZN4NS3A9FlashAlgMD1Ev */
/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
int _ZN4NS3A9FlashAlgMD1Ev(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: __extendsfdf2 */
/* Demangled: __extendsfdf2 */
int __extendsfdf2(void);

/* Symbol: _ZN4NS3A9FlashAlgM12BuildFbTableEv */
/* Demangled: NS3A::FlashAlgM::BuildFbTable() */
int _ZN4NS3A9FlashAlgM12BuildFbTableEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM18DecideFaceExposureEPNS_15FlashAlgFacePosEPNS_15FlashAlgEstParaE */
/* Demangled: NS3A::FlashAlgM::DecideFaceExposure(NS3A::FlashAlgFacePos*, NS3A::FlashAlgEstPara*) */
int _ZN4NS3A9FlashAlgM18DecideFaceExposureEPNS_15FlashAlgFacePosEPNS_15FlashAlgEstParaE(void);

/* Symbol: _ZN4NS3A9FlashAlgM6SmoothEiPdS1_d */
/* Demangled: NS3A::FlashAlgM::Smooth(int, double*, double*, double) */
int _ZN4NS3A9FlashAlgM6SmoothEiPdS1_d(void);

/* Symbol: _ZN4NS3A9FlashAlgM14WriteIntToFileEP7__sFILEii */
/* Demangled: NS3A::FlashAlgM::WriteIntToFile(__sFILE*, int, int) */
int _ZN4NS3A9FlashAlgM14WriteIntToFileEP7__sFILEii(void);

/* Symbol: _ZN4NS3A9FlashAlgM12setFlashInfoEPNS_23FlashAlgInputInfoStructE */
/* Demangled: NS3A::FlashAlgM::setFlashInfo(NS3A::FlashAlgInputInfoStruct*) */
int _ZN4NS3A9FlashAlgM12setFlashInfoEPNS_23FlashAlgInputInfoStructE(void);

/* Symbol: _ZN4NS3A9FlashAlgM20setTuningPreferencesEP17FLASH_TUNING_PARAi */
/* Demangled: NS3A::FlashAlgM::setTuningPreferences(FLASH_TUNING_PARA*, int) */
int _ZN4NS3A9FlashAlgM20setTuningPreferencesEP17FLASH_TUNING_PARAi(void);

/* Symbol: _ZN4NS3A9FlashAlgM5ResetEv */
/* Demangled: NS3A::FlashAlgM::Reset() */
int _ZN4NS3A9FlashAlgM5ResetEv(void);

/* Symbol: _ZN4NS3A9FlashAlgM14Flash_Awb_AlgoEPj */
/* Demangled: NS3A::FlashAlgM::Flash_Awb_Algo(unsigned int*) */
int _ZN4NS3A9FlashAlgM14Flash_Awb_AlgoEPj(void);

/* Symbol: _ZN4NS3A9FlashAlgM16CalFbWeightTableEPdiddd */
/* Demangled: NS3A::FlashAlgM::CalFbWeightTable(double*, int, double, double, double) */
int _ZN4NS3A9FlashAlgM16CalFbWeightTableEPdiddd(void);

/* Symbol: _ZN4NS3A9FlashAlgM8strCpyExEPcPKci */
/* Demangled: NS3A::FlashAlgM::strCpyEx(char*, char const*, int) */
int _ZN4NS3A9FlashAlgM8strCpyExEPcPKci(void);

/* Symbol: _ZN4NS3A9FlashAlgM7nwShortEiPKc */
/* Demangled: NS3A::FlashAlgM::nwShort(int, char const*) */
int _ZN4NS3A9FlashAlgM7nwShortEiPKc(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: _Z5isIntPKc */
/* Demangled: isInt(char const*) */
int _Z5isIntPKc(void);

__END_DECLS

#endif /* BEGONIA_RE_LIB3A_FLASH_H */
