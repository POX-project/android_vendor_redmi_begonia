/*
 * Reverse-Engineered ABI Specification for: libspeech_enh_lib.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: lib_speech_enh_lib.so
 */

#ifndef BEGONIA_RE_LIBSPEECH_ENH_LIB_H
#define BEGONIA_RE_LIBSPEECH_ENH_LIB_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: init_DMNR_par_sys */
/* Demangled: init_DMNR_par_sys */
int init_DMNR_par_sys(void);

/* Symbol: FreqShapeCoef_WB_Xml */
/* Demangled: FreqShapeCoef_WB_Xml */
extern void* FreqShapeCoef_WB_Xml;

/* Symbol: WB_NR_SbAnalysis */
/* Demangled: WB_NR_SbAnalysis */
int WB_NR_SbAnalysis(void);

/* Symbol: ar1_filter_3_16 */
/* Demangled: ar1_filter_3_16 */
int ar1_filter_3_16(void);

/* Symbol: init_compressor_48K_n */
/* Demangled: init_compressor_48K_n */
int init_compressor_48K_n(void);

/* Symbol: VCE2o0_SM_THR_t */
/* Demangled: VCE2o0_SM_THR_t */
extern void* VCE2o0_SM_THR_t;

/* Symbol: align_fractional_point */
/* Demangled: align_fractional_point */
int align_fractional_point(void);

/* Symbol: sb_nlms_stepsize_2 */
/* Demangled: sb_nlms_stepsize_2 */
extern void* sb_nlms_stepsize_2;

/* Symbol: ENH_API_DMNR_spk_Alloc */
/* Demangled: ENH_API_DMNR_spk_Alloc */
int ENH_API_DMNR_spk_Alloc(void);

/* Symbol: D2T_Normalized */
/* Demangled: D2T_Normalized */
int D2T_Normalized(void);

/* Symbol: NDC_CB_Table_48K */
/* Demangled: NDC_CB_Table_48K */
extern void* NDC_CB_Table_48K;

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: free_HSR_memory */
/* Demangled: free_HSR_memory */
int free_HSR_memory(void);

/* Symbol: ENH_API_Run_MR_UL */
/* Demangled: ENH_API_Run_MR_UL */
int ENH_API_Run_MR_UL(void);

/* Symbol: ENH_API_Init_ANE */
/* Demangled: ENH_API_Init_ANE */
int ENH_API_Init_ANE(void);

/* Symbol: STE_FIR */
/* Demangled: STE_FIR */
int STE_FIR(void);

/* Symbol: add_comfort_noise */
/* Demangled: add_comfort_noise */
int add_comfort_noise(void);

/* Symbol: md32_packhh */
/* Demangled: md32_packhh */
int md32_packhh(void);

/* Symbol: ABF_cal_process */
/* Demangled: ABF_cal_process */
int ABF_cal_process(void);

/* Symbol: IIR_coef_b2_8k_set1 */
/* Demangled: IIR_coef_b2_8k_set1 */
extern void* IIR_coef_b2_8k_set1;

/* Symbol: Radix4FirstStage */
/* Demangled: Radix4FirstStage */
int Radix4FirstStage(void);

/* Symbol: Noise_Level_Calibration */
/* Demangled: Noise_Level_Calibration */
int Noise_Level_Calibration(void);

/* Symbol: mtk_arsi_process_ul_buf */
/* Demangled: mtk_arsi_process_ul_buf */
int mtk_arsi_process_ul_buf(void);

/* Symbol: dctcos_4_WB */
/* Demangled: dctcos_4_WB */
extern void* dctcos_4_WB;

/* Symbol: IIR_coef_b2_8k_set2 */
/* Demangled: IIR_coef_b2_8k_set2 */
extern void* IIR_coef_b2_8k_set2;

/* Symbol: init_nlp_parms */
/* Demangled: init_nlp_parms */
int init_nlp_parms(void);

/* Symbol: L_mac_40 */
/* Demangled: L_mac_40 */
int L_mac_40(void);

/* Symbol: Maximum_Statistics */
/* Demangled: Maximum_Statistics */
int Maximum_Statistics(void);

/* Symbol: allocate_memory_DMNR */
/* Demangled: allocate_memory_DMNR */
int allocate_memory_DMNR(void);

/* Symbol: phase_calibration */
/* Demangled: phase_calibration */
int phase_calibration(void);

/* Symbol: IIR_b1_NB */
/* Demangled: IIR_b1_NB */
extern void* IIR_b1_NB;

/* Symbol: WB_NR_ToneDetection_HandFree */
/* Demangled: WB_NR_ToneDetection_HandFree */
int WB_NR_ToneDetection_HandFree(void);

/* Symbol: IIR_coef_b2_8k_set3 */
/* Demangled: IIR_coef_b2_8k_set3 */
extern void* IIR_coef_b2_8k_set3;

/* Symbol: fixed_white_noise_gen */
/* Demangled: fixed_white_noise_gen */
int fixed_white_noise_gen(void);

/* Symbol: get_memory_DMNR */
/* Demangled: get_memory_DMNR */
int get_memory_DMNR(void);

/* Symbol: init_SD_vad */
/* Demangled: init_SD_vad */
int init_SD_vad(void);

/* Symbol: ENH_API_Init_DMNR_spk_n */
/* Demangled: ENH_API_Init_DMNR_spk_n */
int ENH_API_Init_DMNR_spk_n(void);

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: HP_IIR_coef_b1_16k_set */
/* Demangled: HP_IIR_coef_b1_16k_set */
extern void* HP_IIR_coef_b1_16k_set;

/* Symbol: IIR_coef_b2_8k_set4 */
/* Demangled: IIR_coef_b2_8k_set4 */
extern void* IIR_coef_b2_8k_set4;

/* Symbol: NDC_Cnst_Table_SWB */
/* Demangled: NDC_Cnst_Table_SWB */
extern void* NDC_Cnst_Table_SWB;

/* Symbol: RIFFT_512_Q31 */
/* Demangled: RIFFT_512_Q31 */
int RIFFT_512_Q31(void);

/* Symbol: ENH_API_Update_Parameter */
/* Demangled: ENH_API_Update_Parameter */
int ENH_API_Update_Parameter(void);

/* Symbol: ne_ds_hist */
/* Demangled: ne_ds_hist */
extern void* ne_ds_hist;

/* Symbol: ENH_API_Init_AEC_n */
/* Demangled: ENH_API_Init_AEC_n */
int ENH_API_Init_AEC_n(void);

/* Symbol: md32_packhl */
/* Demangled: md32_packhl */
int md32_packhl(void);

/* Symbol: NDC_NRDRC */
/* Demangled: NDC_NRDRC */
int NDC_NRDRC(void);

/* Symbol: init_abf_nlms */
/* Demangled: init_abf_nlms */
int init_abf_nlms(void);

/* Symbol: Beam_direction_delay */
/* Demangled: Beam_direction_delay */
extern void* Beam_direction_delay;

/* Symbol: UL_IIR_coef_a2_8k_set1 */
/* Demangled: UL_IIR_coef_a2_8k_set1 */
extern void* UL_IIR_coef_a2_8k_set1;

/* Symbol: LR2CS */
/* Demangled: LR2CS */
int LR2CS(void);

/* Symbol: compressor_48K_sub_process */
/* Demangled: compressor_48K_sub_process */
int compressor_48K_sub_process(void);

/* Symbol: UL_IIR_coef_a2_8k_set2 */
/* Demangled: UL_IIR_coef_a2_8k_set2 */
extern void* UL_IIR_coef_a2_8k_set2;

/* Symbol: abf_sb_pwr_bias_shadow_stepsize */
/* Demangled: abf_sb_pwr_bias_shadow_stepsize */
extern void* abf_sb_pwr_bias_shadow_stepsize;

/* Symbol: UL_IIR_coef_a2_8k_set3 */
/* Demangled: UL_IIR_coef_a2_8k_set3 */
extern void* UL_IIR_coef_a2_8k_set3;

/* Symbol: fshift_bp_flt */
/* Demangled: fshift_bp_flt */
extern void* fshift_bp_flt;

/* Symbol: num_taps */
/* Demangled: num_taps */
extern void* num_taps;

/* Symbol: round_s */
/* Demangled: round_s */
int round_s(void);

/* Symbol: mtk_arsi_reset_handler */
/* Demangled: mtk_arsi_reset_handler */
int mtk_arsi_reset_handler(void);

/* Symbol: RIFFT_256_Q31 */
/* Demangled: RIFFT_256_Q31 */
int RIFFT_256_Q31(void);

/* Symbol: libprof_return */
/* Demangled: libprof_return */
int libprof_return(void);

/* Symbol: AGC_cal_power */
/* Demangled: AGC_cal_power */
int AGC_cal_power(void);

/* Symbol: UL_IIR_coef_a2_16k_set1 */
/* Demangled: UL_IIR_coef_a2_16k_set1 */
extern void* UL_IIR_coef_a2_16k_set1;

/* Symbol: pf_16_12_128 */
/* Demangled: pf_16_12_128 */
extern void* pf_16_12_128;

/* Symbol: swap_blk */
/* Demangled: swap_blk */
int swap_blk(void);

/* Symbol: UL_IIR_coef_a2_16k_set2 */
/* Demangled: UL_IIR_coef_a2_16k_set2 */
extern void* UL_IIR_coef_a2_16k_set2;

/* Symbol: abf_mode_init */
/* Demangled: abf_mode_init */
int abf_mode_init(void);

/* Symbol: init_bankB_parms_DMNR */
/* Demangled: init_bankB_parms_DMNR */
int init_bankB_parms_DMNR(void);

/* Symbol: BWE_bef_alias */
/* Demangled: BWE_bef_alias */
int BWE_bef_alias(void);

/* Symbol: UL_IIR_coef_a2_16k_set3 */
/* Demangled: UL_IIR_coef_a2_16k_set3 */
extern void* UL_IIR_coef_a2_16k_set3;

/* Symbol: UL_IIR_coef_b1_16k_set1 */
/* Demangled: UL_IIR_coef_b1_16k_set1 */
extern void* UL_IIR_coef_b1_16k_set1;

/* Symbol: ds_coef */
/* Demangled: ds_coef */
extern void* ds_coef;

/* Symbol: AGC_function */
/* Demangled: AGC_function */
int AGC_function(void);

/* Symbol: compose_64 */
/* Demangled: compose_64 */
int compose_64(void);

/* Symbol: IIR_b2_WB */
/* Demangled: IIR_b2_WB */
extern void* IIR_b2_WB;

/* Symbol: UL_IIR_coef_b1_16k_set2 */
/* Demangled: UL_IIR_coef_b1_16k_set2 */
extern void* UL_IIR_coef_b1_16k_set2;

/* Symbol: BWE_control */
/* Demangled: BWE_control */
int BWE_control(void);

/* Symbol: WB_NR_SuppressGainEst */
/* Demangled: WB_NR_SuppressGainEst */
int WB_NR_SuppressGainEst(void);

/* Symbol: UL_IIR_coef_b1_16k_set3 */
/* Demangled: UL_IIR_coef_b1_16k_set3 */
extern void* UL_IIR_coef_b1_16k_set3;

/* Symbol: NDC_Com_Init */
/* Demangled: NDC_Com_Init */
int NDC_Com_Init(void);

/* Symbol: ESR_THD */
/* Demangled: ESR_THD */
extern void* ESR_THD;

/* Symbol: low_flt */
/* Demangled: low_flt */
extern void* low_flt;

/* Symbol: modify_stepsize_tcl */
/* Demangled: modify_stepsize_tcl */
int modify_stepsize_tcl(void);

/* Symbol: ar1_filter_1_32 */
/* Demangled: ar1_filter_1_32 */
int ar1_filter_1_32(void);

/* Symbol: ENH_API_DMNR_Alloc */
/* Demangled: ENH_API_DMNR_Alloc */
int ENH_API_DMNR_Alloc(void);

/* Symbol: ABF_DIF_FFT */
/* Demangled: ABF_DIF_FFT */
int ABF_DIF_FFT(void);

/* Symbol: spatial_filter_spk */
/* Demangled: spatial_filter_spk */
int spatial_filter_spk(void);

/* Symbol: ENH_API_MR_Alloc */
/* Demangled: ENH_API_MR_Alloc */
int ENH_API_MR_Alloc(void);

/* Symbol: AEC_Ne_sample_based_processing */
/* Demangled: AEC_Ne_sample_based_processing */
int AEC_Ne_sample_based_processing(void);

/* Symbol: mtk_arsi_destroy_handler */
/* Demangled: mtk_arsi_destroy_handler */
int mtk_arsi_destroy_handler(void);

/* Symbol: DlMusicDetL1aTblInit */
/* Demangled: DlMusicDetL1aTblInit */
extern void* DlMusicDetL1aTblInit;

/* Symbol: init_bankA_parms_DMNR */
/* Demangled: init_bankA_parms_DMNR */
int init_bankA_parms_DMNR(void);

/* Symbol: ENH_API_HSR_Alloc */
/* Demangled: ENH_API_HSR_Alloc */
int ENH_API_HSR_Alloc(void);

/* Symbol: HP_IIR_coef_a2_16k_set */
/* Demangled: HP_IIR_coef_a2_16k_set */
extern void* HP_IIR_coef_a2_16k_set;

/* Symbol: asdwRealCoefBQ31 */
/* Demangled: asdwRealCoefBQ31 */
extern void* asdwRealCoefBQ31;

/* Symbol: dB_Mult */
/* Demangled: dB_Mult */
int dB_Mult(void);

/* Symbol: ENH_API_Init_Compressor_48K_n */
/* Demangled: ENH_API_Init_Compressor_48K_n */
int ENH_API_Init_Compressor_48K_n(void);

/* Symbol: All_Pass_Filter_Computation */
/* Demangled: All_Pass_Filter_Computation */
int All_Pass_Filter_Computation(void);

/* Symbol: UlDlMusicDet_L1aTblInit */
/* Demangled: UlDlMusicDet_L1aTblInit */
int UlDlMusicDet_L1aTblInit(void);

/* Symbol: nlms_abf_1 */
/* Demangled: nlms_abf_1 */
int nlms_abf_1(void);

/* Symbol: get_HSR_memory */
/* Demangled: get_HSR_memory */
int get_HSR_memory(void);

