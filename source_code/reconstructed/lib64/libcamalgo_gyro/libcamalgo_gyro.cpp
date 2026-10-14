/*
 * Reverse-Engineered Source for: libcamalgo.gyro.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_gyro"

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
#include "libcamalgo_gyro.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: GyroCalibration::getParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration11getParaAddrEv(void) {
    ALOGD("_ZN15GyroCalibration11getParaAddrEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::GyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCoreC1Ev(void) {
    ALOGD("_ZN16GyroToMotionCoreC1Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::check_LMV() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration9check_LMVEv(void) {
    ALOGD("_ZN15GyroCalibration9check_LMVEv() called");
    return 0;
}

/* Demangled: GyroCalibration::calCalibrationParam() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration19calCalibrationParamEv(void) {
    ALOGD("_ZN15GyroCalibration19calCalibrationParamEv() called");
    return 0;
}

/* Demangled: MTKGyro::GyroInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro8GyroInitEPv(void) {
    ALOGD("_ZN7MTKGyro8GyroInitEPv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::queryLogBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore15queryLogBufSizeEv(void) {
    ALOGD("_ZN16GyroToMotionCore15queryLogBufSizeEv() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: GyroCalibration::doEmGyroCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration13doEmGyroCheckEv(void) {
    ALOGD("_ZN15GyroCalibration13doEmGyroCheckEv() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: AppGyro::GyroReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro9GyroResetEv(void) {
    ALOGD("_ZN7AppGyro9GyroResetEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::grid_to_mv(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore10grid_to_mvEPKd(void) {
    ALOGD("_ZN16GyroToMotionCore10grid_to_mvEPKd() called");
    return 0;
}

/* Demangled: GyroCalibration::utilSqrt(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration8utilSqrtEii(void) {
    ALOGD("_ZN15GyroCalibration8utilSqrtEii() called");
    return 0;
}

/* Demangled: GyroToMotionCore::utilSqrt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore8utilSqrtEi(void) {
    ALOGD("_ZN16GyroToMotionCore8utilSqrtEi() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getResultAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore13getResultAddrEv(void) {
    ALOGD("_ZN16GyroToMotionCore13getResultAddrEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCoreD0Ev(void) {
    ALOGD("_ZN16GyroToMotionCoreD0Ev() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: AppGyro::AppGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyroC1Ev(void) {
    ALOGD("_ZN7AppGyroC1Ev() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: AppGyro::~AppGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyroD2Ev(void) {
    ALOGD("_ZN7AppGyroD2Ev() called");
    return 0;
}

/* Demangled: MTKGyro::GyroReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro9GyroResetEv(void) {
    ALOGD("_ZN7MTKGyro9GyroResetEv() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: GyroCalibration::interp(double*, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration6interpEPdPKd(void) {
    ALOGD("_ZN15GyroCalibration6interpEPdPKd() called");
    return 0;
}

/* Demangled: AppGyro::destroyInstance(MTKGyro*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro15destroyInstanceEP7MTKGyro(void) {
    ALOGD("_ZN7AppGyro15destroyInstanceEP7MTKGyro() called");
    return 0;
}

/* Demangled: GyroCalibration::restoreParam() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration12restoreParamEv(void) {
    ALOGD("_ZN15GyroCalibration12restoreParamEv() called");
    return 0;
}

/* Demangled: GyroCalibration::GyroCalibrationMain() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration19GyroCalibrationMainEv(void) {
    ALOGD("_ZN15GyroCalibration19GyroCalibrationMainEv() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: vtable for GyroToMotionCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV16GyroToMotionCore = NULL;

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: AppGyro::GyroOutputDefaultParameter(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro26GyroOutputDefaultParameterEi(void) {
    ALOGD("_ZN7AppGyro26GyroOutputDefaultParameterEi() called");
    return 0;
}

/* Demangled: GyroToMotionCore::calFOVAlignGrid(int, int, COORDINATE*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore15calFOVAlignGridEiiP10COORDINATE(void) {
    ALOGD("_ZN16GyroToMotionCore15calFOVAlignGridEiiP10COORDINATE() called");
    return 0;
}

/* Exported Object: vtable for GyroCalibration */
extern "C" __attribute__((visibility("default"))) void* _ZTV15GyroCalibration = NULL;

