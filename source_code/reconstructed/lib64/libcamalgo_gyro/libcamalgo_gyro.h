/*
 * Reverse-Engineered ABI Specification for: libcamalgo.gyro.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.gyro.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_GYRO_H
#define BEGONIA_RE_LIBCAMALGO_GYRO_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN15GyroCalibration11getParaAddrEv */
/* Demangled: GyroCalibration::getParaAddr() */
int _ZN15GyroCalibration11getParaAddrEv(void);

/* Symbol: _ZN16GyroToMotionCoreC1Ev */
/* Demangled: GyroToMotionCore::GyroToMotionCore() */
int _ZN16GyroToMotionCoreC1Ev(void);

/* Symbol: _ZN15GyroCalibration9check_LMVEv */
/* Demangled: GyroCalibration::check_LMV() */
int _ZN15GyroCalibration9check_LMVEv(void);

/* Symbol: _ZN15GyroCalibration19calCalibrationParamEv */
/* Demangled: GyroCalibration::calCalibrationParam() */
int _ZN15GyroCalibration19calCalibrationParamEv(void);

/* Symbol: _ZN7MTKGyro8GyroInitEPv */
/* Demangled: MTKGyro::GyroInit(void*) */
int _ZN7MTKGyro8GyroInitEPv(void);

