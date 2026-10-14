/*
 * Reverse-Engineered Source for: libcamalgo.mfnr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libcamalgo_mfnr"

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
#include "libcamalgo_mfnr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AppAis::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis15destroyInstanceEv(void) {
    ALOGD("_ZN6AppAis15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AppBss::BssMain(BSS_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss7BssMainE13BSS_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN6AppBss7BssMainE13BSS_PROC_ENUMPvS1_() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: AppAis::~AppAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAisD0Ev(void) {
    ALOGD("_ZN6AppAisD0Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::setWorkingBuf(char*) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore13setWorkingBufEPc(void) {
    ALOGD("_ZN19AisGyroToMotionCore13setWorkingBufEPc() called");
    return 0;
}

/* Demangled: MTKMfbll::MfbllReset() */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbll10MfbllResetEv(void) {
    ALOGD("_ZN8MTKMfbll10MfbllResetEv() called");
    return 0;
}

/* Demangled: AppAis::AppAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAisC1Ev(void) {
    ALOGD("_ZN6AppAisC1Ev() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: MeMc::Memc_SetProcInfo(MEMC_SET_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc16Memc_SetProcInfoEP20MEMC_SET_INFO_STRUCT(void) {
    ALOGD("_ZN4MeMc16Memc_SetProcInfoEP20MEMC_SET_INFO_STRUCT() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::GyroToMotionCoreInit() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore20GyroToMotionCoreInitEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore20GyroToMotionCoreInitEv() called");
    return 0;
}

/* Demangled: MTKAis::createInstance(DRVAisObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAis14createInstanceE14DRVAisObject_s(void) {
    ALOGD("_ZN6MTKAis14createInstanceE14DRVAisObject_s() called");
    return 0;
}

/* Demangled: AppAis::AisReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis8AisResetEv(void) {
    ALOGD("_ZN6AppAis8AisResetEv() called");
    return 0;
}

/* Demangled: MeMc::xMedia2ME_SearchCand_16x8(MEInfo*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc25xMedia2ME_SearchCand_16x8EP6MEInfoPhii(void) {
    ALOGD("_ZN4MeMc25xMedia2ME_SearchCand_16x8EP6MEInfoPhii() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: MeMc::CalVARDC(MPME_Info*, unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc8CalVARDCEP9MPME_InfoPhh(void) {
    ALOGD("_ZN4MeMc8CalVARDCEP9MPME_InfoPhh() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: MeMc::CalPenalty(MPME_Info*, cand_mv_2_s*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10CalPenaltyEP9MPME_InfoP11cand_mv_2_siii(void) {
    ALOGD("_ZN4MeMc10CalPenaltyEP9MPME_InfoP11cand_mv_2_siii() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: MeMc::McDirect_422(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12McDirect_422EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void) {
    ALOGD("_ZN4MeMc12McDirect_422EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh() called");
    return 0;
}

/* Demangled: MTKAis::AisInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAis7AisInitEPvS0_(void) {
    ALOGD("_ZN6MTKAis7AisInitEPvS0_() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: MeMc::GMV_Push(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc8GMV_PushEiiii(void) {
    ALOGD("_ZN4MeMc8GMV_PushEiiii() called");
    return 0;
}

/* Demangled: AppMfbll::AppMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbllC1Ev(void) {
    ALOGD("_ZN8AppMfbllC1Ev() called");
    return 0;
}

/* Demangled: MeMc::GMV_Pop(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc7GMV_PopEi(void) {
    ALOGD("_ZN4MeMc7GMV_PopEi() called");
    return 0;
}

/* Demangled: AppMfbll::~AppMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbllD2Ev(void) {
    ALOGD("_ZN8AppMfbllD2Ev() called");
    return 0;
}

/* Demangled: AppBss::BssNfrm(BSS_INPUT_DATA*, BSS_OUTPUT_DATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss7BssNfrmEP14BSS_INPUT_DATAP15BSS_OUTPUT_DATA(void) {
    ALOGD("_ZN6AppBss7BssNfrmEP14BSS_INPUT_DATAP15BSS_OUTPUT_DATA() called");
    return 0;
}

/* Demangled: MeMc::MvUpscale_2nd(ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc13MvUpscale_2ndEP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc13MvUpscale_2ndEP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: MTKBss::~MTKBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBssD2Ev(void) {
    ALOGD("_ZN6MTKBssD2Ev() called");
    return 0;
}

/* Exported Object: vtable for AppAis */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppAis = NULL;

