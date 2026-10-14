/*
 * Reverse-Engineered Source for: libcamalgo.3dnr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_3dnr"

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
#include "libcamalgo_3dnr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AppTnr::TnrInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr7TnrInitEPv(void) {
    ALOGD("_ZN6AppTnr7TnrInitEPv() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetGyroInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore22TnrCoreGetGyroInfoAddrEv(void) {
    ALOGD("_ZN7TnrCore22TnrCoreGetGyroInfoAddrEv() called");
    return 0;
}

/* Demangled: TnrCore::get_one_frame_mv(unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore16get_one_frame_mvEPhii(void) {
    ALOGD("_ZN7TnrCore16get_one_frame_mvEPhii() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetLmvInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore21TnrCoreGetLmvInfoAddrEv(void) {
    ALOGD("_ZN7TnrCore21TnrCoreGetLmvInfoAddrEv() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: MTKTnr::TnrReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr8TnrResetEv(void) {
    ALOGD("_ZN6MTKTnr8TnrResetEv() called");
    return 0;
}

/* Demangled: TnrCore::get_one_frame_mv_rsc(unsigned char*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore20get_one_frame_mv_rscEPhS0_ii(void) {
    ALOGD("_ZN7TnrCore20get_one_frame_mv_rscEPhS0_ii() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreSetWorkingBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore20TnrCoreSetWorkingBufEPh(void) {
    ALOGD("_ZN7TnrCore20TnrCoreSetWorkingBufEPh() called");
    return 0;
}

/* Demangled: TnrCore::affine(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore6affineEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN7TnrCore6affineEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: AppTnr::SaveParamToFile(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr15SaveParamToFileEjPv(void) {
    ALOGD("_ZN6AppTnr15SaveParamToFileEjPv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

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

/* Demangled: AppTnr::TnrGetResult(TNR_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr12TnrGetResultEP22TNR_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN6AppTnr12TnrGetResultEP22TNR_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Exported Object: vtable for MTKTnr */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKTnr = NULL;

/* Demangled: TnrCore::TnrCoreSaveLog(TNR_CORE_SAVE_LOG_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore14TnrCoreSaveLogEP24TNR_CORE_SAVE_LOG_STRUCT(void) {
    ALOGD("_ZN7TnrCore14TnrCoreSaveLogEP24TNR_CORE_SAVE_LOG_STRUCT() called");
    return 0;
}

/* Demangled: TnrCore::MemoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore11MemoryShiftEv(void) {
    ALOGD("_ZN7TnrCore11MemoryShiftEv() called");
    return 0;
}

/* Demangled: MTKTnr::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr14createInstanceEv(void) {
    ALOGD("_ZN6MTKTnr14createInstanceEv() called");
    return 0;
}

/* Demangled: AppTnr::AppTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnrC1Ev(void) {
    ALOGD("_ZN6AppTnrC1Ev() called");
    return 0;
}

/* Demangled: TnrCore::CalcHistogram(float (*) [6], int*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore13CalcHistogramEPA6_fPiiS2_PfS3_(void) {
    ALOGD("_ZN7TnrCore13CalcHistogramEPA6_fPiiS2_PfS3_() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetFinalCoeffAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore24TnrCoreGetFinalCoeffAddrEv(void) {
    ALOGD("_ZN7TnrCore24TnrCoreGetFinalCoeffAddrEv() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: TnrCore::TnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCoreC1Ev(void) {
    ALOGD("_ZN7TnrCoreC1Ev() called");
    return 0;
}

/* Demangled: AppTnr::checkProperty(TNR_PROPERTY_PARA_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr13checkPropertyEP24TNR_PROPERTY_PARA_STRUCT(void) {
    ALOGD("_ZN6AppTnr13checkPropertyEP24TNR_PROPERTY_PARA_STRUCT() called");
    return 0;
}

/* Demangled: TnrCore::GetAffineCoef_BG() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore16GetAffineCoef_BGEv(void) {
    ALOGD("_ZN7TnrCore16GetAffineCoef_BGEv() called");
    return 0;
}

/* Demangled: TnrCore::ForegroundCheck() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore15ForegroundCheckEv(void) {
    ALOGD("_ZN7TnrCore15ForegroundCheckEv() called");
    return 0;
}

/* Exported Object: vtable for AppTnr */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppTnr = NULL;

