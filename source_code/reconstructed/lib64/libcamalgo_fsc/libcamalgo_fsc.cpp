/*
 * Reverse-Engineered Source for: libcamalgo.fsc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_fsc"

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
#include "libcamalgo_fsc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: FocalScalingProvider::getMinCropRemainRegion(int, int, int, int, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider22getMinCropRemainRegionEiiiiiiiiPi(void) {
    ALOGD("_ZN20FocalScalingProvider22getMinCropRemainRegionEiiiiiiiiPi() called");
    return 0;
}

/* Demangled: MTKFSC::~MTKFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSCD1Ev(void) {
    ALOGD("_ZN6MTKFSCD1Ev() called");
    return 0;
}

/* Demangled: AppFSC::FSCInit(FSC_INIT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSC7FSCInitEP15FSC_INIT_STRUCT(void) {
    ALOGD("_ZN6AppFSC7FSCInitEP15FSC_INIT_STRUCT() called");
    return 0;
}

/* Demangled: FocalScalingProvider::getImageScale(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider13getImageScaleEiiiii(void) {
    ALOGD("_ZN20FocalScalingProvider13getImageScaleEiiiii() called");
    return 0;
}

/* Exported Object: g_macro_to_inf_ratio */
extern "C" __attribute__((visibility("default"))) void* g_macro_to_inf_ratio = NULL;

