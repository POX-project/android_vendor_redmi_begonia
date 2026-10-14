/*
 * Reverse-Engineered Source for: lib3a.flash.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "lib3a_flash"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <log/log.h>
#include <hardware/hardware.h>
#include "lib3a_flash.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: __adddf3 */
extern "C" __attribute__((visibility("default"))) int __adddf3(void) {
    ALOGD("__adddf3() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::MapFlashDutyStep(int, int*, int*, NS3A::FlashAlgStrobeLim*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM16MapFlashDutyStepEiPiS1_PNS_17FlashAlgStrobeLimEPd(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM16MapFlashDutyStepEiPiS1_PNS_17FlashAlgStrobeLimEPd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ResetReport() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11ResetReportEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11ResetReportEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileMD1Ev(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileMD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_l2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2d(void) {
    ALOGD("__aeabi_l2d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::LOG2(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM4LOG2Ed(void) {
    ALOGD("_ZN4NS3A9FlashAlgM4LOG2Ed() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddAEStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14AddAEStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14AddAEStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: __aeabi_dadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_dadd(void) {
    ALOGD("__aeabi_dadd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setDebugDir(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11setDebugDirEPKcS2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11setDebugDirEPKcS2_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::nwFloat(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM7nwFloatEiPKc(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM7nwFloatEiPKc() called");
    return 0;
}

/* Demangled: __aeabi_ui2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2d(void) {
    ALOGD("__aeabi_ui2d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::RemoveAdr(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM9RemoveAdrEPv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM9RemoveAdrEPv() called");
    return 0;
}

/* Demangled: __aeabi_drsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_drsub(void) {
    ALOGD("__aeabi_drsub() called");
    return 0;
}

/* Exported Object: vtable for NS3A::FlashAlgM */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A9FlashAlgME = NULL;

/* Demangled: NS3A::FlashAlgM::CalFgTargetY() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12CalFgTargetYEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12CalFgTargetYEv() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateBaseEV(NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14EstimateBaseEVEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14EstimateBaseEVEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getReflectionTblIdx(REFLECTION_TBL_IDX*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19getReflectionTblIdxEP18REFLECTION_TBL_IDX(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19getReflectionTblIdxEP18REFLECTION_TBL_IDX() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getAvgFlashContribute() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM21getAvgFlashContributeEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM21getAvgFlashContributeEv() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::setPreFlashEng(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM14setPreFlashEngEi(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM14setPreFlashEngEi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getPfExpLevelRange(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18getPfExpLevelRangeEPdS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18getPfExpLevelRangeEPdS1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::lookupExpIso(double, int, NS3A::FlashAlgPLineNode*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12lookupExpIsoEdiPNS_17FlashAlgPLineNodeEPiS3_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12lookupExpIsoEdiPNS_17FlashAlgPLineNodeEPiS3_() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::FlashAlgStrobeProfileM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileMC2Ev(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileMC2Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateExposure(double, double, double, double, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16EstimateExposureEddddPiS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16EstimateExposureEddddPiS1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlg::~FlashAlg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8FlashAlgD0Ev(void) {
    ALOGD("_ZN4NS3A8FlashAlgD0Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::calLocationWeight(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM17calLocationWeightEjj(void) {
    ALOGD("_ZN4NS3A9FlashAlgM17calLocationWeightEjj() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getCapExpLevelRange(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19getCapExpLevelRangeEPdS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19getCapExpLevelRangeEPdS1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CreateWTab(int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM10CreateWTabEiPiS1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM10CreateWTabEiPiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::InterpolateCalData(int, short*, short*, NS3A::CalData*, short*, AWB_GAIN_T*, int, int, AWB_GAIN_T*, short*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18InterpolateCalDataEiPsS1_PNS_7CalDataES1_P10AWB_GAIN_TiiS5_S1_b(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18InterpolateCalDataEiPsS1_PNS_7CalDataES1_P10AWB_GAIN_TiiS5_S1_b() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getFlashCalibration_revision() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM28getFlashCalibration_revisionEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM28getFlashCalibration_revisionEv() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)1> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE1EE = NULL;

/* Demangled: NS3A::FlashAlgM::Sim(char const*, void*, int, int, NS3A::FlashAlgFacePos*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM3SimEPKcPviiPNS_15FlashAlgFacePosE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM3SimEPKcPviiPNS_15FlashAlgFacePosE() called");
    return 0;
}

/* Demangled: __floatunsidf */
extern "C" __attribute__((visibility("default"))) int __floatunsidf(void) {
    ALOGD("__floatunsidf() called");
    return 0;
}

/* Demangled: NS3A::FlashAlg::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8FlashAlg11getInstanceEi(void) {
    ALOGD("_ZN4NS3A8FlashAlg11getInstanceEi() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: NS3A::FlashAlg::~FlashAlg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8FlashAlgD2Ev(void) {
    ALOGD("_ZN4NS3A8FlashAlgD2Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getInstance(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11getInstanceEi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11getInstanceEi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateIncreFlashEng(NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM21EstimateIncreFlashEngEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM21EstimateIncreFlashEngEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalAECoef() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9CalAECoefEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9CalAECoefEv() called");
    return 0;
}

/* Demangled: EncodeMem(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z9EncodeMemiPvi(void) {
    ALOGD("_Z9EncodeMemiPvi() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)3> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE3EE = NULL;

/* Demangled: NS3A::FlashAlgM::AddPureStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16AddPureStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16AddPureStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwDouble(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM8nwDoubleEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM8nwDoubleEiPKc() called");
    return 0;
}

/* Demangled: __subdf3 */
extern "C" __attribute__((visibility("default"))) int __subdf3(void) {
    ALOGD("__subdf3() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::EstimateFlashEng(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM16EstimateFlashEngEii(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM16EstimateFlashEngEii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::AddAdr(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM6AddAdrEPvPKc(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM6AddAdrEPvPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::calPreFlashEng() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM14calPreFlashEngEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM14calPreFlashEngEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalPureCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11CalPureCoefEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11CalPureCoefEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nw(int, int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM2nwEiiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM2nwEiiPKc() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::linest(int, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6linestEiPdS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6linestEiPdS1_S1_S1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::calStepDuty(int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11calStepDutyEiiiPiS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11calStepDutyEiiiPiS1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::GetYPrimeWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15GetYPrimeWeightEj(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15GetYPrimeWeightEj() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)5> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE5EE = NULL;

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstAe(double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM5EstAeEd(void) {
    ALOGD("_ZN4NS3A9FlashAlgM5EstAeEd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::calEachBlkWeight(int, REFLECTION_TBL_IDX*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16calEachBlkWeightEiP18REFLECTION_TBL_IDX(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16calEachBlkWeightEiP18REFLECTION_TBL_IDX() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::isValueClose(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12isValueCloseEddd(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12isValueCloseEddd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getCurrentTime() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14getCurrentTimeEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14getCurrentTimeEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwChar(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6nwCharEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6nwCharEiPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalFbCoef(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9CalFbCoefEPdi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9CalFbCoefEPdi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwFloat(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM7nwFloatEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM7nwFloatEiPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::SimulateImage(double, double, double, double*, int, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM13SimulateImageEdddPdid(void) {
    ALOGD("_ZN4NS3A9FlashAlgM13SimulateImageEdddPdid() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)7> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE7EE = NULL;

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::RemoveAdr(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9RemoveAdrEPv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9RemoveAdrEPv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::DecideFlashCombination(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM22DecideFlashCombinationEj(void) {
    ALOGD("_ZN4NS3A9FlashAlgM22DecideFlashCombinationEj() called");
    return 0;
}

/* Demangled: writeDataToFile(__sFILE*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15writeDataToFileP7__sFILEPvi(void) {
    ALOGD("_Z15writeDataToFileP7__sFILEPvi() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setDebugDataSize(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16setDebugDataSizeEi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16setDebugDataSizeEi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalFgWeight() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11CalFgWeightEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11CalFgWeightEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::lookupExpIso(double, NS3A::PLine*, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12lookupExpIsoEdPNS_5PLineEiPiS3_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12lookupExpIsoEdPNS_5PLineEiPiS3_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateIncreEV(NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15EstimateIncreEVEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15EstimateIncreEVEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalFbWeightedY(double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14CalFbWeightedYEdddd(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14CalFbWeightedYEdddd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgMD0Ev(void) {
    ALOGD("_ZN4NS3A9FlashAlgMD0Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::LowRefCheck(double*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11LowRefCheckEPdi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11LowRefCheckEPdi() called");
    return 0;
}

/* Demangled: __aeabi_dsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_dsub(void) {
    ALOGD("__aeabi_dsub() called");
    return 0;
}

/* Demangled: SetFileCount(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12SetFileCountPKci(void) {
    ALOGD("_Z12SetFileCountPKci() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ReadSimDataToTxt(char const*, char const*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16ReadSimDataToTxtEPKcS2_Pi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16ReadSimDataToTxtEPKcS2_Pi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateEVComp(NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14EstimateEVCompEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14EstimateEVCompEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalHistStretchTargetY(double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM21CalHistStretchTargetYEdddd(void) {
    ALOGD("_ZN4NS3A9FlashAlgM21CalHistStretchTargetYEdddd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::Copy(NS3A::FlashAlgStrobeProfile*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM4CopyEPNS_21FlashAlgStrobeProfileE(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM4CopyEPNS_21FlashAlgStrobeProfileE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwPointer(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9nwPointerEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9nwPointerEiPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ResetIntermediate() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM17ResetIntermediateEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM17ResetIntermediateEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EVExpCap(NS3A::FlashAlgExpPara*, double, NS3A::FlashAlgExpPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM8EVExpCapEPNS_15FlashAlgExpParaEdS2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM8EVExpCapEPNS_15FlashAlgExpParaEdS2_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::ReadFlashProfile(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM16ReadFlashProfileEPKc(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM16ReadFlashProfileEPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setPreflashPLine(int, NS3A::FlashAlgPLineNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16setPreflashPLineEiPNS_17FlashAlgPLineNodeE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16setPreflashPLineEiPNS_17FlashAlgPLineNodeE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::DecideCalFlashComb(int, short*, int, int, NS3A::ChooseResult*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18DecideCalFlashCombEiPsiiPNS_12ChooseResultEb(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18DecideCalFlashCombEiPsiiPNS_12ChooseResultEb() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgMD2Ev(void) {
    ALOGD("_ZN4NS3A9FlashAlgMD2Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::fillDbgDataFWB() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14fillDbgDataFWBEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14fillDbgDataFWBEv() called");
    return 0;
}

/* Demangled: void std::__1::vector<NS3A::nwMem, std::__1::allocator<NS3A::nwMem> >::__push_back_slow_path<NS3A::nwMem const&>(NS3A::nwMem const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIN4NS3A5nwMemENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void) {
    ALOGD("_ZNSt3__16vectorIN4NS3A5nwMemENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddWarning(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM10AddWarningEii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM10AddWarningEii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::createDir(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9createDirEPc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9createDirEPc() called");
    return 0;
}

/* Demangled: __aeabi_i2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2d(void) {
    ALOGD("__aeabi_i2d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setStrobeMaxDutyStep(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM20setStrobeMaxDutyStepEiiiiii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM20setStrobeMaxDutyStepEiiiiii() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: __floatdidf */
extern "C" __attribute__((visibility("default"))) int __floatdidf(void) {
    ALOGD("__floatdidf() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::FlashAlgM(NS3A::EFLASH_ID_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgMC2ENS_14EFLASH_ID_TYPEE(void) {
    ALOGD("_ZN4NS3A9FlashAlgMC2ENS_14EFLASH_ID_TYPEE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::dlt(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM3dltEPv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM3dltEPv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getLastWarning(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14getLastWarningEPiS1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14getLastWarningEPiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::fillDbgDataEstimate() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19fillDbgDataEstimateEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19fillDbgDataEstimateEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::FlashAlgM(NS3A::EFLASH_ID_TYPE) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgMC1ENS_14EFLASH_ID_TYPEE(void) {
    ALOGD("_ZN4NS3A9FlashAlgMC1ENS_14EFLASH_ID_TYPEE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ReadFromFile(__sFILE*, int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12ReadFromFileEP7__sFILEiPvi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12ReadFromFileEP7__sFILEiPvi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileMD0Ev(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileMD0Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getDbgData(FLASH_DEBUG_INFO_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM10getDbgDataEP18FLASH_DEBUG_INFO_T(void) {
    ALOGD("_ZN4NS3A9FlashAlgM10getDbgDataEP18FLASH_DEBUG_INFO_T() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setIsSaveSimBinFile(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19setIsSaveSimBinFileEi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19setIsSaveSimBinFileEi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::MapFlashDutyStepUpDn(int, int*, int*, int*, int*, NS3A::FlashAlgStrobeLim*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM20MapFlashDutyStepUpDnEiPiS1_S1_S1_PNS_17FlashAlgStrobeLimEPdS4_(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM20MapFlashDutyStepUpDnEiPiS1_S1_S1_PNS_17FlashAlgStrobeLimEPdS4_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getDistanceInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15getDistanceInfoEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15getDistanceInfoEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: NS3A::FlashAlgM::calFlashEng(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11calFlashEngEii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11calFlashEngEii() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ReadSimDataFromFile(char const*, NS3A::FlashBinHeader*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19ReadSimDataFromFileEPKcPNS_14FlashBinHeaderE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19ReadSimDataFromFileEPKcPNS_14FlashBinHeaderE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EVExp(NS3A::FlashAlgExpPara*, double, NS3A::FlashAlgExpPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM5EVExpEPNS_15FlashAlgExpParaEdS2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM5EVExpEPNS_15FlashAlgExpParaEdS2_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setWTable256(int, int, short*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12setWTable256EiiPs(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12setWTable256EiiPs() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getDualFlashDecider_revision() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM28getDualFlashDecider_revisionEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM28getDualFlashDecider_revisionEv() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddAdr(void*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6AddAdrEPvPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6AddAdrEPvPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::StrobeCaliDataProc(int, int*, int*, float*, int, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18StrobeCaliDataProcEiPiS1_PfiiS1_S2_S2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18StrobeCaliDataProcEiPiS1_PfiiS1_S2_S2_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::WriteToMem(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM10WriteToMemEPv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM10WriteToMemEPv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::~FlashAlgStrobeProfileM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileMD2Ev(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileMD2Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::SolveCircuit2(int, float*, float*, float*, float, int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM13SolveCircuit2EiPfS1_S1_fiS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM13SolveCircuit2EiPfS1_S1_fiS1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::init() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM4initEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM4initEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::doXrYrTuningOffset(DUAL_FL_XY_COORDINATE_T*, DUAL_FL_XY_COORDINATE_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18doXrYrTuningOffsetEP23DUAL_FL_XY_COORDINATE_TS2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18doXrYrTuningOffsetEP23DUAL_FL_XY_COORDINATE_TS2_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::powInt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6powIntEii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6powIntEii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::getLastErr(int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM10getLastErrEPiS1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM10getLastErrEPiS1_S1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setPreflashPLine(NS3A::PLine*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16setPreflashPLineEPNS_5PLineEi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16setPreflashPLineEPNS_5PLineEi() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ForegroundSegment(double*, int, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM17ForegroundSegmentEPdiS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM17ForegroundSegmentEPdiS1_S1_S1_() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::CalProfileSize() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM14CalProfileSizeEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM14CalProfileSizeEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::getPreFlashEng() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM14getPreFlashEngEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM14getPreFlashEngEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::EstimateFlashMean(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM17EstimateFlashMeanEii(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM17EstimateFlashMeanEii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::Flash_Awb_Init(FLASH_AWB_INIT_T&) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14Flash_Awb_InitER16FLASH_AWB_INIT_T(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14Flash_Awb_InitER16FLASH_AWB_INIT_T() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::getMaxEng() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM9getMaxEngEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM9getMaxEngEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::FlashAlgStrobeProfileM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileMC1Ev(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileMC1Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::CalBinSize() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM10CalBinSizeEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM10CalBinSizeEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddStaData10(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12AddStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12AddStaData10EPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::ReadFromMem(void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM11ReadFromMemEPvi(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM11ReadFromMemEPvi() called");
    return 0;
}

/* Exported Object: vtable for NS3A::FlashAlg */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A8FlashAlgE = NULL;

/* Demangled: NS3A::FlashAlgM::ListNotDltMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16ListNotDltMemoryEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16ListNotDltMemoryEv() called");
    return 0;
}

/* Demangled: __aeabi_ul2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2d(void) {
    ALOGD("__aeabi_ul2d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddError(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM8AddErrorEii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM8AddErrorEii() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)0> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE0EE = NULL;

/* Demangled: NS3A::FlashAlgM::setStrobeMinDutyStep(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM20setStrobeMinDutyStepEiii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM20setStrobeMinDutyStepEiii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlg::~FlashAlg() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A8FlashAlgD1Ev(void) {
    ALOGD("_ZN4NS3A8FlashAlgD1Ev() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::lookUpPLineByIndex(NS3A::PLine*, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18lookUpPLineByIndexEPNS_5PLineEiiPiS3_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18lookUpPLineByIndexEPNS_5PLineEiiPiS3_() called");
    return 0;
}

/* Demangled: saveTxtImage(char const*, void*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12saveTxtImagePKcPviii(void) {
    ALOGD("_Z12saveTxtImagePKcPviii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalFirstEquAEPara(NS3A::FlashAlgExpPara*, NS3A::FlashAlgExpPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM17CalFirstEquAEParaEPNS_15FlashAlgExpParaES2_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM17CalFirstEquAEParaEPNS_15FlashAlgExpParaES2_() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)2> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE2EE = NULL;

/* Demangled: NS3A::FlashAlgM::WriteSimData() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12WriteSimDataEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12WriteSimDataEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::WriteToFile(__sFILE*, int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11WriteToFileEP7__sFILEiPvi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11WriteToFileEP7__sFILEiPvi() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)4> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE4EE = NULL;

/* Demangled: NS3A::FlashAlgM::DirCat(char*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6DirCatEPcPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6DirCatEPcPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgStrobeProfileM::calMaxEng() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM9calMaxEngEv(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM9calMaxEngEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setCapturePLine(int, NS3A::FlashAlgPLineNode*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15setCapturePLineEiPNS_17FlashAlgPLineNodeE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15setCapturePLineEiPNS_17FlashAlgPLineNodeE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setDefaultPreferences() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM21setDefaultPreferencesEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM21setDefaultPreferencesEv() called");
    return 0;
}

/* Demangled: __floatsidf */
extern "C" __attribute__((visibility("default"))) int __floatsidf(void) {
    ALOGD("__floatsidf() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalInitPureExp(NS3A::FlashAlgExpPara const*, NS3A::FlashAlgExpPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14CalInitPureExpEPKNS_15FlashAlgExpParaEPS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14CalInitPureExpEPKNS_15FlashAlgExpParaEPS1_() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwInt(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM5nwIntEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM5nwIntEiPKc() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::AddStaData10_sub(NS3A::FlashAlgStaData*, NS3A::FlashAlgExpPara*, int*, NS3A::FlashAlgExpPara*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16AddStaData10_subEPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16AddStaData10_subEPNS_15FlashAlgStaDataEPNS_15FlashAlgExpParaEPiS4_b() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::ForegroundSegmentByKmean(double*, int, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM24ForegroundSegmentByKmeanEPdiS1_S1_S1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM24ForegroundSegmentByKmeanEPdiS1_S1_S1_() called");
    return 0;
}

/* Demangled: CalXrYrDistance(DUAL_FL_XY_COORDINATE_T*, DUAL_FL_XY_COORDINATE_T*, double) */
extern "C" __attribute__((visibility("default"))) int _Z15CalXrYrDistanceP23DUAL_FL_XY_COORDINATE_TS0_d(void) {
    ALOGD("_Z15CalXrYrDistanceP23DUAL_FL_XY_COORDINATE_TS0_d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setCaliData(int, int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11setCaliDataEiPiS1_S1_ii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11setCaliDataEiPiS1_S1_ii() called");
    return 0;
}

/* Exported Object: vtable for FlashAlgoMDev<(NS3A::EFLASH_ID_TYPE)6> */
extern "C" __attribute__((visibility("default"))) void* _ZTV13FlashAlgoMDevILN4NS3A14EFLASH_ID_TYPEE6EE = NULL;

/* Demangled: NS3A::FlashAlgM::dlt(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM3dltEPv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM3dltEPv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setEVComp(float) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9setEVCompEf(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9setEVCompEf() called");
    return 0;
}

/* Exported Object: vtable for NS3A::FlashAlgStrobeProfileM */
extern "C" __attribute__((visibility("default"))) void* _ZTVN4NS3A22FlashAlgStrobeProfileME = NULL;

/* Demangled: NS3A::FlashAlgM::getFlashAwb_revision() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM20getFlashAwb_revisionEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM20getFlashAwb_revisionEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: NS3A::FlashAlgM::flash_property_get(char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18flash_property_getEPKci(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18flash_property_getEPKci() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::checkInputParaError(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19checkInputParaErrorEPiS1_(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19checkInputParaErrorEPiS1_() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: NS3A::FlashAlgStrobeProfileM::nwPointer(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A22FlashAlgStrobeProfileM9nwPointerEiPKc(void) {
    ALOGD("_ZN4NS3A22FlashAlgStrobeProfileM9nwPointerEiPKc() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setEVCompEx(float, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM11setEVCompExEfff(void) {
    ALOGD("_ZN4NS3A9FlashAlgM11setEVCompExEfff() called");
    return 0;
}

/* Demangled: __floatundidf */
extern "C" __attribute__((visibility("default"))) int __floatundidf(void) {
    ALOGD("__floatundidf() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: NS3A::FlashAlgM::ParameterRangeCheck(FLASH_AWB_TUNING_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM19ParameterRangeCheckEP24FLASH_AWB_TUNING_PARAM_T(void) {
    ALOGD("_ZN4NS3A9FlashAlgM19ParameterRangeCheckEP24FLASH_AWB_TUNING_PARAM_T() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: __aeabi_f2d */
extern "C" __attribute__((visibility("default"))) int __aeabi_f2d(void) {
    ALOGD("__aeabi_f2d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::Estimate(NS3A::FlashAlgExpPara*, NS3A::FlashAlgFacePos*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM8EstimateEPNS_15FlashAlgExpParaEPNS_15FlashAlgFacePosEPi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM8EstimateEPNS_15FlashAlgExpParaEPNS_15FlashAlgFacePosEPi() called");
    return 0;
}

/* Demangled: AWBGain2XrYr(AWB_GAIN_T, DUAL_FL_XY_COORDINATE_T&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z12AWBGain2XrYr10AWB_GAIN_TR23DUAL_FL_XY_COORDINATE_Tiii(void) {
    ALOGD("_Z12AWBGain2XrYr10AWB_GAIN_TR23DUAL_FL_XY_COORDINATE_Tiii() called");
    return 0;
}

/* Demangled: GetFileCount(char const*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12GetFileCountPKcPii(void) {
    ALOGD("_Z12GetFileCountPKcPii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setFlashProfile(NS3A::FlashAlgStrobeProfile*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15setFlashProfileEPNS_21FlashAlgStrobeProfileE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15setFlashProfileEPNS_21FlashAlgStrobeProfileE() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::DecodeMem(int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM9DecodeMemEiPvi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM9DecodeMemEiPvi() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::EstimateDecreEV(NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15EstimateDecreEVEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15EstimateDecreEVEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setCapturePLine(NS3A::PLine*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM15setCapturePLineEPNS_5PLineEi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM15setCapturePLineEPNS_5PLineEi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::~FlashAlgM() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgMD1Ev(void) {
    ALOGD("_ZN4NS3A9FlashAlgMD1Ev() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: __extendsfdf2 */
extern "C" __attribute__((visibility("default"))) int __extendsfdf2(void) {
    ALOGD("__extendsfdf2() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::BuildFbTable() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12BuildFbTableEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12BuildFbTableEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::DecideFaceExposure(NS3A::FlashAlgFacePos*, NS3A::FlashAlgEstPara*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM18DecideFaceExposureEPNS_15FlashAlgFacePosEPNS_15FlashAlgEstParaE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM18DecideFaceExposureEPNS_15FlashAlgFacePosEPNS_15FlashAlgEstParaE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::Smooth(int, double*, double*, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM6SmoothEiPdS1_d(void) {
    ALOGD("_ZN4NS3A9FlashAlgM6SmoothEiPdS1_d() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::WriteIntToFile(__sFILE*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14WriteIntToFileEP7__sFILEii(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14WriteIntToFileEP7__sFILEii() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setFlashInfo(NS3A::FlashAlgInputInfoStruct*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM12setFlashInfoEPNS_23FlashAlgInputInfoStructE(void) {
    ALOGD("_ZN4NS3A9FlashAlgM12setFlashInfoEPNS_23FlashAlgInputInfoStructE() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::setTuningPreferences(FLASH_TUNING_PARA*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM20setTuningPreferencesEP17FLASH_TUNING_PARAi(void) {
    ALOGD("_ZN4NS3A9FlashAlgM20setTuningPreferencesEP17FLASH_TUNING_PARAi() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::Reset() */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM5ResetEv(void) {
    ALOGD("_ZN4NS3A9FlashAlgM5ResetEv() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::Flash_Awb_Algo(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM14Flash_Awb_AlgoEPj(void) {
    ALOGD("_ZN4NS3A9FlashAlgM14Flash_Awb_AlgoEPj() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::CalFbWeightTable(double*, int, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM16CalFbWeightTableEPdiddd(void) {
    ALOGD("_ZN4NS3A9FlashAlgM16CalFbWeightTableEPdiddd() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::strCpyEx(char*, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM8strCpyExEPcPKci(void) {
    ALOGD("_ZN4NS3A9FlashAlgM8strCpyExEPcPKci() called");
    return 0;
}

/* Demangled: NS3A::FlashAlgM::nwShort(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN4NS3A9FlashAlgM7nwShortEiPKc(void) {
    ALOGD("_ZN4NS3A9FlashAlgM7nwShortEiPKc() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: isInt(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z5isIntPKc(void) {
    ALOGD("_Z5isIntPKc() called");
    return 0;
}
