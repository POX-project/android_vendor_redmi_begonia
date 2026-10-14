/*
 * Reverse-Engineered Source for: libcamalgo.vpunr.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamalgo_vpunr"

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
#include "libcamalgo_vpunr.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: AppVPUIIR::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR11getInstanceEv(void) {
    ALOGD("_ZN9AppVPUIIR11getInstanceEv() called");
    return 0;
}

/* Demangled: HFGCore::Init(NRInitInfo*, NRImageInfo*, NRBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer(void) {
    ALOGD("_ZN7HFGCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer() called");
    return 0;
}

/* Demangled: IIRCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore11getInstanceEv(void) {
    ALOGD("_ZN7IIRCore11getInstanceEv() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: MTKNR::NRReset() */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKNR7NRResetEv(void) {
    ALOGD("_ZN5MTKNR7NRResetEv() called");
    return 0;
}

/* Exported Object: vtable for MTKNR */
extern "C" __attribute__((visibility("default"))) void* _ZTV5MTKNR = NULL;

/* Demangled: AppIIR::AppIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIRC2Ev(void) {
    ALOGD("_ZN6AppIIRC2Ev() called");
    return 0;
}

/* Demangled: AppIIR::~AppIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIRD1Ev(void) {
    ALOGD("_ZN6AppIIRD1Ev() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRInit(NRInitInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR6NRInitEP10NRInitInfoPj(void) {
    ALOGD("_ZN9AppVPUIIR6NRInitEP10NRInitInfoPj() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS3_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS3_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS3_VEPvP6rtinfo() called");
    return 0;
}

/* Exported Object: vtable for AppIIR */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppIIR = NULL;

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: AppIIR::NRSaveImage(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR11NRSaveImageEi(void) {
    ALOGD("_ZN6AppIIR11NRSaveImageEi() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: AppIIR::NRInit(NRInitInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR6NRInitEP10NRInitInfoPj(void) {
    ALOGD("_ZN6AppIIR6NRInitEP10NRInitInfoPj() called");
    return 0;
}

/* Demangled: VPUIIRCore::PixelDiff_V_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore13PixelDiff_V_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore13PixelDiff_V_VEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS1_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS1_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS1_VEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::~VPUIIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCoreD2Ev(void) {
    ALOGD("_ZN10VPUIIRCoreD2Ev() called");
    return 0;
}

/* Demangled: HFGCore::~HFGCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCoreD2Ev(void) {
    ALOGD("_ZN7HFGCoreD2Ev() called");
    return 0;
}

/* Demangled: CCRCore::Init(NRInitInfo*, NRImageInfo*, NRBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer(void) {
    ALOGD("_ZN7CCRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Exported Object: CCR2_WORSE */
extern "C" __attribute__((visibility("default"))) void* CCR2_WORSE = NULL;

/* Demangled: CCRCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore11getInstanceEv(void) {
    ALOGD("_ZN7CCRCore11getInstanceEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS2_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS2_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS2_VEPvP6rtinfo() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: MTKNR::NRMain(NRImageInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKNR6NRMainEP11NRImageInfoPj(void) {
    ALOGD("_ZN5MTKNR6NRMainEP11NRImageInfoPj() called");
    return 0;
}

/* Exported Object: vtable for AppVPUIIR */
extern "C" __attribute__((visibility("default"))) void* _ZTV9AppVPUIIR = NULL;

/* Demangled: VPUIIRCore::Buff_Cache_Sync() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore15Buff_Cache_SyncEv(void) {
    ALOGD("_ZN10VPUIIRCore15Buff_Cache_SyncEv() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: HFGCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore11getInstanceEv(void) {
    ALOGD("_ZN7HFGCore11getInstanceEv() called");
    return 0;
}

/* Demangled: AppIIR::NRSaveConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR12NRSaveConfigEv(void) {
    ALOGD("_ZN6AppIIR12NRSaveConfigEv() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: AppIIR::destroyInstance(MTKNR*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR15destroyInstanceEP5MTKNR(void) {
    ALOGD("_ZN6AppIIR15destroyInstanceEP5MTKNR() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: CCRCore::~CCRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCoreD2Ev(void) {
    ALOGD("_ZN7CCRCoreD2Ev() called");
    return 0;
}

/* Demangled: AppVPUIIR::destroyInstance(MTKNR*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR15destroyInstanceEP5MTKNR(void) {
    ALOGD("_ZN9AppVPUIIR15destroyInstanceEP5MTKNR() called");
    return 0;
}

/* Demangled: IIRCore::destroyInstance(IIRCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN7IIRCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: AppIIR::NRFeatureCtrl(NR_FEATURE_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_(void) {
    ALOGD("_ZN6AppIIR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_() called");
    return 0;
}

/* Demangled: CCRCore::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore6UninitEv(void) {
    ALOGD("_ZN7CCRCore6UninitEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIRMain(NRImageInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore7IIRMainEP11NRImageInfo(void) {
    ALOGD("_ZN10VPUIIRCore7IIRMainEP11NRImageInfo() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: IIRCore::~IIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCoreD2Ev(void) {
    ALOGD("_ZN7IIRCoreD2Ev() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: AppIIR::NRReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR7NRResetEv(void) {
    ALOGD("_ZN6AppIIR7NRResetEv() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRMain(NRImageInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR6NRMainEP11NRImageInfoPj(void) {
    ALOGD("_ZN9AppVPUIIR6NRMainEP11NRImageInfoPj() called");
    return 0;
}

/* Demangled: AppVPUIIR::AppVPUIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIRC2Ev(void) {
    ALOGD("_ZN9AppVPUIIRC2Ev() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStage2() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9VPUStage2Ev(void) {
    ALOGD("_ZN10VPUIIRCore9VPUStage2Ev() called");
    return 0;
}

/* Demangled: AppIIR::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR11getInstanceEv(void) {
    ALOGD("_ZN6AppIIR11getInstanceEv() called");
    return 0;
}

/* Demangled: AppVPUIIR::~AppVPUIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIRD1Ev(void) {
    ALOGD("_ZN9AppVPUIIRD1Ev() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRFeatureCtrl(NR_FEATURE_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_(void) {
    ALOGD("_ZN9AppVPUIIR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_() called");
    return 0;
}

/* Demangled: HFGCore::HFG_GetGaussianRandomNumber(unsigned int&, unsigned int&, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore27HFG_GetGaussianRandomNumberERjS0_S0_(void) {
    ALOGD("_ZN7HFGCore27HFG_GetGaussianRandomNumberERjS0_S0_() called");
    return 0;
}

/* Demangled: CCRCore::CCRMain(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore7CCRMainEi(void) {
    ALOGD("_ZN7CCRCore7CCRMainEi() called");
    return 0;
}

/* Demangled: AppIIR::~AppIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIRD2Ev(void) {
    ALOGD("_ZN6AppIIRD2Ev() called");
    return 0;
}

/* Exported Object: VPU_CCR2_WORSE */
extern "C" __attribute__((visibility("default"))) void* VPU_CCR2_WORSE = NULL;

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Exported Object: VPU_IIR_WORSE */
extern "C" __attribute__((visibility("default"))) void* VPU_IIR_WORSE = NULL;

/* Exported Object: IIR_WORSE */
extern "C" __attribute__((visibility("default"))) void* IIR_WORSE = NULL;

/* Demangled: IIRCore::Init(NRInitInfo*, NRImageInfo*, NRBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer(void) {
    ALOGD("_ZN7IIRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer() called");
    return 0;
}

/* Demangled: HFGCore::HFG_init_seed(unsigned int&, unsigned int&, unsigned int&, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore13HFG_init_seedERjS0_S0_j(void) {
    ALOGD("_ZN7HFGCore13HFG_init_seedERjS0_S0_j() called");
    return 0;
}

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: IIRCore::IIR_PASS1(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore9IIR_PASS1EPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore9IIR_PASS1EPvP6rtinfo() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUIIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCoreC1Ev(void) {
    ALOGD("_ZN10VPUIIRCoreC1Ev() called");
    return 0;
}

/* Demangled: HFGCore::HFGCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCoreC1Ev(void) {
    ALOGD("_ZN7HFGCoreC1Ev() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: VPUIIRCore::~VPUIIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCoreD0Ev(void) {
    ALOGD("_ZN10VPUIIRCoreD0Ev() called");
    return 0;
}

/* Demangled: CCRCore::ProcessThread(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore13ProcessThreadEPvP6rtinfo(void) {
    ALOGD("_ZN7CCRCore13ProcessThreadEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS4(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9IIR_PASS4EPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore9IIR_PASS4EPvP6rtinfo() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Demangled: VPUIIRCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11getInstanceEv(void) {
    ALOGD("_ZN10VPUIIRCore11getInstanceEv() called");
    return 0;
}

/* Demangled: IIRCore::IIR_PASS2(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore9IIR_PASS2EPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore9IIR_PASS2EPvP6rtinfo() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: VPUIIRCore::VPUInit() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore7VPUInitEv(void) {
    ALOGD("_ZN10VPUIIRCore7VPUInitEv() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRReset() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR7NRResetEv(void) {
    ALOGD("_ZN9AppVPUIIR7NRResetEv() called");
    return 0;
}

/* Demangled: CCRCore::CCRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCoreC1Ev(void) {
    ALOGD("_ZN7CCRCoreC1Ev() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: IIRCore::IIRMain(NRImageInfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore7IIRMainEP11NRImageInfo(void) {
    ALOGD("_ZN7IIRCore7IIRMainEP11NRImageInfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::PixelDiff_H_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore13PixelDiff_H_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore13PixelDiff_H_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::Init(NRInitInfo*, NRImageInfo*, NRBuffer*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer(void) {
    ALOGD("_ZN10VPUIIRCore4InitEP10NRInitInfoP11NRImageInfoP8NRBuffer() called");
    return 0;
}

/* Demangled: HFGCore::HFG_GetGaussianRandomNumber4(unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore28HFG_GetGaussianRandomNumber4EPjS0_S0_(void) {
    ALOGD("_ZN7HFGCore28HFG_GetGaussianRandomNumber4EPjS0_S0_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: IIRCore::IIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCoreC1Ev(void) {
    ALOGD("_ZN7IIRCoreC1Ev() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStage3() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9VPUStage3Ev(void) {
    ALOGD("_ZN10VPUIIRCore9VPUStage3Ev() called");
    return 0;
}

/* Demangled: AppVPUIIR::~AppVPUIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIRD2Ev(void) {
    ALOGD("_ZN9AppVPUIIRD2Ev() called");
    return 0;
}

/* Demangled: AppIIR::NRMain(NRImageInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIR6NRMainEP11NRImageInfoPj(void) {
    ALOGD("_ZN6AppIIR6NRMainEP11NRImageInfoPj() called");
    return 0;
}

/* Demangled: IIRCore::~IIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCoreD0Ev(void) {
    ALOGD("_ZN7IIRCoreD0Ev() called");
    return 0;
}

/* Demangled: HFGCore::Process_Y(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore9Process_YEPvP6rtinfo(void) {
    ALOGD("_ZN7HFGCore9Process_YEPvP6rtinfo() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: IIRCore::IIR_PASS3(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore9IIR_PASS3EPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore9IIR_PASS3EPvP6rtinfo() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStageAll() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11VPUStageAllEv(void) {
    ALOGD("_ZN10VPUIIRCore11VPUStageAllEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStage0() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9VPUStage0Ev(void) {
    ALOGD("_ZN10VPUIIRCore9VPUStage0Ev() called");
    return 0;
}

/* Demangled: HFGCore::destroyInstance(HFGCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN7HFGCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: AppIIR::AppIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIRC1Ev(void) {
    ALOGD("_ZN6AppIIRC1Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: AppIIR::~AppIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppIIRD0Ev(void) {
    ALOGD("_ZN6AppIIRD0Ev() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: IIRCore::IIR_DOWN(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore8IIR_DOWNEPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore8IIR_DOWNEPvP6rtinfo() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Exported Object: HFG2_WORSE */
extern "C" __attribute__((visibility("default"))) void* HFG2_WORSE = NULL;

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRSaveImage(int) */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR11NRSaveImageEi(void) {
    ALOGD("_ZN9AppVPUIIR11NRSaveImageEi() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUIIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCoreC2Ev(void) {
    ALOGD("_ZN10VPUIIRCoreC2Ev() called");
    return 0;
}

/* Demangled: HFGCore::HFGCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCoreC2Ev(void) {
    ALOGD("_ZN7HFGCoreC2Ev() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: HFGCore::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore6UninitEv(void) {
    ALOGD("_ZN7HFGCore6UninitEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::~VPUIIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCoreD1Ev(void) {
    ALOGD("_ZN10VPUIIRCoreD1Ev() called");
    return 0;
}

/* Exported Object: vtable for VPUIIRCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV10VPUIIRCore = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: HFGCore::~HFGCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCoreD1Ev(void) {
    ALOGD("_ZN7HFGCoreD1Ev() called");
    return 0;
}

/* Demangled: MTKNR::createInstance(DRVNRObject_s) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKNR14createInstanceE13DRVNRObject_s(void) {
    ALOGD("_ZN5MTKNR14createInstanceE13DRVNRObject_s() called");
    return 0;
}

/* Demangled: HFGCore::HFG_LUT_SLOPE_64(int, int, int, int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore16HFG_LUT_SLOPE_64Eiiiiiiiiiiii(void) {
    ALOGD("_ZN7HFGCore16HFG_LUT_SLOPE_64Eiiiiiiiiiiii() called");
    return 0;
}

/* Demangled: VPUIIRCore::PixelDiff_H_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore13PixelDiff_H_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore13PixelDiff_H_VEPvP6rtinfo() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: VPUIIRCore::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore6UninitEv(void) {
    ALOGD("_ZN10VPUIIRCore6UninitEv() called");
    return 0;
}

/* Demangled: IIRCore::Uninit() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore6UninitEv(void) {
    ALOGD("_ZN7IIRCore6UninitEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS4_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS4_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS4_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: AppNRTmp::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN8AppNRTmp11getInstanceEv(void) {
    ALOGD("_ZN8AppNRTmp11getInstanceEv() called");
    return 0;
}

/* Demangled: MTKNR::NRFeatureCtrl(NR_FEATURE_ENUM, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKNR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_(void) {
    ALOGD("_ZN5MTKNR13NRFeatureCtrlE15NR_FEATURE_ENUMPvS1_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: IIRCore::IIR_PASS4(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore9IIR_PASS4EPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore9IIR_PASS4EPvP6rtinfo() called");
    return 0;
}

/* Demangled: IIRCore::PixelDiff(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCore9PixelDiffEPvP6rtinfo(void) {
    ALOGD("_ZN7IIRCore9PixelDiffEPvP6rtinfo() called");
    return 0;
}

/* Demangled: CCRCore::destroyInstance(CCRCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN7CCRCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: MTKNR::NRInit(NRInitInfo*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN5MTKNR6NRInitEP10NRInitInfoPj(void) {
    ALOGD("_ZN5MTKNR6NRInitEP10NRInitInfoPj() called");
    return 0;
}

/* Exported Object: vtable for IIRCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV7IIRCore = NULL;

/* Demangled: CCRCore::CCRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCoreC2Ev(void) {
    ALOGD("_ZN7CCRCoreC2Ev() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS2_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS2_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS2_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: AppVPUIIR::NRSaveConfig() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIR12NRSaveConfigEv(void) {
    ALOGD("_ZN9AppVPUIIR12NRSaveConfigEv() called");
    return 0;
}

/* Demangled: CCRCore::~CCRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCoreD1Ev(void) {
    ALOGD("_ZN7CCRCoreD1Ev() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_DOWN(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore8IIR_DOWNEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore8IIR_DOWNEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS3_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS3_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS3_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::Blending(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore8BlendingEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore8BlendingEPvP6rtinfo() called");
    return 0;
}

/* Demangled: IIRCore::IIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCoreC2Ev(void) {
    ALOGD("_ZN7IIRCoreC2Ev() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStage4() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9VPUStage4Ev(void) {
    ALOGD("_ZN10VPUIIRCore9VPUStage4Ev() called");
    return 0;
}

/* Demangled: VPUIIRCore::destroyInstance(VPUIIRCore*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore15destroyInstanceEPS_(void) {
    ALOGD("_ZN10VPUIIRCore15destroyInstanceEPS_() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore8VPUResetEv(void) {
    ALOGD("_ZN10VPUIIRCore8VPUResetEv() called");
    return 0;
}

/* Demangled: IIRCore::~IIRCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7IIRCoreD1Ev(void) {
    ALOGD("_ZN7IIRCoreD1Ev() called");
    return 0;
}

/* Demangled: HFGCore::HFGMain() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore7HFGMainEv(void) {
    ALOGD("_ZN7HFGCore7HFGMainEv() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS4_V(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS4_VEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS4_VEPvP6rtinfo() called");
    return 0;
}

/* Demangled: VPUIIRCore::PixelDiff_V_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore13PixelDiff_V_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore13PixelDiff_V_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: VPUIIRCore::IIR_PASS1_U(void*, rtinfo*) */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore11IIR_PASS1_UEPvP6rtinfo(void) {
    ALOGD("_ZN10VPUIIRCore11IIR_PASS1_UEPvP6rtinfo() called");
    return 0;
}

/* Demangled: HFGCore::HFG_GetLumaGain_LUT(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore19HFG_GetLumaGain_LUTEi(void) {
    ALOGD("_ZN7HFGCore19HFG_GetLumaGain_LUTEi() called");
    return 0;
}

/* Exported Object: VPU_HFG2_WORSE */
extern "C" __attribute__((visibility("default"))) void* VPU_HFG2_WORSE = NULL;

/* Demangled: HFGCore::HFG_print_reg() */
extern "C" __attribute__((visibility("default"))) int _ZN7HFGCore13HFG_print_regEv(void) {
    ALOGD("_ZN7HFGCore13HFG_print_regEv() called");
    return 0;
}

/* Demangled: AppVPUIIR::AppVPUIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIRC1Ev(void) {
    ALOGD("_ZN9AppVPUIIRC1Ev() called");
    return 0;
}

/* Demangled: CCRCore::Process_UV(CCR_ITERATION_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7CCRCore10Process_UVEP20CCR_ITERATION_STRUCT(void) {
    ALOGD("_ZN7CCRCore10Process_UVEP20CCR_ITERATION_STRUCT() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: VPUIIRCore::VPUStage1() */
extern "C" __attribute__((visibility("default"))) int _ZN10VPUIIRCore9VPUStage1Ev(void) {
    ALOGD("_ZN10VPUIIRCore9VPUStage1Ev() called");
    return 0;
}

/* Demangled: AppVPUIIR::~AppVPUIIR() */
extern "C" __attribute__((visibility("default"))) int _ZN9AppVPUIIRD0Ev(void) {
    ALOGD("_ZN9AppVPUIIRD0Ev() called");
    return 0;
}
