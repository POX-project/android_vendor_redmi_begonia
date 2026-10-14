/*
 * Reverse-Engineered ABI Specification for: libcamalgo.lsc.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.lsc.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_LSC_H
#define BEGONIA_RE_LIBCAMALGO_LSC_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: poly_ratio */
/* Demangled: poly_ratio */
extern void* poly_ratio;

/* Symbol: _ZN7TsfCore15init_tsf_configER14shading_configPiP18TSF_CORE_EXIF_DATA */
/* Demangled: TsfCore::init_tsf_config(shading_config&, int*, TSF_CORE_EXIF_DATA*) */
int _ZN7TsfCore15init_tsf_configER14shading_configPiP18TSF_CORE_EXIF_DATA(void);

/* Symbol: _ZN7TsfCore23awb_smallavg_optwv_fastEPtS0_iiP10RGB_STRUCTiiii */
/* Demangled: TsfCore::awb_smallavg_optwv_fast(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int, int, int) */
int _ZN7TsfCore23awb_smallavg_optwv_fastEPtS0_iiP10RGB_STRUCTiiii(void);

/* Symbol: _Z20shading_align_golden18SHADIND_ALIGN_CONFi */
/* Demangled: shading_align_golden(SHADIND_ALIGN_CONF, int) */
int _Z20shading_align_golden18SHADIND_ALIGN_CONFi(void);

/* Symbol: __aeabi_frsub */
/* Demangled: __aeabi_frsub */
int __aeabi_frsub(void);

/* Symbol: _ZN7TsfCore17resample_rfk_coefEiiPvPiRiS1_S2_i */
/* Demangled: TsfCore::resample_rfk_coef(int, int, void*, int*, int&, int*, int&, int) */
int _ZN7TsfCore17resample_rfk_coefEiiPvPiRiS1_S2_i(void);

/* Symbol: _ZN7TsfCore17tsf_tbl_crcb_gainEPii */
/* Demangled: TsfCore::tsf_tbl_crcb_gain(int*, int) */
int _ZN7TsfCore17tsf_tbl_crcb_gainEPii(void);

/* Symbol: _ZTV7TsfCore */
/* Demangled: vtable for TsfCore */
extern void* _ZTV7TsfCore;

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _ZN7TsfCore9TSF_roundEd */
/* Demangled: TsfCore::TSF_round(double) */
int _ZN7TsfCore9TSF_roundEd(void);