/* Symbol: STE_Richen_Center_B_t */
/* Demangled: STE_Richen_Center_B_t */
extern void* STE_Richen_Center_B_t;

/* Symbol: sb_pwr_bias_additional_shadow_st */
/* Demangled: sb_pwr_bias_additional_shadow_st */
extern void* sb_pwr_bias_additional_shadow_st;

/* Symbol: vad_fe */
/* Demangled: vad_fe */
int vad_fe(void);

/* Symbol: MBDRC_IIR_struct_init */
/* Demangled: MBDRC_IIR_struct_init */
int MBDRC_IIR_struct_init(void);

/* Symbol: SlowBitReverse256 */
/* Demangled: SlowBitReverse256 */
int SlowBitReverse256(void);

/* Symbol: init_vad_ne */
/* Demangled: init_vad_ne */
int init_vad_ne(void);

/* Symbol: sub_band_CNG_nf_compute */
/* Demangled: sub_band_CNG_nf_compute */
int sub_band_CNG_nf_compute(void);

/* Symbol: RIFFT_1024_Q31 */
/* Demangled: RIFFT_1024_Q31 */
int RIFFT_1024_Q31(void);

/* Symbol: power_limit_xu2 */
/* Demangled: power_limit_xu2 */
extern void* power_limit_xu2;

/* Symbol: ENH_API_Run_Ste */
/* Demangled: ENH_API_Run_Ste */
int ENH_API_Run_Ste(void);

/* Symbol: FIR_Q15_90tap */
/* Demangled: FIR_Q15_90tap */
int FIR_Q15_90tap(void);

/* Symbol: num_taps_shadow_stepsize_abf */
/* Demangled: num_taps_shadow_stepsize_abf */
extern void* num_taps_shadow_stepsize_abf;

/* Symbol: SRC_init */
/* Demangled: SRC_init */
int SRC_init(void);

/* Symbol: sb_shadow_stepsize */
/* Demangled: sb_shadow_stepsize */
extern void* sb_shadow_stepsize;

/* Symbol: Manual_clipping_table */
/* Demangled: Manual_clipping_table */
extern void* Manual_clipping_table;

/* Symbol: mtk_arsi_set_ul_mute */
/* Demangled: mtk_arsi_set_ul_mute */
int mtk_arsi_set_ul_mute(void);

/* Symbol: abf_AGC_Pos_Gain */
/* Demangled: abf_AGC_Pos_Gain */
extern void* abf_AGC_Pos_Gain;

/* Symbol: allocate_HSR_memory */
/* Demangled: allocate_HSR_memory */
int allocate_HSR_memory(void);

/* Symbol: repeat_samples */
/* Demangled: repeat_samples */
extern void* repeat_samples;

/* Symbol: SRC_downsample_4in */
/* Demangled: SRC_downsample_4in */
int SRC_downsample_4in(void);

/* Symbol: debug_mkdir */
/* Demangled: debug_mkdir */
int debug_mkdir(void);

/* Symbol: spatial_filter */
/* Demangled: spatial_filter */
int spatial_filter(void);

/* Symbol: ENH_API_Get_AEC_Memory */
/* Demangled: ENH_API_Get_AEC_Memory */
int ENH_API_Get_AEC_Memory(void);

/* Symbol: num_taps_additional_shadow_st */
/* Demangled: num_taps_additional_shadow_st */
extern void* num_taps_additional_shadow_st;

/* Symbol: ENH_API_Init_DMNR_n */
/* Demangled: ENH_API_Init_DMNR_n */
int ENH_API_Init_DMNR_n(void);

/* Symbol: RFFT_512_Q31 */
/* Demangled: RFFT_512_Q31 */
int RFFT_512_Q31(void);

/* Symbol: Table_D2T */
/* Demangled: Table_D2T */
extern void* Table_D2T;

/* Symbol: CLARITY_Attack_Time */
/* Demangled: CLARITY_Attack_Time */
extern void* CLARITY_Attack_Time;

/* Symbol: IIR_coef_a2_8k_set1 */
/* Demangled: IIR_coef_a2_8k_set1 */
extern void* IIR_coef_a2_8k_set1;

/* Symbol: BitRev */
/* Demangled: BitRev */
int BitRev(void);

/* Symbol: full_band_es */
/* Demangled: full_band_es */
int full_band_es(void);

/* Symbol: ABF_CB_post_filtering_spk */
/* Demangled: ABF_CB_post_filtering_spk */
int ABF_CB_post_filtering_spk(void);

/* Symbol: IIR_coef_b2_16k_set1 */
/* Demangled: IIR_coef_b2_16k_set1 */
extern void* IIR_coef_b2_16k_set1;

/* Symbol: IIR_coef_a2_8k_set2 */
/* Demangled: IIR_coef_a2_8k_set2 */
extern void* IIR_coef_a2_8k_set2;

/* Symbol: NDC_UL_Comfort_Noise */
/* Demangled: NDC_UL_Comfort_Noise */
int NDC_UL_Comfort_Noise(void);

/* Symbol: VAD_TH_Table */
/* Demangled: VAD_TH_Table */
extern void* VAD_TH_Table;

/* Symbol: NR_ToneDetection */
/* Demangled: NR_ToneDetection */
int NR_ToneDetection(void);

/* Symbol: ENH_API_Update_Parameter_DMNR */
/* Demangled: ENH_API_Update_Parameter_DMNR */
int ENH_API_Update_Parameter_DMNR(void);

/* Symbol: ABF_SB */
/* Demangled: ABF_SB */
int ABF_SB(void);

/* Symbol: ENH_API_Run_Hsr */
/* Demangled: ENH_API_Run_Hsr */
int ENH_API_Run_Hsr(void);

/* Symbol: IIR_coef_b2_16k_set2 */
/* Demangled: IIR_coef_b2_16k_set2 */
extern void* IIR_coef_b2_16k_set2;

/* Symbol: IIR_coef_a2_8k_set3 */
/* Demangled: IIR_coef_a2_8k_set3 */
extern void* IIR_coef_a2_8k_set3;

/* Symbol: NR_48K_DB_LINEAR */
/* Demangled: NR_48K_DB_LINEAR */
extern void* NR_48K_DB_LINEAR;

/* Symbol: dynamic_link_arsi_assign_lib_fp */
/* Demangled: dynamic_link_arsi_assign_lib_fp */
int dynamic_link_arsi_assign_lib_fp(void);

/* Symbol: HSR_HB_Coeff */
/* Demangled: HSR_HB_Coeff */
extern void* HSR_HB_Coeff;

/* Symbol: Gain_AR_Rate_16 */
/* Demangled: Gain_AR_Rate_16 */
extern void* Gain_AR_Rate_16;

/* Symbol: HP_IIR_coef_a1_16k_set */
/* Demangled: HP_IIR_coef_a1_16k_set */
extern void* HP_IIR_coef_a1_16k_set;

/* Symbol: IIR_coef_b2_16k_set3 */
/* Demangled: IIR_coef_b2_16k_set3 */
extern void* IIR_coef_b2_16k_set3;

/* Symbol: IIR_coef_a2_8k_set4 */
/* Demangled: IIR_coef_a2_8k_set4 */
extern void* IIR_coef_a2_8k_set4;

/* Symbol: abf_sb_pwr_bias_normal */
/* Demangled: abf_sb_pwr_bias_normal */
extern void* abf_sb_pwr_bias_normal;

/* Symbol: abf_mode_init_spk */
/* Demangled: abf_mode_init_spk */
int abf_mode_init_spk(void);

/* Symbol: IIR_coef_b2_16k_set4 */
/* Demangled: IIR_coef_b2_16k_set4 */
extern void* IIR_coef_b2_16k_set4;

/* Symbol: DeEmpahsisFIR_coef */
/* Demangled: DeEmpahsisFIR_coef */
extern void* DeEmpahsisFIR_coef;

/* Symbol: fe_delay_ds_hist */
/* Demangled: fe_delay_ds_hist */
extern void* fe_delay_ds_hist;

/* Symbol: STE_Widen_Side03_t */
/* Demangled: STE_Widen_Side03_t */
extern void* STE_Widen_Side03_t;

/* Symbol: init_bankA_parms */
/* Demangled: init_bankA_parms */
int init_bankA_parms(void);

/* Symbol: NR_SuppressGainEst */
/* Demangled: NR_SuppressGainEst */
int NR_SuppressGainEst(void);

/* Symbol: Hgain_smooth_threshold_table */
/* Demangled: Hgain_smooth_threshold_table */
extern void* Hgain_smooth_threshold_table;

/* Symbol: gcc_phat */
/* Demangled: gcc_phat */
int gcc_phat(void);

/* Symbol: UAD_FB */
/* Demangled: UAD_FB */
int UAD_FB(void);

/* Symbol: UL_FrontEnd_16k */
/* Demangled: UL_FrontEnd_16k */
int UL_FrontEnd_16k(void);

/* Symbol: IIR_coef_b2_16k_set5 */
/* Demangled: IIR_coef_b2_16k_set5 */
extern void* IIR_coef_b2_16k_set5;

/* Symbol: mtk_arsi_update_param */
/* Demangled: mtk_arsi_update_param */
int mtk_arsi_update_param(void);

/* Symbol: MMD_level_table */
/* Demangled: MMD_level_table */
extern void* MMD_level_table;

/* Symbol: VT_VAD_process */
/* Demangled: VT_VAD_process */
int VT_VAD_process(void);

/* Symbol: power_limit_x */
/* Demangled: power_limit_x */
extern void* power_limit_x;

/* Symbol: IIR_coef_b2_16k_set6 */
/* Demangled: IIR_coef_b2_16k_set6 */
extern void* IIR_coef_b2_16k_set6;

/* Symbol: normalize_fun_32 */
/* Demangled: normalize_fun_32 */
int normalize_fun_32(void);

/* Symbol: IIR_coef_b2_16k_set7 */
/* Demangled: IIR_coef_b2_16k_set7 */
extern void* IIR_coef_b2_16k_set7;

/* Symbol: UL_IIR_coef_a1_16k_set1 */
/* Demangled: UL_IIR_coef_a1_16k_set1 */
extern void* UL_IIR_coef_a1_16k_set1;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: subframe_num */
/* Demangled: subframe_num */
extern void* subframe_num;

/* Symbol: NR_Fixed_sqrt */
/* Demangled: NR_Fixed_sqrt */
int NR_Fixed_sqrt(void);

/* Symbol: UL_IIR_coef_a1_16k_set2 */
/* Demangled: UL_IIR_coef_a1_16k_set2 */
extern void* UL_IIR_coef_a1_16k_set2;

/* Symbol: ENH_API_Alloc */
/* Demangled: ENH_API_Alloc */
int ENH_API_Alloc(void);

/* Symbol: md32_aru_sum */
/* Demangled: md32_aru_sum */
int md32_aru_sum(void);

/* Symbol: md32_fmuld */
/* Demangled: md32_fmuld */
int md32_fmuld(void);

/* Symbol: Cal_SingleNR */
/* Demangled: Cal_SingleNR */
int Cal_SingleNR(void);

/* Symbol: init_DMNR_par_sys_spk */
/* Demangled: init_DMNR_par_sys_spk */
int init_DMNR_par_sys_spk(void);

/* Symbol: Expender */
/* Demangled: Expender */
int Expender(void);

/* Symbol: UL_IIR_coef_a1_16k_set3 */
/* Demangled: UL_IIR_coef_a1_16k_set3 */
extern void* UL_IIR_coef_a1_16k_set3;

/* Symbol: ENH_API_SCH_Alloc */
/* Demangled: ENH_API_SCH_Alloc */
int ENH_API_SCH_Alloc(void);

/* Symbol: shl_pwr_bias */
/* Demangled: shl_pwr_bias */
int shl_pwr_bias(void);

/* Symbol: mtk_arsi_get_key_value_pair */
/* Demangled: mtk_arsi_get_key_value_pair */
int mtk_arsi_get_key_value_pair(void);

/* Symbol: pf_WB */
/* Demangled: pf_WB */
extern void* pf_WB;

/* Symbol: sb_pwr_bias_additional_shadow */
/* Demangled: sb_pwr_bias_additional_shadow */
extern void* sb_pwr_bias_additional_shadow;

/* Symbol: L_multNs */
/* Demangled: L_multNs */
int L_multNs(void);

/* Symbol: bp2_target_gain */
/* Demangled: bp2_target_gain */
extern void* bp2_target_gain;

/* Symbol: ANE_dB_Gain_Table */
/* Demangled: ANE_dB_Gain_Table */
extern void* ANE_dB_Gain_Table;

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: init_sb_nlms */
/* Demangled: init_sb_nlms */
int init_sb_nlms(void);

/* Symbol: mtk_arsi_get_lib_version */
/* Demangled: mtk_arsi_get_lib_version */
int mtk_arsi_get_lib_version(void);

/* Symbol: dctcos_1_WB */
/* Demangled: dctcos_1_WB */
extern void* dctcos_1_WB;

/* Symbol: RIFFT_32_Q31 */
/* Demangled: RIFFT_32_Q31 */
int RIFFT_32_Q31(void);

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: fb_ASLR_noise_esti_spk */
/* Demangled: fb_ASLR_noise_esti_spk */
int fb_ASLR_noise_esti_spk(void);

/* Symbol: SF_DL */
/* Demangled: SF_DL */
int SF_DL(void);

/* Symbol: MBDRC_Pores */
/* Demangled: MBDRC_Pores */
extern void* MBDRC_Pores;

/* Symbol: mtk_arsi_query_max_debug_dump_buf_size */
/* Demangled: mtk_arsi_query_max_debug_dump_buf_size */
int mtk_arsi_query_max_debug_dump_buf_size(void);

/* Symbol: WB_NR_NoiseEst */
/* Demangled: WB_NR_NoiseEst */
int WB_NR_NoiseEst(void);

/* Symbol: ENH_API_Get_SCH_Memory */
/* Demangled: ENH_API_Get_SCH_Memory */
int ENH_API_Get_SCH_Memory(void);

/* Symbol: ENH_Mute_Begin_UL */
/* Demangled: ENH_Mute_Begin_UL */
int ENH_Mute_Begin_UL(void);

/* Symbol: ds_index */
/* Demangled: ds_index */
extern void* ds_index;

