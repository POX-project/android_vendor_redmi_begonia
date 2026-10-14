/*
 * Reverse-Engineered Source for: libcamalgo.lsc.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamalgo_lsc"

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
#include "libcamalgo_lsc.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: poly_ratio */
extern "C" __attribute__((visibility("default"))) void* poly_ratio = NULL;

/* Demangled: TsfCore::init_tsf_config(shading_config&, int*, TSF_CORE_EXIF_DATA*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15init_tsf_configER14shading_configPiP18TSF_CORE_EXIF_DATA(void) {
    ALOGD("_ZN7TsfCore15init_tsf_configER14shading_configPiP18TSF_CORE_EXIF_DATA() called");
    return 0;
}

/* Demangled: TsfCore::awb_smallavg_optwv_fast(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore23awb_smallavg_optwv_fastEPtS0_iiP10RGB_STRUCTiiii(void) {
    ALOGD("_ZN7TsfCore23awb_smallavg_optwv_fastEPtS0_iiP10RGB_STRUCTiiii() called");
    return 0;
}

/* Demangled: shading_align_golden(SHADIND_ALIGN_CONF, int) */
extern "C" __attribute__((visibility("default"))) int _Z20shading_align_golden18SHADIND_ALIGN_CONFi(void) {
    ALOGD("_Z20shading_align_golden18SHADIND_ALIGN_CONFi() called");
    return 0;
}

