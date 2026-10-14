/*
 * Reverse-Engineered ABI Specification for: libcamalgo.3dnr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.3dnr.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_3DNR_H
#define BEGONIA_RE_LIBCAMALGO_3DNR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6AppTnr7TnrInitEPv */
/* Demangled: AppTnr::TnrInit(void*) */
int _ZN6AppTnr7TnrInitEPv(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN7TnrCore22TnrCoreGetGyroInfoAddrEv */
/* Demangled: TnrCore::TnrCoreGetGyroInfoAddr() */
int _ZN7TnrCore22TnrCoreGetGyroInfoAddrEv(void);

/* Symbol: _ZN7TnrCore16get_one_frame_mvEPhii */
/* Demangled: TnrCore::get_one_frame_mv(unsigned char*, int, int) */
int _ZN7TnrCore16get_one_frame_mvEPhii(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN7TnrCore21TnrCoreGetLmvInfoAddrEv */
/* Demangled: TnrCore::TnrCoreGetLmvInfoAddr() */
int _ZN7TnrCore21TnrCoreGetLmvInfoAddrEv(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN6MTKTnr8TnrResetEv */
/* Demangled: MTKTnr::TnrReset() */
int _ZN6MTKTnr8TnrResetEv(void);

/* Symbol: _ZN7TnrCore20get_one_frame_mv_rscEPhS0_ii */
/* Demangled: TnrCore::get_one_frame_mv_rsc(unsigned char*, unsigned char*, int, int) */
int _ZN7TnrCore20get_one_frame_mv_rscEPhS0_ii(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN7TnrCore20TnrCoreSetWorkingBufEPh */
/* Demangled: TnrCore::TnrCoreSetWorkingBuf(unsigned char*) */
int _ZN7TnrCore20TnrCoreSetWorkingBufEPh(void);

/* Symbol: _ZN7TnrCore6affineEPKfS1_PfS2_iPiS2_ */
/* Demangled: TnrCore::affine(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN7TnrCore6affineEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN6AppTnr15SaveParamToFileEjPv */
/* Demangled: AppTnr::SaveParamToFile(unsigned int, void*) */
int _ZN6AppTnr15SaveParamToFileEjPv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _ZN6AppTnr12TnrGetResultEP22TNR_RESULT_INFO_STRUCT */
/* Demangled: AppTnr::TnrGetResult(TNR_RESULT_INFO_STRUCT*) */
int _ZN6AppTnr12TnrGetResultEP22TNR_RESULT_INFO_STRUCT(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZTV6MTKTnr */
/* Demangled: vtable for MTKTnr */
extern void* _ZTV6MTKTnr;

/* Symbol: _ZN7TnrCore14TnrCoreSaveLogEP24TNR_CORE_SAVE_LOG_STRUCT */
/* Demangled: TnrCore::TnrCoreSaveLog(TNR_CORE_SAVE_LOG_STRUCT*) */
int _ZN7TnrCore14TnrCoreSaveLogEP24TNR_CORE_SAVE_LOG_STRUCT(void);

/* Symbol: _ZN7TnrCore11MemoryShiftEv */
/* Demangled: TnrCore::MemoryShift() */
int _ZN7TnrCore11MemoryShiftEv(void);

/* Symbol: _ZN6MTKTnr14createInstanceEv */
/* Demangled: MTKTnr::createInstance() */
int _ZN6MTKTnr14createInstanceEv(void);

/* Symbol: _ZN6AppTnrC1Ev */
/* Demangled: AppTnr::AppTnr() */
int _ZN6AppTnrC1Ev(void);

/* Symbol: _ZN7TnrCore13CalcHistogramEPA6_fPiiS2_PfS3_ */
/* Demangled: TnrCore::CalcHistogram(float (*) [6], int*, int, int*, float*, float*) */
int _ZN7TnrCore13CalcHistogramEPA6_fPiiS2_PfS3_(void);

/* Symbol: _ZN7TnrCore24TnrCoreGetFinalCoeffAddrEv */
/* Demangled: TnrCore::TnrCoreGetFinalCoeffAddr() */
int _ZN7TnrCore24TnrCoreGetFinalCoeffAddrEv(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN7TnrCoreC1Ev */
/* Demangled: TnrCore::TnrCore() */
int _ZN7TnrCoreC1Ev(void);

/* Symbol: _ZN6AppTnr13checkPropertyEP24TNR_PROPERTY_PARA_STRUCT */
/* Demangled: AppTnr::checkProperty(TNR_PROPERTY_PARA_STRUCT*) */
int _ZN6AppTnr13checkPropertyEP24TNR_PROPERTY_PARA_STRUCT(void);

/* Symbol: _ZN7TnrCore16GetAffineCoef_BGEv */
/* Demangled: TnrCore::GetAffineCoef_BG() */
int _ZN7TnrCore16GetAffineCoef_BGEv(void);

/* Symbol: _ZN7TnrCore15ForegroundCheckEv */
/* Demangled: TnrCore::ForegroundCheck() */
int _ZN7TnrCore15ForegroundCheckEv(void);

/* Symbol: _ZTV6AppTnr */
/* Demangled: vtable for AppTnr */
extern void* _ZTV6AppTnr;

/* Symbol: _ZN7TnrCore12affine_finalEPKfS1_PfS2_iPiS2_S2_i */
/* Demangled: TnrCore::affine_final(float const*, float const*, float*, float*, int, int*, float*, float*, int) */
int _ZN7TnrCore12affine_finalEPKfS1_PfS2_iPiS2_S2_i(void);

/* Symbol: _ZN7TnrCore7GisHomoEPKfS1_PfS2_iiiiPiS2_ */
/* Demangled: TnrCore::GisHomo(float const*, float const*, float*, float*, int, int, int, int, int*, float*) */
int _ZN7TnrCore7GisHomoEPKfS1_PfS2_iiiiPiS2_(void);

/* Symbol: _ZN7TnrCore12AdjustImgGmvEv */
/* Demangled: TnrCore::AdjustImgGmv() */
int _ZN7TnrCore12AdjustImgGmvEv(void);

/* Symbol: _ZN6MTKTnr7TnrInitEPv */
/* Demangled: MTKTnr::TnrInit(void*) */
int _ZN6MTKTnr7TnrInitEPv(void);

/* Symbol: _ZN7TnrCore20TnrCoreGetLogBufAddrEv */
/* Demangled: TnrCore::TnrCoreGetLogBufAddr() */
int _ZN7TnrCore20TnrCoreGetLogBufAddrEv(void);

/* Symbol: _ZN7TnrCore12AdjustLmvGmvEv */
/* Demangled: TnrCore::AdjustLmvGmv() */
int _ZN7TnrCore12AdjustLmvGmvEv(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: _ZN6AppTnr15destroyInstanceEP6MTKTnr */
/* Demangled: AppTnr::destroyInstance(MTKTnr*) */
int _ZN6AppTnr15destroyInstanceEP6MTKTnr(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN7TnrCore15destroyInstanceEPS_ */
/* Demangled: TnrCore::destroyInstance(TnrCore*) */
int _ZN7TnrCore15destroyInstanceEPS_(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN7TnrCore10CalcGmvImgEv */
/* Demangled: TnrCore::CalcGmvImg() */
int _ZN7TnrCore10CalcGmvImgEv(void);

/* Symbol: _ZN6AppTnrD1Ev */
/* Demangled: AppTnr::~AppTnr() */
int _ZN6AppTnrD1Ev(void);

/* Symbol: _ZN7TnrCore11translationEPKfS1_PfS2_iPiS2_ */
/* Demangled: TnrCore::translation(float const*, float const*, float*, float*, int, int*, float*) */
int _ZN7TnrCore11translationEPKfS1_PfS2_iPiS2_(void);

/* Symbol: _ZN7TnrCore7EISinvfEiiPKd */
/* Demangled: TnrCore::EISinvf(int, int, double const*) */
int _ZN7TnrCore7EISinvfEiiPKd(void);

/* Symbol: _ZN7TnrCore19TnrCoreInitProcInfoEv */
/* Demangled: TnrCore::TnrCoreInitProcInfo() */
int _ZN7TnrCore19TnrCoreInitProcInfoEv(void);

/* Symbol: _ZN6MTKTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT */
/* Demangled: MTKTnr::TnrMain(TNR_RESULT_INFO_STRUCT*) */
int _ZN6MTKTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN7TnrCore15GetGyroHomoCoefEii */
/* Demangled: TnrCore::GetGyroHomoCoef(int, int) */
int _ZN7TnrCore15GetGyroHomoCoefEii(void);

/* Symbol: _ZN6AppTnrC2Ev */
/* Demangled: AppTnr::AppTnr() */
int _ZN6AppTnrC2Ev(void);

/* Symbol: _ZN7TnrCore10CalcTnrGmvEv */
/* Demangled: TnrCore::CalcTnrGmv() */
int _ZN7TnrCore10CalcTnrGmvEv(void);

/* Symbol: _ZN6AppTnr14TnrFeatureCtrlEjPvS0_ */
/* Demangled: AppTnr::TnrFeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppTnr14TnrFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN7TnrCoreD2Ev */
/* Demangled: TnrCore::~TnrCore() */
int _ZN7TnrCoreD2Ev(void);

/* Symbol: _ZN7TnrCore19EISinverseMatrix4x4EPKdPd */
/* Demangled: TnrCore::EISinverseMatrix4x4(double const*, double*) */
int _ZN7TnrCore19EISinverseMatrix4x4EPKdPd(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN7TnrCoreC2Ev */
/* Demangled: TnrCore::TnrCore() */
int _ZN7TnrCoreC2Ev(void);

/* Symbol: _ZN6AppTnr8TnrResetEv */
/* Demangled: AppTnr::TnrReset() */
int _ZN6AppTnr8TnrResetEv(void);

/* Symbol: _ZN7TnrCore13GetAffineCoefEv */
/* Demangled: TnrCore::GetAffineCoef() */
int _ZN7TnrCore13GetAffineCoefEv(void);

/* Symbol: _ZN6AppTnr11getInstanceEv */
/* Demangled: AppTnr::getInstance() */
int _ZN6AppTnr11getInstanceEv(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN7TnrCoreD0Ev */
/* Demangled: TnrCore::~TnrCore() */
int _ZN7TnrCoreD0Ev(void);

/* Symbol: _ZN7TnrCore18affine_translationEPKfS1_PfS2_iPiS2_S2_ */
/* Demangled: TnrCore::affine_translation(float const*, float const*, float*, float*, int, int*, float*, float*) */
int _ZN7TnrCore18affine_translationEPKfS1_PfS2_iPiS2_S2_(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6AppTnr14TnrSetProcInfoEP24TNR_SET_PROC_INFO_STRUCT */
/* Demangled: AppTnr::TnrSetProcInfo(TNR_SET_PROC_INFO_STRUCT*) */
int _ZN6AppTnr14TnrSetProcInfoEP24TNR_SET_PROC_INFO_STRUCT(void);

/* Symbol: _ZN6AppTnr16SetInputFromFileEjPv */
/* Demangled: AppTnr::SetInputFromFile(unsigned int, void*) */
int _ZN6AppTnr16SetInputFromFileEjPv(void);

/* Symbol: _ZN7TnrCore11getInstanceEv */
/* Demangled: TnrCore::getInstance() */
int _ZN7TnrCore11getInstanceEv(void);

/* Symbol: _ZN7TnrCore15GetAverageShakeEv */
/* Demangled: TnrCore::GetAverageShake() */
int _ZN7TnrCore15GetAverageShakeEv(void);

/* Symbol: _ZN7TnrCore26TnrCoreQueryWorkingBufSizeEv */
/* Demangled: TnrCore::TnrCoreQueryWorkingBufSize() */
int _ZN7TnrCore26TnrCoreQueryWorkingBufSizeEv(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _ZN7TnrCore9HybridGmvEv */
/* Demangled: TnrCore::HybridGmv() */
int _ZN7TnrCore9HybridGmvEv(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN7TnrCore24TnrCoreGetTuningParaAddrEv */
/* Demangled: TnrCore::TnrCoreGetTuningParaAddr() */
int _ZN7TnrCore24TnrCoreGetTuningParaAddrEv(void);

/* Symbol: _ZTV7TnrCore */
/* Demangled: vtable for TnrCore */
extern void* _ZTV7TnrCore;

/* Symbol: _ZN6MTKTnr14TnrFeatureCtrlEjPvS0_ */
/* Demangled: MTKTnr::TnrFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKTnr14TnrFeatureCtrlEjPvS0_(void);

/* Symbol: _ZN6AppTnrD2Ev */
/* Demangled: AppTnr::~AppTnr() */
int _ZN6AppTnrD2Ev(void);

/* Symbol: _ZN7TnrCore22TnrCoreGetProcInfoAddrEv */
/* Demangled: TnrCore::TnrCoreGetProcInfoAddr() */
int _ZN7TnrCore22TnrCoreGetProcInfoAddrEv(void);

/* Symbol: _ZN6MTKTnrD0Ev */
/* Demangled: MTKTnr::~MTKTnr() */
int _ZN6MTKTnrD0Ev(void);

/* Symbol: _ZN6MTKTnr15destroyInstanceEPS_ */
/* Demangled: MTKTnr::destroyInstance(MTKTnr*) */
int _ZN6MTKTnr15destroyInstanceEPS_(void);

/* Symbol: _ZN7TnrCore23MotionHistogramAnalysisEv */
/* Demangled: TnrCore::MotionHistogramAnalysis() */
int _ZN7TnrCore23MotionHistogramAnalysisEv(void);

/* Symbol: _ZN6AppTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT */
/* Demangled: AppTnr::TnrMain(TNR_RESULT_INFO_STRUCT*) */
int _ZN6AppTnr7TnrMainEP22TNR_RESULT_INFO_STRUCT(void);

/* Symbol: _ZN7TnrCore11TnrCoreMainEv */
/* Demangled: TnrCore::TnrCoreMain() */
int _ZN7TnrCore11TnrCoreMainEv(void);

/* Symbol: _ZN6MTKTnrD2Ev */
/* Demangled: MTKTnr::~MTKTnr() */
int _ZN6MTKTnrD2Ev(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _ZN7TnrCore15ForegroundTraceEv */
/* Demangled: TnrCore::ForegroundTrace() */
int _ZN7TnrCore15ForegroundTraceEv(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN6AppTnrD0Ev */
/* Demangled: AppTnr::~AppTnr() */
int _ZN6AppTnrD0Ev(void);

/* Symbol: _ZN7TnrCoreD1Ev */
/* Demangled: TnrCore::~TnrCore() */
int _ZN7TnrCoreD1Ev(void);

/* Symbol: _ZN7TnrCore12TnrCoreResetEv */
/* Demangled: TnrCore::TnrCoreReset() */
int _ZN7TnrCore12TnrCoreResetEv(void);

/* Symbol: _ZN7TnrCore14GetAffineCoef2Ev */
/* Demangled: TnrCore::GetAffineCoef2() */
int _ZN7TnrCore14GetAffineCoef2Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_3DNR_H */