/* Demangled: AisGyroToMotionCore::matProduct(double*, float const*, double const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore10matProductEPdPKfPKdiii(void) {
    ALOGD("_ZN19AisGyroToMotionCore10matProductEPdPKfPKdiii() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::getLogBufAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore13getLogBufAddrEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore13getLogBufAddrEv() called");
    return 0;
}

/* Demangled: MeMc::Memc_Init(MEMC_INIT_PARAM_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc9Memc_InitEP22MEMC_INIT_PARAM_STRUCT(void) {
    ALOGD("_ZN4MeMc9Memc_InitEP22MEMC_INIT_PARAM_STRUCT() called");
    return 0;
}

/* Demangled: MeMc::OverFillPixel(MEInfo*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc13OverFillPixelEP6MEInfoPhii(void) {
    ALOGD("_ZN4MeMc13OverFillPixelEP6MEInfoPhii() called");
    return 0;
}

/* Demangled: MTKBss::BssReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBss8BssResetEv(void) {
    ALOGD("_ZN6MTKBss8BssResetEv() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: MeMc::CalConfMvIdx(int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12CalConfMvIdxEi(void) {
    ALOGD("_ZN4MeMc12CalConfMvIdxEi() called");
    return 0;
}

/* Demangled: AppAis::~AppAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAisD1Ev(void) {
    ALOGD("_ZN6AppAisD1Ev() called");
    return 0;
}

/* Demangled: AppBssTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppBssTmp11getInstanceEv(void) {
    ALOGD("_ZN9AppBssTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: AppMfbllTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11AppMfbllTmp15destroyInstanceEv(void) {
    ALOGD("_ZN11AppMfbllTmp15destroyInstanceEv() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: AppAis::AppAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAisC2Ev(void) {
    ALOGD("_ZN6AppAisC2Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::AisGyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCoreC1Ev(void) {
    ALOGD("_ZN19AisGyroToMotionCoreC1Ev() called");
    return 0;
}

/* Demangled: AppMfbll::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll11getInstanceEv(void) {
    ALOGD("_ZN8AppMfbll11getInstanceEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCoreD1Ev(void) {
    ALOGD("_ZN19AisGyroToMotionCoreD1Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCoreD2Ev(void) {
    ALOGD("_ZN19AisGyroToMotionCoreD2Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::matProduct(double*, double const*, double const*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore10matProductEPdPKdS2_iii(void) {
    ALOGD("_ZN19AisGyroToMotionCore10matProductEPdPKdS2_iii() called");
    return 0;
}

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

/* Demangled: MeMc::PixelME_Get(location_e, MEInfo*, mvp_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc11PixelME_GetE10location_eP6MEInfoP5mvp_s(void) {
    ALOGD("_ZN4MeMc11PixelME_GetE10location_eP6MEInfoP5mvp_s() called");
    return 0;
}

/* Demangled: MTKMfbll::~MTKMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbllD0Ev(void) {
    ALOGD("_ZN8MTKMfbllD0Ev() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: AisGyroToMotionCore::getInfoAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11getInfoAddrEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore11getInfoAddrEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::destroyInstance(AisGyroToMotionCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN19AisGyroToMotionCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::ExportBMGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore12ExportBMGridEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore12ExportBMGridEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::utilCos(double) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore7utilCosEd(void) {
    ALOGD("_ZN19AisGyroToMotionCore7utilCosEd() called");
    return 0;
}

/* Demangled: MeMc::MeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMcC2Ev(void) {
    ALOGD("_ZN4MeMcC2Ev() called");
    return 0;
}

/* Exported Object: vtable for AppBssTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AppBssTmp = NULL;

/* Demangled: MTKBss::BssMain(BSS_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBss7BssMainE13BSS_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN6MTKBss7BssMainE13BSS_PROC_ENUMPvS1_() called");
    return 0;
}

/* Exported Object: vtable for MTKBss */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKBss = NULL;