/* Demangled: __aeabi_frsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_frsub(void) {
    ALOGD("__aeabi_frsub() called");
    return 0;
}

/* Demangled: TsfCore::resample_rfk_coef(int, int, void*, int*, int&, int*, int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17resample_rfk_coefEiiPvPiRiS1_S2_i(void) {
    ALOGD("_ZN7TsfCore17resample_rfk_coefEiiPvPiRiS1_S2_i() called");
    return 0;
}

/* Demangled: TsfCore::tsf_tbl_crcb_gain(int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17tsf_tbl_crcb_gainEPii(void) {
    ALOGD("_ZN7TsfCore17tsf_tbl_crcb_gainEPii() called");
    return 0;
}

/* Exported Object: vtable for TsfCore */
extern "C" __attribute__((visibility("default"))) void* _ZTV7TsfCore = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: TsfCore::TSF_round(double) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore9TSF_roundEd(void) {
    ALOGD("_ZN7TsfCore9TSF_roundEd() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF14TsfCoreProcessEv(void) {
    ALOGD("_ZN10TsfCore_IF14TsfCoreProcessEv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Exported Object: g_col_idx */
extern "C" __attribute__((visibility("default"))) void* g_col_idx = NULL;

/* Demangled: __floatundisf */
extern "C" __attribute__((visibility("default"))) int __floatundisf(void) {
    ALOGD("__floatundisf() called");
    return 0;
}

/* Demangled: MTKLscUtil::LscRaSwMain(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil11LscRaSwMainEPv(void) {
    ALOGD("_ZN10MTKLscUtil11LscRaSwMainEPv() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGenTbl(LSC_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13TsfCoreGenTblEP11LSC_PARAM_T(void) {
    ALOGD("_ZN7TsfCore13TsfCoreGenTblEP11LSC_PARAM_T() called");
    return 0;
}

/* Exported Object: up_lut */
extern "C" __attribute__((visibility("default"))) void* up_lut = NULL;

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreExit() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore11TsfCoreExitEv(void) {
    ALOGD("_ZN7TsfCore11TsfCoreExitEv() called");
    return 0;
}

/* Demangled: TsfCore::compute_flat_wt(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15compute_flat_wtEiiii(void) {
    ALOGD("_ZN7TsfCore15compute_flat_wtEiiii() called");
    return 0;
}

/* Demangled: vLsc_OB(unsigned short*, unsigned char, unsigned char, unsigned char, unsigned char, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z7vLsc_OBPthhhhjj(void) {
    ALOGD("_Z7vLsc_OBPthhhhjj() called");
    return 0;
}

/* Demangled: TsfCore::comp_tsf_str(int, int, shading_config const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12comp_tsf_strEiiRK14shading_config(void) {
    ALOGD("_ZN7TsfCore12comp_tsf_strEiiRK14shading_config() called");
    return 0;
}

/* Demangled: TsfCore::filter_1d_ext(int*, int*, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13filter_1d_extEPiS0_iS0_ii(void) {
    ALOGD("_ZN7TsfCore13filter_1d_extEPiS0_iS0_ii() called");
    return 0;
}

/* Exported Object: vtable for MTKTsf */
extern "C" __attribute__((visibility("default"))) void* _ZTV6MTKTsf = NULL;

/* Demangled: rectcoef2(float*, float*, float*, float*, float*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z9rectcoef2PfS_S_S_S_Piiiii(void) {
    ALOGD("_Z9rectcoef2PfS_S_S_S_Piiiii() called");
    return 0;
}

/* Demangled: AppLscUtil::~AppLscUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtilD1Ev(void) {
    ALOGD("_ZN10AppLscUtilD1Ev() called");
    return 0;
}

/* Demangled: unw_set_reg */
extern "C" __attribute__((visibility("default"))) int unw_set_reg(void) {
    ALOGD("unw_set_reg() called");
    return 0;
}

/* Demangled: FixedPoint_shadingSplineFromGainData(LSC_PARAM_T*, unsigned int*, unsigned int*, int*, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z36FixedPoint_shadingSplineFromGainDataP11LSC_PARAM_TPjS1_PiPvi(void) {
    ALOGD("_Z36FixedPoint_shadingSplineFromGainDataP11LSC_PARAM_TPjS1_PiPvi() called");
    return 0;
}

/* Demangled: _Unwind_Complete */
extern "C" __attribute__((visibility("default"))) int _Unwind_Complete(void) {
    ALOGD("_Unwind_Complete() called");
    return 0;
}

/* Exported Object: g_lsc_param */
extern "C" __attribute__((visibility("default"))) void* g_lsc_param = NULL;

/* Demangled: TsfCore::CoreDbg(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore7CoreDbgEiiii(void) {
    ALOGD("_ZN7TsfCore7CoreDbgEiiii() called");
    return 0;
}

/* Exported Object: Coef_SignBit_Pos */
extern "C" __attribute__((visibility("default"))) void* Coef_SignBit_Pos = NULL;

/* Demangled: spline(int*, int*, int, float, float, float*) */
extern "C" __attribute__((visibility("default"))) int _Z6splinePiS_iffPf(void) {
    ALOGD("_Z6splinePiS_iffPf() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreMergeLumaTbl(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore19TsfCoreMergeLumaTblEPiS0_(void) {
    ALOGD("_ZN7TsfCore19TsfCoreMergeLumaTblEPiS0_() called");
    return 0;
}

/* Demangled: TsfCore::unpack_tsfhw_de(void*, void const*, int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15unpack_tsfhw_deEPvPKvit(void) {
    ALOGD("_ZN7TsfCore15unpack_tsfhw_deEPvPKvit() called");
    return 0;
}

/* Demangled: spln2v(int*, int*, int, int, float*) */
extern "C" __attribute__((visibility("default"))) int _Z6spln2vPiS_iiPf(void) {
    ALOGD("_Z6spln2vPiS_iiPf() called");
    return 0;
}

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Demangled: TsfCore::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore11getInstanceEv(void) {
    ALOGD("_ZN7TsfCore11getInstanceEv() called");
    return 0;
}

/* Demangled: TsfCore::TsfCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCoreC2Ev(void) {
    ALOGD("_ZN7TsfCoreC2Ev() called");
    return 0;
}

/* Demangled: comp_xy_array(void*, void*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13comp_xy_arrayPvS_Pii(void) {
    ALOGD("_Z13comp_xy_arrayPvS_Pii() called");
    return 0;
}

/* Demangled: AppLscUtil::init_ra_working_buffer(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil22init_ra_working_bufferEPi(void) {
    ALOGD("_ZN10AppLscUtil22init_ra_working_bufferEPi() called");
    return 0;
}

/* Demangled: drvb_crack_heap */
extern "C" __attribute__((visibility("default"))) int drvb_crack_heap(void) {
    ALOGD("drvb_crack_heap() called");
    return 0;
}

/* Demangled: TsfCore::compute_or_str_map(int*, int*, int*, int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18compute_or_str_mapEPiS0_S0_S0_iiS0_(void) {
    ALOGD("_ZN7TsfCore18compute_or_str_mapEPiS0_S0_S0_iiS0_() called");
    return 0;
}

/* Demangled: LscGaintoHWTbl(float*, unsigned int*, int, int, int, int, void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z14LscGaintoHWTblPfPjiiiiPvi(void) {
    ALOGD("_Z14LscGaintoHWTblPfPjiiiiPvi() called");
    return 0;
}

/* Demangled: TsfCore::filter_hor(int*, int*, int, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10filter_horEPiS0_iiS0_ii(void) {
    ALOGD("_ZN7TsfCore10filter_horEPiS0_iiS0_ii() called");
    return 0;
}

/* Demangled: vLSC_Calibration_INIT(unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z21vLSC_Calibration_INITPt(void) {
    ALOGD("_Z21vLSC_Calibration_INITPt() called");
    return 0;
}

/* Demangled: MTKLscUtil::LscZmItpSwMain(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil14LscZmItpSwMainEPv(void) {
    ALOGD("_ZN10MTKLscUtil14LscZmItpSwMainEPv() called");
    return 0;
}

/* Demangled: TsfCore::Shading_TSF_xy_array(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore20Shading_TSF_xy_arrayEii(void) {
    ALOGD("_ZN7TsfCore20Shading_TSF_xy_arrayEii() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Demangled: LscSL2Calcu(TBL_INFO_T, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11LscSL2Calcu10TBL_INFO_Tiiii(void) {
    ALOGD("_Z11LscSL2Calcu10TBL_INFO_Tiiii() called");
    return 0;
}

/* Demangled: comp_xy_grid_gain_LSC_123(void*, unsigned int*, int*, unsigned int*, int, int, _ShadingBlock*) */
extern "C" __attribute__((visibility("default"))) int _Z25comp_xy_grid_gain_LSC_123PvPjPiS0_iiP13_ShadingBlock(void) {
    ALOGD("_Z25comp_xy_grid_gain_LSC_123PvPjPiS0_iiP13_ShadingBlock() called");
    return 0;
}

/* Demangled: __aeabi_ul2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ul2f(void) {
    ALOGD("__aeabi_ul2f() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: compute_spline(shading_calibration_struct*, float*, float*, float*, float*, float*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z14compute_splineP26shading_calibration_structPfS1_S1_S1_S1_Pi(void) {
    ALOGD("_Z14compute_splineP26shading_calibration_structPfS1_S1_S1_S1_Pi() called");
    return 0;
}

/* Exported Object: g_src_tbl_float */
extern "C" __attribute__((visibility("default"))) void* g_src_tbl_float = NULL;

/* Demangled: TsfCore::interp_log_lut(int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore14interp_log_lutEi(void) {
    ALOGD("_ZN7TsfCore14interp_log_lutEi() called");
    return 0;
}

/* Demangled: TsfCore::crop_tsf_gain(int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13crop_tsf_gainEiiiiii(void) {
    ALOGD("_ZN7TsfCore13crop_tsf_gainEiiiiii() called");
    return 0;
}

/* Demangled: TsfCore::mul_rem(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore7mul_remEiiPiS0_(void) {
    ALOGD("_ZN7TsfCore7mul_remEiiPiS0_() called");
    return 0;
}

/* Demangled: TsfCore::clean_map(int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore9clean_mapEPiii(void) {
    ALOGD("_ZN7TsfCore9clean_mapEPiii() called");
    return 0;
}

/* Demangled: mrLSC_POLY_RatioFloat_Get(int, int, RATIO_POLY_T) */
extern "C" __attribute__((visibility("default"))) int _Z25mrLSC_POLY_RatioFloat_Getii12RATIO_POLY_T(void) {
    ALOGD("_Z25mrLSC_POLY_RatioFloat_Getii12RATIO_POLY_T() called");
    return 0;
}

/* Demangled: TsfCore::Shading_TSF_int(void*, int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15Shading_TSF_intEPviiPiS1_S1_(void) {
    ALOGD("_ZN7TsfCore15Shading_TSF_intEPviiPiS1_S1_() called");
    return 0;
}

/* Demangled: hash_starts */
extern "C" __attribute__((visibility("default"))) int hash_starts(void) {
    ALOGD("hash_starts() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreGenTbl(LSC_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF13TsfCoreGenTblEP11LSC_PARAM_T(void) {
    ALOGD("_ZN10TsfCore_IF13TsfCoreGenTblEP11LSC_PARAM_T() called");
    return 0;
}

/* Demangled: u4LSC_Integer_SQRT(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _Z18u4LSC_Integer_SQRTy(void) {
    ALOGD("_Z18u4LSC_Integer_SQRTy() called");
    return 0;
}

/* Demangled: AppLscUtil::~AppLscUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtilD2Ev(void) {
    ALOGD("_ZN10AppLscUtilD2Ev() called");
    return 0;
}

/* Exported Object: g_lsc_cali_info */
extern "C" __attribute__((visibility("default"))) void* g_lsc_cali_info = NULL;

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: MTKTsf::TsfExit() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf7TsfExitEv(void) {
    ALOGD("_ZN6MTKTsf7TsfExitEv() called");
    return 0;
}

/* Demangled: TsfCore::proj_log(int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore8proj_logEiPi(void) {
    ALOGD("_ZN7TsfCore8proj_logEiPi() called");
    return 0;
}

/* Demangled: pack_lsc_coef(LSC_PARAM_T*, int*, unsigned int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13pack_lsc_coefP11LSC_PARAM_TPiPji(void) {
    ALOGD("_Z13pack_lsc_coefP11LSC_PARAM_TPiPji() called");
    return 0;
}

/* Demangled: AppTsf::~AppTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsfD0Ev(void) {
    ALOGD("_ZN6AppTsfD0Ev() called");
    return 0;
}

/* Demangled: TsfCore::parsing_stat(unsigned short*, unsigned char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12parsing_statEPtPKh(void) {
    ALOGD("_ZN7TsfCore12parsing_statEPtPKh() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: TsfCore::init_crcb_map(int*, int*, int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13init_crcb_mapEPiS0_S0_S0_S0_ii(void) {
    ALOGD("_ZN7TsfCore13init_crcb_mapEPiS0_S0_S0_S0_ii() called");
    return 0;
}

/* Demangled: rectcoef(int*, int*, int*, int*, int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z8rectcoefPiS_S_S_S_S_iiii(void) {
    ALOGD("_Z8rectcoefPiS_S_S_S_S_iiii() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGetWorkingBuffSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore25TsfCoreGetWorkingBuffSizeEv(void) {
    ALOGD("_ZN7TsfCore25TsfCoreGetWorkingBuffSizeEv() called");
    return 0;
}

/* Exported Object: vtable for MTKLscUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV10MTKLscUtil = NULL;

/* Demangled: three_way_merge(unsigned int, unsigned int, unsigned int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z15three_way_mergejjjPj(void) {
    ALOGD("_Z15three_way_mergejjjPj() called");
    return 0;
}

/* Demangled: simple_3x3_filter(int*, int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17simple_3x3_filterPiS_iii(void) {
    ALOGD("_Z17simple_3x3_filterPiS_iii() called");
    return 0;
}

/* Demangled: __aeabi_fadd */
extern "C" __attribute__((visibility("default"))) int __aeabi_fadd(void) {
    ALOGD("__aeabi_fadd() called");
    return 0;
}

/* Demangled: __floatdisf */
extern "C" __attribute__((visibility("default"))) int __floatdisf(void) {
    ALOGD("__floatdisf() called");
    return 0;
}

/* Exported Object: g_coef_t_1d */
extern "C" __attribute__((visibility("default"))) void* g_coef_t_1d = NULL;

/* Demangled: TsfCore::compute_M_N(int, int, int, int, int*, int*, int*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore11compute_M_NEiiiiPiS0_S0_S0_S0_i(void) {
    ALOGD("_ZN7TsfCore11compute_M_NEiiiiPiS0_S0_S0_S0_i() called");
    return 0;
}

/* Demangled: shading_transform_new(SHADIND_TRFM_CONF_PSO, SHADING_GAIN_TYPE) */
extern "C" __attribute__((visibility("default"))) int _Z21shading_transform_new21SHADIND_TRFM_CONF_PSO17SHADING_GAIN_TYPE(void) {
    ALOGD("_Z21shading_transform_new21SHADIND_TRFM_CONF_PSO17SHADING_GAIN_TYPE() called");
    return 0;
}

/* Demangled: AppLscUtil::destroyInstance(MTKLscUtil*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil15destroyInstanceEP10MTKLscUtil(void) {
    ALOGD("_ZN10AppLscUtil15destroyInstanceEP10MTKLscUtil() called");
    return 0;
}

/* Demangled: TsfCore::compute_M_N_refine(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18compute_M_N_refineEiiiiPiS0_S0_S0_S0_iS0_ff(void) {
    ALOGD("_ZN7TsfCore18compute_M_N_refineEiiiiPiS0_S0_S0_S0_iS0_ff() called");
    return 0;
}

/* Exported Object: vtable for AppTsf */
extern "C" __attribute__((visibility("default"))) void* _ZTV6AppTsf = NULL;

/* Demangled: TsfCore::awb_smart_preprocessing_NEON(unsigned short*, int, int, unsigned short*, short) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore28awb_smart_preprocessing_NEONEPtiiS0_s(void) {
    ALOGD("_ZN7TsfCore28awb_smart_preprocessing_NEONEPtiiS0_s() called");
    return 0;
}

/* Demangled: TsfCore::upsample_gain_tsf_lsc(int*, int, int, int*, int, int, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore21upsample_gain_tsf_lscEPiiiS0_iiS0_S0_ii(void) {
    ALOGD("_ZN7TsfCore21upsample_gain_tsf_lscEPiiiS0_iiS0_S0_ii() called");
    return 0;
}

/* Demangled: TsfCore_IF::CoreDbg(int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF7CoreDbgEiiii(void) {
    ALOGD("_ZN10TsfCore_IF7CoreDbgEiiii() called");
    return 0;
}

/* Demangled: TsfCore::TSF_right_shift(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15TSF_right_shiftEij(void) {
    ALOGD("_ZN7TsfCore15TSF_right_shiftEij() called");
    return 0;
}

/* Demangled: AppLscUtil::LscZmItpSwInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil14LscZmItpSwInitEPv(void) {
    ALOGD("_ZN10AppLscUtil14LscZmItpSwInitEPv() called");
    return 0;
}

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: TsfCore::merge_coef(int*, int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10merge_coefEPiS0_S0_iiii(void) {
    ALOGD("_ZN7TsfCore10merge_coefEPiS0_S0_iiii() called");
    return 0;
}

/* Demangled: TsfCore::proj_unit_golden() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore16proj_unit_goldenEv(void) {
    ALOGD("_ZN7TsfCore16proj_unit_goldenEv() called");
    return 0;
}

/* Demangled: TsfCore::awb_preprocessing(unsigned short*, int, int, unsigned short*, short) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17awb_preprocessingEPtiiS0_s(void) {
    ALOGD("_ZN7TsfCore17awb_preprocessingEPtiiS0_s() called");
    return 0;
}

/* Demangled: TsfCore::awb_average(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore11awb_averageEPtS0_iiP10RGB_STRUCTii(void) {
    ALOGD("_ZN7TsfCore11awb_averageEPtS0_iiP10RGB_STRUCTii() called");
    return 0;
}

/* Demangled: TsfCore::attenuate_gain(unsigned int*, unsigned int*, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore14attenuate_gainEPjS0_iiiiPi(void) {
    ALOGD("_ZN7TsfCore14attenuate_gainEPjS0_iiiiPi() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: fprintf_fvector_(float*, int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z16fprintf_fvector_PfiPc(void) {
    ALOGD("_Z16fprintf_fvector_PfiPc() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreSetEnvInfo(TSF_CORE_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN10TsfCore_IF17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: drvb_fc_prepare */
extern "C" __attribute__((visibility("default"))) int drvb_fc_prepare(void) {
    ALOGD("drvb_fc_prepare() called");
    return 0;
}

/* Exported Object: vtable for TsfCore_IF */
extern "C" __attribute__((visibility("default"))) void* _ZTV10TsfCore_IF = NULL;

/* Demangled: __aeabi_l2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_l2f(void) {
    ALOGD("__aeabi_l2f() called");
    return 0;
}

/* Demangled: MTKLscUtil::LscVirtualChannel(LSC_RESVERED_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil17LscVirtualChannelEP19LSC_RESVERED_STRUCT(void) {
    ALOGD("_ZN10MTKLscUtil17LscVirtualChannelEP19LSC_RESVERED_STRUCT() called");
    return 0;
}

/* Demangled: TsfCore::comp_shading_sw(int*, int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15comp_shading_swEPiiiiS0_S0_(void) {
    ALOGD("_ZN7TsfCore15comp_shading_swEPiiiiS0_S0_() called");
    return 0;
}

/* Demangled: dump_buf */
extern "C" __attribute__((visibility("default"))) int dump_buf(void) {
    ALOGD("dump_buf() called");
    return 0;
}

/* Demangled: vLSC_Calibration_END() */
extern "C" __attribute__((visibility("default"))) int _Z20vLSC_Calibration_ENDv(void) {
    ALOGD("_Z20vLSC_Calibration_ENDv() called");
    return 0;
}

/* Demangled: AppTsf::TsfFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf14TsfFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6AppTsf14TsfFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: TsfCore::fprintf_ivector(int*, int, char*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15fprintf_ivectorEPiiPc(void) {
    ALOGD("_ZN7TsfCore15fprintf_ivectorEPiiPc() called");
    return 0;
}

/* Demangled: TsfCore::comp_grad_indir(int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15comp_grad_indirEPiS0_S0_ii(void) {
    ALOGD("_ZN7TsfCore15comp_grad_indirEPiS0_S0_ii() called");
    return 0;
}

/* Exported Object: sha1sum */
extern "C" __attribute__((visibility("default"))) void* sha1sum = NULL;

/* Demangled: TsfCore_IF::TsfCoreGetDebugBuffSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF23TsfCoreGetDebugBuffSizeEv(void) {
    ALOGD("_ZN10TsfCore_IF23TsfCoreGetDebugBuffSizeEv() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreGetState() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF15TsfCoreGetStateEv(void) {
    ALOGD("_ZN10TsfCore_IF15TsfCoreGetStateEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: MTKTsf::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf14createInstanceEv(void) {
    ALOGD("_ZN6MTKTsf14createInstanceEv() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Demangled: TsfCore::simple_3x3_filter(int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17simple_3x3_filterEPiS0_ii(void) {
    ALOGD("_ZN7TsfCore17simple_3x3_filterEPiS0_ii() called");
    return 0;
}

/* Demangled: AppTsf::~AppTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsfD1Ev(void) {
    ALOGD("_ZN6AppTsfD1Ev() called");
    return 0;
}

/* Exported Object: g_raw */
extern "C" __attribute__((visibility("default"))) void* g_raw = NULL;

/* Demangled: copy_3d_coef_to_hwcoef(shading_calibration_struct*, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z22copy_3d_coef_to_hwcoefP26shading_calibration_structPjPi(void) {
    ALOGD("_Z22copy_3d_coef_to_hwcoefP26shading_calibration_structPjPi() called");
    return 0;
}

/* Exported Object: g_zz_1d */
extern "C" __attribute__((visibility("default"))) void* g_zz_1d = NULL;

/* Demangled: AppLscUtil::init_zm_working_buffer(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil22init_zm_working_bufferEPi(void) {
    ALOGD("_ZN10AppLscUtil22init_zm_working_bufferEPi() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGetResult(TSF_CORE_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT(void) {
    ALOGD("_ZN7TsfCore16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: lsc_ra(int, unsigned int*, int, int*, void*, _ShadingBlock*) */
extern "C" __attribute__((visibility("default"))) int _Z6lsc_raiPjiPiPvP13_ShadingBlock(void) {
    ALOGD("_Z6lsc_raiPjiPiPvP13_ShadingBlock() called");
    return 0;
}

/* Demangled: TsfCore::destroyInstance(TsfCore_IF*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15destroyInstanceEP10TsfCore_IF(void) {
    ALOGD("_ZN7TsfCore15destroyInstanceEP10TsfCore_IF() called");
    return 0;
}

/* Demangled: compute_fx2(float*, int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11compute_fx2PfPiS0_S0_ii(void) {
    ALOGD("_Z11compute_fx2PfPiS0_S0_ii() called");
    return 0;
}

/* Demangled: TsfCore::MAP_coef(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore8MAP_coefEPiS0_i(void) {
    ALOGD("_ZN7TsfCore8MAP_coefEPiS0_i() called");
    return 0;
}

/* Demangled: hash_update */
extern "C" __attribute__((visibility("default"))) int hash_update(void) {
    ALOGD("hash_update() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreForwardConversion(TSF_CORE_TBL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT(void) {
    ALOGD("_ZN10TsfCore_IF24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT() called");
    return 0;
}

/* Demangled: comp_xy_array_LSC_123(void*, void*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21comp_xy_array_LSC_123PvS_Pii(void) {
    ALOGD("_Z21comp_xy_array_LSC_123PvS_Pii() called");
    return 0;
}

/* Demangled: AppLscUtil::AppLscUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtilC1Ev(void) {
    ALOGD("_ZN10AppLscUtilC1Ev() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Demangled: shading_transform_new(SHADIND_TRFM_CONF) */
extern "C" __attribute__((visibility("default"))) int _Z21shading_transform_new17SHADIND_TRFM_CONF(void) {
    ALOGD("_Z21shading_transform_new17SHADIND_TRFM_CONF() called");
    return 0;
}

/* Demangled: TsfCore::unpack_tsf(unsigned int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10unpack_tsfEPjPiS1_S1_(void) {
    ALOGD("_ZN7TsfCore10unpack_tsfEPjPiS1_S1_() called");
    return 0;
}

/* Demangled: TsfCore::ReorderCaliGain(unsigned int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15ReorderCaliGainEPjii(void) {
    ALOGD("_ZN7TsfCore15ReorderCaliGainEPjii() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreBackwardConversion(TSF_CORE_TBL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT(void) {
    ALOGD("_ZN7TsfCore25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreGetWorkingBuffSize() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF25TsfCoreGetWorkingBuffSizeEv(void) {
    ALOGD("_ZN10TsfCore_IF25TsfCoreGetWorkingBuffSizeEv() called");
    return 0;
}

/* Demangled: AppTsf::TsfMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf7TsfMainEv(void) {
    ALOGD("_ZN6AppTsf7TsfMainEv() called");
    return 0;
}

/* Demangled: TsfCore::mul_pixel_gain(int*, int, int, int, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore14mul_pixel_gainEPiiiiiS0_ii(void) {
    ALOGD("_ZN7TsfCore14mul_pixel_gainEPiiiiiS0_ii() called");
    return 0;
}

/* Demangled: TsfCore::adaShading_crop_fp(int*, int*, int*, int, int, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18adaShading_crop_fpEPiS0_S0_iiiiS0_(void) {
    ALOGD("_ZN7TsfCore18adaShading_crop_fpEPiS0_S0_iiiiS0_() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreMergeLumaTbl(int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF19TsfCoreMergeLumaTblEPiS0_(void) {
    ALOGD("_ZN10TsfCore_IF19TsfCoreMergeLumaTblEPiS0_() called");
    return 0;
}

/* Demangled: TsfCore::filter_ver(int*, int*, int, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10filter_verEPiS0_iiS0_ii(void) {
    ALOGD("_ZN7TsfCore10filter_verEPiS0_iiS0_ii() called");
    return 0;
}

/* Demangled: vLsc_Remap_to_Bayer0(unsigned short*, unsigned short*, unsigned int, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z20vLsc_Remap_to_Bayer0PtS_jji(void) {
    ALOGD("_Z20vLsc_Remap_to_Bayer0PtS_jji() called");
    return 0;
}

/* Demangled: drvb_gettimeofday */
extern "C" __attribute__((visibility("default"))) int drvb_gettimeofday(void) {
    ALOGD("drvb_gettimeofday() called");
    return 0;
}

/* Demangled: TsfCore::merge_gain_cali_src(int*, int*, unsigned int*, LSC_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore19merge_gain_cali_srcEPiS0_PjP11LSC_PARAM_T(void) {
    ALOGD("_ZN7TsfCore19merge_gain_cali_srcEPiS0_PjP11LSC_PARAM_T() called");
    return 0;
}

/* Demangled: MTKTsf::TsfInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf7TsfInitEPvS0_(void) {
    ALOGD("_ZN6MTKTsf7TsfInitEPvS0_() called");
    return 0;
}

/* Demangled: TsfCore::~TsfCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCoreD0Ev(void) {
    ALOGD("_ZN7TsfCoreD0Ev() called");
    return 0;
}

/* Demangled: drvb_error */
extern "C" __attribute__((visibility("default"))) int drvb_error(void) {
    ALOGD("drvb_error() called");
    return 0;
}

/* Exported Object: g_p_sdblk */
extern "C" __attribute__((visibility("default"))) void* g_p_sdblk = NULL;

/* Demangled: compute_fy2(float*, int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11compute_fy2PfPiS0_S0_ii(void) {
    ALOGD("_Z11compute_fy2PfPiS0_S0_ii() called");
    return 0;
}

/* Demangled: spln2h(int*, int*, int, int, float*) */
extern "C" __attribute__((visibility("default"))) int _Z6spln2hPiS_iiPf(void) {
    ALOGD("_Z6spln2hPiS_iiPf() called");
    return 0;
}

/* Demangled: TsfCore::find_gain(int, int&, int const*, int const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore9find_gainEiRiPKiS2_i(void) {
    ALOGD("_ZN7TsfCore9find_gainEiRiPKiS2_i() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: TsfCore::compute_wb_wt(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13compute_wb_wtEiii(void) {
    ALOGD("_ZN7TsfCore13compute_wb_wtEiii() called");
    return 0;
}

/* Demangled: unw_getcontext */
extern "C" __attribute__((visibility("default"))) int unw_getcontext(void) {
    ALOGD("unw_getcontext() called");
    return 0;
}

/* Demangled: TsfCore::adaCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12adaCoreResetEv(void) {
    ALOGD("_ZN7TsfCore12adaCoreResetEv() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreProcess() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore14TsfCoreProcessEv(void) {
    ALOGD("_ZN7TsfCore14TsfCoreProcessEv() called");
    return 0;
}

/* Demangled: AppTsf::~AppTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsfD2Ev(void) {
    ALOGD("_ZN6AppTsfD2Ev() called");
    return 0;
}

/* Demangled: TsfCore::copy_cali_packed_src(unsigned int*, int*, LSC_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore20copy_cali_packed_srcEPjPiP11LSC_PARAM_T(void) {
    ALOGD("_ZN7TsfCore20copy_cali_packed_srcEPjPiP11LSC_PARAM_T() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF12TsfCoreResetEv(void) {
    ALOGD("_ZN10TsfCore_IF12TsfCoreResetEv() called");
    return 0;
}

/* Demangled: TsfCore::TSF_round_left_shift(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore20TSF_round_left_shiftEij(void) {
    ALOGD("_ZN7TsfCore20TSF_round_left_shiftEij() called");
    return 0;
}

/* Demangled: TsfCore::resample_tsf_lsc_rint(int*, int, int, int, int, int, int, shading_config const&, int*, int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore21resample_tsf_lsc_rintEPiiiiiiiRK14shading_configS0_S0_S0_ii(void) {
    ALOGD("_ZN7TsfCore21resample_tsf_lsc_rintEPiiiiiiiRK14shading_configS0_S0_S0_ii() called");
    return 0;
}

/* Demangled: TsfCore::init_tsf_config_member(TSF_CORE_TUNING_PARA*, shading_config*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore22init_tsf_config_memberEP20TSF_CORE_TUNING_PARAP14shading_config(void) {
    ALOGD("_ZN7TsfCore22init_tsf_config_memberEP20TSF_CORE_TUNING_PARAP14shading_config() called");
    return 0;
}

/* Demangled: TsfCore::temporal_smoothing() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18temporal_smoothingEv(void) {
    ALOGD("_ZN7TsfCore18temporal_smoothingEv() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreSetProcInfo(TSF_CORE_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN10TsfCore_IF18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: drvb_f0 */
extern "C" __attribute__((visibility("default"))) int drvb_f0(void) {
    ALOGD("drvb_f0() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGetLog(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13TsfCoreGetLogEPjS0_S0_S0_(void) {
    ALOGD("_ZN7TsfCore13TsfCoreGetLogEPjS0_S0_S0_() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: drvb_f1 */
extern "C" __attribute__((visibility("default"))) int drvb_f1(void) {
    ALOGD("drvb_f1() called");
    return 0;
}

/* Demangled: drvb_f2 */
extern "C" __attribute__((visibility("default"))) int drvb_f2(void) {
    ALOGD("drvb_f2() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}

/* Demangled: AppLscUtil::AppLscUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtilC2Ev(void) {
    ALOGD("_ZN10AppLscUtilC2Ev() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: TsfCore::reverse_shading(RGB_STRUCT*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15reverse_shadingEP10RGB_STRUCTii(void) {
    ALOGD("_ZN7TsfCore15reverse_shadingEP10RGB_STRUCTii() called");
    return 0;
}

/* Demangled: TsfCore::tsf_coef_in_tsf_gain_out(int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore24tsf_coef_in_tsf_gain_outEii(void) {
    ALOGD("_ZN7TsfCore24tsf_coef_in_tsf_gain_outEii() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreGetResult(TSF_CORE_RESULT_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT(void) {
    ALOGD("_ZN10TsfCore_IF16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreForwardConversion(TSF_CORE_TBL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT(void) {
    ALOGD("_ZN7TsfCore24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT() called");
    return 0;
}

/* Demangled: get_heap_offset */
extern "C" __attribute__((visibility("default"))) int get_heap_offset(void) {
    ALOGD("get_heap_offset() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: TsfCore::tsf_core_init_working_buffer(TSF_CORE_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore28tsf_core_init_working_bufferEP24TSF_CORE_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN7TsfCore28tsf_core_init_working_bufferEP24TSF_CORE_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: TsfCore::calc_rfk_coef(float) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13calc_rfk_coefEf(void) {
    ALOGD("_ZN7TsfCore13calc_rfk_coefEf() called");
    return 0;
}

/* Demangled: cal_P */
extern "C" __attribute__((visibility("default"))) int cal_P(void) {
    ALOGD("cal_P() called");
    return 0;
}

/* Demangled: sha1 */
extern "C" __attribute__((visibility("default"))) int sha1(void) {
    ALOGD("sha1() called");
    return 0;
}

/* Demangled: TsfCore::shading_gain(int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12shading_gainEPiS0_iiii(void) {
    ALOGD("_ZN7TsfCore12shading_gainEPiS0_iiii() called");
    return 0;
}

/* Demangled: cal_S */
extern "C" __attribute__((visibility("default"))) int cal_S(void) {
    ALOGD("cal_S() called");
    return 0;
}

/* Demangled: TsfCore::upsample_coef_1d(int, int, int, int*, int&) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore16upsample_coef_1dEiiiPiRi(void) {
    ALOGD("_ZN7TsfCore16upsample_coef_1dEiiiPiRi() called");
    return 0;
}

/* Demangled: AppLscUtil::LscZmItpSwMain(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil14LscZmItpSwMainEPv(void) {
    ALOGD("_ZN10AppLscUtil14LscZmItpSwMainEPv() called");
    return 0;
}

/* Demangled: TsfCore::~TsfCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCoreD1Ev(void) {
    ALOGD("_ZN7TsfCoreD1Ev() called");
    return 0;
}

/* Demangled: TsfCore::SL2_th_extract_from_destination(unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore31SL2_th_extract_from_destinationEPj(void) {
    ALOGD("_ZN7TsfCore31SL2_th_extract_from_destinationEPj() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Exported Object: g_dst_tbl */
extern "C" __attribute__((visibility("default"))) void* g_dst_tbl = NULL;

/* Demangled: AppTsf::TsfReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf8TsfResetEv(void) {
    ALOGD("_ZN6AppTsf8TsfResetEv() called");
    return 0;
}

/* Exported Object: g_zv2_1d */
extern "C" __attribute__((visibility("default"))) void* g_zv2_1d = NULL;

/* Demangled: TsfCore::rfk_coef_1d(int, int, int, int, int*, int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore11rfk_coef_1dEiiiiPiRii(void) {
    ALOGD("_ZN7TsfCore11rfk_coef_1dEiiiiPiRii() called");
    return 0;
}

/* Demangled: drvb_fc_respond */
extern "C" __attribute__((visibility("default"))) int drvb_fc_respond(void) {
    ALOGD("drvb_fc_respond() called");
    return 0;
}

/* Demangled: mrLSC_Calibrate(LSC_CALI_INFO_T, unsigned char, unsigned short, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z15mrLSC_Calibrate15LSC_CALI_INFO_Thth(void) {
    ALOGD("_Z15mrLSC_Calibrate15LSC_CALI_INFO_Thth() called");
    return 0;
}

/* Demangled: TsfCore::xdiv_st1_slim(int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13xdiv_st1_slimEiij(void) {
    ALOGD("_ZN7TsfCore13xdiv_st1_slimEiij() called");
    return 0;
}

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: unpack_cali_gain(LSC_PARAM_T*, unsigned int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16unpack_cali_gainP11LSC_PARAM_TPjPi(void) {
    ALOGD("_Z16unpack_cali_gainP11LSC_PARAM_TPjPi() called");
    return 0;
}

/* Demangled: AppLscUtil::LscRaSwInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil11LscRaSwInitEPv(void) {
    ALOGD("_ZN10AppLscUtil11LscRaSwInitEPv() called");
    return 0;
}

/* Demangled: TsfCore::appro_grad_slim(int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15appro_grad_slimEiiPi(void) {
    ALOGD("_ZN7TsfCore15appro_grad_slimEiiPi() called");
    return 0;
}

/* Demangled: MTKTsf::TsfReset() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf8TsfResetEv(void) {
    ALOGD("_ZN6MTKTsf8TsfResetEv() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Demangled: init_cindex_rindex(LSC_PARAM_T*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z18init_cindex_rindexP11LSC_PARAM_TPiS1_(void) {
    ALOGD("_Z18init_cindex_rindexP11LSC_PARAM_TPiS1_() called");
    return 0;
}

/* Exported Object: g_src_tbl */
extern "C" __attribute__((visibility("default"))) void* g_src_tbl = NULL;

/* Demangled: AppTsf::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf11getInstanceEv(void) {
    ALOGD("_ZN6AppTsf11getInstanceEv() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreExit() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF11TsfCoreExitEv(void) {
    ALOGD("_ZN10TsfCore_IF11TsfCoreExitEv() called");
    return 0;
}

/* Demangled: __floatunsisf */
extern "C" __attribute__((visibility("default"))) int __floatunsisf(void) {
    ALOGD("__floatunsisf() called");
    return 0;
}

/* Demangled: AllocBuf(void*) */
extern "C" __attribute__((visibility("default"))) int _Z8AllocBufPv(void) {
    ALOGD("_Z8AllocBufPv() called");
    return 0;
}

/* Demangled: get_ul */
extern "C" __attribute__((visibility("default"))) int get_ul(void) {
    ALOGD("get_ul() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: TsfCore::copy_cali_src(unsigned int*, int*, LSC_PARAM_T*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13copy_cali_srcEPjPiP11LSC_PARAM_T(void) {
    ALOGD("_ZN7TsfCore13copy_cali_srcEPjPiP11LSC_PARAM_T() called");
    return 0;
}

/* Demangled: callback() */
extern "C" __attribute__((visibility("default"))) int _Z8callbackv(void) {
    ALOGD("_Z8callbackv() called");
    return 0;
}

/* Demangled: TsfCore::init_coef_by_proj(int*, shading_config&, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17init_coef_by_projEPiR14shading_configS0_(void) {
    ALOGD("_ZN7TsfCore17init_coef_by_projEPiR14shading_configS0_() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreConfigSmooth(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF19TsfCoreConfigSmoothEj(void) {
    ALOGD("_ZN10TsfCore_IF19TsfCoreConfigSmoothEj() called");
    return 0;
}

/* Demangled: right_shift(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z11right_shiftij(void) {
    ALOGD("_Z11right_shiftij() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreSetProcInfo(TSF_CORE_PROC_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT(void) {
    ALOGD("_ZN7TsfCore18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT() called");
    return 0;
}

/* Demangled: __addsf3 */
extern "C" __attribute__((visibility("default"))) int __addsf3(void) {
    ALOGD("__addsf3() called");
    return 0;
}

/* Exported Object: MTKLscUtil::file_reversion */
extern "C" __attribute__((visibility("default"))) void* _ZN10MTKLscUtil14file_reversionE = NULL;

/* Demangled: MTKLscUtil::LscRaSwInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil11LscRaSwInitEPv(void) {
    ALOGD("_ZN10MTKLscUtil11LscRaSwInitEPv() called");
    return 0;
}

/* Demangled: TsfCore::linear_weight(int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13linear_weightEiiiii(void) {
    ALOGD("_ZN7TsfCore13linear_weightEiiiii() called");
    return 0;
}

/* Exported Object: g_row_idx */
extern "C" __attribute__((visibility("default"))) void* g_row_idx = NULL;

/* Demangled: AppTsf::AppTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsfC1Ev(void) {
    ALOGD("_ZN6AppTsfC1Ev() called");
    return 0;
}

/* Demangled: TsfCore::apply_or_color_gain(int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore19apply_or_color_gainEPiS0_iiii(void) {
    ALOGD("_ZN7TsfCore19apply_or_color_gainEPiS0_iiii() called");
    return 0;
}

/* Demangled: drvb_fc */
extern "C" __attribute__((visibility("default"))) int drvb_fc(void) {
    ALOGD("drvb_fc() called");
    return 0;
}

/* Demangled: unw_get_proc_info */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_info(void) {
    ALOGD("unw_get_proc_info() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Demangled: TsfCore::shading_coef_to_shading_gain(int*, int, int, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore28shading_coef_to_shading_gainEPiiiS0_i(void) {
    ALOGD("_ZN7TsfCore28shading_coef_to_shading_gainEPiiiS0_i() called");
    return 0;
}

/* Demangled: TsfCore::transform_tsf_mat(int*, int*, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17transform_tsf_matEPiS0_iS0_S0_(void) {
    ALOGD("_ZN7TsfCore17transform_tsf_matEPiS0_iS0_S0_() called");
    return 0;
}

/* Demangled: TsfCore::comp_shading(int*, int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12comp_shadingEPiiiiS0_S0_(void) {
    ALOGD("_ZN7TsfCore12comp_shadingEPiiiiS0_S0_() called");
    return 0;
}

/* Demangled: __aeabi_ui2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_ui2f(void) {
    ALOGD("__aeabi_ui2f() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreSetEnvInfo(TSF_CORE_ENV_INFO_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT(void) {
    ALOGD("_ZN7TsfCore17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT() called");
    return 0;
}

/* Demangled: TsfCore::~TsfCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCoreD2Ev(void) {
    ALOGD("_ZN7TsfCoreD2Ev() called");
    return 0;
}

/* Demangled: comp_xy_grid_gain_LSC_123(void*, unsigned int*, int*, unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, int, _ShadingBlock*) */
extern "C" __attribute__((visibility("default"))) int _Z25comp_xy_grid_gain_LSC_123PvPjPiPtS2_S2_S2_iiP13_ShadingBlock(void) {
    ALOGD("_Z25comp_xy_grid_gain_LSC_123PvPjPiPtS2_S2_S2_iiP13_ShadingBlock() called");
    return 0;
}

/* Exported Object: g_zh2_1d */
extern "C" __attribute__((visibility("default"))) void* g_zh2_1d = NULL;

/* Demangled: lsctbl_to_lscgrid_gain(void*, int*, int*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z22lsctbl_to_lscgrid_gainPvPiS0_S_(void) {
    ALOGD("_Z22lsctbl_to_lscgrid_gainPvPiS0_S_() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreBackwardConversion(TSF_CORE_TBL_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT(void) {
    ALOGD("_ZN10TsfCore_IF25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT() called");
    return 0;
}

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: TsfCore::dl_merge_coef(int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore13dl_merge_coefEPiS0_ii(void) {
    ALOGD("_ZN7TsfCore13dl_merge_coefEPiS0_ii() called");
    return 0;
}

/* Exported Object: g_lsc_result */
extern "C" __attribute__((visibility("default"))) void* g_lsc_result = NULL;

/* Demangled: hash_finish */
extern "C" __attribute__((visibility("default"))) int hash_finish(void) {
    ALOGD("hash_finish() called");
    return 0;
}

/* Demangled: compute_block_length(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20compute_block_lengthiiPiS_(void) {
    ALOGD("_Z20compute_block_lengthiiPiS_() called");
    return 0;
}

/* Demangled: TsfCore::get_ch_img_size(int, int, int*, int*, int*, int*, int, TSF_CORE_SENSOR_CROP_STRUCT*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15get_ch_img_sizeEiiPiS0_S0_S0_iP27TSF_CORE_SENSOR_CROP_STRUCT(void) {
    ALOGD("_ZN7TsfCore15get_ch_img_sizeEiiPiS0_S0_S0_iP27TSF_CORE_SENSOR_CROP_STRUCT() called");
    return 0;
}

/* Demangled: compute_spline(LSC_PARAM_T*, int*, SPLINE_STRUCT*, int) */
extern "C" __attribute__((visibility("default"))) int _Z14compute_splineP11LSC_PARAM_TPiP13SPLINE_STRUCTi(void) {
    ALOGD("_Z14compute_splineP11LSC_PARAM_TPiP13SPLINE_STRUCTi() called");
    return 0;
}

/* Demangled: TsfCore::Shading_TSF_int_gain(void*, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore20Shading_TSF_int_gainEPviiPiS1_(void) {
    ALOGD("_ZN7TsfCore20Shading_TSF_int_gainEPviiPiS1_() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: TsfCore::check_coef(int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10check_coefEPi(void) {
    ALOGD("_ZN7TsfCore10check_coefEPi() called");
    return 0;
}

/* Demangled: TsfCore::TSF_round_right_shift(int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore21TSF_round_right_shiftEij(void) {
    ALOGD("_ZN7TsfCore21TSF_round_right_shiftEij() called");
    return 0;
}

/* Demangled: TsfCore::comp_shading_hw(int*, int, int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15comp_shading_hwEPiiiiS0_S0_(void) {
    ALOGD("_ZN7TsfCore15comp_shading_hwEPiiiiS0_S0_() called");
    return 0;
}

/* Demangled: AppTsf::TsfExit() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf7TsfExitEv(void) {
    ALOGD("_ZN6AppTsf7TsfExitEv() called");
    return 0;
}

/* Demangled: TsfCore::unpack_tsfhw_en(void*, void const*, int, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15unpack_tsfhw_enEPvPKvit(void) {
    ALOGD("_ZN7TsfCore15unpack_tsfhw_enEPvPKvit() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGetState() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15TsfCoreGetStateEv(void) {
    ALOGD("_ZN7TsfCore15TsfCoreGetStateEv() called");
    return 0;
}

/* Demangled: TsfCore::check_flat(int*, int*, int*, int, int, int*, shading_config&, int*, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore10check_flatEPiS0_S0_iiS0_R14shading_configS0_S0_S0_S0_(void) {
    ALOGD("_ZN7TsfCore10check_flatEPiS0_S0_iiS0_R14shading_configS0_S0_S0_S0_() called");
    return 0;
}

/* Demangled: AppTsf::TsfInit(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf7TsfInitEPvS0_(void) {
    ALOGD("_ZN6AppTsf7TsfInitEPvS0_() called");
    return 0;
}

/* Demangled: TsfCore::predict_or_corr_gain(int*, int*, int*, int, int, int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore20predict_or_corr_gainEPiS0_S0_iiiiS0_S0_S0_(void) {
    ALOGD("_ZN7TsfCore20predict_or_corr_gainEPiS0_S0_iiiiS0_S0_S0_() called");
    return 0;
}

/* Demangled: TsfCore::unpack_cali_gain(unsigned int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore16unpack_cali_gainEPjiiPi(void) {
    ALOGD("_ZN7TsfCore16unpack_cali_gainEPjiiPi() called");
    return 0;
}

/* Demangled: MTKLscUtil::LscZmItpSwInit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil14LscZmItpSwInitEPv(void) {
    ALOGD("_ZN10MTKLscUtil14LscZmItpSwInitEPv() called");
    return 0;
}

/* Demangled: TsfCore_IF::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF14createInstanceEv(void) {
    ALOGD("_ZN10TsfCore_IF14createInstanceEv() called");
    return 0;
}

/* Demangled: LscTransGainCalcu(float*, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z17LscTransGainCalcuPfiiPj(void) {
    ALOGD("_Z17LscTransGainCalcuPfiiPj() called");
    return 0;
}

/* Demangled: TsfCore::compute_M_N_refine_cb(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore21compute_M_N_refine_cbEiiiiPiS0_S0_S0_S0_iS0_ff(void) {
    ALOGD("_ZN7TsfCore21compute_M_N_refine_cbEiiiiPiS0_S0_S0_S0_iS0_ff() called");
    return 0;
}

/* Demangled: TsfCore::compute_M_N_refine_cr(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore21compute_M_N_refine_crEiiiiPiS0_S0_S0_S0_iS0_ff(void) {
    ALOGD("_ZN7TsfCore21compute_M_N_refine_crEiiiiPiS0_S0_S0_S0_iS0_ff() called");
    return 0;
}

/* Demangled: shading_transform(SHADIND_TRFM_CONF) */
extern "C" __attribute__((visibility("default"))) int _Z17shading_transform17SHADIND_TRFM_CONF(void) {
    ALOGD("_Z17shading_transform17SHADIND_TRFM_CONF() called");
    return 0;
}

/* Demangled: mrLSC_POLY_Ratio_Get(int, int, RATIO_POLY_T) */
extern "C" __attribute__((visibility("default"))) int _Z20mrLSC_POLY_Ratio_Getii12RATIO_POLY_T(void) {
    ALOGD("_Z20mrLSC_POLY_Ratio_Getii12RATIO_POLY_T() called");
    return 0;
}

/* Exported Object: vtable for AppLscUtil */
extern "C" __attribute__((visibility("default"))) void* _ZTV10AppLscUtil = NULL;

/* Demangled: MTKLscUtil::createInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10MTKLscUtil14createInstanceEv(void) {
    ALOGD("_ZN10MTKLscUtil14createInstanceEv() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Get */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Get(void) {
    ALOGD("_Unwind_VRS_Get() called");
    return 0;
}

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: MTKTsf::TsfMain() */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf7TsfMainEv(void) {
    ALOGD("_ZN6MTKTsf7TsfMainEv() called");
    return 0;
}

/* Demangled: set_ul */
extern "C" __attribute__((visibility("default"))) int set_ul(void) {
    ALOGD("set_ul() called");
    return 0;
}

/* Demangled: AppTsf::AppTsf() */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsfC2Ev(void) {
    ALOGD("_ZN6AppTsfC2Ev() called");
    return 0;
}

/* Demangled: MTKTsf::TsfFeatureCtrl(unsigned int, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6MTKTsf14TsfFeatureCtrlEjPvS0_(void) {
    ALOGD("_ZN6MTKTsf14TsfFeatureCtrlEjPvS0_() called");
    return 0;
}

/* Demangled: __subsf3 */
extern "C" __attribute__((visibility("default"))) int __subsf3(void) {
    ALOGD("__subsf3() called");
    return 0;
}

/* Demangled: TsfCore::compute_tsf_del(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore15compute_tsf_delEPiS0_i(void) {
    ALOGD("_ZN7TsfCore15compute_tsf_delEPiS0_i() called");
    return 0;
}

/* Demangled: cal_A2 */
extern "C" __attribute__((visibility("default"))) int cal_A2(void) {
    ALOGD("cal_A2() called");
    return 0;
}

/* Demangled: fprintf_ivector_(int*, int, char*) */
extern "C" __attribute__((visibility("default"))) int _Z16fprintf_ivector_PiiPc(void) {
    ALOGD("_Z16fprintf_ivector_PiiPc() called");
    return 0;
}

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: AppLscUtil::getInstance() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil11getInstanceEv(void) {
    ALOGD("_ZN10AppLscUtil11getInstanceEv() called");
    return 0;
}

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: __floatsisf */
extern "C" __attribute__((visibility("default"))) int __floatsisf(void) {
    ALOGD("__floatsisf() called");
    return 0;
}

/* Demangled: comp_xy_grid_gain(void*, unsigned int*, int*, unsigned int*, int, int, _ShadingBlock*) */
extern "C" __attribute__((visibility("default"))) int _Z17comp_xy_grid_gainPvPjPiS0_iiP13_ShadingBlock(void) {
    ALOGD("_Z17comp_xy_grid_gainPvPjPiS0_iiP13_ShadingBlock() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreConfigSmooth(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore19TsfCoreConfigSmoothEj(void) {
    ALOGD("_ZN7TsfCore19TsfCoreConfigSmoothEj() called");
    return 0;
}

/* Demangled: TsfCore_IF::TsfCoreGetLog(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _ZN10TsfCore_IF13TsfCoreGetLogEPjS0_S0_S0_(void) {
    ALOGD("_ZN10TsfCore_IF13TsfCoreGetLogEPjS0_S0_S0_() called");
    return 0;
}

/* Demangled: __aeabi_i2f */
extern "C" __attribute__((visibility("default"))) int __aeabi_i2f(void) {
    ALOGD("__aeabi_i2f() called");
    return 0;
}

/* Demangled: __aeabi_fsub */
extern "C" __attribute__((visibility("default"))) int __aeabi_fsub(void) {
    ALOGD("__aeabi_fsub() called");
    return 0;
}

/* Demangled: AppLscUtil::~AppLscUtil() */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtilD0Ev(void) {
    ALOGD("_ZN10AppLscUtilD0Ev() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreReset() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore12TsfCoreResetEv(void) {
    ALOGD("_ZN7TsfCore12TsfCoreResetEv() called");
    return 0;
}

/* Demangled: TsfCore::compute_day_wt(int, int, int, int, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore14compute_day_wtEiiiiiiiii(void) {
    ALOGD("_ZN7TsfCore14compute_day_wtEiiiiiiiii() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: AppTsf::destroyInstance(MTKTsf*) */
extern "C" __attribute__((visibility("default"))) int _ZN6AppTsf15destroyInstanceEP6MTKTsf(void) {
    ALOGD("_ZN6AppTsf15destroyInstanceEP6MTKTsf() called");
    return 0;
}

/* Demangled: AppLscUtil::LscRaSwMain(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN10AppLscUtil11LscRaSwMainEPv(void) {
    ALOGD("_ZN10AppLscUtil11LscRaSwMainEPv() called");
    return 0;
}

/* Demangled: TsfCore::TsfCore() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCoreC1Ev(void) {
    ALOGD("_ZN7TsfCoreC1Ev() called");
    return 0;
}

/* Demangled: TsfCore::awb_smallavg_optwv(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore18awb_smallavg_optwvEPtS0_iiP10RGB_STRUCTiiii(void) {
    ALOGD("_ZN7TsfCore18awb_smallavg_optwvEPtS0_iiP10RGB_STRUCTiiii() called");
    return 0;
}

/* Demangled: vLSC_PARAM_INIT(LSC_CAL_INI_PARAM_T) */
extern "C" __attribute__((visibility("default"))) int _Z15vLSC_PARAM_INIT19LSC_CAL_INI_PARAM_T(void) {
    ALOGD("_Z15vLSC_PARAM_INIT19LSC_CAL_INI_PARAM_T() called");
    return 0;
}

/* Demangled: TsfCore::TsfCoreGetDebugBuffSize() */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore23TsfCoreGetDebugBuffSizeEv(void) {
    ALOGD("_ZN7TsfCore23TsfCoreGetDebugBuffSizeEv() called");
    return 0;
}

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Demangled: TsfCore::filter_separable(int*, int*, int, int, int*, int, int, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN7TsfCore16filter_separableEPiS0_iiS0_iiS0_ii(void) {
    ALOGD("_ZN7TsfCore16filter_separableEPiS0_iiS0_iiS0_ii() called");
    return 0;
}
