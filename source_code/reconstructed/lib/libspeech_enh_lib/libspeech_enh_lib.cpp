/*
 * Reverse-Engineered Source for: libspeech_enh_lib.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libspeech_enh_lib"

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
#include "libspeech_enh_lib.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: init_DMNR_par_sys */
extern "C" __attribute__((visibility("default"))) int init_DMNR_par_sys(void) {
    ALOGD("init_DMNR_par_sys() called");
    return 0;
}

/* Exported Object: FreqShapeCoef_WB_Xml */
extern "C" __attribute__((visibility("default"))) void* FreqShapeCoef_WB_Xml = NULL;

/* Demangled: WB_NR_SbAnalysis */
extern "C" __attribute__((visibility("default"))) int WB_NR_SbAnalysis(void) {
    ALOGD("WB_NR_SbAnalysis() called");
    return 0;
}

/* Demangled: ar1_filter_3_16 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_3_16(void) {
    ALOGD("ar1_filter_3_16() called");
    return 0;
}

/* Demangled: init_compressor_48K_n */
extern "C" __attribute__((visibility("default"))) int init_compressor_48K_n(void) {
    ALOGD("init_compressor_48K_n() called");
    return 0;
}

/* Exported Object: VCE2o0_SM_THR_t */
extern "C" __attribute__((visibility("default"))) void* VCE2o0_SM_THR_t = NULL;