/* Demangled: AppAis::Ais_sim_dump_golden(AIS_PROC_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis19Ais_sim_dump_goldenE13AIS_PROC_ENUMPv(void) {
    ALOGD("_ZN6AppAis19Ais_sim_dump_goldenE13AIS_PROC_ENUMPv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::grid_to_mv(double const*) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore10grid_to_mvEPKd(void) {
    ALOGD("_ZN19AisGyroToMotionCore10grid_to_mvEPKd() called");
    return 0;
}

/* Demangled: AppBss::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss15destroyInstanceEv(void) {
    ALOGD("_ZN6AppBss15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::calBaseGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11calBaseGridEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore11calBaseGridEv() called");
    return 0;
}

/* Demangled: MeMc::~MeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMcD2Ev(void) {
    ALOGD("_ZN4MeMcD2Ev() called");
    return 0;
}

/* Demangled: MTKMfbll::MfbllInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbll9MfbllInitEPvS0_(void) {
    ALOGD("_ZN8MTKMfbll9MfbllInitEPvS0_() called");
    return 0;
}

/* Demangled: AppMfbll::MfbllFeatureCtrl(MFBLL_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN8AppMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::integrateAR(int, double*, double, double) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11integrateAREiPddd(void) {
    ALOGD("_ZN19AisGyroToMotionCore11integrateAREiPddd() called");
    return 0;
}

/* Demangled: AppBss::~AppBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBssD2Ev(void) {
    ALOGD("_ZN6AppBssD2Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11getInstanceEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore11getInstanceEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::AisGyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCoreC2Ev(void) {
    ALOGD("_ZN19AisGyroToMotionCoreC2Ev() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: AppAis::AisMain(AIS_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis7AisMainE13AIS_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN6AppAis7AisMainE13AIS_PROC_ENUMPvS1_() called");
    return 0;
}

/* Demangled: MTKMfbll::MfbllFeatureCtrl(MFBLL_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN8MTKMfbll16MfbllFeatureCtrlE17MFBLL_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Demangled: MTKBss::BssFeatureCtrl(BSS_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN6MTKBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Demangled: MeMc::MultiPassME() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc11MultiPassMEEv(void) {
    ALOGD("_ZN4MeMc11MultiPassMEEv() called");
    return 0;
}

/* Demangled: MeMc::Mvfiltering(ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc11MvfilteringEP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc11MvfilteringEP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: MeMc::PixelME_Prediction(MEInfo*, mvp_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc18PixelME_PredictionEP6MEInfoP5mvp_s(void) {
    ALOGD("_ZN4MeMc18PixelME_PredictionEP6MEInfoP5mvp_s() called");
    return 0;
}

/* Demangled: AppMfbll::MfbllInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll9MfbllInitEPvS0_(void) {
    ALOGD("_ZN8AppMfbll9MfbllInitEPvS0_() called");
    return 0;
}

/* Demangled: MeMc::xMedia2_PixelIpol_FullScale(MEInfo*, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc27xMedia2_PixelIpol_FullScaleEP6MEInfoPhii(void) {
    ALOGD("_ZN4MeMc27xMedia2_PixelIpol_FullScaleEP6MEInfoPhii() called");
    return 0;
}

/* Demangled: AppBss::BssInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss7BssInitEPvS0_(void) {
    ALOGD("_ZN6AppBss7BssInitEPvS0_() called");
    return 0;
}

/* Exported Object: aaiIntp4TapH0 */
extern "C" __attribute__((visibility("default"))) void* aaiIntp4TapH0 = NULL;