/* Symbol: HSR_LB_Coeff_DS_0 */
/* Demangled: HSR_LB_Coeff_DS_0 */
extern void* HSR_LB_Coeff_DS_0;

/* Symbol: fir_48K_960pt_36tap */
/* Demangled: fir_48K_960pt_36tap */
int fir_48K_960pt_36tap(void);

/* Symbol: FSH */
/* Demangled: FSH */
int FSH(void);

/* Symbol: shl_pwr_bias_abf_spk */
/* Demangled: shl_pwr_bias_abf_spk */
int shl_pwr_bias_abf_spk(void);

/* Symbol: HSR_LB_Coeff_DS_1 */
/* Demangled: HSR_LB_Coeff_DS_1 */
extern void* HSR_LB_Coeff_DS_1;

/* Symbol: MBDRC_HalfBand_IIR_Coefs_Init */
/* Demangled: MBDRC_HalfBand_IIR_Coefs_Init */
int MBDRC_HalfBand_IIR_Coefs_Init(void);

/* Symbol: SRC_downsample_x2 */
/* Demangled: SRC_downsample_x2 */
int SRC_downsample_x2(void);

/* Symbol: md32_fmuld_add */
/* Demangled: md32_fmuld_add */
int md32_fmuld_add(void);

/* Symbol: MMD_shift_table */
/* Demangled: MMD_shift_table */
extern void* MMD_shift_table;

/* Symbol: nlms_abf_spk */
/* Demangled: nlms_abf_spk */
int nlms_abf_spk(void);

/* Symbol: HSR_LB_Coeff_DS_2 */
/* Demangled: HSR_LB_Coeff_DS_2 */
extern void* HSR_LB_Coeff_DS_2;

/* Symbol: NDC_BankB_Window_SWB */
/* Demangled: NDC_BankB_Window_SWB */
extern void* NDC_BankB_Window_SWB;

/* Symbol: sb_additional_shadow_stepsize */
/* Demangled: sb_additional_shadow_stepsize */
extern void* sb_additional_shadow_stepsize;

/* Symbol: num_taps_abf */
/* Demangled: num_taps_abf */
extern void* num_taps_abf;

/* Symbol: Cal_FFT */
/* Demangled: Cal_FFT */
int Cal_FFT(void);

/* Symbol: ABF_postfiltering_spk */
/* Demangled: ABF_postfiltering_spk */
int ABF_postfiltering_spk(void);

/* Symbol: Table_T2D */
/* Demangled: Table_T2D */
extern void* Table_T2D;

/* Symbol: ENH_API_Run_Ndc_DL */
/* Demangled: ENH_API_Run_Ndc_DL */
int ENH_API_Run_Ndc_DL(void);

/* Symbol: ENH_API_Process */
/* Demangled: ENH_API_Process */
int ENH_API_Process(void);

/* Symbol: NR_PreSuppressGainEst */
/* Demangled: NR_PreSuppressGainEst */
int NR_PreSuppressGainEst(void);

/* Symbol: ENH_API_Init_MR_DL_n */
/* Demangled: ENH_API_Init_MR_DL_n */
int ENH_API_Init_MR_DL_n(void);

/* Symbol: EPC_handling */
/* Demangled: EPC_handling */
int EPC_handling(void);

/* Symbol: mtk_arsi_process_dl_buf */
/* Demangled: mtk_arsi_process_dl_buf */
int mtk_arsi_process_dl_buf(void);

/* Symbol: Fixed_Divide_48K */
/* Demangled: Fixed_Divide_48K */
int Fixed_Divide_48K(void);

/* Symbol: DMNR_PD_THD */
/* Demangled: DMNR_PD_THD */
extern void* DMNR_PD_THD;

/* Symbol: ABF_Delay_Calibration */
/* Demangled: ABF_Delay_Calibration */
int ABF_Delay_Calibration(void);

/* Symbol: shl_pwr_bias_abf */
/* Demangled: shl_pwr_bias_abf */
int shl_pwr_bias_abf(void);

/* Symbol: init_PF_spk */
/* Demangled: init_PF_spk */
int init_PF_spk(void);

/* Symbol: div_s_32_vot */
/* Demangled: div_s_32_vot */
int div_s_32_vot(void);

/* Symbol: FIR_Q15_36tap */
/* Demangled: FIR_Q15_36tap */
int FIR_Q15_36tap(void);

/* Symbol: md32_muld */
/* Demangled: md32_muld */
int md32_muld(void);

/* Symbol: ENH_API_Init_MR_n */
/* Demangled: ENH_API_Init_MR_n */
int ENH_API_Init_MR_n(void);

/* Symbol: IIR_coef_a2_16k_set1 */
/* Demangled: IIR_coef_a2_16k_set1 */
extern void* IIR_coef_a2_16k_set1;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: dB2Linear_neg */
/* Demangled: dB2Linear_neg */
extern void* dB2Linear_neg;

/* Symbol: IIR_coef_a2_16k_set2 */
/* Demangled: IIR_coef_a2_16k_set2 */
extern void* IIR_coef_a2_16k_set2;

/* Symbol: nonlinear_echo_est */
/* Demangled: nonlinear_echo_est */
int nonlinear_echo_est(void);

/* Symbol: free_memory_DMNR_spk */
/* Demangled: free_memory_DMNR_spk */
int free_memory_DMNR_spk(void);

/* Symbol: MBDRC_PeakLimiter */
/* Demangled: MBDRC_PeakLimiter */
int MBDRC_PeakLimiter(void);

/* Symbol: IIR_coef_a2_16k_set3 */
/* Demangled: IIR_coef_a2_16k_set3 */
extern void* IIR_coef_a2_16k_set3;

/* Symbol: IIR_coef_b1_16k_set1 */
/* Demangled: IIR_coef_b1_16k_set1 */
extern void* IIR_coef_b1_16k_set1;

/* Symbol: ENH_API_Init_STE_n */
/* Demangled: ENH_API_Init_STE_n */
int ENH_API_Init_STE_n(void);

/* Symbol: ENH_API_Get_DMNR_Memory */
/* Demangled: ENH_API_Get_DMNR_Memory */
int ENH_API_Get_DMNR_Memory(void);

/* Symbol: abf_AGC_Neg_Gain */
/* Demangled: abf_AGC_Neg_Gain */
extern void* abf_AGC_Neg_Gain;

/* Symbol: UL_FrontEnd_48k */
/* Demangled: UL_FrontEnd_48k */
int UL_FrontEnd_48k(void);

/* Symbol: IIR_coef_a2_16k_set4 */
/* Demangled: IIR_coef_a2_16k_set4 */
extern void* IIR_coef_a2_16k_set4;

/* Symbol: IIR_coef_b1_16k_set2 */
/* Demangled: IIR_coef_b1_16k_set2 */
extern void* IIR_coef_b1_16k_set2;

/* Symbol: UL_IIR_coef_b1_8k_set1 */
/* Demangled: UL_IIR_coef_b1_8k_set1 */
extern void* UL_IIR_coef_b1_8k_set1;

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: ABF_Complex_FBF_and_BM */
/* Demangled: ABF_Complex_FBF_and_BM */
int ABF_Complex_FBF_and_BM(void);

/* Symbol: ABF_AGC_Gain_Compensation_spk */
/* Demangled: ABF_AGC_Gain_Compensation_spk */
int ABF_AGC_Gain_Compensation_spk(void);

/* Symbol: UL_FrontEnd_init */
/* Demangled: UL_FrontEnd_init */
int UL_FrontEnd_init(void);

/* Symbol: IIR_coef_a2_16k_set5 */
/* Demangled: IIR_coef_a2_16k_set5 */
extern void* IIR_coef_a2_16k_set5;

/* Symbol: IIR_coef_b1_16k_set3 */
/* Demangled: IIR_coef_b1_16k_set3 */
extern void* IIR_coef_b1_16k_set3;

/* Symbol: UL_IIR_coef_b1_8k_set2 */
/* Demangled: UL_IIR_coef_b1_8k_set2 */
extern void* UL_IIR_coef_b1_8k_set2;

/* Symbol: sqrt_fr1x16 */
/* Demangled: sqrt_fr1x16 */
int sqrt_fr1x16(void);

/* Symbol: IIR_allpass */
/* Demangled: IIR_allpass */
int IIR_allpass(void);

/* Symbol: IIR_coef_a2_16k_set6 */
/* Demangled: IIR_coef_a2_16k_set6 */
extern void* IIR_coef_a2_16k_set6;

/* Symbol: IIR_coef_b1_16k_set4 */
/* Demangled: IIR_coef_b1_16k_set4 */
extern void* IIR_coef_b1_16k_set4;

/* Symbol: UL_IIR_coef_b1_8k_set3 */
/* Demangled: UL_IIR_coef_b1_8k_set3 */
extern void* UL_IIR_coef_b1_8k_set3;

/* Symbol: ENH_API_NDC_Alloc */
/* Demangled: ENH_API_NDC_Alloc */
int ENH_API_NDC_Alloc(void);

/* Symbol: us_hist */
/* Demangled: us_hist */
extern void* us_hist;

/* Symbol: IIR_coef_a2_16k_set7 */
/* Demangled: IIR_coef_a2_16k_set7 */
extern void* IIR_coef_a2_16k_set7;

/* Symbol: IIR_coef_b1_16k_set5 */
/* Demangled: IIR_coef_b1_16k_set5 */
extern void* IIR_coef_b1_16k_set5;

/* Symbol: alias_bp_flt */
/* Demangled: alias_bp_flt */
extern void* alias_bp_flt;

/* Symbol: NR_Strength_Table48k */
/* Demangled: NR_Strength_Table48k */
extern void* NR_Strength_Table48k;

/* Symbol: HGain_time_smoothing_spk */
/* Demangled: HGain_time_smoothing_spk */
int HGain_time_smoothing_spk(void);

/* Symbol: IIR_coef_b1_16k_set6 */
/* Demangled: IIR_coef_b1_16k_set6 */
extern void* IIR_coef_b1_16k_set6;

/* Symbol: linear_mdb2 */
/* Demangled: linear_mdb2 */
int linear_mdb2(void);

/* Symbol: IIR_coef_b1_16k_set7 */
/* Demangled: IIR_coef_b1_16k_set7 */
extern void* IIR_coef_b1_16k_set7;

/* Symbol: ENH_API_STE_Alloc */
/* Demangled: ENH_API_STE_Alloc */
int ENH_API_STE_Alloc(void);

/* Symbol: fir_48K */
/* Demangled: fir_48K */
int fir_48K(void);

/* Symbol: high_flt_NB */
/* Demangled: high_flt_NB */
extern void* high_flt_NB;

/* Symbol: L_msu_i_40 */
/* Demangled: L_msu_i_40 */
int L_msu_i_40(void);

/* Symbol: NR_SBSynthesis_48K */
/* Demangled: NR_SBSynthesis_48K */
int NR_SBSynthesis_48K(void);

/* Symbol: nlms_abf */
/* Demangled: nlms_abf */
int nlms_abf(void);

/* Symbol: init_bankB_parms_DMNR_spk */
/* Demangled: init_bankB_parms_DMNR_spk */
int init_bankB_parms_DMNR_spk(void);

/* Symbol: CS2LR */
/* Demangled: CS2LR */
int CS2LR(void);

/* Symbol: init_AGC_parms */
/* Demangled: init_AGC_parms */
int init_AGC_parms(void);

/* Symbol: ar1_filter_3_32 */
/* Demangled: ar1_filter_3_32 */
int ar1_filter_3_32(void);

/* Symbol: SF */
/* Demangled: SF */
int SF(void);

/* Symbol: Gama_Interpolation */
/* Demangled: Gama_Interpolation */
int Gama_Interpolation(void);

/* Symbol: LPF */
/* Demangled: LPF */
extern void* LPF;

/* Symbol: pf_16_12_128_WB */
/* Demangled: pf_16_12_128_WB */
extern void* pf_16_12_128_WB;

/* Symbol: extract_l_64 */
/* Demangled: extract_l_64 */
int extract_l_64(void);

/* Symbol: NR_KBD_Window_480p */
/* Demangled: NR_KBD_Window_480p */
extern void* NR_KBD_Window_480p;

/* Symbol: ENH_API_Run_MR_DL */
/* Demangled: ENH_API_Run_MR_DL */
int ENH_API_Run_MR_DL(void);

/* Symbol: subframe_num_switch */
/* Demangled: subframe_num_switch */
extern void* subframe_num_switch;

/* Symbol: MusicEst */
/* Demangled: MusicEst */
int MusicEst(void);

/* Symbol: Radix4BflyFastNDC_test32_smmul */
/* Demangled: Radix4BflyFastNDC_test32_smmul */
int Radix4BflyFastNDC_test32_smmul(void);

/* Symbol: dctcos_NB */
/* Demangled: dctcos_NB */
extern void* dctcos_NB;

/* Symbol: ENH_API_Init_FE */
/* Demangled: ENH_API_Init_FE */
int ENH_API_Init_FE(void);

/* Symbol: Normalized_Division */
/* Demangled: Normalized_Division */
int Normalized_Division(void);

/* Symbol: init_ASLR_parms */
/* Demangled: init_ASLR_parms */
int init_ASLR_parms(void);

/* Symbol: Well_cal_Cal_VAD */
/* Demangled: Well_cal_Cal_VAD */
int Well_cal_Cal_VAD(void);

/* Symbol: max_exp */
/* Demangled: max_exp */
int max_exp(void);

/* Symbol: IIR_64 */
/* Demangled: IIR_64 */
int IIR_64(void);

/* Symbol: ULDL_GainControl_Init */
/* Demangled: ULDL_GainControl_Init */
int ULDL_GainControl_Init(void);

/* Symbol: AEC_fe_sample_based_processing */
/* Demangled: AEC_fe_sample_based_processing */
int AEC_fe_sample_based_processing(void);

/* Symbol: Graphical_UI_DRC_Mono */
/* Demangled: Graphical_UI_DRC_Mono */
int Graphical_UI_DRC_Mono(void);

/* Symbol: Graphical_UI_DRC_Stereo */
/* Demangled: Graphical_UI_DRC_Stereo */
int Graphical_UI_DRC_Stereo(void);

/* Symbol: Search_Max */
/* Demangled: Search_Max */
int Search_Max(void);

