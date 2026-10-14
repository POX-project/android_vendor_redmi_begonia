/*
 * Reverse-Engineered ABI Specification for: libcamalgo.asd.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.asd.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_ASD_H
#define BEGONIA_RE_LIBCAMALGO_ASD_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _Z19AsdCoreSetAbortFlag8kal_bool */
/* Demangled: AsdCoreSetAbortFlag(kal_bool) */
int _Z19AsdCoreSetAbortFlag8kal_bool(void);

/* Symbol: _Z16DeciderCoreResetv */
/* Demangled: DeciderCoreReset() */
int _Z16DeciderCoreResetv(void);

/* Symbol: _Z20DeciderCoreSetLoggerPvS_ */
/* Demangled: DeciderCoreSetLogger(void*, void*) */
int _Z20DeciderCoreSetLoggerPvS_(void);

/* Symbol: _ZN6AppAsd7AsdMainE8ASD_PROCPv */
/* Demangled: AppAsd::AsdMain(ASD_PROC, void*) */
int _ZN6AppAsd7AsdMainE8ASD_PROCPv(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _Z33Core1CalcSmoothBasicSceneScoreHDRv */
/* Demangled: Core1CalcSmoothBasicSceneScoreHDR() */
int _Z33Core1CalcSmoothBasicSceneScoreHDRv(void);

/* Symbol: _Z18conv_horizontal_fpPtPKii */
/* Demangled: conv_horizontal_fp(unsigned short*, int const*, int) */
int _Z18conv_horizontal_fpPtPKii(void);

/* Symbol: _Z24compute_daisy_descriptorPjiiPt */
/* Demangled: compute_daisy_descriptor(unsigned int*, int, int, unsigned short*) */
int _Z24compute_daisy_descriptorPjiiPt(void);

/* Symbol: _ZN6MTKAsd7AsdInitEPvS0_ */
/* Demangled: MTKAsd::AsdInit(void*, void*) */
int _ZN6MTKAsd7AsdInitEPvS0_(void);

/* Symbol: _Z16AsdCoreGetResultPv */
/* Demangled: AsdCoreGetResult(void*) */
int _Z16AsdCoreGetResultPv(void);

/* Symbol: _Z15svm_predict_hikPK28asd_svm_learning_data_structPKt */
/* Demangled: svm_predict_hik(asd_svm_learning_data_struct const*, unsigned short const*) */
int _Z15svm_predict_hikPK28asd_svm_learning_data_structPKt(void);

/* Symbol: _Z16Core1InitAfParamv */
/* Demangled: Core1InitAfParam() */
int _Z16Core1InitAfParamv(void);

/* Symbol: gIdxWeightTblRaw_HDR */
/* Demangled: gIdxWeightTblRaw_HDR */
extern void* gIdxWeightTblRaw_HDR;

/* Symbol: gTimeWeightSum_HDR */
/* Demangled: gTimeWeightSum_HDR */
extern void* gTimeWeightSum_HDR;

/* Symbol: _Z16conv_vertical_fpPtPKii */
/* Demangled: conv_vertical_fp(unsigned short*, int const*, int) */
int _Z16conv_vertical_fpPtPKii(void);

/* Symbol: gAfRef */
/* Demangled: gAfRef */
extern void* gAfRef;

/* Symbol: _Z20DeciderCoreGetResultPvS_ */
/* Demangled: DeciderCoreGetResult(void*, void*) */
int _Z20DeciderCoreGetResultPvS_(void);

/* Symbol: gScoreBasicSceneCur_HDR */
/* Demangled: gScoreBasicSceneCur_HDR */
extern void* gScoreBasicSceneCur_HDR;

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: gTimeWeightSum */
/* Demangled: gTimeWeightSum */
extern void* gTimeWeightSum;

/* Symbol: _Z15DeciderCoreInitPvS_S_ */
/* Demangled: DeciderCoreInit(void*, void*, void*) */
int _Z15DeciderCoreInitPvS_S_(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _Z21Core2CalcIdxAeBacklitv */
/* Demangled: Core2CalcIdxAeBacklit() */
int _Z21Core2CalcIdxAeBacklitv(void);

/* Symbol: gIdxWeightTblFinal */
/* Demangled: gIdxWeightTblFinal */
extern void* gIdxWeightTblFinal;

/* Symbol: gState */
/* Demangled: gState */
extern void* gState;

/* Symbol: gScoreBasicSceneCyc_HDR */
/* Demangled: gScoreBasicSceneCyc_HDR */
extern void* gScoreBasicSceneCyc_HDR;

/* Symbol: _ZN6MTKAsd7AsdMainE8ASD_PROCPv */
/* Demangled: MTKAsd::AsdMain(ASD_PROC, void*) */
int _ZN6MTKAsd7AsdMainE8ASD_PROCPv(void);

/* Symbol: _Z14conv_buffer_fpPtPKiii */
/* Demangled: conv_buffer_fp(unsigned short*, int const*, int, int) */
int _Z14conv_buffer_fpPtPKiii(void);

/* Symbol: gPreTickScd */
/* Demangled: gPreTickScd */
extern void* gPreTickScd;

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: smooth_time */
/* Demangled: smooth_time */
extern void* smooth_time;

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN6AppAsd11getInstanceEv */
/* Demangled: AppAsd::getInstance() */
int _ZN6AppAsd11getInstanceEv(void);

/* Symbol: _ZN6MTKAsd14createInstanceE14DRVAsdObject_s */
/* Demangled: MTKAsd::createInstance(DRVAsdObject_s) */
int _ZN6MTKAsd14createInstanceE14DRVAsdObject_s(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: g_mrg_long */
/* Demangled: g_mrg_long */
extern void* g_mrg_long;

/* Symbol: _Z24DeciderCoreResetHDRScorev */
/* Demangled: DeciderCoreResetHDRScore() */
int _Z24DeciderCoreResetHDRScorev(void);

/* Symbol: _ZN6AppAsd14AsdFeatureCtrlEjPvS0_ */
/* Demangled: AppAsd::AsdFeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppAsd14AsdFeatureCtrlEjPvS0_(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: gScoreBasicSceneSmooth_HDR */
/* Demangled: gScoreBasicSceneSmooth_HDR */
extern void* gScoreBasicSceneSmooth_HDR;

/* Symbol: _Z19Core2CalcIdxBlScorev */
/* Demangled: Core2CalcIdxBlScore() */
int _Z19Core2CalcIdxBlScorev(void);

/* Symbol: _Z16Core1WriteLoggerv */
/* Demangled: Core1WriteLogger() */
int _Z16Core1WriteLoggerv(void);

/* Symbol: gFinalMixScene */
/* Demangled: gFinalMixScene */
extern void* gFinalMixScene;

/* Symbol: _ZN6AppAsdD1Ev */
/* Demangled: AppAsd::~AppAsd() */
int _ZN6AppAsdD1Ev(void);

/* Symbol: _Z14Rgb565ToGray16P21ASD_IMAGE_INFO_STRUCT */
/* Demangled: Rgb565ToGray16(ASD_IMAGE_INFO_STRUCT*) */
int _Z14Rgb565ToGray16P21ASD_IMAGE_INFO_STRUCT(void);

/* Symbol: gIdxVec */
/* Demangled: gIdxVec */
extern void* gIdxVec;

/* Symbol: _Z19Core2CalcIdxAeNightv */
/* Demangled: Core2CalcIdxAeNight() */
int _Z19Core2CalcIdxAeNightv(void);

/* Symbol: gAsdTuningData */
/* Demangled: gAsdTuningData */
extern void* gAsdTuningData;

/* Symbol: gAsdCalData */
/* Demangled: gAsdCalData */
extern void* gAsdCalData;

/* Symbol: _ZN6MTKAsdD0Ev */
/* Demangled: MTKAsd::~MTKAsd() */
int _ZN6MTKAsdD0Ev(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _Z21Core2CalcIdxAeOutdoorv */
/* Demangled: Core2CalcIdxAeOutdoor() */
int _Z21Core2CalcIdxAeOutdoorv(void);

/* Symbol: _Z32compute_smoothed_gradient_layersPt */
/* Demangled: compute_smoothed_gradient_layers(unsigned short*) */
int _Z32compute_smoothed_gradient_layersPt(void);

/* Symbol: gBinaryMixScene */
/* Demangled: gBinaryMixScene */
extern void* gBinaryMixScene;

/* Symbol: _ZTV9AppAsdTmp */
/* Demangled: vtable for AppAsdTmp */
extern void* _ZTV9AppAsdTmp;

/* Symbol: _Z31Core1InitTimeSmoothWeightTblHDRv */
/* Demangled: Core1InitTimeSmoothWeightTblHDR() */
int _Z31Core1InitTimeSmoothWeightTblHDRv(void);

/* Symbol: _Z30Core1CalcSmoothBasicSceneScorev */
/* Demangled: Core1CalcSmoothBasicSceneScore() */
int _Z30Core1CalcSmoothBasicSceneScorev(void);

/* Symbol: _Z19Core2CalcIdxFdScorev */
/* Demangled: Core2CalcIdxFdScore() */
int _Z19Core2CalcIdxFdScorev(void);

/* Symbol: gInit */
/* Demangled: gInit */
extern void* gInit;

/* Symbol: _Z21Core3CalcMatrix2DMultPPiS0_S0_16MATX_MULT_STRUCT */
/* Demangled: Core3CalcMatrix2DMult(int**, int**, int**, MATX_MULT_STRUCT) */
int _Z21Core3CalcMatrix2DMultPPiS0_S0_16MATX_MULT_STRUCT(void);

/* Symbol: _ZTV6AppAsd */
/* Demangled: vtable for AppAsd */
extern void* _ZTV6AppAsd;

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: gHDRIdxData */
/* Demangled: gHDRIdxData */
extern void* gHDRIdxData;

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _Z19Core2CalcIdxLsScorev */
/* Demangled: Core2CalcIdxLsScore() */
int _Z19Core2CalcIdxLsScorev(void);

/* Symbol: _Z21Core1InitIdxWeightTblv */
/* Demangled: Core1InitIdxWeightTbl() */
int _Z21Core1InitIdxWeightTblv(void);

/* Symbol: _Z11AsdCoreMainPv */
/* Demangled: AsdCoreMain(void*) */
int _Z11AsdCoreMainPv(void);

/* Symbol: predict_max */
/* Demangled: predict_max */
extern void* predict_max;

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN6AppAsd15destroyInstanceEv */
/* Demangled: AppAsd::destroyInstance() */
int _ZN6AppAsd15destroyInstanceEv(void);

/* Symbol: _Z23Core1CalcMixSceneBinaryv */
/* Demangled: Core1CalcMixSceneBinary() */
int _Z23Core1CalcMixSceneBinaryv(void);

/* Symbol: asd_buffer */
/* Demangled: asd_buffer */
extern void* asd_buffer;

/* Symbol: _ZN9AppAsdTmpD0Ev */
/* Demangled: AppAsdTmp::~AppAsdTmp() */
int _ZN9AppAsdTmpD0Ev(void);

/* Symbol: _Z15DeciderCoreOpenv */
/* Demangled: DeciderCoreOpen() */
int _Z15DeciderCoreOpenv(void);

/* Symbol: gIdxWeightSum */
/* Demangled: gIdxWeightSum */
extern void* gIdxWeightSum;

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: _ZN6AppAsdC1Ev */
/* Demangled: AppAsd::AppAsd() */
int _ZN6AppAsdC1Ev(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: wHist */
/* Demangled: wHist */
extern void* wHist;

/* Symbol: _ZN6AppAsdD2Ev */
/* Demangled: AppAsd::~AppAsd() */
int _ZN6AppAsdD2Ev(void);

/* Symbol: gTimeWeightVec_HDR */
/* Demangled: gTimeWeightVec_HDR */
extern void* gTimeWeightVec_HDR;

/* Symbol: gScoreBasicSceneSmooth */
/* Demangled: gScoreBasicSceneSmooth */
extern void* gScoreBasicSceneSmooth;

/* Symbol: _Z22Core2CalcIdxAfPositionv */
/* Demangled: Core2CalcIdxAfPosition() */
int _Z22Core2CalcIdxAfPositionv(void);

/* Symbol: _ZN6MTKAsd14AsdFeatureCtrlEjPvS0_ */
/* Demangled: MTKAsd::AsdFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKAsd14AsdFeatureCtrlEjPvS0_(void);

/* Symbol: _Z28Core1InitTimeSmoothWeightTblv */
/* Demangled: Core1InitTimeSmoothWeightTbl() */
int _Z28Core1InitTimeSmoothWeightTblv(void);

/* Symbol: _Z22Core1FindFinalMmiScenev */
/* Demangled: Core1FindFinalMmiScene() */
int _Z22Core1FindFinalMmiScenev(void);

/* Symbol: _ZN9AppAsdTmp15destroyInstanceEv */
/* Demangled: AppAsdTmp::destroyInstance() */
int _ZN9AppAsdTmp15destroyInstanceEv(void);

/* Symbol: _ZN6AppAsdD0Ev */
/* Demangled: AppAsd::~AppAsd() */
int _ZN6AppAsdD0Ev(void);

/* Symbol: _Z24Core1InitIdxWeightTblHDRv */
/* Demangled: Core1InitIdxWeightTblHDR() */
int _Z24Core1InitIdxWeightTblHDRv(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: gResult */
/* Demangled: gResult */
extern void* gResult;

/* Symbol: gInfo */
/* Demangled: gInfo */
extern void* gInfo;

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: gBinaryBasicScene_HDR */
/* Demangled: gBinaryBasicScene_HDR */
extern void* gBinaryBasicScene_HDR;

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN9AppAsdTmp11getInstanceEv */
/* Demangled: AppAsdTmp::getInstance() */
int _ZN9AppAsdTmp11getInstanceEv(void);

/* Symbol: g_mrg_short */
/* Demangled: g_mrg_short */
extern void* g_mrg_short;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: svm_time */
/* Demangled: svm_time */
extern void* svm_time;

/* Symbol: gAbortFlag */
/* Demangled: gAbortFlag */
extern void* gAbortFlag;

/* Symbol: _Z19Core2CalcIdxAwbGainv */
/* Demangled: Core2CalcIdxAwbGain() */
int _Z19Core2CalcIdxAwbGainv(void);

/* Symbol: _Z23compute_color_histogramPjii */
/* Demangled: compute_color_histogram(unsigned int*, int, int) */
int _Z23compute_color_histogramPjii(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: gIdxWeightSum_HDR */
/* Demangled: gIdxWeightSum_HDR */
extern void* gIdxWeightSum_HDR;

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: tree_time */
/* Demangled: tree_time */
extern void* tree_time;

/* Symbol: _Z15DeciderCoreMainPvS_ */
/* Demangled: DeciderCoreMain(void*, void*) */
int _Z15DeciderCoreMainPvS_(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _Z30Core1CalcSingleBasicSceneScorev */
/* Demangled: Core1CalcSingleBasicSceneScore() */
int _Z30Core1CalcSingleBasicSceneScorev(void);

/* Symbol: _Z15Core1CalcIdxVecv */
/* Demangled: Core1CalcIdxVec() */
int _Z15Core1CalcIdxVecv(void);

/* Symbol: _ZN6MTKAsdD2Ev */
/* Demangled: MTKAsd::~MTKAsd() */
int _ZN6MTKAsdD2Ev(void);

/* Symbol: _ZN6AppAsd7AsdInitEPvS0_ */
/* Demangled: AppAsd::AsdInit(void*, void*) */
int _ZN6AppAsd7AsdInitEPvS0_(void);

/* Symbol: _Z19Core1CheckDataValidv */
/* Demangled: Core1CheckDataValid() */
int _Z19Core1CheckDataValidv(void);

/* Symbol: gLogger */
/* Demangled: gLogger */
extern void* gLogger;

/* Symbol: gPreTickFd */
/* Demangled: gPreTickFd */
extern void* gPreTickFd;

/* Symbol: _Z21Core3CalcLinearInterp15POINT_2D_STRUCTS_s */
/* Demangled: Core3CalcLinearInterp(POINT_2D_STRUCT, POINT_2D_STRUCT, short) */
int _Z21Core3CalcLinearInterp15POINT_2D_STRUCTS_s(void);

/* Symbol: _Z17adapt_daisy_paramtt */
/* Demangled: adapt_daisy_param(unsigned short, unsigned short) */
int _Z17adapt_daisy_paramtt(void);

/* Symbol: _Z33Core1CalcSingleBasicSceneScoreHDRv */
/* Demangled: Core1CalcSingleBasicSceneScoreHDR() */
int _Z33Core1CalcSingleBasicSceneScoreHDRv(void);

/* Symbol: _Z14AsdCoreSetInfoP19ASD_SET_INFO_STRUCT */
/* Demangled: AsdCoreSetInfo(ASD_SET_INFO_STRUCT*) */
int _Z14AsdCoreSetInfoP19ASD_SET_INFO_STRUCT(void);

/* Symbol: gTimeWeightVec */
/* Demangled: gTimeWeightVec */
extern void* gTimeWeightVec;

/* Symbol: gScoreBasicSceneCur */
/* Demangled: gScoreBasicSceneCur */
extern void* gScoreBasicSceneCur;

/* Symbol: gBinaryBasicScene */
/* Demangled: gBinaryBasicScene */
extern void* gBinaryBasicScene;

/* Symbol: _Z21compute_output_scoresPi */
/* Demangled: compute_output_scores(int*) */
int _Z21compute_output_scoresPi(void);

/* Symbol: gIdxWeightTblRaw */
/* Demangled: gIdxWeightTblRaw */
extern void* gIdxWeightTblRaw;

/* Symbol: gIdxWeightTblFinal_HDR */
/* Demangled: gIdxWeightTblFinal_HDR */
extern void* gIdxWeightTblFinal_HDR;

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN6AppAsdC2Ev */
/* Demangled: AppAsd::AppAsd() */
int _ZN6AppAsdC2Ev(void);

/* Symbol: _Z25Core1CalcBasicSceneBinaryv */
/* Demangled: Core1CalcBasicSceneBinary() */
int _Z25Core1CalcBasicSceneBinaryv(void);

/* Symbol: _Z4xdiviij */
/* Demangled: xdiv(int, int, unsigned int) */
int _Z4xdiviij(void);

/* Symbol: _Z13Core1SetState18DECIDER_STATE_ENUM */
/* Demangled: Core1SetState(DECIDER_STATE_ENUM) */
int _Z13Core1SetState18DECIDER_STATE_ENUM(void);

/* Symbol: _Z18intersectHistogramPKtS0_i */
/* Demangled: intersectHistogram(unsigned short const*, unsigned short const*, int) */
int _Z18intersectHistogramPKtS0_i(void);

/* Symbol: _ZTV6MTKAsd */
/* Demangled: vtable for MTKAsd */
extern void* _ZTV6MTKAsd;

/* Symbol: gFinalMmiScene */
/* Demangled: gFinalMmiScene */
extern void* gFinalMmiScene;

/* Symbol: gScoreBasicSceneCyc */
/* Demangled: gScoreBasicSceneCyc */
extern void* gScoreBasicSceneCyc;

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_ASD_H */