/* Demangled: AppMfbllTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN11AppMfbllTmp11getInstanceEv(void) {
    ALOGD("_ZN11AppMfbllTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKAis::AisReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAis8AisResetEv(void) {
    ALOGD("_ZN6MTKAis8AisResetEv() called");
    return 0;
}

/* Demangled: MeMc::Memc_CalcuBuffSize() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc18Memc_CalcuBuffSizeEv(void) {
    ALOGD("_ZN4MeMc18Memc_CalcuBuffSizeEv() called");
    return 0;
}

/* Exported Object: vtable for AppAisTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AppAisTmp = NULL;

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: MeMc::ConfMapFlt(BlkConfInfo*, MEInfo*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10ConfMapFltEP11BlkConfInfoP6MEInfoi(void) {
    ALOGD("_ZN4MeMc10ConfMapFltEP11BlkConfInfoP6MEInfoi() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: MTKBss::createInstance(DRVBssObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBss14createInstanceE14DRVBssObject_s(void) {
    ALOGD("_ZN6MTKBss14createInstanceE14DRVBssObject_s() called");
    return 0;
}

/* Demangled: MeMc::xMediaME_InputMad_16x8(MEInfo*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc22xMediaME_InputMad_16x8EP6MEInfoPh(void) {
    ALOGD("_ZN4MeMc22xMediaME_InputMad_16x8EP6MEInfoPh() called");
    return 0;
}

/* Demangled: MeMc::MeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMcC1Ev(void) {
    ALOGD("_ZN4MeMcC1Ev() called");
    return 0;
}

/* Exported Object: vtable for MTKMfbll */
extern "C" __attribute__((visibility("default"))) void* _ZTV8MTKMfbll = NULL;

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: AppAis::~AppAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAisD2Ev(void) {
    ALOGD("_ZN6AppAisD2Ev() called");
    return 0;
}

/* Demangled: MeMc::CalConfIdxExceptMv(BlkConfInfo*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc18CalConfIdxExceptMvEP11BlkConfInfoi(void) {
    ALOGD("_ZN4MeMc18CalConfIdxExceptMvEP11BlkConfInfoi() called");
    return 0;
}

/* Demangled: AppAis::Ais_sim_dump_setting(AIS_PROC_ENUM, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis20Ais_sim_dump_settingE13AIS_PROC_ENUMPv(void) {
    ALOGD("_ZN6AppAis20Ais_sim_dump_settingE13AIS_PROC_ENUMPv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::~AisGyroToMotionCore() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCoreD0Ev(void) {
    ALOGD("_ZN19AisGyroToMotionCoreD0Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::utilSqrt_long(unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore13utilSqrt_longEyi(void) {
    ALOGD("_ZN19AisGyroToMotionCore13utilSqrt_longEyi() called");
    return 0;
}

/* Demangled: AppAis::UpdateAE(AIS_PROC2_PARA_IN*, AIS_PROC2_PARA_OUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis8UpdateAEEP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT(void) {
    ALOGD("_ZN6AppAis8UpdateAEEP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT() called");
    return 0;
}

/* Demangled: MeMc::~MeMc() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMcD1Ev(void) {
    ALOGD("_ZN4MeMcD1Ev() called");
    return 0;
}

/* Demangled: AppBss::AppBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBssC1Ev(void) {
    ALOGD("_ZN6AppBssC1Ev() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: AppBss::~AppBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBssD0Ev(void) {
    ALOGD("_ZN6AppBssD0Ev() called");
    return 0;
}

/* Demangled: MTKMfbll::~MTKMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbllD2Ev(void) {
    ALOGD("_ZN8MTKMfbllD2Ev() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: MeMc::MVDecision(MPME_Info*, cand_mv_2_s*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10MVDecisionEP9MPME_InfoP11cand_mv_2_sii(void) {
    ALOGD("_ZN4MeMc10MVDecisionEP9MPME_InfoP11cand_mv_2_sii() called");
    return 0;
}

/* Exported Object: vtable for AisGyroToMotionCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV19AisGyroToMotionCore = NULL;

/* Demangled: MeMc::Memc_McProcessDirect(MC_OUT_STRUCT*, ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc20Memc_McProcessDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc20Memc_McProcessDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::utilSin(double) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore7utilSinEd(void) {
    ALOGD("_ZN19AisGyroToMotionCore7utilSinEd() called");
    return 0;
}

/* Demangled: MTKMfbll::createInstance(DRVMfbllObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbll14createInstanceE16DRVMfbllObject_s(void) {
    ALOGD("_ZN8MTKMfbll14createInstanceE16DRVMfbllObject_s() called");
    return 0;
}

/* Demangled: AppBss::BssReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss8BssResetEv(void) {
    ALOGD("_ZN6AppBss8BssResetEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::memoryShift() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11memoryShiftEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore11memoryShiftEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::utilSqrt(int) */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore8utilSqrtEi(void) {
    ALOGD("_ZN19AisGyroToMotionCore8utilSqrtEi() called");
    return 0;
}