/* Symbol: init_wind */
/* Demangled: init_wind */
int init_wind(void);

/* Symbol: stepsize_slow_bound */
/* Demangled: stepsize_slow_bound */
extern void* stepsize_slow_bound;

/* Symbol: comfort_noise_generate */
/* Demangled: comfort_noise_generate */
int comfort_noise_generate(void);

/* Symbol: RFFT_1024_Q31 */
/* Demangled: RFFT_1024_Q31 */
int RFFT_1024_Q31(void);

/* Symbol: free_compressor_48K */
/* Demangled: free_compressor_48K */
int free_compressor_48K(void);

/* Symbol: twid_tab256_fast */
/* Demangled: twid_tab256_fast */
extern void* twid_tab256_fast;

/* Symbol: L_mult_40 */
/* Demangled: L_mult_40 */
int L_mult_40(void);

/* Symbol: NR_PostProcessing_48K */
/* Demangled: NR_PostProcessing_48K */
int NR_PostProcessing_48K(void);

/* Symbol: NDC_BankB_Window */
/* Demangled: NDC_BankB_Window */
extern void* NDC_BankB_Window;

/* Symbol: DL_ClippingDetection */
/* Demangled: DL_ClippingDetection */
int DL_ClippingDetection(void);

/* Symbol: ENH_API_Get_Memory */
/* Demangled: ENH_API_Get_Memory */
int ENH_API_Get_Memory(void);

/* Symbol: Fixed_sqrt_NDC */
/* Demangled: Fixed_sqrt_NDC */
int Fixed_sqrt_NDC(void);

/* Symbol: BWE_nlp */
/* Demangled: BWE_nlp */
int BWE_nlp(void);

/* Symbol: IIR_coef_b1_8k_set1 */
/* Demangled: IIR_coef_b1_8k_set1 */
extern void* IIR_coef_b1_8k_set1;

/* Symbol: sub_band_sig_nf_compute */
/* Demangled: sub_band_sig_nf_compute */
int sub_band_sig_nf_compute(void);

/* Symbol: NDC_app_sqrt */
/* Demangled: NDC_app_sqrt */
int NDC_app_sqrt(void);

/* Symbol: HSR_HB_Filter */
/* Demangled: HSR_HB_Filter */
int HSR_HB_Filter(void);

/* Symbol: IIR_coef_a1_16k_set1 */
/* Demangled: IIR_coef_a1_16k_set1 */
extern void* IIR_coef_a1_16k_set1;

/* Symbol: IIR_coef_b1_8k_set2 */
/* Demangled: IIR_coef_b1_8k_set2 */
extern void* IIR_coef_b1_8k_set2;

/* Symbol: STE_1st_IIR_Stereo */
/* Demangled: STE_1st_IIR_Stereo */
int STE_1st_IIR_Stereo(void);

/* Symbol: mtk_arsi_query_working_buf_size */
/* Demangled: mtk_arsi_query_working_buf_size */
int mtk_arsi_query_working_buf_size(void);

/* Symbol: debug_dump */
/* Demangled: debug_dump */
int debug_dump(void);

/* Symbol: Tolerence_fract */
/* Demangled: Tolerence_fract */
extern void* Tolerence_fract;

/* Symbol: abf_sf_bittrue_fun */
/* Demangled: abf_sf_bittrue_fun */
int abf_sf_bittrue_fun(void);

/* Symbol: sb_ASLR_noise_esti */
/* Demangled: sb_ASLR_noise_esti */
int sb_ASLR_noise_esti(void);

/* Symbol: IIR_coef_a1_16k_set2 */
/* Demangled: IIR_coef_a1_16k_set2 */
extern void* IIR_coef_a1_16k_set2;

/* Symbol: IIR_coef_b1_8k_set3 */
/* Demangled: IIR_coef_b1_8k_set3 */
extern void* IIR_coef_b1_8k_set3;

/* Symbol: aec_free_memory */
/* Demangled: aec_free_memory */
int aec_free_memory(void);

/* Symbol: get_compressor_48K_momory */
/* Demangled: get_compressor_48K_momory */
int get_compressor_48K_momory(void);

/* Symbol: NDC_Smooth */
/* Demangled: NDC_Smooth */
int NDC_Smooth(void);

/* Symbol: NR_SpectrumSmoothing */
/* Demangled: NR_SpectrumSmoothing */
int NR_SpectrumSmoothing(void);

/* Symbol: dctcos_2_NB */
/* Demangled: dctcos_2_NB */
extern void* dctcos_2_NB;

/* Symbol: ENH_API_Get_DMNR_spk_Memory */
/* Demangled: ENH_API_Get_DMNR_spk_Memory */
int ENH_API_Get_DMNR_spk_Memory(void);

/* Symbol: IIR_coef_a1_16k_set3 */
/* Demangled: IIR_coef_a1_16k_set3 */
extern void* IIR_coef_a1_16k_set3;

/* Symbol: IIR_coef_b1_8k_set4 */
/* Demangled: IIR_coef_b1_8k_set4 */
extern void* IIR_coef_b1_8k_set4;

/* Symbol: ABF_DIF_FFT_spk */
/* Demangled: ABF_DIF_FFT_spk */
int ABF_DIF_FFT_spk(void);

/* Symbol: IIR_a1_WB */
/* Demangled: IIR_a1_WB */
extern void* IIR_a1_WB;

/* Symbol: IIR_coef_a1_16k_set4 */
/* Demangled: IIR_coef_a1_16k_set4 */
extern void* IIR_coef_a1_16k_set4;

/* Symbol: UL_IIR_coef_a1_8k_set1 */
/* Demangled: UL_IIR_coef_a1_8k_set1 */
extern void* UL_IIR_coef_a1_8k_set1;

/* Symbol: NDC_DL_Comfort_Noise */
/* Demangled: NDC_DL_Comfort_Noise */
int NDC_DL_Comfort_Noise(void);

/* Symbol: vad_ne */
/* Demangled: vad_ne */
int vad_ne(void);

/* Symbol: ABF_Integer_Delay */
/* Demangled: ABF_Integer_Delay */
int ABF_Integer_Delay(void);

/* Symbol: IIR_coef_a1_16k_set5 */
/* Demangled: IIR_coef_a1_16k_set5 */
extern void* IIR_coef_a1_16k_set5;

/* Symbol: UL_IIR_coef_a1_8k_set2 */
/* Demangled: UL_IIR_coef_a1_8k_set2 */
extern void* UL_IIR_coef_a1_8k_set2;

/* Symbol: Tolerence_int */
/* Demangled: Tolerence_int */
extern void* Tolerence_int;

/* Symbol: init_abf_nlms_spk */
/* Demangled: init_abf_nlms_spk */
int init_abf_nlms_spk(void);

/* Symbol: phasor_re */
/* Demangled: phasor_re */
extern void* phasor_re;

/* Symbol: HSR_SRC_Coeff_DS_0 */
/* Demangled: HSR_SRC_Coeff_DS_0 */
extern void* HSR_SRC_Coeff_DS_0;

/* Symbol: BWE_Init */
/* Demangled: BWE_Init */
int BWE_Init(void);

/* Symbol: IIR_coef_a1_16k_set6 */
/* Demangled: IIR_coef_a1_16k_set6 */
extern void* IIR_coef_a1_16k_set6;

/* Symbol: UL_IIR_coef_a1_8k_set3 */
/* Demangled: UL_IIR_coef_a1_8k_set3 */
extern void* UL_IIR_coef_a1_8k_set3;

/* Symbol: fe_us_hist */
/* Demangled: fe_us_hist */
extern void* fe_us_hist;

/* Symbol: sb_pwr_bias */
/* Demangled: sb_pwr_bias */
extern void* sb_pwr_bias;

/* Symbol: mtk_arsi_set_ul_digital_gain */
/* Demangled: mtk_arsi_set_ul_digital_gain */
int mtk_arsi_set_ul_digital_gain(void);

/* Symbol: HSR_SRC_Coeff_DS_1 */
/* Demangled: HSR_SRC_Coeff_DS_1 */
extern void* HSR_SRC_Coeff_DS_1;

/* Symbol: IIR_coef_a1_16k_set7 */
/* Demangled: IIR_coef_a1_16k_set7 */
extern void* IIR_coef_a1_16k_set7;

/* Symbol: pre_lp_flt */
/* Demangled: pre_lp_flt */
extern void* pre_lp_flt;

/* Symbol: NR_agg_mode_setting */
/* Demangled: NR_agg_mode_setting */
int NR_agg_mode_setting(void);

/* Symbol: free_STE_memory */
/* Demangled: free_STE_memory */
int free_STE_memory(void);

/* Symbol: HSR_Init */
/* Demangled: HSR_Init */
int HSR_Init(void);

/* Symbol: HSR_SRC_Coeff_DS_2 */
/* Demangled: HSR_SRC_Coeff_DS_2 */
extern void* HSR_SRC_Coeff_DS_2;

/* Symbol: WB_NR_Schedule */
/* Demangled: WB_NR_Schedule */
int WB_NR_Schedule(void);

/* Symbol: FFT_scaling */
/* Demangled: FFT_scaling */
int FFT_scaling(void);

/* Symbol: normalize_fun */
/* Demangled: normalize_fun */
int normalize_fun(void);

/* Symbol: exp_B_table */
/* Demangled: exp_B_table */
extern void* exp_B_table;

/* Symbol: ENH_API_Free_Compressor_48K */
/* Demangled: ENH_API_Free_Compressor_48K */
int ENH_API_Free_Compressor_48K(void);

/* Symbol: init_SF_parms */
/* Demangled: init_SF_parms */
int init_SF_parms(void);

/* Symbol: VCE2o0_DM_THR_t */
/* Demangled: VCE2o0_DM_THR_t */
extern void* VCE2o0_DM_THR_t;

/* Symbol: power_limit_xd2 */
/* Demangled: power_limit_xd2 */
extern void* power_limit_xd2;

/* Symbol: us_index */
/* Demangled: us_index */
extern void* us_index;

/* Symbol: est_echo_weighting */
/* Demangled: est_echo_weighting */
extern void* est_echo_weighting;

/* Symbol: ENH_API_Run_Compressor_48K_Rear */
/* Demangled: ENH_API_Run_Compressor_48K_Rear */
int ENH_API_Run_Compressor_48K_Rear(void);

/* Symbol: adaptive_beamforming_spk */
/* Demangled: adaptive_beamforming_spk */
int adaptive_beamforming_spk(void);

/* Symbol: NR_Strength_Table */
/* Demangled: NR_Strength_Table */
extern void* NR_Strength_Table;

/* Symbol: init_vad_comb */
/* Demangled: init_vad_comb */
int init_vad_comb(void);

/* Symbol: dctcos_3_WB */
/* Demangled: dctcos_3_WB */
extern void* dctcos_3_WB;

/* Symbol: Rad4fft256_test32 */
/* Demangled: Rad4fft256_test32 */
int Rad4fft256_test32(void);

/* Symbol: UlMusicDetL1aTblInit */
/* Demangled: UlMusicDetL1aTblInit */
extern void* UlMusicDetL1aTblInit;

/* Symbol: RFFT_32_Q31 */
/* Demangled: RFFT_32_Q31 */
int RFFT_32_Q31(void);

/* Symbol: init_agc_comp */
/* Demangled: init_agc_comp */
int init_agc_comp(void);

/* Symbol: awBitRevTable */
/* Demangled: awBitRevTable */
extern void* awBitRevTable;

/* Symbol: dB2Linear_pos */
/* Demangled: dB2Linear_pos */
extern void* dB2Linear_pos;

/* Symbol: ENH_API_Free_DMNR */
/* Demangled: ENH_API_Free_DMNR */
int ENH_API_Free_DMNR(void);

/* Symbol: ENH_API_Get_HSR_Memory */
/* Demangled: ENH_API_Get_HSR_Memory */
int ENH_API_Get_HSR_Memory(void);

/* Symbol: UL_DRC */
/* Demangled: UL_DRC */
int UL_DRC(void);

/* Symbol: ModifyW32W16_mult_STE */
/* Demangled: ModifyW32W16_mult_STE */
int ModifyW32W16_mult_STE(void);

/* Symbol: vad_frontend_aec */
/* Demangled: vad_frontend_aec */
int vad_frontend_aec(void);

/* Symbol: ENH_API_Rst */
/* Demangled: ENH_API_Rst */
int ENH_API_Rst(void);

/* Symbol: md32_add_sat_dual */
/* Demangled: md32_add_sat_dual */
int md32_add_sat_dual(void);

/* Symbol: AF */
/* Demangled: AF */
int AF(void);

/* Symbol: UlMusicDet_Init */
/* Demangled: UlMusicDet_Init */
int UlMusicDet_Init(void);

/* Symbol: num_taps_shadow */
/* Demangled: num_taps_shadow */
extern void* num_taps_shadow;

/* Symbol: AGC_dB2Linear_neg */
/* Demangled: AGC_dB2Linear_neg */
extern void* AGC_dB2Linear_neg;

/* Symbol: mtk_arsi_set_dl_enhance */
/* Demangled: mtk_arsi_set_dl_enhance */
int mtk_arsi_set_dl_enhance(void);

/* Symbol: sb_ASLR_noise_esti_spk */
/* Demangled: sb_ASLR_noise_esti_spk */
int sb_ASLR_noise_esti_spk(void);

/* Symbol: ENH_API_Get_FE_Memory */
/* Demangled: ENH_API_Get_FE_Memory */
int ENH_API_Get_FE_Memory(void);

/* Symbol: UL_Bounder */
/* Demangled: UL_Bounder */
int UL_Bounder(void);

/* Symbol: ENH_API_Compressor_48K_Alloc */
/* Demangled: ENH_API_Compressor_48K_Alloc */
int ENH_API_Compressor_48K_Alloc(void);

/* Symbol: num_taps_shadow_abf */
/* Demangled: num_taps_shadow_abf */
extern void* num_taps_shadow_abf;

/* Symbol: sb_nlms_stepsize_normal */
/* Demangled: sb_nlms_stepsize_normal */
extern void* sb_nlms_stepsize_normal;

/* Symbol: NDC_DL_Init */
/* Demangled: NDC_DL_Init */
int NDC_DL_Init(void);

/* Symbol: ABF_KBD */
/* Demangled: ABF_KBD */
extern void* ABF_KBD;

