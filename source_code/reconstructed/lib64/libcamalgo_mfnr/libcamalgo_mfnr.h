/*
 * Reverse-Engineered ABI Specification for: libcamalgo.mfnr.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.mfnr.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_MFNR_H
#define BEGONIA_RE_LIBCAMALGO_MFNR_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6AppAis15destroyInstanceEv */
/* Demangled: AppAis::destroyInstance() */
int _ZN6AppAis15destroyInstanceEv(void);

/* Symbol: _ZN6AppBss7BssMainE13BSS_PROC_ENUMPvS1_ */
/* Demangled: AppBss::BssMain(BSS_PROC_ENUM, void*, void*) */
int _ZN6AppBss7BssMainE13BSS_PROC_ENUMPvS1_(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: _ZN6AppAisD0Ev */
/* Demangled: AppAis::~AppAis() */
int _ZN6AppAisD0Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore13setWorkingBufEPc */
/* Demangled: AisGyroToMotionCore::setWorkingBuf(char*) */
int _ZN19AisGyroToMotionCore13setWorkingBufEPc(void);

/* Symbol: _ZN8MTKMfbll10MfbllResetEv */
/* Demangled: MTKMfbll::MfbllReset() */
int _ZN8MTKMfbll10MfbllResetEv(void);

/* Symbol: _ZN6AppAisC1Ev */
/* Demangled: AppAis::AppAis() */
int _ZN6AppAisC1Ev(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: _ZN4MeMc16Memc_SetProcInfoEP20MEMC_SET_INFO_STRUCT */
/* Demangled: MeMc::Memc_SetProcInfo(MEMC_SET_INFO_STRUCT*) */
int _ZN4MeMc16Memc_SetProcInfoEP20MEMC_SET_INFO_STRUCT(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: _ZN19AisGyroToMotionCore20GyroToMotionCoreInitEv */
/* Demangled: AisGyroToMotionCore::GyroToMotionCoreInit() */
int _ZN19AisGyroToMotionCore20GyroToMotionCoreInitEv(void);

/* Symbol: _ZN6MTKAis14createInstanceE14DRVAisObject_s */
/* Demangled: MTKAis::createInstance(DRVAisObject_s) */
int _ZN6MTKAis14createInstanceE14DRVAisObject_s(void);

/* Symbol: _ZN6AppAis8AisResetEv */
/* Demangled: AppAis::AisReset() */
int _ZN6AppAis8AisResetEv(void);

/* Symbol: _ZN4MeMc25xMedia2ME_SearchCand_16x8EP6MEInfoPhii */
/* Demangled: MeMc::xMedia2ME_SearchCand_16x8(MEInfo*, unsigned char*, int, int) */
int _ZN4MeMc25xMedia2ME_SearchCand_16x8EP6MEInfoPhii(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN4MeMc8CalVARDCEP9MPME_InfoPhh */
/* Demangled: MeMc::CalVARDC(MPME_Info*, unsigned char*, unsigned char) */
int _ZN4MeMc8CalVARDCEP9MPME_InfoPhh(void);

/* Symbol: __bss_start__ */
/* Demangled: __bss_start__ */
extern void* __bss_start__;

/* Symbol: _ZN4MeMc10CalPenaltyEP9MPME_InfoP11cand_mv_2_siii */
/* Demangled: MeMc::CalPenalty(MPME_Info*, cand_mv_2_s*, int, int, int) */
int _ZN4MeMc10CalPenaltyEP9MPME_InfoP11cand_mv_2_siii(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN4MeMc12McDirect_422EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh */
/* Demangled: MeMc::McDirect_422(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
int _ZN4MeMc12McDirect_422EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void);

/* Symbol: _ZN6MTKAis7AisInitEPvS0_ */
/* Demangled: MTKAis::AisInit(void*, void*) */
int _ZN6MTKAis7AisInitEPvS0_(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN4MeMc8GMV_PushEiiii */
/* Demangled: MeMc::GMV_Push(int, int, int, int) */
int _ZN4MeMc8GMV_PushEiiii(void);

/* Symbol: _ZN8AppMfbllC1Ev */
/* Demangled: AppMfbll::AppMfbll() */
int _ZN8AppMfbllC1Ev(void);

/* Symbol: _ZN4MeMc7GMV_PopEi */
/* Demangled: MeMc::GMV_Pop(int) */
int _ZN4MeMc7GMV_PopEi(void);

/* Symbol: _ZN8AppMfbllD2Ev */
/* Demangled: AppMfbll::~AppMfbll() */
int _ZN8AppMfbllD2Ev(void);

/* Symbol: _ZN6AppBss7BssNfrmEP14BSS_INPUT_DATAP15BSS_OUTPUT_DATA */
/* Demangled: AppBss::BssNfrm(BSS_INPUT_DATA*, BSS_OUTPUT_DATA*) */
int _ZN6AppBss7BssNfrmEP14BSS_INPUT_DATAP15BSS_OUTPUT_DATA(void);

/* Symbol: _ZN4MeMc13MvUpscale_2ndEP13ME_OUT_STRUCT */
/* Demangled: MeMc::MvUpscale_2nd(ME_OUT_STRUCT*) */
int _ZN4MeMc13MvUpscale_2ndEP13ME_OUT_STRUCT(void);

/* Symbol: _ZN6MTKBssD2Ev */
/* Demangled: MTKBss::~MTKBss() */
int _ZN6MTKBssD2Ev(void);

/* Symbol: _ZTV6AppAis */
/* Demangled: vtable for AppAis */
extern void* _ZTV6AppAis;

/* Symbol: _ZN19AisGyroToMotionCore10matProductEPdPKfPKdiii */
/* Demangled: AisGyroToMotionCore::matProduct(double*, float const*, double const*, int, int, int) */
int _ZN19AisGyroToMotionCore10matProductEPdPKfPKdiii(void);

/* Symbol: _ZN19AisGyroToMotionCore13getLogBufAddrEv */
/* Demangled: AisGyroToMotionCore::getLogBufAddr() */
int _ZN19AisGyroToMotionCore13getLogBufAddrEv(void);

/* Symbol: _ZN4MeMc9Memc_InitEP22MEMC_INIT_PARAM_STRUCT */
/* Demangled: MeMc::Memc_Init(MEMC_INIT_PARAM_STRUCT*) */
int _ZN4MeMc9Memc_InitEP22MEMC_INIT_PARAM_STRUCT(void);

/* Symbol: _ZN4MeMc13OverFillPixelEP6MEInfoPhii */
/* Demangled: MeMc::OverFillPixel(MEInfo*, unsigned char*, int, int) */
int _ZN4MeMc13OverFillPixelEP6MEInfoPhii(void);

/* Symbol: _ZN6MTKBss8BssResetEv */
/* Demangled: MTKBss::BssReset() */
int _ZN6MTKBss8BssResetEv(void);

/* Symbol: _bss_end__ */
/* Demangled: _bss_end__ */
extern void* _bss_end__;

/* Symbol: _ZN4MeMc12CalConfMvIdxEi */
/* Demangled: MeMc::CalConfMvIdx(int) */
int _ZN4MeMc12CalConfMvIdxEi(void);

/* Symbol: _ZN6AppAisD1Ev */
/* Demangled: AppAis::~AppAis() */
int _ZN6AppAisD1Ev(void);

/* Symbol: _ZN9AppBssTmp11getInstanceEv */
/* Demangled: AppBssTmp::getInstance() */
int _ZN9AppBssTmp11getInstanceEv(void);

/* Symbol: _ZN11AppMfbllTmp15destroyInstanceEv */
/* Demangled: AppMfbllTmp::destroyInstance() */
int _ZN11AppMfbllTmp15destroyInstanceEv(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _ZN6AppAisC2Ev */
/* Demangled: AppAis::AppAis() */
int _ZN6AppAisC2Ev(void);

/* Symbol: _ZN19AisGyroToMotionCoreC1Ev */
/* Demangled: AisGyroToMotionCore::AisGyroToMotionCore() */
int _ZN19AisGyroToMotionCoreC1Ev(void);

/* Symbol: _ZN8AppMfbll11getInstanceEv */
/* Demangled: AppMfbll::getInstance() */
int _ZN8AppMfbll11getInstanceEv(void);

/* Symbol: _ZN19AisGyroToMotionCoreD1Ev */
/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
int _ZN19AisGyroToMotionCoreD1Ev(void);

/* Symbol: _ZN19AisGyroToMotionCoreD2Ev */
/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
int _ZN19AisGyroToMotionCoreD2Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore10matProductEPdPKdS2_iii */
/* Demangled: AisGyroToMotionCore::matProduct(double*, double const*, double const*, int, int, int) */
int _ZN19AisGyroToMotionCore10matProductEPdPKdS2_iii(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _ZN4MeMc11PixelME_GetE10location_eP6MEInfoP5mvp_s */
/* Demangled: MeMc::PixelME_Get(location_e, MEInfo*, mvp_s*) */
int _ZN4MeMc11PixelME_GetE10location_eP6MEInfoP5mvp_s(void);

/* Symbol: _ZN8MTKMfbllD0Ev */
/* Demangled: MTKMfbll::~MTKMfbll() */
int _ZN8MTKMfbllD0Ev(void);

/* Symbol: __bss_end__ */
/* Demangled: __bss_end__ */
extern void* __bss_end__;

/* Symbol: _ZN19AisGyroToMotionCore11getInfoAddrEv */
/* Demangled: AisGyroToMotionCore::getInfoAddr() */
int _ZN19AisGyroToMotionCore11getInfoAddrEv(void);

/* Symbol: _ZN19AisGyroToMotionCore15destroyInstanceEPS_ */
/* Demangled: AisGyroToMotionCore::destroyInstance(AisGyroToMotionCore*) */
int _ZN19AisGyroToMotionCore15destroyInstanceEPS_(void);

/* Symbol: _ZN19AisGyroToMotionCore12ExportBMGridEv */
/* Demangled: AisGyroToMotionCore::ExportBMGrid() */
int _ZN19AisGyroToMotionCore12ExportBMGridEv(void);

/* Symbol: _ZN19AisGyroToMotionCore7utilCosEd */
/* Demangled: AisGyroToMotionCore::utilCos(double) */
int _ZN19AisGyroToMotionCore7utilCosEd(void);

/* Symbol: _ZN4MeMcC2Ev */
/* Demangled: MeMc::MeMc() */
int _ZN4MeMcC2Ev(void);

/* Symbol: _ZTV9AppBssTmp */
/* Demangled: vtable for AppBssTmp */
extern void* _ZTV9AppBssTmp;

/* Symbol: _ZN6MTKBss7BssMainE13BSS_PROC_ENUMPvS1_ */
/* Demangled: MTKBss::BssMain(BSS_PROC_ENUM, void*, void*) */
int _ZN6MTKBss7BssMainE13BSS_PROC_ENUMPvS1_(void);

/* Symbol: _ZTV6MTKBss */
/* Demangled: vtable for MTKBss */
extern void* _ZTV6MTKBss;

/* Symbol: _ZN6AppAis19Ais_sim_dump_goldenE13AIS_PROC_ENUMPv */
/* Demangled: AppAis::Ais_sim_dump_golden(AIS_PROC_ENUM, void*) */
int _ZN6AppAis19Ais_sim_dump_goldenE13AIS_PROC_ENUMPv(void);

/* Symbol: _ZN19AisGyroToMotionCore10grid_to_mvEPKd */
/* Demangled: AisGyroToMotionCore::grid_to_mv(double const*) */
int _ZN19AisGyroToMotionCore10grid_to_mvEPKd(void);

/* Symbol: _ZN6AppBss15destroyInstanceEv */
/* Demangled: AppBss::destroyInstance() */
int _ZN6AppBss15destroyInstanceEv(void);

/* Symbol: _ZN19AisGyroToMotionCore11calBaseGridEv */
/* Demangled: AisGyroToMotionCore::calBaseGrid() */
int _ZN19AisGyroToMotionCore11calBaseGridEv(void);

/* Symbol: _ZN4MeMcD2Ev */
/* Demangled: MeMc::~MeMc() */
int _ZN4MeMcD2Ev(void);

/* Symbol: _ZN8MTKMfbll9MfbllInitEPvS0_ */
/* Demangled: MTKMfbll::MfbllInit(void*, void*) */
int _ZN8MTKMfbll9MfbllInitEPvS0_(void);

/* Symbol: _ZN8AppMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_ */
/* Demangled: AppMfbll::MfbllFeatureCtrl(MFBLL_FTCTRL_ENUM, void*, void*) */
int _ZN8AppMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_(void);

/* Symbol: _ZN19AisGyroToMotionCore11integrateAREiPddd */
/* Demangled: AisGyroToMotionCore::integrateAR(int, double*, double, double) */
int _ZN19AisGyroToMotionCore11integrateAREiPddd(void);

/* Symbol: _ZN6AppBssD2Ev */
/* Demangled: AppBss::~AppBss() */
int _ZN6AppBssD2Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore11getInstanceEv */
/* Demangled: AisGyroToMotionCore::getInstance() */
int _ZN19AisGyroToMotionCore11getInstanceEv(void);

/* Symbol: _ZN19AisGyroToMotionCoreC2Ev */
/* Demangled: AisGyroToMotionCore::AisGyroToMotionCore() */
int _ZN19AisGyroToMotionCoreC2Ev(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN6AppAis7AisMainE13AIS_PROC_ENUMPvS1_ */
/* Demangled: AppAis::AisMain(AIS_PROC_ENUM, void*, void*) */
int _ZN6AppAis7AisMainE13AIS_PROC_ENUMPvS1_(void);

/* Symbol: _ZN8MTKMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_ */
/* Demangled: MTKMfbll::MfbllFeatureCtrl(MFBLL_FTCTRL_ENUM, void*, void*) */
int _ZN8MTKMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_(void);

/* Symbol: _ZN6MTKBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_ */
/* Demangled: MTKBss::BssFeatureCtrl(BSS_FTCTRL_ENUM, void*, void*) */
int _ZN6MTKBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_(void);

/* Symbol: _ZN4MeMc11MultiPassMEEv */
/* Demangled: MeMc::MultiPassME() */
int _ZN4MeMc11MultiPassMEEv(void);

/* Symbol: _ZN4MeMc11MvfilteringEP13ME_OUT_STRUCT */
/* Demangled: MeMc::Mvfiltering(ME_OUT_STRUCT*) */
int _ZN4MeMc11MvfilteringEP13ME_OUT_STRUCT(void);

/* Symbol: _ZN4MeMc18PixelME_PredictionEP6MEInfoP5mvp_s */
/* Demangled: MeMc::PixelME_Prediction(MEInfo*, mvp_s*) */
int _ZN4MeMc18PixelME_PredictionEP6MEInfoP5mvp_s(void);

/* Symbol: _ZN8AppMfbll9MfbllInitEPvS0_ */
/* Demangled: AppMfbll::MfbllInit(void*, void*) */
int _ZN8AppMfbll9MfbllInitEPvS0_(void);

/* Symbol: _ZN4MeMc27xMedia2_PixelIpol_FullScaleEP6MEInfoPhii */
/* Demangled: MeMc::xMedia2_PixelIpol_FullScale(MEInfo*, unsigned char*, int, int) */
int _ZN4MeMc27xMedia2_PixelIpol_FullScaleEP6MEInfoPhii(void);

/* Symbol: _ZN6AppBss7BssInitEPvS0_ */
/* Demangled: AppBss::BssInit(void*, void*) */
int _ZN6AppBss7BssInitEPvS0_(void);

/* Symbol: aaiIntp4TapH0 */
/* Demangled: aaiIntp4TapH0 */
extern void* aaiIntp4TapH0;

/* Symbol: _ZN11AppMfbllTmp11getInstanceEv */
/* Demangled: AppMfbllTmp::getInstance() */
int _ZN11AppMfbllTmp11getInstanceEv(void);

/* Symbol: _ZN6MTKAis8AisResetEv */
/* Demangled: MTKAis::AisReset() */
int _ZN6MTKAis8AisResetEv(void);

/* Symbol: _ZN4MeMc18Memc_CalcuBuffSizeEv */
/* Demangled: MeMc::Memc_CalcuBuffSize() */
int _ZN4MeMc18Memc_CalcuBuffSizeEv(void);

/* Symbol: _ZTV9AppAisTmp */
/* Demangled: vtable for AppAisTmp */
extern void* _ZTV9AppAisTmp;

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: _ZN4MeMc10ConfMapFltEP11BlkConfInfoP6MEInfoi */
/* Demangled: MeMc::ConfMapFlt(BlkConfInfo*, MEInfo*, int) */
int _ZN4MeMc10ConfMapFltEP11BlkConfInfoP6MEInfoi(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: _ZN6MTKBss14createInstanceE14DRVBssObject_s */
/* Demangled: MTKBss::createInstance(DRVBssObject_s) */
int _ZN6MTKBss14createInstanceE14DRVBssObject_s(void);

/* Symbol: _ZN4MeMc22xMediaME_InputMad_16x8EP6MEInfoPh */
/* Demangled: MeMc::xMediaME_InputMad_16x8(MEInfo*, unsigned char*) */
int _ZN4MeMc22xMediaME_InputMad_16x8EP6MEInfoPh(void);

/* Symbol: _ZN4MeMcC1Ev */
/* Demangled: MeMc::MeMc() */
int _ZN4MeMcC1Ev(void);

/* Symbol: _ZTV8MTKMfbll */
/* Demangled: vtable for MTKMfbll */
extern void* _ZTV8MTKMfbll;

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN6AppAisD2Ev */
/* Demangled: AppAis::~AppAis() */
int _ZN6AppAisD2Ev(void);

/* Symbol: _ZN4MeMc18CalConfIdxExceptMvEP11BlkConfInfoi */
/* Demangled: MeMc::CalConfIdxExceptMv(BlkConfInfo*, int) */
int _ZN4MeMc18CalConfIdxExceptMvEP11BlkConfInfoi(void);

/* Symbol: _ZN6AppAis20Ais_sim_dump_settingE13AIS_PROC_ENUMPv */
/* Demangled: AppAis::Ais_sim_dump_setting(AIS_PROC_ENUM, void*) */
int _ZN6AppAis20Ais_sim_dump_settingE13AIS_PROC_ENUMPv(void);

/* Symbol: _ZN19AisGyroToMotionCoreD0Ev */
/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
int _ZN19AisGyroToMotionCoreD0Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore13utilSqrt_longEyi */
/* Demangled: AisGyroToMotionCore::utilSqrt_long(unsigned long long, int) */
int _ZN19AisGyroToMotionCore13utilSqrt_longEyi(void);

/* Symbol: _ZN6AppAis8UpdateAEEP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT */
/* Demangled: AppAis::UpdateAE(AIS_PROC2_PARA_IN*, AIS_PROC2_PARA_OUT*) */
int _ZN6AppAis8UpdateAEEP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT(void);

/* Symbol: _ZN4MeMcD1Ev */
/* Demangled: MeMc::~MeMc() */
int _ZN4MeMcD1Ev(void);

/* Symbol: _ZN6AppBssC1Ev */
/* Demangled: AppBss::AppBss() */
int _ZN6AppBssC1Ev(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: _ZN6AppBssD0Ev */
/* Demangled: AppBss::~AppBss() */
int _ZN6AppBssD0Ev(void);

/* Symbol: _ZN8MTKMfbllD2Ev */
/* Demangled: MTKMfbll::~MTKMfbll() */
int _ZN8MTKMfbllD2Ev(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN4MeMc10MVDecisionEP9MPME_InfoP11cand_mv_2_sii */
/* Demangled: MeMc::MVDecision(MPME_Info*, cand_mv_2_s*, int, int) */
int _ZN4MeMc10MVDecisionEP9MPME_InfoP11cand_mv_2_sii(void);

/* Symbol: _ZTV19AisGyroToMotionCore */
/* Demangled: vtable for AisGyroToMotionCore */
extern void* _ZTV19AisGyroToMotionCore;

/* Symbol: _ZN4MeMc20Memc_McProcessDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCT */
/* Demangled: MeMc::Memc_McProcessDirect(MC_OUT_STRUCT*, ME_OUT_STRUCT*) */
int _ZN4MeMc20Memc_McProcessDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCT(void);

/* Symbol: _ZN19AisGyroToMotionCore7utilSinEd */
/* Demangled: AisGyroToMotionCore::utilSin(double) */
int _ZN19AisGyroToMotionCore7utilSinEd(void);

/* Symbol: _ZN8MTKMfbll14createInstanceE16DRVMfbllObject_s */
/* Demangled: MTKMfbll::createInstance(DRVMfbllObject_s) */
int _ZN8MTKMfbll14createInstanceE16DRVMfbllObject_s(void);

/* Symbol: _ZN6AppBss8BssResetEv */
/* Demangled: AppBss::BssReset() */
int _ZN6AppBss8BssResetEv(void);

/* Symbol: _ZN19AisGyroToMotionCore11memoryShiftEv */
/* Demangled: AisGyroToMotionCore::memoryShift() */
int _ZN19AisGyroToMotionCore11memoryShiftEv(void);

/* Symbol: _ZN19AisGyroToMotionCore8utilSqrtEi */
/* Demangled: AisGyroToMotionCore::utilSqrt(int) */
int _ZN19AisGyroToMotionCore8utilSqrtEi(void);

/* Symbol: _ZN9AppAisTmpD0Ev */
/* Demangled: AppAisTmp::~AppAisTmp() */
int _ZN9AppAisTmpD0Ev(void);

/* Symbol: _ZN4MeMc12McDirect_420EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh */
/* Demangled: MeMc::McDirect_420(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
int _ZN4MeMc12McDirect_420EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void);

/* Symbol: _ZN6AppBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_ */
/* Demangled: AppBss::BssFeatureCtrl(BSS_FTCTRL_ENUM, void*, void*) */
int _ZN6AppBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: _ZN6AppBss11getInstanceEv */
/* Demangled: AppBss::getInstance() */
int _ZN6AppBss11getInstanceEv(void);

/* Symbol: _ZN6AppAis6G2MRunEj */
/* Demangled: AppAis::G2MRun(unsigned int) */
int _ZN6AppAis6G2MRunEj(void);

/* Symbol: _ZN19AisGyroToMotionCore10preprocessEv */
/* Demangled: AisGyroToMotionCore::preprocess() */
int _ZN19AisGyroToMotionCore10preprocessEv(void);

/* Symbol: _ZN19AisGyroToMotionCore20GyroToMotionCoreMainEv */
/* Demangled: AisGyroToMotionCore::GyroToMotionCoreMain() */
int _ZN19AisGyroToMotionCore20GyroToMotionCoreMainEv(void);

/* Symbol: _ZN6AppAis7AisInitEPvS0_ */
/* Demangled: AppAis::AisInit(void*, void*) */
int _ZN6AppAis7AisInitEPvS0_(void);

/* Symbol: _ZN4MeMc12yuy2_to_yv16EPhS0_jj */
/* Demangled: MeMc::yuy2_to_yv16(unsigned char*, unsigned char*, unsigned int, unsigned int) */
int _ZN4MeMc12yuy2_to_yv16EPhS0_jj(void);

/* Symbol: _ZN8AppMfbll10MfbllResetEv */
/* Demangled: AppMfbll::MfbllReset() */
int _ZN8AppMfbll10MfbllResetEv(void);

/* Symbol: _ZN6AppBssC2Ev */
/* Demangled: AppBss::AppBss() */
int _ZN6AppBssC2Ev(void);

/* Symbol: _ZN6AppBssD1Ev */
/* Demangled: AppBss::~AppBss() */
int _ZN6AppBssD1Ev(void);

/* Symbol: _ZN6MTKAis7AisMainE13AIS_PROC_ENUMPvS1_ */
/* Demangled: MTKAis::AisMain(AIS_PROC_ENUM, void*, void*) */
int _ZN6MTKAis7AisMainE13AIS_PROC_ENUMPvS1_(void);

/* Symbol: _ZN4MeMc13median3x3_JCLEiiiiiiiii */
/* Demangled: MeMc::median3x3_JCL(int, int, int, int, int, int, int, int, int) */
int _ZN4MeMc13median3x3_JCLEiiiiiiiii(void);

/* Symbol: _ZN4MeMc12GMV_BIN_initEv */
/* Demangled: MeMc::GMV_BIN_init() */
int _ZN4MeMc12GMV_BIN_initEv(void);

/* Symbol: __end__ */
/* Demangled: __end__ */
extern void* __end__;

/* Symbol: _ZN4MeMc25HalfPixelSad_xMedia2_16x8EP6MEInfo */
/* Demangled: MeMc::HalfPixelSad_xMedia2_16x8(MEInfo*) */
int _ZN4MeMc25HalfPixelSad_xMedia2_16x8EP6MEInfo(void);

/* Symbol: _ZN4MeMc9MvUpscaleEP13ME_OUT_STRUCT */
/* Demangled: MeMc::MvUpscale(ME_OUT_STRUCT*) */
int _ZN4MeMc9MvUpscaleEP13ME_OUT_STRUCT(void);

/* Symbol: _ZN8AppMfbllD1Ev */
/* Demangled: AppMfbll::~AppMfbll() */
int _ZN8AppMfbllD1Ev(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: _ZN4MeMc30PixelME_HalfpixelGuess_xMedia2EP6MEInfoPh */
/* Demangled: MeMc::PixelME_HalfpixelGuess_xMedia2(MEInfo*, unsigned char*) */
int _ZN4MeMc30PixelME_HalfpixelGuess_xMedia2EP6MEInfoPh(void);

/* Symbol: _ZN4MeMc9mv_choiceEiii */
/* Demangled: MeMc::mv_choice(int, int, int) */
int _ZN4MeMc9mv_choiceEiii(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN6AppAis16FrameNumDecisionEP17AIS_PROC1_PARA_INP18AIS_PROC1_PARA_OUT */
/* Demangled: AppAis::FrameNumDecision(AIS_PROC1_PARA_IN*, AIS_PROC1_PARA_OUT*) */
int _ZN6AppAis16FrameNumDecisionEP17AIS_PROC1_PARA_INP18AIS_PROC1_PARA_OUT(void);

/* Symbol: _ZN19AisGyroToMotionCore11getProcAddrEv */
/* Demangled: AisGyroToMotionCore::getProcAddr() */
int _ZN19AisGyroToMotionCore11getProcAddrEv(void);

/* Symbol: _ZN6MTKAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_ */
/* Demangled: MTKAis::AisFeatureCtrl(AIS_FTCTRL_ENUM, void*, void*) */
int _ZN6MTKAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: _ZN4MeMc22PixelME_MbAvailabilityEP6MEInfo */
/* Demangled: MeMc::PixelME_MbAvailability(MEInfo*) */
int _ZN4MeMc22PixelME_MbAvailabilityEP6MEInfo(void);

/* Symbol: _ZN4MeMc13MEPrepareCandEP9MPME_Infoiiiiiiii */
/* Demangled: MeMc::MEPrepareCand(MPME_Info*, int, int, int, int, int, int, int, int) */
int _ZN4MeMc13MEPrepareCandEP9MPME_Infoiiiiiiii(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _ZTV6MTKAis */
/* Demangled: vtable for MTKAis */
extern void* _ZTV6MTKAis;

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN4MeMc20PixelME_MedianFilterEiii */
/* Demangled: MeMc::PixelME_MedianFilter(int, int, int) */
int _ZN4MeMc20PixelME_MedianFilterEiii(void);

/* Symbol: _ZTV11AppMfbllTmp */
/* Demangled: vtable for AppMfbllTmp */
extern void* _ZTV11AppMfbllTmp;

/* Symbol: _ZTV6AppBss */
/* Demangled: vtable for AppBss */
extern void* _ZTV6AppBss;

/* Symbol: _ZN4MeMc10ConfMapGenEP13ME_OUT_STRUCT */
/* Demangled: MeMc::ConfMapGen(ME_OUT_STRUCT*) */
int _ZN4MeMc10ConfMapGenEP13ME_OUT_STRUCT(void);

/* Symbol: _ZN11AppMfbllTmpD0Ev */
/* Demangled: AppMfbllTmp::~AppMfbllTmp() */
int _ZN11AppMfbllTmpD0Ev(void);

/* Symbol: _ZN4MeMc14Median9_MINT32EPi */
/* Demangled: MeMc::Median9_MINT32(int*) */
int _ZN4MeMc14Median9_MINT32EPi(void);

/* Symbol: _ZN8AppMfbll15destroyInstanceEv */
/* Demangled: AppMfbll::destroyInstance() */
int _ZN8AppMfbll15destroyInstanceEv(void);

/* Symbol: _ZN6AppAis16G2MParseGyroListEP17AIS_PROC2_PARA_IN */
/* Demangled: AppAis::G2MParseGyroList(AIS_PROC2_PARA_IN*) */
int _ZN6AppAis16G2MParseGyroListEP17AIS_PROC2_PARA_IN(void);

/* Symbol: _ZTV8AppMfbll */
/* Demangled: vtable for AppMfbll */
extern void* _ZTV8AppMfbll;

/* Symbol: _ZN19AisGyroToMotionCore13resetBaseGridEv */
/* Demangled: AisGyroToMotionCore::resetBaseGrid() */
int _ZN19AisGyroToMotionCore13resetBaseGridEv(void);

/* Symbol: _ZN4MeMc19UpdateSmallCrossSADEPhPi */
/* Demangled: MeMc::UpdateSmallCrossSAD(unsigned char*, int*) */
int _ZN4MeMc19UpdateSmallCrossSADEPhPi(void);

/* Symbol: _ZN4MeMc20Memc_MeMbRowsProcessEP13ME_OUT_STRUCT */
/* Demangled: MeMc::Memc_MeMbRowsProcess(ME_OUT_STRUCT*) */
int _ZN4MeMc20Memc_MeMbRowsProcessEP13ME_OUT_STRUCT(void);

/* Symbol: _ZN6AppBss9BssThreadEPvP6rtinfo */
/* Demangled: AppBss::BssThread(void*, rtinfo*) */
int _ZN6AppBss9BssThreadEPvP6rtinfo(void);

/* Symbol: _ZN9AppAisTmp15destroyInstanceEv */
/* Demangled: AppAisTmp::destroyInstance() */
int _ZN9AppAisTmp15destroyInstanceEv(void);

/* Symbol: _ZN6AppAis14G2MPrepareDataEjRi */
/* Demangled: AppAis::G2MPrepareData(unsigned int, int&) */
int _ZN6AppAis14G2MPrepareDataEjRi(void);

/* Symbol: _ZN4MeMc21xMedia2ME_PixelMe_JCLEP6MEInfoPhS2_ */
/* Demangled: MeMc::xMedia2ME_PixelMe_JCL(MEInfo*, unsigned char*, unsigned char*) */
int _ZN4MeMc21xMedia2ME_PixelMe_JCLEP6MEInfoPhS2_(void);

/* Symbol: _ZN6AppAis7G2MInitEP17AIS_PROC2_PARA_IN */
/* Demangled: AppAis::G2MInit(AIS_PROC2_PARA_IN*) */
int _ZN6AppAis7G2MInitEP17AIS_PROC2_PARA_IN(void);

/* Symbol: _ZN9AppBssTmp15destroyInstanceEv */
/* Demangled: AppBssTmp::destroyInstance() */
int _ZN9AppBssTmp15destroyInstanceEv(void);

/* Symbol: _ZN8AppMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_ */
/* Demangled: AppMfbll::MfbllMain(MFBLL_PROC_ENUM, void*, void*) */
int _ZN8AppMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_(void);

/* Symbol: _ZN6AppAis17FrameNumDecision2EP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT */
/* Demangled: AppAis::FrameNumDecision2(AIS_PROC2_PARA_IN*, AIS_PROC2_PARA_OUT*) */
int _ZN6AppAis17FrameNumDecision2EP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT(void);

/* Symbol: _ZN9AppBssTmpD0Ev */
/* Demangled: AppBssTmp::~AppBssTmp() */
int _ZN9AppBssTmpD0Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore15queryLogBufSizeEv */
/* Demangled: AisGyroToMotionCore::queryLogBufSize() */
int _ZN19AisGyroToMotionCore15queryLogBufSizeEv(void);

/* Symbol: aaiIntp4TapHB */
/* Demangled: aaiIntp4TapHB */
extern void* aaiIntp4TapHB;

/* Symbol: _ZN6MTKAisD0Ev */
/* Demangled: MTKAis::~MTKAis() */
int _ZN6MTKAisD0Ev(void);

/* Symbol: _ZN8AppMfbllC2Ev */
/* Demangled: AppMfbll::AppMfbll() */
int _ZN8AppMfbllC2Ev(void);

/* Symbol: _ZN6AppBss9BssNfrm_GEP16BSS_INPUT_DATA_GP15BSS_OUTPUT_DATA */
/* Demangled: AppBss::BssNfrm_G(BSS_INPUT_DATA_G*, BSS_OUTPUT_DATA*) */
int _ZN6AppBss9BssNfrm_GEP16BSS_INPUT_DATA_GP15BSS_OUTPUT_DATA(void);

/* Symbol: _ZN6MTKBss7BssInitEPvS0_ */
/* Demangled: MTKBss::BssInit(void*, void*) */
int _ZN6MTKBss7BssInitEPvS0_(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZN4MeMc6CalSADEP9MPME_InfoP11cand_mv_2_sii */
/* Demangled: MeMc::CalSAD(MPME_Info*, cand_mv_2_s*, int, int) */
int _ZN4MeMc6CalSADEP9MPME_InfoP11cand_mv_2_sii(void);

/* Symbol: _ZN4MeMc8McOvlpBkEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh */
/* Demangled: MeMc::McOvlpBk(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
int _ZN4MeMc8McOvlpBkEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void);

/* Symbol: _ZN4MeMc10MeMcThreadEPvP6rtinfo */
/* Demangled: MeMc::MeMcThread(void*, rtinfo*) */
int _ZN4MeMc10MeMcThreadEPvP6rtinfo(void);

/* Symbol: _ZN6MTKBssD0Ev */
/* Demangled: MTKBss::~MTKBss() */
int _ZN6MTKBssD0Ev(void);

/* Symbol: _ZN19AisGyroToMotionCore13getResultAddrEv */
/* Demangled: AisGyroToMotionCore::getResultAddr() */
int _ZN19AisGyroToMotionCore13getResultAddrEv(void);

/* Symbol: _ZN4MeMc14ConfMapPaddingEP11BlkConfInfoP6MEInfoiiii */
/* Demangled: MeMc::ConfMapPadding(BlkConfInfo*, MEInfo*, int, int, int, int) */
int _ZN4MeMc14ConfMapPaddingEP11BlkConfInfoP6MEInfoiiii(void);

/* Symbol: aaiIntp4TapH1 */
/* Demangled: aaiIntp4TapH1 */
extern void* aaiIntp4TapH1;

/* Symbol: _ZN4MeMc19UpdateLargeCrossSADEPhPi */
/* Demangled: MeMc::UpdateLargeCrossSAD(unsigned char*, int*) */
int _ZN4MeMc19UpdateLargeCrossSADEPhPi(void);

/* Symbol: _ZN4MeMc10MedianN_i4EPii */
/* Demangled: MeMc::MedianN_i4(int*, int) */
int _ZN4MeMc10MedianN_i4EPii(void);

/* Symbol: _ZN6AppAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_ */
/* Demangled: AppAis::AisFeatureCtrl(AIS_FTCTRL_ENUM, void*, void*) */
int _ZN6AppAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_(void);

/* Symbol: _ZN9AppAisTmp11getInstanceEv */
/* Demangled: AppAisTmp::getInstance() */
int _ZN9AppAisTmp11getInstanceEv(void);

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN6MTKAisD2Ev */
/* Demangled: MTKAis::~MTKAis() */
int _ZN6MTKAisD2Ev(void);

/* Symbol: _ZN4MeMc21BaseBufferFillPaddingEPhS0_S0_ */
/* Demangled: MeMc::BaseBufferFillPadding(unsigned char*, unsigned char*, unsigned char*) */
int _ZN4MeMc21BaseBufferFillPaddingEPhS0_S0_(void);

/* Symbol: _ZN4MeMc12MEDoOneBlockEP9MPME_Infoiiiiiiii */
/* Demangled: MeMc::MEDoOneBlock(MPME_Info*, int, int, int, int, int, int, int, int) */
int _ZN4MeMc12MEDoOneBlockEP9MPME_Infoiiiiiiii(void);

/* Symbol: _ZN8AppMfbllD0Ev */
/* Demangled: AppMfbll::~AppMfbll() */
int _ZN8AppMfbllD0Ev(void);

/* Symbol: _ZN6AppAis11getInstanceEv */
/* Demangled: AppAis::getInstance() */
int _ZN6AppAis11getInstanceEv(void);

/* Symbol: _ZN8MTKMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_ */
/* Demangled: MTKMfbll::MfbllMain(MFBLL_PROC_ENUM, void*, void*) */
int _ZN8MTKMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_(void);

/* Symbol: _ZN4MeMc16Cand_Penalty_CalEP6MEInfoP9cand_mv_s */
/* Demangled: MeMc::Cand_Penalty_Cal(MEInfo*, cand_mv_s*) */
int _ZN4MeMc16Cand_Penalty_CalEP6MEInfoP9cand_mv_s(void);

/* Symbol: _ZN4MeMc16Memc_AllocateBufEPh */
/* Demangled: MeMc::Memc_AllocateBuf(unsigned char*) */
int _ZN4MeMc16Memc_AllocateBufEPh(void);

/* Symbol: _ZN4MeMc8McDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh */
/* Demangled: MeMc::McDirect(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
int _ZN4MeMc8McDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_MFNR_H */