/* Demangled: TnrCore::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore12affine_finalEPKfS1_PfS2_iPiS2_S2_i(void) {
    ALOGD("_ZN7TnrCore12affine_finalEPKfS1_PfS2_iPiS2_S2_i() called");
    return 0;
}

/* Demangled: TnrCore::GisHomo(float const*, float const*, float*, float*, int, int, int, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore7GisHomoEPKfS1_PfS2_iiiiPiS2_(void) {
    ALOGD("_ZN7TnrCore7GisHomoEPKfS1_PfS2_iiiiPiS2_() called");
    return 0;
}

/* Demangled: TnrCore::AdjustImgGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore12AdjustImgGmvEv(void) {
    ALOGD("_ZN7TnrCore12AdjustImgGmvEv() called");
    return 0;
}

/* Demangled: MTKTnr::TnrInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr7TnrInitEPv(void) {
    ALOGD("_ZN6MTKTnr7TnrInitEPv() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetLogBufAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore20TnrCoreGetLogBufAddrEv(void) {
    ALOGD("_ZN7TnrCore20TnrCoreGetLogBufAddrEv() called");
    return 0;
}

/* Demangled: TnrCore::AdjustLmvGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore12AdjustLmvGmvEv(void) {
    ALOGD("_ZN7TnrCore12AdjustLmvGmvEv() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: AppTnr::destroyInstance(MTKTnr*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr15destroyInstanceEP6MTKTnr(void) {
    ALOGD("_ZN6AppTnr15destroyInstanceEP6MTKTnr() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: TnrCore::destroyInstance(TnrCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN7TnrCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: TnrCore::CalcGmvImg() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore10CalcGmvImgEv(void) {
    ALOGD("_ZN7TnrCore10CalcGmvImgEv() called");
    return 0;
}

/* Demangled: AppTnr::~AppTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnrD1Ev(void) {
    ALOGD("_ZN6AppTnrD1Ev() called");
    return 0;
}

/* Demangled: TnrCore::translation(float const*, float const*, float*, float*, int, int*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore11translationEPKfS1_PfS2_iPiS2_(void) {
    ALOGD("_ZN7TnrCore11translationEPKfS1_PfS2_iPiS2_() called");
    return 0;
}

/* Demangled: TnrCore::EISinvf(int, int, double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore7EISinvfEiiPKd(void) {
    ALOGD("_ZN7TnrCore7EISinvfEiiPKd() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreInitProcInfo() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore19TnrCoreInitProcInfoEv(void) {
    ALOGD("_ZN7TnrCore19TnrCoreInitProcInfoEv() called");
    return 0;
}

/* Demangled: MTKTnr::TnrMain(TNR_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN6MTKTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT() called");
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

/* Demangled: TnrCore::GetGyroHomoCoef(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore15GetGyroHomoCoefEii(void) {
    ALOGD("_ZN7TnrCore15GetGyroHomoCoefEii() called");
    return 0;
}

/* Demangled: AppTnr::AppTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnrC2Ev(void) {
    ALOGD("_ZN6AppTnrC2Ev() called");
    return 0;
}

/* Demangled: TnrCore::CalcTnrGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore10CalcTnrGmvEv(void) {
    ALOGD("_ZN7TnrCore10CalcTnrGmvEv() called");
    return 0;
}

/* Demangled: AppTnr::TnrFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr14TnrFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6AppTnr14TnrFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: TnrCore::~TnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCoreD2Ev(void) {
    ALOGD("_ZN7TnrCoreD2Ev() called");
    return 0;
}

/* Demangled: TnrCore::EISinverseMatrix4x4(double const*, double*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore19EISinverseMatrix4x4EPKdPd(void) {
    ALOGD("_ZN7TnrCore19EISinverseMatrix4x4EPKdPd() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: TnrCore::TnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCoreC2Ev(void) {
    ALOGD("_ZN7TnrCoreC2Ev() called");
    return 0;
}

/* Demangled: AppTnr::TnrReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr8TnrResetEv(void) {
    ALOGD("_ZN6AppTnr8TnrResetEv() called");
    return 0;
}

/* Demangled: TnrCore::GetAffineCoef() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore13GetAffineCoefEv(void) {
    ALOGD("_ZN7TnrCore13GetAffineCoefEv() called");
    return 0;
}

/* Demangled: AppTnr::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr11getInstanceEv(void) {
    ALOGD("_ZN6AppTnr11getInstanceEv() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: TnrCore::~TnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCoreD0Ev(void) {
    ALOGD("_ZN7TnrCoreD0Ev() called");
    return 0;
}

/* Demangled: TnrCore::affine_translation(float const*, float const*, float*, float*, int, int*, float*, float*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore18affine_translationEPKfS1_PfS2_iPiS2_S2_(void) {
    ALOGD("_ZN7TnrCore18affine_translationEPKfS1_PfS2_iPiS2_S2_() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: AppTnr::TnrSetProcInfo(TNR_SET_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr14TnrSetProcInfoEP24TNR_SET_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN6AppTnr14TnrSetProcInfoEP24TNR_SET_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: AppTnr::SetInputFromFile(unsigned int, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr16SetInputFromFileEjPv(void) {
    ALOGD("_ZN6AppTnr16SetInputFromFileEjPv() called");
    return 0;
}

/* Demangled: TnrCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore11getInstanceEv(void) {
    ALOGD("_ZN7TnrCore11getInstanceEv() called");
    return 0;
}

/* Demangled: TnrCore::GetAverageShake() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore15GetAverageShakeEv(void) {
    ALOGD("_ZN7TnrCore15GetAverageShakeEv() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreQueryWorkingBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore26TnrCoreQueryWorkingBufSizeEv(void) {
    ALOGD("_ZN7TnrCore26TnrCoreQueryWorkingBufSizeEv() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: TnrCore::HybridGmv() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore9HybridGmvEv(void) {
    ALOGD("_ZN7TnrCore9HybridGmvEv() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetTuningParaAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore24TnrCoreGetTuningParaAddrEv(void) {
    ALOGD("_ZN7TnrCore24TnrCoreGetTuningParaAddrEv() called");
    return 0;
}

/* Exported Object: vtable for TnrCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV7TnrCore = NULL;

/* Demangled: MTKTnr::TnrFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr14TnrFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKTnr14TnrFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: AppTnr::~AppTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnrD2Ev(void) {
    ALOGD("_ZN6AppTnrD2Ev() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreGetProcInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore22TnrCoreGetProcInfoAddrEv(void) {
    ALOGD("_ZN7TnrCore22TnrCoreGetProcInfoAddrEv() called");
    return 0;
}

/* Demangled: MTKTnr::~MTKTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnrD0Ev(void) {
    ALOGD("_ZN6MTKTnrD0Ev() called");
    return 0;
}

/* Demangled: MTKTnr::destroyInstance(MTKTnr*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnr15destroyInstanceEPS_(void) {
    ALOGD("_ZN6MTKTnr15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: TnrCore::MotionHistogramAnalysis() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore23MotionHistogramAnalysisEv(void) {
    ALOGD("_ZN7TnrCore23MotionHistogramAnalysisEv() called");
    return 0;
}

/* Demangled: AppTnr::TnrMain(TNR_RESULT_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT(void) {
    ALOGD("_ZN6AppTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore11TnrCoreMainEv(void) {
    ALOGD("_ZN7TnrCore11TnrCoreMainEv() called");
    return 0;
}

/* Demangled: MTKTnr::~MTKTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTnrD2Ev(void) {
    ALOGD("_ZN6MTKTnrD2Ev() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: TnrCore::ForegroundTrace() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore15ForegroundTraceEv(void) {
    ALOGD("_ZN7TnrCore15ForegroundTraceEv() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: AppTnr::~AppTnr() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTnrD0Ev(void) {
    ALOGD("_ZN6AppTnrD0Ev() called");
    return 0;
}

/* Demangled: TnrCore::~TnrCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCoreD1Ev(void) {
    ALOGD("_ZN7TnrCoreD1Ev() called");
    return 0;
}

/* Demangled: TnrCore::TnrCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore12TnrCoreResetEv(void) {
    ALOGD("_ZN7TnrCore12TnrCoreResetEv() called");
    return 0;
}

/* Demangled: TnrCore::GetAffineCoef2() */
extern "C" __attribute__((visibility("default"))) int _ZN7TnrCore14GetAffineCoef2Ev(void) {
    ALOGD("_ZN7TnrCore14GetAffineCoef2Ev() called");
    return 0;
}