/* Symbol: abf_nlms_stepsize_normal */
/* Demangled: abf_nlms_stepsize_normal */
extern void* abf_nlms_stepsize_normal;

/* Symbol: Hgain_smooth_threshold_table_spk */
/* Demangled: Hgain_smooth_threshold_table_spk */
extern void* Hgain_smooth_threshold_table_spk;

/* Symbol: init_PF */
/* Demangled: init_PF */
int init_PF(void);

/* Symbol: dctcos_22_NB */
/* Demangled: dctcos_22_NB */
extern void* dctcos_22_NB;

/* Symbol: FIR_Q15_INIT */
/* Demangled: FIR_Q15_INIT */
int FIR_Q15_INIT(void);

/* Symbol: ne_us_hist */
/* Demangled: ne_us_hist */
extern void* ne_us_hist;

/* Symbol: ENH_API_Free */
/* Demangled: ENH_API_Free */
int ENH_API_Free(void);

/* Symbol: mtk_arsi_set_ul_enhance */
/* Demangled: mtk_arsi_set_ul_enhance */
int mtk_arsi_set_ul_enhance(void);

/* Symbol: NR_CriticalBandEnergyEst */
/* Demangled: NR_CriticalBandEnergyEst */
int NR_CriticalBandEnergyEst(void);

/* Symbol: Cal_parameter_1 */
/* Demangled: Cal_parameter_1 */
int Cal_parameter_1(void);

/* Symbol: IIR_b1_WB */
/* Demangled: IIR_b1_WB */
extern void* IIR_b1_WB;

/* Symbol: HSR_SRC_Filter */
/* Demangled: HSR_SRC_Filter */
int HSR_SRC_Filter(void);

/* Symbol: power_limit */
/* Demangled: power_limit */
extern void* power_limit;

/* Symbol: ENH_API_Run_ANE_UL */
/* Demangled: ENH_API_Run_ANE_UL */
int ENH_API_Run_ANE_UL(void);

/* Symbol: Cal_parameter_2 */
/* Demangled: Cal_parameter_2 */
int Cal_parameter_2(void);

/* Symbol: DMNR_mic1_VAD */
/* Demangled: DMNR_mic1_VAD */
int DMNR_mic1_VAD(void);

/* Symbol: init_bankA_parms_DMNR_spk */
/* Demangled: init_bankA_parms_DMNR_spk */
int init_bankA_parms_DMNR_spk(void);

/* Symbol: DMNR_analysis_filter_spk */
/* Demangled: DMNR_analysis_filter_spk */
int DMNR_analysis_filter_spk(void);

/* Symbol: syn_bp1_flt */
/* Demangled: syn_bp1_flt */
extern void* syn_bp1_flt;

/* Symbol: Cal_parameter_3 */
/* Demangled: Cal_parameter_3 */
int Cal_parameter_3(void);

/* Symbol: IIR_coef_a1_8k_set1 */
/* Demangled: IIR_coef_a1_8k_set1 */
extern void* IIR_coef_a1_8k_set1;

/* Symbol: num_taps_additional_shadow */
/* Demangled: num_taps_additional_shadow */
extern void* num_taps_additional_shadow;

/* Symbol: Cal_parameter_4 */
/* Demangled: Cal_parameter_4 */
int Cal_parameter_4(void);

/* Symbol: ENH_API_Get_MR_Memory */
/* Demangled: ENH_API_Get_MR_Memory */
int ENH_API_Get_MR_Memory(void);

/* Symbol: IIR_coef_a1_8k_set2 */
/* Demangled: IIR_coef_a1_8k_set2 */
extern void* IIR_coef_a1_8k_set2;

/* Symbol: Radix2_Bfly_Inv_Q31 */
/* Demangled: Radix2_Bfly_Inv_Q31 */
int Radix2_Bfly_Inv_Q31(void);

/* Symbol: SP_ENH_ID */
/* Demangled: SP_ENH_ID */
extern void* SP_ENH_ID;

/* Symbol: md32_fmuldsw */
/* Demangled: md32_fmuldsw */
int md32_fmuldsw(void);

/* Symbol: spc_cyc_add */
/* Demangled: spc_cyc_add */
int spc_cyc_add(void);

/* Symbol: abf_sb_pwr_bias_shadow */
/* Demangled: abf_sb_pwr_bias_shadow */
extern void* abf_sb_pwr_bias_shadow;

/* Symbol: sqrt_coef */
/* Demangled: sqrt_coef */
extern void* sqrt_coef;

/* Symbol: allocate_memory_DMNR_spk */
/* Demangled: allocate_memory_DMNR_spk */
int allocate_memory_DMNR_spk(void);

/* Symbol: IIR_coef_a1_8k_set3 */
/* Demangled: IIR_coef_a1_8k_set3 */
extern void* IIR_coef_a1_8k_set3;

/* Symbol: asdwRealCoefAQ31 */
/* Demangled: asdwRealCoefAQ31 */
extern void* asdwRealCoefAQ31;

/* Symbol: StereoEnhance */
/* Demangled: StereoEnhance */
int StereoEnhance(void);

/* Symbol: STE_Richen_Side_H_t */
/* Demangled: STE_Richen_Side_H_t */
extern void* STE_Richen_Side_H_t;

/* Symbol: ABF_PF_Under_Estimation */
/* Demangled: ABF_PF_Under_Estimation */
extern void* ABF_PF_Under_Estimation;

/* Symbol: DMNR_expander */
/* Demangled: DMNR_expander */
int DMNR_expander(void);

/* Symbol: ANE_Smooth */
/* Demangled: ANE_Smooth */
int ANE_Smooth(void);

/* Symbol: DIF_FFT_Fix16 */
/* Demangled: DIF_FFT_Fix16 */
int DIF_FFT_Fix16(void);

/* Symbol: IIR_coef_a1_8k_set4 */
/* Demangled: IIR_coef_a1_8k_set4 */
extern void* IIR_coef_a1_8k_set4;

/* Symbol: Minimum_Statistics */
/* Demangled: Minimum_Statistics */
int Minimum_Statistics(void);

/* Symbol: init_ASLR_parms_spk */
/* Demangled: init_ASLR_parms_spk */
int init_ASLR_parms_spk(void);

/* Symbol: MedianPwrIndx */
/* Demangled: MedianPwrIndx */
int MedianPwrIndx(void);

/* Symbol: us_coef */
/* Demangled: us_coef */
extern void* us_coef;

/* Symbol: CentralFreqShap */
/* Demangled: CentralFreqShap */
extern void* CentralFreqShap;

/* Symbol: NDC_NR_Init */
/* Demangled: NDC_NR_Init */
int NDC_NR_Init(void);

/* Symbol: init_FSH_parms */
/* Demangled: init_FSH_parms */
int init_FSH_parms(void);

/* Symbol: Cal_HGain */
/* Demangled: Cal_HGain */
int Cal_HGain(void);

/* Symbol: HGain_time_smoothing */
/* Demangled: HGain_time_smoothing */
int HGain_time_smoothing(void);

/* Symbol: CLARITY_Release_Rate */
/* Demangled: CLARITY_Release_Rate */
extern void* CLARITY_Release_Rate;

/* Symbol: DlMusicDet_Init */
/* Demangled: DlMusicDet_Init */
int DlMusicDet_Init(void);

/* Symbol: NDC_dB_Gain_Table */
/* Demangled: NDC_dB_Gain_Table */
extern void* NDC_dB_Gain_Table;

/* Symbol: SRC_Coefx2 */
/* Demangled: SRC_Coefx2 */
extern void* SRC_Coefx2;

/* Symbol: sb_shadow_stepsize_normal */
/* Demangled: sb_shadow_stepsize_normal */
extern void* sb_shadow_stepsize_normal;

/* Symbol: spc_dacch_satw */
/* Demangled: spc_dacch_satw */
int spc_dacch_satw(void);

/* Symbol: Low_Latency_D2T_Normalized */
/* Demangled: Low_Latency_D2T_Normalized */
int Low_Latency_D2T_Normalized(void);

/* Symbol: init_MMD */
/* Demangled: init_MMD */
int init_MMD(void);

/* Symbol: L_mac_i_40 */
/* Demangled: L_mac_i_40 */
int L_mac_i_40(void);

/* Symbol: md32_sat_lo */
/* Demangled: md32_sat_lo */
int md32_sat_lo(void);

/* Symbol: ENH_API_Free_DMNR_spk */
/* Demangled: ENH_API_Free_DMNR_spk */
int ENH_API_Free_DMNR_spk(void);

/* Symbol: ENH_API_Get_STE_Memory */
/* Demangled: ENH_API_Get_STE_Memory */
int ENH_API_Get_STE_Memory(void);

/* Symbol: dynamic_noise_threshold */
/* Demangled: dynamic_noise_threshold */
int dynamic_noise_threshold(void);

/* Symbol: mtk_arsi_query_param_buf_size */
/* Demangled: mtk_arsi_query_param_buf_size */
int mtk_arsi_query_param_buf_size(void);

/* Symbol: SetABFCalData_spk */
/* Demangled: SetABFCalData_spk */
int SetABFCalData_spk(void);

/* Symbol: FFT_scaling_32to16bit */
/* Demangled: FFT_scaling_32to16bit */
int FFT_scaling_32to16bit(void);

/* Symbol: STE_Richen_Side_L_t */
/* Demangled: STE_Richen_Side_L_t */
extern void* STE_Richen_Side_L_t;

/* Symbol: div_s_drc */
/* Demangled: div_s_drc */
int div_s_drc(void);

/* Symbol: BKF_WeightingTable */
/* Demangled: BKF_WeightingTable */
extern void* BKF_WeightingTable;

