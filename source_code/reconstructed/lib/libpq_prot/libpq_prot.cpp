/*
 * Reverse-Engineered Source for: libpq_prot.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libpq_prot"

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
#include "libpq_prot.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: BluLightDefender::onInitCommon(BluLightInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender12onInitCommonERK17BluLightInitParam(void) {
    ALOGD("_ZN16BluLightDefender12onInitCommonERK17BluLightInitParam() called");
    return 0;
}

/* Demangled: BluLightDefender::BluLightDefender() */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefenderC1Ev(void) {
    ALOGD("_ZN16BluLightDefenderC1Ev() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::CheckIfAmbientChanged() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess21CheckIfAmbientChangedEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess21CheckIfAmbientChangedEv() called");
    return 0;
}

/* Demangled: Mode0Interpolation(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18Mode0Interpolationiiii(void) {
    ALOGD("_Z18Mode0Interpolationiiii() called");
    return 0;
}

/* Demangled: CDRETopFW::DREBlkHWRegCal(int, int, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW14DREBlkHWRegCalEiiRiS0_S0_(void) {
    ALOGD("_ZN9CDRETopFW14DREBlkHWRegCalEiiRiS0_S0_() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setForceChange(int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess14setForceChangeEi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess14setForceChangeEi() called");
    return 0;
}

/* Exported Object: ChameleonLicense::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN16ChameleonLicense11s_pInstanceE = NULL;

/* Demangled: CPQDCHistogram::~CPQDCHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogramD2Ev(void) {
    ALOGD("_ZN14CPQDCHistogramD2Ev() called");
    return 0;
}

/* Demangled: HSY_to_HSY_gain(Color_20*, float (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _Z15HSY_to_HSY_gainP8Color_20PA3_f(void) {
    ALOGD("_Z15HSY_to_HSY_gainP8Color_20PA3_f() called");
    return 0;
}

/* Demangled: InitialTChameleonDisplayOutput(TChameleonDisplayOutput&) */
extern "C" __attribute__((visibility("default"))) int _Z30InitialTChameleonDisplayOutputR23TChameleonDisplayOutput(void) {
    ALOGD("_Z30InitialTChameleonDisplayOutputR23TChameleonDisplayOutput() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREBlkHWRegCal(int, int, int&, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14DREBlkHWRegCalEiiRiS0_S0_(void) {
    ALOGD("_ZN11CDREVPTopFW14DREBlkHWRegCalEiiRiS0_S0_() called");
    return 0;
}

/* Demangled: InitialTColorSensorDebounce(TColorSensorDebounce&) */
extern "C" __attribute__((visibility("default"))) int _Z27InitialTColorSensorDebounceR20TColorSensorDebounce(void) {
    ALOGD("_Z27InitialTColorSensorDebounceR20TColorSensorDebounce() called");
    return 0;
}

/* Exported Object: TransitionErrorLog */
extern "C" __attribute__((visibility("default"))) void* TransitionErrorLog = NULL;

/* Demangled: ColorAISelector::AIPQ_selector(float const*, float const*, int, int, int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN15ColorAISelector13AIPQ_selectorEPKfS1_iiiiiRi(void) {
    ALOGD("_ZN15ColorAISelector13AIPQ_selectorEPKfS1_iiiiiRi() called");
    return 0;
}

/* Demangled: CDRECoreFW::printSWRegVal() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW13printSWRegValEv(void) {
    ALOGD("_ZN10CDRECoreFW13printSWRegValEv() called");
    return 0;
}

/* Demangled: CDRETopFW::IspPreviewZoom(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW14IspPreviewZoomERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW14IspPreviewZoomERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvDynamicBSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW19vDrvDynamicBSOffsetEv(void) {
    ALOGD("_ZN12CDREVPCoreFW19vDrvDynamicBSOffsetEv() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvGetBlackWhiteIndex(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW22vDrvGetBlackWhiteIndexEPKt(void) {
    ALOGD("_ZN12CDREVPCoreFW22vDrvGetBlackWhiteIndexEPKt() called");
    return 0;
}

/* Demangled: CDREVPTopFW::G_AdaptiveLuma_Block(int, int, int, int*, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_(void) {
    ALOGD("_ZN11CDREVPTopFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_() called");
    return 0;
}

/* Exported Object: GainCurve_pool */
extern "C" __attribute__((visibility("default"))) void* GainCurve_pool = NULL;

/* Demangled: CPQHDRFW::feedbackMV_setting(HDRFWMemberVariable*, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW18feedbackMV_settingEP19HDRFWMemberVariableP10DHDROUTPUT(void) {
    ALOGD("_ZN8CPQHDRFW18feedbackMV_settingEP19HDRFWMemberVariableP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: CPQDSFW::ModeInterpolation(unsigned int, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW17ModeInterpolationEjjii(void) {
    ALOGD("_ZN7CPQDSFW17ModeInterpolationEjjii() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_hwReg_in2out(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW16rsz_hwReg_in2outEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW16rsz_hwReg_in2outEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: CPQHDRFW::_Get2sCompNum(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW13_Get2sCompNumEii(void) {
    ALOGD("_ZN8CPQHDRFW13_Get2sCompNumEii() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvDynamicWSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW19vDrvDynamicWSOffsetEv(void) {
    ALOGD("_ZN7CPQDCFW19vDrvDynamicWSOffsetEv() called");
    return 0;
}

/* Demangled: CPQRszFW::UltraResGetRegWInit(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW19UltraResGetRegWInitEiiiiiiiii(void) {
    ALOGD("_ZN8CPQRszFW19UltraResGetRegWInitEiiiiiiiii() called");
    return 0;
}

/* Demangled: InitialTChameleonDisplayInput(TChameleonDisplayInput&) */
extern "C" __attribute__((visibility("default"))) int _Z29InitialTChameleonDisplayInputR22TChameleonDisplayInput(void) {
    ALOGD("_Z29InitialTChameleonDisplayInputR22TChameleonDisplayInput() called");
    return 0;
}

/* Demangled: CDREVPTopFW::LoadFWRegSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW17LoadFWRegSettingsEv(void) {
    ALOGD("_ZN11CDREVPTopFW17LoadFWRegSettingsEv() called");
    return 0;
}

/* Demangled: SCLTMLicense::~SCLTMLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicenseD1Ev(void) {
    ALOGD("_ZN12SCLTMLicenseD1Ev() called");
    return 0;
}

/* Demangled: CPQDSFW::max2(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW4max2Eii(void) {
    ALOGD("_ZN7CPQDSFW4max2Eii() called");
    return 0;
}

/* Demangled: Color_Tuning::Apply_Tuning(float (*) [5], float) */
extern "C" __attribute__((visibility("default"))) int _ZN12Color_Tuning12Apply_TuningEPA5_ff(void) {
    ALOGD("_ZN12Color_Tuning12Apply_TuningEPA5_ff() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvDynamicADLPara() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW18vDrvDynamicADLParaEv(void) {
    ALOGD("_ZN10CDRECoreFW18vDrvDynamicADLParaEv() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::HDR10plus_rampWeight(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW20HDR10plus_rampWeightEjjjjj(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW20HDR10plus_rampWeightEjjjjj() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvDynamicWSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW19vDrvDynamicWSOffsetEv(void) {
    ALOGD("_ZN10CDRECoreFW19vDrvDynamicWSOffsetEv() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvGetBlackWhiteIndex(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW22vDrvGetBlackWhiteIndexEPKt(void) {
    ALOGD("_ZN7CPQDCFW22vDrvGetBlackWhiteIndexEPKt() called");
    return 0;
}

/* Demangled: CPQDSFW::IsoAdpGetCorGain(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW16IsoAdpGetCorGainEiiiiii(void) {
    ALOGD("_ZN7CPQDSFW16IsoAdpGetCorGainEiiiiii() called");
    return 0;
}

/* Demangled: CPQDSFW::InitialDSTransitionRegs(DSTransitionRegs&) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW23InitialDSTransitionRegsER16DSTransitionRegs(void) {
    ALOGD("_ZN7CPQDSFW23InitialDSTransitionRegsER16DSTransitionRegs() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onInitCommon(TChameleonDisplayInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess12onInitCommonERK26TChameleonDisplayInitParam(void) {
    ALOGD("_ZN24TChameleonDisplayProcess12onInitCommonERK26TChameleonDisplayInitParam() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onSensorDebounce(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess16onSensorDebounceEiiii(void) {
    ALOGD("_ZN24TChameleonDisplayProcess16onSensorDebounceEiiii() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::CheckIfSensorValueValidInSingleChannel(int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess38CheckIfSensorValueValidInSingleChannelEi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess38CheckIfSensorValueValidInSingleChannelEi() called");
    return 0;
}

/* Exported Object: DSReg_cmparam */
extern "C" __attribute__((visibility("default"))) void* DSReg_cmparam = NULL;

/* Demangled: CDRETopFW::onCalculate(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW11onCalculateERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW11onCalculateERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: SearchUpperBoundAndLowerBoundIndex(int, int const*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z34SearchUpperBoundAndLowerBoundIndexiPKiPiS1_(void) {
    ALOGD("_Z34SearchUpperBoundAndLowerBoundIndexiPKiPiS1_() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vSpikeLumaCurve(unsigned short const*, unsigned short*, unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW15vSpikeLumaCurveEPKtPtS1_(void) {
    ALOGD("_ZN12CDREVPCoreFW15vSpikeLumaCurveEPKtPtS1_() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::GetTargetXYZFromSensor(TXYZ&) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess22GetTargetXYZFromSensorER4TXYZ(void) {
    ALOGD("_ZN24TChameleonDisplayProcess22GetTargetXYZFromSensorER4TXYZ() called");
    return 0;
}

/* Demangled: CPQDSFW::onInitPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW14onInitPlatformEv(void) {
    ALOGD("_ZN7CPQDSFW14onInitPlatformEv() called");
    return 0;
}

/* Demangled: RGBXYZ_to_Whitexy(RGB_XYZ, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _Z17RGBXYZ_to_Whitexy7RGB_XYZRfS0_(void) {
    ALOGD("_Z17RGBXYZ_to_Whitexy7RGB_XYZRfS0_() called");
    return 0;
}

/* Exported Object: RszOutput_cmparam */
extern "C" __attribute__((visibility("default"))) void* RszOutput_cmparam = NULL;

/* Demangled: CDRETopFW::BlkSPF(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW6BlkSPFERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW6BlkSPFERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: CPQDCFW::BasicInfoCal(unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW12BasicInfoCalEjjjPjS0_(void) {
    ALOGD("_ZN7CPQDCFW12BasicInfoCalEjjjPjS0_() called");
    return 0;
}

/* Demangled: CPQDCFW::ADLInitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW13ADLInitializeEv(void) {
    ALOGD("_ZN7CPQDCFW13ADLInitializeEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREBlkNumCal(DREVPInitParam const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW12DREBlkNumCalERK14DREVPInitParamii(void) {
    ALOGD("_ZN11CDREVPTopFW12DREBlkNumCalERK14DREVPInitParamii() called");
    return 0;
}

/* Demangled: CPQDSFW::onCalculate(DSInput const*, DSOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW11onCalculateEPK7DSInputP8DSOutput(void) {
    ALOGD("_ZN7CPQDSFW11onCalculateEPK7DSInputP8DSOutput() called");
    return 0;
}

/* Demangled: InitialTRGBXYZ(TRGBXYZ&) */
extern "C" __attribute__((visibility("default"))) int _Z14InitialTRGBXYZR7TRGBXYZ(void) {
    ALOGD("_Z14InitialTRGBXYZR7TRGBXYZ() called");
    return 0;
}

/* Demangled: InitialTColorReg(TColorReg&) */
extern "C" __attribute__((visibility("default"))) int _Z16InitialTColorRegR9TColorReg(void) {
    ALOGD("_Z16InitialTColorRegR9TColorReg() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::isEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess9isEnabledEv(void) {
    ALOGD("_ZN20TPQTransitionProcess9isEnabledEv() called");
    return 0;
}

/* Demangled: HDRLicense::HDRLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicenseC1Ev(void) {
    ALOGD("_ZN10HDRLicenseC1Ev() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::DumpRegToFile(__sFILE*, __Dynamic_MetaData__*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW13DumpRegToFileEP7__sFILEP20__Dynamic_MetaData__(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW13DumpRegToFileEP7__sFILEP20__Dynamic_MetaData__() called");
    return 0;
}

/* Demangled: Cal_XYZ2RGB(RGB_XYZ, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11Cal_XYZ2RGB7RGB_XYZPf(void) {
    ALOGD("_Z11Cal_XYZ2RGB7RGB_XYZPf() called");
    return 0;
}

/* Demangled: Strength_to_Color_Temperature(float, int, float, float, float, int&) */
extern "C" __attribute__((visibility("default"))) int _Z29Strength_to_Color_TemperaturefifffRi(void) {
    ALOGD("_Z29Strength_to_Color_TemperaturefifffRi() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_tbl_select(RszInput const*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW14rsz_tbl_selectEPK8RszInputii(void) {
    ALOGD("_ZN8CPQRszFW14rsz_tbl_selectEPK8RszInputii() called");
    return 0;
}

/* Demangled: DumpRegToBuffer(char const*, int, char*, int&, int) */
extern "C" __attribute__((visibility("default"))) int _Z15DumpRegToBufferPKciPcRii(void) {
    ALOGD("_Z15DumpRegToBufferPKciPcRii() called");
    return 0;
}

/* Demangled: CDRECoreFW::vLowLvlProtCurve(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW16vLowLvlProtCurveEPt(void) {
    ALOGD("_ZN10CDRECoreFW16vLowLvlProtCurveEPt() called");
    return 0;
}

/* Demangled: CDREVPTopFW::setWhoSelector(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14setWhoSelectorEb(void) {
    ALOGD("_ZN11CDREVPTopFW14setWhoSelectorEb() called");
    return 0;
}

/* Demangled: CPQDCFW::setShareMemory(DCsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW14setShareMemoryEP11DCsharedata(void) {
    ALOGD("_ZN7CPQDCFW14setShareMemoryEP11DCsharedata() called");
    return 0;
}

/* Demangled: BluLightDefender::onCalculate(ColorRegisters const&, ColorRegisters*) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender11onCalculateERK14ColorRegistersPS0_(void) {
    ALOGD("_ZN16BluLightDefender11onCalculateERK14ColorRegistersPS0_() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::AssignChameleonDisplayRegSensorCalibrationFactor(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess48AssignChameleonDisplayRegSensorCalibrationFactorEPi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess48AssignChameleonDisplayRegSensorCalibrationFactorEPi() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::AssignPQTransitionRegDarkToBrightTransitionSettings(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess51AssignPQTransitionRegDarkToBrightTransitionSettingsEPi(void) {
    ALOGD("_ZN20TPQTransitionProcess51AssignPQTransitionRegDarkToBrightTransitionSettingsEPi() called");
    return 0;
}

/* Demangled: CDRETopFW::DRECurveCalculation(DRETopInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW19DRECurveCalculationERK11DRETopInput(void) {
    ALOGD("_ZN9CDRETopFW19DRECurveCalculationERK11DRETopInput() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::LocalHistEqualized(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW18LocalHistEqualizedEPKtPt(void) {
    ALOGD("_ZN12CDREVPCoreFW18LocalHistEqualizedEPKtPt() called");
    return 0;
}

/* Demangled: CPQDCFW::SceneSettings(unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW13SceneSettingsEPjS0_S0_S0_S0_S0_S0_S0_(void) {
    ALOGD("_ZN7CPQDCFW13SceneSettingsEPjS0_S0_S0_S0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: CPQDCFW::vContourStepProc(unsigned int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW16vContourStepProcEjPt(void) {
    ALOGD("_ZN7CPQDCFW16vContourStepProcEjPt() called");
    return 0;
}

/* Demangled: CPQDCFW::vSpikeLumaWeight(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW16vSpikeLumaWeightEPKt(void) {
    ALOGD("_ZN7CPQDCFW16vSpikeLumaWeightEPKt() called");
    return 0;
}

/* Demangled: Mode1Interpolation(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18Mode1Interpolationiiii(void) {
    ALOGD("_Z18Mode1Interpolationiiii() called");
    return 0;
}

/* Demangled: CDRETopFW::DREFinalGainCal(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW15DREFinalGainCalERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW15DREFinalGainCalERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::~TAdaptiveCALTM() */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTMD2Ev(void) {
    ALOGD("_ZN14TAdaptiveCALTMD2Ev() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::CheckIfSensorValueValid() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess23CheckIfSensorValueValidEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess23CheckIfSensorValueValidEv() called");
    return 0;
}

/* Demangled: CPQHDRFW::onInitCommon() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW12onInitCommonEv(void) {
    ALOGD("_ZN8CPQHDRFW12onInitCommonEv() called");
    return 0;
}

/* Demangled: CPQDSFW::DSCore(DSInput const*, DSOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW6DSCoreEPK7DSInputP8DSOutput(void) {
    ALOGD("_ZN7CPQDSFW6DSCoreEPK7DSInputP8DSOutput() called");
    return 0;
}

/* Demangled: CPQDSFW::CPQDSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFWC1Ev(void) {
    ALOGD("_ZN7CPQDSFWC1Ev() called");
    return 0;
}

/* Demangled: interpolation(double, double, int, int, double) */
extern "C" __attribute__((visibility("default"))) int _Z13interpolationddiid(void) {
    ALOGD("_Z13interpolationddiid() called");
    return 0;
}

/* Demangled: Log_Face_Output(int (*) [16], int (*) [16]) */
extern "C" __attribute__((visibility("default"))) int _Z15Log_Face_OutputPA16_iS0_(void) {
    ALOGD("_Z15Log_Face_OutputPA16_iS0_() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_auto_align(RszInput const*, RszOutput*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW14rsz_auto_alignEPK8RszInputP9RszOutputii(void) {
    ALOGD("_ZN8CPQRszFW14rsz_auto_alignEPK8RszInputP9RszOutputii() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::TAdaptiveCALTM(CDRETopFW*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTMC1EP9CDRETopFW(void) {
    ALOGD("_ZN14TAdaptiveCALTMC1EP9CDRETopFW() called");
    return 0;
}

/* Demangled: CPQDCFW::~CPQDCFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFWD2Ev(void) {
    ALOGD("_ZN7CPQDCFWD2Ev() called");
    return 0;
}

/* Exported Object: pHDR10PLUS_FWReg_SUB */
extern "C" __attribute__((visibility("default"))) void* pHDR10PLUS_FWReg_SUB = NULL;

/* Demangled: Input_Color_Struct_to_HSY(ColorRegisters const*, Color_20*) */
extern "C" __attribute__((visibility("default"))) int _Z25Input_Color_Struct_to_HSYPK14ColorRegistersP8Color_20(void) {
    ALOGD("_Z25Input_Color_Struct_to_HSYPK14ColorRegistersP8Color_20() called");
    return 0;
}

/* Demangled: AssignTColorSensorValue(TColorSensorValue&, TColorSensorValue const&) */
extern "C" __attribute__((visibility("default"))) int _Z23AssignTColorSensorValueR17TColorSensorValueRKS_(void) {
    ALOGD("_Z23AssignTColorSensorValueR17TColorSensorValueRKS_() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::~TPQTransitionProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcessD2Ev(void) {
    ALOGD("_ZN20TPQTransitionProcessD2Ev() called");
    return 0;
}

/* Demangled: HDRLicense::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicense11getInstanceEv(void) {
    ALOGD("_ZN10HDRLicense11getInstanceEv() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::~TChameleonDisplayProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcessD1Ev(void) {
    ALOGD("_ZN24TChameleonDisplayProcessD1Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::FirstRoundBypass(RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW16FirstRoundBypassEP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW16FirstRoundBypassEP9RszOutput() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vCompactLumaWeight(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW18vCompactLumaWeightEPKt(void) {
    ALOGD("_ZN12CDREVPCoreFW18vCompactLumaWeightEPKt() called");
    return 0;
}

/* Demangled: CDRECoreFW::ADLInitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW13ADLInitializeEv(void) {
    ALOGD("_ZN10CDRECoreFW13ADLInitializeEv() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setDebugFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess12setDebugFlagEi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess12setDebugFlagEi() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onCalculate(TPQTransitionInput const&, TPQTransitionOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess11onCalculateERK18TPQTransitionInputP19TPQTransitionOutput(void) {
    ALOGD("_ZN20TPQTransitionProcess11onCalculateERK18TPQTransitionInputP19TPQTransitionOutput() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onTransitionMode2(TTransitionSettings const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess17onTransitionMode2ERK19TTransitionSettings(void) {
    ALOGD("_ZN20TPQTransitionProcess17onTransitionMode2ERK19TTransitionSettings() called");
    return 0;
}

/* Demangled: ChameleonLicense::ChameleonLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicenseC1Ev(void) {
    ALOGD("_ZN16ChameleonLicenseC1Ev() called");
    return 0;
}

/* Demangled: CDRECoreFW::~CDRECoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFWD1Ev(void) {
    ALOGD("_ZN10CDRECoreFWD1Ev() called");
    return 0;
}

/* Demangled: CDREVPTopFW::onInitPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14onInitPlatformEv(void) {
    ALOGD("_ZN11CDREVPTopFW14onInitPlatformEv() called");
    return 0;
}

/* Demangled: CPQHDRFW::onHistogramMerge(unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW16onHistogramMergeEPjS0_S0_(void) {
    ALOGD("_ZN8CPQHDRFW16onHistogramMergeEPjS0_S0_() called");
    return 0;
}

/* Demangled: BluLightDefender::~BluLightDefender() */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefenderD2Ev(void) {
    ALOGD("_ZN16BluLightDefenderD2Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_offset_check(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW16rsz_offset_checkEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW16rsz_offset_checkEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::BluLightDefenderLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicenseC1Ev(void) {
    ALOGD("_ZN23BluLightDefenderLicenseC1Ev() called");
    return 0;
}

/* Exported Object: RszReg_cmparam */
extern "C" __attribute__((visibility("default"))) void* RszReg_cmparam = NULL;

/* Demangled: CDRETopFW::G_AdaptiveLuma_Block(int, int, int, int*, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_(void) {
    ALOGD("_ZN9CDRETopFW20G_AdaptiveLuma_BlockEiiiPiiiiS0_() called");
    return 0;
}

/* Demangled: CustParameters::~CustParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN14CustParametersD1Ev(void) {
    ALOGD("_ZN14CustParametersD1Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_alg_det(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW11rsz_alg_detEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW11rsz_alg_detEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: interpolation(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z13interpolationddd(void) {
    ALOGD("_Z13interpolationddd() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::HistFIR(unsigned short const*, unsigned short*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW7HistFIREPKtPtPj(void) {
    ALOGD("_ZN12CDREVPCoreFW7HistFIREPKtPtPj() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DualPipeVPBlockStatistics(DREVPTopInput&, DREVPTopInput&, DREVPTopInput&, DREVPInitParam&, DualInfoMDP const&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW25DualPipeVPBlockStatisticsER13DREVPTopInputS1_S1_R14DREVPInitParamRK11DualInfoMDPiii(void) {
    ALOGD("_ZN11CDREVPTopFW25DualPipeVPBlockStatisticsER13DREVPTopInputS1_S1_R14DREVPInitParamRK11DualInfoMDPiii() called");
    return 0;
}

/* Demangled: TXYZValueAdder(TXYZ&, int) */
extern "C" __attribute__((visibility("default"))) int _Z14TXYZValueAdderR4TXYZi(void) {
    ALOGD("_Z14TXYZValueAdderR4TXYZi() called");
    return 0;
}

/* Demangled: ChameleonLicense::getChameleonSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicense19getChameleonSupportEv(void) {
    ALOGD("_ZN16ChameleonLicense19getChameleonSupportEv() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onSensorDebounce(TColorSensorValue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess16onSensorDebounceERK17TColorSensorValue(void) {
    ALOGD("_ZN24TChameleonDisplayProcess16onSensorDebounceERK17TColorSensorValue() called");
    return 0;
}

/* Demangled: CPQDCFW::getShareMemory(DCsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW14getShareMemoryEP11DCsharedata(void) {
    ALOGD("_ZN7CPQDCFW14getShareMemoryEP11DCsharedata() called");
    return 0;
}

/* Demangled: CPQDSFW::AIPQ_selector(float const*, float (&) [5], int, int, int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW13AIPQ_selectorEPKfRA5_fiiiiiRi(void) {
    ALOGD("_ZN7CPQDSFW13AIPQ_selectorEPKfRA5_fiiiiiRi() called");
    return 0;
}

/* Demangled: Color_Temperature_to_xy(int, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _Z23Color_Temperature_to_xyiRfS_(void) {
    ALOGD("_Z23Color_Temperature_to_xyiRfS_() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess11setStrengthEi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess11setStrengthEi() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::~CDREVPCoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFWD1Ev(void) {
    ALOGD("_ZN12CDREVPCoreFWD1Ev() called");
    return 0;
}

/* Exported Object: HDRLicense::s_Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN10HDRLicense6s_LockE = NULL;

/* Demangled: CPQDSFW::AssignDSTransitionRegs(DSTransitionRegs*, DSTransitionRegs*, DSInput const*, DSOutput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW22AssignDSTransitionRegsEP16DSTransitionRegsS1_PK7DSInputPK8DSOutput(void) {
    ALOGD("_ZN7CPQDSFW22AssignDSTransitionRegsEP16DSTransitionRegsS1_PK7DSInputPK8DSOutput() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setBacklightControlEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess26setBacklightControlEnabledEb(void) {
    ALOGD("_ZN24TChameleonDisplayProcess26setBacklightControlEnabledEb() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::getTuningField(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess14getTuningFieldEiPj(void) {
    ALOGD("_ZN20TPQTransitionProcess14getTuningFieldEiPj() called");
    return 0;
}

/* Demangled: CZCalRegRef(int, int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z11CZCalRegRefiPiPj(void) {
    ALOGD("_Z11CZCalRegRefiPiPj() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvGetBlackWhiteIndex(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW22vDrvGetBlackWhiteIndexEPKt(void) {
    ALOGD("_ZN10CDRECoreFW22vDrvGetBlackWhiteIndexEPKt() called");
    return 0;
}

/* Demangled: SCLTMLicense::getSCLTMSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicense15getSCLTMSupportEv(void) {
    ALOGD("_ZN12SCLTMLicense15getSCLTMSupportEv() called");
    return 0;
}

/* Demangled: CDRECoreFW::vCompactLumaWeight(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW18vCompactLumaWeightEPKt(void) {
    ALOGD("_ZN10CDRECoreFW18vCompactLumaWeightEPKt() called");
    return 0;
}

/* Demangled: SCLTMLicense::SCLTMLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicenseC2Ev(void) {
    ALOGD("_ZN12SCLTMLicenseC2Ev() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_mul_div_compute_simplify(__Double_Type__, unsigned long long, int, unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW31double_mul_div_compute_simplifyE15__Double_Type__yiyi(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW31double_mul_div_compute_simplifyE15__Double_Type__yiyi() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvADLLumaCurveLowPass(unsigned short const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW23vDrvADLLumaCurveLowPassEPKtPj(void) {
    ALOGD("_ZN7CPQDCFW23vDrvADLLumaCurveLowPassEPKtPj() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onInitPlatform(TChameleonDisplayInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess14onInitPlatformERK26TChameleonDisplayInitParam(void) {
    ALOGD("_ZN24TChameleonDisplayProcess14onInitPlatformERK26TChameleonDisplayInitParam() called");
    return 0;
}

/* Demangled: CDREVPTopFW::BlkSPF(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW6BlkSPFERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW6BlkSPFERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREGainIdxFlt(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW13DREGainIdxFltERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW13DREGainIdxFltERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CPQDCFW::HistLmt2Full(unsigned int, unsigned int, unsigned int const*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW12HistLmt2FullEjjPKjPj(void) {
    ALOGD("_ZN7CPQDCFW12HistLmt2FullEjjPKjPj() called");
    return 0;
}

/* Demangled: GetMatrix33MultiplyMatrix31(double**, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z27GetMatrix33MultiplyMatrix31PPdS_S_(void) {
    ALOGD("_Z27GetMatrix33MultiplyMatrix31PPdS_S_() called");
    return 0;
}

/* Demangled: CDRECoreFW::vSpikeLumaWeight(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW16vSpikeLumaWeightEPKt(void) {
    ALOGD("_ZN10CDRECoreFW16vSpikeLumaWeightEPKt() called");
    return 0;
}

/* Demangled: CPQHDRFW::tone_mapping_hw_setting(DHDROUTPUT*, HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW23tone_mapping_hw_settingEP10DHDROUTPUTP19HDRFWMemberVariable(void) {
    ALOGD("_ZN8CPQHDRFW23tone_mapping_hw_settingEP10DHDROUTPUTP19HDRFWMemberVariable() called");
    return 0;
}

/* Demangled: CPQDSFW::AlphaBlend(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW10AlphaBlendEiiii(void) {
    ALOGD("_ZN7CPQDSFW10AlphaBlendEiiii() called");
    return 0;
}

/* Demangled: HSY_gain_to_HSY(Color_20*, float (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _Z15HSY_gain_to_HSYP8Color_20PA3_f(void) {
    ALOGD("_Z15HSY_gain_to_HSYP8Color_20PA3_f() called");
    return 0;
}

/* Demangled: CDREVPTopFW::onInitPart(DREVPInitParam const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW10onInitPartERK14DREVPInitParamP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW10onInitPartERK14DREVPInitParamP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CDREVPTopFW::onCalculate(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW11onCalculateERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW11onCalculateERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CheckAndFixTXYZValueRange(TXYZ&) */
extern "C" __attribute__((visibility("default"))) int _Z25CheckAndFixTXYZValueRangeR4TXYZ(void) {
    ALOGD("_Z25CheckAndFixTXYZValueRangeR4TXYZ() called");
    return 0;
}

/* Exported Object: rawWidth */
extern "C" __attribute__((visibility("default"))) void* rawWidth = NULL;

/* Demangled: CDREVPTopFW::getShareMemory(DREsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14getShareMemoryEP12DREsharedata(void) {
    ALOGD("_ZN11CDREVPTopFW14getShareMemoryEP12DREsharedata() called");
    return 0;
}

/* Demangled: CPQDCFW::vAdapSecondLumaWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW21vAdapSecondLumaWeightEj(void) {
    ALOGD("_ZN7CPQDCFW21vAdapSecondLumaWeightEj() called");
    return 0;
}

/* Demangled: CPQDSFW::DSInitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW12DSInitializeEv(void) {
    ALOGD("_ZN7CPQDSFW12DSInitializeEv() called");
    return 0;
}

/* Demangled: CPQDCHistogram::Main(DynCInput const&, DynCOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogram4MainERK9DynCInputP10DynCOutput(void) {
    ALOGD("_ZN14CPQDCHistogram4MainERK9DynCInputP10DynCOutput() called");
    return 0;
}

/* Demangled: CPQDCHistogram::~CPQDCHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogramD1Ev(void) {
    ALOGD("_ZN14CPQDCHistogramD1Ev() called");
    return 0;
}

/* Demangled: CPQDSFW::onLoadTable(DSInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW11onLoadTableEP7DSInput(void) {
    ALOGD("_ZN7CPQDSFW11onLoadTableEP7DSInput() called");
    return 0;
}

/* Demangled: CZtuningLog(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z11CZtuningLogPvi(void) {
    ALOGD("_Z11CZtuningLogPvi() called");
    return 0;
}

/* Demangled: CDRECoreFW::HistFIR(unsigned short const*, unsigned short*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW7HistFIREPKtPtPj(void) {
    ALOGD("_ZN10CDRECoreFW7HistFIREPKtPtPj() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::GetCustomParameters(TAdaptiveCALTM_ExtraInfo const&, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM19GetCustomParametersERK24TAdaptiveCALTM_ExtraInfoPKv(void) {
    ALOGD("_ZN14TAdaptiveCALTM19GetCustomParametersERK24TAdaptiveCALTM_ExtraInfoPKv() called");
    return 0;
}

/* Demangled: HDRLicense::~HDRLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicenseD2Ev(void) {
    ALOGD("_ZN10HDRLicenseD2Ev() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_mul_compute(__Double_Type__, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW18double_mul_computeE15__Double_Type__y(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW18double_mul_computeE15__Double_Type__y() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvADLBuildDefault(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW19vDrvADLBuildDefaultEPt(void) {
    ALOGD("_ZN7CPQDCFW19vDrvADLBuildDefaultEPt() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvApplyUserCurve1(unsigned short*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW19vDrvApplyUserCurve1EPth(void) {
    ALOGD("_ZN7CPQDCFW19vDrvApplyUserCurve1EPth() called");
    return 0;
}

/* Demangled: ComparedTColorReg(TColorReg&, TColorReg&) */
extern "C" __attribute__((visibility("default"))) int _Z17ComparedTColorRegR9TColorRegS0_(void) {
    ALOGD("_Z17ComparedTColorRegR9TColorRegS0_() called");
    return 0;
}

/* Demangled: CDRETopFW::onInitCommon(DREInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW12onInitCommonERK12DREInitParam(void) {
    ALOGD("_ZN9CDRETopFW12onInitCommonERK12DREInitParam() called");
    return 0;
}

/* Exported Object: out_fp_stat */
extern "C" __attribute__((visibility("default"))) void* out_fp_stat = NULL;

/* Demangled: CPQRszFW::rsz_ultraRes_disabled(RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW21rsz_ultraRes_disabledEP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW21rsz_ultraRes_disabledEP9RszOutput() called");
    return 0;
}

/* Demangled: InitialTColorSensorValue(TColorSensorValue&) */
extern "C" __attribute__((visibility("default"))) int _Z24InitialTColorSensorValueR17TColorSensorValue(void) {
    ALOGD("_Z24InitialTColorSensorValueR17TColorSensorValue() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onTransitionMode0(TTransitionSettings const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess17onTransitionMode0ERK19TTransitionSettings(void) {
    ALOGD("_ZN20TPQTransitionProcess17onTransitionMode0ERK19TTransitionSettings() called");
    return 0;
}

/* Exported Object: FDWidthmax */
extern "C" __attribute__((visibility("default"))) void* FDWidthmax = NULL;

/* Demangled: CDREVPTopFW::onLoadTable(int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW11onLoadTableEi(void) {
    ALOGD("_ZN11CDREVPTopFW11onLoadTableEi() called");
    return 0;
}

/* Demangled: SCLTMLicense::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicense11getInstanceEv(void) {
    ALOGD("_ZN12SCLTMLicense11getInstanceEv() called");
    return 0;
}

/* Exported Object: blkYnum */
extern "C" __attribute__((visibility("default"))) void* blkYnum = NULL;

/* Demangled: CDREVPTopFW::IIR(int, int, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW3IIREiiRiii(void) {
    ALOGD("_ZN11CDREVPTopFW3IIREiiRiii() called");
    return 0;
}

/* Demangled: CPQHDRFW::onInitPlatform(DHDRINPUT*, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW14onInitPlatformEP9DHDRINPUTP10DHDROUTPUT(void) {
    ALOGD("_ZN8CPQHDRFW14onInitPlatformEP9DHDRINPUTP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: CPQDSFW::HFG_FW_compute_frame(HFGInput_frame const*, HFGOutput_frame*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW20HFG_FW_compute_frameEPK14HFGInput_frameP15HFGOutput_frame(void) {
    ALOGD("_ZN7CPQDSFW20HFG_FW_compute_frameEPK14HFGInput_frameP15HFGOutput_frame() called");
    return 0;
}

/* Demangled: CPQDSFW::DSRegInit(DSReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW9DSRegInitEP5DSReg(void) {
    ALOGD("_ZN7CPQDSFW9DSRegInitEP5DSReg() called");
    return 0;
}

/* Demangled: CPQDSFW::~CPQDSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFWD2Ev(void) {
    ALOGD("_ZN7CPQDSFWD2Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::onLoadTable(RszInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW11onLoadTableEP8RszInput(void) {
    ALOGD("_ZN8CPQRszFW11onLoadTableEP8RszInput() called");
    return 0;
}

/* Demangled: CPQRszFW::print_RszHWReg() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW14print_RszHWRegEv(void) {
    ALOGD("_ZN8CPQRszFW14print_RszHWRegEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onTransition(TTransitionSettings const&, TPQTransitionOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess12onTransitionERK19TTransitionSettingsP19TPQTransitionOutput(void) {
    ALOGD("_ZN20TPQTransitionProcess12onTransitionERK19TTransitionSettingsP19TPQTransitionOutput() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvDynamicWSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW19vDrvDynamicWSOffsetEv(void) {
    ALOGD("_ZN12CDREVPCoreFW19vDrvDynamicWSOffsetEv() called");
    return 0;
}

/* Demangled: CDRECoreFW::bHistogramNormalization(unsigned int const*, unsigned short*, unsigned char, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW23bHistogramNormalizationEPKjPthttt(void) {
    ALOGD("_ZN10CDRECoreFW23bHistogramNormalizationEPKjPthttt() called");
    return 0;
}

/* Exported Object: FDWidthmin */
extern "C" __attribute__((visibility("default"))) void* FDWidthmin = NULL;

/* Exported Object: SCLTMLicense::s_Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN12SCLTMLicense6s_LockE = NULL;

/* Demangled: CDREVPTopFW::initDRERegEntry() */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW15initDRERegEntryEv(void) {
    ALOGD("_ZN11CDREVPTopFW15initDRERegEntryEv() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvDynamicADLPara() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW18vDrvDynamicADLParaEv(void) {
    ALOGD("_ZN12CDREVPCoreFW18vDrvDynamicADLParaEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREGainIdxCal(DREVPTopInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW13DREGainIdxCalERK13DREVPTopInput(void) {
    ALOGD("_ZN11CDREVPTopFW13DREGainIdxCalERK13DREVPTopInput() called");
    return 0;
}

/* Demangled: CPQHDRFW::gain_curve_hw_setting(DHDROUTPUT*, HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW21gain_curve_hw_settingEP10DHDROUTPUTP19HDRFWMemberVariable(void) {
    ALOGD("_ZN8CPQHDRFW21gain_curve_hw_settingEP10DHDROUTPUTP19HDRFWMemberVariable() called");
    return 0;
}

/* Demangled: CPQDCFW::StepFull2Lmt(unsigned int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW12StepFull2LmtEjPt(void) {
    ALOGD("_ZN7CPQDCFW12StepFull2LmtEjPt() called");
    return 0;
}

/* Demangled: CPQDCFW::bDrvADLDetectSceneChanged(unsigned short const*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW25bDrvADLDetectSceneChangedEPKtjj(void) {
    ALOGD("_ZN7CPQDCFW25bDrvADLDetectSceneChangedEPKtjj() called");
    return 0;
}

/* Demangled: CPQDSFW::DSGetScalingRatio(DSInput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW17DSGetScalingRatioEPK7DSInput(void) {
    ALOGD("_ZN7CPQDSFW17DSGetScalingRatioEPK7DSInput() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::TChameleonDisplayProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcessC2Ev(void) {
    ALOGD("_ZN24TChameleonDisplayProcessC2Ev() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::isBacklightControlEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess25isBacklightControlEnabledEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess25isBacklightControlEnabledEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::PrintTColorReg(TColorReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess14PrintTColorRegEP9TColorReg(void) {
    ALOGD("_ZN20TPQTransitionProcess14PrintTColorRegEP9TColorReg() called");
    return 0;
}

/* Demangled: CZRegInterpolation(int, int, int, void*, void*, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z18CZRegInterpolationiiiPvS_iS_(void) {
    ALOGD("_Z18CZRegInterpolationiiiPvS_iS_() called");
    return 0;
}

/* Demangled: SCurve(double, double, double*) */
extern "C" __attribute__((visibility("default"))) int _Z6SCurveddPd(void) {
    ALOGD("_Z6SCurveddPd() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setTuningField(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess14setTuningFieldEij(void) {
    ALOGD("_ZN24TChameleonDisplayProcess14setTuningFieldEij() called");
    return 0;
}

/* Demangled: ChameleonLicense::~ChameleonLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicenseD2Ev(void) {
    ALOGD("_ZN16ChameleonLicenseD2Ev() called");
    return 0;
}

/* Demangled: SCLTMLicense::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicense15destroyInstanceEv(void) {
    ALOGD("_ZN12SCLTMLicense15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CPQDCFW::LocalHistEqualized(unsigned short const*, unsigned int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW18LocalHistEqualizedEPKtjPt(void) {
    ALOGD("_ZN7CPQDCFW18LocalHistEqualizedEPKtjPt() called");
    return 0;
}

/* Demangled: CPQDSFW::InitialDSTransitionSettings(DSTransitionSettings&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW27InitialDSTransitionSettingsER20DSTransitionSettingsii(void) {
    ALOGD("_ZN7CPQDSFW27InitialDSTransitionSettingsER20DSTransitionSettingsii() called");
    return 0;
}

/* Demangled: CPQDSFW::onLoadTable(DSInput*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW11onLoadTableEP7DSInputPv(void) {
    ALOGD("_ZN7CPQDSFW11onLoadTableEP7DSInputPv() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::~BluLightDefenderLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicenseD2Ev(void) {
    ALOGD("_ZN23BluLightDefenderLicenseD2Ev() called");
    return 0;
}

/* Demangled: CDRECoreFW::CDRECoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFWC2Ev(void) {
    ALOGD("_ZN10CDRECoreFWC2Ev() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::~TAdaptiveCALTM() */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTMD1Ev(void) {
    ALOGD("_ZN14TAdaptiveCALTMD1Ev() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DRETileHWRegCal(DREVPInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW15DRETileHWRegCalERK14DREVPInitParam(void) {
    ALOGD("_ZN11CDREVPTopFW15DRETileHWRegCalERK14DREVPInitParam() called");
    return 0;
}

/* Demangled: InitialTTransitionSettings(TTransitionSettings&) */
extern "C" __attribute__((visibility("default"))) int _Z26InitialTTransitionSettingsR19TTransitionSettings(void) {
    ALOGD("_Z26InitialTTransitionSettingsR19TTransitionSettings() called");
    return 0;
}

/* Demangled: CPQHDRFW::onInitPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW14onInitPlatformEv(void) {
    ALOGD("_ZN8CPQHDRFW14onInitPlatformEv() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_div_compute_simplify(__Double_Type__, unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW27double_div_compute_simplifyE15__Double_Type__yi(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW27double_div_compute_simplifyE15__Double_Type__yi() called");
    return 0;
}

/* Exported Object: bit_table */
extern "C" __attribute__((visibility("default"))) void* bit_table = NULL;

/* Demangled: CPQDCFW::LowPassFilter(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW13LowPassFilterEPj(void) {
    ALOGD("_ZN7CPQDCFW13LowPassFilterEPj() called");
    return 0;
}

/* Demangled: CPQDCFW::bHistogramNormalization(unsigned int const*, unsigned short*, unsigned char, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW23bHistogramNormalizationEPKjPtht(void) {
    ALOGD("_ZN7CPQDCFW23bHistogramNormalizationEPKjPtht() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvADLProc_int(DRECoreInput const&, DRECoreOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW15vDrvADLProc_intERK12DRECoreInputP13DRECoreOutput(void) {
    ALOGD("_ZN10CDRECoreFW15vDrvADLProc_intERK12DRECoreInputP13DRECoreOutput() called");
    return 0;
}

/* Demangled: AdaptiveExtraInfo(TAdaptiveCALTM_ExtraInfo&) */
extern "C" __attribute__((visibility("default"))) int _Z17AdaptiveExtraInfoR24TAdaptiveCALTM_ExtraInfo(void) {
    ALOGD("_Z17AdaptiveExtraInfoR24TAdaptiveCALTM_ExtraInfo() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vAdapSecondLumaWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW21vAdapSecondLumaWeightEj(void) {
    ALOGD("_ZN12CDREVPCoreFW21vAdapSecondLumaWeightEj() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::~CPQHDR10PLUSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFWD2Ev(void) {
    ALOGD("_ZN14CPQHDR10PLUSFWD2Ev() called");
    return 0;
}

/* Demangled: Output_Color_Struct_from_HSY(ColorRegisters*, Color_20*) */
extern "C" __attribute__((visibility("default"))) int _Z28Output_Color_Struct_from_HSYP14ColorRegistersP8Color_20(void) {
    ALOGD("_Z28Output_Color_Struct_from_HSYP14ColorRegistersP8Color_20() called");
    return 0;
}

/* Demangled: InitialTXYZ(TXYZ&) */
extern "C" __attribute__((visibility("default"))) int _Z11InitialTXYZR4TXYZ(void) {
    ALOGD("_Z11InitialTXYZR4TXYZ() called");
    return 0;
}

/* Demangled: GetTColorRegCCORRSignedValue(int) */
extern "C" __attribute__((visibility("default"))) int _Z28GetTColorRegCCORRSignedValuei(void) {
    ALOGD("_Z28GetTColorRegCCORRSignedValuei() called");
    return 0;
}

/* Demangled: CPQDCFW::~CPQDCFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFWD1Ev(void) {
    ALOGD("_ZN7CPQDCFWD1Ev() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onTransition(TPQTransitionOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess12onTransitionEP19TPQTransitionOutput(void) {
    ALOGD("_ZN20TPQTransitionProcess12onTransitionEP19TPQTransitionOutput() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onTransitionMode1(TTransitionSettings const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess17onTransitionMode1ERK19TTransitionSettings(void) {
    ALOGD("_ZN20TPQTransitionProcess17onTransitionMode1ERK19TTransitionSettings() called");
    return 0;
}

/* Demangled: CPQDCFW::vContourStatistics(unsigned int, unsigned int const*, unsigned int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW18vContourStatisticsEjPKjS1_(void) {
    ALOGD("_ZN7CPQDCFW18vContourStatisticsEjPKjS1_() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::SetBrightToDarkStep(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19SetBrightToDarkStepEi(void) {
    ALOGD("_ZN20TPQTransitionProcess19SetBrightToDarkStepEi() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::~TPQTransitionProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcessD1Ev(void) {
    ALOGD("_ZN20TPQTransitionProcessD1Ev() called");
    return 0;
}

/* Exported Object: DSOutput_cmparam */
extern "C" __attribute__((visibility("default"))) void* DSOutput_cmparam = NULL;

/* Demangled: CheckInitSetting(MtkCameraFaceMetadata*, TAdaptiveCALTMReg*) */
extern "C" __attribute__((visibility("default"))) int _Z16CheckInitSettingP21MtkCameraFaceMetadataP17TAdaptiveCALTMReg(void) {
    ALOGD("_Z16CheckInitSettingP21MtkCameraFaceMetadataP17TAdaptiveCALTMReg() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::CDREVPCoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFWC2Ev(void) {
    ALOGD("_ZN12CDREVPCoreFWC2Ev() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_div_compute(__Double_Type__, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW18double_div_computeE15__Double_Type__y(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW18double_div_computeE15__Double_Type__y() called");
    return 0;
}

/* Exported Object: CustParameters::mPQCust */
extern "C" __attribute__((visibility("default"))) void* _ZN14CustParameters7mPQCustE = NULL;

/* Demangled: CPQRszFW::rsz_ultraRes(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW12rsz_ultraResEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW12rsz_ultraResEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_config_ctrlRegs(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW19rsz_config_ctrlRegsEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW19rsz_config_ctrlRegsEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::setTuningField(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess14setTuningFieldEij(void) {
    ALOGD("_ZN20TPQTransitionProcess14setTuningFieldEij() called");
    return 0;
}

/* Exported Object: BluLightDefenderLicense::s_Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN23BluLightDefenderLicense6s_LockE = NULL;

/* Demangled: TAdaptiveCALTM::onCalculateHW(DREInitParam const&, TAdaptiveCALTM_ExtraInfo const&, void const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM13onCalculateHWERK12DREInitParamRK24TAdaptiveCALTM_ExtraInfoPKvj(void) {
    ALOGD("_ZN14TAdaptiveCALTM13onCalculateHWERK12DREInitParamRK24TAdaptiveCALTM_ExtraInfoPKvj() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::DrvHDR10Plus_onInitCommon(__Dynamic_MetaData__*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW25DrvHDR10Plus_onInitCommonEP20__Dynamic_MetaData__(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW25DrvHDR10Plus_onInitCommonEP20__Dynamic_MetaData__() called");
    return 0;
}

/* Demangled: CPQDCFW::vSpikeLumaCurve(unsigned short const*, unsigned short*, unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW15vSpikeLumaCurveEPKtPtS1_(void) {
    ALOGD("_ZN7CPQDCFW15vSpikeLumaCurveEPKtPtS1_() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::getColorShareMemory(TColorShareData*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19getColorShareMemoryEP15TColorShareData(void) {
    ALOGD("_ZN20TPQTransitionProcess19getColorShareMemoryEP15TColorShareData() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREFrameHWRegCal(DREVPInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW16DREFrameHWRegCalERK14DREVPInitParam(void) {
    ALOGD("_ZN11CDREVPTopFW16DREFrameHWRegCalERK14DREVPInitParam() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::initDynamicMetadata(__Dynamic_MetaData__*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW19initDynamicMetadataEP20__Dynamic_MetaData__(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW19initDynamicMetadataEP20__Dynamic_MetaData__() called");
    return 0;
}

/* Demangled: CPQDCFW::onCalculate(ADLInput const&, ADLOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW11onCalculateERK8ADLInputP9ADLOutput(void) {
    ALOGD("_ZN7CPQDCFW11onCalculateERK8ADLInputP9ADLOutput() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::ImportFDInfoFromEXIF(TAdaptiveCALTM_ExtraInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM20ImportFDInfoFromEXIFEP24TAdaptiveCALTM_ExtraInfo(void) {
    ALOGD("_ZN14TAdaptiveCALTM20ImportFDInfoFromEXIFEP24TAdaptiveCALTM_ExtraInfo() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::TAdaptiveCALTM(CDRETopFW*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTMC2EP9CDRETopFW(void) {
    ALOGD("_ZN14TAdaptiveCALTMC2EP9CDRETopFW() called");
    return 0;
}

/* Demangled: clipVal(unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z7clipValjjPh(void) {
    ALOGD("_Z7clipValjjPh() called");
    return 0;
}

/* Demangled: BluLightDefender::~BluLightDefender() */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefenderD1Ev(void) {
    ALOGD("_ZN16BluLightDefenderD1Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::onInitPlatform(RszInitParam const&, RszInitReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW14onInitPlatformERK12RszInitParamP10RszInitReg(void) {
    ALOGD("_ZN8CPQRszFW14onInitPlatformERK12RszInitParamP10RszInitReg() called");
    return 0;
}

/* Demangled: HDRLicense::getHDRSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicense13getHDRSupportEv(void) {
    ALOGD("_ZN10HDRLicense13getHDRSupportEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DynCAdaptCoef(int const*, int const*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW13DynCAdaptCoefEPKiS1_Pii(void) {
    ALOGD("_ZN11CDREVPTopFW13DynCAdaptCoefEPKiS1_Pii() called");
    return 0;
}

/* Demangled: CPQRszFW::initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW10initializeEv(void) {
    ALOGD("_ZN8CPQRszFW10initializeEv() called");
    return 0;
}

/* Demangled: CPQRszFW::TuningReg2HWReg(RszInput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW15TuningReg2HWRegEP8RszInput(void) {
    ALOGD("_ZN8CPQRszFW15TuningReg2HWRegEP8RszInput() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::AdaptiveSWRegister(TAdaptiveCALTM_ExtraInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM18AdaptiveSWRegisterERK24TAdaptiveCALTM_ExtraInfo(void) {
    ALOGD("_ZN14TAdaptiveCALTM18AdaptiveSWRegisterERK24TAdaptiveCALTM_ExtraInfo() called");
    return 0;
}

/* Demangled: CDREVPTopFW::calIIRForceRange() */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW16calIIRForceRangeEv(void) {
    ALOGD("_ZN11CDREVPTopFW16calIIRForceRangeEv() called");
    return 0;
}

/* Demangled: clipVal(unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z7clipValjjPj(void) {
    ALOGD("_Z7clipValjjPj() called");
    return 0;
}

/* Demangled: InitialTColorSensorSettings(TColorSensorSettings&) */
extern "C" __attribute__((visibility("default"))) int _Z27InitialTColorSensorSettingsR20TColorSensorSettings(void) {
    ALOGD("_Z27InitialTColorSensorSettingsR20TColorSensorSettings() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::u1DrvGetLumaHistWeight(unsigned int const*, unsigned short*, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW22u1DrvGetLumaHistWeightEPKjPtttt(void) {
    ALOGD("_ZN12CDREVPCoreFW22u1DrvGetLumaHistWeightEPKjPtttt() called");
    return 0;
}

/* Demangled: CPQDCFW::vContourLumaCurve(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW17vContourLumaCurveEPKtPt(void) {
    ALOGD("_ZN7CPQDCFW17vContourLumaCurveEPKtPt() called");
    return 0;
}

/* Demangled: CPQDSFW::TransitionRegsToOutput(DSOutput*, DSTransitionRegs&) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW22TransitionRegsToOutputEP8DSOutputR16DSTransitionRegs(void) {
    ALOGD("_ZN7CPQDSFW22TransitionRegsToOutputEP8DSOutputR16DSTransitionRegs() called");
    return 0;
}

/* Demangled: CPQDSFW::min2(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW4min2Eii(void) {
    ALOGD("_ZN7CPQDSFW4min2Eii() called");
    return 0;
}

/* Demangled: CPQDCHistogram::CPQDCHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogramC2Ev(void) {
    ALOGD("_ZN14CPQDCHistogramC2Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::print_RszSWReg() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW14print_RszSWRegEv(void) {
    ALOGD("_ZN8CPQRszFW14print_RszSWRegEv() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::AssignChameleonDisplayRegPanel(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess30AssignChameleonDisplayRegPanelEPi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess30AssignChameleonDisplayRegPanelEPi() called");
    return 0;
}

/* Demangled: InitTAdaptiveCALTMReg(TAdaptiveCALTMReg&) */
extern "C" __attribute__((visibility("default"))) int _Z21InitTAdaptiveCALTMRegR17TAdaptiveCALTMReg(void) {
    ALOGD("_Z21InitTAdaptiveCALTMRegR17TAdaptiveCALTMReg() called");
    return 0;
}

/* Demangled: CDREVPTopFW::AIPQ_selector(float const*, float (&) [5], int, int, int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW13AIPQ_selectorEPKfRA5_fiiiiiRi(void) {
    ALOGD("_ZN11CDREVPTopFW13AIPQ_selectorEPKfRA5_fiiiiiRi() called");
    return 0;
}

/* Demangled: CPQHDRFW::tone_mapping_fw(DHDRINPUT*, HDRFWMemberVariable*, HDRFWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW15tone_mapping_fwEP9DHDRINPUTP19HDRFWMemberVariableP8HDRFWReg(void) {
    ALOGD("_ZN8CPQHDRFW15tone_mapping_fwEP9DHDRINPUTP19HDRFWMemberVariableP8HDRFWReg() called");
    return 0;
}

/* Demangled: BellCurve(double, double, double*) */
extern "C" __attribute__((visibility("default"))) int _Z9BellCurveddPd(void) {
    ALOGD("_Z9BellCurveddPd() called");
    return 0;
}

/* Demangled: ChameleonLicense::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicense15destroyInstanceEv(void) {
    ALOGD("_ZN16ChameleonLicense15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: GainCurve_pool_hlg */
extern "C" __attribute__((visibility("default"))) void* GainCurve_pool_hlg = NULL;

/* Demangled: CustParameters::CustParameters(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CustParametersC1EPKcS1_(void) {
    ALOGD("_ZN14CustParametersC1EPKcS1_() called");
    return 0;
}

/* Demangled: CZTuning(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, void*, ClzTuningReg*) */
extern "C" __attribute__((visibility("default"))) int _Z8CZTuningjjjjjPvP12ClzTuningReg(void) {
    ALOGD("_Z8CZTuningjjjjjPvP12ClzTuningReg() called");
    return 0;
}

/* Demangled: CPQDSFW::HFG_FW_compute_tile(HFGInput_tile const*, HFGOutput_tile*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW19HFG_FW_compute_tileEPK13HFGInput_tileP14HFGOutput_tile(void) {
    ALOGD("_ZN7CPQDSFW19HFG_FW_compute_tileEPK13HFGInput_tileP14HFGOutput_tile() called");
    return 0;
}

/* Demangled: SCLTMLicense::SCLTMLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicenseC1Ev(void) {
    ALOGD("_ZN12SCLTMLicenseC1Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_config_demoWindow(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW21rsz_config_demoWindowEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW21rsz_config_demoWindowEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: CDRECoreFW::RGBMaxCurveMap(unsigned int, unsigned int&, unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW14RGBMaxCurveMapEjRjPKt(void) {
    ALOGD("_ZN10CDRECoreFW14RGBMaxCurveMapEjRjPKt() called");
    return 0;
}

/* Demangled: InitialTPQTransitionReg(TPQTransitionReg&) */
extern "C" __attribute__((visibility("default"))) int _Z23InitialTPQTransitionRegR16TPQTransitionReg(void) {
    ALOGD("_Z23InitialTPQTransitionRegR16TPQTransitionReg() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::GetBrightToDarkStep() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19GetBrightToDarkStepEv(void) {
    ALOGD("_ZN20TPQTransitionProcess19GetBrightToDarkStepEv() called");
    return 0;
}

/* Demangled: CDRECoreFW::vCompactLumaCurve(unsigned short const*, unsigned short*, unsigned short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW17vCompactLumaCurveEPKtPtS1_j(void) {
    ALOGD("_ZN10CDRECoreFW17vCompactLumaCurveEPKtPtS1_j() called");
    return 0;
}

/* Exported Object: TAdaptiveCALTMReg_cmparam */
extern "C" __attribute__((visibility("default"))) void* TAdaptiveCALTMReg_cmparam = NULL;

/* Demangled: CPQDSFW::IsoAdpAlphaBlending(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW19IsoAdpAlphaBlendingEiiii(void) {
    ALOGD("_ZN7CPQDSFW19IsoAdpAlphaBlendingEiiii() called");
    return 0;
}

/* Demangled: PanelValueUpdate(BluLightReg*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16PanelValueUpdateP11BluLightRegi(void) {
    ALOGD("_Z16PanelValueUpdateP11BluLightRegi() called");
    return 0;
}

/* Demangled: ChameleonLicense::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicense11getInstanceEv(void) {
    ALOGD("_ZN16ChameleonLicense11getInstanceEv() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onSensorSWAccumulate(TColorSensorValue const&) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess20onSensorSWAccumulateERK17TColorSensorValue(void) {
    ALOGD("_ZN24TChameleonDisplayProcess20onSensorSWAccumulateERK17TColorSensorValue() called");
    return 0;
}

/* Exported Object: DRETopInput_Dump_cmparam */
extern "C" __attribute__((visibility("default"))) void* DRETopInput_Dump_cmparam = NULL;

/* Exported Object: TAdaptiveCALTMFace_Exif_cmparam */
extern "C" __attribute__((visibility("default"))) void* TAdaptiveCALTMFace_Exif_cmparam = NULL;

/* Demangled: GetReverseMatrix(double**, double**, int) */
extern "C" __attribute__((visibility("default"))) int _Z16GetReverseMatrixPPdS0_i(void) {
    ALOGD("_Z16GetReverseMatrixPPdS0_i() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onInitCommon(TPQTransitionInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess12onInitCommonERK22TPQTransitionInitParam(void) {
    ALOGD("_ZN20TPQTransitionProcess12onInitCommonERK22TPQTransitionInitParam() called");
    return 0;
}

/* Demangled: CDRETopFW::calBlkSpaFltParam() */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW17calBlkSpaFltParamEv(void) {
    ALOGD("_ZN9CDRETopFW17calBlkSpaFltParamEv() called");
    return 0;
}

/* Demangled: CPQHDRFW::~CPQHDRFW() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFWD2Ev(void) {
    ALOGD("_ZN8CPQHDRFWD2Ev() called");
    return 0;
}

/* Demangled: CPQDCFW::vControlHWSettings(ADLOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW18vControlHWSettingsEP9ADLOutput(void) {
    ALOGD("_ZN7CPQDCFW18vControlHWSettingsEP9ADLOutput() called");
    return 0;
}

/* Demangled: CPQDSFW::IsoAdpGetReg(int, int, int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW12IsoAdpGetRegEiiiiiiiiiii(void) {
    ALOGD("_ZN7CPQDSFW12IsoAdpGetRegEiiiiiiiiiii() called");
    return 0;
}

/* Demangled: CPQDSFW::onTransition() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW12onTransitionEv(void) {
    ALOGD("_ZN7CPQDSFW12onTransitionEv() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicense11getInstanceEv(void) {
    ALOGD("_ZN23BluLightDefenderLicense11getInstanceEv() called");
    return 0;
}

/* Exported Object: out_fp_stat_scene */
extern "C" __attribute__((visibility("default"))) void* out_fp_stat_scene = NULL;

/* Demangled: clipVal(unsigned int, unsigned int, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z7clipValjjPt(void) {
    ALOGD("_Z7clipValjjPt() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vAPLCompCurve(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW13vAPLCompCurveEPKtPt(void) {
    ALOGD("_ZN12CDREVPCoreFW13vAPLCompCurveEPKtPt() called");
    return 0;
}

/* Exported Object: HDR10pInternalReg_Dump_cmparam */
extern "C" __attribute__((visibility("default"))) void* HDR10pInternalReg_Dump_cmparam = NULL;

/* Demangled: TPQTransitionProcess::CheckIfFinished() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess15CheckIfFinishedEv(void) {
    ALOGD("_ZN20TPQTransitionProcess15CheckIfFinishedEv() called");
    return 0;
}

/* Demangled: HDRLicense::~HDRLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicenseD1Ev(void) {
    ALOGD("_ZN10HDRLicenseD1Ev() called");
    return 0;
}

/* Demangled: CPQDSFW::ComparedDSTransitionRegs(DSTransitionRegs*, DSTransitionRegs*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW24ComparedDSTransitionRegsEP16DSTransitionRegsS1_(void) {
    ALOGD("_ZN7CPQDSFW24ComparedDSTransitionRegsEP16DSTransitionRegsS1_() called");
    return 0;
}

/* Demangled: xy_to_Color_Temperature(float, float, int&) */
extern "C" __attribute__((visibility("default"))) int _Z23xy_to_Color_TemperatureffRi(void) {
    ALOGD("_Z23xy_to_Color_TemperatureffRi() called");
    return 0;
}

/* Demangled: CPQHDRFW::setting_by_SWreg(DHDRINPUT*, DHDROUTPUT*, HDRFWMemberVariable*, HDRFWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW16setting_by_SWregEP9DHDRINPUTP10DHDROUTPUTP19HDRFWMemberVariableP8HDRFWReg(void) {
    ALOGD("_ZN8CPQHDRFW16setting_by_SWregEP9DHDRINPUTP10DHDROUTPUTP19HDRFWMemberVariableP8HDRFWReg() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::set_tone_mapping(DHDRINPUT*, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW16set_tone_mappingEP9DHDRINPUTP10DHDROUTPUT(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW16set_tone_mappingEP9DHDRINPUTP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vSpikeLumaWeight(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW16vSpikeLumaWeightEPKt(void) {
    ALOGD("_ZN12CDREVPCoreFW16vSpikeLumaWeightEPKt() called");
    return 0;
}

/* Demangled: CPQHDRFW::tone_mapping_sw_InitSetting(DHDRINPUT*, DHDROUTPUT*, HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW27tone_mapping_sw_InitSettingEP9DHDRINPUTP10DHDROUTPUTP19HDRFWMemberVariable(void) {
    ALOGD("_ZN8CPQHDRFW27tone_mapping_sw_InitSettingEP9DHDRINPUTP10DHDROUTPUTP19HDRFWMemberVariable() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::tone_mapping_curve_adjust(DHDRINPUT*, __Dynamic_MetaData__*, HDR10PLUS_FWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW25tone_mapping_curve_adjustEP9DHDRINPUTP20__Dynamic_MetaData__P15HDR10PLUS_FWReg(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW25tone_mapping_curve_adjustEP9DHDRINPUTP20__Dynamic_MetaData__P15HDR10PLUS_FWReg() called");
    return 0;
}

/* Demangled: Mode2Interpolation(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18Mode2Interpolationiiii(void) {
    ALOGD("_Z18Mode2Interpolationiiii() called");
    return 0;
}

/* Demangled: CPQDCFW::refreshOutput(ADLOutput*, DCsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW13refreshOutputEP9ADLOutputP11DCsharedata(void) {
    ALOGD("_ZN7CPQDCFW13refreshOutputEP9ADLOutputP11DCsharedata() called");
    return 0;
}

/* Demangled: BluLightDefender::setTuningField(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender14setTuningFieldEij(void) {
    ALOGD("_ZN16BluLightDefender14setTuningFieldEij() called");
    return 0;
}

/* Demangled: CPQDCFW::getDCPreTempData(DCPreTempData*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW16getDCPreTempDataEP13DCPreTempData(void) {
    ALOGD("_ZN7CPQDCFW16getDCPreTempDataEP13DCPreTempData() called");
    return 0;
}

/* Demangled: CPQDSFW::DSHWRegInit(DSHWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW11DSHWRegInitEP7DSHWReg(void) {
    ALOGD("_ZN7CPQDSFW11DSHWRegInitEP7DSHWReg() called");
    return 0;
}

/* Demangled: CPQDSFW::~CPQDSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFWD1Ev(void) {
    ALOGD("_ZN7CPQDSFWD1Ev() called");
    return 0;
}

/* Demangled: BluLightDefender::setStrength(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender11setStrengthEi(void) {
    ALOGD("_ZN16BluLightDefender11setStrengthEi() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvADLBuildDefault(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW19vDrvADLBuildDefaultEPt(void) {
    ALOGD("_ZN10CDRECoreFW19vDrvADLBuildDefaultEPt() called");
    return 0;
}

/* Demangled: CDRECoreFW::vBuildSecondLumaCurve(unsigned short const*, unsigned short*, unsigned int, unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW21vBuildSecondLumaCurveEPKtPtjRt(void) {
    ALOGD("_ZN10CDRECoreFW21vBuildSecondLumaCurveEPKtPtjRt() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_add_compute(__Double_Type__, __Double_Type__) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW18double_add_computeE15__Double_Type__S0_(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW18double_add_computeE15__Double_Type__S0_() called");
    return 0;
}

/* Demangled: Color_Tuning::Do_Tuning() */
extern "C" __attribute__((visibility("default"))) int _ZN12Color_Tuning9Do_TuningEv(void) {
    ALOGD("_ZN12Color_Tuning9Do_TuningEv() called");
    return 0;
}

/* Exported Object: ChameleonLicense::s_Lock */
extern "C" __attribute__((visibility("default"))) void* _ZN16ChameleonLicense6s_LockE = NULL;

/* Demangled: CDRETopFW::DREGainIdxCal(DRETopInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW13DREGainIdxCalERK11DRETopInput(void) {
    ALOGD("_ZN9CDRETopFW13DREGainIdxCalERK11DRETopInput() called");
    return 0;
}

/* Demangled: CDRETopFW::DREFrameHWRegCal(DREInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW16DREFrameHWRegCalERK12DREInitParam(void) {
    ALOGD("_ZN9CDRETopFW16DREFrameHWRegCalERK12DREInitParam() called");
    return 0;
}

/* Demangled: CDREVPTopFW::calBlkSpaFltParam() */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW17calBlkSpaFltParamEv(void) {
    ALOGD("_ZN11CDREVPTopFW17calBlkSpaFltParamEv() called");
    return 0;
}

/* Demangled: CPQDCFW::initDCShareMemory() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW17initDCShareMemoryEv(void) {
    ALOGD("_ZN7CPQDCFW17initDCShareMemoryEv() called");
    return 0;
}

/* Demangled: ResetTColorSensorValue(TColorSensorValue&) */
extern "C" __attribute__((visibility("default"))) int _Z22ResetTColorSensorValueR17TColorSensorValue(void) {
    ALOGD("_Z22ResetTColorSensorValueR17TColorSensorValue() called");
    return 0;
}

/* Exported Object: DRETopOutput_Dump_cmparam */
extern "C" __attribute__((visibility("default"))) void* DRETopOutput_Dump_cmparam = NULL;

/* Demangled: TAdaptiveCALTM::onCalculateFaceConf(DRETopInput&, TAdaptiveCALTM_ExtraInfo const&) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM19onCalculateFaceConfER11DRETopInputRK24TAdaptiveCALTM_ExtraInfo(void) {
    ALOGD("_ZN14TAdaptiveCALTM19onCalculateFaceConfER11DRETopInputRK24TAdaptiveCALTM_ExtraInfo() called");
    return 0;
}

/* Demangled: CPQDCFW::CPQDCFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFWC2Ev(void) {
    ALOGD("_ZN7CPQDCFWC2Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_auto_coefTrunc(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW18rsz_auto_coefTruncEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW18rsz_auto_coefTruncEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: CPQHDRFW::gain_curve_gen_fw(DHDRINPUT*, HDRFWMemberVariable*, HDRFWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW17gain_curve_gen_fwEP9DHDRINPUTP19HDRFWMemberVariableP8HDRFWReg(void) {
    ALOGD("_ZN8CPQHDRFW17gain_curve_gen_fwEP9DHDRINPUTP19HDRFWMemberVariableP8HDRFWReg() called");
    return 0;
}

/* Demangled: CPQHDRFW::tone_mapping_fw_refine(HDRFWMemberVariable*, HDRFWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW22tone_mapping_fw_refineEP19HDRFWMemberVariableP8HDRFWReg(void) {
    ALOGD("_ZN8CPQHDRFW22tone_mapping_fw_refineEP19HDRFWMemberVariableP8HDRFWReg() called");
    return 0;
}

/* Demangled: CustParameters::CustParameters(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CustParametersC2EPKcS1_(void) {
    ALOGD("_ZN14CustParametersC2EPKcS1_() called");
    return 0;
}

/* Demangled: CPQDSFW::UltraResolution(DSInput const*, DSOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW15UltraResolutionEPK7DSInputP8DSOutput(void) {
    ALOGD("_ZN7CPQDSFW15UltraResolutionEPK7DSInputP8DSOutput() called");
    return 0;
}

/* Demangled: GetInterpolationWeight(double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z22GetInterpolationWeightddd(void) {
    ALOGD("_Z22GetInterpolationWeightddd() called");
    return 0;
}

/* Demangled: AssignTColorReg(TColorReg*, TColorReg const*) */
extern "C" __attribute__((visibility("default"))) int _Z15AssignTColorRegP9TColorRegPKS_(void) {
    ALOGD("_Z15AssignTColorRegP9TColorRegPKS_() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::TPQTransitionProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcessC2Ev(void) {
    ALOGD("_ZN20TPQTransitionProcessC2Ev() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::setHDR10plusFWFWMemberVariable(HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW30setHDR10plusFWFWMemberVariableEP19HDRFWMemberVariable(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW30setHDR10plusFWFWMemberVariableEP19HDRFWMemberVariable() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::TChameleonDisplayProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcessC1Ev(void) {
    ALOGD("_ZN24TChameleonDisplayProcessC1Ev() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::initColorShareMemory(TColorShareData*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess20initColorShareMemoryEP15TColorShareData(void) {
    ALOGD("_ZN20TPQTransitionProcess20initColorShareMemoryEP15TColorShareData() called");
    return 0;
}

/* Demangled: SetRszSWReg(void*, RszReg*, RszRegClearZoom*) */
extern "C" __attribute__((visibility("default"))) int _Z11SetRszSWRegPvP6RszRegP15RszRegClearZoom(void) {
    ALOGD("_Z11SetRszSWRegPvP6RszRegP15RszRegClearZoom() called");
    return 0;
}

/* Demangled: CPQRszFW::DumpReg(void*, char*, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW7DumpRegEPvPcRiii(void) {
    ALOGD("_ZN8CPQRszFW7DumpRegEPvPcRiii() called");
    return 0;
}

/* Demangled: CDREVPTopFW::IspPreviewZoom(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14IspPreviewZoomERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW14IspPreviewZoomERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvApplyUserCurve2(unsigned short*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW19vDrvApplyUserCurve2EPth(void) {
    ALOGD("_ZN7CPQDCFW19vDrvApplyUserCurve2EPth() called");
    return 0;
}

/* Demangled: CPQDSFW::IfDiffDSTransitionRegs(DSTransitionRegs const*, DSTransitionRegs const*, DSInput const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW22IfDiffDSTransitionRegsEPK16DSTransitionRegsS2_PK7DSInput(void) {
    ALOGD("_ZN7CPQDSFW22IfDiffDSTransitionRegsEPK16DSTransitionRegsS2_PK7DSInput() called");
    return 0;
}

/* Demangled: CDRETopFW::DynCAdaptCoef(int const*, int const*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW13DynCAdaptCoefEPKiS1_Pii(void) {
    ALOGD("_ZN9CDRETopFW13DynCAdaptCoefEPKiS1_Pii() called");
    return 0;
}

/* Demangled: CPQHDRFW::aiToneCurveRemap(DHDRINPUT*, HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW16aiToneCurveRemapEP9DHDRINPUTP19HDRFWMemberVariable(void) {
    ALOGD("_ZN8CPQHDRFW16aiToneCurveRemapEP9DHDRINPUTP19HDRFWMemberVariable() called");
    return 0;
}

/* Exported Object: vHDR10PLUS_FWReg_SUB */
extern "C" __attribute__((visibility("default"))) void* vHDR10PLUS_FWReg_SUB = NULL;

/* Demangled: ChameleonLicense::~ChameleonLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicenseD1Ev(void) {
    ALOGD("_ZN16ChameleonLicenseD1Ev() called");
    return 0;
}

/* Exported Object: TAdaptiveCALTMFace_Dump_cmparam */
extern "C" __attribute__((visibility("default"))) void* TAdaptiveCALTMFace_Dump_cmparam = NULL;

/* Demangled: CPQHDR10PLUSFW::initReg() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW7initRegEv(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW7initRegEv() called");
    return 0;
}

/* Demangled: CPQDCFW::vDrvDynamicBSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW19vDrvDynamicBSOffsetEv(void) {
    ALOGD("_ZN7CPQDCFW19vDrvDynamicBSOffsetEv() called");
    return 0;
}

/* Demangled: CPQDCHistogram::Initialize() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogram10InitializeEv(void) {
    ALOGD("_ZN14CPQDCHistogram10InitializeEv() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::~BluLightDefenderLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicenseD1Ev(void) {
    ALOGD("_ZN23BluLightDefenderLicenseD1Ev() called");
    return 0;
}

/* Demangled: CDRECoreFW::CDRECoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFWC1Ev(void) {
    ALOGD("_ZN10CDRECoreFWC1Ev() called");
    return 0;
}

/* Demangled: CDREVPTopFW::L_AdaptiveLuma_Block(int, int, int, int*, int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW20L_AdaptiveLuma_BlockEiiiPiiiS0_i(void) {
    ALOGD("_ZN11CDREVPTopFW20L_AdaptiveLuma_BlockEiiiPiiiS0_i() called");
    return 0;
}

/* Demangled: CPQDCFW::SceneHistProc(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW13SceneHistProcEPKtPt(void) {
    ALOGD("_ZN7CPQDCFW13SceneHistProcEPKtPt() called");
    return 0;
}

/* Demangled: CPQDSFW::DSSyncCorGain(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW13DSSyncCorGainEiii(void) {
    ALOGD("_ZN7CPQDSFW13DSSyncCorGainEiii() called");
    return 0;
}

/* Demangled: BluLightDefender::BluLightDefender() */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefenderC2Ev(void) {
    ALOGD("_ZN16BluLightDefenderC2Ev() called");
    return 0;
}

/* Demangled: InitialTCcorrConfig(TCcorrConfig&) */
extern "C" __attribute__((visibility("default"))) int _Z19InitialTCcorrConfigR12TCcorrConfig(void) {
    ALOGD("_Z19InitialTCcorrConfigR12TCcorrConfig() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::AssignChameleonDisplayRegSensorFactoryFactor(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess44AssignChameleonDisplayRegSensorFactoryFactorEPi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess44AssignChameleonDisplayRegSensorFactoryFactorEPi() called");
    return 0;
}

/* Exported Object: BluLightDefenderLicense::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN23BluLightDefenderLicense11s_pInstanceE = NULL;

/* Demangled: BluLightDefender::onInitPlatform(BluLightInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender14onInitPlatformERK17BluLightInitParam(void) {
    ALOGD("_ZN16BluLightDefender14onInitPlatformERK17BluLightInitParam() called");
    return 0;
}

/* Demangled: CDRECoreFW::vDrvDynamicBSOffset() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW19vDrvDynamicBSOffsetEv(void) {
    ALOGD("_ZN10CDRECoreFW19vDrvDynamicBSOffsetEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DRECurveCalculation(DREVPTopInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW19DRECurveCalculationERK13DREVPTopInput(void) {
    ALOGD("_ZN11CDREVPTopFW19DRECurveCalculationERK13DREVPTopInput() called");
    return 0;
}

/* Exported Object: HDRLicense::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN10HDRLicense11s_pInstanceE = NULL;

/* Demangled: CPQHDR10PLUSFW::~CPQHDR10PLUSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFWD1Ev(void) {
    ALOGD("_ZN14CPQHDR10PLUSFWD1Ev() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::CheckIfAmbientChangedInSingleChannel(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess36CheckIfAmbientChangedInSingleChannelEii(void) {
    ALOGD("_ZN24TChameleonDisplayProcess36CheckIfAmbientChangedInSingleChannelEii() called");
    return 0;
}

/* Demangled: CPQDSFW::ISOAdaptive(DSInput const*, DSOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW11ISOAdaptiveEPK7DSInputP8DSOutput(void) {
    ALOGD("_ZN7CPQDSFW11ISOAdaptiveEPK7DSInputP8DSOutput() called");
    return 0;
}

/* Demangled: TargetWhiteUpdate(BluLightReg*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17TargetWhiteUpdateP11BluLightRegi(void) {
    ALOGD("_Z17TargetWhiteUpdateP11BluLightRegi() called");
    return 0;
}

/* Demangled: GetTColorRegCCORRUnsignedValue(int) */
extern "C" __attribute__((visibility("default"))) int _Z30GetTColorRegCCORRUnsignedValuei(void) {
    ALOGD("_Z30GetTColorRegCCORRUnsignedValuei() called");
    return 0;
}

/* Demangled: CDRECoreFW::u1DrvGetLumaHistWeight(unsigned int const*, unsigned short*, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW22u1DrvGetLumaHistWeightEPKjPtttt(void) {
    ALOGD("_ZN10CDRECoreFW22u1DrvGetLumaHistWeightEPKjPtttt() called");
    return 0;
}

/* Demangled: xy_to_CCORR(float*, float, float, float*) */
extern "C" __attribute__((visibility("default"))) int _Z11xy_to_CCORRPfffS_(void) {
    ALOGD("_Z11xy_to_CCORRPfffS_() called");
    return 0;
}

/* Demangled: IfDifferentTColorReg(TColorReg const&, TColorReg const&) */
extern "C" __attribute__((visibility("default"))) int _Z20IfDifferentTColorRegRK9TColorRegS1_(void) {
    ALOGD("_Z20IfDifferentTColorRegRK9TColorRegS1_() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicense15destroyInstanceEv(void) {
    ALOGD("_ZN23BluLightDefenderLicense15destroyInstanceEv() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::CDREVPCoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFWC1Ev(void) {
    ALOGD("_ZN12CDREVPCoreFWC1Ev() called");
    return 0;
}

/* Demangled: CDREVPTopFW::EventTriggerSetting(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW19EventTriggerSettingERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW19EventTriggerSettingERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CustParameters::getSymbol(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CustParameters9getSymbolEPKc(void) {
    ALOGD("_ZN14CustParameters9getSymbolEPKc() called");
    return 0;
}

/* Demangled: Check_Color_Valid(ColorRegisters*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z17Check_Color_ValidP14ColorRegistersj(void) {
    ALOGD("_Z17Check_Color_ValidP14ColorRegistersj() called");
    return 0;
}

/* Demangled: GetTColorRegLumaWeight(TColorReg&) */
extern "C" __attribute__((visibility("default"))) int _Z22GetTColorRegLumaWeightR9TColorReg(void) {
    ALOGD("_Z22GetTColorRegLumaWeightR9TColorReg() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::PrintTColorReg(TColorReg*, TColorReg*, TColorReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess14PrintTColorRegEP9TColorRegS1_S1_(void) {
    ALOGD("_ZN20TPQTransitionProcess14PrintTColorRegEP9TColorRegS1_S1_() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::DumpReg(char*, char*, int&, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM7DumpRegEPcS0_RiS1_ii(void) {
    ALOGD("_ZN14TAdaptiveCALTM7DumpRegEPcS0_RiS1_ii() called");
    return 0;
}

/* Demangled: CDREVPTopFW::initShareMemory(DREsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW15initShareMemoryEP12DREsharedata(void) {
    ALOGD("_ZN11CDREVPTopFW15initShareMemoryEP12DREsharedata() called");
    return 0;
}

/* Demangled: SCLTMLicense::~SCLTMLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN12SCLTMLicenseD2Ev(void) {
    ALOGD("_ZN12SCLTMLicenseD2Ev() called");
    return 0;
}

/* Demangled: Init_CCORR(float*) */
extern "C" __attribute__((visibility("default"))) int _Z10Init_CCORRPf(void) {
    ALOGD("_Z10Init_CCORRPf() called");
    return 0;
}

/* Demangled: CPQDCFW::LmtFullSettings1(unsigned int, unsigned int, unsigned int const*, unsigned int const*, ADLOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW16LmtFullSettings1EjjPKjS1_P9ADLOutput(void) {
    ALOGD("_ZN7CPQDCFW16LmtFullSettings1EjjPKjS1_P9ADLOutput() called");
    return 0;
}

/* Demangled: TColorSensorValueAdder(TColorSensorValue&, TColorSensorValue const&) */
extern "C" __attribute__((visibility("default"))) int _Z22TColorSensorValueAdderR17TColorSensorValueRKS_(void) {
    ALOGD("_Z22TColorSensorValueAdderR17TColorSensorValueRKS_() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::BasicInfoCal(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW12BasicInfoCalEjjPjS0_jjS0_(void) {
    ALOGD("_ZN12CDREVPCoreFW12BasicInfoCalEjjPjS0_jjS0_() called");
    return 0;
}

/* Demangled: CPQHDRFW::DumpRegToFile(__sFILE*, DHDRINPUT*, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW13DumpRegToFileEP7__sFILEP9DHDRINPUTP10DHDROUTPUT(void) {
    ALOGD("_ZN8CPQHDRFW13DumpRegToFileEP7__sFILEP9DHDRINPUTP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: CPQDSFW::UltraResGetReg(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW14UltraResGetRegEiiiiiiiii(void) {
    ALOGD("_ZN7CPQDSFW14UltraResGetRegEiiiiiiiii() called");
    return 0;
}

/* Demangled: CDRETopFW::calIIRForceRange() */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW16calIIRForceRangeEv(void) {
    ALOGD("_ZN9CDRETopFW16calIIRForceRangeEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::onInitCommon(DREVPInitParam const&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW12onInitCommonERK14DREVPInitParamii(void) {
    ALOGD("_ZN11CDREVPTopFW12onInitCommonERK14DREVPInitParamii() called");
    return 0;
}

/* Demangled: CPQHDRFW::onCalculate(DHDRINPUT*, DHDROUTPUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW11onCalculateEP9DHDRINPUTP10DHDROUTPUT(void) {
    ALOGD("_ZN8CPQHDRFW11onCalculateEP9DHDRINPUTP10DHDROUTPUT() called");
    return 0;
}

/* Demangled: CPQDSFW::GetTransitionRegWeight(DSTransitionRegs*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW22GetTransitionRegWeightEP16DSTransitionRegs(void) {
    ALOGD("_ZN7CPQDSFW22GetTransitionRegWeightEP16DSTransitionRegs() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::getStrength() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess11getStrengthEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess11getStrengthEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::SetDarkToBrightStep(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19SetDarkToBrightStepEi(void) {
    ALOGD("_ZN20TPQTransitionProcess19SetDarkToBrightStepEi() called");
    return 0;
}

/* Demangled: CDRETopFW::IIR(int, int, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW3IIREiiRiii(void) {
    ALOGD("_ZN9CDRETopFW3IIREiiRiii() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvADLProc_int(DREVPCoreInput const&, DREVPCoreOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW15vDrvADLProc_intERK14DREVPCoreInputP15DREVPCoreOutput(void) {
    ALOGD("_ZN12CDREVPCoreFW15vDrvADLProc_intERK14DREVPCoreInputP15DREVPCoreOutput() called");
    return 0;
}

/* Demangled: CPQDCFW::vLoadFWSettings(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW15vLoadFWSettingsEj(void) {
    ALOGD("_ZN7CPQDCFW15vLoadFWSettingsEj() called");
    return 0;
}

/* Demangled: Init_Default_HSY(float (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _Z16Init_Default_HSYPA3_f(void) {
    ALOGD("_Z16Init_Default_HSYPA3_f() called");
    return 0;
}

/* Exported Object: DSInput_cmparam */
extern "C" __attribute__((visibility("default"))) void* DSInput_cmparam = NULL;

/* Exported Object: RszInput_cmparam */
extern "C" __attribute__((visibility("default"))) void* RszInput_cmparam = NULL;

/* Demangled: CDREVPCoreFW::printSWRegVal() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW13printSWRegValEv(void) {
    ALOGD("_ZN12CDREVPCoreFW13printSWRegValEv() called");
    return 0;
}

/* Demangled: CPQHDRFW::_set2sCompNum(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW13_set2sCompNumEii(void) {
    ALOGD("_ZN8CPQHDRFW13_set2sCompNumEii() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::double_mul_compute_simplify(__Double_Type__, unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW27double_mul_compute_simplifyE15__Double_Type__yi(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW27double_mul_compute_simplifyE15__Double_Type__yi() called");
    return 0;
}

/* Demangled: CPQDCHistogram::CPQDCHistogram() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQDCHistogramC1Ev(void) {
    ALOGD("_ZN14CPQDCHistogramC1Ev() called");
    return 0;
}

/* Demangled: GetPanelWhite(TXYZ&, TRGBXYZ const&) */
extern "C" __attribute__((visibility("default"))) int _Z13GetPanelWhiteR4TXYZRK7TRGBXYZ(void) {
    ALOGD("_Z13GetPanelWhiteR4TXYZRK7TRGBXYZ() called");
    return 0;
}

/* Demangled: SetDSHWReg(void*, DSHWReg*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10SetDSHWRegPvP7DSHWRegi(void) {
    ALOGD("_Z10SetDSHWRegPvP7DSHWRegi() called");
    return 0;
}

/* Demangled: CDRECoreFW::vSpikeLumaCurve(unsigned short const*, unsigned short*, unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW15vSpikeLumaCurveEPKtPtS1_(void) {
    ALOGD("_ZN10CDRECoreFW15vSpikeLumaCurveEPKtPtS1_() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::DrvHDR10Plus_onCalculate(DHDRINPUT*, DHDROUTPUT*, __Dynamic_MetaData__*, HDR10PLUS_FWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW24DrvHDR10Plus_onCalculateEP9DHDRINPUTP10DHDROUTPUTP20__Dynamic_MetaData__P15HDR10PLUS_FWReg(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW24DrvHDR10Plus_onCalculateEP9DHDRINPUTP10DHDROUTPUTP20__Dynamic_MetaData__P15HDR10PLUS_FWReg() called");
    return 0;
}

/* Demangled: CPQDCFW::ComputeSceneIdx(unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW15ComputeSceneIdxEPKt(void) {
    ALOGD("_ZN7CPQDCFW15ComputeSceneIdxEPKt() called");
    return 0;
}

/* Demangled: CPQDCFW::vBuildSecondLumaCurve(unsigned short const*, unsigned short*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW21vBuildSecondLumaCurveEPKtPtj(void) {
    ALOGD("_ZN7CPQDCFW21vBuildSecondLumaCurveEPKtPtj() called");
    return 0;
}

/* Demangled: CPQDCFW::onInitPlatform(ADLInitParam const&, ADLInitReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW14onInitPlatformERK12ADLInitParamP10ADLInitReg(void) {
    ALOGD("_ZN7CPQDCFW14onInitPlatformERK12ADLInitParamP10ADLInitReg() called");
    return 0;
}

/* Demangled: InitialTChameleonDisplayReg(TChameleonDisplayReg&) */
extern "C" __attribute__((visibility("default"))) int _Z27InitialTChameleonDisplayRegR20TChameleonDisplayReg(void) {
    ALOGD("_Z27InitialTChameleonDisplayRegR20TChameleonDisplayReg() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::getTuningField(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess14getTuningFieldEiPj(void) {
    ALOGD("_ZN24TChameleonDisplayProcess14getTuningFieldEiPj() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::isEnabled() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess9isEnabledEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess9isEnabledEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::isFinished() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess10isFinishedEv(void) {
    ALOGD("_ZN20TPQTransitionProcess10isFinishedEv() called");
    return 0;
}

/* Demangled: HDRLicense::HDRLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicenseC2Ev(void) {
    ALOGD("_ZN10HDRLicenseC2Ev() called");
    return 0;
}

/* Exported Object: TempHDR10PLUS_Frame_Info */
extern "C" __attribute__((visibility("default"))) void* TempHDR10PLUS_Frame_Info = NULL;

/* Demangled: CPQHDR10PLUSFW::HDR10plus_BezierCurveCoeff_Gen() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW30HDR10plus_BezierCurveCoeff_GenEv(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW30HDR10plus_BezierCurveCoeff_GenEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::setDebugFlag(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess12setDebugFlagEi(void) {
    ALOGD("_ZN20TPQTransitionProcess12setDebugFlagEi() called");
    return 0;
}

/* Exported Object: DREInitReg_cmparam */
extern "C" __attribute__((visibility("default"))) void* DREInitReg_cmparam = NULL;

/* Exported Object: blkWidth */
extern "C" __attribute__((visibility("default"))) void* blkWidth = NULL;

/* Exported Object: imgHeight */
extern "C" __attribute__((visibility("default"))) void* imgHeight = NULL;

/* Demangled: CPQHDR10PLUSFW::onInitPlatform() */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW14onInitPlatformEv(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW14onInitPlatformEv() called");
    return 0;
}

/* Demangled: CPQDCFW::u1DrvGetLumaHistWeight(unsigned int const*, unsigned short*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW22u1DrvGetLumaHistWeightEPKjPtt(void) {
    ALOGD("_ZN7CPQDCFW22u1DrvGetLumaHistWeightEPKjPtt() called");
    return 0;
}

/* Demangled: BluLightDefender::getTuningField(int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN16BluLightDefender14getTuningFieldEiPj(void) {
    ALOGD("_ZN16BluLightDefender14getTuningFieldEiPj() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess10setEnabledEb(void) {
    ALOGD("_ZN20TPQTransitionProcess10setEnabledEb() called");
    return 0;
}

/* Exported Object: blkXnum */
extern "C" __attribute__((visibility("default"))) void* blkXnum = NULL;

/* Demangled: CDREVPCoreFW::vLowLvlProtCurve(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW16vLowLvlProtCurveEPt(void) {
    ALOGD("_ZN12CDREVPCoreFW16vLowLvlProtCurveEPt() called");
    return 0;
}

/* Demangled: CDREVPTopFW::DREFinalGainCal(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW15DREFinalGainCalERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW15DREFinalGainCalERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: CPQDCFW::setDCPreTempData(DCPreTempData*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW16setDCPreTempDataEP13DCPreTempData(void) {
    ALOGD("_ZN7CPQDCFW16setDCPreTempDataEP13DCPreTempData() called");
    return 0;
}

/* Demangled: CPQDSFW::CPQDSFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFWC2Ev(void) {
    ALOGD("_ZN7CPQDSFWC2Ev() called");
    return 0;
}

/* Demangled: CDRECoreFW::vAPLCompCurve(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW13vAPLCompCurveEPKtPt(void) {
    ALOGD("_ZN10CDRECoreFW13vAPLCompCurveEPKtPt() called");
    return 0;
}

/* Demangled: CDRECoreFW::LocalHistEqualized(unsigned short const*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW18LocalHistEqualizedEPKtPt(void) {
    ALOGD("_ZN10CDRECoreFW18LocalHistEqualizedEPKtPt() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::RGBMaxCurveMap(unsigned int, unsigned int&, unsigned short const*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW14RGBMaxCurveMapEjRjPKt(void) {
    ALOGD("_ZN12CDREVPCoreFW14RGBMaxCurveMapEjRjPKt() called");
    return 0;
}

/* Demangled: CPQHDR10PLUSFW::HDR10plus_EBZCurveParameters_SetValue(unsigned int, unsigned int, unsigned int*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14CPQHDR10PLUSFW37HDR10plus_EBZCurveParameters_SetValueEjjPjj(void) {
    ALOGD("_ZN14CPQHDR10PLUSFW37HDR10plus_EBZCurveParameters_SetValueEjjPjj() called");
    return 0;
}

/* Exported Object: pTempHDR10PLUS_Frame_Info */
extern "C" __attribute__((visibility("default"))) void* pTempHDR10PLUS_Frame_Info = NULL;

/* Demangled: TChameleonDisplayProcess::GetRGBGainBYStandardFormulaCorrection(TChameleonDisplayInput const&, TChameleonDisplayOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess37GetRGBGainBYStandardFormulaCorrectionERK22TChameleonDisplayInputP23TChameleonDisplayOutput(void) {
    ALOGD("_ZN24TChameleonDisplayProcess37GetRGBGainBYStandardFormulaCorrectionERK22TChameleonDisplayInputP23TChameleonDisplayOutput() called");
    return 0;
}

/* Demangled: CDRECoreFW::vAdapSecondLumaWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW21vAdapSecondLumaWeightEj(void) {
    ALOGD("_ZN10CDRECoreFW21vAdapSecondLumaWeightEj() called");
    return 0;
}

/* Demangled: CPQHDRFW::~CPQHDRFW() */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFWD1Ev(void) {
    ALOGD("_ZN8CPQHDRFWD1Ev() called");
    return 0;
}

/* Demangled: CPQDSFW::IsoAdpGetCorValue(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW17IsoAdpGetCorValueEiiii(void) {
    ALOGD("_ZN7CPQDSFW17IsoAdpGetCorValueEiiii() called");
    return 0;
}

/* Demangled: CDRETopFW::EventTriggerSetting(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW19EventTriggerSettingERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW19EventTriggerSettingERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::onCalculateSW(DREInitParam const&, DRETopInput&, DRETopOutput*, TAdaptiveCALTM_ExtraInfo const&, void const*, unsigned int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM13onCalculateSWERK12DREInitParamR11DRETopInputP12DRETopOutputRK24TAdaptiveCALTM_ExtraInfoPKvjii(void) {
    ALOGD("_ZN14TAdaptiveCALTM13onCalculateSWERK12DREInitParamR11DRETopInputP12DRETopOutputRK24TAdaptiveCALTM_ExtraInfoPKvjii() called");
    return 0;
}

/* Demangled: CPQDSFW::EnableDSHPTransition(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW20EnableDSHPTransitionEb(void) {
    ALOGD("_ZN7CPQDSFW20EnableDSHPTransitionEb() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::onCalculate(TChameleonDisplayInput const&, TChameleonDisplayOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess11onCalculateERK22TChameleonDisplayInputP23TChameleonDisplayOutput(void) {
    ALOGD("_ZN24TChameleonDisplayProcess11onCalculateERK22TChameleonDisplayInputP23TChameleonDisplayOutput() called");
    return 0;
}

/* Demangled: Dump2DArrayToBuffer(char const*, int*, char*, int&, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19Dump2DArrayToBufferPKcPiPcRiiii(void) {
    ALOGD("_Z19Dump2DArrayToBufferPKcPiPcRiiii() called");
    return 0;
}

/* Exported Object: rawHeight */
extern "C" __attribute__((visibility("default"))) void* rawHeight = NULL;

/* Demangled: CDREVPCoreFW::bHistogramNormalization(unsigned int const*, unsigned short*, unsigned char, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW23bHistogramNormalizationEPKjPthttt(void) {
    ALOGD("_ZN12CDREVPCoreFW23bHistogramNormalizationEPKjPthttt() called");
    return 0;
}

/* Demangled: CPQRszFW::AlphaBlending(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW13AlphaBlendingEiiii(void) {
    ALOGD("_ZN8CPQRszFW13AlphaBlendingEiiii() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::~TChameleonDisplayProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcessD2Ev(void) {
    ALOGD("_ZN24TChameleonDisplayProcessD2Ev() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::GetDarkToBrightStep() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19GetDarkToBrightStepEv(void) {
    ALOGD("_ZN20TPQTransitionProcess19GetDarkToBrightStepEv() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::setColorShareMemory(TColorShareData*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess19setColorShareMemoryEP15TColorShareData(void) {
    ALOGD("_ZN20TPQTransitionProcess19setColorShareMemoryEP15TColorShareData() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::AssignPQTransitionRegBrightToDarkTransitionSettings(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess51AssignPQTransitionRegBrightToDarkTransitionSettingsEPi(void) {
    ALOGD("_ZN20TPQTransitionProcess51AssignPQTransitionRegBrightToDarkTransitionSettingsEPi() called");
    return 0;
}

/* Demangled: Dump1DArrayToBuffer(char const*, int*, char*, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19Dump1DArrayToBufferPKcPiPcRiii(void) {
    ALOGD("_Z19Dump1DArrayToBufferPKcPiPcRiii() called");
    return 0;
}

/* Demangled: CDRECoreFW::vAdaptGreenWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW17vAdaptGreenWeightEj(void) {
    ALOGD("_ZN10CDRECoreFW17vAdaptGreenWeightEj() called");
    return 0;
}

/* Demangled: Log_Face_Input(DRETopInput&, MtkCameraFaceMetadata*) */
extern "C" __attribute__((visibility("default"))) int _Z14Log_Face_InputR11DRETopInputP21MtkCameraFaceMetadata(void) {
    ALOGD("_Z14Log_Face_InputR11DRETopInputP21MtkCameraFaceMetadata() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::LowPassFilter(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW13LowPassFilterEPj(void) {
    ALOGD("_ZN12CDREVPCoreFW13LowPassFilterEPj() called");
    return 0;
}

/* Exported Object: SCLTMLicense::s_pInstance */
extern "C" __attribute__((visibility("default"))) void* _ZN12SCLTMLicense11s_pInstanceE = NULL;

/* Demangled: CPQDCFW::vDrvDynamicADLPara() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW18vDrvDynamicADLParaEv(void) {
    ALOGD("_ZN7CPQDCFW18vDrvDynamicADLParaEv() called");
    return 0;
}

/* Demangled: CDRECoreFW::BasicInfoCal(unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW12BasicInfoCalEjjPjS0_jjS0_(void) {
    ALOGD("_ZN10CDRECoreFW12BasicInfoCalEjjPjS0_jjS0_() called");
    return 0;
}

/* Demangled: CDRETopFW::L_AdaptiveLuma_Block(int, int, int, int*, int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW20L_AdaptiveLuma_BlockEiiiPiiiS0_i(void) {
    ALOGD("_ZN9CDRETopFW20L_AdaptiveLuma_BlockEiiiPiiiS0_i() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vBuildSecondLumaCurve(unsigned short const*, unsigned short*, unsigned int, unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW21vBuildSecondLumaCurveEPKtPtjRt(void) {
    ALOGD("_ZN12CDREVPCoreFW21vBuildSecondLumaCurveEPKtPtjRt() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::ComposeNvramAllTuningRegister(int, FEATURE_NVRAM_CA_LTM_T const*, FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM29ComposeNvramAllTuningRegisterEiPK22FEATURE_NVRAM_CA_LTM_TP35FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T(void) {
    ALOGD("_ZN14TAdaptiveCALTM29ComposeNvramAllTuningRegisterEiPK22FEATURE_NVRAM_CA_LTM_TP35FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T() called");
    return 0;
}

/* Demangled: CPQHDRFW::setting_by_feedbackMV(DHDRINPUT*, HDRFWMemberVariable*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW21setting_by_feedbackMVEP9DHDRINPUTP19HDRFWMemberVariable(void) {
    ALOGD("_ZN8CPQHDRFW21setting_by_feedbackMVEP9DHDRINPUTP19HDRFWMemberVariable() called");
    return 0;
}

/* Demangled: CPQRszFW::UltraResGetRegWOInit(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW20UltraResGetRegWOInitEiiiiiiii(void) {
    ALOGD("_ZN8CPQRszFW20UltraResGetRegWOInitEiiiiiiii() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::GetColorTypeIndex() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess17GetColorTypeIndexEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess17GetColorTypeIndexEv() called");
    return 0;
}

/* Demangled: ChameleonLicense::ChameleonLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN16ChameleonLicenseC2Ev(void) {
    ALOGD("_ZN16ChameleonLicenseC2Ev() called");
    return 0;
}

/* Demangled: CDRECoreFW::~CDRECoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFWD2Ev(void) {
    ALOGD("_ZN10CDRECoreFWD2Ev() called");
    return 0;
}

/* Demangled: CDREVPTopFW::BlkSTFP(DREVPTopInput const&, DREVPTopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW7BlkSTFPERK13DREVPTopInputP14DREVPTopOutput(void) {
    ALOGD("_ZN11CDREVPTopFW7BlkSTFPERK13DREVPTopInputP14DREVPTopOutput() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::setEnabled(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess10setEnabledEb(void) {
    ALOGD("_ZN24TChameleonDisplayProcess10setEnabledEb() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::AssignPQTransitionNewTarget(TPQTransitionInput const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess27AssignPQTransitionNewTargetERK18TPQTransitionInput(void) {
    ALOGD("_ZN20TPQTransitionProcess27AssignPQTransitionNewTargetERK18TPQTransitionInput() called");
    return 0;
}

/* Demangled: Dump3DArrayToBuffer(char const*, int*, char*, int&, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z19Dump3DArrayToBufferPKcPiPcRiiiii(void) {
    ALOGD("_Z19Dump3DArrayToBufferPKcPiPcRiiiii() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::BluLightDefenderLicense() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicenseC2Ev(void) {
    ALOGD("_ZN23BluLightDefenderLicenseC2Ev() called");
    return 0;
}

/* Demangled: CDRETopFW::DRETileHWRegCal(DREInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW15DRETileHWRegCalERK12DREInitParam(void) {
    ALOGD("_ZN9CDRETopFW15DRETileHWRegCalERK12DREInitParam() called");
    return 0;
}

/* Exported Object: HDRInternalReg_Dump_cmparam */
extern "C" __attribute__((visibility("default"))) void* HDRInternalReg_Dump_cmparam = NULL;

/* Exported Object: FDHeightmax */
extern "C" __attribute__((visibility("default"))) void* FDHeightmax = NULL;

/* Exported Object: blkHeight */
extern "C" __attribute__((visibility("default"))) void* blkHeight = NULL;

/* Demangled: CustParameters::~CustParameters() */
extern "C" __attribute__((visibility("default"))) int _ZN14CustParametersD2Ev(void) {
    ALOGD("_ZN14CustParametersD2Ev() called");
    return 0;
}

/* Demangled: ColorAISelector::setWhoSelector(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN15ColorAISelector14setWhoSelectorEb(void) {
    ALOGD("_ZN15ColorAISelector14setWhoSelectorEb() called");
    return 0;
}

/* Demangled: RegInterpolation(int, int, int, void*, void*, int, int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z16RegInterpolationiiiPvS_iiS_(void) {
    ALOGD("_Z16RegInterpolationiiiPvS_iiS_() called");
    return 0;
}

/* Demangled: TAdaptiveCALTM::ApplyNvramAllTuningRegisterToSWRegister(FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN14TAdaptiveCALTM39ApplyNvramAllTuningRegisterToSWRegisterEP35FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T(void) {
    ALOGD("_ZN14TAdaptiveCALTM39ApplyNvramAllTuningRegisterToSWRegisterEP35FEATURE_NVRAM_CA_LTM_ALLTUNINGREG_T() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vDrvADLBuildDefault(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW19vDrvADLBuildDefaultEPt(void) {
    ALOGD("_ZN12CDREVPCoreFW19vDrvADLBuildDefaultEPt() called");
    return 0;
}

/* Demangled: CPQDCFW::HistFIR(unsigned short const*, unsigned short*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW7HistFIREPKtPtPj(void) {
    ALOGD("_ZN7CPQDCFW7HistFIREPKtPtPj() called");
    return 0;
}

/* Demangled: BluLightDefenderLicense::getBluLightDefenderSupport() */
extern "C" __attribute__((visibility("default"))) int _ZN23BluLightDefenderLicense26getBluLightDefenderSupportEv(void) {
    ALOGD("_ZN23BluLightDefenderLicense26getBluLightDefenderSupportEv() called");
    return 0;
}

/* Demangled: CPQDCFW::CPQDCFW() */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFWC1Ev(void) {
    ALOGD("_ZN7CPQDCFWC1Ev() called");
    return 0;
}

/* Demangled: CPQDSFW::onTransition(DSTransitionSettings const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW12onTransitionERK20DSTransitionSettings(void) {
    ALOGD("_ZN7CPQDSFW12onTransitionERK20DSTransitionSettings() called");
    return 0;
}

/* Demangled: CPQRszFW::rsz_config(RszInput const*, RszOutput*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW10rsz_configEPK8RszInputP9RszOutputii(void) {
    ALOGD("_ZN8CPQRszFW10rsz_configEPK8RszInputP9RszOutputii() called");
    return 0;
}

/* Demangled: InitialTColorSensorCalibrationFactor(TColorSensorCalibrationFactor&) */
extern "C" __attribute__((visibility("default"))) int _Z36InitialTColorSensorCalibrationFactorR29TColorSensorCalibrationFactor(void) {
    ALOGD("_Z36InitialTColorSensorCalibrationFactorR29TColorSensorCalibrationFactor() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::SensorValueFactoryCalibrate() */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess27SensorValueFactoryCalibrateEv(void) {
    ALOGD("_ZN24TChameleonDisplayProcess27SensorValueFactoryCalibrateEv() called");
    return 0;
}

/* Exported Object: imgWidth */
extern "C" __attribute__((visibility("default"))) void* imgWidth = NULL;

/* Demangled: CDREVPCoreFW::vCompactLumaCurve(unsigned short const*, unsigned short*, unsigned short const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW17vCompactLumaCurveEPKtPtS1_j(void) {
    ALOGD("_ZN12CDREVPCoreFW17vCompactLumaCurveEPKtPtS1_j() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::~CDREVPCoreFW() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFWD2Ev(void) {
    ALOGD("_ZN12CDREVPCoreFWD2Ev() called");
    return 0;
}

/* Demangled: TChameleonDisplayProcess::AssignChameleonDisplayRegSensorDebounce(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN24TChameleonDisplayProcess39AssignChameleonDisplayRegSensorDebounceEPi(void) {
    ALOGD("_ZN24TChameleonDisplayProcess39AssignChameleonDisplayRegSensorDebounceEPi() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::TPQTransitionProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcessC1Ev(void) {
    ALOGD("_ZN20TPQTransitionProcessC1Ev() called");
    return 0;
}

/* Demangled: CPQRszFW::onLoadTable(RszInput*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW11onLoadTableEP8RszInputPv(void) {
    ALOGD("_ZN8CPQRszFW11onLoadTableEP8RszInputPv() called");
    return 0;
}

/* Exported Object: FDHeightmin */
extern "C" __attribute__((visibility("default"))) void* FDHeightmin = NULL;

/* Demangled: CPQRszFW::onCalculate(RszInput const*, RszOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQRszFW11onCalculateEPK8RszInputP9RszOutput(void) {
    ALOGD("_ZN8CPQRszFW11onCalculateEPK8RszInputP9RszOutput() called");
    return 0;
}

/* Demangled: CPQDSFW::DumpReg(void*, char*, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDSFW7DumpRegEPvPcRiii(void) {
    ALOGD("_ZN7CPQDSFW7DumpRegEPvPcRiii() called");
    return 0;
}

/* Demangled: CDRECoreFW::LowPassFilter(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10CDRECoreFW13LowPassFilterEPj(void) {
    ALOGD("_ZN10CDRECoreFW13LowPassFilterEPj() called");
    return 0;
}

/* Demangled: CDRETopFW::LoadFWRegSettings() */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW17LoadFWRegSettingsEv(void) {
    ALOGD("_ZN9CDRETopFW17LoadFWRegSettingsEv() called");
    return 0;
}

/* Demangled: CDRETopFW::BlkSTFP(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW7BlkSTFPERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW7BlkSTFPERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::ADLInitialize() */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW13ADLInitializeEv(void) {
    ALOGD("_ZN12CDREVPCoreFW13ADLInitializeEv() called");
    return 0;
}

/* Demangled: CDREVPTopFW::setShareMemory(DREsharedata*) */
extern "C" __attribute__((visibility("default"))) int _ZN11CDREVPTopFW14setShareMemoryEP12DREsharedata(void) {
    ALOGD("_ZN11CDREVPTopFW14setShareMemoryEP12DREsharedata() called");
    return 0;
}

/* Demangled: HDRLicense::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10HDRLicense15destroyInstanceEv(void) {
    ALOGD("_ZN10HDRLicense15destroyInstanceEv() called");
    return 0;
}

/* Demangled: TXYZValueAdder(TXYZ&, TXYZ const&) */
extern "C" __attribute__((visibility("default"))) int _Z14TXYZValueAdderR4TXYZRKS_(void) {
    ALOGD("_Z14TXYZValueAdderR4TXYZRKS_() called");
    return 0;
}

/* Demangled: CDRETopFW::DREGainIdxFlt(DRETopInput const&, DRETopOutput*) */
extern "C" __attribute__((visibility("default"))) int _ZN9CDRETopFW13DREGainIdxFltERK11DRETopInputP12DRETopOutput(void) {
    ALOGD("_ZN9CDRETopFW13DREGainIdxFltERK11DRETopInputP12DRETopOutput() called");
    return 0;
}

/* Exported Object: DREReg_cmparam */
extern "C" __attribute__((visibility("default"))) void* DREReg_cmparam = NULL;

/* Demangled: CPQHDRFW::histogram_window_fw(DHDRINPUT*, DHDROUTPUT*, HDRFWReg*) */
extern "C" __attribute__((visibility("default"))) int _ZN8CPQHDRFW19histogram_window_fwEP9DHDRINPUTP10DHDROUTPUTP8HDRFWReg(void) {
    ALOGD("_ZN8CPQHDRFW19histogram_window_fwEP9DHDRINPUTP10DHDROUTPUTP8HDRFWReg() called");
    return 0;
}

/* Demangled: InitialTColorSensorFactoryFactor(TColorSensorFactoryFactor&) */
extern "C" __attribute__((visibility("default"))) int _Z32InitialTColorSensorFactoryFactorR25TColorSensorFactoryFactor(void) {
    ALOGD("_Z32InitialTColorSensorFactoryFactorR25TColorSensorFactoryFactor() called");
    return 0;
}

/* Demangled: TPQTransitionProcess::onInitPlatform(TPQTransitionInitParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN20TPQTransitionProcess14onInitPlatformERK22TPQTransitionInitParam(void) {
    ALOGD("_ZN20TPQTransitionProcess14onInitPlatformERK22TPQTransitionInitParam() called");
    return 0;
}

/* Demangled: CPQDCFW::combineDyncDualPipeInput(ADLInput&, ADLInput&, ADLInput&, DualInfoDync&, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CPQDCFW24combineDyncDualPipeInputER8ADLInputS1_S1_R12DualInfoDynciiii(void) {
    ALOGD("_ZN7CPQDCFW24combineDyncDualPipeInputER8ADLInputS1_S1_R12DualInfoDynciiii() called");
    return 0;
}

/* Demangled: DumpRegBufferToBuffer(char const**, int, void*, char*, int&, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21DumpRegBufferToBufferPPKciPvPcRiii(void) {
    ALOGD("_Z21DumpRegBufferToBufferPPKciPvPcRiii() called");
    return 0;
}

/* Demangled: CDREVPCoreFW::vAdaptGreenWeight(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN12CDREVPCoreFW17vAdaptGreenWeightEj(void) {
    ALOGD("_ZN12CDREVPCoreFW17vAdaptGreenWeightEj() called");
    return 0;
}