/* Demangled: FSC_Algorithm::getAfRecords(int, int*, int*, int (*) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm12getAfRecordsEiPiS0_PA2_i(void) {
    ALOGD("_ZN13FSC_Algorithm12getAfRecordsEiPiS0_PA2_i() called");
    return 0;
}

/* Demangled: FSC_Algorithm::getImageScale(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm13getImageScaleEiiiii(void) {
    ALOGD("_ZN13FSC_Algorithm13getImageScaleEiiiii() called");
    return 0;
}

/* Demangled: MTKFSC::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSC14createInstanceEv(void) {
    ALOGD("_ZN6MTKFSC14createInstanceEv() called");
    return 0;
}

/* Demangled: AppFSC::~AppFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSCD1Ev(void) {
    ALOGD("_ZN6AppFSCD1Ev() called");
    return 0;
}

/* Demangled: FocalScalingProvider::getCropSettingsByScale(float, int, int, int, int, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider22getCropSettingsByScaleEfiiiiiiiiPi(void) {
    ALOGD("_ZN20FocalScalingProvider22getCropSettingsByScaleEfiiiiiiiiPi() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: FSC_Algorithm::getDacEvents(int, int, int (*) [2], float, int*, float (*) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm12getDacEventsEiiPA2_ifPiPA2_f(void) {
    ALOGD("_ZN13FSC_Algorithm12getDacEventsEiiPA2_ifPiPA2_f() called");
    return 0;
}

/* Demangled: FocalScalingProvider::~FocalScalingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProviderD1Ev(void) {
    ALOGD("_ZN20FocalScalingProviderD1Ev() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: FSC_Algorithm::setMaxScale(float, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm11setMaxScaleEfiiii(void) {
    ALOGD("_ZN13FSC_Algorithm11setMaxScaleEfiiii() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: FSC_Algorithm::~FSC_Algorithm() */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_AlgorithmD2Ev(void) {
    ALOGD("_ZN13FSC_AlgorithmD2Ev() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: FocalScalingProvider::getCropRemainSizeRatio(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider22getCropRemainSizeRatioEiiiii(void) {
    ALOGD("_ZN20FocalScalingProvider22getCropRemainSizeRatioEiiiii() called");
    return 0;
}

/* Exported Object: g_dac_macro */
extern "C" __attribute__((visibility("default"))) void* g_dac_macro = NULL;

/* Demangled: FocalScalingProvider::getFSC_Param_MdpCrop(int, int, int, int, int, int, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider20getFSC_Param_MdpCropEiiiiiiiiiiPi(void) {
    ALOGD("_ZN20FocalScalingProvider20getFSC_Param_MdpCropEiiiiiiiiiiPi() called");
    return 0;
}

/* Demangled: MTKFSC::~MTKFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSCD2Ev(void) {
    ALOGD("_ZN6MTKFSCD2Ev() called");
    return 0;
}

/* Demangled: FSC_Algorithm::getImageSlicesScale(int, int, int, int, int, bool, float, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm19getImageSlicesScaleEiiiiibfPf(void) {
    ALOGD("_ZN13FSC_Algorithm19getImageSlicesScaleEiiiiibfPf() called");
    return 0;
}

/* Demangled: FocalScalingProvider::updateDacToScalePolynomial(int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider26updateDacToScalePolynomialEi(void) {
    ALOGD("_ZN20FocalScalingProvider26updateDacToScalePolynomialEi() called");
    return 0;
}

/* Demangled: AppFSC::FSCFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSC14FSCFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6AppFSC14FSCFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: FSC_Algorithm::getDacScale(float) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm11getDacScaleEf(void) {
    ALOGD("_ZN13FSC_Algorithm11getDacScaleEf() called");
    return 0;
}

/* Demangled: FSC_Algorithm::~FSC_Algorithm() */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_AlgorithmD1Ev(void) {
    ALOGD("_ZN13FSC_AlgorithmD1Ev() called");
    return 0;
}

/* Demangled: FSC_Algorithm::updateDAC(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm9updateDACEiii(void) {
    ALOGD("_ZN13FSC_Algorithm9updateDACEiii() called");
    return 0;
}

/* Demangled: AppFSC::AppFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSCC2Ev(void) {
    ALOGD("_ZN6AppFSCC2Ev() called");
    return 0;
}

/* Demangled: MTKFSC::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSC15destroyInstanceEv(void) {
    ALOGD("_ZN6MTKFSC15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FSC_Algorithm::getDacEvents_1Slice(int, int, int, int, float, float, int, float (*) [2], int*, float (*) [2]) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm19getDacEvents_1SliceEiiiiffiPA2_fPiS1_(void) {
    ALOGD("_ZN13FSC_Algorithm19getDacEvents_1SliceEiiiiffiPA2_fPiS1_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: MTKFSC::FSCInit(FSC_INIT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSC7FSCInitEP15FSC_INIT_STRUCT(void) {
    ALOGD("_ZN6MTKFSC7FSCInitEP15FSC_INIT_STRUCT() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: AppFSC::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSC15destroyInstanceEv(void) {
    ALOGD("_ZN6AppFSC15destroyInstanceEv() called");
    return 0;
}

/* Demangled: FSC_Algorithm::FSC_Algorithm(float, float, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_AlgorithmC2Effiiiiii(void) {
    ALOGD("_ZN13FSC_AlgorithmC2Effiiiiii() called");
    return 0;
}

/* Demangled: MTKFSC::~MTKFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSCD0Ev(void) {
    ALOGD("_ZN6MTKFSCD0Ev() called");
    return 0;
}

/* Demangled: AppFSC::~AppFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSCD2Ev(void) {
    ALOGD("_ZN6AppFSCD2Ev() called");
    return 0;
}

/* Demangled: AppFSC::AppFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSCC1Ev(void) {
    ALOGD("_ZN6AppFSCC1Ev() called");
    return 0;
}

/* Demangled: FocalScalingProvider::updateDAC(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider9updateDACEiii(void) {
    ALOGD("_ZN20FocalScalingProvider9updateDACEiii() called");
    return 0;
}

/* Demangled: FocalScalingProvider::getFSC_Param_ScaleList(int, int, int, int, int, int, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider22getFSC_Param_ScaleListEiiiiiiiiiiPi(void) {
    ALOGD("_ZN20FocalScalingProvider22getFSC_Param_ScaleListEiiiiiiiiiiPi() called");
    return 0;
}

/* Demangled: AppFSC::~AppFSC() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSCD0Ev(void) {
    ALOGD("_ZN6AppFSCD0Ev() called");
    return 0;
}

/* Exported Object: g_max_cropped_ratio */
extern "C" __attribute__((visibility("default"))) void* g_max_cropped_ratio = NULL;

/* Demangled: FocalScalingProvider::getImageScale(int, int, int, int, int, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider13getImageScaleEiiiiiPf(void) {
    ALOGD("_ZN20FocalScalingProvider13getImageScaleEiiiiiPf() called");
    return 0;
}

/* Demangled: FSC_Algorithm::updateDacToScalePolynomial(float) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm26updateDacToScalePolynomialEf(void) {
    ALOGD("_ZN13FSC_Algorithm26updateDacToScalePolynomialEf() called");
    return 0;
}

/* Demangled: FocalScalingProvider::~FocalScalingProvider() */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProviderD2Ev(void) {
    ALOGD("_ZN20FocalScalingProviderD2Ev() called");
    return 0;
}

/* Exported Object: vtable for MTKFSC */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKFSC = NULL;

/* Exported Object: g_dac_inf */
extern "C" __attribute__((visibility("default"))) void* g_dac_inf = NULL;

/* Demangled: FocalScalingProvider::FocalScalingProvider(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProviderC1Eiiiiiiii(void) {
    ALOGD("_ZN20FocalScalingProviderC1Eiiiiiiii() called");
    return 0;
}

/* Demangled: FSC_Algorithm::FSC_Algorithm(float, float, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_AlgorithmC1Effiiiiii(void) {
    ALOGD("_ZN13FSC_AlgorithmC1Effiiiiii() called");
    return 0;
}

/* Exported Object: g_enable_debug */
extern "C" __attribute__((visibility("default"))) void* g_enable_debug = NULL;

/* Exported Object: vtable for AppFSC */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppFSC = NULL;

/* Demangled: FSC_Algorithm::getBufferIndex_FrameInit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN13FSC_Algorithm24getBufferIndex_FrameInitEi(void) {
    ALOGD("_ZN13FSC_Algorithm24getBufferIndex_FrameInitEi() called");
    return 0;
}

/* Demangled: AppFSC::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppFSC11getInstanceEv(void) {
    ALOGD("_ZN6AppFSC11getInstanceEv() called");
    return 0;
}

/* Demangled: FocalScalingProvider::getMaxFSC_Scale() */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProvider15getMaxFSC_ScaleEv(void) {
    ALOGD("_ZN20FocalScalingProvider15getMaxFSC_ScaleEv() called");
    return 0;
}

/* Demangled: MTKFSC::FSCFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKFSC14FSCFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKFSC14FSCFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: FocalScalingProvider::FocalScalingProvider(int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN20FocalScalingProviderC2Eiiiiiiii(void) {
    ALOGD("_ZN20FocalScalingProviderC2Eiiiiiiii() called");
    return 0;
}