/* Demangled: align_fractional_point */
extern "C" __attribute__((visibility("default"))) int align_fractional_point(void) {
    ALOGD("align_fractional_point() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize_2 */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_2 = NULL;

/* Demangled: ENH_API_DMNR_spk_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_spk_Alloc(void) {
    ALOGD("ENH_API_DMNR_spk_Alloc() called");
    return 0;
}

/* Demangled: D2T_Normalized */
extern "C" __attribute__((visibility("default"))) int D2T_Normalized(void) {
    ALOGD("D2T_Normalized() called");
    return 0;
}

/* Exported Object: NDC_CB_Table_48K */
extern "C" __attribute__((visibility("default"))) void* NDC_CB_Table_48K = NULL;

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: free_HSR_memory */
extern "C" __attribute__((visibility("default"))) int free_HSR_memory(void) {
    ALOGD("free_HSR_memory() called");
    return 0;
}

/* Demangled: ENH_API_Run_MR_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_MR_UL(void) {
    ALOGD("ENH_API_Run_MR_UL() called");
    return 0;
}

/* Demangled: ENH_API_Init_ANE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_ANE(void) {
    ALOGD("ENH_API_Init_ANE() called");
    return 0;
}

/* Demangled: STE_FIR */
extern "C" __attribute__((visibility("default"))) int STE_FIR(void) {
    ALOGD("STE_FIR() called");
    return 0;
}

/* Demangled: add_comfort_noise */
extern "C" __attribute__((visibility("default"))) int add_comfort_noise(void) {
    ALOGD("add_comfort_noise() called");
    return 0;
}

/* Demangled: md32_packhh */
extern "C" __attribute__((visibility("default"))) int md32_packhh(void) {
    ALOGD("md32_packhh() called");
    return 0;
}

/* Demangled: ABF_cal_process */
extern "C" __attribute__((visibility("default"))) int ABF_cal_process(void) {
    ALOGD("ABF_cal_process() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_8k_set1 = NULL;

/* Demangled: Radix4FirstStage */
extern "C" __attribute__((visibility("default"))) int Radix4FirstStage(void) {
    ALOGD("Radix4FirstStage() called");
    return 0;
}

/* Demangled: Noise_Level_Calibration */
extern "C" __attribute__((visibility("default"))) int Noise_Level_Calibration(void) {
    ALOGD("Noise_Level_Calibration() called");
    return 0;
}

/* Demangled: mtk_arsi_process_ul_buf */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_process_ul_buf(void) {
    ALOGD("mtk_arsi_process_ul_buf() called");
    return 0;
}

/* Exported Object: dctcos_4_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_4_WB = NULL;

/* Exported Object: IIR_coef_b2_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_8k_set2 = NULL;

/* Demangled: init_nlp_parms */
extern "C" __attribute__((visibility("default"))) int init_nlp_parms(void) {
    ALOGD("init_nlp_parms() called");
    return 0;
}

/* Demangled: L_mac_40 */
extern "C" __attribute__((visibility("default"))) int L_mac_40(void) {
    ALOGD("L_mac_40() called");
    return 0;
}

/* Demangled: Maximum_Statistics */
extern "C" __attribute__((visibility("default"))) int Maximum_Statistics(void) {
    ALOGD("Maximum_Statistics() called");
    return 0;
}

/* Demangled: allocate_memory_DMNR */
extern "C" __attribute__((visibility("default"))) int allocate_memory_DMNR(void) {
    ALOGD("allocate_memory_DMNR() called");
    return 0;
}

/* Demangled: phase_calibration */
extern "C" __attribute__((visibility("default"))) int phase_calibration(void) {
    ALOGD("phase_calibration() called");
    return 0;
}

/* Exported Object: IIR_b1_NB */
extern "C" __attribute__((visibility("default"))) void* IIR_b1_NB = NULL;

/* Demangled: WB_NR_ToneDetection_HandFree */
extern "C" __attribute__((visibility("default"))) int WB_NR_ToneDetection_HandFree(void) {
    ALOGD("WB_NR_ToneDetection_HandFree() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_8k_set3 = NULL;

/* Demangled: fixed_white_noise_gen */
extern "C" __attribute__((visibility("default"))) int fixed_white_noise_gen(void) {
    ALOGD("fixed_white_noise_gen() called");
    return 0;
}

/* Demangled: get_memory_DMNR */
extern "C" __attribute__((visibility("default"))) int get_memory_DMNR(void) {
    ALOGD("get_memory_DMNR() called");
    return 0;
}

/* Demangled: init_SD_vad */
extern "C" __attribute__((visibility("default"))) int init_SD_vad(void) {
    ALOGD("init_SD_vad() called");
    return 0;
}

/* Demangled: ENH_API_Init_DMNR_spk_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DMNR_spk_n(void) {
    ALOGD("ENH_API_Init_DMNR_spk_n() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Exported Object: HP_IIR_coef_b1_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_b1_16k_set = NULL;

/* Exported Object: IIR_coef_b2_8k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_8k_set4 = NULL;

/* Exported Object: NDC_Cnst_Table_SWB */
extern "C" __attribute__((visibility("default"))) void* NDC_Cnst_Table_SWB = NULL;

/* Demangled: RIFFT_512_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_512_Q31(void) {
    ALOGD("RIFFT_512_Q31() called");
    return 0;
}

/* Demangled: ENH_API_Update_Parameter */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Parameter(void) {
    ALOGD("ENH_API_Update_Parameter() called");
    return 0;
}

/* Exported Object: ne_ds_hist */
extern "C" __attribute__((visibility("default"))) void* ne_ds_hist = NULL;

/* Demangled: ENH_API_Init_AEC_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_AEC_n(void) {
    ALOGD("ENH_API_Init_AEC_n() called");
    return 0;
}

/* Demangled: md32_packhl */
extern "C" __attribute__((visibility("default"))) int md32_packhl(void) {
    ALOGD("md32_packhl() called");
    return 0;
}

/* Demangled: NDC_NRDRC */
extern "C" __attribute__((visibility("default"))) int NDC_NRDRC(void) {
    ALOGD("NDC_NRDRC() called");
    return 0;
}

/* Demangled: init_abf_nlms */
extern "C" __attribute__((visibility("default"))) int init_abf_nlms(void) {
    ALOGD("init_abf_nlms() called");
    return 0;
}

/* Exported Object: Beam_direction_delay */
extern "C" __attribute__((visibility("default"))) void* Beam_direction_delay = NULL;

/* Exported Object: UL_IIR_coef_a2_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_8k_set1 = NULL;

/* Demangled: LR2CS */
extern "C" __attribute__((visibility("default"))) int LR2CS(void) {
    ALOGD("LR2CS() called");
    return 0;
}

/* Demangled: compressor_48K_sub_process */
extern "C" __attribute__((visibility("default"))) int compressor_48K_sub_process(void) {
    ALOGD("compressor_48K_sub_process() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a2_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_8k_set2 = NULL;

/* Exported Object: abf_sb_pwr_bias_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_shadow_stepsize = NULL;

/* Exported Object: UL_IIR_coef_a2_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_8k_set3 = NULL;

/* Exported Object: fshift_bp_flt */
extern "C" __attribute__((visibility("default"))) void* fshift_bp_flt = NULL;

/* Exported Object: num_taps */
extern "C" __attribute__((visibility("default"))) void* num_taps = NULL;

/* Demangled: round_s */
extern "C" __attribute__((visibility("default"))) int round_s(void) {
    ALOGD("round_s() called");
    return 0;
}

/* Demangled: mtk_arsi_reset_handler */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_reset_handler(void) {
    ALOGD("mtk_arsi_reset_handler() called");
    return 0;
}

/* Demangled: RIFFT_256_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_256_Q31(void) {
    ALOGD("RIFFT_256_Q31() called");
    return 0;
}

/* Demangled: libprof_return */
extern "C" __attribute__((visibility("default"))) int libprof_return(void) {
    ALOGD("libprof_return() called");
    return 0;
}

/* Demangled: AGC_cal_power */
extern "C" __attribute__((visibility("default"))) int AGC_cal_power(void) {
    ALOGD("AGC_cal_power() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a2_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_16k_set1 = NULL;

/* Exported Object: pf_16_12_128 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128 = NULL;

/* Demangled: swap_blk */
extern "C" __attribute__((visibility("default"))) int swap_blk(void) {
    ALOGD("swap_blk() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a2_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_16k_set2 = NULL;

/* Demangled: abf_mode_init */
extern "C" __attribute__((visibility("default"))) int abf_mode_init(void) {
    ALOGD("abf_mode_init() called");
    return 0;
}

/* Demangled: init_bankB_parms_DMNR */
extern "C" __attribute__((visibility("default"))) int init_bankB_parms_DMNR(void) {
    ALOGD("init_bankB_parms_DMNR() called");
    return 0;
}

/* Demangled: BWE_bef_alias */
extern "C" __attribute__((visibility("default"))) int BWE_bef_alias(void) {
    ALOGD("BWE_bef_alias() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a2_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a2_16k_set3 = NULL;

/* Exported Object: UL_IIR_coef_b1_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_16k_set1 = NULL;

/* Exported Object: ds_coef */
extern "C" __attribute__((visibility("default"))) void* ds_coef = NULL;

/* Demangled: AGC_function */
extern "C" __attribute__((visibility("default"))) int AGC_function(void) {
    ALOGD("AGC_function() called");
    return 0;
}

/* Demangled: compose_64 */
extern "C" __attribute__((visibility("default"))) int compose_64(void) {
    ALOGD("compose_64() called");
    return 0;
}

/* Exported Object: IIR_b2_WB */
extern "C" __attribute__((visibility("default"))) void* IIR_b2_WB = NULL;

/* Exported Object: UL_IIR_coef_b1_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_16k_set2 = NULL;

/* Demangled: BWE_control */
extern "C" __attribute__((visibility("default"))) int BWE_control(void) {
    ALOGD("BWE_control() called");
    return 0;
}

/* Demangled: WB_NR_SuppressGainEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainEst(void) {
    ALOGD("WB_NR_SuppressGainEst() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_b1_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_16k_set3 = NULL;

/* Demangled: NDC_Com_Init */
extern "C" __attribute__((visibility("default"))) int NDC_Com_Init(void) {
    ALOGD("NDC_Com_Init() called");
    return 0;
}

/* Exported Object: ESR_THD */
extern "C" __attribute__((visibility("default"))) void* ESR_THD = NULL;

/* Exported Object: low_flt */
extern "C" __attribute__((visibility("default"))) void* low_flt = NULL;

/* Demangled: modify_stepsize_tcl */
extern "C" __attribute__((visibility("default"))) int modify_stepsize_tcl(void) {
    ALOGD("modify_stepsize_tcl() called");
    return 0;
}

/* Demangled: ar1_filter_1_32 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_1_32(void) {
    ALOGD("ar1_filter_1_32() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_Alloc(void) {
    ALOGD("ENH_API_DMNR_Alloc() called");
    return 0;
}

/* Demangled: ABF_DIF_FFT */
extern "C" __attribute__((visibility("default"))) int ABF_DIF_FFT(void) {
    ALOGD("ABF_DIF_FFT() called");
    return 0;
}

/* Demangled: spatial_filter_spk */
extern "C" __attribute__((visibility("default"))) int spatial_filter_spk(void) {
    ALOGD("spatial_filter_spk() called");
    return 0;
}

/* Demangled: ENH_API_MR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_MR_Alloc(void) {
    ALOGD("ENH_API_MR_Alloc() called");
    return 0;
}

/* Demangled: AEC_Ne_sample_based_processing */
extern "C" __attribute__((visibility("default"))) int AEC_Ne_sample_based_processing(void) {
    ALOGD("AEC_Ne_sample_based_processing() called");
    return 0;
}

/* Demangled: mtk_arsi_destroy_handler */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_destroy_handler(void) {
    ALOGD("mtk_arsi_destroy_handler() called");
    return 0;
}

/* Exported Object: DlMusicDetL1aTblInit */
extern "C" __attribute__((visibility("default"))) void* DlMusicDetL1aTblInit = NULL;

/* Demangled: init_bankA_parms_DMNR */
extern "C" __attribute__((visibility("default"))) int init_bankA_parms_DMNR(void) {
    ALOGD("init_bankA_parms_DMNR() called");
    return 0;
}

/* Demangled: ENH_API_HSR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_HSR_Alloc(void) {
    ALOGD("ENH_API_HSR_Alloc() called");
    return 0;
}

/* Exported Object: HP_IIR_coef_a2_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_a2_16k_set = NULL;

/* Exported Object: asdwRealCoefBQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwRealCoefBQ31 = NULL;

/* Demangled: dB_Mult */
extern "C" __attribute__((visibility("default"))) int dB_Mult(void) {
    ALOGD("dB_Mult() called");
    return 0;
}

/* Demangled: ENH_API_Init_Compressor_48K_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_Compressor_48K_n(void) {
    ALOGD("ENH_API_Init_Compressor_48K_n() called");
    return 0;
}

/* Demangled: All_Pass_Filter_Computation */
extern "C" __attribute__((visibility("default"))) int All_Pass_Filter_Computation(void) {
    ALOGD("All_Pass_Filter_Computation() called");
    return 0;
}

/* Demangled: UlDlMusicDet_L1aTblInit */
extern "C" __attribute__((visibility("default"))) int UlDlMusicDet_L1aTblInit(void) {
    ALOGD("UlDlMusicDet_L1aTblInit() called");
    return 0;
}

/* Demangled: nlms_abf_1 */
extern "C" __attribute__((visibility("default"))) int nlms_abf_1(void) {
    ALOGD("nlms_abf_1() called");
    return 0;
}

/* Demangled: get_HSR_memory */
extern "C" __attribute__((visibility("default"))) int get_HSR_memory(void) {
    ALOGD("get_HSR_memory() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_B_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_B_t = NULL;

/* Exported Object: sb_pwr_bias_additional_shadow_st */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_additional_shadow_st = NULL;

/* Demangled: vad_fe */
extern "C" __attribute__((visibility("default"))) int vad_fe(void) {
    ALOGD("vad_fe() called");
    return 0;
}

/* Demangled: MBDRC_IIR_struct_init */
extern "C" __attribute__((visibility("default"))) int MBDRC_IIR_struct_init(void) {
    ALOGD("MBDRC_IIR_struct_init() called");
    return 0;
}

/* Demangled: SlowBitReverse256 */
extern "C" __attribute__((visibility("default"))) int SlowBitReverse256(void) {
    ALOGD("SlowBitReverse256() called");
    return 0;
}

/* Demangled: init_vad_ne */
extern "C" __attribute__((visibility("default"))) int init_vad_ne(void) {
    ALOGD("init_vad_ne() called");
    return 0;
}

/* Demangled: sub_band_CNG_nf_compute */
extern "C" __attribute__((visibility("default"))) int sub_band_CNG_nf_compute(void) {
    ALOGD("sub_band_CNG_nf_compute() called");
    return 0;
}

/* Demangled: RIFFT_1024_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_1024_Q31(void) {
    ALOGD("RIFFT_1024_Q31() called");
    return 0;
}

/* Exported Object: power_limit_xu2 */
extern "C" __attribute__((visibility("default"))) void* power_limit_xu2 = NULL;

/* Demangled: ENH_API_Run_Ste */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ste(void) {
    ALOGD("ENH_API_Run_Ste() called");
    return 0;
}

/* Demangled: FIR_Q15_90tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_90tap(void) {
    ALOGD("FIR_Q15_90tap() called");
    return 0;
}

/* Exported Object: num_taps_shadow_stepsize_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow_stepsize_abf = NULL;

/* Demangled: SRC_init */
extern "C" __attribute__((visibility("default"))) int SRC_init(void) {
    ALOGD("SRC_init() called");
    return 0;
}

/* Exported Object: sb_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_shadow_stepsize = NULL;

/* Exported Object: Manual_clipping_table */
extern "C" __attribute__((visibility("default"))) void* Manual_clipping_table = NULL;

/* Demangled: mtk_arsi_set_ul_mute */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_ul_mute(void) {
    ALOGD("mtk_arsi_set_ul_mute() called");
    return 0;
}

/* Exported Object: abf_AGC_Pos_Gain */
extern "C" __attribute__((visibility("default"))) void* abf_AGC_Pos_Gain = NULL;

/* Demangled: allocate_HSR_memory */
extern "C" __attribute__((visibility("default"))) int allocate_HSR_memory(void) {
    ALOGD("allocate_HSR_memory() called");
    return 0;
}

/* Exported Object: repeat_samples */
extern "C" __attribute__((visibility("default"))) void* repeat_samples = NULL;

/* Demangled: SRC_downsample_4in */
extern "C" __attribute__((visibility("default"))) int SRC_downsample_4in(void) {
    ALOGD("SRC_downsample_4in() called");
    return 0;
}

/* Demangled: debug_mkdir */
extern "C" __attribute__((visibility("default"))) int debug_mkdir(void) {
    ALOGD("debug_mkdir() called");
    return 0;
}

/* Demangled: spatial_filter */
extern "C" __attribute__((visibility("default"))) int spatial_filter(void) {
    ALOGD("spatial_filter() called");
    return 0;
}

/* Demangled: ENH_API_Get_AEC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_AEC_Memory(void) {
    ALOGD("ENH_API_Get_AEC_Memory() called");
    return 0;
}

/* Exported Object: num_taps_additional_shadow_st */
extern "C" __attribute__((visibility("default"))) void* num_taps_additional_shadow_st = NULL;

/* Demangled: ENH_API_Init_DMNR_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DMNR_n(void) {
    ALOGD("ENH_API_Init_DMNR_n() called");
    return 0;
}

/* Demangled: RFFT_512_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_512_Q31(void) {
    ALOGD("RFFT_512_Q31() called");
    return 0;
}

/* Exported Object: Table_D2T */
extern "C" __attribute__((visibility("default"))) void* Table_D2T = NULL;

/* Exported Object: CLARITY_Attack_Time */
extern "C" __attribute__((visibility("default"))) void* CLARITY_Attack_Time = NULL;

/* Exported Object: IIR_coef_a2_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_8k_set1 = NULL;

/* Demangled: BitRev */
extern "C" __attribute__((visibility("default"))) int BitRev(void) {
    ALOGD("BitRev() called");
    return 0;
}

/* Demangled: full_band_es */
extern "C" __attribute__((visibility("default"))) int full_band_es(void) {
    ALOGD("full_band_es() called");
    return 0;
}

/* Demangled: ABF_CB_post_filtering_spk */
extern "C" __attribute__((visibility("default"))) int ABF_CB_post_filtering_spk(void) {
    ALOGD("ABF_CB_post_filtering_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set1 = NULL;

/* Exported Object: IIR_coef_a2_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_8k_set2 = NULL;

/* Demangled: NDC_UL_Comfort_Noise */
extern "C" __attribute__((visibility("default"))) int NDC_UL_Comfort_Noise(void) {
    ALOGD("NDC_UL_Comfort_Noise() called");
    return 0;
}

/* Exported Object: VAD_TH_Table */
extern "C" __attribute__((visibility("default"))) void* VAD_TH_Table = NULL;

/* Demangled: NR_ToneDetection */
extern "C" __attribute__((visibility("default"))) int NR_ToneDetection(void) {
    ALOGD("NR_ToneDetection() called");
    return 0;
}

/* Demangled: ENH_API_Update_Parameter_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Parameter_DMNR(void) {
    ALOGD("ENH_API_Update_Parameter_DMNR() called");
    return 0;
}

/* Demangled: ABF_SB */
extern "C" __attribute__((visibility("default"))) int ABF_SB(void) {
    ALOGD("ABF_SB() called");
    return 0;
}

/* Demangled: ENH_API_Run_Hsr */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Hsr(void) {
    ALOGD("ENH_API_Run_Hsr() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set2 = NULL;

/* Exported Object: IIR_coef_a2_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_8k_set3 = NULL;

/* Exported Object: NR_48K_DB_LINEAR */
extern "C" __attribute__((visibility("default"))) void* NR_48K_DB_LINEAR = NULL;

/* Demangled: dynamic_link_arsi_assign_lib_fp */
extern "C" __attribute__((visibility("default"))) int dynamic_link_arsi_assign_lib_fp(void) {
    ALOGD("dynamic_link_arsi_assign_lib_fp() called");
    return 0;
}

/* Exported Object: HSR_HB_Coeff */
extern "C" __attribute__((visibility("default"))) void* HSR_HB_Coeff = NULL;

/* Exported Object: Gain_AR_Rate_16 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_16 = NULL;

/* Exported Object: HP_IIR_coef_a1_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_a1_16k_set = NULL;

/* Exported Object: IIR_coef_b2_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set3 = NULL;

/* Exported Object: IIR_coef_a2_8k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_8k_set4 = NULL;

/* Exported Object: abf_sb_pwr_bias_normal */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_normal = NULL;

/* Demangled: abf_mode_init_spk */
extern "C" __attribute__((visibility("default"))) int abf_mode_init_spk(void) {
    ALOGD("abf_mode_init_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_16k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set4 = NULL;

/* Exported Object: DeEmpahsisFIR_coef */
extern "C" __attribute__((visibility("default"))) void* DeEmpahsisFIR_coef = NULL;

/* Exported Object: fe_delay_ds_hist */
extern "C" __attribute__((visibility("default"))) void* fe_delay_ds_hist = NULL;

/* Exported Object: STE_Widen_Side03_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side03_t = NULL;

/* Demangled: init_bankA_parms */
extern "C" __attribute__((visibility("default"))) int init_bankA_parms(void) {
    ALOGD("init_bankA_parms() called");
    return 0;
}

/* Demangled: NR_SuppressGainEst */
extern "C" __attribute__((visibility("default"))) int NR_SuppressGainEst(void) {
    ALOGD("NR_SuppressGainEst() called");
    return 0;
}

/* Exported Object: Hgain_smooth_threshold_table */
extern "C" __attribute__((visibility("default"))) void* Hgain_smooth_threshold_table = NULL;

/* Demangled: gcc_phat */
extern "C" __attribute__((visibility("default"))) int gcc_phat(void) {
    ALOGD("gcc_phat() called");
    return 0;
}

/* Demangled: UAD_FB */
extern "C" __attribute__((visibility("default"))) int UAD_FB(void) {
    ALOGD("UAD_FB() called");
    return 0;
}

/* Demangled: UL_FrontEnd_16k */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_16k(void) {
    ALOGD("UL_FrontEnd_16k() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_16k_set5 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set5 = NULL;

/* Demangled: mtk_arsi_update_param */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_update_param(void) {
    ALOGD("mtk_arsi_update_param() called");
    return 0;
}

/* Exported Object: MMD_level_table */
extern "C" __attribute__((visibility("default"))) void* MMD_level_table = NULL;

/* Demangled: VT_VAD_process */
extern "C" __attribute__((visibility("default"))) int VT_VAD_process(void) {
    ALOGD("VT_VAD_process() called");
    return 0;
}

/* Exported Object: power_limit_x */
extern "C" __attribute__((visibility("default"))) void* power_limit_x = NULL;

/* Exported Object: IIR_coef_b2_16k_set6 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set6 = NULL;

/* Demangled: normalize_fun_32 */
extern "C" __attribute__((visibility("default"))) int normalize_fun_32(void) {
    ALOGD("normalize_fun_32() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_16k_set7 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_16k_set7 = NULL;

/* Exported Object: UL_IIR_coef_a1_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_16k_set1 = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: subframe_num */
extern "C" __attribute__((visibility("default"))) void* subframe_num = NULL;

/* Demangled: NR_Fixed_sqrt */
extern "C" __attribute__((visibility("default"))) int NR_Fixed_sqrt(void) {
    ALOGD("NR_Fixed_sqrt() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a1_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_16k_set2 = NULL;

/* Demangled: ENH_API_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_Alloc(void) {
    ALOGD("ENH_API_Alloc() called");
    return 0;
}

/* Demangled: md32_aru_sum */
extern "C" __attribute__((visibility("default"))) int md32_aru_sum(void) {
    ALOGD("md32_aru_sum() called");
    return 0;
}

/* Demangled: md32_fmuld */
extern "C" __attribute__((visibility("default"))) int md32_fmuld(void) {
    ALOGD("md32_fmuld() called");
    return 0;
}

/* Demangled: Cal_SingleNR */
extern "C" __attribute__((visibility("default"))) int Cal_SingleNR(void) {
    ALOGD("Cal_SingleNR() called");
    return 0;
}

/* Demangled: init_DMNR_par_sys_spk */
extern "C" __attribute__((visibility("default"))) int init_DMNR_par_sys_spk(void) {
    ALOGD("init_DMNR_par_sys_spk() called");
    return 0;
}

/* Demangled: Expender */
extern "C" __attribute__((visibility("default"))) int Expender(void) {
    ALOGD("Expender() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_a1_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_16k_set3 = NULL;

/* Demangled: ENH_API_SCH_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_SCH_Alloc(void) {
    ALOGD("ENH_API_SCH_Alloc() called");
    return 0;
}

/* Demangled: shl_pwr_bias */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias(void) {
    ALOGD("shl_pwr_bias() called");
    return 0;
}

/* Demangled: mtk_arsi_get_key_value_pair */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_get_key_value_pair(void) {
    ALOGD("mtk_arsi_get_key_value_pair() called");
    return 0;
}

/* Exported Object: pf_WB */
extern "C" __attribute__((visibility("default"))) void* pf_WB = NULL;

/* Exported Object: sb_pwr_bias_additional_shadow */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_additional_shadow = NULL;

/* Demangled: L_multNs */
extern "C" __attribute__((visibility("default"))) int L_multNs(void) {
    ALOGD("L_multNs() called");
    return 0;
}

/* Exported Object: bp2_target_gain */
extern "C" __attribute__((visibility("default"))) void* bp2_target_gain = NULL;

/* Exported Object: ANE_dB_Gain_Table */
extern "C" __attribute__((visibility("default"))) void* ANE_dB_Gain_Table = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: init_sb_nlms */
extern "C" __attribute__((visibility("default"))) int init_sb_nlms(void) {
    ALOGD("init_sb_nlms() called");
    return 0;
}

/* Demangled: mtk_arsi_get_lib_version */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_get_lib_version(void) {
    ALOGD("mtk_arsi_get_lib_version() called");
    return 0;
}

/* Exported Object: dctcos_1_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_1_WB = NULL;

/* Demangled: RIFFT_32_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_32_Q31(void) {
    ALOGD("RIFFT_32_Q31() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: fb_ASLR_noise_esti_spk */
extern "C" __attribute__((visibility("default"))) int fb_ASLR_noise_esti_spk(void) {
    ALOGD("fb_ASLR_noise_esti_spk() called");
    return 0;
}

/* Demangled: SF_DL */
extern "C" __attribute__((visibility("default"))) int SF_DL(void) {
    ALOGD("SF_DL() called");
    return 0;
}

/* Exported Object: MBDRC_Pores */
extern "C" __attribute__((visibility("default"))) void* MBDRC_Pores = NULL;

/* Demangled: mtk_arsi_query_max_debug_dump_buf_size */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_query_max_debug_dump_buf_size(void) {
    ALOGD("mtk_arsi_query_max_debug_dump_buf_size() called");
    return 0;
}

/* Demangled: WB_NR_NoiseEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_NoiseEst(void) {
    ALOGD("WB_NR_NoiseEst() called");
    return 0;
}

/* Demangled: ENH_API_Get_SCH_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_SCH_Memory(void) {
    ALOGD("ENH_API_Get_SCH_Memory() called");
    return 0;
}

/* Demangled: ENH_Mute_Begin_UL */
extern "C" __attribute__((visibility("default"))) int ENH_Mute_Begin_UL(void) {
    ALOGD("ENH_Mute_Begin_UL() called");
    return 0;
}

/* Exported Object: ds_index */
extern "C" __attribute__((visibility("default"))) void* ds_index = NULL;

/* Exported Object: HSR_LB_Coeff_DS_0 */
extern "C" __attribute__((visibility("default"))) void* HSR_LB_Coeff_DS_0 = NULL;

/* Demangled: fir_48K_960pt_36tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_960pt_36tap(void) {
    ALOGD("fir_48K_960pt_36tap() called");
    return 0;
}

/* Demangled: FSH */
extern "C" __attribute__((visibility("default"))) int FSH(void) {
    ALOGD("FSH() called");
    return 0;
}

/* Demangled: shl_pwr_bias_abf_spk */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias_abf_spk(void) {
    ALOGD("shl_pwr_bias_abf_spk() called");
    return 0;
}

/* Exported Object: HSR_LB_Coeff_DS_1 */
extern "C" __attribute__((visibility("default"))) void* HSR_LB_Coeff_DS_1 = NULL;

/* Demangled: MBDRC_HalfBand_IIR_Coefs_Init */
extern "C" __attribute__((visibility("default"))) int MBDRC_HalfBand_IIR_Coefs_Init(void) {
    ALOGD("MBDRC_HalfBand_IIR_Coefs_Init() called");
    return 0;
}

/* Demangled: SRC_downsample_x2 */
extern "C" __attribute__((visibility("default"))) int SRC_downsample_x2(void) {
    ALOGD("SRC_downsample_x2() called");
    return 0;
}

/* Demangled: md32_fmuld_add */
extern "C" __attribute__((visibility("default"))) int md32_fmuld_add(void) {
    ALOGD("md32_fmuld_add() called");
    return 0;
}

/* Exported Object: MMD_shift_table */
extern "C" __attribute__((visibility("default"))) void* MMD_shift_table = NULL;

/* Demangled: nlms_abf_spk */
extern "C" __attribute__((visibility("default"))) int nlms_abf_spk(void) {
    ALOGD("nlms_abf_spk() called");
    return 0;
}

/* Exported Object: HSR_LB_Coeff_DS_2 */
extern "C" __attribute__((visibility("default"))) void* HSR_LB_Coeff_DS_2 = NULL;

/* Exported Object: NDC_BankB_Window_SWB */
extern "C" __attribute__((visibility("default"))) void* NDC_BankB_Window_SWB = NULL;

/* Exported Object: sb_additional_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_additional_shadow_stepsize = NULL;

/* Exported Object: num_taps_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_abf = NULL;

/* Demangled: Cal_FFT */
extern "C" __attribute__((visibility("default"))) int Cal_FFT(void) {
    ALOGD("Cal_FFT() called");
    return 0;
}

/* Demangled: ABF_postfiltering_spk */
extern "C" __attribute__((visibility("default"))) int ABF_postfiltering_spk(void) {
    ALOGD("ABF_postfiltering_spk() called");
    return 0;
}

/* Exported Object: Table_T2D */
extern "C" __attribute__((visibility("default"))) void* Table_T2D = NULL;

/* Demangled: ENH_API_Run_Ndc_DL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ndc_DL(void) {
    ALOGD("ENH_API_Run_Ndc_DL() called");
    return 0;
}

/* Demangled: ENH_API_Process */
extern "C" __attribute__((visibility("default"))) int ENH_API_Process(void) {
    ALOGD("ENH_API_Process() called");
    return 0;
}

/* Demangled: NR_PreSuppressGainEst */
extern "C" __attribute__((visibility("default"))) int NR_PreSuppressGainEst(void) {
    ALOGD("NR_PreSuppressGainEst() called");
    return 0;
}

/* Demangled: ENH_API_Init_MR_DL_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_MR_DL_n(void) {
    ALOGD("ENH_API_Init_MR_DL_n() called");
    return 0;
}

/* Demangled: EPC_handling */
extern "C" __attribute__((visibility("default"))) int EPC_handling(void) {
    ALOGD("EPC_handling() called");
    return 0;
}

/* Demangled: mtk_arsi_process_dl_buf */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_process_dl_buf(void) {
    ALOGD("mtk_arsi_process_dl_buf() called");
    return 0;
}

/* Demangled: Fixed_Divide_48K */
extern "C" __attribute__((visibility("default"))) int Fixed_Divide_48K(void) {
    ALOGD("Fixed_Divide_48K() called");
    return 0;
}

/* Exported Object: DMNR_PD_THD */
extern "C" __attribute__((visibility("default"))) void* DMNR_PD_THD = NULL;

/* Demangled: ABF_Delay_Calibration */
extern "C" __attribute__((visibility("default"))) int ABF_Delay_Calibration(void) {
    ALOGD("ABF_Delay_Calibration() called");
    return 0;
}

/* Demangled: shl_pwr_bias_abf */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias_abf(void) {
    ALOGD("shl_pwr_bias_abf() called");
    return 0;
}

/* Demangled: init_PF_spk */
extern "C" __attribute__((visibility("default"))) int init_PF_spk(void) {
    ALOGD("init_PF_spk() called");
    return 0;
}

/* Demangled: div_s_32_vot */
extern "C" __attribute__((visibility("default"))) int div_s_32_vot(void) {
    ALOGD("div_s_32_vot() called");
    return 0;
}

/* Demangled: FIR_Q15_36tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_36tap(void) {
    ALOGD("FIR_Q15_36tap() called");
    return 0;
}

/* Demangled: md32_muld */
extern "C" __attribute__((visibility("default"))) int md32_muld(void) {
    ALOGD("md32_muld() called");
    return 0;
}

/* Demangled: ENH_API_Init_MR_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_MR_n(void) {
    ALOGD("ENH_API_Init_MR_n() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set1 = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Exported Object: dB2Linear_neg */
extern "C" __attribute__((visibility("default"))) void* dB2Linear_neg = NULL;

/* Exported Object: IIR_coef_a2_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set2 = NULL;

/* Demangled: nonlinear_echo_est */
extern "C" __attribute__((visibility("default"))) int nonlinear_echo_est(void) {
    ALOGD("nonlinear_echo_est() called");
    return 0;
}

/* Demangled: free_memory_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int free_memory_DMNR_spk(void) {
    ALOGD("free_memory_DMNR_spk() called");
    return 0;
}

/* Demangled: MBDRC_PeakLimiter */
extern "C" __attribute__((visibility("default"))) int MBDRC_PeakLimiter(void) {
    ALOGD("MBDRC_PeakLimiter() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set3 = NULL;

/* Exported Object: IIR_coef_b1_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set1 = NULL;

/* Demangled: ENH_API_Init_STE_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_STE_n(void) {
    ALOGD("ENH_API_Init_STE_n() called");
    return 0;
}

/* Demangled: ENH_API_Get_DMNR_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DMNR_Memory(void) {
    ALOGD("ENH_API_Get_DMNR_Memory() called");
    return 0;
}

/* Exported Object: abf_AGC_Neg_Gain */
extern "C" __attribute__((visibility("default"))) void* abf_AGC_Neg_Gain = NULL;

/* Demangled: UL_FrontEnd_48k */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_48k(void) {
    ALOGD("UL_FrontEnd_48k() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_16k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set4 = NULL;

/* Exported Object: IIR_coef_b1_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set2 = NULL;

/* Exported Object: UL_IIR_coef_b1_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_8k_set1 = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: ABF_Complex_FBF_and_BM */
extern "C" __attribute__((visibility("default"))) int ABF_Complex_FBF_and_BM(void) {
    ALOGD("ABF_Complex_FBF_and_BM() called");
    return 0;
}

/* Demangled: ABF_AGC_Gain_Compensation_spk */
extern "C" __attribute__((visibility("default"))) int ABF_AGC_Gain_Compensation_spk(void) {
    ALOGD("ABF_AGC_Gain_Compensation_spk() called");
    return 0;
}

/* Demangled: UL_FrontEnd_init */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_init(void) {
    ALOGD("UL_FrontEnd_init() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_16k_set5 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set5 = NULL;

/* Exported Object: IIR_coef_b1_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set3 = NULL;

/* Exported Object: UL_IIR_coef_b1_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_8k_set2 = NULL;

/* Demangled: sqrt_fr1x16 */
extern "C" __attribute__((visibility("default"))) int sqrt_fr1x16(void) {
    ALOGD("sqrt_fr1x16() called");
    return 0;
}

/* Demangled: IIR_allpass */
extern "C" __attribute__((visibility("default"))) int IIR_allpass(void) {
    ALOGD("IIR_allpass() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_16k_set6 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set6 = NULL;

/* Exported Object: IIR_coef_b1_16k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set4 = NULL;

/* Exported Object: UL_IIR_coef_b1_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b1_8k_set3 = NULL;

/* Demangled: ENH_API_NDC_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_NDC_Alloc(void) {
    ALOGD("ENH_API_NDC_Alloc() called");
    return 0;
}

/* Exported Object: us_hist */
extern "C" __attribute__((visibility("default"))) void* us_hist = NULL;

/* Exported Object: IIR_coef_a2_16k_set7 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_16k_set7 = NULL;

/* Exported Object: IIR_coef_b1_16k_set5 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set5 = NULL;

/* Exported Object: alias_bp_flt */
extern "C" __attribute__((visibility("default"))) void* alias_bp_flt = NULL;

/* Exported Object: NR_Strength_Table48k */
extern "C" __attribute__((visibility("default"))) void* NR_Strength_Table48k = NULL;

/* Demangled: HGain_time_smoothing_spk */
extern "C" __attribute__((visibility("default"))) int HGain_time_smoothing_spk(void) {
    ALOGD("HGain_time_smoothing_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_b1_16k_set6 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set6 = NULL;

/* Demangled: linear_mdb2 */
extern "C" __attribute__((visibility("default"))) int linear_mdb2(void) {
    ALOGD("linear_mdb2() called");
    return 0;
}

/* Exported Object: IIR_coef_b1_16k_set7 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_16k_set7 = NULL;

/* Demangled: ENH_API_STE_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_STE_Alloc(void) {
    ALOGD("ENH_API_STE_Alloc() called");
    return 0;
}

/* Demangled: fir_48K */
extern "C" __attribute__((visibility("default"))) int fir_48K(void) {
    ALOGD("fir_48K() called");
    return 0;
}

/* Exported Object: high_flt_NB */
extern "C" __attribute__((visibility("default"))) void* high_flt_NB = NULL;

/* Demangled: L_msu_i_40 */
extern "C" __attribute__((visibility("default"))) int L_msu_i_40(void) {
    ALOGD("L_msu_i_40() called");
    return 0;
}

/* Demangled: NR_SBSynthesis_48K */
extern "C" __attribute__((visibility("default"))) int NR_SBSynthesis_48K(void) {
    ALOGD("NR_SBSynthesis_48K() called");
    return 0;
}

/* Demangled: nlms_abf */
extern "C" __attribute__((visibility("default"))) int nlms_abf(void) {
    ALOGD("nlms_abf() called");
    return 0;
}

/* Demangled: init_bankB_parms_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int init_bankB_parms_DMNR_spk(void) {
    ALOGD("init_bankB_parms_DMNR_spk() called");
    return 0;
}

/* Demangled: CS2LR */
extern "C" __attribute__((visibility("default"))) int CS2LR(void) {
    ALOGD("CS2LR() called");
    return 0;
}

/* Demangled: init_AGC_parms */
extern "C" __attribute__((visibility("default"))) int init_AGC_parms(void) {
    ALOGD("init_AGC_parms() called");
    return 0;
}

/* Demangled: ar1_filter_3_32 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_3_32(void) {
    ALOGD("ar1_filter_3_32() called");
    return 0;
}

/* Demangled: SF */
extern "C" __attribute__((visibility("default"))) int SF(void) {
    ALOGD("SF() called");
    return 0;
}

/* Demangled: Gama_Interpolation */
extern "C" __attribute__((visibility("default"))) int Gama_Interpolation(void) {
    ALOGD("Gama_Interpolation() called");
    return 0;
}

/* Exported Object: LPF */
extern "C" __attribute__((visibility("default"))) void* LPF = NULL;

/* Exported Object: pf_16_12_128_WB */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128_WB = NULL;

/* Demangled: extract_l_64 */
extern "C" __attribute__((visibility("default"))) int extract_l_64(void) {
    ALOGD("extract_l_64() called");
    return 0;
}

/* Exported Object: NR_KBD_Window_480p */
extern "C" __attribute__((visibility("default"))) void* NR_KBD_Window_480p = NULL;

/* Demangled: ENH_API_Run_MR_DL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_MR_DL(void) {
    ALOGD("ENH_API_Run_MR_DL() called");
    return 0;
}

/* Exported Object: subframe_num_switch */
extern "C" __attribute__((visibility("default"))) void* subframe_num_switch = NULL;

/* Demangled: MusicEst */
extern "C" __attribute__((visibility("default"))) int MusicEst(void) {
    ALOGD("MusicEst() called");
    return 0;
}

/* Demangled: Radix4BflyFastNDC_test32_smmul */
extern "C" __attribute__((visibility("default"))) int Radix4BflyFastNDC_test32_smmul(void) {
    ALOGD("Radix4BflyFastNDC_test32_smmul() called");
    return 0;
}

/* Exported Object: dctcos_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_NB = NULL;

/* Demangled: ENH_API_Init_FE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_FE(void) {
    ALOGD("ENH_API_Init_FE() called");
    return 0;
}

/* Demangled: Normalized_Division */
extern "C" __attribute__((visibility("default"))) int Normalized_Division(void) {
    ALOGD("Normalized_Division() called");
    return 0;
}

/* Demangled: init_ASLR_parms */
extern "C" __attribute__((visibility("default"))) int init_ASLR_parms(void) {
    ALOGD("init_ASLR_parms() called");
    return 0;
}

/* Demangled: Well_cal_Cal_VAD */
extern "C" __attribute__((visibility("default"))) int Well_cal_Cal_VAD(void) {
    ALOGD("Well_cal_Cal_VAD() called");
    return 0;
}

/* Demangled: max_exp */
extern "C" __attribute__((visibility("default"))) int max_exp(void) {
    ALOGD("max_exp() called");
    return 0;
}

/* Demangled: IIR_64 */
extern "C" __attribute__((visibility("default"))) int IIR_64(void) {
    ALOGD("IIR_64() called");
    return 0;
}

/* Demangled: ULDL_GainControl_Init */
extern "C" __attribute__((visibility("default"))) int ULDL_GainControl_Init(void) {
    ALOGD("ULDL_GainControl_Init() called");
    return 0;
}

/* Demangled: AEC_fe_sample_based_processing */
extern "C" __attribute__((visibility("default"))) int AEC_fe_sample_based_processing(void) {
    ALOGD("AEC_fe_sample_based_processing() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_Mono */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Mono(void) {
    ALOGD("Graphical_UI_DRC_Mono() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_Stereo */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Stereo(void) {
    ALOGD("Graphical_UI_DRC_Stereo() called");
    return 0;
}

/* Demangled: Search_Max */
extern "C" __attribute__((visibility("default"))) int Search_Max(void) {
    ALOGD("Search_Max() called");
    return 0;
}

/* Demangled: init_wind */
extern "C" __attribute__((visibility("default"))) int init_wind(void) {
    ALOGD("init_wind() called");
    return 0;
}

/* Exported Object: stepsize_slow_bound */
extern "C" __attribute__((visibility("default"))) void* stepsize_slow_bound = NULL;

/* Demangled: comfort_noise_generate */
extern "C" __attribute__((visibility("default"))) int comfort_noise_generate(void) {
    ALOGD("comfort_noise_generate() called");
    return 0;
}

/* Demangled: RFFT_1024_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_1024_Q31(void) {
    ALOGD("RFFT_1024_Q31() called");
    return 0;
}

/* Demangled: free_compressor_48K */
extern "C" __attribute__((visibility("default"))) int free_compressor_48K(void) {
    ALOGD("free_compressor_48K() called");
    return 0;
}

/* Exported Object: twid_tab256_fast */
extern "C" __attribute__((visibility("default"))) void* twid_tab256_fast = NULL;

/* Demangled: L_mult_40 */
extern "C" __attribute__((visibility("default"))) int L_mult_40(void) {
    ALOGD("L_mult_40() called");
    return 0;
}

/* Demangled: NR_PostProcessing_48K */
extern "C" __attribute__((visibility("default"))) int NR_PostProcessing_48K(void) {
    ALOGD("NR_PostProcessing_48K() called");
    return 0;
}

/* Exported Object: NDC_BankB_Window */
extern "C" __attribute__((visibility("default"))) void* NDC_BankB_Window = NULL;

/* Demangled: DL_ClippingDetection */
extern "C" __attribute__((visibility("default"))) int DL_ClippingDetection(void) {
    ALOGD("DL_ClippingDetection() called");
    return 0;
}

/* Demangled: ENH_API_Get_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Memory(void) {
    ALOGD("ENH_API_Get_Memory() called");
    return 0;
}

/* Demangled: Fixed_sqrt_NDC */
extern "C" __attribute__((visibility("default"))) int Fixed_sqrt_NDC(void) {
    ALOGD("Fixed_sqrt_NDC() called");
    return 0;
}

/* Demangled: BWE_nlp */
extern "C" __attribute__((visibility("default"))) int BWE_nlp(void) {
    ALOGD("BWE_nlp() called");
    return 0;
}

/* Exported Object: IIR_coef_b1_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_8k_set1 = NULL;

/* Demangled: sub_band_sig_nf_compute */
extern "C" __attribute__((visibility("default"))) int sub_band_sig_nf_compute(void) {
    ALOGD("sub_band_sig_nf_compute() called");
    return 0;
}

/* Demangled: NDC_app_sqrt */
extern "C" __attribute__((visibility("default"))) int NDC_app_sqrt(void) {
    ALOGD("NDC_app_sqrt() called");
    return 0;
}

/* Demangled: HSR_HB_Filter */
extern "C" __attribute__((visibility("default"))) int HSR_HB_Filter(void) {
    ALOGD("HSR_HB_Filter() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set1 = NULL;

/* Exported Object: IIR_coef_b1_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_8k_set2 = NULL;

/* Demangled: STE_1st_IIR_Stereo */
extern "C" __attribute__((visibility("default"))) int STE_1st_IIR_Stereo(void) {
    ALOGD("STE_1st_IIR_Stereo() called");
    return 0;
}

/* Demangled: mtk_arsi_query_working_buf_size */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_query_working_buf_size(void) {
    ALOGD("mtk_arsi_query_working_buf_size() called");
    return 0;
}

/* Demangled: debug_dump */
extern "C" __attribute__((visibility("default"))) int debug_dump(void) {
    ALOGD("debug_dump() called");
    return 0;
}

/* Exported Object: Tolerence_fract */
extern "C" __attribute__((visibility("default"))) void* Tolerence_fract = NULL;

/* Demangled: abf_sf_bittrue_fun */
extern "C" __attribute__((visibility("default"))) int abf_sf_bittrue_fun(void) {
    ALOGD("abf_sf_bittrue_fun() called");
    return 0;
}

/* Demangled: sb_ASLR_noise_esti */
extern "C" __attribute__((visibility("default"))) int sb_ASLR_noise_esti(void) {
    ALOGD("sb_ASLR_noise_esti() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set2 = NULL;

/* Exported Object: IIR_coef_b1_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_8k_set3 = NULL;

/* Demangled: aec_free_memory */
extern "C" __attribute__((visibility("default"))) int aec_free_memory(void) {
    ALOGD("aec_free_memory() called");
    return 0;
}

/* Demangled: get_compressor_48K_momory */
extern "C" __attribute__((visibility("default"))) int get_compressor_48K_momory(void) {
    ALOGD("get_compressor_48K_momory() called");
    return 0;
}

/* Demangled: NDC_Smooth */
extern "C" __attribute__((visibility("default"))) int NDC_Smooth(void) {
    ALOGD("NDC_Smooth() called");
    return 0;
}

/* Demangled: NR_SpectrumSmoothing */
extern "C" __attribute__((visibility("default"))) int NR_SpectrumSmoothing(void) {
    ALOGD("NR_SpectrumSmoothing() called");
    return 0;
}

/* Exported Object: dctcos_2_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_2_NB = NULL;

/* Demangled: ENH_API_Get_DMNR_spk_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DMNR_spk_Memory(void) {
    ALOGD("ENH_API_Get_DMNR_spk_Memory() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set3 = NULL;

/* Exported Object: IIR_coef_b1_8k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_8k_set4 = NULL;

/* Demangled: ABF_DIF_FFT_spk */
extern "C" __attribute__((visibility("default"))) int ABF_DIF_FFT_spk(void) {
    ALOGD("ABF_DIF_FFT_spk() called");
    return 0;
}

/* Exported Object: IIR_a1_WB */
extern "C" __attribute__((visibility("default"))) void* IIR_a1_WB = NULL;

/* Exported Object: IIR_coef_a1_16k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set4 = NULL;

/* Exported Object: UL_IIR_coef_a1_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_8k_set1 = NULL;

/* Demangled: NDC_DL_Comfort_Noise */
extern "C" __attribute__((visibility("default"))) int NDC_DL_Comfort_Noise(void) {
    ALOGD("NDC_DL_Comfort_Noise() called");
    return 0;
}

/* Demangled: vad_ne */
extern "C" __attribute__((visibility("default"))) int vad_ne(void) {
    ALOGD("vad_ne() called");
    return 0;
}

/* Demangled: ABF_Integer_Delay */
extern "C" __attribute__((visibility("default"))) int ABF_Integer_Delay(void) {
    ALOGD("ABF_Integer_Delay() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_16k_set5 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set5 = NULL;

/* Exported Object: UL_IIR_coef_a1_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_8k_set2 = NULL;

/* Exported Object: Tolerence_int */
extern "C" __attribute__((visibility("default"))) void* Tolerence_int = NULL;

/* Demangled: init_abf_nlms_spk */
extern "C" __attribute__((visibility("default"))) int init_abf_nlms_spk(void) {
    ALOGD("init_abf_nlms_spk() called");
    return 0;
}

/* Exported Object: phasor_re */
extern "C" __attribute__((visibility("default"))) void* phasor_re = NULL;

/* Exported Object: HSR_SRC_Coeff_DS_0 */
extern "C" __attribute__((visibility("default"))) void* HSR_SRC_Coeff_DS_0 = NULL;

/* Demangled: BWE_Init */
extern "C" __attribute__((visibility("default"))) int BWE_Init(void) {
    ALOGD("BWE_Init() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_16k_set6 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set6 = NULL;

/* Exported Object: UL_IIR_coef_a1_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_a1_8k_set3 = NULL;

/* Exported Object: fe_us_hist */
extern "C" __attribute__((visibility("default"))) void* fe_us_hist = NULL;

/* Exported Object: sb_pwr_bias */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias = NULL;

/* Demangled: mtk_arsi_set_ul_digital_gain */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_ul_digital_gain(void) {
    ALOGD("mtk_arsi_set_ul_digital_gain() called");
    return 0;
}

/* Exported Object: HSR_SRC_Coeff_DS_1 */
extern "C" __attribute__((visibility("default"))) void* HSR_SRC_Coeff_DS_1 = NULL;

/* Exported Object: IIR_coef_a1_16k_set7 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_16k_set7 = NULL;

/* Exported Object: pre_lp_flt */
extern "C" __attribute__((visibility("default"))) void* pre_lp_flt = NULL;

/* Demangled: NR_agg_mode_setting */
extern "C" __attribute__((visibility("default"))) int NR_agg_mode_setting(void) {
    ALOGD("NR_agg_mode_setting() called");
    return 0;
}

/* Demangled: free_STE_memory */
extern "C" __attribute__((visibility("default"))) int free_STE_memory(void) {
    ALOGD("free_STE_memory() called");
    return 0;
}

/* Demangled: HSR_Init */
extern "C" __attribute__((visibility("default"))) int HSR_Init(void) {
    ALOGD("HSR_Init() called");
    return 0;
}

/* Exported Object: HSR_SRC_Coeff_DS_2 */
extern "C" __attribute__((visibility("default"))) void* HSR_SRC_Coeff_DS_2 = NULL;

/* Demangled: WB_NR_Schedule */
extern "C" __attribute__((visibility("default"))) int WB_NR_Schedule(void) {
    ALOGD("WB_NR_Schedule() called");
    return 0;
}

/* Demangled: FFT_scaling */
extern "C" __attribute__((visibility("default"))) int FFT_scaling(void) {
    ALOGD("FFT_scaling() called");
    return 0;
}

/* Demangled: normalize_fun */
extern "C" __attribute__((visibility("default"))) int normalize_fun(void) {
    ALOGD("normalize_fun() called");
    return 0;
}

/* Exported Object: exp_B_table */
extern "C" __attribute__((visibility("default"))) void* exp_B_table = NULL;

/* Demangled: ENH_API_Free_Compressor_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_Compressor_48K(void) {
    ALOGD("ENH_API_Free_Compressor_48K() called");
    return 0;
}

/* Demangled: init_SF_parms */
extern "C" __attribute__((visibility("default"))) int init_SF_parms(void) {
    ALOGD("init_SF_parms() called");
    return 0;
}

/* Exported Object: VCE2o0_DM_THR_t */
extern "C" __attribute__((visibility("default"))) void* VCE2o0_DM_THR_t = NULL;

/* Exported Object: power_limit_xd2 */
extern "C" __attribute__((visibility("default"))) void* power_limit_xd2 = NULL;

/* Exported Object: us_index */
extern "C" __attribute__((visibility("default"))) void* us_index = NULL;

/* Exported Object: est_echo_weighting */
extern "C" __attribute__((visibility("default"))) void* est_echo_weighting = NULL;

/* Demangled: ENH_API_Run_Compressor_48K_Rear */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Compressor_48K_Rear(void) {
    ALOGD("ENH_API_Run_Compressor_48K_Rear() called");
    return 0;
}

/* Demangled: adaptive_beamforming_spk */
extern "C" __attribute__((visibility("default"))) int adaptive_beamforming_spk(void) {
    ALOGD("adaptive_beamforming_spk() called");
    return 0;
}

/* Exported Object: NR_Strength_Table */
extern "C" __attribute__((visibility("default"))) void* NR_Strength_Table = NULL;

/* Demangled: init_vad_comb */
extern "C" __attribute__((visibility("default"))) int init_vad_comb(void) {
    ALOGD("init_vad_comb() called");
    return 0;
}

/* Exported Object: dctcos_3_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_3_WB = NULL;

/* Demangled: Rad4fft256_test32 */
extern "C" __attribute__((visibility("default"))) int Rad4fft256_test32(void) {
    ALOGD("Rad4fft256_test32() called");
    return 0;
}

/* Exported Object: UlMusicDetL1aTblInit */
extern "C" __attribute__((visibility("default"))) void* UlMusicDetL1aTblInit = NULL;

/* Demangled: RFFT_32_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_32_Q31(void) {
    ALOGD("RFFT_32_Q31() called");
    return 0;
}

/* Demangled: init_agc_comp */
extern "C" __attribute__((visibility("default"))) int init_agc_comp(void) {
    ALOGD("init_agc_comp() called");
    return 0;
}

/* Exported Object: awBitRevTable */
extern "C" __attribute__((visibility("default"))) void* awBitRevTable = NULL;

/* Exported Object: dB2Linear_pos */
extern "C" __attribute__((visibility("default"))) void* dB2Linear_pos = NULL;

/* Demangled: ENH_API_Free_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_DMNR(void) {
    ALOGD("ENH_API_Free_DMNR() called");
    return 0;
}

/* Demangled: ENH_API_Get_HSR_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_HSR_Memory(void) {
    ALOGD("ENH_API_Get_HSR_Memory() called");
    return 0;
}

/* Demangled: UL_DRC */
extern "C" __attribute__((visibility("default"))) int UL_DRC(void) {
    ALOGD("UL_DRC() called");
    return 0;
}

/* Demangled: ModifyW32W16_mult_STE */
extern "C" __attribute__((visibility("default"))) int ModifyW32W16_mult_STE(void) {
    ALOGD("ModifyW32W16_mult_STE() called");
    return 0;
}

/* Demangled: vad_frontend_aec */
extern "C" __attribute__((visibility("default"))) int vad_frontend_aec(void) {
    ALOGD("vad_frontend_aec() called");
    return 0;
}

/* Demangled: ENH_API_Rst */
extern "C" __attribute__((visibility("default"))) int ENH_API_Rst(void) {
    ALOGD("ENH_API_Rst() called");
    return 0;
}

/* Demangled: md32_add_sat_dual */
extern "C" __attribute__((visibility("default"))) int md32_add_sat_dual(void) {
    ALOGD("md32_add_sat_dual() called");
    return 0;
}

/* Demangled: AF */
extern "C" __attribute__((visibility("default"))) int AF(void) {
    ALOGD("AF() called");
    return 0;
}

/* Demangled: UlMusicDet_Init */
extern "C" __attribute__((visibility("default"))) int UlMusicDet_Init(void) {
    ALOGD("UlMusicDet_Init() called");
    return 0;
}

/* Exported Object: num_taps_shadow */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow = NULL;

/* Exported Object: AGC_dB2Linear_neg */
extern "C" __attribute__((visibility("default"))) void* AGC_dB2Linear_neg = NULL;

/* Demangled: mtk_arsi_set_dl_enhance */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_dl_enhance(void) {
    ALOGD("mtk_arsi_set_dl_enhance() called");
    return 0;
}

/* Demangled: sb_ASLR_noise_esti_spk */
extern "C" __attribute__((visibility("default"))) int sb_ASLR_noise_esti_spk(void) {
    ALOGD("sb_ASLR_noise_esti_spk() called");
    return 0;
}

/* Demangled: ENH_API_Get_FE_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_FE_Memory(void) {
    ALOGD("ENH_API_Get_FE_Memory() called");
    return 0;
}

/* Demangled: UL_Bounder */
extern "C" __attribute__((visibility("default"))) int UL_Bounder(void) {
    ALOGD("UL_Bounder() called");
    return 0;
}

/* Demangled: ENH_API_Compressor_48K_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_Compressor_48K_Alloc(void) {
    ALOGD("ENH_API_Compressor_48K_Alloc() called");
    return 0;
}

/* Exported Object: num_taps_shadow_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow_abf = NULL;

/* Exported Object: sb_nlms_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_normal = NULL;

/* Demangled: NDC_DL_Init */
extern "C" __attribute__((visibility("default"))) int NDC_DL_Init(void) {
    ALOGD("NDC_DL_Init() called");
    return 0;
}

/* Exported Object: ABF_KBD */
extern "C" __attribute__((visibility("default"))) void* ABF_KBD = NULL;

/* Exported Object: abf_nlms_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* abf_nlms_stepsize_normal = NULL;

/* Exported Object: Hgain_smooth_threshold_table_spk */
extern "C" __attribute__((visibility("default"))) void* Hgain_smooth_threshold_table_spk = NULL;

/* Demangled: init_PF */
extern "C" __attribute__((visibility("default"))) int init_PF(void) {
    ALOGD("init_PF() called");
    return 0;
}

/* Exported Object: dctcos_22_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_22_NB = NULL;

/* Demangled: FIR_Q15_INIT */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_INIT(void) {
    ALOGD("FIR_Q15_INIT() called");
    return 0;
}

/* Exported Object: ne_us_hist */
extern "C" __attribute__((visibility("default"))) void* ne_us_hist = NULL;

/* Demangled: ENH_API_Free */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free(void) {
    ALOGD("ENH_API_Free() called");
    return 0;
}

/* Demangled: mtk_arsi_set_ul_enhance */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_ul_enhance(void) {
    ALOGD("mtk_arsi_set_ul_enhance() called");
    return 0;
}

/* Demangled: NR_CriticalBandEnergyEst */
extern "C" __attribute__((visibility("default"))) int NR_CriticalBandEnergyEst(void) {
    ALOGD("NR_CriticalBandEnergyEst() called");
    return 0;
}

/* Demangled: Cal_parameter_1 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_1(void) {
    ALOGD("Cal_parameter_1() called");
    return 0;
}

/* Exported Object: IIR_b1_WB */
extern "C" __attribute__((visibility("default"))) void* IIR_b1_WB = NULL;

/* Demangled: HSR_SRC_Filter */
extern "C" __attribute__((visibility("default"))) int HSR_SRC_Filter(void) {
    ALOGD("HSR_SRC_Filter() called");
    return 0;
}

/* Exported Object: power_limit */
extern "C" __attribute__((visibility("default"))) void* power_limit = NULL;

/* Demangled: ENH_API_Run_ANE_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_ANE_UL(void) {
    ALOGD("ENH_API_Run_ANE_UL() called");
    return 0;
}

/* Demangled: Cal_parameter_2 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_2(void) {
    ALOGD("Cal_parameter_2() called");
    return 0;
}

/* Demangled: DMNR_mic1_VAD */
extern "C" __attribute__((visibility("default"))) int DMNR_mic1_VAD(void) {
    ALOGD("DMNR_mic1_VAD() called");
    return 0;
}

/* Demangled: init_bankA_parms_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int init_bankA_parms_DMNR_spk(void) {
    ALOGD("init_bankA_parms_DMNR_spk() called");
    return 0;
}

/* Demangled: DMNR_analysis_filter_spk */
extern "C" __attribute__((visibility("default"))) int DMNR_analysis_filter_spk(void) {
    ALOGD("DMNR_analysis_filter_spk() called");
    return 0;
}

/* Exported Object: syn_bp1_flt */
extern "C" __attribute__((visibility("default"))) void* syn_bp1_flt = NULL;

/* Demangled: Cal_parameter_3 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_3(void) {
    ALOGD("Cal_parameter_3() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_8k_set1 = NULL;

/* Exported Object: num_taps_additional_shadow */
extern "C" __attribute__((visibility("default"))) void* num_taps_additional_shadow = NULL;

/* Demangled: Cal_parameter_4 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_4(void) {
    ALOGD("Cal_parameter_4() called");
    return 0;
}

/* Demangled: ENH_API_Get_MR_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_MR_Memory(void) {
    ALOGD("ENH_API_Get_MR_Memory() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_8k_set2 = NULL;

/* Demangled: Radix2_Bfly_Inv_Q31 */
extern "C" __attribute__((visibility("default"))) int Radix2_Bfly_Inv_Q31(void) {
    ALOGD("Radix2_Bfly_Inv_Q31() called");
    return 0;
}

/* Exported Object: SP_ENH_ID */
extern "C" __attribute__((visibility("default"))) void* SP_ENH_ID = NULL;

/* Demangled: md32_fmuldsw */
extern "C" __attribute__((visibility("default"))) int md32_fmuldsw(void) {
    ALOGD("md32_fmuldsw() called");
    return 0;
}

/* Demangled: spc_cyc_add */
extern "C" __attribute__((visibility("default"))) int spc_cyc_add(void) {
    ALOGD("spc_cyc_add() called");
    return 0;
}

/* Exported Object: abf_sb_pwr_bias_shadow */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_shadow = NULL;

/* Exported Object: sqrt_coef */
extern "C" __attribute__((visibility("default"))) void* sqrt_coef = NULL;

/* Demangled: allocate_memory_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int allocate_memory_DMNR_spk(void) {
    ALOGD("allocate_memory_DMNR_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_8k_set3 = NULL;

/* Exported Object: asdwRealCoefAQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwRealCoefAQ31 = NULL;

/* Demangled: StereoEnhance */
extern "C" __attribute__((visibility("default"))) int StereoEnhance(void) {
    ALOGD("StereoEnhance() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_H_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_H_t = NULL;

/* Exported Object: ABF_PF_Under_Estimation */
extern "C" __attribute__((visibility("default"))) void* ABF_PF_Under_Estimation = NULL;

/* Demangled: DMNR_expander */
extern "C" __attribute__((visibility("default"))) int DMNR_expander(void) {
    ALOGD("DMNR_expander() called");
    return 0;
}

/* Demangled: ANE_Smooth */
extern "C" __attribute__((visibility("default"))) int ANE_Smooth(void) {
    ALOGD("ANE_Smooth() called");
    return 0;
}

/* Demangled: DIF_FFT_Fix16 */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_Fix16(void) {
    ALOGD("DIF_FFT_Fix16() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_8k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_8k_set4 = NULL;

/* Demangled: Minimum_Statistics */
extern "C" __attribute__((visibility("default"))) int Minimum_Statistics(void) {
    ALOGD("Minimum_Statistics() called");
    return 0;
}

/* Demangled: init_ASLR_parms_spk */
extern "C" __attribute__((visibility("default"))) int init_ASLR_parms_spk(void) {
    ALOGD("init_ASLR_parms_spk() called");
    return 0;
}

/* Demangled: MedianPwrIndx */
extern "C" __attribute__((visibility("default"))) int MedianPwrIndx(void) {
    ALOGD("MedianPwrIndx() called");
    return 0;
}

/* Exported Object: us_coef */
extern "C" __attribute__((visibility("default"))) void* us_coef = NULL;

/* Exported Object: CentralFreqShap */
extern "C" __attribute__((visibility("default"))) void* CentralFreqShap = NULL;

/* Demangled: NDC_NR_Init */
extern "C" __attribute__((visibility("default"))) int NDC_NR_Init(void) {
    ALOGD("NDC_NR_Init() called");
    return 0;
}

/* Demangled: init_FSH_parms */
extern "C" __attribute__((visibility("default"))) int init_FSH_parms(void) {
    ALOGD("init_FSH_parms() called");
    return 0;
}

/* Demangled: Cal_HGain */
extern "C" __attribute__((visibility("default"))) int Cal_HGain(void) {
    ALOGD("Cal_HGain() called");
    return 0;
}

/* Demangled: HGain_time_smoothing */
extern "C" __attribute__((visibility("default"))) int HGain_time_smoothing(void) {
    ALOGD("HGain_time_smoothing() called");
    return 0;
}

/* Exported Object: CLARITY_Release_Rate */
extern "C" __attribute__((visibility("default"))) void* CLARITY_Release_Rate = NULL;

/* Demangled: DlMusicDet_Init */
extern "C" __attribute__((visibility("default"))) int DlMusicDet_Init(void) {
    ALOGD("DlMusicDet_Init() called");
    return 0;
}

/* Exported Object: NDC_dB_Gain_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_dB_Gain_Table = NULL;

/* Exported Object: SRC_Coefx2 */
extern "C" __attribute__((visibility("default"))) void* SRC_Coefx2 = NULL;

/* Exported Object: sb_shadow_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* sb_shadow_stepsize_normal = NULL;

/* Demangled: spc_dacch_satw */
extern "C" __attribute__((visibility("default"))) int spc_dacch_satw(void) {
    ALOGD("spc_dacch_satw() called");
    return 0;
}

/* Demangled: Low_Latency_D2T_Normalized */
extern "C" __attribute__((visibility("default"))) int Low_Latency_D2T_Normalized(void) {
    ALOGD("Low_Latency_D2T_Normalized() called");
    return 0;
}

/* Demangled: init_MMD */
extern "C" __attribute__((visibility("default"))) int init_MMD(void) {
    ALOGD("init_MMD() called");
    return 0;
}

/* Demangled: L_mac_i_40 */
extern "C" __attribute__((visibility("default"))) int L_mac_i_40(void) {
    ALOGD("L_mac_i_40() called");
    return 0;
}

/* Demangled: md32_sat_lo */
extern "C" __attribute__((visibility("default"))) int md32_sat_lo(void) {
    ALOGD("md32_sat_lo() called");
    return 0;
}

/* Demangled: ENH_API_Free_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_DMNR_spk(void) {
    ALOGD("ENH_API_Free_DMNR_spk() called");
    return 0;
}

/* Demangled: ENH_API_Get_STE_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_STE_Memory(void) {
    ALOGD("ENH_API_Get_STE_Memory() called");
    return 0;
}

/* Demangled: dynamic_noise_threshold */
extern "C" __attribute__((visibility("default"))) int dynamic_noise_threshold(void) {
    ALOGD("dynamic_noise_threshold() called");
    return 0;
}

/* Demangled: mtk_arsi_query_param_buf_size */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_query_param_buf_size(void) {
    ALOGD("mtk_arsi_query_param_buf_size() called");
    return 0;
}

/* Demangled: SetABFCalData_spk */
extern "C" __attribute__((visibility("default"))) int SetABFCalData_spk(void) {
    ALOGD("SetABFCalData_spk() called");
    return 0;
}

/* Demangled: FFT_scaling_32to16bit */
extern "C" __attribute__((visibility("default"))) int FFT_scaling_32to16bit(void) {
    ALOGD("FFT_scaling_32to16bit() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_L_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_L_t = NULL;

/* Demangled: div_s_drc */
extern "C" __attribute__((visibility("default"))) int div_s_drc(void) {
    ALOGD("div_s_drc() called");
    return 0;
}

/* Exported Object: BKF_WeightingTable */
extern "C" __attribute__((visibility("default"))) void* BKF_WeightingTable = NULL;

/* Demangled: WB_NR_UAD */
extern "C" __attribute__((visibility("default"))) int WB_NR_UAD(void) {
    ALOGD("WB_NR_UAD() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Demangled: check_lock */
extern "C" __attribute__((visibility("default"))) int check_lock(void) {
    ALOGD("check_lock() called");
    return 0;
}

/* Demangled: SearchEnvelope_frontend */
extern "C" __attribute__((visibility("default"))) int SearchEnvelope_frontend(void) {
    ALOGD("SearchEnvelope_frontend() called");
    return 0;
}

/* Exported Object: Gain_AR_Rate_8 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_8 = NULL;

/* Demangled: StereoRichen */
extern "C" __attribute__((visibility("default"))) int StereoRichen(void) {
    ALOGD("StereoRichen() called");
    return 0;
}

/* Exported Object: SRC_Coef */
extern "C" __attribute__((visibility("default"))) void* SRC_Coef = NULL;

/* Demangled: ENH_API_Free_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_AEC(void) {
    ALOGD("ENH_API_Free_AEC() called");
    return 0;
}

/* Demangled: ENH_API_Update_Parameter_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Parameter_AEC(void) {
    ALOGD("ENH_API_Update_Parameter_AEC() called");
    return 0;
}

/* Demangled: Half_Band_IIR */
extern "C" __attribute__((visibility("default"))) int Half_Band_IIR(void) {
    ALOGD("Half_Band_IIR() called");
    return 0;
}

/* Demangled: mtk_arsi_set_debug_log_fp */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_debug_log_fp(void) {
    ALOGD("mtk_arsi_set_debug_log_fp() called");
    return 0;
}

/* Demangled: L_msu_40 */
extern "C" __attribute__((visibility("default"))) int L_msu_40(void) {
    ALOGD("L_msu_40() called");
    return 0;
}

/* Demangled: ENH_API_Run_Graphical_UI_DRC_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Graphical_UI_DRC_48K(void) {
    ALOGD("ENH_API_Run_Graphical_UI_DRC_48K() called");
    return 0;
}

/* Exported Object: IIR_a2_NB */
extern "C" __attribute__((visibility("default"))) void* IIR_a2_NB = NULL;

/* Demangled: WB_NR_SpeechProbEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_SpeechProbEst(void) {
    ALOGD("WB_NR_SpeechProbEst() called");
    return 0;
}

/* Demangled: free_NDC_memory */
extern "C" __attribute__((visibility("default"))) int free_NDC_memory(void) {
    ALOGD("free_NDC_memory() called");
    return 0;
}

/* Demangled: ABF_CB_post_filtering */
extern "C" __attribute__((visibility("default"))) int ABF_CB_post_filtering(void) {
    ALOGD("ABF_CB_post_filtering() called");
    return 0;
}

/* Demangled: ABF_cal_process_spk */
extern "C" __attribute__((visibility("default"))) int ABF_cal_process_spk(void) {
    ALOGD("ABF_cal_process_spk() called");
    return 0;
}

/* Demangled: WB_NR_PostProcessing */
extern "C" __attribute__((visibility("default"))) int WB_NR_PostProcessing(void) {
    ALOGD("WB_NR_PostProcessing() called");
    return 0;
}

/* Demangled: WB_NR_SetLevel */
extern "C" __attribute__((visibility("default"))) int WB_NR_SetLevel(void) {
    ALOGD("WB_NR_SetLevel() called");
    return 0;
}

/* Demangled: ENH_API_Run_Low_Latency_DRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Low_Latency_DRC(void) {
    ALOGD("ENH_API_Run_Low_Latency_DRC() called");
    return 0;
}

/* Demangled: ANE_Signal_Level_Calibration */
extern "C" __attribute__((visibility("default"))) int ANE_Signal_Level_Calibration(void) {
    ALOGD("ANE_Signal_Level_Calibration() called");
    return 0;
}

/* Demangled: libprof_start_log */
extern "C" __attribute__((visibility("default"))) int libprof_start_log(void) {
    ALOGD("libprof_start_log() called");
    return 0;
}

/* Demangled: FIR_Q15 */
extern "C" __attribute__((visibility("default"))) int FIR_Q15(void) {
    ALOGD("FIR_Q15() called");
    return 0;
}

/* Demangled: ANENoiseEst */
extern "C" __attribute__((visibility("default"))) int ANENoiseEst(void) {
    ALOGD("ANENoiseEst() called");
    return 0;
}

/* Demangled: HSR_LB_Filter */
extern "C" __attribute__((visibility("default"))) int HSR_LB_Filter(void) {
    ALOGD("HSR_LB_Filter() called");
    return 0;
}

/* Demangled: Low_Latency_Standard_DRC */
extern "C" __attribute__((visibility("default"))) int Low_Latency_Standard_DRC(void) {
    ALOGD("Low_Latency_Standard_DRC() called");
    return 0;
}

/* Exported Object: ana_bp1_flt */
extern "C" __attribute__((visibility("default"))) void* ana_bp1_flt = NULL;

/* Exported Object: abf_sb_pwr_bias */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias = NULL;

/* Exported Object: ABF_CB_swap_table_spk */
extern "C" __attribute__((visibility("default"))) void* ABF_CB_swap_table_spk = NULL;

/* Demangled: compute_nf_energy */
extern "C" __attribute__((visibility("default"))) int compute_nf_energy(void) {
    ALOGD("compute_nf_energy() called");
    return 0;
}

/* Exported Object: Gama_Array */
extern "C" __attribute__((visibility("default"))) void* Gama_Array = NULL;

/* Demangled: STE_2nd_IIR */
extern "C" __attribute__((visibility("default"))) int STE_2nd_IIR(void) {
    ALOGD("STE_2nd_IIR() called");
    return 0;
}

/* Demangled: cal_es_gain */
extern "C" __attribute__((visibility("default"))) int cal_es_gain(void) {
    ALOGD("cal_es_gain() called");
    return 0;
}

/* Demangled: Fixed_sqrt */
extern "C" __attribute__((visibility("default"))) int Fixed_sqrt(void) {
    ALOGD("Fixed_sqrt() called");
    return 0;
}

/* Demangled: Estimate_NonStationaryNoise */
extern "C" __attribute__((visibility("default"))) int Estimate_NonStationaryNoise(void) {
    ALOGD("Estimate_NonStationaryNoise() called");
    return 0;
}

/* Demangled: Radix4BflyFast */
extern "C" __attribute__((visibility("default"))) int Radix4BflyFast(void) {
    ALOGD("Radix4BflyFast() called");
    return 0;
}

/* Demangled: compose_32 */
extern "C" __attribute__((visibility("default"))) int compose_32(void) {
    ALOGD("compose_32() called");
    return 0;
}

/* Demangled: fb_ASLR_noise_esti */
extern "C" __attribute__((visibility("default"))) int fb_ASLR_noise_esti(void) {
    ALOGD("fb_ASLR_noise_esti() called");
    return 0;
}

/* Demangled: NDC_IIR_64 */
extern "C" __attribute__((visibility("default"))) int NDC_IIR_64(void) {
    ALOGD("NDC_IIR_64() called");
    return 0;
}

/* Exported Object: t_shift_reg */
extern "C" __attribute__((visibility("default"))) void* t_shift_reg = NULL;

/* Demangled: NR_UAD */
extern "C" __attribute__((visibility("default"))) int NR_UAD(void) {
    ALOGD("NR_UAD() called");
    return 0;
}

/* Demangled: abf_init_spk */
extern "C" __attribute__((visibility("default"))) int abf_init_spk(void) {
    ALOGD("abf_init_spk() called");
    return 0;
}

/* Demangled: NDC_UL_Init */
extern "C" __attribute__((visibility("default"))) int NDC_UL_Init(void) {
    ALOGD("NDC_UL_Init() called");
    return 0;
}

/* Exported Object: ABF_sb_PF_Smoothing_N */
extern "C" __attribute__((visibility("default"))) void* ABF_sb_PF_Smoothing_N = NULL;

/* Exported Object: DG_gain_t */
extern "C" __attribute__((visibility("default"))) void* DG_gain_t = NULL;

/* Demangled: BandPwrMaxIdx */
extern "C" __attribute__((visibility("default"))) int BandPwrMaxIdx(void) {
    ALOGD("BandPwrMaxIdx() called");
    return 0;
}

/* Demangled: MusicHisDet */
extern "C" __attribute__((visibility("default"))) int MusicHisDet(void) {
    ALOGD("MusicHisDet() called");
    return 0;
}

/* Exported Object: STE_Widen_Center_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Center_t = NULL;

/* Exported Object: Beam_direction_subgroup */
extern "C" __attribute__((visibility("default"))) void* Beam_direction_subgroup = NULL;

/* Exported Object: ANE_DG_gain_t */
extern "C" __attribute__((visibility("default"))) void* ANE_DG_gain_t = NULL;

/* Demangled: vad_DT */
extern "C" __attribute__((visibility("default"))) int vad_DT(void) {
    ALOGD("vad_DT() called");
    return 0;
}

/* Demangled: init_ABM_vad_spk */
extern "C" __attribute__((visibility("default"))) int init_ABM_vad_spk(void) {
    ALOGD("init_ABM_vad_spk() called");
    return 0;
}

/* Exported Object: Table_T2D_LowLatencyDRC */
extern "C" __attribute__((visibility("default"))) void* Table_T2D_LowLatencyDRC = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Exported Object: AGC_dB2Linear_pos */
extern "C" __attribute__((visibility("default"))) void* AGC_dB2Linear_pos = NULL;

/* Demangled: init_agc_comp_spk */
extern "C" __attribute__((visibility("default"))) int init_agc_comp_spk(void) {
    ALOGD("init_agc_comp_spk() called");
    return 0;
}

/* Demangled: StereoEnh_Init_n */
extern "C" __attribute__((visibility("default"))) int StereoEnh_Init_n(void) {
    ALOGD("StereoEnh_Init_n() called");
    return 0;
}

/* Demangled: SPLIT_RFFT_Q31 */
extern "C" __attribute__((visibility("default"))) int SPLIT_RFFT_Q31(void) {
    ALOGD("SPLIT_RFFT_Q31() called");
    return 0;
}

/* Exported Object: ABF_sb_PF_Smoothing_S */
extern "C" __attribute__((visibility("default"))) void* ABF_sb_PF_Smoothing_S = NULL;

/* Demangled: Update_Parameter_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int Update_Parameter_DMNR_spk(void) {
    ALOGD("Update_Parameter_DMNR_spk() called");
    return 0;
}

/* Demangled: STE_1st_IIR */
extern "C" __attribute__((visibility("default"))) int STE_1st_IIR(void) {
    ALOGD("STE_1st_IIR() called");
    return 0;
}

/* Demangled: pack_div_s_32 */
extern "C" __attribute__((visibility("default"))) int pack_div_s_32(void) {
    ALOGD("pack_div_s_32() called");
    return 0;
}

/* Demangled: WB_NR_EstCriticalBandEnergy */
extern "C" __attribute__((visibility("default"))) int WB_NR_EstCriticalBandEnergy(void) {
    ALOGD("WB_NR_EstCriticalBandEnergy() called");
    return 0;
}

/* Demangled: ANE_app_sqrt */
extern "C" __attribute__((visibility("default"))) int ANE_app_sqrt(void) {
    ALOGD("ANE_app_sqrt() called");
    return 0;
}

/* Exported Object: NR_Shift_of_cr_lambda_n */
extern "C" __attribute__((visibility("default"))) void* NR_Shift_of_cr_lambda_n = NULL;

/* Exported Object: STE_Richen_Side_HL_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_HL_t = NULL;

/* Exported Object: ABF_CB_width */
extern "C" __attribute__((visibility("default"))) void* ABF_CB_width = NULL;

/* Demangled: get_memory_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int get_memory_DMNR_spk(void) {
    ALOGD("get_memory_DMNR_spk() called");
    return 0;
}

/* Demangled: Bitreversal_Q31 */
extern "C" __attribute__((visibility("default"))) int Bitreversal_Q31(void) {
    ALOGD("Bitreversal_Q31() called");
    return 0;
}

/* Demangled: FIR_Q15_12tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_12tap(void) {
    ALOGD("FIR_Q15_12tap() called");
    return 0;
}

/* Exported Object: STE_Widen_Side01_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side01_t = NULL;

/* Exported Object: sb_pwr_bias_normal */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_normal = NULL;

/* Demangled: NDC_Signal_Level_Calibration */
extern "C" __attribute__((visibility("default"))) int NDC_Signal_Level_Calibration(void) {
    ALOGD("NDC_Signal_Level_Calibration() called");
    return 0;
}

/* Exported Object: IIR_b2_NB */
extern "C" __attribute__((visibility("default"))) void* IIR_b2_NB = NULL;

/* Exported Object: Gain_AR_Rate_48 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_48 = NULL;

/* Demangled: SRC_upsample_x2 */
extern "C" __attribute__((visibility("default"))) int SRC_upsample_x2(void) {
    ALOGD("SRC_upsample_x2() called");
    return 0;
}

/* Demangled: free_memory_DMNR */
extern "C" __attribute__((visibility("default"))) int free_memory_DMNR(void) {
    ALOGD("free_memory_DMNR() called");
    return 0;
}

/* Demangled: init_PR_vad */
extern "C" __attribute__((visibility("default"))) int init_PR_vad(void) {
    ALOGD("init_PR_vad() called");
    return 0;
}

/* Demangled: AF_DL */
extern "C" __attribute__((visibility("default"))) int AF_DL(void) {
    ALOGD("AF_DL() called");
    return 0;
}

/* Demangled: DL_DRC */
extern "C" __attribute__((visibility("default"))) int DL_DRC(void) {
    ALOGD("DL_DRC() called");
    return 0;
}

/* Demangled: ENH_API_ANE_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_ANE_Alloc(void) {
    ALOGD("ENH_API_ANE_Alloc() called");
    return 0;
}

/* Exported Object: Wn_r_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_r_256 = NULL;

/* Demangled: ENH_API_Free_STE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_STE(void) {
    ALOGD("ENH_API_Free_STE() called");
    return 0;
}

/* Demangled: NR_FixedNoiseEst */
extern "C" __attribute__((visibility("default"))) int NR_FixedNoiseEst(void) {
    ALOGD("NR_FixedNoiseEst() called");
    return 0;
}

/* Demangled: SetABFCalData */
extern "C" __attribute__((visibility("default"))) int SetABFCalData(void) {
    ALOGD("SetABFCalData() called");
    return 0;
}

/* Demangled: md32_packlh */
extern "C" __attribute__((visibility("default"))) int md32_packlh(void) {
    ALOGD("md32_packlh() called");
    return 0;
}

/* Demangled: derive_steering_filter */
extern "C" __attribute__((visibility("default"))) int derive_steering_filter(void) {
    ALOGD("derive_steering_filter() called");
    return 0;
}

/* Demangled: nlms_vt */
extern "C" __attribute__((visibility("default"))) int nlms_vt(void) {
    ALOGD("nlms_vt() called");
    return 0;
}

/* Demangled: UL_ANE_init */
extern "C" __attribute__((visibility("default"))) int UL_ANE_init(void) {
    ALOGD("UL_ANE_init() called");
    return 0;
}

/* Exported Object: ana_bp2_flt */
extern "C" __attribute__((visibility("default"))) void* ana_bp2_flt = NULL;

/* Demangled: StereoEnh_Alloc_Memory */
extern "C" __attribute__((visibility("default"))) int StereoEnh_Alloc_Memory(void) {
    ALOGD("StereoEnh_Alloc_Memory() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_A_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_A_t = NULL;

/* Demangled: BWE_pitch_track */
extern "C" __attribute__((visibility("default"))) int BWE_pitch_track(void) {
    ALOGD("BWE_pitch_track() called");
    return 0;
}

/* Demangled: fir_48K_90tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_90tap(void) {
    ALOGD("fir_48K_90tap() called");
    return 0;
}

/* Exported Object: log2_1_plus_x_table */
extern "C" __attribute__((visibility("default"))) void* log2_1_plus_x_table = NULL;

/* Demangled: ABF_AGC_Gain_Compensation */
extern "C" __attribute__((visibility("default"))) int ABF_AGC_Gain_Compensation(void) {
    ALOGD("ABF_AGC_Gain_Compensation() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_H_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_H_t = NULL;

/* Demangled: AGCGainREC */
extern "C" __attribute__((visibility("default"))) int AGCGainREC(void) {
    ALOGD("AGCGainREC() called");
    return 0;
}

/* Demangled: Cal_postSNR */
extern "C" __attribute__((visibility("default"))) int Cal_postSNR(void) {
    ALOGD("Cal_postSNR() called");
    return 0;
}

/* Demangled: SearchEnvelope */
extern "C" __attribute__((visibility("default"))) int SearchEnvelope(void) {
    ALOGD("SearchEnvelope() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize = NULL;

/* Demangled: md32_packll */
extern "C" __attribute__((visibility("default"))) int md32_packll(void) {
    ALOGD("md32_packll() called");
    return 0;
}

/* Demangled: fwrite_wrap */
extern "C" __attribute__((visibility("default"))) int fwrite_wrap(void) {
    ALOGD("fwrite_wrap() called");
    return 0;
}

/* Demangled: ENH_API_Free_HSR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_HSR(void) {
    ALOGD("ENH_API_Free_HSR() called");
    return 0;
}

/* Demangled: mtk_sp_team_arsi_assign_lib_fp */
extern "C" __attribute__((visibility("default"))) int mtk_sp_team_arsi_assign_lib_fp(void) {
    ALOGD("mtk_sp_team_arsi_assign_lib_fp() called");
    return 0;
}

/* Demangled: init_delay */
extern "C" __attribute__((visibility("default"))) int init_delay(void) {
    ALOGD("init_delay() called");
    return 0;
}

/* Demangled: ABF_SB_spk */
extern "C" __attribute__((visibility("default"))) int ABF_SB_spk(void) {
    ALOGD("ABF_SB_spk() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC(void) {
    ALOGD("Graphical_UI_DRC() called");
    return 0;
}

/* Demangled: SmoothAmp */
extern "C" __attribute__((visibility("default"))) int SmoothAmp(void) {
    ALOGD("SmoothAmp() called");
    return 0;
}

/* Demangled: ENH_API_Get_NDC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_NDC_Memory(void) {
    ALOGD("ENH_API_Get_NDC_Memory() called");
    return 0;
}

/* Demangled: DataCopy_1in */
extern "C" __attribute__((visibility("default"))) int DataCopy_1in(void) {
    ALOGD("DataCopy_1in() called");
    return 0;
}

/* Demangled: ENH_API_Run_BKF_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_BKF_UL(void) {
    ALOGD("ENH_API_Run_BKF_UL() called");
    return 0;
}

/* Exported Object: es_fact */
extern "C" __attribute__((visibility("default"))) void* es_fact = NULL;

/* Demangled: spc_dsfmac */
extern "C" __attribute__((visibility("default"))) int spc_dsfmac(void) {
    ALOGD("spc_dsfmac() called");
    return 0;
}

/* Exported Object: nlms_e */
extern "C" __attribute__((visibility("default"))) void* nlms_e = NULL;

/* Demangled: ENH_API_Free_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_MR(void) {
    ALOGD("ENH_API_Free_MR() called");
    return 0;
}

/* Demangled: D2T_GainCheck */
extern "C" __attribute__((visibility("default"))) int D2T_GainCheck(void) {
    ALOGD("D2T_GainCheck() called");
    return 0;
}

/* Exported Object: FWB_FIR_Coef_Table */
extern "C" __attribute__((visibility("default"))) void* FWB_FIR_Coef_Table = NULL;

/* Demangled: Radix2_Bfly_Q31 */
extern "C" __attribute__((visibility("default"))) int Radix2_Bfly_Q31(void) {
    ALOGD("Radix2_Bfly_Q31() called");
    return 0;
}

/* Demangled: mdb2_linear */
extern "C" __attribute__((visibility("default"))) int mdb2_linear(void) {
    ALOGD("mdb2_linear() called");
    return 0;
}

/* Demangled: ENH_API_Update_Parameter_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Parameter_DMNR_spk(void) {
    ALOGD("ENH_API_Update_Parameter_DMNR_spk() called");
    return 0;
}

/* Exported Object: CLARITY_Release_Time */
extern "C" __attribute__((visibility("default"))) void* CLARITY_Release_Time = NULL;

/* Demangled: ENH_API_Init_SCH_n */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_SCH_n(void) {
    ALOGD("ENH_API_Init_SCH_n() called");
    return 0;
}

/* Demangled: mtk_arsi_set_dl_mute */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_dl_mute(void) {
    ALOGD("mtk_arsi_set_dl_mute() called");
    return 0;
}

/* Exported Object: ABF_FFT_Sin_Inv */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Sin_Inv = NULL;

/* Demangled: debug_check */
extern "C" __attribute__((visibility("default"))) int debug_check(void) {
    ALOGD("debug_check() called");
    return 0;
}

/* Demangled: ENH_API_Init_HSR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_HSR(void) {
    ALOGD("ENH_API_Init_HSR() called");
    return 0;
}

/* Demangled: align_fractional_point_32 */
extern "C" __attribute__((visibility("default"))) int align_fractional_point_32(void) {
    ALOGD("align_fractional_point_32() called");
    return 0;
}

/* Demangled: init_ctrl */
extern "C" __attribute__((visibility("default"))) int init_ctrl(void) {
    ALOGD("init_ctrl() called");
    return 0;
}

/* Exported Object: ABF_FFT_Cos */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Cos = NULL;

/* Demangled: gcc_phat_vt_vad */
extern "C" __attribute__((visibility("default"))) int gcc_phat_vt_vad(void) {
    ALOGD("gcc_phat_vt_vad() called");
    return 0;
}

/* Demangled: init_vad_fe_HB */
extern "C" __attribute__((visibility("default"))) int init_vad_fe_HB(void) {
    ALOGD("init_vad_fe_HB() called");
    return 0;
}

/* Demangled: AGC_Reverse_Gain_Compensation_Org */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation_Org(void) {
    ALOGD("AGC_Reverse_Gain_Compensation_Org() called");
    return 0;
}

/* Demangled: adaptive_beamforming */
extern "C" __attribute__((visibility("default"))) int adaptive_beamforming(void) {
    ALOGD("adaptive_beamforming() called");
    return 0;
}

/* Demangled: ABF_FFT_Swap_spk */
extern "C" __attribute__((visibility("default"))) int ABF_FFT_Swap_spk(void) {
    ALOGD("ABF_FFT_Swap_spk() called");
    return 0;
}

/* Demangled: Gain_Hysterisis_Check */
extern "C" __attribute__((visibility("default"))) int Gain_Hysterisis_Check(void) {
    ALOGD("Gain_Hysterisis_Check() called");
    return 0;
}

/* Exported Object: Table_TAV */
extern "C" __attribute__((visibility("default"))) void* Table_TAV = NULL;

/* Exported Object: asdwTwiddleCoefQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwTwiddleCoefQ31 = NULL;

/* Exported Object: STE_Richen_Center_L_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_L_t = NULL;

/* Exported Object: NDC_DG_gain_t */
extern "C" __attribute__((visibility("default"))) void* NDC_DG_gain_t = NULL;

/* Demangled: compute_noise_floor */
extern "C" __attribute__((visibility("default"))) int compute_noise_floor(void) {
    ALOGD("compute_noise_floor() called");
    return 0;
}

/* Demangled: mtk_arsi_get_addr_value */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_get_addr_value(void) {
    ALOGD("mtk_arsi_get_addr_value() called");
    return 0;
}

/* Exported Object: DRC_gain_table */
extern "C" __attribute__((visibility("default"))) void* DRC_gain_table = NULL;

/* Demangled: init_ABM_vad */
extern "C" __attribute__((visibility("default"))) int init_ABM_vad(void) {
    ALOGD("init_ABM_vad() called");
    return 0;
}

/* Demangled: synthesis_filter */
extern "C" __attribute__((visibility("default"))) int synthesis_filter(void) {
    ALOGD("synthesis_filter() called");
    return 0;
}

/* Exported Object: NDC_Comfort_Noise_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_Comfort_Noise_Table = NULL;

/* Exported Object: high_flt_WB */
extern "C" __attribute__((visibility("default"))) void* high_flt_WB = NULL;

/* Demangled: abf_init */
extern "C" __attribute__((visibility("default"))) int abf_init(void) {
    ALOGD("abf_init() called");
    return 0;
}

/* Demangled: close_beamforming */
extern "C" __attribute__((visibility("default"))) int close_beamforming(void) {
    ALOGD("close_beamforming() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_HL_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_HL_t = NULL;

/* Demangled: VoiceDetector */
extern "C" __attribute__((visibility("default"))) int VoiceDetector(void) {
    ALOGD("VoiceDetector() called");
    return 0;
}

/* Demangled: UL_FWEControl_Init */
extern "C" __attribute__((visibility("default"))) int UL_FWEControl_Init(void) {
    ALOGD("UL_FWEControl_Init() called");
    return 0;
}

/* Demangled: mtk_arsi_update_device */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_update_device(void) {
    ALOGD("mtk_arsi_update_device() called");
    return 0;
}

/* Demangled: Rad4fft256 */
extern "C" __attribute__((visibility("default"))) int Rad4fft256(void) {
    ALOGD("Rad4fft256() called");
    return 0;
}

/* Demangled: libprof_stop_log */
extern "C" __attribute__((visibility("default"))) int libprof_stop_log(void) {
    ALOGD("libprof_stop_log() called");
    return 0;
}

/* Demangled: init_SNRI_expander */
extern "C" __attribute__((visibility("default"))) int init_SNRI_expander(void) {
    ALOGD("init_SNRI_expander() called");
    return 0;
}

/* Demangled: ABF_postfiltering */
extern "C" __attribute__((visibility("default"))) int ABF_postfiltering(void) {
    ALOGD("ABF_postfiltering() called");
    return 0;
}

/* Demangled: calc_phat */
extern "C" __attribute__((visibility("default"))) int calc_phat(void) {
    ALOGD("calc_phat() called");
    return 0;
}

/* Demangled: NDC_Normalize_Gain_dB */
extern "C" __attribute__((visibility("default"))) int NDC_Normalize_Gain_dB(void) {
    ALOGD("NDC_Normalize_Gain_dB() called");
    return 0;
}

/* Demangled: libprof_init */
extern "C" __attribute__((visibility("default"))) int libprof_init(void) {
    ALOGD("libprof_init() called");
    return 0;
}

/* Demangled: mtk_arsi_set_dl_digital_gain */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_dl_digital_gain(void) {
    ALOGD("mtk_arsi_set_dl_digital_gain() called");
    return 0;
}

/* Demangled: Shift_to_Max_Q_32 */
extern "C" __attribute__((visibility("default"))) int Shift_to_Max_Q_32(void) {
    ALOGD("Shift_to_Max_Q_32() called");
    return 0;
}

/* Exported Object: dctcos_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_WB = NULL;

/* Demangled: BKF_Shaping_3Quest */
extern "C" __attribute__((visibility("default"))) int BKF_Shaping_3Quest(void) {
    ALOGD("BKF_Shaping_3Quest() called");
    return 0;
}

/* Demangled: SPLIT_RIFFT_Q31 */
extern "C" __attribute__((visibility("default"))) int SPLIT_RIFFT_Q31(void) {
    ALOGD("SPLIT_RIFFT_Q31() called");
    return 0;
}

/* Demangled: init_esp_parms */
extern "C" __attribute__((visibility("default"))) int init_esp_parms(void) {
    ALOGD("init_esp_parms() called");
    return 0;
}

/* Demangled: ABF_Wind_NR */
extern "C" __attribute__((visibility("default"))) int ABF_Wind_NR(void) {
    ALOGD("ABF_Wind_NR() called");
    return 0;
}

/* Exported Object: pf_NB */
extern "C" __attribute__((visibility("default"))) void* pf_NB = NULL;

/* Demangled: mtk_arsi_parsing_param_file */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_parsing_param_file(void) {
    ALOGD("mtk_arsi_parsing_param_file() called");
    return 0;
}

/* Demangled: md32_aru_diff */
extern "C" __attribute__((visibility("default"))) int md32_aru_diff(void) {
    ALOGD("md32_aru_diff() called");
    return 0;
}

/* Demangled: debug_print */
extern "C" __attribute__((visibility("default"))) int debug_print(void) {
    ALOGD("debug_print() called");
    return 0;
}

/* Demangled: WB_NR_SuppressGainApply */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainApply(void) {
    ALOGD("WB_NR_SuppressGainApply() called");
    return 0;
}

/* Exported Object: connections */
extern "C" __attribute__((visibility("default"))) void* connections = NULL;

/* Exported Object: dctcos_1_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_1_NB = NULL;

/* Demangled: detect_dual_talk */
extern "C" __attribute__((visibility("default"))) int detect_dual_talk(void) {
    ALOGD("detect_dual_talk() called");
    return 0;
}

/* Demangled: IIR_struct_init */
extern "C" __attribute__((visibility("default"))) int IIR_struct_init(void) {
    ALOGD("IIR_struct_init() called");
    return 0;
}

/* Demangled: StereoWiden */
extern "C" __attribute__((visibility("default"))) int StereoWiden(void) {
    ALOGD("StereoWiden() called");
    return 0;
}

/* Demangled: noise_estimation */
extern "C" __attribute__((visibility("default"))) int noise_estimation(void) {
    ALOGD("noise_estimation() called");
    return 0;
}

/* Demangled: db_mdb2 */
extern "C" __attribute__((visibility("default"))) int db_mdb2(void) {
    ALOGD("db_mdb2() called");
    return 0;
}

/* Demangled: ABM_Cal_nlms_VAD */
extern "C" __attribute__((visibility("default"))) int ABM_Cal_nlms_VAD(void) {
    ALOGD("ABM_Cal_nlms_VAD() called");
    return 0;
}

/* Demangled: Low_Latency_Normalized_Division */
extern "C" __attribute__((visibility("default"))) int Low_Latency_Normalized_Division(void) {
    ALOGD("Low_Latency_Normalized_Division() called");
    return 0;
}

/* Exported Object: FIR_coef_pr_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_pr_8k_set1 = NULL;

/* Demangled: uplink_nlp */
extern "C" __attribute__((visibility("default"))) int uplink_nlp(void) {
    ALOGD("uplink_nlp() called");
    return 0;
}

/* Exported Object: dctcos2_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos2_WB = NULL;

/* Demangled: UL_FrontEnd_Schedule */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_Schedule(void) {
    ALOGD("UL_FrontEnd_Schedule() called");
    return 0;
}

/* Exported Object: FIR_coef_pr_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_pr_8k_set2 = NULL;

/* Demangled: ENH_API_Free_NDC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_NDC(void) {
    ALOGD("ENH_API_Free_NDC() called");
    return 0;
}

/* Demangled: ENH_API_AEC_Alloc_arsi */
extern "C" __attribute__((visibility("default"))) int ENH_API_AEC_Alloc_arsi(void) {
    ALOGD("ENH_API_AEC_Alloc_arsi() called");
    return 0;
}

/* Demangled: init_par_sys */
extern "C" __attribute__((visibility("default"))) int init_par_sys(void) {
    ALOGD("init_par_sys() called");
    return 0;
}

/* Demangled: ar1_filter_1_16 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_1_16(void) {
    ALOGD("ar1_filter_1_16() called");
    return 0;
}

/* Demangled: L_negate_40 */
extern "C" __attribute__((visibility("default"))) int L_negate_40(void) {
    ALOGD("L_negate_40() called");
    return 0;
}

/* Exported Object: ABF_bin_num */
extern "C" __attribute__((visibility("default"))) void* ABF_bin_num = NULL;

/* Exported Object: Table_BounderTHD */
extern "C" __attribute__((visibility("default"))) void* Table_BounderTHD = NULL;

/* Exported Object: FIR_coef_pr_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_pr_8k_set3 = NULL;

/* Exported Object: sebuffer_L */
extern "C" __attribute__((visibility("default"))) void* sebuffer_L = NULL;

/* Exported Object: FIR_coef_pr_8k_set4 */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_pr_8k_set4 = NULL;

/* Demangled: cfft_radix2_bfly_neon */
extern "C" __attribute__((visibility("default"))) int cfft_radix2_bfly_neon(void) {
    ALOGD("cfft_radix2_bfly_neon() called");
    return 0;
}

/* Exported Object: pf_16_12_256 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_256 = NULL;

/* Demangled: md32_fmuldsw_add */
extern "C" __attribute__((visibility("default"))) int md32_fmuldsw_add(void) {
    ALOGD("md32_fmuldsw_add() called");
    return 0;
}

/* Demangled: FE_Minimum_Statistics */
extern "C" __attribute__((visibility("default"))) int FE_Minimum_Statistics(void) {
    ALOGD("FE_Minimum_Statistics() called");
    return 0;
}

/* Exported Object: cef_bp_flt */
extern "C" __attribute__((visibility("default"))) void* cef_bp_flt = NULL;

/* Demangled: spc_xsfmac */
extern "C" __attribute__((visibility("default"))) int spc_xsfmac(void) {
    ALOGD("spc_xsfmac() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_48K */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_48K(void) {
    ALOGD("Graphical_UI_DRC_48K() called");
    return 0;
}

/* Demangled: ENH_API_FE_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_FE_Alloc(void) {
    ALOGD("ENH_API_FE_Alloc() called");
    return 0;
}

/* Demangled: ENH_API_Get_ANE_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_ANE_Memory(void) {
    ALOGD("ENH_API_Get_ANE_Memory() called");
    return 0;
}

/* Demangled: Complex_mult_test32_smmul */
extern "C" __attribute__((visibility("default"))) int Complex_mult_test32_smmul(void) {
    ALOGD("Complex_mult_test32_smmul() called");
    return 0;
}

/* Demangled: compute_noise_floor_16 */
extern "C" __attribute__((visibility("default"))) int compute_noise_floor_16(void) {
    ALOGD("compute_noise_floor_16() called");
    return 0;
}

/* Demangled: ABF_FFT_Swap */
extern "C" __attribute__((visibility("default"))) int ABF_FFT_Swap(void) {
    ALOGD("ABF_FFT_Swap() called");
    return 0;
}

/* Demangled: AGC_Reverse_Gain_Compensation_spk */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation_spk(void) {
    ALOGD("AGC_Reverse_Gain_Compensation_spk() called");
    return 0;
}

/* Demangled: DMNR_mic1_VAD_spk */
extern "C" __attribute__((visibility("default"))) int DMNR_mic1_VAD_spk(void) {
    ALOGD("DMNR_mic1_VAD_spk() called");
    return 0;
}

/* Demangled: analysis_filter */
extern "C" __attribute__((visibility("default"))) int analysis_filter(void) {
    ALOGD("analysis_filter() called");
    return 0;
}

/* Exported Object: AGC_20ms_DB2Linear_MapP */
extern "C" __attribute__((visibility("default"))) void* AGC_20ms_DB2Linear_MapP = NULL;

/* Demangled: ENH_API_Init_NDC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_NDC(void) {
    ALOGD("ENH_API_Init_NDC() called");
    return 0;
}

/* Demangled: init_vad3 */
extern "C" __attribute__((visibility("default"))) int init_vad3(void) {
    ALOGD("init_vad3() called");
    return 0;
}

/* Demangled: init_SF_parms_spk */
extern "C" __attribute__((visibility("default"))) int init_SF_parms_spk(void) {
    ALOGD("init_SF_parms_spk() called");
    return 0;
}

/* Exported Object: dctcos_2_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_2_WB = NULL;

/* Demangled: HSR_MAIN */
extern "C" __attribute__((visibility("default"))) int HSR_MAIN(void) {
    ALOGD("HSR_MAIN() called");
    return 0;
}

/* Exported Object: NDC_Cnst_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_Cnst_Table = NULL;

/* Exported Object: ABF_CB_swap_table */
extern "C" __attribute__((visibility("default"))) void* ABF_CB_swap_table = NULL;

/* Demangled: Smooth_NoiseFloor */
extern "C" __attribute__((visibility("default"))) int Smooth_NoiseFloor(void) {
    ALOGD("Smooth_NoiseFloor() called");
    return 0;
}

/* Demangled: WB_NR_SuppressGainSmoothing */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainSmoothing(void) {
    ALOGD("WB_NR_SuppressGainSmoothing() called");
    return 0;
}

/* Demangled: WB_NR_ToneDetection */
extern "C" __attribute__((visibility("default"))) int WB_NR_ToneDetection(void) {
    ALOGD("WB_NR_ToneDetection() called");
    return 0;
}

/* Demangled: libprof_dump_log */
extern "C" __attribute__((visibility("default"))) int libprof_dump_log(void) {
    ALOGD("libprof_dump_log() called");
    return 0;
}

/* Demangled: coef_normalization */
extern "C" __attribute__((visibility("default"))) int coef_normalization(void) {
    ALOGD("coef_normalization() called");
    return 0;
}

/* Exported Object: sb_additional_shadow_stepsize_st */
extern "C" __attribute__((visibility("default"))) void* sb_additional_shadow_stepsize_st = NULL;

/* Demangled: MusicDet */
extern "C" __attribute__((visibility("default"))) int MusicDet(void) {
    ALOGD("MusicDet() called");
    return 0;
}

/* Demangled: md32_sub_sat_dual */
extern "C" __attribute__((visibility("default"))) int md32_sub_sat_dual(void) {
    ALOGD("md32_sub_sat_dual() called");
    return 0;
}

/* Demangled: ENH_API_Run_Compressor_48K_Front */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Compressor_48K_Front(void) {
    ALOGD("ENH_API_Run_Compressor_48K_Front() called");
    return 0;
}

/* Exported Object: DRC_gain_smoothing */
extern "C" __attribute__((visibility("default"))) void* DRC_gain_smoothing = NULL;

/* Demangled: get_aec_memory */
extern "C" __attribute__((visibility("default"))) int get_aec_memory(void) {
    ALOGD("get_aec_memory() called");
    return 0;
}

/* Exported Object: pre_emphasis_1 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_1 = NULL;

/* Demangled: ENH_API_Get_Version */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Version(void) {
    ALOGD("ENH_API_Get_Version() called");
    return 0;
}

/* Demangled: SRC_downsample */
extern "C" __attribute__((visibility("default"))) int SRC_downsample(void) {
    ALOGD("SRC_downsample() called");
    return 0;
}

/* Demangled: SRC_upsample_2in */
extern "C" __attribute__((visibility("default"))) int SRC_upsample_2in(void) {
    ALOGD("SRC_upsample_2in() called");
    return 0;
}

/* Exported Object: pre_emphasis_2 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_2 = NULL;

/* Exported Object: FIR_coef_HPF */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_HPF = NULL;

/* Demangled: init_vad_fe */
extern "C" __attribute__((visibility("default"))) int init_vad_fe(void) {
    ALOGD("init_vad_fe() called");
    return 0;
}

/* Exported Object: pre_emphasis_3 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_3 = NULL;

/* Demangled: allocate_aec_memory */
extern "C" __attribute__((visibility("default"))) int allocate_aec_memory(void) {
    ALOGD("allocate_aec_memory() called");
    return 0;
}

/* Exported Object: IIR_b1_48k */
extern "C" __attribute__((visibility("default"))) void* IIR_b1_48k = NULL;

/* Demangled: libprof_get */
extern "C" __attribute__((visibility("default"))) int libprof_get(void) {
    ALOGD("libprof_get() called");
    return 0;
}

/* Exported Object: ds_hist */
extern "C" __attribute__((visibility("default"))) void* ds_hist = NULL;

/* Demangled: STE_2nd_IIR_Bass */
extern "C" __attribute__((visibility("default"))) int STE_2nd_IIR_Bass(void) {
    ALOGD("STE_2nd_IIR_Bass() called");
    return 0;
}

/* Exported Object: ES_lower_bound_table */
extern "C" __attribute__((visibility("default"))) void* ES_lower_bound_table = NULL;

/* Demangled: AGCGainEst */
extern "C" __attribute__((visibility("default"))) int AGCGainEst(void) {
    ALOGD("AGCGainEst() called");
    return 0;
}

/* Demangled: md32_muld_add */
extern "C" __attribute__((visibility("default"))) int md32_muld_add(void) {
    ALOGD("md32_muld_add() called");
    return 0;
}

/* Demangled: md32_sat_hi */
extern "C" __attribute__((visibility("default"))) int md32_sat_hi(void) {
    ALOGD("md32_sat_hi() called");
    return 0;
}

/* Demangled: compressor_48K_0 */
extern "C" __attribute__((visibility("default"))) int compressor_48K_0(void) {
    ALOGD("compressor_48K_0() called");
    return 0;
}

/* Demangled: NR_SbAnalysis_48K */
extern "C" __attribute__((visibility("default"))) int NR_SbAnalysis_48K(void) {
    ALOGD("NR_SbAnalysis_48K() called");
    return 0;
}

/* Demangled: init_voice_tracking */
extern "C" __attribute__((visibility("default"))) int init_voice_tracking(void) {
    ALOGD("init_voice_tracking() called");
    return 0;
}

/* Exported Object: subframe_num_switch_table */
extern "C" __attribute__((visibility("default"))) void* subframe_num_switch_table = NULL;

/* Demangled: StereoEnh_Get_Memory */
extern "C" __attribute__((visibility("default"))) int StereoEnh_Get_Memory(void) {
    ALOGD("StereoEnh_Get_Memory() called");
    return 0;
}

/* Demangled: init_bankB_parms */
extern "C" __attribute__((visibility("default"))) int init_bankB_parms(void) {
    ALOGD("init_bankB_parms() called");
    return 0;
}

/* Demangled: compressor_48K_1 */
extern "C" __attribute__((visibility("default"))) int compressor_48K_1(void) {
    ALOGD("compressor_48K_1() called");
    return 0;
}

/* Demangled: NR_FixedVAD */
extern "C" __attribute__((visibility("default"))) int NR_FixedVAD(void) {
    ALOGD("NR_FixedVAD() called");
    return 0;
}

/* Demangled: Cal_noise_case */
extern "C" __attribute__((visibility("default"))) int Cal_noise_case(void) {
    ALOGD("Cal_noise_case() called");
    return 0;
}

/* Demangled: ABF_mic2_blocking_detection_spk */
extern "C" __attribute__((visibility("default"))) int ABF_mic2_blocking_detection_spk(void) {
    ALOGD("ABF_mic2_blocking_detection_spk() called");
    return 0;
}

/* Demangled: Low_Latency_D2T_GainCheck */
extern "C" __attribute__((visibility("default"))) int Low_Latency_D2T_GainCheck(void) {
    ALOGD("Low_Latency_D2T_GainCheck() called");
    return 0;
}

/* Exported Object: Wn_i_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_i_256 = NULL;

/* Demangled: Cmult */
extern "C" __attribute__((visibility("default"))) int Cmult(void) {
    ALOGD("Cmult() called");
    return 0;
}

/* Demangled: mtk_arsi_set_addr_value */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_addr_value(void) {
    ALOGD("mtk_arsi_set_addr_value() called");
    return 0;
}

/* Exported Object: DRC_bounder_attack_rate1 */
extern "C" __attribute__((visibility("default"))) void* DRC_bounder_attack_rate1 = NULL;

/* Demangled: Radix4FirstStageNDC_test32 */
extern "C" __attribute__((visibility("default"))) int Radix4FirstStageNDC_test32(void) {
    ALOGD("Radix4FirstStageNDC_test32() called");
    return 0;
}

/* Exported Object: AGC_sqrt_coef */
extern "C" __attribute__((visibility("default"))) void* AGC_sqrt_coef = NULL;

/* Exported Object: pf_16_12_128_NB */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128_NB = NULL;

/* Demangled: ENH_API_DL_Process */
extern "C" __attribute__((visibility("default"))) int ENH_API_DL_Process(void) {
    ALOGD("ENH_API_DL_Process() called");
    return 0;
}

/* Demangled: extract_h_64 */
extern "C" __attribute__((visibility("default"))) int extract_h_64(void) {
    ALOGD("extract_h_64() called");
    return 0;
}

/* Exported Object: DRC_bounder_attack_rate2 */
extern "C" __attribute__((visibility("default"))) void* DRC_bounder_attack_rate2 = NULL;

/* Demangled: RFFT_256_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_256_Q31(void) {
    ALOGD("RFFT_256_Q31() called");
    return 0;
}

/* Demangled: tcl_erl_update */
extern "C" __attribute__((visibility("default"))) int tcl_erl_update(void) {
    ALOGD("tcl_erl_update() called");
    return 0;
}

/* Exported Object: pf_16_12_112 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_112 = NULL;

/* Demangled: WB_NR_Subband_VAD */
extern "C" __attribute__((visibility("default"))) int WB_NR_Subband_VAD(void) {
    ALOGD("WB_NR_Subband_VAD() called");
    return 0;
}

/* Demangled: T2F_Transform */
extern "C" __attribute__((visibility("default"))) int T2F_Transform(void) {
    ALOGD("T2F_Transform() called");
    return 0;
}

/* Exported Object: BMG_table */
extern "C" __attribute__((visibility("default"))) void* BMG_table = NULL;

/* Demangled: fir_48K_60pt_36tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_60pt_36tap(void) {
    ALOGD("fir_48K_60pt_36tap() called");
    return 0;
}

/* Demangled: init_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int init_ctrl_spk(void) {
    ALOGD("init_ctrl_spk() called");
    return 0;
}

/* Demangled: NDC_UL_ASLR */
extern "C" __attribute__((visibility("default"))) int NDC_UL_ASLR(void) {
    ALOGD("NDC_UL_ASLR() called");
    return 0;
}

/* Demangled: init_vad_sb */
extern "C" __attribute__((visibility("default"))) int init_vad_sb(void) {
    ALOGD("init_vad_sb() called");
    return 0;
}

/* Demangled: sb_aec */
extern "C" __attribute__((visibility("default"))) int sb_aec(void) {
    ALOGD("sb_aec() called");
    return 0;
}

/* Demangled: detect_direction */
extern "C" __attribute__((visibility("default"))) int detect_direction(void) {
    ALOGD("detect_direction() called");
    return 0;
}

/* Exported Object: NR_48K_STE_RESPONSE */
extern "C" __attribute__((visibility("default"))) void* NR_48K_STE_RESPONSE = NULL;

/* Exported Object: STE_Widen_Side02_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side02_t = NULL;

/* Exported Object: ABF_FFT_Sin */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Sin = NULL;

/* Demangled: MusicDet_StaticMemInit */
extern "C" __attribute__((visibility("default"))) int MusicDet_StaticMemInit(void) {
    ALOGD("MusicDet_StaticMemInit() called");
    return 0;
}

/* Exported Object: NR_cr_lambda_n */
extern "C" __attribute__((visibility("default"))) void* NR_cr_lambda_n = NULL;

/* Exported Object: ne2_ds_hist */
extern "C" __attribute__((visibility("default"))) void* ne2_ds_hist = NULL;

/* Demangled: allocate_compressor_48K_memory */
extern "C" __attribute__((visibility("default"))) int allocate_compressor_48K_memory(void) {
    ALOGD("allocate_compressor_48K_memory() called");
    return 0;
}

/* Demangled: circular_conv */
extern "C" __attribute__((visibility("default"))) int circular_conv(void) {
    ALOGD("circular_conv() called");
    return 0;
}

/* Exported Object: sebuffer2_L */
extern "C" __attribute__((visibility("default"))) void* sebuffer2_L = NULL;

/* Demangled: UlDlMusicDet */
extern "C" __attribute__((visibility("default"))) int UlDlMusicDet(void) {
    ALOGD("UlDlMusicDet() called");
    return 0;
}

/* Exported Object: pf_16_12_96 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_96 = NULL;

/* Exported Object: drc_cos_table */
extern "C" __attribute__((visibility("default"))) void* drc_cos_table = NULL;

/* Demangled: nlms_sb_n */
extern "C" __attribute__((visibility("default"))) int nlms_sb_n(void) {
    ALOGD("nlms_sb_n() called");
    return 0;
}

/* Demangled: L_mult_i_40 */
extern "C" __attribute__((visibility("default"))) int L_mult_i_40(void) {
    ALOGD("L_mult_i_40() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_b2_8k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_8k_set1 = NULL;

/* Demangled: NR_SuppressGainSmoothing */
extern "C" __attribute__((visibility("default"))) int NR_SuppressGainSmoothing(void) {
    ALOGD("NR_SuppressGainSmoothing() called");
    return 0;
}

/* Demangled: FIXED_DFT */
extern "C" __attribute__((visibility("default"))) int FIXED_DFT(void) {
    ALOGD("FIXED_DFT() called");
    return 0;
}

/* Demangled: HSR_Buffer_Init */
extern "C" __attribute__((visibility("default"))) int HSR_Buffer_Init(void) {
    ALOGD("HSR_Buffer_Init() called");
    return 0;
}

/* Demangled: WB_NR_Music_Detection */
extern "C" __attribute__((visibility("default"))) int WB_NR_Music_Detection(void) {
    ALOGD("WB_NR_Music_Detection() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_b2_8k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_8k_set2 = NULL;

/* Demangled: cfft_radix2_bfly_neon_2x2 */
extern "C" __attribute__((visibility("default"))) int cfft_radix2_bfly_neon_2x2(void) {
    ALOGD("cfft_radix2_bfly_neon_2x2() called");
    return 0;
}

/* Demangled: SRC_upsample */
extern "C" __attribute__((visibility("default"))) int SRC_upsample(void) {
    ALOGD("SRC_upsample() called");
    return 0;
}

/* Demangled: mtk_arsi_set_key_value_pair */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_set_key_value_pair(void) {
    ALOGD("mtk_arsi_set_key_value_pair() called");
    return 0;
}

/* Exported Object: IIR_b2_48k */
extern "C" __attribute__((visibility("default"))) void* IIR_b2_48k = NULL;

/* Exported Object: UL_IIR_coef_b2_8k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_8k_set3 = NULL;

/* Demangled: AGC_Reverse_Gain_Compensation */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation(void) {
    ALOGD("AGC_Reverse_Gain_Compensation() called");
    return 0;
}

/* Demangled: WB_NR_SpectrumSmoothing */
extern "C" __attribute__((visibility("default"))) int WB_NR_SpectrumSmoothing(void) {
    ALOGD("WB_NR_SpectrumSmoothing() called");
    return 0;
}

/* Demangled: DL_ClarityControl_Init */
extern "C" __attribute__((visibility("default"))) int DL_ClarityControl_Init(void) {
    ALOGD("DL_ClarityControl_Init() called");
    return 0;
}

/* Demangled: mtk_arsi_create_handler */
extern "C" __attribute__((visibility("default"))) int mtk_arsi_create_handler(void) {
    ALOGD("mtk_arsi_create_handler() called");
    return 0;
}

/* Demangled: NR_MCRANoiseEst */
extern "C" __attribute__((visibility("default"))) int NR_MCRANoiseEst(void) {
    ALOGD("NR_MCRANoiseEst() called");
    return 0;
}

/* Exported Object: Beam_direction_subgroup_start */
extern "C" __attribute__((visibility("default"))) void* Beam_direction_subgroup_start = NULL;

/* Exported Object: IIR_a1_NB */
extern "C" __attribute__((visibility("default"))) void* IIR_a1_NB = NULL;

/* Demangled: ENH_API_Run_Ndc_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ndc_UL(void) {
    ALOGD("ENH_API_Run_Ndc_UL() called");
    return 0;
}

/* Demangled: DataCopy_2in */
extern "C" __attribute__((visibility("default"))) int DataCopy_2in(void) {
    ALOGD("DataCopy_2in() called");
    return 0;
}

/* Demangled: NR_SetAggMode */
extern "C" __attribute__((visibility("default"))) int NR_SetAggMode(void) {
    ALOGD("NR_SetAggMode() called");
    return 0;
}

/* Demangled: calc_gcc */
extern "C" __attribute__((visibility("default"))) int calc_gcc(void) {
    ALOGD("calc_gcc() called");
    return 0;
}

/* Demangled: IIR_allpass_stereo */
extern "C" __attribute__((visibility("default"))) int IIR_allpass_stereo(void) {
    ALOGD("IIR_allpass_stereo() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_b2_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_16k_set1 = NULL;

/* Demangled: init_cng_parms */
extern "C" __attribute__((visibility("default"))) int init_cng_parms(void) {
    ALOGD("init_cng_parms() called");
    return 0;
}

/* Demangled: init_DRC */
extern "C" __attribute__((visibility("default"))) int init_DRC(void) {
    ALOGD("init_DRC() called");
    return 0;
}

/* Demangled: ABF_FIXED_DFT */
extern "C" __attribute__((visibility("default"))) int ABF_FIXED_DFT(void) {
    ALOGD("ABF_FIXED_DFT() called");
    return 0;
}

/* Demangled: Cal_parameter_forATnT */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_forATnT(void) {
    ALOGD("Cal_parameter_forATnT() called");
    return 0;
}

/* Demangled: HGain_modify_and_iFFT */
extern "C" __attribute__((visibility("default"))) int HGain_modify_and_iFFT(void) {
    ALOGD("HGain_modify_and_iFFT() called");
    return 0;
}

/* Exported Object: Freq_Array */
extern "C" __attribute__((visibility("default"))) void* Freq_Array = NULL;

/* Exported Object: UL_IIR_coef_b2_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_16k_set2 = NULL;

/* Exported Object: ABF_sb_det_gain */
extern "C" __attribute__((visibility("default"))) void* ABF_sb_det_gain = NULL;

/* Demangled: pack_div_prec */
extern "C" __attribute__((visibility("default"))) int pack_div_prec(void) {
    ALOGD("pack_div_prec() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_b2_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_b2_16k_set3 = NULL;

/* Exported Object: fe_ds_hist */
extern "C" __attribute__((visibility("default"))) void* fe_ds_hist = NULL;

/* Exported Object: sb_pwr_bias_shadow */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_shadow = NULL;

/* Demangled: debug_fprint */
extern "C" __attribute__((visibility("default"))) int debug_fprint(void) {
    ALOGD("debug_fprint() called");
    return 0;
}

/* Demangled: ANE_Normalize_Gain_dB */
extern "C" __attribute__((visibility("default"))) int ANE_Normalize_Gain_dB(void) {
    ALOGD("ANE_Normalize_Gain_dB() called");
    return 0;
}

/* Exported Object: Table_MinGain */
extern "C" __attribute__((visibility("default"))) void* Table_MinGain = NULL;

/* Demangled: Complex_mult */
extern "C" __attribute__((visibility("default"))) int Complex_mult(void) {
    ALOGD("Complex_mult() called");
    return 0;
}

/* Demangled: vad_fe_HB */
extern "C" __attribute__((visibility("default"))) int vad_fe_HB(void) {
    ALOGD("vad_fe_HB() called");
    return 0;
}

/* Demangled: norm_r_shift_32 */
extern "C" __attribute__((visibility("default"))) int norm_r_shift_32(void) {
    ALOGD("norm_r_shift_32() called");
    return 0;
}

/* Demangled: AGC_Fixed_sqrt */
extern "C" __attribute__((visibility("default"))) int AGC_Fixed_sqrt(void) {
    ALOGD("AGC_Fixed_sqrt() called");
    return 0;
}

/* Demangled: IIR_64_Halfband */
extern "C" __attribute__((visibility("default"))) int IIR_64_Halfband(void) {
    ALOGD("IIR_64_Halfband() called");
    return 0;
}

/* Demangled: Fixed_Divide */
extern "C" __attribute__((visibility("default"))) int Fixed_Divide(void) {
    ALOGD("Fixed_Divide() called");
    return 0;
}

/* Demangled: Fixed_Spectral_Smoothing */
extern "C" __attribute__((visibility("default"))) int Fixed_Spectral_Smoothing(void) {
    ALOGD("Fixed_Spectral_Smoothing() called");
    return 0;
}

/* Exported Object: HP_IIR_coef_b2_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_b2_16k_set = NULL;

/* Exported Object: NR_Agg_Mode_Table */
extern "C" __attribute__((visibility("default"))) void* NR_Agg_Mode_Table = NULL;

/* Demangled: fast_sqrt */
extern "C" __attribute__((visibility("default"))) int fast_sqrt(void) {
    ALOGD("fast_sqrt() called");
    return 0;
}

/* Demangled: Fixed_ThermalNoise */
extern "C" __attribute__((visibility("default"))) int Fixed_ThermalNoise(void) {
    ALOGD("Fixed_ThermalNoise() called");
    return 0;
}

/* Demangled: WB_NR_pre_emphasis */
extern "C" __attribute__((visibility("default"))) int WB_NR_pre_emphasis(void) {
    ALOGD("WB_NR_pre_emphasis() called");
    return 0;
}

/* Demangled: spc_daccl_satw */
extern "C" __attribute__((visibility("default"))) int spc_daccl_satw(void) {
    ALOGD("spc_daccl_satw() called");
    return 0;
}

/* Demangled: ENH_API_Get_Compressor_48K_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Compressor_48K_Memory(void) {
    ALOGD("ENH_API_Get_Compressor_48K_Memory() called");
    return 0;
}

/* Exported Object: IIR_a2_WB */
extern "C" __attribute__((visibility("default"))) void* IIR_a2_WB = NULL;

/* Demangled: apply_sup_gain */
extern "C" __attribute__((visibility("default"))) int apply_sup_gain(void) {
    ALOGD("apply_sup_gain() called");
    return 0;
}

/* Demangled: ULDL_GDRCControl_Init */
extern "C" __attribute__((visibility("default"))) int ULDL_GDRCControl_Init(void) {
    ALOGD("ULDL_GDRCControl_Init() called");
    return 0;
}

/* Demangled: SlowBitReverse256_test32 */
extern "C" __attribute__((visibility("default"))) int SlowBitReverse256_test32(void) {
    ALOGD("SlowBitReverse256_test32() called");
    return 0;
}
