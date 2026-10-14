/*
 * Reverse-Engineered Source for: libcameracustom.eis.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcameracustom_eis"

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
#include "libcameracustom_eis.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: EISCustom::isEnabledImageMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom18isEnabledImageModeEv(void) {
    ALOGD("_ZN9EISCustom18isEnabledImageModeEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: EISCustom::getEISMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom10getEISModeEj(void) {
    ALOGD("_ZN9EISCustom10getEISModeEj() called");
    return 0;
}

/* Demangled: EISCustom::getEISFactor(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom12getEISFactorEjj(void) {
    ALOGD("_ZN9EISCustom12getEISFactorEjj() called");
    return 0;
}

/* Demangled: EISCustom::getGISParameter(unsigned int, double*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom15getGISParameterEjPdPjS1_S1_(void) {
    ALOGD("_ZN9EISCustom15getGISParameterEjPdPjS1_S1_() called");
    return 0;
}

/* Demangled: EISCustom::getMVNumber(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom11getMVNumberEiiPiS0_(void) {
    ALOGD("_ZN9EISCustom11getMVNumberEiiPiS0_() called");
    return 0;
}

/* Demangled: EISCustom::getEIS25Data(EIS25_Customize_Tuning_Para_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom12getEIS25DataEP29EIS25_Customize_Tuning_Para_t(void) {
    ALOGD("_ZN9EISCustom12getEIS25DataEP29EIS25_Customize_Tuning_Para_t() called");
    return 0;
}

/* Demangled: EISCustom::getEIS30Data(EIS30_Customize_Tuning_Para_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom12getEIS30DataEP29EIS30_Customize_Tuning_Para_t(void) {
    ALOGD("_ZN9EISCustom12getEIS30DataEP29EIS30_Customize_Tuning_Para_t() called");
    return 0;
}

/* Demangled: EISCustom::appendEISMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom13appendEISModeEjRj(void) {
    ALOGD("_ZN9EISCustom13appendEISModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::getGyroIntervalMs() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom17getGyroIntervalMsEv(void) {
    ALOGD("_ZN9EISCustom17getGyroIntervalMsEv() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS25FusionMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom23generateEIS25FusionModeEjRj(void) {
    ALOGD("_ZN9EISCustom23generateEIS25FusionModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledEIS22() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom14isEnabledEIS22Ev(void) {
    ALOGD("_ZN9EISCustom14isEnabledEIS22Ev() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledEIS25() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom14isEnabledEIS25Ev(void) {
    ALOGD("_ZN9EISCustom14isEnabledEIS25Ev() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledEIS30() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom14isEnabledEIS30Ev(void) {
    ALOGD("_ZN9EISCustom14isEnabledEIS30Ev() called");
    return 0;
}

/* Demangled: EISCustom::getForwardFrames(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom16getForwardFramesEj(void) {
    ALOGD("_ZN9EISCustom16getForwardFramesEj() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledLMVData() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom16isEnabledLMVDataEv(void) {
    ALOGD("_ZN9EISCustom16isEnabledLMVDataEv() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS22Mode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom17generateEIS22ModeEjRj(void) {
    ALOGD("_ZN9EISCustom17generateEIS22ModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledGyroMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom17isEnabledGyroModeEv(void) {
    ALOGD("_ZN9EISCustom17isEnabledGyroModeEv() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS25GyroMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom21generateEIS25GyroModeEjRj(void) {
    ALOGD("_ZN9EISCustom21generateEIS25GyroModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS30GyroMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom21generateEIS30GyroModeEjRj(void) {
    ALOGD("_ZN9EISCustom21generateEIS30GyroModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledLosslessMode() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom21isEnabledLosslessModeEv(void) {
    ALOGD("_ZN9EISCustom21isEnabledLosslessModeEv() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS25ImageMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom22generateEIS25ImageModeEjRj(void) {
    ALOGD("_ZN9EISCustom22generateEIS25ImageModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::generateEIS30FusionMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom23generateEIS30FusionModeEjRj(void) {
    ALOGD("_ZN9EISCustom23generateEIS30FusionModeEjRj() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledFOVWarpCombine(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom23isEnabledFOVWarpCombineEj(void) {
    ALOGD("_ZN9EISCustom23isEnabledFOVWarpCombineEj() called");
    return 0;
}

/* Demangled: EISCustom::getEISData(EIS_Customize_Para_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom10getEISDataEP20EIS_Customize_Para_t(void) {
    ALOGD("_ZN9EISCustom10getEISDataEP20EIS_Customize_Para_t() called");
    return 0;
}

/* Demangled: EISCustom::getEISRatio(unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom11getEISRatioEjj(void) {
    ALOGD("_ZN9EISCustom11getEISRatioEjj() called");
    return 0;
}

/* Demangled: EISCustom::getEISPlusData(EIS_PLUS_Customize_Para_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom14getEISPlusDataEP25EIS_PLUS_Customize_Para_tj(void) {
    ALOGD("_ZN9EISCustom14getEISPlusDataEP25EIS_PLUS_Customize_Para_tj() called");
    return 0;
}

/* Demangled: EISCustom::get4K2KRecordFPS() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom16get4K2KRecordFPSEv(void) {
    ALOGD("_ZN9EISCustom16get4K2KRecordFPSEv() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledFixedFPS() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom17isEnabledFixedFPSEv(void) {
    ALOGD("_ZN9EISCustom17isEnabledFixedFPSEv() called");
    return 0;
}

/* Demangled: EISCustom::isForcedEIS12() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom13isForcedEIS12Ev(void) {
    ALOGD("_ZN9EISCustom13isForcedEIS12Ev() called");
    return 0;
}

/* Demangled: EISCustom::isSupportPreviewEIS() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom19isSupportPreviewEISEv(void) {
    ALOGD("_ZN9EISCustom19isSupportPreviewEISEv() called");
    return 0;
}

/* Demangled: EISCustom::isEnabledForwardMode(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom20isEnabledForwardModeEj(void) {
    ALOGD("_ZN9EISCustom20isEnabledForwardModeEj() called");
    return 0;
}

/* Demangled: EISCustom::isSupportAdvEIS_HAL3() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom20isSupportAdvEIS_HAL3Ev(void) {
    ALOGD("_ZN9EISCustom20isSupportAdvEIS_HAL3Ev() called");
    return 0;
}

/* Demangled: EISCustom::getEIS12Factor() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom14getEIS12FactorEv(void) {
    ALOGD("_ZN9EISCustom14getEIS12FactorEv() called");
    return 0;
}

/* Demangled: EISCustom::getForwardStartFrame() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom20getForwardStartFrameEv(void) {
    ALOGD("_ZN9EISCustom20getForwardStartFrameEv() called");
    return 0;
}

/* Demangled: EISCustom::getHeightToWidthRatio() */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom21getHeightToWidthRatioEv(void) {
    ALOGD("_ZN9EISCustom21getHeightToWidthRatioEv() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: EISCustom::generateEIS30ImageMode(unsigned int, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN9EISCustom22generateEIS30ImageModeEjRj(void) {
    ALOGD("_ZN9EISCustom22generateEIS30ImageModeEjRj() called");
    return 0;
}