/* Demangled: AppAisTmp::~AppAisTmp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppAisTmpD0Ev(void) {
    ALOGD("_ZN9AppAisTmpD0Ev() called");
    return 0;
}

/* Demangled: MeMc::McDirect_420(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12McDirect_420EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void) {
    ALOGD("_ZN4MeMc12McDirect_420EP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh() called");
    return 0;
}

/* Demangled: AppBss::BssFeatureCtrl(BSS_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN6AppBss14BssFeatureCtrlE15BSS_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: AppBss::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss11getInstanceEv(void) {
    ALOGD("_ZN6AppBss11getInstanceEv() called");
    return 0;
}

/* Demangled: AppAis::G2MRun(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis6G2MRunEj(void) {
    ALOGD("_ZN6AppAis6G2MRunEj() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::preprocess() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore10preprocessEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore10preprocessEv() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::GyroToMotionCoreMain() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore20GyroToMotionCoreMainEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore20GyroToMotionCoreMainEv() called");
    return 0;
}

/* Demangled: AppAis::AisInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis7AisInitEPvS0_(void) {
    ALOGD("_ZN6AppAis7AisInitEPvS0_() called");
    return 0;
}

/* Demangled: MeMc::yuy2_to_yv16(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12yuy2_to_yv16EPhS0_jj(void) {
    ALOGD("_ZN4MeMc12yuy2_to_yv16EPhS0_jj() called");
    return 0;
}

/* Demangled: AppMfbll::MfbllReset() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll10MfbllResetEv(void) {
    ALOGD("_ZN8AppMfbll10MfbllResetEv() called");
    return 0;
}

/* Demangled: AppBss::AppBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBssC2Ev(void) {
    ALOGD("_ZN6AppBssC2Ev() called");
    return 0;
}

/* Demangled: AppBss::~AppBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBssD1Ev(void) {
    ALOGD("_ZN6AppBssD1Ev() called");
    return 0;
}

/* Demangled: MTKAis::AisMain(AIS_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAis7AisMainE13AIS_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN6MTKAis7AisMainE13AIS_PROC_ENUMPvS1_() called");
    return 0;
}

/* Demangled: MeMc::median3x3_JCL(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc13median3x3_JCLEiiiiiiiii(void) {
    ALOGD("_ZN4MeMc13median3x3_JCLEiiiiiiiii() called");
    return 0;
}

/* Demangled: MeMc::GMV_BIN_init() */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12GMV_BIN_initEv(void) {
    ALOGD("_ZN4MeMc12GMV_BIN_initEv() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: MeMc::HalfPixelSad_xMedia2_16x8(MEInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc25HalfPixelSad_xMedia2_16x8EP6MEInfo(void) {
    ALOGD("_ZN4MeMc25HalfPixelSad_xMedia2_16x8EP6MEInfo() called");
    return 0;
}

/* Demangled: MeMc::MvUpscale(ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc9MvUpscaleEP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc9MvUpscaleEP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: AppMfbll::~AppMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbllD1Ev(void) {
    ALOGD("_ZN8AppMfbllD1Ev() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: MeMc::PixelME_HalfpixelGuess_xMedia2(MEInfo*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc30PixelME_HalfpixelGuess_xMedia2EP6MEInfoPh(void) {
    ALOGD("_ZN4MeMc30PixelME_HalfpixelGuess_xMedia2EP6MEInfoPh() called");
    return 0;
}

/* Demangled: MeMc::mv_choice(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc9mv_choiceEiii(void) {
    ALOGD("_ZN4MeMc9mv_choiceEiii() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: AppAis::FrameNumDecision(AIS_PROC1_PARA_IN*, AIS_PROC1_PARA_OUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis16FrameNumDecisionEP17AIS_PROC1_PARA_INP18AIS_PROC1_PARA_OUT(void) {
    ALOGD("_ZN6AppAis16FrameNumDecisionEP17AIS_PROC1_PARA_INP18AIS_PROC1_PARA_OUT() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::getProcAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore11getProcAddrEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore11getProcAddrEv() called");
    return 0;
}

/* Demangled: MTKAis::AisFeatureCtrl(AIS_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN6MTKAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: MeMc::PixelME_MbAvailability(MEInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc22PixelME_MbAvailabilityEP6MEInfo(void) {
    ALOGD("_ZN4MeMc22PixelME_MbAvailabilityEP6MEInfo() called");
    return 0;
}

/* Demangled: MeMc::MEPrepareCand(MPME_Info*, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc13MEPrepareCandEP9MPME_Infoiiiiiiii(void) {
    ALOGD("_ZN4MeMc13MEPrepareCandEP9MPME_Infoiiiiiiii() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Exported Object: vtable for MTKAis */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKAis = NULL;

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: MeMc::PixelME_MedianFilter(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc20PixelME_MedianFilterEiii(void) {
    ALOGD("_ZN4MeMc20PixelME_MedianFilterEiii() called");
    return 0;
}

/* Exported Object: vtable for AppMfbllTmp */
extern "C" __attribute__((visibility("default"))) void* _ZTV11AppMfbllTmp = NULL;

/* Exported Object: vtable for AppBss */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppBss = NULL;

/* Demangled: MeMc::ConfMapGen(ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10ConfMapGenEP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc10ConfMapGenEP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: AppMfbllTmp::~AppMfbllTmp() */
extern "C" __attribute__((visibility("default"))) int _ZN11AppMfbllTmpD0Ev(void) {
    ALOGD("_ZN11AppMfbllTmpD0Ev() called");
    return 0;
}

/* Demangled: MeMc::Median9_MINT32(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc14Median9_MINT32EPi(void) {
    ALOGD("_ZN4MeMc14Median9_MINT32EPi() called");
    return 0;
}

/* Demangled: AppMfbll::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll15destroyInstanceEv(void) {
    ALOGD("_ZN8AppMfbll15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AppAis::G2MParseGyroList(AIS_PROC2_PARA_IN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis16G2MParseGyroListEP17AIS_PROC2_PARA_IN(void) {
    ALOGD("_ZN6AppAis16G2MParseGyroListEP17AIS_PROC2_PARA_IN() called");
    return 0;
}

/* Exported Object: vtable for AppMfbll */
extern "C" __attribute__((visibility("default"))) void* _ZTV8AppMfbll = NULL;

/* Demangled: AisGyroToMotionCore::resetBaseGrid() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore13resetBaseGridEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore13resetBaseGridEv() called");
    return 0;
}

/* Demangled: MeMc::UpdateSmallCrossSAD(unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc19UpdateSmallCrossSADEPhPi(void) {
    ALOGD("_ZN4MeMc19UpdateSmallCrossSADEPhPi() called");
    return 0;
}

/* Demangled: MeMc::Memc_MeMbRowsProcess(ME_OUT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc20Memc_MeMbRowsProcessEP13ME_OUT_STRUCT(void) {
    ALOGD("_ZN4MeMc20Memc_MeMbRowsProcessEP13ME_OUT_STRUCT() called");
    return 0;
}

/* Demangled: AppBss::BssThread(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss9BssThreadEPvP6rtinfo(void) {
    ALOGD("_ZN6AppBss9BssThreadEPvP6rtinfo() called");
    return 0;
}

/* Demangled: AppAisTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppAisTmp15destroyInstanceEv(void) {
    ALOGD("_ZN9AppAisTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AppAis::G2MPrepareData(unsigned int, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis14G2MPrepareDataEjRi(void) {
    ALOGD("_ZN6AppAis14G2MPrepareDataEjRi() called");
    return 0;
}

/* Demangled: MeMc::xMedia2ME_PixelMe_JCL(MEInfo*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc21xMedia2ME_PixelMe_JCLEP6MEInfoPhS2_(void) {
    ALOGD("_ZN4MeMc21xMedia2ME_PixelMe_JCLEP6MEInfoPhS2_() called");
    return 0;
}

/* Demangled: AppAis::G2MInit(AIS_PROC2_PARA_IN*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis7G2MInitEP17AIS_PROC2_PARA_IN(void) {
    ALOGD("_ZN6AppAis7G2MInitEP17AIS_PROC2_PARA_IN() called");
    return 0;
}

/* Demangled: AppBssTmp::destroyInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppBssTmp15destroyInstanceEv(void) {
    ALOGD("_ZN9AppBssTmp15destroyInstanceEv() called");
    return 0;
}

/* Demangled: AppMfbll::MfbllMain(MFBLL_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN8AppMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_() called");
    return 0;
}

/* Demangled: AppAis::FrameNumDecision2(AIS_PROC2_PARA_IN*, AIS_PROC2_PARA_OUT*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis17FrameNumDecision2EP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT(void) {
    ALOGD("_ZN6AppAis17FrameNumDecision2EP17AIS_PROC2_PARA_INP18AIS_PROC2_PARA_OUT() called");
    return 0;
}

/* Demangled: AppBssTmp::~AppBssTmp() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppBssTmpD0Ev(void) {
    ALOGD("_ZN9AppBssTmpD0Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::queryLogBufSize() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore15queryLogBufSizeEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore15queryLogBufSizeEv() called");
    return 0;
}

/* Exported Object: aaiIntp4TapHB */
extern "C" __attribute__((visibility("default"))) void* aaiIntp4TapHB = NULL;

/* Demangled: MTKAis::~MTKAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAisD0Ev(void) {
    ALOGD("_ZN6MTKAisD0Ev() called");
    return 0;
}

/* Demangled: AppMfbll::AppMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbllC2Ev(void) {
    ALOGD("_ZN8AppMfbllC2Ev() called");
    return 0;
}

/* Demangled: AppBss::BssNfrm_G(BSS_INPUT_DATA_G*, BSS_OUTPUT_DATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppBss9BssNfrm_GEP16BSS_INPUT_DATA_GP15BSS_OUTPUT_DATA(void) {
    ALOGD("_ZN6AppBss9BssNfrm_GEP16BSS_INPUT_DATA_GP15BSS_OUTPUT_DATA() called");
    return 0;
}

/* Demangled: MTKBss::BssInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBss7BssInitEPvS0_(void) {
    ALOGD("_ZN6MTKBss7BssInitEPvS0_() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: MeMc::CalSAD(MPME_Info*, cand_mv_2_s*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc6CalSADEP9MPME_InfoP11cand_mv_2_sii(void) {
    ALOGD("_ZN4MeMc6CalSADEP9MPME_InfoP11cand_mv_2_sii() called");
    return 0;
}

/* Demangled: MeMc::McOvlpBk(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc8McOvlpBkEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void) {
    ALOGD("_ZN4MeMc8McOvlpBkEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh() called");
    return 0;
}

/* Demangled: MeMc::MeMcThread(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10MeMcThreadEPvP6rtinfo(void) {
    ALOGD("_ZN4MeMc10MeMcThreadEPvP6rtinfo() called");
    return 0;
}

/* Demangled: MTKBss::~MTKBss() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKBssD0Ev(void) {
    ALOGD("_ZN6MTKBssD0Ev() called");
    return 0;
}

/* Demangled: AisGyroToMotionCore::getResultAddr() */
extern "C" __attribute__((visibility("default"))) int _ZN19AisGyroToMotionCore13getResultAddrEv(void) {
    ALOGD("_ZN19AisGyroToMotionCore13getResultAddrEv() called");
    return 0;
}

/* Demangled: MeMc::ConfMapPadding(BlkConfInfo*, MEInfo*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc14ConfMapPaddingEP11BlkConfInfoP6MEInfoiiii(void) {
    ALOGD("_ZN4MeMc14ConfMapPaddingEP11BlkConfInfoP6MEInfoiiii() called");
    return 0;
}

/* Exported Object: aaiIntp4TapH1 */
extern "C" __attribute__((visibility("default"))) void* aaiIntp4TapH1 = NULL;

/* Demangled: MeMc::UpdateLargeCrossSAD(unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc19UpdateLargeCrossSADEPhPi(void) {
    ALOGD("_ZN4MeMc19UpdateLargeCrossSADEPhPi() called");
    return 0;
}

/* Demangled: MeMc::MedianN_i4(int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc10MedianN_i4EPii(void) {
    ALOGD("_ZN4MeMc10MedianN_i4EPii() called");
    return 0;
}

/* Demangled: AppAis::AisFeatureCtrl(AIS_FTCTRL_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_(void) {
    ALOGD("_ZN6AppAis14AisFeatureCtrlE15AIS_FTCTRL_ENUMPvS1_() called");
    return 0;
}

/* Demangled: AppAisTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppAisTmp11getInstanceEv(void) {
    ALOGD("_ZN9AppAisTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: MTKAis::~MTKAis() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKAisD2Ev(void) {
    ALOGD("_ZN6MTKAisD2Ev() called");
    return 0;
}

/* Demangled: MeMc::BaseBufferFillPadding(unsigned char*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc21BaseBufferFillPaddingEPhS0_S0_(void) {
    ALOGD("_ZN4MeMc21BaseBufferFillPaddingEPhS0_S0_() called");
    return 0;
}

/* Demangled: MeMc::MEDoOneBlock(MPME_Info*, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc12MEDoOneBlockEP9MPME_Infoiiiiiiii(void) {
    ALOGD("_ZN4MeMc12MEDoOneBlockEP9MPME_Infoiiiiiiii() called");
    return 0;
}

/* Demangled: AppMfbll::~AppMfbll() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppMfbllD0Ev(void) {
    ALOGD("_ZN8AppMfbllD0Ev() called");
    return 0;
}

/* Demangled: AppAis::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppAis11getInstanceEv(void) {
    ALOGD("_ZN6AppAis11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKMfbll::MfbllMain(MFBLL_PROC_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN8MTKMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_(void) {
    ALOGD("_ZN8MTKMfbll9MfbllMainE15MFBLL_PROC_ENUMPvS1_() called");
    return 0;
}

/* Demangled: MeMc::Cand_Penalty_Cal(MEInfo*, cand_mv_s*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc16Cand_Penalty_CalEP6MEInfoP9cand_mv_s(void) {
    ALOGD("_ZN4MeMc16Cand_Penalty_CalEP6MEInfoP9cand_mv_s() called");
    return 0;
}

/* Demangled: MeMc::Memc_AllocateBuf(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc16Memc_AllocateBufEPh(void) {
    ALOGD("_ZN4MeMc16Memc_AllocateBufEPh() called");
    return 0;
}

/* Demangled: MeMc::McDirect(MC_OUT_STRUCT*, ME_OUT_STRUCT*, unsigned int, unsigned int, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN4MeMc8McDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh(void) {
    ALOGD("_ZN4MeMc8McDirectEP13MC_OUT_STRUCTP13ME_OUT_STRUCTjjPh() called");
    return 0;
}