/* Demangled: GyroToMotionCore::utilCramer(float, float, float, float, float, float, float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore10utilCramerEffffffRfS0_(void) {
    ALOGD("_ZN16GyroToMotionCore10utilCramerEffffffRfS0_() called");
    return 0;
}

/* Demangled: GyroCalibration::getTime() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration7getTimeEv(void) {
    ALOGD("_ZN15GyroCalibration7getTimeEv() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: GyroCalibration::GyroCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibrationC2Ev(void) {
    ALOGD("_ZN15GyroCalibrationC2Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::~GyroCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibrationD1Ev(void) {
    ALOGD("_ZN15GyroCalibrationD1Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::matProduct(double*, double const*, double const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration10matProductEPdPKdS2_iii(void) {
    ALOGD("_ZN15GyroCalibration10matProductEPdPKdS2_iii() called");
    return 0;
}

/* Demangled: GyroCalibration::utilCos(double) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration7utilCosEd(void) {
    ALOGD("_ZN15GyroCalibration7utilCosEd() called");
    return 0;
}

/* Demangled: GyroToMotionCore::matProduct(double*, float const*, double const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore10matProductEPdPKfPKdiii(void) {
    ALOGD("_ZN16GyroToMotionCore10matProductEPdPKfPKdiii() called");
    return 0;
}

/* Demangled: GyroCalibration::getInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration11getInfoAddrEv(void) {
    ALOGD("_ZN15GyroCalibration11getInfoAddrEv() called");
    return 0;
}

/* Demangled: GyroCalibration::reprojectMotionVectors(double&, int, int const*, int const*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration22reprojectMotionVectorsERdiPKiS2_(void) {
    ALOGD("_ZN15GyroCalibration22reprojectMotionVectorsERdiPKiS2_() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11getInstanceEv(void) {
    ALOGD("_ZN16GyroToMotionCore11getInstanceEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::matProduct(double*, double const*, double const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore10matProductEPdPKdS2_iii(void) {
    ALOGD("_ZN16GyroToMotionCore10matProductEPdPKdS2_iii() called");
    return 0;
}

/* Demangled: GyroCalibration::preprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration10preprocessEv(void) {
    ALOGD("_ZN15GyroCalibration10preprocessEv() called");
    return 0;
}

/* Demangled: MTKGyro::~MTKGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyroD0Ev(void) {
    ALOGD("_ZN7MTKGyroD0Ev() called");
    return 0;
}

/* Demangled: GyroToMotionCore::preprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore10preprocessEv(void) {
    ALOGD("_ZN16GyroToMotionCore10preprocessEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::GyroToMotionCoreInit() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore20GyroToMotionCoreInitEv(void) {
    ALOGD("_ZN16GyroToMotionCore20GyroToMotionCoreInitEv() called");
    return 0;
}

/* Demangled: GyroCalibration::evalObj() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration7evalObjEv(void) {
    ALOGD("_ZN15GyroCalibration7evalObjEv() called");
    return 0;
}

/* Demangled: MTKGyro::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro14createInstanceEv(void) {
    ALOGD("_ZN7MTKGyro14createInstanceEv() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: GyroCalibration::updateIntrinsic(double const*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration15updateIntrinsicEPKdPdS2_(void) {
    ALOGD("_ZN15GyroCalibration15updateIntrinsicEPKdPdS2_() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: GyroToMotionCore::calBaseGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11calBaseGridEv(void) {
    ALOGD("_ZN16GyroToMotionCore11calBaseGridEv() called");
    return 0;
}

/* Demangled: GyroCalibration::setInitial() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration10setInitialEv(void) {
    ALOGD("_ZN15GyroCalibration10setInitialEv() called");
    return 0;
}

/* Demangled: MTKGyro::GyroMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro8GyroMainEv(void) {
    ALOGD("_ZN7MTKGyro8GyroMainEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::memoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11memoryShiftEv(void) {
    ALOGD("_ZN16GyroToMotionCore11memoryShiftEv() called");
    return 0;
}

/* Demangled: AppGyro::~AppGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyroD0Ev(void) {
    ALOGD("_ZN7AppGyroD0Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration11getInstanceEv(void) {
    ALOGD("_ZN15GyroCalibration11getInstanceEv() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: GyroToMotionCore::mvInterpolation(double*, COORDINATE*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore15mvInterpolationEPdP10COORDINATE(void) {
    ALOGD("_ZN16GyroToMotionCore15mvInterpolationEPdP10COORDINATE() called");
    return 0;
}

/* Demangled: MTKGyro::destroyInstance(MTKGyro*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro15destroyInstanceEPS_(void) {
    ALOGD("_ZN7MTKGyro15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: AppGyro::GyroMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro8GyroMainEv(void) {
    ALOGD("_ZN7AppGyro8GyroMainEv() called");
    return 0;
}

/* Demangled: GyroCalibration::GyroCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibrationC1Ev(void) {
    ALOGD("_ZN15GyroCalibrationC1Ev() called");
    return 0;
}

/* Exported Object: vtable for AppGyro */
extern "C" __attribute__((visibility("default"))) void* _ZTV7AppGyro = NULL;

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: GyroCalibration::~GyroCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibrationD0Ev(void) {
    ALOGD("_ZN15GyroCalibrationD0Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::utilSqrt_long(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration13utilSqrt_longEmi(void) {
    ALOGD("_ZN15GyroCalibration13utilSqrt_longEmi() called");
    return 0;
}

/* Demangled: GyroCalibration::getLogAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration10getLogAddrEv(void) {
    ALOGD("_ZN15GyroCalibration10getLogAddrEv() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: GyroCalibration::utilPow10(int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration9utilPow10Ei(void) {
    ALOGD("_ZN15GyroCalibration9utilPow10Ei() called");
    return 0;
}

/* Demangled: GyroToMotionCore::utilSin(double) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore7utilSinEd(void) {
    ALOGD("_ZN16GyroToMotionCore7utilSinEd() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: GyroToMotionCore::setWorkingBuf(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore13setWorkingBufEPc(void) {
    ALOGD("_ZN16GyroToMotionCore13setWorkingBufEPc() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: GyroCalibration::updatePLTable(double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration13updatePLTableEPKdPd(void) {
    ALOGD("_ZN15GyroCalibration13updatePLTableEPKdPd() called");
    return 0;
}

/* Demangled: GyroCalibration::destroyInstance(GyroCalibration*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration15destroyInstanceEPS_(void) {
    ALOGD("_ZN15GyroCalibration15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: GyroToMotionCore::utilAbs(float) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore7utilAbsEf(void) {
    ALOGD("_ZN16GyroToMotionCore7utilAbsEf() called");
    return 0;
}

/* Demangled: GyroCalibration::saveLog(int, double, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration7saveLogEidPd(void) {
    ALOGD("_ZN15GyroCalibration7saveLogEidPd() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: GyroToMotionCore::integrateAR(int, double*, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11integrateAREiPddd(void) {
    ALOGD("_ZN16GyroToMotionCore11integrateAREiPddd() called");
    return 0;
}

/* Demangled: AppGyro::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro11getInstanceEv(void) {
    ALOGD("_ZN7AppGyro11getInstanceEv() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: GyroToMotionCore::utilSqrt_long(unsigned long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore13utilSqrt_longEmi(void) {
    ALOGD("_ZN16GyroToMotionCore13utilSqrt_longEmi() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCoreD2Ev(void) {
    ALOGD("_ZN16GyroToMotionCoreD2Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::updateGyroBias(double, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration14updateGyroBiasEdi(void) {
    ALOGD("_ZN15GyroCalibration14updateGyroBiasEdi() called");
    return 0;
}

/* Demangled: AppGyro::GyroInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro8GyroInitEPv(void) {
    ALOGD("_ZN7AppGyro8GyroInitEPv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getProcAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11getProcAddrEv(void) {
    ALOGD("_ZN16GyroToMotionCore11getProcAddrEv() called");
    return 0;
}

/* Exported Object: vtable for MTKGyro */
extern "C" __attribute__((visibility("default"))) void* _ZTV7MTKGyro = NULL;

/* Demangled: AppGyro::GyroSetProcInfo(GYRO_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro15GyroSetProcInfoEP25GYRO_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN7AppGyro15GyroSetProcInfoEP25GYRO_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: GyroCalibration::computeInfitesimalMapping(double*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration25computeInfitesimalMappingEPdiiii(void) {
    ALOGD("_ZN15GyroCalibration25computeInfitesimalMappingEPdiiii() called");
    return 0;
}

/* Demangled: GyroCalibration::doCalCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration10doCalCheckEv(void) {
    ALOGD("_ZN15GyroCalibration10doCalCheckEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCoreD1Ev(void) {
    ALOGD("_ZN16GyroToMotionCoreD1Ev() called");
    return 0;
}

/* Demangled: GyroToMotionCore::calibrateRotCenter(float&, float&) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore18calibrateRotCenterERfS0_(void) {
    ALOGD("_ZN16GyroToMotionCore18calibrateRotCenterERfS0_() called");
    return 0;
}

/* Demangled: AppGyro::~AppGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyroD1Ev(void) {
    ALOGD("_ZN7AppGyroD1Ev() called");
    return 0;
}

/* Demangled: GyroCalibration::getProcAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration11getProcAddrEv(void) {
    ALOGD("_ZN15GyroCalibration11getProcAddrEv() called");
    return 0;
}

/* Demangled: MTKGyro::~MTKGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyroD2Ev(void) {
    ALOGD("_ZN7MTKGyroD2Ev() called");
    return 0;
}

/* Demangled: AppGyro::AppGyro() */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyroC2Ev(void) {
    ALOGD("_ZN7AppGyroC2Ev() called");
    return 0;
}

/* Demangled: GyroToMotionCore::resetBaseGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore13resetBaseGridEv(void) {
    ALOGD("_ZN16GyroToMotionCore13resetBaseGridEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::calAffineTransform(float const*, float const*, float*, float*, int, bool*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore18calAffineTransformEPKfS1_PfS2_iPbS2_(void) {
    ALOGD("_ZN16GyroToMotionCore18calAffineTransformEPKfS1_PfS2_iPbS2_() called");
    return 0;
}

/* Demangled: GyroToMotionCore::destroyInstance(GyroToMotionCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN16GyroToMotionCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: MTKGyro::GyroFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7MTKGyro15GyroFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN7MTKGyro15GyroFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getLogBufAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore13getLogBufAddrEv(void) {
    ALOGD("_ZN16GyroToMotionCore13getLogBufAddrEv() called");
    return 0;
}

/* Demangled: AppGyro::GyroEmHandler(GYRO_CALIBRATION_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro13GyroEmHandlerEP30GYRO_CALIBRATION_RESULT_STRUCT(void) {
    ALOGD("_ZN7AppGyro13GyroEmHandlerEP30GYRO_CALIBRATION_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: GyroCalibration::utilSin(double) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration7utilSinEd(void) {
    ALOGD("_ZN15GyroCalibration7utilSinEd() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: GyroCalibration::~GyroCalibration() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibrationD2Ev(void) {
    ALOGD("_ZN15GyroCalibrationD2Ev() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: GyroCalibration::getResultAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration13getResultAddrEv(void) {
    ALOGD("_ZN15GyroCalibration13getResultAddrEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::GyroToMotionCoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore20GyroToMotionCoreMainEv(void) {
    ALOGD("_ZN16GyroToMotionCore20GyroToMotionCoreMainEv() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: AppGyro::GyroFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN7AppGyro15GyroFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN7AppGyro15GyroFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getCalInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore14getCalInfoAddrEv(void) {
    ALOGD("_ZN16GyroToMotionCore14getCalInfoAddrEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::getInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore11getInfoAddrEv(void) {
    ALOGD("_ZN16GyroToMotionCore11getInfoAddrEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::ExportBMGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore12ExportBMGridEv(void) {
    ALOGD("_ZN16GyroToMotionCore12ExportBMGridEv() called");
    return 0;
}

/* Demangled: GyroToMotionCore::utilCos(double) */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCore7utilCosEd(void) {
    ALOGD("_ZN16GyroToMotionCore7utilCosEd() called");
    return 0;
}

/* Demangled: GyroCalibration::reset() */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration5resetEv(void) {
    ALOGD("_ZN15GyroCalibration5resetEv() called");
    return 0;
}

/* Demangled: GyroCalibration::fallbackCheck(double, bool*) */
extern "C" __attribute__((visibility("default"))) int _ZN15GyroCalibration13fallbackCheckEdPb(void) {
    ALOGD("_ZN15GyroCalibration13fallbackCheckEdPb() called");
    return 0;
}

/* Demangled: GyroToMotionCore::GyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN16GyroToMotionCoreC2Ev(void) {
    ALOGD("_ZN16GyroToMotionCoreC2Ev() called");
    return 0;
}