/* Symbol: _ZN16GyroToMotionCore15queryLogBufSizeEv */
/* Demangled: GyroToMotionCore::queryLogBufSize() */
int _ZN16GyroToMotionCore15queryLogBufSizeEv(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: _ZN15GyroCalibration13doEmGyroCheckEv */
/* Demangled: GyroCalibration::doEmGyroCheck() */
int _ZN15GyroCalibration13doEmGyroCheckEv(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN7AppGyro9GyroResetEv */
/* Demangled: AppGyro::GyroReset() */
int _ZN7AppGyro9GyroResetEv(void);

/* Symbol: _ZN16GyroToMotionCore10grid_to_mvEPKd */
/* Demangled: GyroToMotionCore::grid_to_mv(double const*) */
int _ZN16GyroToMotionCore10grid_to_mvEPKd(void);

/* Symbol: _ZN15GyroCalibration8utilSqrtEii */
/* Demangled: GyroCalibration::utilSqrt(int, int) */
int _ZN15GyroCalibration8utilSqrtEii(void);

/* Symbol: _ZN16GyroToMotionCore8utilSqrtEi */
/* Demangled: GyroToMotionCore::utilSqrt(int) */
int _ZN16GyroToMotionCore8utilSqrtEi(void);

/* Symbol: _ZN16GyroToMotionCore13getResultAddrEv */
/* Demangled: GyroToMotionCore::getResultAddr() */
int _ZN16GyroToMotionCore13getResultAddrEv(void);

/* Symbol: _ZN16GyroToMotionCoreD0Ev */
/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
int _ZN16GyroToMotionCoreD0Ev(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN7AppGyroC1Ev */
/* Demangled: AppGyro::AppGyro() */
int _ZN7AppGyroC1Ev(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN7AppGyroD2Ev */
/* Demangled: AppGyro::~AppGyro() */
int _ZN7AppGyroD2Ev(void);

/* Symbol: _ZN7MTKGyro9GyroResetEv */
/* Demangled: MTKGyro::GyroReset() */
int _ZN7MTKGyro9GyroResetEv(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN15GyroCalibration6interpEPdPKd */
/* Demangled: GyroCalibration::interp(double*, double const*) */
int _ZN15GyroCalibration6interpEPdPKd(void);

/* Symbol: _ZN7AppGyro15destroyInstanceEP7MTKGyro */
/* Demangled: AppGyro::destroyInstance(MTKGyro*) */
int _ZN7AppGyro15destroyInstanceEP7MTKGyro(void);

/* Symbol: _ZN15GyroCalibration12restoreParamEv */
/* Demangled: GyroCalibration::restoreParam() */
int _ZN15GyroCalibration12restoreParamEv(void);

/* Symbol: _ZN15GyroCalibration19GyroCalibrationMainEv */
/* Demangled: GyroCalibration::GyroCalibrationMain() */
int _ZN15GyroCalibration19GyroCalibrationMainEv(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZTV16GyroToMotionCore */
/* Demangled: vtable for GyroToMotionCore */
extern void* _ZTV16GyroToMotionCore;

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN7AppGyro26GyroOutputDefaultParameterEi */
/* Demangled: AppGyro::GyroOutputDefaultParameter(int) */
int _ZN7AppGyro26GyroOutputDefaultParameterEi(void);

/* Symbol: _ZN16GyroToMotionCore15calFOVAlignGridEiiP10COORDINATE */
/* Demangled: GyroToMotionCore::calFOVAlignGrid(int, int, COORDINATE*) */
int _ZN16GyroToMotionCore15calFOVAlignGridEiiP10COORDINATE(void);

/* Symbol: _ZTV15GyroCalibration */
/* Demangled: vtable for GyroCalibration */
extern void* _ZTV15GyroCalibration;

/* Symbol: _ZN16GyroToMotionCore10utilCramerEffffffRfS0_ */
/* Demangled: GyroToMotionCore::utilCramer(float, float, float, float, float, float, float&, float&) */
int _ZN16GyroToMotionCore10utilCramerEffffffRfS0_(void);

/* Symbol: _ZN15GyroCalibration7getTimeEv */
/* Demangled: GyroCalibration::getTime() */
int _ZN15GyroCalibration7getTimeEv(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN15GyroCalibrationC2Ev */
/* Demangled: GyroCalibration::GyroCalibration() */
int _ZN15GyroCalibrationC2Ev(void);

/* Symbol: _ZN15GyroCalibrationD1Ev */
/* Demangled: GyroCalibration::~GyroCalibration() */
int _ZN15GyroCalibrationD1Ev(void);

/* Symbol: _ZN15GyroCalibration10matProductEPdPKdS2_iii */
/* Demangled: GyroCalibration::matProduct(double*, double const*, double const*, int, int, int) */
int _ZN15GyroCalibration10matProductEPdPKdS2_iii(void);

/* Symbol: _ZN15GyroCalibration7utilCosEd */
/* Demangled: GyroCalibration::utilCos(double) */
int _ZN15GyroCalibration7utilCosEd(void);

/* Symbol: _ZN16GyroToMotionCore10matProductEPdPKfPKdiii */
/* Demangled: GyroToMotionCore::matProduct(double*, float const*, double const*, int, int, int) */
int _ZN16GyroToMotionCore10matProductEPdPKfPKdiii(void);

/* Symbol: _ZN15GyroCalibration11getInfoAddrEv */
/* Demangled: GyroCalibration::getInfoAddr() */
int _ZN15GyroCalibration11getInfoAddrEv(void);

/* Symbol: _ZN15GyroCalibration22reprojectMotionVectorsERdiPKiS2_ */
/* Demangled: GyroCalibration::reprojectMotionVectors(double&, int, int const*, int const*) */
int _ZN15GyroCalibration22reprojectMotionVectorsERdiPKiS2_(void);

/* Symbol: _ZN16GyroToMotionCore11getInstanceEv */
/* Demangled: GyroToMotionCore::getInstance() */
int _ZN16GyroToMotionCore11getInstanceEv(void);

/* Symbol: _ZN16GyroToMotionCore10matProductEPdPKdS2_iii */
/* Demangled: GyroToMotionCore::matProduct(double*, double const*, double const*, int, int, int) */
int _ZN16GyroToMotionCore10matProductEPdPKdS2_iii(void);

/* Symbol: _ZN15GyroCalibration10preprocessEv */
/* Demangled: GyroCalibration::preprocess() */
int _ZN15GyroCalibration10preprocessEv(void);

/* Symbol: _ZN7MTKGyroD0Ev */
/* Demangled: MTKGyro::~MTKGyro() */
int _ZN7MTKGyroD0Ev(void);

/* Symbol: _ZN16GyroToMotionCore10preprocessEv */
/* Demangled: GyroToMotionCore::preprocess() */
int _ZN16GyroToMotionCore10preprocessEv(void);

/* Symbol: _ZN16GyroToMotionCore20GyroToMotionCoreInitEv */
/* Demangled: GyroToMotionCore::GyroToMotionCoreInit() */
int _ZN16GyroToMotionCore20GyroToMotionCoreInitEv(void);

/* Symbol: _ZN15GyroCalibration7evalObjEv */
/* Demangled: GyroCalibration::evalObj() */
int _ZN15GyroCalibration7evalObjEv(void);

/* Symbol: _ZN7MTKGyro14createInstanceEv */
/* Demangled: MTKGyro::createInstance() */
int _ZN7MTKGyro14createInstanceEv(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN15GyroCalibration15updateIntrinsicEPKdPdS2_ */
/* Demangled: GyroCalibration::updateIntrinsic(double const*, double*, double*) */
int _ZN15GyroCalibration15updateIntrinsicEPKdPdS2_(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN16GyroToMotionCore11calBaseGridEv */
/* Demangled: GyroToMotionCore::calBaseGrid() */
int _ZN16GyroToMotionCore11calBaseGridEv(void);

/* Symbol: _ZN15GyroCalibration10setInitialEv */
/* Demangled: GyroCalibration::setInitial() */
int _ZN15GyroCalibration10setInitialEv(void);

/* Symbol: _ZN7MTKGyro8GyroMainEv */
/* Demangled: MTKGyro::GyroMain() */
int _ZN7MTKGyro8GyroMainEv(void);

/* Symbol: _ZN16GyroToMotionCore11memoryShiftEv */
/* Demangled: GyroToMotionCore::memoryShift() */
int _ZN16GyroToMotionCore11memoryShiftEv(void);

/* Symbol: _ZN7AppGyroD0Ev */
/* Demangled: AppGyro::~AppGyro() */
int _ZN7AppGyroD0Ev(void);

/* Symbol: _ZN15GyroCalibration11getInstanceEv */
/* Demangled: GyroCalibration::getInstance() */
int _ZN15GyroCalibration11getInstanceEv(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN16GyroToMotionCore15mvInterpolationEPdP10COORDINATE */
/* Demangled: GyroToMotionCore::mvInterpolation(double*, COORDINATE*) */
int _ZN16GyroToMotionCore15mvInterpolationEPdP10COORDINATE(void);

/* Symbol: _ZN7MTKGyro15destroyInstanceEPS_ */
/* Demangled: MTKGyro::destroyInstance(MTKGyro*) */
int _ZN7MTKGyro15destroyInstanceEPS_(void);

/* Symbol: _ZN7AppGyro8GyroMainEv */
/* Demangled: AppGyro::GyroMain() */
int _ZN7AppGyro8GyroMainEv(void);

/* Symbol: _ZN15GyroCalibrationC1Ev */
/* Demangled: GyroCalibration::GyroCalibration() */
int _ZN15GyroCalibrationC1Ev(void);

/* Symbol: _ZTV7AppGyro */
/* Demangled: vtable for AppGyro */
extern void* _ZTV7AppGyro;

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN15GyroCalibrationD0Ev */
/* Demangled: GyroCalibration::~GyroCalibration() */
int _ZN15GyroCalibrationD0Ev(void);

/* Symbol: _ZN15GyroCalibration13utilSqrt_longEmi */
/* Demangled: GyroCalibration::utilSqrt_long(unsigned long, int) */
int _ZN15GyroCalibration13utilSqrt_longEmi(void);

/* Symbol: _ZN15GyroCalibration10getLogAddrEv */
/* Demangled: GyroCalibration::getLogAddr() */
int _ZN15GyroCalibration10getLogAddrEv(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN15GyroCalibration9utilPow10Ei */
/* Demangled: GyroCalibration::utilPow10(int) */
int _ZN15GyroCalibration9utilPow10Ei(void);

/* Symbol: _ZN16GyroToMotionCore7utilSinEd */
/* Demangled: GyroToMotionCore::utilSin(double) */
int _ZN16GyroToMotionCore7utilSinEd(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN16GyroToMotionCore13setWorkingBufEPc */
/* Demangled: GyroToMotionCore::setWorkingBuf(char*) */
int _ZN16GyroToMotionCore13setWorkingBufEPc(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN15GyroCalibration13updatePLTableEPKdPd */
/* Demangled: GyroCalibration::updatePLTable(double const*, double*) */
int _ZN15GyroCalibration13updatePLTableEPKdPd(void);

/* Symbol: _ZN15GyroCalibration15destroyInstanceEPS_ */
/* Demangled: GyroCalibration::destroyInstance(GyroCalibration*) */
int _ZN15GyroCalibration15destroyInstanceEPS_(void);

/* Symbol: _ZN16GyroToMotionCore7utilAbsEf */
/* Demangled: GyroToMotionCore::utilAbs(float) */
int _ZN16GyroToMotionCore7utilAbsEf(void);

/* Symbol: _ZN15GyroCalibration7saveLogEidPd */
/* Demangled: GyroCalibration::saveLog(int, double, double*) */
int _ZN15GyroCalibration7saveLogEidPd(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: _ZN16GyroToMotionCore11integrateAREiPddd */
/* Demangled: GyroToMotionCore::integrateAR(int, double*, double, double) */
int _ZN16GyroToMotionCore11integrateAREiPddd(void);

/* Symbol: _ZN7AppGyro11getInstanceEv */
/* Demangled: AppGyro::getInstance() */
int _ZN7AppGyro11getInstanceEv(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _ZN16GyroToMotionCore13utilSqrt_longEmi */
/* Demangled: GyroToMotionCore::utilSqrt_long(unsigned long, int) */
int _ZN16GyroToMotionCore13utilSqrt_longEmi(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN16GyroToMotionCoreD2Ev */
/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
int _ZN16GyroToMotionCoreD2Ev(void);

/* Symbol: _ZN15GyroCalibration14updateGyroBiasEdi */
/* Demangled: GyroCalibration::updateGyroBias(double, int) */
int _ZN15GyroCalibration14updateGyroBiasEdi(void);

/* Symbol: _ZN7AppGyro8GyroInitEPv */
/* Demangled: AppGyro::GyroInit(void*) */
int _ZN7AppGyro8GyroInitEPv(void);

/* Symbol: _ZN16GyroToMotionCore11getProcAddrEv */
/* Demangled: GyroToMotionCore::getProcAddr() */
int _ZN16GyroToMotionCore11getProcAddrEv(void);

/* Symbol: _ZTV7MTKGyro */
/* Demangled: vtable for MTKGyro */
extern void* _ZTV7MTKGyro;

/* Symbol: _ZN7AppGyro15GyroSetProcInfoEP25GYRO_SET_PROC_INFO_STRUCT */
/* Demangled: AppGyro::GyroSetProcInfo(GYRO_SET_PROC_INFO_STRUCT*) */
int _ZN7AppGyro15GyroSetProcInfoEP25GYRO_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZN15GyroCalibration25computeInfitesimalMappingEPdiiii */
/* Demangled: GyroCalibration::computeInfitesimalMapping(double*, int, int, int, int) */
int _ZN15GyroCalibration25computeInfitesimalMappingEPdiiii(void);

/* Symbol: _ZN15GyroCalibration10doCalCheckEv */
/* Demangled: GyroCalibration::doCalCheck() */
int _ZN15GyroCalibration10doCalCheckEv(void);

/* Symbol: _ZN16GyroToMotionCoreD1Ev */
/* Demangled: GyroToMotionCore::~GyroToMotionCore() */
int _ZN16GyroToMotionCoreD1Ev(void);

/* Symbol: _ZN16GyroToMotionCore18calibrateRotCenterERfS0_ */
/* Demangled: GyroToMotionCore::calibrateRotCenter(float&, float&) */
int _ZN16GyroToMotionCore18calibrateRotCenterERfS0_(void);

/* Symbol: _ZN7AppGyroD1Ev */
/* Demangled: AppGyro::~AppGyro() */
int _ZN7AppGyroD1Ev(void);

/* Symbol: _ZN15GyroCalibration11getProcAddrEv */
/* Demangled: GyroCalibration::getProcAddr() */
int _ZN15GyroCalibration11getProcAddrEv(void);

/* Symbol: _ZN7MTKGyroD2Ev */
/* Demangled: MTKGyro::~MTKGyro() */
int _ZN7MTKGyroD2Ev(void);

/* Symbol: _ZN7AppGyroC2Ev */
/* Demangled: AppGyro::AppGyro() */
int _ZN7AppGyroC2Ev(void);

/* Symbol: _ZN16GyroToMotionCore13resetBaseGridEv */
/* Demangled: GyroToMotionCore::resetBaseGrid() */
int _ZN16GyroToMotionCore13resetBaseGridEv(void);

/* Symbol: _ZN16GyroToMotionCore18calAffineTransformEPKfS1_PfS2_iPbS2_ */
/* Demangled: GyroToMotionCore::calAffineTransform(float const*, float const*, float*, float*, int, bool*, float*) */
int _ZN16GyroToMotionCore18calAffineTransformEPKfS1_PfS2_iPbS2_(void);

/* Symbol: _ZN16GyroToMotionCore15destroyInstanceEPS_ */
/* Demangled: GyroToMotionCore::destroyInstance(GyroToMotionCore*) */
int _ZN16GyroToMotionCore15destroyInstanceEPS_(void);

/* Symbol: _ZN7MTKGyro15GyroFeatureCtrlEjPvS0_ */
/* Demangled: MTKGyro::GyroFeatureCtrl(unsigned int, void*, void*) */
int _ZN7MTKGyro15GyroFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN16GyroToMotionCore13getLogBufAddrEv */
/* Demangled: GyroToMotionCore::getLogBufAddr() */
int _ZN16GyroToMotionCore13getLogBufAddrEv(void);

/* Symbol: _ZN7AppGyro13GyroEmHandlerEP30GYRO_CALIBRATION_RESULT_STRUCT */
/* Demangled: AppGyro::GyroEmHandler(GYRO_CALIBRATION_RESULT_STRUCT*) */
int _ZN7AppGyro13GyroEmHandlerEP30GYRO_CALIBRATION_RESULT_STRUCT(void);

/* Symbol: _ZN15GyroCalibration7utilSinEd */
/* Demangled: GyroCalibration::utilSin(double) */
int _ZN15GyroCalibration7utilSinEd(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZN15GyroCalibrationD2Ev */
/* Demangled: GyroCalibration::~GyroCalibration() */
int _ZN15GyroCalibrationD2Ev(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _ZN15GyroCalibration13getResultAddrEv */
/* Demangled: GyroCalibration::getResultAddr() */
int _ZN15GyroCalibration13getResultAddrEv(void);

/* Symbol: _ZN16GyroToMotionCore20GyroToMotionCoreMainEv */
/* Demangled: GyroToMotionCore::GyroToMotionCoreMain() */
int _ZN16GyroToMotionCore20GyroToMotionCoreMainEv(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN7AppGyro15GyroFeatureCtrlEjPvS0_ */
/* Demangled: AppGyro::GyroFeatureCtrl(unsigned int, void*, void*) */
int _ZN7AppGyro15GyroFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN16GyroToMotionCore14getCalInfoAddrEv */
/* Demangled: GyroToMotionCore::getCalInfoAddr() */
int _ZN16GyroToMotionCore14getCalInfoAddrEv(void);

/* Symbol: _ZN16GyroToMotionCore11getInfoAddrEv */
/* Demangled: GyroToMotionCore::getInfoAddr() */
int _ZN16GyroToMotionCore11getInfoAddrEv(void);

/* Symbol: _ZN16GyroToMotionCore12ExportBMGridEv */
/* Demangled: GyroToMotionCore::ExportBMGrid() */
int _ZN16GyroToMotionCore12ExportBMGridEv(void);

/* Symbol: _ZN16GyroToMotionCore7utilCosEd */
/* Demangled: GyroToMotionCore::utilCos(double) */
int _ZN16GyroToMotionCore7utilCosEd(void);

/* Symbol: _ZN15GyroCalibration5resetEv */
/* Demangled: GyroCalibration::reset() */
int _ZN15GyroCalibration5resetEv(void);

/* Symbol: _ZN15GyroCalibration13fallbackCheckEdPb */
/* Demangled: GyroCalibration::fallbackCheck(double, bool*) */
int _ZN15GyroCalibration13fallbackCheckEdPb(void);

/* Symbol: _ZN16GyroToMotionCoreC2Ev */
/* Demangled: GyroToMotionCore::GyroToMotionCore() */
int _ZN16GyroToMotionCoreC2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_GYRO_H */