/* Symbol: _ZN10TsfCore_IF14TsfCoreProcessEv */
/* Demangled: TsfCore_IF::TsfCoreProcess() */
int _ZN10TsfCore_IF14TsfCoreProcessEv(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: g_col_idx */
/* Demangled: g_col_idx */
extern void* g_col_idx;

/* Symbol: __floatundisf */
/* Demangled: __floatundisf */
int __floatundisf(void);

/* Symbol: _ZN10MTKLscUtil11LscRaSwMainEPv */
/* Demangled: MTKLscUtil::LscRaSwMain(void*) */
int _ZN10MTKLscUtil11LscRaSwMainEPv(void);

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _ZN7TsfCore13TsfCoreGenTblEP11LSC_PARAM_T */
/* Demangled: TsfCore::TsfCoreGenTbl(LSC_PARAM_T*) */
int _ZN7TsfCore13TsfCoreGenTblEP11LSC_PARAM_T(void);

/* Symbol: up_lut */
/* Demangled: up_lut */
extern void* up_lut;

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _ZN7TsfCore11TsfCoreExitEv */
/* Demangled: TsfCore::TsfCoreExit() */
int _ZN7TsfCore11TsfCoreExitEv(void);

/* Symbol: _ZN7TsfCore15compute_flat_wtEiiii */
/* Demangled: TsfCore::compute_flat_wt(int, int, int, int) */
int _ZN7TsfCore15compute_flat_wtEiiii(void);

/* Symbol: _Z7vLsc_OBPthhhhjj */
/* Demangled: vLsc_OB(unsigned short*, unsigned char, unsigned char, unsigned char, unsigned char, unsigned int, unsigned int) */
int _Z7vLsc_OBPthhhhjj(void);

/* Symbol: _ZN7TsfCore12comp_tsf_strEiiRK14shading_config */
/* Demangled: TsfCore::comp_tsf_str(int, int, shading_config const&) */
int _ZN7TsfCore12comp_tsf_strEiiRK14shading_config(void);

/* Symbol: _ZN7TsfCore13filter_1d_extEPiS0_iS0_ii */
/* Demangled: TsfCore::filter_1d_ext(int*, int*, int, int*, int, int) */
int _ZN7TsfCore13filter_1d_extEPiS0_iS0_ii(void);

/* Symbol: _ZTV6MTKTsf */
/* Demangled: vtable for MTKTsf */
extern void* _ZTV6MTKTsf;

/* Symbol: _Z9rectcoef2PfS_S_S_S_Piiiii */
/* Demangled: rectcoef2(float*, float*, float*, float*, float*, int*, int, int, int, int) */
int _Z9rectcoef2PfS_S_S_S_Piiiii(void);

/* Symbol: _ZN10AppLscUtilD1Ev */
/* Demangled: AppLscUtil::~AppLscUtil() */
int _ZN10AppLscUtilD1Ev(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: _Z36FixedPoint_shadingSplineFromGainDataP11LSC_PARAM_TPjS1_PiPvi */
/* Demangled: FixedPoint_shadingSplineFromGainData(LSC_PARAM_T*, unsigned int*, unsigned int*, int*, void*, int) */
int _Z36FixedPoint_shadingSplineFromGainDataP11LSC_PARAM_TPjS1_PiPvi(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: g_lsc_param */
/* Demangled: g_lsc_param */
extern void* g_lsc_param;

/* Symbol: _ZN7TsfCore7CoreDbgEiiii */
/* Demangled: TsfCore::CoreDbg(int, int, int, int) */
int _ZN7TsfCore7CoreDbgEiiii(void);

/* Symbol: Coef_SignBit_Pos */
/* Demangled: Coef_SignBit_Pos */
extern void* Coef_SignBit_Pos;

/* Symbol: _Z6splinePiS_iffPf */
/* Demangled: spline(int*, int*, int, float, float, float*) */
int _Z6splinePiS_iffPf(void);

/* Symbol: _ZN7TsfCore19TsfCoreMergeLumaTblEPiS0_ */
/* Demangled: TsfCore::TsfCoreMergeLumaTbl(int*, int*) */
int _ZN7TsfCore19TsfCoreMergeLumaTblEPiS0_(void);

/* Symbol: _ZN7TsfCore15unpack_tsfhw_deEPvPKvit */
/* Demangled: TsfCore::unpack_tsfhw_de(void*, void const*, int, unsigned short) */
int _ZN7TsfCore15unpack_tsfhw_deEPvPKvit(void);

/* Symbol: _Z6spln2vPiS_iiPf */
/* Demangled: spln2v(int*, int*, int, int, float*) */
int _Z6spln2vPiS_iiPf(void);

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: _ZN7TsfCore11getInstanceEv */
/* Demangled: TsfCore::getInstance() */
int _ZN7TsfCore11getInstanceEv(void);

/* Symbol: _ZN7TsfCoreC2Ev */
/* Demangled: TsfCore::TsfCore() */
int _ZN7TsfCoreC2Ev(void);

/* Symbol: _Z13comp_xy_arrayPvS_Pii */
/* Demangled: comp_xy_array(void*, void*, int*, int) */
int _Z13comp_xy_arrayPvS_Pii(void);

/* Symbol: _ZN10AppLscUtil22init_ra_working_bufferEPi */
/* Demangled: AppLscUtil::init_ra_working_buffer(int*) */
int _ZN10AppLscUtil22init_ra_working_bufferEPi(void);

/* Symbol: drvb_crack_heap */
/* Demangled: drvb_crack_heap */
int drvb_crack_heap(void);

/* Symbol: _ZN7TsfCore18compute_or_str_mapEPiS0_S0_S0_iiS0_ */
/* Demangled: TsfCore::compute_or_str_map(int*, int*, int*, int*, int, int, int*) */
int _ZN7TsfCore18compute_or_str_mapEPiS0_S0_S0_iiS0_(void);

/* Symbol: _Z14LscGaintoHWTblPfPjiiiiPvi */
/* Demangled: LscGaintoHWTbl(float*, unsigned int*, int, int, int, int, void*, int) */
int _Z14LscGaintoHWTblPfPjiiiiPvi(void);

/* Symbol: _ZN7TsfCore10filter_horEPiS0_iiS0_ii */
/* Demangled: TsfCore::filter_hor(int*, int*, int, int, int*, int, int) */
int _ZN7TsfCore10filter_horEPiS0_iiS0_ii(void);

/* Symbol: _Z21vLSC_Calibration_INITPt */
/* Demangled: vLSC_Calibration_INIT(unsigned short*) */
int _Z21vLSC_Calibration_INITPt(void);

/* Symbol: _ZN10MTKLscUtil14LscZmItpSwMainEPv */
/* Demangled: MTKLscUtil::LscZmItpSwMain(void*) */
int _ZN10MTKLscUtil14LscZmItpSwMainEPv(void);

/* Symbol: _ZN7TsfCore20Shading_TSF_xy_arrayEii */
/* Demangled: TsfCore::Shading_TSF_xy_array(int, int) */
int _ZN7TsfCore20Shading_TSF_xy_arrayEii(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int __ashldi3(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: _Z11LscSL2Calcu10TBL_INFO_Tiiii */
/* Demangled: LscSL2Calcu(TBL_INFO_T, int, int, int, int) */
int _Z11LscSL2Calcu10TBL_INFO_Tiiii(void);

/* Symbol: _Z25comp_xy_grid_gain_LSC_123PvPjPiS0_iiP13_ShadingBlock */
/* Demangled: comp_xy_grid_gain_LSC_123(void*, unsigned int*, int*, unsigned int*, int, int, _ShadingBlock*) */
int _Z25comp_xy_grid_gain_LSC_123PvPjPiS0_iiP13_ShadingBlock(void);

/* Symbol: __aeabi_ul2f */
/* Demangled: __aeabi_ul2f */
int __aeabi_ul2f(void);

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int __lshrdi3(void);

/* Symbol: _Z14compute_splineP26shading_calibration_structPfS1_S1_S1_S1_Pi */
/* Demangled: compute_spline(shading_calibration_struct*, float*, float*, float*, float*, float*, int*) */
int _Z14compute_splineP26shading_calibration_structPfS1_S1_S1_S1_Pi(void);

/* Symbol: g_src_tbl_float */
/* Demangled: g_src_tbl_float */
extern void* g_src_tbl_float;

/* Symbol: _ZN7TsfCore14interp_log_lutEi */
/* Demangled: TsfCore::interp_log_lut(int) */
int _ZN7TsfCore14interp_log_lutEi(void);

/* Symbol: _ZN7TsfCore13crop_tsf_gainEiiiiii */
/* Demangled: TsfCore::crop_tsf_gain(int, int, int, int, int, int) */
int _ZN7TsfCore13crop_tsf_gainEiiiiii(void);

/* Symbol: _ZN7TsfCore7mul_remEiiPiS0_ */
/* Demangled: TsfCore::mul_rem(int, int, int*, int*) */
int _ZN7TsfCore7mul_remEiiPiS0_(void);

/* Symbol: _ZN7TsfCore9clean_mapEPiii */
/* Demangled: TsfCore::clean_map(int*, int, int) */
int _ZN7TsfCore9clean_mapEPiii(void);

/* Symbol: _Z25mrLSC_POLY_RatioFloat_Getii12RATIO_POLY_T */
/* Demangled: mrLSC_POLY_RatioFloat_Get(int, int, RATIO_POLY_T) */
int _Z25mrLSC_POLY_RatioFloat_Getii12RATIO_POLY_T(void);

/* Symbol: _ZN7TsfCore15Shading_TSF_intEPviiPiS1_S1_ */
/* Demangled: TsfCore::Shading_TSF_int(void*, int, int, int*, int*, int*) */
int _ZN7TsfCore15Shading_TSF_intEPviiPiS1_S1_(void);

/* Symbol: hash_starts */
/* Demangled: hash_starts */
int hash_starts(void);

/* Symbol: _ZN10TsfCore_IF13TsfCoreGenTblEP11LSC_PARAM_T */
/* Demangled: TsfCore_IF::TsfCoreGenTbl(LSC_PARAM_T*) */
int _ZN10TsfCore_IF13TsfCoreGenTblEP11LSC_PARAM_T(void);

/* Symbol: _Z18u4LSC_Integer_SQRTy */
/* Demangled: u4LSC_Integer_SQRT(unsigned long long) */
int _Z18u4LSC_Integer_SQRTy(void);

/* Symbol: _ZN10AppLscUtilD2Ev */
/* Demangled: AppLscUtil::~AppLscUtil() */
int _ZN10AppLscUtilD2Ev(void);

/* Symbol: g_lsc_cali_info */
/* Demangled: g_lsc_cali_info */
extern void* g_lsc_cali_info;

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: _ZN6MTKTsf7TsfExitEv */
/* Demangled: MTKTsf::TsfExit() */
int _ZN6MTKTsf7TsfExitEv(void);

/* Symbol: _ZN7TsfCore8proj_logEiPi */
/* Demangled: TsfCore::proj_log(int, int*) */
int _ZN7TsfCore8proj_logEiPi(void);

/* Symbol: _Z13pack_lsc_coefP11LSC_PARAM_TPiPji */
/* Demangled: pack_lsc_coef(LSC_PARAM_T*, int*, unsigned int*, int) */
int _Z13pack_lsc_coefP11LSC_PARAM_TPiPji(void);

/* Symbol: _ZN6AppTsfD0Ev */
/* Demangled: AppTsf::~AppTsf() */
int _ZN6AppTsfD0Ev(void);

/* Symbol: _ZN7TsfCore12parsing_statEPtPKh */
/* Demangled: TsfCore::parsing_stat(unsigned short*, unsigned char const*) */
int _ZN7TsfCore12parsing_statEPtPKh(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: _ZN7TsfCore13init_crcb_mapEPiS0_S0_S0_S0_ii */
/* Demangled: TsfCore::init_crcb_map(int*, int*, int*, int*, int*, int, int) */
int _ZN7TsfCore13init_crcb_mapEPiS0_S0_S0_S0_ii(void);

/* Symbol: _Z8rectcoefPiS_S_S_S_S_iiii */
/* Demangled: rectcoef(int*, int*, int*, int*, int*, int*, int, int, int, int) */
int _Z8rectcoefPiS_S_S_S_S_iiii(void);

/* Symbol: _ZN7TsfCore25TsfCoreGetWorkingBuffSizeEv */
/* Demangled: TsfCore::TsfCoreGetWorkingBuffSize() */
int _ZN7TsfCore25TsfCoreGetWorkingBuffSizeEv(void);

/* Symbol: _ZTV10MTKLscUtil */
/* Demangled: vtable for MTKLscUtil */
extern void* _ZTV10MTKLscUtil;

/* Symbol: _Z15three_way_mergejjjPj */
/* Demangled: three_way_merge(unsigned int, unsigned int, unsigned int, unsigned int*) */
int _Z15three_way_mergejjjPj(void);

/* Symbol: _Z17simple_3x3_filterPiS_iii */
/* Demangled: simple_3x3_filter(int*, int*, int, int, int) */
int _Z17simple_3x3_filterPiS_iii(void);

/* Symbol: __aeabi_fadd */
/* Demangled: __aeabi_fadd */
int __aeabi_fadd(void);

/* Symbol: __floatdisf */
/* Demangled: __floatdisf */
int __floatdisf(void);

/* Symbol: g_coef_t_1d */
/* Demangled: g_coef_t_1d */
extern void* g_coef_t_1d;

/* Symbol: _ZN7TsfCore11compute_M_NEiiiiPiS0_S0_S0_S0_i */
/* Demangled: TsfCore::compute_M_N(int, int, int, int, int*, int*, int*, int*, int*, int) */
int _ZN7TsfCore11compute_M_NEiiiiPiS0_S0_S0_S0_i(void);

/* Symbol: _Z21shading_transform_new21SHADIND_TRFM_CONF_PSO17SHADING_GAIN_TYPE */
/* Demangled: shading_transform_new(SHADIND_TRFM_CONF_PSO, SHADING_GAIN_TYPE) */
int _Z21shading_transform_new21SHADIND_TRFM_CONF_PSO17SHADING_GAIN_TYPE(void);

/* Symbol: _ZN10AppLscUtil15destroyInstanceEP10MTKLscUtil */
/* Demangled: AppLscUtil::destroyInstance(MTKLscUtil*) */
int _ZN10AppLscUtil15destroyInstanceEP10MTKLscUtil(void);

/* Symbol: _ZN7TsfCore18compute_M_N_refineEiiiiPiS0_S0_S0_S0_iS0_ff */
/* Demangled: TsfCore::compute_M_N_refine(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
int _ZN7TsfCore18compute_M_N_refineEiiiiPiS0_S0_S0_S0_iS0_ff(void);

/* Symbol: _ZTV6AppTsf */
/* Demangled: vtable for AppTsf */
extern void* _ZTV6AppTsf;

/* Symbol: _ZN7TsfCore28awb_smart_preprocessing_NEONEPtiiS0_s */
/* Demangled: TsfCore::awb_smart_preprocessing_NEON(unsigned short*, int, int, unsigned short*, short) */
int _ZN7TsfCore28awb_smart_preprocessing_NEONEPtiiS0_s(void);

/* Symbol: _ZN7TsfCore21upsample_gain_tsf_lscEPiiiS0_iiS0_S0_ii */
/* Demangled: TsfCore::upsample_gain_tsf_lsc(int*, int, int, int*, int, int, int*, int*, int, int) */
int _ZN7TsfCore21upsample_gain_tsf_lscEPiiiS0_iiS0_S0_ii(void);

/* Symbol: _ZN10TsfCore_IF7CoreDbgEiiii */
/* Demangled: TsfCore_IF::CoreDbg(int, int, int, int) */
int _ZN10TsfCore_IF7CoreDbgEiiii(void);

/* Symbol: _ZN7TsfCore15TSF_right_shiftEij */
/* Demangled: TsfCore::TSF_right_shift(int, unsigned int) */
int _ZN7TsfCore15TSF_right_shiftEij(void);

/* Symbol: _ZN10AppLscUtil14LscZmItpSwInitEPv */
/* Demangled: AppLscUtil::LscZmItpSwInit(void*) */
int _ZN10AppLscUtil14LscZmItpSwInitEPv(void);

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _ZN7TsfCore10merge_coefEPiS0_S0_iiii */
/* Demangled: TsfCore::merge_coef(int*, int*, int*, int, int, int, int) */
int _ZN7TsfCore10merge_coefEPiS0_S0_iiii(void);

/* Symbol: _ZN7TsfCore16proj_unit_goldenEv */
/* Demangled: TsfCore::proj_unit_golden() */
int _ZN7TsfCore16proj_unit_goldenEv(void);

/* Symbol: _ZN7TsfCore17awb_preprocessingEPtiiS0_s */
/* Demangled: TsfCore::awb_preprocessing(unsigned short*, int, int, unsigned short*, short) */
int _ZN7TsfCore17awb_preprocessingEPtiiS0_s(void);

/* Symbol: _ZN7TsfCore11awb_averageEPtS0_iiP10RGB_STRUCTii */
/* Demangled: TsfCore::awb_average(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int) */
int _ZN7TsfCore11awb_averageEPtS0_iiP10RGB_STRUCTii(void);

/* Symbol: _ZN7TsfCore14attenuate_gainEPjS0_iiiiPi */
/* Demangled: TsfCore::attenuate_gain(unsigned int*, unsigned int*, int, int, int, int, int*) */
int _ZN7TsfCore14attenuate_gainEPjS0_iiiiPi(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z16fprintf_fvector_PfiPc */
/* Demangled: fprintf_fvector_(float*, int, char*) */
int _Z16fprintf_fvector_PfiPc(void);

/* Symbol: _ZN10TsfCore_IF17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT */
/* Demangled: TsfCore_IF::TsfCoreSetEnvInfo(TSF_CORE_ENV_INFO_STRUCT*) */
int _ZN10TsfCore_IF17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT(void);

/* Symbol: drvb_fc_prepare */
/* Demangled: drvb_fc_prepare */
int drvb_fc_prepare(void);

/* Symbol: _ZTV10TsfCore_IF */
/* Demangled: vtable for TsfCore_IF */
extern void* _ZTV10TsfCore_IF;

/* Symbol: __aeabi_l2f */
/* Demangled: __aeabi_l2f */
int __aeabi_l2f(void);

/* Symbol: _ZN10MTKLscUtil17LscVirtualChannelEP19LSC_RESVERED_STRUCT */
/* Demangled: MTKLscUtil::LscVirtualChannel(LSC_RESVERED_STRUCT*) */
int _ZN10MTKLscUtil17LscVirtualChannelEP19LSC_RESVERED_STRUCT(void);

/* Symbol: _ZN7TsfCore15comp_shading_swEPiiiiS0_S0_ */
/* Demangled: TsfCore::comp_shading_sw(int*, int, int, int, int*, int*) */
int _ZN7TsfCore15comp_shading_swEPiiiiS0_S0_(void);

/* Symbol: dump_buf */
/* Demangled: dump_buf */
int dump_buf(void);

/* Symbol: _Z20vLSC_Calibration_ENDv */
/* Demangled: vLSC_Calibration_END() */
int _Z20vLSC_Calibration_ENDv(void);

/* Symbol: _ZN6AppTsf14TsfFeatureCtrlEjPvS0_ */
/* Demangled: AppTsf::TsfFeatureCtrl(unsigned int, void*, void*) */
int _ZN6AppTsf14TsfFeatureCtrlEjPvS0_(void);

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _ZN7TsfCore15fprintf_ivectorEPiiPc */
/* Demangled: TsfCore::fprintf_ivector(int*, int, char*) */
int _ZN7TsfCore15fprintf_ivectorEPiiPc(void);

/* Symbol: _ZN7TsfCore15comp_grad_indirEPiS0_S0_ii */
/* Demangled: TsfCore::comp_grad_indir(int*, int*, int*, int, int) */
int _ZN7TsfCore15comp_grad_indirEPiS0_S0_ii(void);

/* Symbol: sha1sum */
/* Demangled: sha1sum */
extern void* sha1sum;

/* Symbol: _ZN10TsfCore_IF23TsfCoreGetDebugBuffSizeEv */
/* Demangled: TsfCore_IF::TsfCoreGetDebugBuffSize() */
int _ZN10TsfCore_IF23TsfCoreGetDebugBuffSizeEv(void);

/* Symbol: _ZN10TsfCore_IF15TsfCoreGetStateEv */
/* Demangled: TsfCore_IF::TsfCoreGetState() */
int _ZN10TsfCore_IF15TsfCoreGetStateEv(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: _ZN6MTKTsf14createInstanceEv */
/* Demangled: MTKTsf::createInstance() */
int _ZN6MTKTsf14createInstanceEv(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: _ZN7TsfCore17simple_3x3_filterEPiS0_ii */
/* Demangled: TsfCore::simple_3x3_filter(int*, int*, int, int) */
int _ZN7TsfCore17simple_3x3_filterEPiS0_ii(void);

/* Symbol: _ZN6AppTsfD1Ev */
/* Demangled: AppTsf::~AppTsf() */
int _ZN6AppTsfD1Ev(void);

/* Symbol: g_raw */
/* Demangled: g_raw */
extern void* g_raw;

/* Symbol: _Z22copy_3d_coef_to_hwcoefP26shading_calibration_structPjPi */
/* Demangled: copy_3d_coef_to_hwcoef(shading_calibration_struct*, unsigned int*, int*) */
int _Z22copy_3d_coef_to_hwcoefP26shading_calibration_structPjPi(void);

/* Symbol: g_zz_1d */
/* Demangled: g_zz_1d */
extern void* g_zz_1d;

/* Symbol: _ZN10AppLscUtil22init_zm_working_bufferEPi */
/* Demangled: AppLscUtil::init_zm_working_buffer(int*) */
int _ZN10AppLscUtil22init_zm_working_bufferEPi(void);

/* Symbol: _ZN7TsfCore16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT */
/* Demangled: TsfCore::TsfCoreGetResult(TSF_CORE_RESULT_STRUCT*) */
int _ZN7TsfCore16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT(void);

/* Symbol: _Z6lsc_raiPjiPiPvP13_ShadingBlock */
/* Demangled: lsc_ra(int, unsigned int*, int, int*, void*, _ShadingBlock*) */
int _Z6lsc_raiPjiPiPvP13_ShadingBlock(void);

/* Symbol: _ZN7TsfCore15destroyInstanceEP10TsfCore_IF */
/* Demangled: TsfCore::destroyInstance(TsfCore_IF*) */
int _ZN7TsfCore15destroyInstanceEP10TsfCore_IF(void);

/* Symbol: _Z11compute_fx2PfPiS0_S0_ii */
/* Demangled: compute_fx2(float*, int*, int*, int*, int, int) */
int _Z11compute_fx2PfPiS0_S0_ii(void);

/* Symbol: _ZN7TsfCore8MAP_coefEPiS0_i */
/* Demangled: TsfCore::MAP_coef(int*, int*, int) */
int _ZN7TsfCore8MAP_coefEPiS0_i(void);

/* Symbol: hash_update */
/* Demangled: hash_update */
int hash_update(void);

/* Symbol: _ZN10TsfCore_IF24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT */
/* Demangled: TsfCore_IF::TsfCoreForwardConversion(TSF_CORE_TBL_STRUCT*) */
int _ZN10TsfCore_IF24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT(void);

/* Symbol: _Z21comp_xy_array_LSC_123PvS_Pii */
/* Demangled: comp_xy_array_LSC_123(void*, void*, int*, int) */
int _Z21comp_xy_array_LSC_123PvS_Pii(void);

/* Symbol: _ZN10AppLscUtilC1Ev */
/* Demangled: AppLscUtil::AppLscUtil() */
int _ZN10AppLscUtilC1Ev(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int __udivdi3(void);

/* Symbol: _Z21shading_transform_new17SHADIND_TRFM_CONF */
/* Demangled: shading_transform_new(SHADIND_TRFM_CONF) */
int _Z21shading_transform_new17SHADIND_TRFM_CONF(void);

/* Symbol: _ZN7TsfCore10unpack_tsfEPjPiS1_S1_ */
/* Demangled: TsfCore::unpack_tsf(unsigned int*, int*, int*, int*) */
int _ZN7TsfCore10unpack_tsfEPjPiS1_S1_(void);

/* Symbol: _ZN7TsfCore15ReorderCaliGainEPjii */
/* Demangled: TsfCore::ReorderCaliGain(unsigned int*, int, int) */
int _ZN7TsfCore15ReorderCaliGainEPjii(void);

/* Symbol: _ZN7TsfCore25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT */
/* Demangled: TsfCore::TsfCoreBackwardConversion(TSF_CORE_TBL_STRUCT*) */
int _ZN7TsfCore25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT(void);

/* Symbol: _ZN10TsfCore_IF25TsfCoreGetWorkingBuffSizeEv */
/* Demangled: TsfCore_IF::TsfCoreGetWorkingBuffSize() */
int _ZN10TsfCore_IF25TsfCoreGetWorkingBuffSizeEv(void);

/* Symbol: _ZN6AppTsf7TsfMainEv */
/* Demangled: AppTsf::TsfMain() */
int _ZN6AppTsf7TsfMainEv(void);

/* Symbol: _ZN7TsfCore14mul_pixel_gainEPiiiiiS0_ii */
/* Demangled: TsfCore::mul_pixel_gain(int*, int, int, int, int, int*, int, int) */
int _ZN7TsfCore14mul_pixel_gainEPiiiiiS0_ii(void);

/* Symbol: _ZN7TsfCore18adaShading_crop_fpEPiS0_S0_iiiiS0_ */
/* Demangled: TsfCore::adaShading_crop_fp(int*, int*, int*, int, int, int, int, int*) */
int _ZN7TsfCore18adaShading_crop_fpEPiS0_S0_iiiiS0_(void);

/* Symbol: _ZN10TsfCore_IF19TsfCoreMergeLumaTblEPiS0_ */
/* Demangled: TsfCore_IF::TsfCoreMergeLumaTbl(int*, int*) */
int _ZN10TsfCore_IF19TsfCoreMergeLumaTblEPiS0_(void);

/* Symbol: _ZN7TsfCore10filter_verEPiS0_iiS0_ii */
/* Demangled: TsfCore::filter_ver(int*, int*, int, int, int*, int, int) */
int _ZN7TsfCore10filter_verEPiS0_iiS0_ii(void);

/* Symbol: _Z20vLsc_Remap_to_Bayer0PtS_jji */
/* Demangled: vLsc_Remap_to_Bayer0(unsigned short*, unsigned short*, unsigned int, unsigned int, int) */
int _Z20vLsc_Remap_to_Bayer0PtS_jji(void);

/* Symbol: drvb_gettimeofday */
/* Demangled: drvb_gettimeofday */
int drvb_gettimeofday(void);

/* Symbol: _ZN7TsfCore19merge_gain_cali_srcEPiS0_PjP11LSC_PARAM_T */
/* Demangled: TsfCore::merge_gain_cali_src(int*, int*, unsigned int*, LSC_PARAM_T*) */
int _ZN7TsfCore19merge_gain_cali_srcEPiS0_PjP11LSC_PARAM_T(void);

/* Symbol: _ZN6MTKTsf7TsfInitEPvS0_ */
/* Demangled: MTKTsf::TsfInit(void*, void*) */
int _ZN6MTKTsf7TsfInitEPvS0_(void);

/* Symbol: _ZN7TsfCoreD0Ev */
/* Demangled: TsfCore::~TsfCore() */
int _ZN7TsfCoreD0Ev(void);

/* Symbol: drvb_error */
/* Demangled: drvb_error */
int drvb_error(void);

/* Symbol: g_p_sdblk */
/* Demangled: g_p_sdblk */
extern void* g_p_sdblk;

/* Symbol: _Z11compute_fy2PfPiS0_S0_ii */
/* Demangled: compute_fy2(float*, int*, int*, int*, int, int) */
int _Z11compute_fy2PfPiS0_S0_ii(void);

/* Symbol: _Z6spln2hPiS_iiPf */
/* Demangled: spln2h(int*, int*, int, int, float*) */
int _Z6spln2hPiS_iiPf(void);

/* Symbol: _ZN7TsfCore9find_gainEiRiPKiS2_i */
/* Demangled: TsfCore::find_gain(int, int&, int const*, int const*, int) */
int _ZN7TsfCore9find_gainEiRiPKiS2_i(void);

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _ZN7TsfCore13compute_wb_wtEiii */
/* Demangled: TsfCore::compute_wb_wt(int, int, int) */
int _ZN7TsfCore13compute_wb_wtEiii(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: _ZN7TsfCore12adaCoreResetEv */
/* Demangled: TsfCore::adaCoreReset() */
int _ZN7TsfCore12adaCoreResetEv(void);

/* Symbol: _ZN7TsfCore14TsfCoreProcessEv */
/* Demangled: TsfCore::TsfCoreProcess() */
int _ZN7TsfCore14TsfCoreProcessEv(void);

/* Symbol: _ZN6AppTsfD2Ev */
/* Demangled: AppTsf::~AppTsf() */
int _ZN6AppTsfD2Ev(void);

/* Symbol: _ZN7TsfCore20copy_cali_packed_srcEPjPiP11LSC_PARAM_T */
/* Demangled: TsfCore::copy_cali_packed_src(unsigned int*, int*, LSC_PARAM_T*) */
int _ZN7TsfCore20copy_cali_packed_srcEPjPiP11LSC_PARAM_T(void);

/* Symbol: _ZN10TsfCore_IF12TsfCoreResetEv */
/* Demangled: TsfCore_IF::TsfCoreReset() */
int _ZN10TsfCore_IF12TsfCoreResetEv(void);

/* Symbol: _ZN7TsfCore20TSF_round_left_shiftEij */
/* Demangled: TsfCore::TSF_round_left_shift(int, unsigned int) */
int _ZN7TsfCore20TSF_round_left_shiftEij(void);

/* Symbol: _ZN7TsfCore21resample_tsf_lsc_rintEPiiiiiiiRK14shading_configS0_S0_S0_ii */
/* Demangled: TsfCore::resample_tsf_lsc_rint(int*, int, int, int, int, int, int, shading_config const&, int*, int*, int*, int, int) */
int _ZN7TsfCore21resample_tsf_lsc_rintEPiiiiiiiRK14shading_configS0_S0_S0_ii(void);

/* Symbol: _ZN7TsfCore22init_tsf_config_memberEP20TSF_CORE_TUNING_PARAP14shading_config */
/* Demangled: TsfCore::init_tsf_config_member(TSF_CORE_TUNING_PARA*, shading_config*) */
int _ZN7TsfCore22init_tsf_config_memberEP20TSF_CORE_TUNING_PARAP14shading_config(void);

/* Symbol: _ZN7TsfCore18temporal_smoothingEv */
/* Demangled: TsfCore::temporal_smoothing() */
int _ZN7TsfCore18temporal_smoothingEv(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: _ZN10TsfCore_IF18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT */
/* Demangled: TsfCore_IF::TsfCoreSetProcInfo(TSF_CORE_PROC_INFO_STRUCT*) */
int _ZN10TsfCore_IF18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT(void);

/* Symbol: drvb_f0 */
/* Demangled: drvb_f0 */
int drvb_f0(void);

/* Symbol: _ZN7TsfCore13TsfCoreGetLogEPjS0_S0_S0_ */
/* Demangled: TsfCore::TsfCoreGetLog(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN7TsfCore13TsfCoreGetLogEPjS0_S0_S0_(void);

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: drvb_f1 */
/* Demangled: drvb_f1 */
int drvb_f1(void);

/* Symbol: drvb_f2 */
/* Demangled: drvb_f2 */
int drvb_f2(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

/* Symbol: _ZN10AppLscUtilC2Ev */
/* Demangled: AppLscUtil::AppLscUtil() */
int _ZN10AppLscUtilC2Ev(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int __aeabi_llsl(void);

/* Symbol: _ZN7TsfCore15reverse_shadingEP10RGB_STRUCTii */
/* Demangled: TsfCore::reverse_shading(RGB_STRUCT*, int, int) */
int _ZN7TsfCore15reverse_shadingEP10RGB_STRUCTii(void);

/* Symbol: _ZN7TsfCore24tsf_coef_in_tsf_gain_outEii */
/* Demangled: TsfCore::tsf_coef_in_tsf_gain_out(int, int) */
int _ZN7TsfCore24tsf_coef_in_tsf_gain_outEii(void);

/* Symbol: _ZN10TsfCore_IF16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT */
/* Demangled: TsfCore_IF::TsfCoreGetResult(TSF_CORE_RESULT_STRUCT*) */
int _ZN10TsfCore_IF16TsfCoreGetResultEP22TSF_CORE_RESULT_STRUCT(void);

/* Symbol: _ZN7TsfCore24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT */
/* Demangled: TsfCore::TsfCoreForwardConversion(TSF_CORE_TBL_STRUCT*) */
int _ZN7TsfCore24TsfCoreForwardConversionEP19TSF_CORE_TBL_STRUCT(void);

/* Symbol: get_heap_offset */
/* Demangled: get_heap_offset */
int get_heap_offset(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int __aeabi_llsr(void);

/* Symbol: _ZN7TsfCore28tsf_core_init_working_bufferEP24TSF_CORE_ENV_INFO_STRUCT */
/* Demangled: TsfCore::tsf_core_init_working_buffer(TSF_CORE_ENV_INFO_STRUCT*) */
int _ZN7TsfCore28tsf_core_init_working_bufferEP24TSF_CORE_ENV_INFO_STRUCT(void);

/* Symbol: _ZN7TsfCore13calc_rfk_coefEf */
/* Demangled: TsfCore::calc_rfk_coef(float) */
int _ZN7TsfCore13calc_rfk_coefEf(void);

/* Symbol: cal_P */
/* Demangled: cal_P */
int cal_P(void);

/* Symbol: sha1 */
/* Demangled: sha1 */
int sha1(void);

/* Symbol: _ZN7TsfCore12shading_gainEPiS0_iiii */
/* Demangled: TsfCore::shading_gain(int*, int*, int, int, int, int) */
int _ZN7TsfCore12shading_gainEPiS0_iiii(void);

/* Symbol: cal_S */
/* Demangled: cal_S */
int cal_S(void);

/* Symbol: _ZN7TsfCore16upsample_coef_1dEiiiPiRi */
/* Demangled: TsfCore::upsample_coef_1d(int, int, int, int*, int&) */
int _ZN7TsfCore16upsample_coef_1dEiiiPiRi(void);

/* Symbol: _ZN10AppLscUtil14LscZmItpSwMainEPv */
/* Demangled: AppLscUtil::LscZmItpSwMain(void*) */
int _ZN10AppLscUtil14LscZmItpSwMainEPv(void);

/* Symbol: _ZN7TsfCoreD1Ev */
/* Demangled: TsfCore::~TsfCore() */
int _ZN7TsfCoreD1Ev(void);

/* Symbol: _ZN7TsfCore31SL2_th_extract_from_destinationEPj */
/* Demangled: TsfCore::SL2_th_extract_from_destination(unsigned int*) */
int _ZN7TsfCore31SL2_th_extract_from_destinationEPj(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: g_dst_tbl */
/* Demangled: g_dst_tbl */
extern void* g_dst_tbl;

/* Symbol: _ZN6AppTsf8TsfResetEv */
/* Demangled: AppTsf::TsfReset() */
int _ZN6AppTsf8TsfResetEv(void);

/* Symbol: g_zv2_1d */
/* Demangled: g_zv2_1d */
extern void* g_zv2_1d;

/* Symbol: _ZN7TsfCore11rfk_coef_1dEiiiiPiRii */
/* Demangled: TsfCore::rfk_coef_1d(int, int, int, int, int*, int&, int) */
int _ZN7TsfCore11rfk_coef_1dEiiiiPiRii(void);

/* Symbol: drvb_fc_respond */
/* Demangled: drvb_fc_respond */
int drvb_fc_respond(void);

/* Symbol: _Z15mrLSC_Calibrate15LSC_CALI_INFO_Thth */
/* Demangled: mrLSC_Calibrate(LSC_CALI_INFO_T, unsigned char, unsigned short, unsigned char) */
int _Z15mrLSC_Calibrate15LSC_CALI_INFO_Thth(void);

/* Symbol: _ZN7TsfCore13xdiv_st1_slimEiij */
/* Demangled: TsfCore::xdiv_st1_slim(int, int, unsigned int) */
int _ZN7TsfCore13xdiv_st1_slimEiij(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: _Z16unpack_cali_gainP11LSC_PARAM_TPjPi */
/* Demangled: unpack_cali_gain(LSC_PARAM_T*, unsigned int*, int*) */
int _Z16unpack_cali_gainP11LSC_PARAM_TPjPi(void);

/* Symbol: _ZN10AppLscUtil11LscRaSwInitEPv */
/* Demangled: AppLscUtil::LscRaSwInit(void*) */
int _ZN10AppLscUtil11LscRaSwInitEPv(void);

/* Symbol: _ZN7TsfCore15appro_grad_slimEiiPi */
/* Demangled: TsfCore::appro_grad_slim(int, int, int*) */
int _ZN7TsfCore15appro_grad_slimEiiPi(void);

/* Symbol: _ZN6MTKTsf8TsfResetEv */
/* Demangled: MTKTsf::TsfReset() */
int _ZN6MTKTsf8TsfResetEv(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: _Z18init_cindex_rindexP11LSC_PARAM_TPiS1_ */
/* Demangled: init_cindex_rindex(LSC_PARAM_T*, int*, int*) */
int _Z18init_cindex_rindexP11LSC_PARAM_TPiS1_(void);

/* Symbol: g_src_tbl */
/* Demangled: g_src_tbl */
extern void* g_src_tbl;

/* Symbol: _ZN6AppTsf11getInstanceEv */
/* Demangled: AppTsf::getInstance() */
int _ZN6AppTsf11getInstanceEv(void);

/* Symbol: _ZN10TsfCore_IF11TsfCoreExitEv */
/* Demangled: TsfCore_IF::TsfCoreExit() */
int _ZN10TsfCore_IF11TsfCoreExitEv(void);

/* Symbol: __floatunsisf */
/* Demangled: __floatunsisf */
int __floatunsisf(void);

/* Symbol: _Z8AllocBufPv */
/* Demangled: AllocBuf(void*) */
int _Z8AllocBufPv(void);

/* Symbol: get_ul */
/* Demangled: get_ul */
int get_ul(void);

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _ZN7TsfCore13copy_cali_srcEPjPiP11LSC_PARAM_T */
/* Demangled: TsfCore::copy_cali_src(unsigned int*, int*, LSC_PARAM_T*) */
int _ZN7TsfCore13copy_cali_srcEPjPiP11LSC_PARAM_T(void);

/* Symbol: _Z8callbackv */
/* Demangled: callback() */
int _Z8callbackv(void);

/* Symbol: _ZN7TsfCore17init_coef_by_projEPiR14shading_configS0_ */
/* Demangled: TsfCore::init_coef_by_proj(int*, shading_config&, int*) */
int _ZN7TsfCore17init_coef_by_projEPiR14shading_configS0_(void);

/* Symbol: _ZN10TsfCore_IF19TsfCoreConfigSmoothEj */
/* Demangled: TsfCore_IF::TsfCoreConfigSmooth(unsigned int) */
int _ZN10TsfCore_IF19TsfCoreConfigSmoothEj(void);

/* Symbol: _Z11right_shiftij */
/* Demangled: right_shift(int, unsigned int) */
int _Z11right_shiftij(void);

/* Symbol: _ZN7TsfCore18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT */
/* Demangled: TsfCore::TsfCoreSetProcInfo(TSF_CORE_PROC_INFO_STRUCT*) */
int _ZN7TsfCore18TsfCoreSetProcInfoEP25TSF_CORE_PROC_INFO_STRUCT(void);

/* Symbol: __addsf3 */
/* Demangled: __addsf3 */
int __addsf3(void);

/* Symbol: _ZN10MTKLscUtil14file_reversionE */
/* Demangled: MTKLscUtil::file_reversion */
extern void* _ZN10MTKLscUtil14file_reversionE;

/* Symbol: _ZN10MTKLscUtil11LscRaSwInitEPv */
/* Demangled: MTKLscUtil::LscRaSwInit(void*) */
int _ZN10MTKLscUtil11LscRaSwInitEPv(void);

/* Symbol: _ZN7TsfCore13linear_weightEiiiii */
/* Demangled: TsfCore::linear_weight(int, int, int, int, int) */
int _ZN7TsfCore13linear_weightEiiiii(void);

/* Symbol: g_row_idx */
/* Demangled: g_row_idx */
extern void* g_row_idx;

/* Symbol: _ZN6AppTsfC1Ev */
/* Demangled: AppTsf::AppTsf() */
int _ZN6AppTsfC1Ev(void);

/* Symbol: _ZN7TsfCore19apply_or_color_gainEPiS0_iiii */
/* Demangled: TsfCore::apply_or_color_gain(int*, int*, int, int, int, int) */
int _ZN7TsfCore19apply_or_color_gainEPiS0_iiii(void);

/* Symbol: drvb_fc */
/* Demangled: drvb_fc */
int drvb_fc(void);

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: _ZN7TsfCore28shading_coef_to_shading_gainEPiiiS0_i */
/* Demangled: TsfCore::shading_coef_to_shading_gain(int*, int, int, int*, int) */
int _ZN7TsfCore28shading_coef_to_shading_gainEPiiiS0_i(void);

/* Symbol: _ZN7TsfCore17transform_tsf_matEPiS0_iS0_S0_ */
/* Demangled: TsfCore::transform_tsf_mat(int*, int*, int, int*, int*) */
int _ZN7TsfCore17transform_tsf_matEPiS0_iS0_S0_(void);

/* Symbol: _ZN7TsfCore12comp_shadingEPiiiiS0_S0_ */
/* Demangled: TsfCore::comp_shading(int*, int, int, int, int*, int*) */
int _ZN7TsfCore12comp_shadingEPiiiiS0_S0_(void);

/* Symbol: __aeabi_ui2f */
/* Demangled: __aeabi_ui2f */
int __aeabi_ui2f(void);

/* Symbol: _ZN7TsfCore17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT */
/* Demangled: TsfCore::TsfCoreSetEnvInfo(TSF_CORE_ENV_INFO_STRUCT*) */
int _ZN7TsfCore17TsfCoreSetEnvInfoEP24TSF_CORE_ENV_INFO_STRUCT(void);

/* Symbol: _ZN7TsfCoreD2Ev */
/* Demangled: TsfCore::~TsfCore() */
int _ZN7TsfCoreD2Ev(void);

/* Symbol: _Z25comp_xy_grid_gain_LSC_123PvPjPiPtS2_S2_S2_iiP13_ShadingBlock */
/* Demangled: comp_xy_grid_gain_LSC_123(void*, unsigned int*, int*, unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, int, _ShadingBlock*) */
int _Z25comp_xy_grid_gain_LSC_123PvPjPiPtS2_S2_S2_iiP13_ShadingBlock(void);

/* Symbol: g_zh2_1d */
/* Demangled: g_zh2_1d */
extern void* g_zh2_1d;

/* Symbol: _Z22lsctbl_to_lscgrid_gainPvPiS0_S_ */
/* Demangled: lsctbl_to_lscgrid_gain(void*, int*, int*, void*) */
int _Z22lsctbl_to_lscgrid_gainPvPiS0_S_(void);

/* Symbol: _ZN10TsfCore_IF25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT */
/* Demangled: TsfCore_IF::TsfCoreBackwardConversion(TSF_CORE_TBL_STRUCT*) */
int _ZN10TsfCore_IF25TsfCoreBackwardConversionEP19TSF_CORE_TBL_STRUCT(void);

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: _ZN7TsfCore13dl_merge_coefEPiS0_ii */
/* Demangled: TsfCore::dl_merge_coef(int*, int*, int, int) */
int _ZN7TsfCore13dl_merge_coefEPiS0_ii(void);

/* Symbol: g_lsc_result */
/* Demangled: g_lsc_result */
extern void* g_lsc_result;

/* Symbol: hash_finish */
/* Demangled: hash_finish */
int hash_finish(void);

/* Symbol: _Z20compute_block_lengthiiPiS_ */
/* Demangled: compute_block_length(int, int, int*, int*) */
int _Z20compute_block_lengthiiPiS_(void);

/* Symbol: _ZN7TsfCore15get_ch_img_sizeEiiPiS0_S0_S0_iP27TSF_CORE_SENSOR_CROP_STRUCT */
/* Demangled: TsfCore::get_ch_img_size(int, int, int*, int*, int*, int*, int, TSF_CORE_SENSOR_CROP_STRUCT*) */
int _ZN7TsfCore15get_ch_img_sizeEiiPiS0_S0_S0_iP27TSF_CORE_SENSOR_CROP_STRUCT(void);

/* Symbol: _Z14compute_splineP11LSC_PARAM_TPiP13SPLINE_STRUCTi */
/* Demangled: compute_spline(LSC_PARAM_T*, int*, SPLINE_STRUCT*, int) */
int _Z14compute_splineP11LSC_PARAM_TPiP13SPLINE_STRUCTi(void);

/* Symbol: _ZN7TsfCore20Shading_TSF_int_gainEPviiPiS1_ */
/* Demangled: TsfCore::Shading_TSF_int_gain(void*, int, int, int*, int*) */
int _ZN7TsfCore20Shading_TSF_int_gainEPviiPiS1_(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: _ZN7TsfCore10check_coefEPi */
/* Demangled: TsfCore::check_coef(int*) */
int _ZN7TsfCore10check_coefEPi(void);

/* Symbol: _ZN7TsfCore21TSF_round_right_shiftEij */
/* Demangled: TsfCore::TSF_round_right_shift(int, unsigned int) */
int _ZN7TsfCore21TSF_round_right_shiftEij(void);

/* Symbol: _ZN7TsfCore15comp_shading_hwEPiiiiS0_S0_ */
/* Demangled: TsfCore::comp_shading_hw(int*, int, int, int, int*, int*) */
int _ZN7TsfCore15comp_shading_hwEPiiiiS0_S0_(void);

/* Symbol: _ZN6AppTsf7TsfExitEv */
/* Demangled: AppTsf::TsfExit() */
int _ZN6AppTsf7TsfExitEv(void);

/* Symbol: _ZN7TsfCore15unpack_tsfhw_enEPvPKvit */
/* Demangled: TsfCore::unpack_tsfhw_en(void*, void const*, int, unsigned short) */
int _ZN7TsfCore15unpack_tsfhw_enEPvPKvit(void);

/* Symbol: _ZN7TsfCore15TsfCoreGetStateEv */
/* Demangled: TsfCore::TsfCoreGetState() */
int _ZN7TsfCore15TsfCoreGetStateEv(void);

/* Symbol: _ZN7TsfCore10check_flatEPiS0_S0_iiS0_R14shading_configS0_S0_S0_S0_ */
/* Demangled: TsfCore::check_flat(int*, int*, int*, int, int, int*, shading_config&, int*, int*, int*, int*) */
int _ZN7TsfCore10check_flatEPiS0_S0_iiS0_R14shading_configS0_S0_S0_S0_(void);

/* Symbol: _ZN6AppTsf7TsfInitEPvS0_ */
/* Demangled: AppTsf::TsfInit(void*, void*) */
int _ZN6AppTsf7TsfInitEPvS0_(void);

/* Symbol: _ZN7TsfCore20predict_or_corr_gainEPiS0_S0_iiiiS0_S0_S0_ */
/* Demangled: TsfCore::predict_or_corr_gain(int*, int*, int*, int, int, int, int, int*, int*, int*) */
int _ZN7TsfCore20predict_or_corr_gainEPiS0_S0_iiiiS0_S0_S0_(void);

/* Symbol: _ZN7TsfCore16unpack_cali_gainEPjiiPi */
/* Demangled: TsfCore::unpack_cali_gain(unsigned int*, int, int, int*) */
int _ZN7TsfCore16unpack_cali_gainEPjiiPi(void);

/* Symbol: _ZN10MTKLscUtil14LscZmItpSwInitEPv */
/* Demangled: MTKLscUtil::LscZmItpSwInit(void*) */
int _ZN10MTKLscUtil14LscZmItpSwInitEPv(void);

/* Symbol: _ZN10TsfCore_IF14createInstanceEv */
/* Demangled: TsfCore_IF::createInstance() */
int _ZN10TsfCore_IF14createInstanceEv(void);

/* Symbol: _Z17LscTransGainCalcuPfiiPj */
/* Demangled: LscTransGainCalcu(float*, int, int, unsigned int*) */
int _Z17LscTransGainCalcuPfiiPj(void);

/* Symbol: _ZN7TsfCore21compute_M_N_refine_cbEiiiiPiS0_S0_S0_S0_iS0_ff */
/* Demangled: TsfCore::compute_M_N_refine_cb(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
int _ZN7TsfCore21compute_M_N_refine_cbEiiiiPiS0_S0_S0_S0_iS0_ff(void);

/* Symbol: _ZN7TsfCore21compute_M_N_refine_crEiiiiPiS0_S0_S0_S0_iS0_ff */
/* Demangled: TsfCore::compute_M_N_refine_cr(int, int, int, int, int*, int*, int*, int*, int*, int, int*, float, float) */
int _ZN7TsfCore21compute_M_N_refine_crEiiiiPiS0_S0_S0_S0_iS0_ff(void);

/* Symbol: _Z17shading_transform17SHADIND_TRFM_CONF */
/* Demangled: shading_transform(SHADIND_TRFM_CONF) */
int _Z17shading_transform17SHADIND_TRFM_CONF(void);

/* Symbol: _Z20mrLSC_POLY_Ratio_Getii12RATIO_POLY_T */
/* Demangled: mrLSC_POLY_Ratio_Get(int, int, RATIO_POLY_T) */
int _Z20mrLSC_POLY_Ratio_Getii12RATIO_POLY_T(void);

/* Symbol: _ZTV10AppLscUtil */
/* Demangled: vtable for AppLscUtil */
extern void* _ZTV10AppLscUtil;

/* Symbol: _ZN10MTKLscUtil14createInstanceEv */
/* Demangled: MTKLscUtil::createInstance() */
int _ZN10MTKLscUtil14createInstanceEv(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _ZN6MTKTsf7TsfMainEv */
/* Demangled: MTKTsf::TsfMain() */
int _ZN6MTKTsf7TsfMainEv(void);

/* Symbol: set_ul */
/* Demangled: set_ul */
int set_ul(void);

/* Symbol: _ZN6AppTsfC2Ev */
/* Demangled: AppTsf::AppTsf() */
int _ZN6AppTsfC2Ev(void);

/* Symbol: _ZN6MTKTsf14TsfFeatureCtrlEjPvS0_ */
/* Demangled: MTKTsf::TsfFeatureCtrl(unsigned int, void*, void*) */
int _ZN6MTKTsf14TsfFeatureCtrlEjPvS0_(void);

/* Symbol: __subsf3 */
/* Demangled: __subsf3 */
int __subsf3(void);

/* Symbol: _ZN7TsfCore15compute_tsf_delEPiS0_i */
/* Demangled: TsfCore::compute_tsf_del(int*, int*, int) */
int _ZN7TsfCore15compute_tsf_delEPiS0_i(void);

/* Symbol: cal_A2 */
/* Demangled: cal_A2 */
int cal_A2(void);

/* Symbol: _Z16fprintf_ivector_PiiPc */
/* Demangled: fprintf_ivector_(int*, int, char*) */
int _Z16fprintf_ivector_PiiPc(void);

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: _ZN10AppLscUtil11getInstanceEv */
/* Demangled: AppLscUtil::getInstance() */
int _ZN10AppLscUtil11getInstanceEv(void);

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: __floatsisf */
/* Demangled: __floatsisf */
int __floatsisf(void);

/* Symbol: _Z17comp_xy_grid_gainPvPjPiS0_iiP13_ShadingBlock */
/* Demangled: comp_xy_grid_gain(void*, unsigned int*, int*, unsigned int*, int, int, _ShadingBlock*) */
int _Z17comp_xy_grid_gainPvPjPiS0_iiP13_ShadingBlock(void);

/* Symbol: _ZN7TsfCore19TsfCoreConfigSmoothEj */
/* Demangled: TsfCore::TsfCoreConfigSmooth(unsigned int) */
int _ZN7TsfCore19TsfCoreConfigSmoothEj(void);

/* Symbol: _ZN10TsfCore_IF13TsfCoreGetLogEPjS0_S0_S0_ */
/* Demangled: TsfCore_IF::TsfCoreGetLog(unsigned int*, unsigned int*, unsigned int*, unsigned int*) */
int _ZN10TsfCore_IF13TsfCoreGetLogEPjS0_S0_S0_(void);

/* Symbol: __aeabi_i2f */
/* Demangled: __aeabi_i2f */
int __aeabi_i2f(void);

/* Symbol: __aeabi_fsub */
/* Demangled: __aeabi_fsub */
int __aeabi_fsub(void);

/* Symbol: _ZN10AppLscUtilD0Ev */
/* Demangled: AppLscUtil::~AppLscUtil() */
int _ZN10AppLscUtilD0Ev(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

/* Symbol: _ZN7TsfCore12TsfCoreResetEv */
/* Demangled: TsfCore::TsfCoreReset() */
int _ZN7TsfCore12TsfCoreResetEv(void);

/* Symbol: _ZN7TsfCore14compute_day_wtEiiiiiiiii */
/* Demangled: TsfCore::compute_day_wt(int, int, int, int, int, int, int, int, int) */
int _ZN7TsfCore14compute_day_wtEiiiiiiiii(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _ZN6AppTsf15destroyInstanceEP6MTKTsf */
/* Demangled: AppTsf::destroyInstance(MTKTsf*) */
int _ZN6AppTsf15destroyInstanceEP6MTKTsf(void);

/* Symbol: _ZN10AppLscUtil11LscRaSwMainEPv */
/* Demangled: AppLscUtil::LscRaSwMain(void*) */
int _ZN10AppLscUtil11LscRaSwMainEPv(void);

/* Symbol: _ZN7TsfCoreC1Ev */
/* Demangled: TsfCore::TsfCore() */
int _ZN7TsfCoreC1Ev(void);

/* Symbol: _ZN7TsfCore18awb_smallavg_optwvEPtS0_iiP10RGB_STRUCTiiii */
/* Demangled: TsfCore::awb_smallavg_optwv(unsigned short*, unsigned short*, int, int, RGB_STRUCT*, int, int, int, int) */
int _ZN7TsfCore18awb_smallavg_optwvEPtS0_iiP10RGB_STRUCTiiii(void);

/* Symbol: _Z15vLSC_PARAM_INIT19LSC_CAL_INI_PARAM_T */
/* Demangled: vLSC_PARAM_INIT(LSC_CAL_INI_PARAM_T) */
int _Z15vLSC_PARAM_INIT19LSC_CAL_INI_PARAM_T(void);

/* Symbol: _ZN7TsfCore23TsfCoreGetDebugBuffSizeEv */
/* Demangled: TsfCore::TsfCoreGetDebugBuffSize() */
int _ZN7TsfCore23TsfCoreGetDebugBuffSizeEv(void);

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: _ZN7TsfCore16filter_separableEPiS0_iiS0_iiS0_ii */
/* Demangled: TsfCore::filter_separable(int*, int*, int, int, int*, int, int, int*, int, int) */
int _ZN7TsfCore16filter_separableEPiS0_iiS0_iiS0_ii(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_LSC_H */