/* Symbol: WB_NR_UAD */
/* Demangled: WB_NR_UAD */
int WB_NR_UAD(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: check_lock */
/* Demangled: check_lock */
int check_lock(void);

/* Symbol: SearchEnvelope_frontend */
/* Demangled: SearchEnvelope_frontend */
int SearchEnvelope_frontend(void);

/* Symbol: Gain_AR_Rate_8 */
/* Demangled: Gain_AR_Rate_8 */
extern void* Gain_AR_Rate_8;

/* Symbol: StereoRichen */
/* Demangled: StereoRichen */
int StereoRichen(void);

/* Symbol: SRC_Coef */
/* Demangled: SRC_Coef */
extern void* SRC_Coef;

/* Symbol: ENH_API_Free_AEC */
/* Demangled: ENH_API_Free_AEC */
int ENH_API_Free_AEC(void);

/* Symbol: ENH_API_Update_Parameter_AEC */
/* Demangled: ENH_API_Update_Parameter_AEC */
int ENH_API_Update_Parameter_AEC(void);

/* Symbol: Half_Band_IIR */
/* Demangled: Half_Band_IIR */
int Half_Band_IIR(void);

/* Symbol: mtk_arsi_set_debug_log_fp */
/* Demangled: mtk_arsi_set_debug_log_fp */
int mtk_arsi_set_debug_log_fp(void);

/* Symbol: L_msu_40 */
/* Demangled: L_msu_40 */
int L_msu_40(void);

/* Symbol: ENH_API_Run_Graphical_UI_DRC_48K */
/* Demangled: ENH_API_Run_Graphical_UI_DRC_48K */
int ENH_API_Run_Graphical_UI_DRC_48K(void);

/* Symbol: IIR_a2_NB */
/* Demangled: IIR_a2_NB */
extern void* IIR_a2_NB;

/* Symbol: WB_NR_SpeechProbEst */
/* Demangled: WB_NR_SpeechProbEst */
int WB_NR_SpeechProbEst(void);

/* Symbol: free_NDC_memory */
/* Demangled: free_NDC_memory */
int free_NDC_memory(void);

/* Symbol: ABF_CB_post_filtering */
/* Demangled: ABF_CB_post_filtering */
int ABF_CB_post_filtering(void);

/* Symbol: ABF_cal_process_spk */
/* Demangled: ABF_cal_process_spk */
int ABF_cal_process_spk(void);

/* Symbol: WB_NR_PostProcessing */
/* Demangled: WB_NR_PostProcessing */
int WB_NR_PostProcessing(void);

/* Symbol: WB_NR_SetLevel */
/* Demangled: WB_NR_SetLevel */
int WB_NR_SetLevel(void);

/* Symbol: ENH_API_Run_Low_Latency_DRC */
/* Demangled: ENH_API_Run_Low_Latency_DRC */
int ENH_API_Run_Low_Latency_DRC(void);

/* Symbol: ANE_Signal_Level_Calibration */
/* Demangled: ANE_Signal_Level_Calibration */
int ANE_Signal_Level_Calibration(void);

/* Symbol: libprof_start_log */
/* Demangled: libprof_start_log */
int libprof_start_log(void);

/* Symbol: FIR_Q15 */
/* Demangled: FIR_Q15 */
int FIR_Q15(void);

/* Symbol: ANENoiseEst */
/* Demangled: ANENoiseEst */
int ANENoiseEst(void);

/* Symbol: HSR_LB_Filter */
/* Demangled: HSR_LB_Filter */
int HSR_LB_Filter(void);

/* Symbol: Low_Latency_Standard_DRC */
/* Demangled: Low_Latency_Standard_DRC */
int Low_Latency_Standard_DRC(void);

/* Symbol: ana_bp1_flt */
/* Demangled: ana_bp1_flt */
extern void* ana_bp1_flt;

/* Symbol: abf_sb_pwr_bias */
/* Demangled: abf_sb_pwr_bias */
extern void* abf_sb_pwr_bias;

/* Symbol: ABF_CB_swap_table_spk */
/* Demangled: ABF_CB_swap_table_spk */
extern void* ABF_CB_swap_table_spk;

/* Symbol: compute_nf_energy */
/* Demangled: compute_nf_energy */
int compute_nf_energy(void);

/* Symbol: Gama_Array */
/* Demangled: Gama_Array */
extern void* Gama_Array;

/* Symbol: STE_2nd_IIR */
/* Demangled: STE_2nd_IIR */
int STE_2nd_IIR(void);

/* Symbol: cal_es_gain */
/* Demangled: cal_es_gain */
int cal_es_gain(void);

/* Symbol: Fixed_sqrt */
/* Demangled: Fixed_sqrt */
int Fixed_sqrt(void);

/* Symbol: Estimate_NonStationaryNoise */
/* Demangled: Estimate_NonStationaryNoise */
int Estimate_NonStationaryNoise(void);

/* Symbol: Radix4BflyFast */
/* Demangled: Radix4BflyFast */
int Radix4BflyFast(void);

/* Symbol: compose_32 */
/* Demangled: compose_32 */
int compose_32(void);

/* Symbol: fb_ASLR_noise_esti */
/* Demangled: fb_ASLR_noise_esti */
int fb_ASLR_noise_esti(void);

/* Symbol: NDC_IIR_64 */
/* Demangled: NDC_IIR_64 */
int NDC_IIR_64(void);

/* Symbol: t_shift_reg */
/* Demangled: t_shift_reg */
extern void* t_shift_reg;

/* Symbol: NR_UAD */
/* Demangled: NR_UAD */
int NR_UAD(void);

/* Symbol: abf_init_spk */
/* Demangled: abf_init_spk */
int abf_init_spk(void);

/* Symbol: NDC_UL_Init */
/* Demangled: NDC_UL_Init */
int NDC_UL_Init(void);

/* Symbol: ABF_sb_PF_Smoothing_N */
/* Demangled: ABF_sb_PF_Smoothing_N */
extern void* ABF_sb_PF_Smoothing_N;

/* Symbol: DG_gain_t */
/* Demangled: DG_gain_t */
extern void* DG_gain_t;

/* Symbol: BandPwrMaxIdx */
/* Demangled: BandPwrMaxIdx */
int BandPwrMaxIdx(void);

/* Symbol: MusicHisDet */
/* Demangled: MusicHisDet */
int MusicHisDet(void);

/* Symbol: STE_Widen_Center_t */
/* Demangled: STE_Widen_Center_t */
extern void* STE_Widen_Center_t;

/* Symbol: Beam_direction_subgroup */
/* Demangled: Beam_direction_subgroup */
extern void* Beam_direction_subgroup;

/* Symbol: ANE_DG_gain_t */
/* Demangled: ANE_DG_gain_t */
extern void* ANE_DG_gain_t;

/* Symbol: vad_DT */
/* Demangled: vad_DT */
int vad_DT(void);

/* Symbol: init_ABM_vad_spk */
/* Demangled: init_ABM_vad_spk */
int init_ABM_vad_spk(void);

/* Symbol: Table_T2D_LowLatencyDRC */
/* Demangled: Table_T2D_LowLatencyDRC */
extern void* Table_T2D_LowLatencyDRC;

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: AGC_dB2Linear_pos */
/* Demangled: AGC_dB2Linear_pos */
extern void* AGC_dB2Linear_pos;

/* Symbol: init_agc_comp_spk */
/* Demangled: init_agc_comp_spk */
int init_agc_comp_spk(void);

/* Symbol: StereoEnh_Init_n */
/* Demangled: StereoEnh_Init_n */
int StereoEnh_Init_n(void);

/* Symbol: SPLIT_RFFT_Q31 */
/* Demangled: SPLIT_RFFT_Q31 */
int SPLIT_RFFT_Q31(void);

/* Symbol: ABF_sb_PF_Smoothing_S */
/* Demangled: ABF_sb_PF_Smoothing_S */
extern void* ABF_sb_PF_Smoothing_S;

/* Symbol: Update_Parameter_DMNR_spk */
/* Demangled: Update_Parameter_DMNR_spk */
int Update_Parameter_DMNR_spk(void);

/* Symbol: STE_1st_IIR */
/* Demangled: STE_1st_IIR */
int STE_1st_IIR(void);

/* Symbol: pack_div_s_32 */
/* Demangled: pack_div_s_32 */
int pack_div_s_32(void);

/* Symbol: WB_NR_EstCriticalBandEnergy */
/* Demangled: WB_NR_EstCriticalBandEnergy */
int WB_NR_EstCriticalBandEnergy(void);

/* Symbol: ANE_app_sqrt */
/* Demangled: ANE_app_sqrt */
int ANE_app_sqrt(void);

/* Symbol: NR_Shift_of_cr_lambda_n */
/* Demangled: NR_Shift_of_cr_lambda_n */
extern void* NR_Shift_of_cr_lambda_n;

/* Symbol: STE_Richen_Side_HL_t */
/* Demangled: STE_Richen_Side_HL_t */
extern void* STE_Richen_Side_HL_t;

/* Symbol: ABF_CB_width */
/* Demangled: ABF_CB_width */
extern void* ABF_CB_width;

/* Symbol: get_memory_DMNR_spk */
/* Demangled: get_memory_DMNR_spk */
int get_memory_DMNR_spk(void);

/* Symbol: Bitreversal_Q31 */
/* Demangled: Bitreversal_Q31 */
int Bitreversal_Q31(void);

/* Symbol: FIR_Q15_12tap */
/* Demangled: FIR_Q15_12tap */
int FIR_Q15_12tap(void);

/* Symbol: STE_Widen_Side01_t */
/* Demangled: STE_Widen_Side01_t */
extern void* STE_Widen_Side01_t;

/* Symbol: sb_pwr_bias_normal */
/* Demangled: sb_pwr_bias_normal */
extern void* sb_pwr_bias_normal;

/* Symbol: NDC_Signal_Level_Calibration */
/* Demangled: NDC_Signal_Level_Calibration */
int NDC_Signal_Level_Calibration(void);

/* Symbol: IIR_b2_NB */
/* Demangled: IIR_b2_NB */
extern void* IIR_b2_NB;

/* Symbol: Gain_AR_Rate_48 */
/* Demangled: Gain_AR_Rate_48 */
extern void* Gain_AR_Rate_48;

/* Symbol: SRC_upsample_x2 */
/* Demangled: SRC_upsample_x2 */
int SRC_upsample_x2(void);

/* Symbol: free_memory_DMNR */
/* Demangled: free_memory_DMNR */
int free_memory_DMNR(void);

/* Symbol: init_PR_vad */
/* Demangled: init_PR_vad */
int init_PR_vad(void);

/* Symbol: AF_DL */
/* Demangled: AF_DL */
int AF_DL(void);

/* Symbol: DL_DRC */
/* Demangled: DL_DRC */
int DL_DRC(void);

/* Symbol: ENH_API_ANE_Alloc */
/* Demangled: ENH_API_ANE_Alloc */
int ENH_API_ANE_Alloc(void);

/* Symbol: Wn_r_256 */
/* Demangled: Wn_r_256 */
extern void* Wn_r_256;

/* Symbol: ENH_API_Free_STE */
/* Demangled: ENH_API_Free_STE */
int ENH_API_Free_STE(void);

/* Symbol: NR_FixedNoiseEst */
/* Demangled: NR_FixedNoiseEst */
int NR_FixedNoiseEst(void);

/* Symbol: SetABFCalData */
/* Demangled: SetABFCalData */
int SetABFCalData(void);

/* Symbol: md32_packlh */
/* Demangled: md32_packlh */
int md32_packlh(void);

/* Symbol: derive_steering_filter */
/* Demangled: derive_steering_filter */
int derive_steering_filter(void);

/* Symbol: nlms_vt */
/* Demangled: nlms_vt */
int nlms_vt(void);

/* Symbol: UL_ANE_init */
/* Demangled: UL_ANE_init */
int UL_ANE_init(void);

/* Symbol: ana_bp2_flt */
/* Demangled: ana_bp2_flt */
extern void* ana_bp2_flt;

/* Symbol: StereoEnh_Alloc_Memory */
/* Demangled: StereoEnh_Alloc_Memory */
int StereoEnh_Alloc_Memory(void);

/* Symbol: STE_Richen_Side_A_t */
/* Demangled: STE_Richen_Side_A_t */
extern void* STE_Richen_Side_A_t;

/* Symbol: BWE_pitch_track */
/* Demangled: BWE_pitch_track */
int BWE_pitch_track(void);

/* Symbol: fir_48K_90tap */
/* Demangled: fir_48K_90tap */
int fir_48K_90tap(void);

/* Symbol: log2_1_plus_x_table */
/* Demangled: log2_1_plus_x_table */
extern void* log2_1_plus_x_table;

/* Symbol: ABF_AGC_Gain_Compensation */
/* Demangled: ABF_AGC_Gain_Compensation */
int ABF_AGC_Gain_Compensation(void);

/* Symbol: STE_Richen_Center_H_t */
/* Demangled: STE_Richen_Center_H_t */
extern void* STE_Richen_Center_H_t;

/* Symbol: AGCGainREC */
/* Demangled: AGCGainREC */
int AGCGainREC(void);

/* Symbol: Cal_postSNR */
/* Demangled: Cal_postSNR */
int Cal_postSNR(void);

/* Symbol: SearchEnvelope */
/* Demangled: SearchEnvelope */
int SearchEnvelope(void);

/* Symbol: sb_nlms_stepsize */
/* Demangled: sb_nlms_stepsize */
extern void* sb_nlms_stepsize;

/* Symbol: md32_packll */
/* Demangled: md32_packll */
int md32_packll(void);

/* Symbol: fwrite_wrap */
/* Demangled: fwrite_wrap */
int fwrite_wrap(void);

/* Symbol: ENH_API_Free_HSR */
/* Demangled: ENH_API_Free_HSR */
int ENH_API_Free_HSR(void);

/* Symbol: mtk_sp_team_arsi_assign_lib_fp */
/* Demangled: mtk_sp_team_arsi_assign_lib_fp */
int mtk_sp_team_arsi_assign_lib_fp(void);

/* Symbol: init_delay */
/* Demangled: init_delay */
int init_delay(void);

/* Symbol: ABF_SB_spk */
/* Demangled: ABF_SB_spk */
int ABF_SB_spk(void);

/* Symbol: Graphical_UI_DRC */
/* Demangled: Graphical_UI_DRC */
int Graphical_UI_DRC(void);

/* Symbol: SmoothAmp */
/* Demangled: SmoothAmp */
int SmoothAmp(void);

/* Symbol: ENH_API_Get_NDC_Memory */
/* Demangled: ENH_API_Get_NDC_Memory */
int ENH_API_Get_NDC_Memory(void);

/* Symbol: DataCopy_1in */
/* Demangled: DataCopy_1in */
int DataCopy_1in(void);

/* Symbol: ENH_API_Run_BKF_UL */
/* Demangled: ENH_API_Run_BKF_UL */
int ENH_API_Run_BKF_UL(void);

/* Symbol: es_fact */
/* Demangled: es_fact */
extern void* es_fact;

/* Symbol: spc_dsfmac */
/* Demangled: spc_dsfmac */
int spc_dsfmac(void);

/* Symbol: nlms_e */
/* Demangled: nlms_e */
extern void* nlms_e;

/* Symbol: ENH_API_Free_MR */
/* Demangled: ENH_API_Free_MR */
int ENH_API_Free_MR(void);

/* Symbol: D2T_GainCheck */
/* Demangled: D2T_GainCheck */
int D2T_GainCheck(void);

/* Symbol: FWB_FIR_Coef_Table */
/* Demangled: FWB_FIR_Coef_Table */
extern void* FWB_FIR_Coef_Table;

/* Symbol: Radix2_Bfly_Q31 */
/* Demangled: Radix2_Bfly_Q31 */
int Radix2_Bfly_Q31(void);

/* Symbol: mdb2_linear */
/* Demangled: mdb2_linear */
int mdb2_linear(void);

/* Symbol: ENH_API_Update_Parameter_DMNR_spk */
/* Demangled: ENH_API_Update_Parameter_DMNR_spk */
int ENH_API_Update_Parameter_DMNR_spk(void);

/* Symbol: CLARITY_Release_Time */
/* Demangled: CLARITY_Release_Time */
extern void* CLARITY_Release_Time;

/* Symbol: ENH_API_Init_SCH_n */
/* Demangled: ENH_API_Init_SCH_n */
int ENH_API_Init_SCH_n(void);

/* Symbol: mtk_arsi_set_dl_mute */
/* Demangled: mtk_arsi_set_dl_mute */
int mtk_arsi_set_dl_mute(void);

/* Symbol: ABF_FFT_Sin_Inv */
/* Demangled: ABF_FFT_Sin_Inv */
extern void* ABF_FFT_Sin_Inv;

/* Symbol: debug_check */
/* Demangled: debug_check */
int debug_check(void);

/* Symbol: ENH_API_Init_HSR */
/* Demangled: ENH_API_Init_HSR */
int ENH_API_Init_HSR(void);

/* Symbol: align_fractional_point_32 */
/* Demangled: align_fractional_point_32 */
int align_fractional_point_32(void);

/* Symbol: init_ctrl */
/* Demangled: init_ctrl */
int init_ctrl(void);

/* Symbol: ABF_FFT_Cos */
/* Demangled: ABF_FFT_Cos */
extern void* ABF_FFT_Cos;

/* Symbol: gcc_phat_vt_vad */
/* Demangled: gcc_phat_vt_vad */
int gcc_phat_vt_vad(void);

/* Symbol: init_vad_fe_HB */
/* Demangled: init_vad_fe_HB */
int init_vad_fe_HB(void);

/* Symbol: AGC_Reverse_Gain_Compensation_Org */
/* Demangled: AGC_Reverse_Gain_Compensation_Org */
int AGC_Reverse_Gain_Compensation_Org(void);

/* Symbol: adaptive_beamforming */
/* Demangled: adaptive_beamforming */
int adaptive_beamforming(void);

/* Symbol: ABF_FFT_Swap_spk */
/* Demangled: ABF_FFT_Swap_spk */
int ABF_FFT_Swap_spk(void);

/* Symbol: Gain_Hysterisis_Check */
/* Demangled: Gain_Hysterisis_Check */
int Gain_Hysterisis_Check(void);

/* Symbol: Table_TAV */
/* Demangled: Table_TAV */
extern void* Table_TAV;

/* Symbol: asdwTwiddleCoefQ31 */
/* Demangled: asdwTwiddleCoefQ31 */
extern void* asdwTwiddleCoefQ31;

/* Symbol: STE_Richen_Center_L_t */
/* Demangled: STE_Richen_Center_L_t */
extern void* STE_Richen_Center_L_t;

/* Symbol: NDC_DG_gain_t */
/* Demangled: NDC_DG_gain_t */
extern void* NDC_DG_gain_t;

/* Symbol: compute_noise_floor */
/* Demangled: compute_noise_floor */
int compute_noise_floor(void);

/* Symbol: mtk_arsi_get_addr_value */
/* Demangled: mtk_arsi_get_addr_value */
int mtk_arsi_get_addr_value(void);

/* Symbol: DRC_gain_table */
/* Demangled: DRC_gain_table */
extern void* DRC_gain_table;

/* Symbol: init_ABM_vad */
/* Demangled: init_ABM_vad */
int init_ABM_vad(void);

/* Symbol: synthesis_filter */
/* Demangled: synthesis_filter */
int synthesis_filter(void);

/* Symbol: NDC_Comfort_Noise_Table */
/* Demangled: NDC_Comfort_Noise_Table */
extern void* NDC_Comfort_Noise_Table;

/* Symbol: high_flt_WB */
/* Demangled: high_flt_WB */
extern void* high_flt_WB;

/* Symbol: abf_init */
/* Demangled: abf_init */
int abf_init(void);

/* Symbol: close_beamforming */
/* Demangled: close_beamforming */
int close_beamforming(void);

/* Symbol: STE_Richen_Center_HL_t */
/* Demangled: STE_Richen_Center_HL_t */
extern void* STE_Richen_Center_HL_t;

/* Symbol: VoiceDetector */
/* Demangled: VoiceDetector */
int VoiceDetector(void);

/* Symbol: UL_FWEControl_Init */
/* Demangled: UL_FWEControl_Init */
int UL_FWEControl_Init(void);

/* Symbol: mtk_arsi_update_device */
/* Demangled: mtk_arsi_update_device */
int mtk_arsi_update_device(void);

/* Symbol: Rad4fft256 */
/* Demangled: Rad4fft256 */
int Rad4fft256(void);

/* Symbol: libprof_stop_log */
/* Demangled: libprof_stop_log */
int libprof_stop_log(void);

/* Symbol: init_SNRI_expander */
/* Demangled: init_SNRI_expander */
int init_SNRI_expander(void);

/* Symbol: ABF_postfiltering */
/* Demangled: ABF_postfiltering */
int ABF_postfiltering(void);

/* Symbol: calc_phat */
/* Demangled: calc_phat */
int calc_phat(void);

/* Symbol: NDC_Normalize_Gain_dB */
/* Demangled: NDC_Normalize_Gain_dB */
int NDC_Normalize_Gain_dB(void);

/* Symbol: libprof_init */
/* Demangled: libprof_init */
int libprof_init(void);

/* Symbol: mtk_arsi_set_dl_digital_gain */
/* Demangled: mtk_arsi_set_dl_digital_gain */
int mtk_arsi_set_dl_digital_gain(void);

/* Symbol: Shift_to_Max_Q_32 */
/* Demangled: Shift_to_Max_Q_32 */
int Shift_to_Max_Q_32(void);

/* Symbol: dctcos_WB */
/* Demangled: dctcos_WB */
extern void* dctcos_WB;

/* Symbol: BKF_Shaping_3Quest */
/* Demangled: BKF_Shaping_3Quest */
int BKF_Shaping_3Quest(void);

/* Symbol: SPLIT_RIFFT_Q31 */
/* Demangled: SPLIT_RIFFT_Q31 */
int SPLIT_RIFFT_Q31(void);

/* Symbol: init_esp_parms */
/* Demangled: init_esp_parms */
int init_esp_parms(void);

/* Symbol: ABF_Wind_NR */
/* Demangled: ABF_Wind_NR */
int ABF_Wind_NR(void);

/* Symbol: pf_NB */
/* Demangled: pf_NB */
extern void* pf_NB;

/* Symbol: mtk_arsi_parsing_param_file */
/* Demangled: mtk_arsi_parsing_param_file */
int mtk_arsi_parsing_param_file(void);

/* Symbol: md32_aru_diff */
/* Demangled: md32_aru_diff */
int md32_aru_diff(void);

/* Symbol: debug_print */
/* Demangled: debug_print */
int debug_print(void);

/* Symbol: WB_NR_SuppressGainApply */
/* Demangled: WB_NR_SuppressGainApply */
int WB_NR_SuppressGainApply(void);

/* Symbol: connections */
/* Demangled: connections */
extern void* connections;

/* Symbol: dctcos_1_NB */
/* Demangled: dctcos_1_NB */
extern void* dctcos_1_NB;

/* Symbol: detect_dual_talk */
/* Demangled: detect_dual_talk */
int detect_dual_talk(void);

/* Symbol: IIR_struct_init */
/* Demangled: IIR_struct_init */
int IIR_struct_init(void);

/* Symbol: StereoWiden */
/* Demangled: StereoWiden */
int StereoWiden(void);

/* Symbol: noise_estimation */
/* Demangled: noise_estimation */
int noise_estimation(void);

/* Symbol: db_mdb2 */
/* Demangled: db_mdb2 */
int db_mdb2(void);

/* Symbol: ABM_Cal_nlms_VAD */
/* Demangled: ABM_Cal_nlms_VAD */
int ABM_Cal_nlms_VAD(void);

/* Symbol: Low_Latency_Normalized_Division */
/* Demangled: Low_Latency_Normalized_Division */
int Low_Latency_Normalized_Division(void);

/* Symbol: FIR_coef_pr_8k_set1 */
/* Demangled: FIR_coef_pr_8k_set1 */
extern void* FIR_coef_pr_8k_set1;

/* Symbol: uplink_nlp */
/* Demangled: uplink_nlp */
int uplink_nlp(void);

/* Symbol: dctcos2_WB */
/* Demangled: dctcos2_WB */
extern void* dctcos2_WB;

/* Symbol: UL_FrontEnd_Schedule */
/* Demangled: UL_FrontEnd_Schedule */
int UL_FrontEnd_Schedule(void);

/* Symbol: FIR_coef_pr_8k_set2 */
/* Demangled: FIR_coef_pr_8k_set2 */
extern void* FIR_coef_pr_8k_set2;

/* Symbol: ENH_API_Free_NDC */
/* Demangled: ENH_API_Free_NDC */
int ENH_API_Free_NDC(void);

/* Symbol: ENH_API_AEC_Alloc_arsi */
/* Demangled: ENH_API_AEC_Alloc_arsi */
int ENH_API_AEC_Alloc_arsi(void);

/* Symbol: init_par_sys */
/* Demangled: init_par_sys */
int init_par_sys(void);

/* Symbol: ar1_filter_1_16 */
/* Demangled: ar1_filter_1_16 */
int ar1_filter_1_16(void);

/* Symbol: L_negate_40 */
/* Demangled: L_negate_40 */
int L_negate_40(void);

/* Symbol: ABF_bin_num */
/* Demangled: ABF_bin_num */
extern void* ABF_bin_num;

/* Symbol: Table_BounderTHD */
/* Demangled: Table_BounderTHD */
extern void* Table_BounderTHD;

/* Symbol: FIR_coef_pr_8k_set3 */
/* Demangled: FIR_coef_pr_8k_set3 */
extern void* FIR_coef_pr_8k_set3;

/* Symbol: sebuffer_L */
/* Demangled: sebuffer_L */
extern void* sebuffer_L;

/* Symbol: FIR_coef_pr_8k_set4 */
/* Demangled: FIR_coef_pr_8k_set4 */
extern void* FIR_coef_pr_8k_set4;

/* Symbol: cfft_radix2_bfly_neon */
/* Demangled: cfft_radix2_bfly_neon */
int cfft_radix2_bfly_neon(void);

/* Symbol: pf_16_12_256 */
/* Demangled: pf_16_12_256 */
extern void* pf_16_12_256;

/* Symbol: md32_fmuldsw_add */
/* Demangled: md32_fmuldsw_add */
int md32_fmuldsw_add(void);

/* Symbol: FE_Minimum_Statistics */
/* Demangled: FE_Minimum_Statistics */
int FE_Minimum_Statistics(void);

/* Symbol: cef_bp_flt */
/* Demangled: cef_bp_flt */
extern void* cef_bp_flt;

/* Symbol: spc_xsfmac */
/* Demangled: spc_xsfmac */
int spc_xsfmac(void);

/* Symbol: Graphical_UI_DRC_48K */
/* Demangled: Graphical_UI_DRC_48K */
int Graphical_UI_DRC_48K(void);

/* Symbol: ENH_API_FE_Alloc */
/* Demangled: ENH_API_FE_Alloc */
int ENH_API_FE_Alloc(void);

/* Symbol: ENH_API_Get_ANE_Memory */
/* Demangled: ENH_API_Get_ANE_Memory */
int ENH_API_Get_ANE_Memory(void);

/* Symbol: Complex_mult_test32_smmul */
/* Demangled: Complex_mult_test32_smmul */
int Complex_mult_test32_smmul(void);

/* Symbol: compute_noise_floor_16 */
/* Demangled: compute_noise_floor_16 */
int compute_noise_floor_16(void);

/* Symbol: ABF_FFT_Swap */
/* Demangled: ABF_FFT_Swap */
int ABF_FFT_Swap(void);

/* Symbol: AGC_Reverse_Gain_Compensation_spk */
/* Demangled: AGC_Reverse_Gain_Compensation_spk */
int AGC_Reverse_Gain_Compensation_spk(void);

/* Symbol: DMNR_mic1_VAD_spk */
/* Demangled: DMNR_mic1_VAD_spk */
int DMNR_mic1_VAD_spk(void);

/* Symbol: analysis_filter */
/* Demangled: analysis_filter */
int analysis_filter(void);

/* Symbol: AGC_20ms_DB2Linear_MapP */
/* Demangled: AGC_20ms_DB2Linear_MapP */
extern void* AGC_20ms_DB2Linear_MapP;

/* Symbol: ENH_API_Init_NDC */
/* Demangled: ENH_API_Init_NDC */
int ENH_API_Init_NDC(void);

/* Symbol: init_vad3 */
/* Demangled: init_vad3 */
int init_vad3(void);

/* Symbol: init_SF_parms_spk */
/* Demangled: init_SF_parms_spk */
int init_SF_parms_spk(void);

/* Symbol: dctcos_2_WB */
/* Demangled: dctcos_2_WB */
extern void* dctcos_2_WB;

/* Symbol: HSR_MAIN */
/* Demangled: HSR_MAIN */
int HSR_MAIN(void);

/* Symbol: NDC_Cnst_Table */
/* Demangled: NDC_Cnst_Table */
extern void* NDC_Cnst_Table;

/* Symbol: ABF_CB_swap_table */
/* Demangled: ABF_CB_swap_table */
extern void* ABF_CB_swap_table;

/* Symbol: Smooth_NoiseFloor */
/* Demangled: Smooth_NoiseFloor */
int Smooth_NoiseFloor(void);

/* Symbol: WB_NR_SuppressGainSmoothing */
/* Demangled: WB_NR_SuppressGainSmoothing */
int WB_NR_SuppressGainSmoothing(void);

/* Symbol: WB_NR_ToneDetection */
/* Demangled: WB_NR_ToneDetection */
int WB_NR_ToneDetection(void);

/* Symbol: libprof_dump_log */
/* Demangled: libprof_dump_log */
int libprof_dump_log(void);

/* Symbol: coef_normalization */
/* Demangled: coef_normalization */
int coef_normalization(void);

/* Symbol: sb_additional_shadow_stepsize_st */
/* Demangled: sb_additional_shadow_stepsize_st */
extern void* sb_additional_shadow_stepsize_st;

/* Symbol: MusicDet */
/* Demangled: MusicDet */
int MusicDet(void);

/* Symbol: md32_sub_sat_dual */
/* Demangled: md32_sub_sat_dual */
int md32_sub_sat_dual(void);

/* Symbol: ENH_API_Run_Compressor_48K_Front */
/* Demangled: ENH_API_Run_Compressor_48K_Front */
int ENH_API_Run_Compressor_48K_Front(void);

/* Symbol: DRC_gain_smoothing */
/* Demangled: DRC_gain_smoothing */
extern void* DRC_gain_smoothing;

/* Symbol: get_aec_memory */
/* Demangled: get_aec_memory */
int get_aec_memory(void);

/* Symbol: pre_emphasis_1 */
/* Demangled: pre_emphasis_1 */
extern void* pre_emphasis_1;

/* Symbol: ENH_API_Get_Version */
/* Demangled: ENH_API_Get_Version */
int ENH_API_Get_Version(void);

/* Symbol: SRC_downsample */
/* Demangled: SRC_downsample */
int SRC_downsample(void);

/* Symbol: SRC_upsample_2in */
/* Demangled: SRC_upsample_2in */
int SRC_upsample_2in(void);

/* Symbol: pre_emphasis_2 */
/* Demangled: pre_emphasis_2 */
extern void* pre_emphasis_2;

/* Symbol: FIR_coef_HPF */
/* Demangled: FIR_coef_HPF */
extern void* FIR_coef_HPF;

/* Symbol: init_vad_fe */
/* Demangled: init_vad_fe */
int init_vad_fe(void);

/* Symbol: pre_emphasis_3 */
/* Demangled: pre_emphasis_3 */
extern void* pre_emphasis_3;

/* Symbol: allocate_aec_memory */
/* Demangled: allocate_aec_memory */
int allocate_aec_memory(void);

/* Symbol: IIR_b1_48k */
/* Demangled: IIR_b1_48k */
extern void* IIR_b1_48k;

/* Symbol: libprof_get */
/* Demangled: libprof_get */
int libprof_get(void);

/* Symbol: ds_hist */
/* Demangled: ds_hist */
extern void* ds_hist;

/* Symbol: STE_2nd_IIR_Bass */
/* Demangled: STE_2nd_IIR_Bass */
int STE_2nd_IIR_Bass(void);

/* Symbol: ES_lower_bound_table */
/* Demangled: ES_lower_bound_table */
extern void* ES_lower_bound_table;

/* Symbol: AGCGainEst */
/* Demangled: AGCGainEst */
int AGCGainEst(void);

/* Symbol: md32_muld_add */
/* Demangled: md32_muld_add */
int md32_muld_add(void);

/* Symbol: md32_sat_hi */
/* Demangled: md32_sat_hi */
int md32_sat_hi(void);

/* Symbol: compressor_48K_0 */
/* Demangled: compressor_48K_0 */
int compressor_48K_0(void);

/* Symbol: NR_SbAnalysis_48K */
/* Demangled: NR_SbAnalysis_48K */
int NR_SbAnalysis_48K(void);

/* Symbol: init_voice_tracking */
/* Demangled: init_voice_tracking */
int init_voice_tracking(void);

/* Symbol: subframe_num_switch_table */
/* Demangled: subframe_num_switch_table */
extern void* subframe_num_switch_table;

/* Symbol: StereoEnh_Get_Memory */
/* Demangled: StereoEnh_Get_Memory */
int StereoEnh_Get_Memory(void);

/* Symbol: init_bankB_parms */
/* Demangled: init_bankB_parms */
int init_bankB_parms(void);

/* Symbol: compressor_48K_1 */
/* Demangled: compressor_48K_1 */
int compressor_48K_1(void);

/* Symbol: NR_FixedVAD */
/* Demangled: NR_FixedVAD */
int NR_FixedVAD(void);

/* Symbol: Cal_noise_case */
/* Demangled: Cal_noise_case */
int Cal_noise_case(void);

/* Symbol: ABF_mic2_blocking_detection_spk */
/* Demangled: ABF_mic2_blocking_detection_spk */
int ABF_mic2_blocking_detection_spk(void);

/* Symbol: Low_Latency_D2T_GainCheck */
/* Demangled: Low_Latency_D2T_GainCheck */
int Low_Latency_D2T_GainCheck(void);

/* Symbol: Wn_i_256 */
/* Demangled: Wn_i_256 */
extern void* Wn_i_256;

/* Symbol: Cmult */
/* Demangled: Cmult */
int Cmult(void);

/* Symbol: mtk_arsi_set_addr_value */
/* Demangled: mtk_arsi_set_addr_value */
int mtk_arsi_set_addr_value(void);

/* Symbol: DRC_bounder_attack_rate1 */
/* Demangled: DRC_bounder_attack_rate1 */
extern void* DRC_bounder_attack_rate1;

/* Symbol: Radix4FirstStageNDC_test32 */
/* Demangled: Radix4FirstStageNDC_test32 */
int Radix4FirstStageNDC_test32(void);

/* Symbol: AGC_sqrt_coef */
/* Demangled: AGC_sqrt_coef */
extern void* AGC_sqrt_coef;

/* Symbol: pf_16_12_128_NB */
/* Demangled: pf_16_12_128_NB */
extern void* pf_16_12_128_NB;

/* Symbol: ENH_API_DL_Process */
/* Demangled: ENH_API_DL_Process */
int ENH_API_DL_Process(void);

/* Symbol: extract_h_64 */
/* Demangled: extract_h_64 */
int extract_h_64(void);

/* Symbol: DRC_bounder_attack_rate2 */
/* Demangled: DRC_bounder_attack_rate2 */
extern void* DRC_bounder_attack_rate2;

/* Symbol: RFFT_256_Q31 */
/* Demangled: RFFT_256_Q31 */
int RFFT_256_Q31(void);

/* Symbol: tcl_erl_update */
/* Demangled: tcl_erl_update */
int tcl_erl_update(void);

/* Symbol: pf_16_12_112 */
/* Demangled: pf_16_12_112 */
extern void* pf_16_12_112;

/* Symbol: WB_NR_Subband_VAD */
/* Demangled: WB_NR_Subband_VAD */
int WB_NR_Subband_VAD(void);

/* Symbol: T2F_Transform */
/* Demangled: T2F_Transform */
int T2F_Transform(void);

/* Symbol: BMG_table */
/* Demangled: BMG_table */
extern void* BMG_table;

/* Symbol: fir_48K_60pt_36tap */
/* Demangled: fir_48K_60pt_36tap */
int fir_48K_60pt_36tap(void);

/* Symbol: init_ctrl_spk */
/* Demangled: init_ctrl_spk */
int init_ctrl_spk(void);

/* Symbol: NDC_UL_ASLR */
/* Demangled: NDC_UL_ASLR */
int NDC_UL_ASLR(void);

/* Symbol: init_vad_sb */
/* Demangled: init_vad_sb */
int init_vad_sb(void);

/* Symbol: sb_aec */
/* Demangled: sb_aec */
int sb_aec(void);

/* Symbol: detect_direction */
/* Demangled: detect_direction */
int detect_direction(void);

/* Symbol: NR_48K_STE_RESPONSE */
/* Demangled: NR_48K_STE_RESPONSE */
extern void* NR_48K_STE_RESPONSE;

/* Symbol: STE_Widen_Side02_t */
/* Demangled: STE_Widen_Side02_t */
extern void* STE_Widen_Side02_t;

/* Symbol: ABF_FFT_Sin */
/* Demangled: ABF_FFT_Sin */
extern void* ABF_FFT_Sin;

/* Symbol: MusicDet_StaticMemInit */
/* Demangled: MusicDet_StaticMemInit */
int MusicDet_StaticMemInit(void);

/* Symbol: NR_cr_lambda_n */
/* Demangled: NR_cr_lambda_n */
extern void* NR_cr_lambda_n;

/* Symbol: ne2_ds_hist */
/* Demangled: ne2_ds_hist */
extern void* ne2_ds_hist;

/* Symbol: allocate_compressor_48K_memory */
/* Demangled: allocate_compressor_48K_memory */
int allocate_compressor_48K_memory(void);

/* Symbol: circular_conv */
/* Demangled: circular_conv */
int circular_conv(void);

/* Symbol: sebuffer2_L */
/* Demangled: sebuffer2_L */
extern void* sebuffer2_L;

/* Symbol: UlDlMusicDet */
/* Demangled: UlDlMusicDet */
int UlDlMusicDet(void);

/* Symbol: pf_16_12_96 */
/* Demangled: pf_16_12_96 */
extern void* pf_16_12_96;

/* Symbol: drc_cos_table */
/* Demangled: drc_cos_table */
extern void* drc_cos_table;

/* Symbol: nlms_sb_n */
/* Demangled: nlms_sb_n */
int nlms_sb_n(void);

/* Symbol: L_mult_i_40 */
/* Demangled: L_mult_i_40 */
int L_mult_i_40(void);

/* Symbol: UL_IIR_coef_b2_8k_set1 */
/* Demangled: UL_IIR_coef_b2_8k_set1 */
extern void* UL_IIR_coef_b2_8k_set1;

/* Symbol: NR_SuppressGainSmoothing */
/* Demangled: NR_SuppressGainSmoothing */
int NR_SuppressGainSmoothing(void);

/* Symbol: FIXED_DFT */
/* Demangled: FIXED_DFT */
int FIXED_DFT(void);

/* Symbol: HSR_Buffer_Init */
/* Demangled: HSR_Buffer_Init */
int HSR_Buffer_Init(void);

/* Symbol: WB_NR_Music_Detection */
/* Demangled: WB_NR_Music_Detection */
int WB_NR_Music_Detection(void);

/* Symbol: UL_IIR_coef_b2_8k_set2 */
/* Demangled: UL_IIR_coef_b2_8k_set2 */
extern void* UL_IIR_coef_b2_8k_set2;

/* Symbol: cfft_radix2_bfly_neon_2x2 */
/* Demangled: cfft_radix2_bfly_neon_2x2 */
int cfft_radix2_bfly_neon_2x2(void);

/* Symbol: SRC_upsample */
/* Demangled: SRC_upsample */
int SRC_upsample(void);

/* Symbol: mtk_arsi_set_key_value_pair */
/* Demangled: mtk_arsi_set_key_value_pair */
int mtk_arsi_set_key_value_pair(void);

/* Symbol: IIR_b2_48k */
/* Demangled: IIR_b2_48k */
extern void* IIR_b2_48k;

/* Symbol: UL_IIR_coef_b2_8k_set3 */
/* Demangled: UL_IIR_coef_b2_8k_set3 */
extern void* UL_IIR_coef_b2_8k_set3;

/* Symbol: AGC_Reverse_Gain_Compensation */
/* Demangled: AGC_Reverse_Gain_Compensation */
int AGC_Reverse_Gain_Compensation(void);

/* Symbol: WB_NR_SpectrumSmoothing */
/* Demangled: WB_NR_SpectrumSmoothing */
int WB_NR_SpectrumSmoothing(void);

/* Symbol: DL_ClarityControl_Init */
/* Demangled: DL_ClarityControl_Init */
int DL_ClarityControl_Init(void);

/* Symbol: mtk_arsi_create_handler */
/* Demangled: mtk_arsi_create_handler */
int mtk_arsi_create_handler(void);

/* Symbol: NR_MCRANoiseEst */
/* Demangled: NR_MCRANoiseEst */
int NR_MCRANoiseEst(void);

/* Symbol: Beam_direction_subgroup_start */
/* Demangled: Beam_direction_subgroup_start */
extern void* Beam_direction_subgroup_start;

/* Symbol: IIR_a1_NB */
/* Demangled: IIR_a1_NB */
extern void* IIR_a1_NB;

/* Symbol: ENH_API_Run_Ndc_UL */
/* Demangled: ENH_API_Run_Ndc_UL */
int ENH_API_Run_Ndc_UL(void);

/* Symbol: DataCopy_2in */
/* Demangled: DataCopy_2in */
int DataCopy_2in(void);

/* Symbol: NR_SetAggMode */
/* Demangled: NR_SetAggMode */
int NR_SetAggMode(void);

/* Symbol: calc_gcc */
/* Demangled: calc_gcc */
int calc_gcc(void);

/* Symbol: IIR_allpass_stereo */
/* Demangled: IIR_allpass_stereo */
int IIR_allpass_stereo(void);

/* Symbol: UL_IIR_coef_b2_16k_set1 */
/* Demangled: UL_IIR_coef_b2_16k_set1 */
extern void* UL_IIR_coef_b2_16k_set1;

/* Symbol: init_cng_parms */
/* Demangled: init_cng_parms */
int init_cng_parms(void);

/* Symbol: init_DRC */
/* Demangled: init_DRC */
int init_DRC(void);

/* Symbol: ABF_FIXED_DFT */
/* Demangled: ABF_FIXED_DFT */
int ABF_FIXED_DFT(void);

/* Symbol: Cal_parameter_forATnT */
/* Demangled: Cal_parameter_forATnT */
int Cal_parameter_forATnT(void);

/* Symbol: HGain_modify_and_iFFT */
/* Demangled: HGain_modify_and_iFFT */
int HGain_modify_and_iFFT(void);

/* Symbol: Freq_Array */
/* Demangled: Freq_Array */
extern void* Freq_Array;

/* Symbol: UL_IIR_coef_b2_16k_set2 */
/* Demangled: UL_IIR_coef_b2_16k_set2 */
extern void* UL_IIR_coef_b2_16k_set2;

/* Symbol: ABF_sb_det_gain */
/* Demangled: ABF_sb_det_gain */
extern void* ABF_sb_det_gain;

/* Symbol: pack_div_prec */
/* Demangled: pack_div_prec */
int pack_div_prec(void);

/* Symbol: UL_IIR_coef_b2_16k_set3 */
/* Demangled: UL_IIR_coef_b2_16k_set3 */
extern void* UL_IIR_coef_b2_16k_set3;

/* Symbol: fe_ds_hist */
/* Demangled: fe_ds_hist */
extern void* fe_ds_hist;

/* Symbol: sb_pwr_bias_shadow */
/* Demangled: sb_pwr_bias_shadow */
extern void* sb_pwr_bias_shadow;

/* Symbol: debug_fprint */
/* Demangled: debug_fprint */
int debug_fprint(void);

/* Symbol: ANE_Normalize_Gain_dB */
/* Demangled: ANE_Normalize_Gain_dB */
int ANE_Normalize_Gain_dB(void);

/* Symbol: Table_MinGain */
/* Demangled: Table_MinGain */
extern void* Table_MinGain;

/* Symbol: Complex_mult */
/* Demangled: Complex_mult */
int Complex_mult(void);

/* Symbol: vad_fe_HB */
/* Demangled: vad_fe_HB */
int vad_fe_HB(void);

/* Symbol: norm_r_shift_32 */
/* Demangled: norm_r_shift_32 */
int norm_r_shift_32(void);

/* Symbol: AGC_Fixed_sqrt */
/* Demangled: AGC_Fixed_sqrt */
int AGC_Fixed_sqrt(void);

/* Symbol: IIR_64_Halfband */
/* Demangled: IIR_64_Halfband */
int IIR_64_Halfband(void);

/* Symbol: Fixed_Divide */
/* Demangled: Fixed_Divide */
int Fixed_Divide(void);

/* Symbol: Fixed_Spectral_Smoothing */
/* Demangled: Fixed_Spectral_Smoothing */
int Fixed_Spectral_Smoothing(void);

/* Symbol: HP_IIR_coef_b2_16k_set */
/* Demangled: HP_IIR_coef_b2_16k_set */
extern void* HP_IIR_coef_b2_16k_set;

/* Symbol: NR_Agg_Mode_Table */
/* Demangled: NR_Agg_Mode_Table */
extern void* NR_Agg_Mode_Table;

/* Symbol: fast_sqrt */
/* Demangled: fast_sqrt */
int fast_sqrt(void);

/* Symbol: Fixed_ThermalNoise */
/* Demangled: Fixed_ThermalNoise */
int Fixed_ThermalNoise(void);

/* Symbol: WB_NR_pre_emphasis */
/* Demangled: WB_NR_pre_emphasis */
int WB_NR_pre_emphasis(void);

/* Symbol: spc_daccl_satw */
/* Demangled: spc_daccl_satw */
int spc_daccl_satw(void);

/* Symbol: ENH_API_Get_Compressor_48K_Memory */
/* Demangled: ENH_API_Get_Compressor_48K_Memory */
int ENH_API_Get_Compressor_48K_Memory(void);

/* Symbol: IIR_a2_WB */
/* Demangled: IIR_a2_WB */
extern void* IIR_a2_WB;

/* Symbol: apply_sup_gain */
/* Demangled: apply_sup_gain */
int apply_sup_gain(void);

/* Symbol: ULDL_GDRCControl_Init */
/* Demangled: ULDL_GDRCControl_Init */
int ULDL_GDRCControl_Init(void);

/* Symbol: SlowBitReverse256_test32 */
/* Demangled: SlowBitReverse256_test32 */
int SlowBitReverse256_test32(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBSPEECH_ENH_LIB_H */
