/*
 * Reverse-Engineered ABI Specification for: libMtkSpeechEnh.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libMtkSpeechEnh.so
 */

#ifndef BEGONIA_RE_LIBMTKSPEECHENH_H
#define BEGONIA_RE_LIBMTKSPEECHENH_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: Switch_ECrelated */
/* Demangled: Switch_ECrelated */
int Switch_ECrelated(void);

/* Symbol: ABF_Delay_Calibration */
/* Demangled: ABF_Delay_Calibration */
int ABF_Delay_Calibration(void);

/* Symbol: DRC_UL_Reset */
/* Demangled: DRC_UL_Reset */
int DRC_UL_Reset(void);

/* Symbol: ENH_API_Update_SCH */
/* Demangled: ENH_API_Update_SCH */
int ENH_API_Update_SCH(void);

/* Symbol: fir_48K_Q23 */
/* Demangled: fir_48K_Q23 */
int fir_48K_Q23(void);

/* Symbol: set_expd_thd */
/* Demangled: set_expd_thd */
int set_expd_thd(void);

/* Symbol: MBDRC_IIR_Coef */
/* Demangled: MBDRC_IIR_Coef */
extern void* MBDRC_IIR_Coef;

/* Symbol: __aeabi_memset4 */
/* Demangled: __aeabi_memset4 */
int __aeabi_memset4(void);

/* Symbol: Caluate_ser */
/* Demangled: Caluate_ser */
int Caluate_ser(void);

/* Symbol: ENH_API_Reset_FFT_ES */
/* Demangled: ENH_API_Reset_FFT_ES */
int ENH_API_Reset_FFT_ES(void);

/* Symbol: DMNR_convert_Mic_selection_powerB_thd_LB */
/* Demangled: DMNR_convert_Mic_selection_powerB_thd_LB */
int DMNR_convert_Mic_selection_powerB_thd_LB(void);

/* Symbol: init_ntd_struct */
/* Demangled: init_ntd_struct */
int init_ntd_struct(void);

/* Symbol: init_ctrl_spk */
/* Demangled: init_ctrl_spk */
int init_ctrl_spk(void);

/* Symbol: reset_cb_hVAD */
/* Demangled: reset_cb_hVAD */
int reset_cb_hVAD(void);

/* Symbol: NDC_Cnst_Table_SWB */
/* Demangled: NDC_Cnst_Table_SWB */
extern void* NDC_Cnst_Table_SWB;

/* Symbol: tcl_erl_update */
/* Demangled: tcl_erl_update */
int tcl_erl_update(void);

/* Symbol: cb_postfiltering_calc_gain_by_power */
/* Demangled: cb_postfiltering_calc_gain_by_power */
int cb_postfiltering_calc_gain_by_power(void);

/* Symbol: MMD_shift_table */
/* Demangled: MMD_shift_table */
extern void* MMD_shift_table;

/* Symbol: NDC_dB_Gain_Table */
/* Demangled: NDC_dB_Gain_Table */
extern void* NDC_dB_Gain_Table;

/* Symbol: STE_Widen_Side02_t */
/* Demangled: STE_Widen_Side02_t */
extern void* STE_Widen_Side02_t;

/* Symbol: Cal_POS_NSER */
/* Demangled: Cal_POS_NSER */
int Cal_POS_NSER(void);

/* Symbol: cb_HR_set_strength */
/* Demangled: cb_HR_set_strength */
int cb_HR_set_strength(void);

/* Symbol: DMNR_convert_WA_counter_step */
/* Demangled: DMNR_convert_WA_counter_step */
int DMNR_convert_WA_counter_step(void);

/* Symbol: BKF_Soft_Shaping */
/* Demangled: BKF_Soft_Shaping */
int BKF_Soft_Shaping(void);

/* Symbol: __aeabi_memset8 */
/* Demangled: __aeabi_memset8 */
int __aeabi_memset8(void);

/* Symbol: cb_HR_calc_gain */
/* Demangled: cb_HR_calc_gain */
int cb_HR_calc_gain(void);

/* Symbol: shr_rr */
/* Demangled: shr_rr */
int shr_rr(void);

/* Symbol: Cal_parameter_1_spk */
/* Demangled: Cal_parameter_1_spk */
int Cal_parameter_1_spk(void);

/* Symbol: ne_us_hist */
/* Demangled: ne_us_hist */
extern void* ne_us_hist;

/* Symbol: StereoEnh_Get_Memory */
/* Demangled: StereoEnh_Get_Memory */
int StereoEnh_Get_Memory(void);

/* Symbol: Low_Latency_Normalized_Division */
/* Demangled: Low_Latency_Normalized_Division */
int Low_Latency_Normalized_Division(void);

/* Symbol: Complex_mult_test32_smmul */
/* Demangled: Complex_mult_test32_smmul */
int Complex_mult_test32_smmul(void);

/* Symbol: DFT_update_GCC_spk */
/* Demangled: DFT_update_GCC_spk */
int DFT_update_GCC_spk(void);

/* Symbol: MBDRC_Gain_IIR */
/* Demangled: MBDRC_Gain_IIR */
int MBDRC_Gain_IIR(void);

/* Symbol: Caluate_pre_ser */
/* Demangled: Caluate_pre_ser */
int Caluate_pre_ser(void);

/* Symbol: ENH_API_Get_AEC2_Memory */
/* Demangled: ENH_API_Get_AEC2_Memory */
int ENH_API_Get_AEC2_Memory(void);

/* Symbol: normalize_fun_32 */
/* Demangled: normalize_fun_32 */
int normalize_fun_32(void);

/* Symbol: CB_FFT_REFLECT */
/* Demangled: CB_FFT_REFLECT */
int CB_FFT_REFLECT(void);

/* Symbol: ENH_API_Get_FFT_ES_Memory */
/* Demangled: ENH_API_Get_FFT_ES_Memory */
int ENH_API_Get_FFT_ES_Memory(void);

/* Symbol: ENH_API_Run_MR_DL */
/* Demangled: ENH_API_Run_MR_DL */
int ENH_API_Run_MR_DL(void);

/* Symbol: MBDRC_AR_Rate_16 */
/* Demangled: MBDRC_AR_Rate_16 */
extern void* MBDRC_AR_Rate_16;

/* Symbol: Set_ambient_noise_calibra */
/* Demangled: Set_ambient_noise_calibra */
int Set_ambient_noise_calibra(void);

/* Symbol: STE_Richen_Center_HL_t */
/* Demangled: STE_Richen_Center_HL_t */
extern void* STE_Richen_Center_HL_t;

/* Symbol: AES_overestimate_table */
/* Demangled: AES_overestimate_table */
extern void* AES_overestimate_table;

/* Symbol: sb_additional_shadow_stepsize */
/* Demangled: sb_additional_shadow_stepsize */
extern void* sb_additional_shadow_stepsize;

/* Symbol: vad_fe */
/* Demangled: vad_fe */
int vad_fe(void);

/* Symbol: Bin2OB_band_width */
/* Demangled: Bin2OB_band_width */
extern void* Bin2OB_band_width;

/* Symbol: NR_PreSuppressGainEst */
/* Demangled: NR_PreSuppressGainEst */
int NR_PreSuppressGainEst(void);

/* Symbol: init_bankB_parms_DMNR */
/* Demangled: init_bankB_parms_DMNR */
int init_bankB_parms_DMNR(void);

/* Symbol: Cal_mic2_blocking */
/* Demangled: Cal_mic2_blocking */
int Cal_mic2_blocking(void);

/* Symbol: UL_FrontEnd_16k */
/* Demangled: UL_FrontEnd_16k */
int UL_FrontEnd_16k(void);

/* Symbol: Rad4fft256 */
/* Demangled: Rad4fft256 */
int Rad4fft256(void);

/* Symbol: AGC_Fixed_sqrt */
/* Demangled: AGC_Fixed_sqrt */
int AGC_Fixed_sqrt(void);

/* Symbol: compute_TCL */
/* Demangled: compute_TCL */
int compute_TCL(void);

/* Symbol: init_vad3 */
/* Demangled: init_vad3 */
int init_vad3(void);

/* Symbol: ES_estimated_echo_control */
/* Demangled: ES_estimated_echo_control */
int ES_estimated_echo_control(void);

/* Symbol: ENH_API_Set_SQoS_ctrl_parameters */
/* Demangled: ENH_API_Set_SQoS_ctrl_parameters */
int ENH_API_Set_SQoS_ctrl_parameters(void);

/* Symbol: init_bankA_parms_DMNR */
/* Demangled: init_bankA_parms_DMNR */
int init_bankA_parms_DMNR(void);

/* Symbol: ABF_sb_PF_Smoothing_N */
/* Demangled: ABF_sb_PF_Smoothing_N */
extern void* ABF_sb_PF_Smoothing_N;

/* Symbol: NDC_Normalize_Gain_dB */
/* Demangled: NDC_Normalize_Gain_dB */
int NDC_Normalize_Gain_dB(void);

/* Symbol: init_FSH_parms */
/* Demangled: init_FSH_parms */
int init_FSH_parms(void);

/* Symbol: whistle_delay_Reset */
/* Demangled: whistle_delay_Reset */
int whistle_delay_Reset(void);

/* Symbol: cb_HR_calc_clean_envelop */
/* Demangled: cb_HR_calc_clean_envelop */
int cb_HR_calc_clean_envelop(void);

/* Symbol: cb_HR_clean_source */
/* Demangled: cb_HR_clean_source */
int cb_HR_clean_source(void);

/* Symbol: init_cb_data */
/* Demangled: init_cb_data */
int init_cb_data(void);

/* Symbol: NDC_IIR_64 */
/* Demangled: NDC_IIR_64 */
int NDC_IIR_64(void);

/* Symbol: ne_ds_hist */
/* Demangled: ne_ds_hist */
extern void* ne_ds_hist;

/* Symbol: init_cb_postfiltering */
/* Demangled: init_cb_postfiltering */
int init_cb_postfiltering(void);

/* Symbol: update_cb_postfiltering_spk */
/* Demangled: update_cb_postfiltering_spk */
int update_cb_postfiltering_spk(void);

/* Symbol: WB_NR_ToneDetection_HandFree */
/* Demangled: WB_NR_ToneDetection_HandFree */
int WB_NR_ToneDetection_HandFree(void);

/* Symbol: mdb2_linear */
/* Demangled: mdb2_linear */
int mdb2_linear(void);

/* Symbol: FIR_coef_HPF */
/* Demangled: FIR_coef_HPF */
extern void* FIR_coef_HPF;

/* Symbol: ENH_API_Update_DRC */
/* Demangled: ENH_API_Update_DRC */
int ENH_API_Update_DRC(void);

/* Symbol: DMNR_convert_Mic_selection_PD_B_A_thd */
/* Demangled: DMNR_convert_Mic_selection_PD_B_A_thd */
int DMNR_convert_Mic_selection_PD_B_A_thd(void);

/* Symbol: DMNR_convert_Mic_selection_speed_thd */
/* Demangled: DMNR_convert_Mic_selection_speed_thd */
int DMNR_convert_Mic_selection_speed_thd(void);

/* Symbol: DMNR_analysis_filter_spk */
/* Demangled: DMNR_analysis_filter_spk */
int DMNR_analysis_filter_spk(void);

/* Symbol: ENH_Mute_Begin_UL */
/* Demangled: ENH_Mute_Begin_UL */
int ENH_Mute_Begin_UL(void);

/* Symbol: LSPK_DT_improvBNAD1 */
/* Demangled: LSPK_DT_improvBNAD1 */
int LSPK_DT_improvBNAD1(void);

/* Symbol: delay_observe_band */
/* Demangled: delay_observe_band */
int delay_observe_band(void);

/* Symbol: ABF_sb_PF_Smoothing_S */
/* Demangled: ABF_sb_PF_Smoothing_S */
extern void* ABF_sb_PF_Smoothing_S;

/* Symbol: init_ASLR_parms_spk */
/* Demangled: init_ASLR_parms_spk */
int init_ASLR_parms_spk(void);

/* Symbol: subframe_num_switch_table */
/* Demangled: subframe_num_switch_table */
extern void* subframe_num_switch_table;

/* Symbol: ENH_API_Set_dl_enhance */
/* Demangled: ENH_API_Set_dl_enhance */
int ENH_API_Set_dl_enhance(void);

/* Symbol: ne2_ds_hist */
/* Demangled: ne2_ds_hist */
extern void* ne2_ds_hist;

/* Symbol: cb_HR_cem */
/* Demangled: cb_HR_cem */
int cb_HR_cem(void);

/* Symbol: ABF_CB_width */
/* Demangled: ABF_CB_width */
extern void* ABF_CB_width;

/* Symbol: adaptive_beamforming_spk */
/* Demangled: adaptive_beamforming_spk */
int adaptive_beamforming_spk(void);

/* Symbol: LinearEcho_weight */
/* Demangled: LinearEcho_weight */
int LinearEcho_weight(void);

/* Symbol: init_cb_energy_VAD */
/* Demangled: init_cb_energy_VAD */
int init_cb_energy_VAD(void);

/* Symbol: MR_channel_syn_flush_output */
/* Demangled: MR_channel_syn_flush_output */
int MR_channel_syn_flush_output(void);

/* Symbol: WB_NR_SuppressGainEst */
/* Demangled: WB_NR_SuppressGainEst */
int WB_NR_SuppressGainEst(void);

/* Symbol: DL_CC_Strength */
/* Demangled: DL_CC_Strength */
int DL_CC_Strength(void);

/* Symbol: DL_CC_Threshold */
/* Demangled: DL_CC_Threshold */
int DL_CC_Threshold(void);

/* Symbol: ENH_API_DL_AEC_Alloc */
/* Demangled: ENH_API_DL_AEC_Alloc */
int ENH_API_DL_AEC_Alloc(void);

/* Symbol: cb_postfiltering_lower_bound_gain */
/* Demangled: cb_postfiltering_lower_bound_gain */
int cb_postfiltering_lower_bound_gain(void);

/* Symbol: AGC_low_bound */
/* Demangled: AGC_low_bound */
int AGC_low_bound(void);

/* Symbol: ENH_API_Reset_DMNR_spk */
/* Demangled: ENH_API_Reset_DMNR_spk */
int ENH_API_Reset_DMNR_spk(void);

/* Symbol: IIR_64_MicIIR */
/* Demangled: IIR_64_MicIIR */
int IIR_64_MicIIR(void);

/* Symbol: Set_GDRC_Threshold */
/* Demangled: Set_GDRC_Threshold */
int Set_GDRC_Threshold(void);

/* Symbol: cb_HR_calc_harmonic_reference_spk */
/* Demangled: cb_HR_calc_harmonic_reference_spk */
int cb_HR_calc_harmonic_reference_spk(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd_FB_SPK */
/* Demangled: DMNR_convert_Mic_selection_PD_thd_FB_SPK */
int DMNR_convert_Mic_selection_PD_thd_FB_SPK(void);

/* Symbol: __aeabi_memmove */
/* Demangled: __aeabi_memmove */
int __aeabi_memmove(void);

/* Symbol: pack_div_s_32_32 */
/* Demangled: pack_div_s_32_32 */
int pack_div_s_32_32(void);

/* Symbol: cb_analysis */
/* Demangled: cb_analysis */
int cb_analysis(void);

/* Symbol: update_EPL_logger */
/* Demangled: update_EPL_logger */
int update_EPL_logger(void);

/* Symbol: ENH_API_Free_NDC */
/* Demangled: ENH_API_Free_NDC */
int ENH_API_Free_NDC(void);

/* Symbol: sumBandEnergy */
/* Demangled: sumBandEnergy */
int sumBandEnergy(void);

/* Symbol: NR_FixedNoiseEst */
/* Demangled: NR_FixedNoiseEst */
int NR_FixedNoiseEst(void);

/* Symbol: ENH_API_Get_BT_EC_Memory */
/* Demangled: ENH_API_Get_BT_EC_Memory */
int ENH_API_Get_BT_EC_Memory(void);

/* Symbol: linear_mdb2 */
/* Demangled: linear_mdb2 */
int linear_mdb2(void);

/* Symbol: DMNR_convert_Mic2_selection_PowerA_LB_Band0 */
/* Demangled: DMNR_convert_Mic2_selection_PowerA_LB_Band0 */
int DMNR_convert_Mic2_selection_PowerA_LB_Band0(void);

/* Symbol: IIR_allpass_stereo_record_Q23 */
/* Demangled: IIR_allpass_stereo_record_Q23 */
int IIR_allpass_stereo_record_Q23(void);

/* Symbol: ENH_API_Reset_STE */
/* Demangled: ENH_API_Reset_STE */
int ENH_API_Reset_STE(void);

/* Symbol: copyCmplx16 */
/* Demangled: copyCmplx16 */
int copyCmplx16(void);

/* Symbol: AGC_function */
/* Demangled: AGC_function */
int AGC_function(void);

/* Symbol: Set_AGC_48K */
/* Demangled: Set_AGC_48K */
int Set_AGC_48K(void);

/* Symbol: NR_SbAnalysis_48K */
/* Demangled: NR_SbAnalysis_48K */
int NR_SbAnalysis_48K(void);

/* Symbol: init_shadow_vad_struct */
/* Demangled: init_shadow_vad_struct */
int init_shadow_vad_struct(void);

/* Symbol: NR_DL_Reset */
/* Demangled: NR_DL_Reset */
int NR_DL_Reset(void);

/* Symbol: Set_MBDRC_TAV */
/* Demangled: Set_MBDRC_TAV */
int Set_MBDRC_TAV(void);

/* Symbol: AGC_sqrt_coef */
/* Demangled: AGC_sqrt_coef */
extern void* AGC_sqrt_coef;

/* Symbol: Normal_flt_process */
/* Demangled: Normal_flt_process */
int Normal_flt_process(void);

/* Symbol: Pre_nlms_whistle */
/* Demangled: Pre_nlms_whistle */
int Pre_nlms_whistle(void);

/* Symbol: NR_SBSynthesis_48K_Q23 */
/* Demangled: NR_SBSynthesis_48K_Q23 */
int NR_SBSynthesis_48K_Q23(void);

/* Symbol: ENH_API_Run_Ndc_UL */
/* Demangled: ENH_API_Run_Ndc_UL */
int ENH_API_Run_Ndc_UL(void);

/* Symbol: Pre_nlms */
/* Demangled: Pre_nlms */
int Pre_nlms(void);

/* Symbol: ENH_API_Module_Alloc */
/* Demangled: ENH_API_Module_Alloc */
int ENH_API_Module_Alloc(void);

/* Symbol: Mic2_process */
/* Demangled: Mic2_process */
int Mic2_process(void);

/* Symbol: set_ntd_ctrl */
/* Demangled: set_ntd_ctrl */
int set_ntd_ctrl(void);

/* Symbol: noise_estimation */
/* Demangled: noise_estimation */
int noise_estimation(void);

/* Symbol: vad_fe_HB */
/* Demangled: vad_fe_HB */
int vad_fe_HB(void);

/* Symbol: dctcos_22_NB */
/* Demangled: dctcos_22_NB */
extern void* dctcos_22_NB;

/* Symbol: cb_update_stationary_noise */
/* Demangled: cb_update_stationary_noise */
int cb_update_stationary_noise(void);

/* Symbol: cb_calc_speech_presence_prob_spk */
/* Demangled: cb_calc_speech_presence_prob_spk */
int cb_calc_speech_presence_prob_spk(void);

/* Symbol: dB2Linear_neg */
/* Demangled: dB2Linear_neg */
extern void* dB2Linear_neg;

/* Symbol: AGCGainREC */
/* Demangled: AGCGainREC */
int AGCGainREC(void);

/* Symbol: init_GCC_parms */
/* Demangled: init_GCC_parms */
int init_GCC_parms(void);

/* Symbol: Set_MBDRC_Hys */
/* Demangled: Set_MBDRC_Hys */
int Set_MBDRC_Hys(void);

/* Symbol: ENH_API_Get_Version */
/* Demangled: ENH_API_Get_Version */
int ENH_API_Get_Version(void);

/* Symbol: EPC_handling */
/* Demangled: EPC_handling */
int EPC_handling(void);

/* Symbol: reset_cb_data_spk */
/* Demangled: reset_cb_data_spk */
int reset_cb_data_spk(void);

/* Symbol: ENH_API_Init_Compressor_48K */
/* Demangled: ENH_API_Init_Compressor_48K */
int ENH_API_Init_Compressor_48K(void);

/* Symbol: BKF_WeightingTable */
/* Demangled: BKF_WeightingTable */
extern void* BKF_WeightingTable;

/* Symbol: EC_protect_band_value_table */
/* Demangled: EC_protect_band_value_table */
extern void* EC_protect_band_value_table;

/* Symbol: init_cb_data_spk */
/* Demangled: init_cb_data_spk */
int init_cb_data_spk(void);

/* Symbol: DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd */
/* Demangled: DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd */
int DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd(void);

/* Symbol: modify_stepsize_tcl */
/* Demangled: modify_stepsize_tcl */
int modify_stepsize_tcl(void);

/* Symbol: ABF_SB */
/* Demangled: ABF_SB */
int ABF_SB(void);

/* Symbol: ENH_API_SCH_Alloc */
/* Demangled: ENH_API_SCH_Alloc */
int ENH_API_SCH_Alloc(void);

/* Symbol: ENH_API_Free_MR */
/* Demangled: ENH_API_Free_MR */
int ENH_API_Free_MR(void);

/* Symbol: speech_band_analysis */
/* Demangled: speech_band_analysis */
int speech_band_analysis(void);

/* Symbol: SPLIT_RIFFT_Q31 */
/* Demangled: SPLIT_RIFFT_Q31 */
int SPLIT_RIFFT_Q31(void);

/* Symbol: SRC_upsample */
/* Demangled: SRC_upsample */
int SRC_upsample(void);

/* Symbol: StereoWiden */
/* Demangled: StereoWiden */
int StereoWiden(void);

/* Symbol: cb_postfiltering_lower_bound_gain_spk */
/* Demangled: cb_postfiltering_lower_bound_gain_spk */
int cb_postfiltering_lower_bound_gain_spk(void);

/* Symbol: __aeabi_memclr */
/* Demangled: __aeabi_memclr */
int __aeabi_memclr(void);

/* Symbol: power_limit_x */
/* Demangled: power_limit_x */
extern void* power_limit_x;

/* Symbol: Shadow_process_dl */
/* Demangled: Shadow_process_dl */
int Shadow_process_dl(void);

/* Symbol: Caluate_nser */
/* Demangled: Caluate_nser */
int Caluate_nser(void);

/* Symbol: init_vad_ne */
/* Demangled: init_vad_ne */
int init_vad_ne(void);

/* Symbol: round_s */
/* Demangled: round_s */
int round_s(void);

/* Symbol: power_limit */
/* Demangled: power_limit */
extern void* power_limit;

/* Symbol: sb_pwr_bias_shadow */
/* Demangled: sb_pwr_bias_shadow */
extern void* sb_pwr_bias_shadow;

/* Symbol: Cal_Ref_vowel */
/* Demangled: Cal_Ref_vowel */
int Cal_Ref_vowel(void);

/* Symbol: FSH */
/* Demangled: FSH */
int FSH(void);

/* Symbol: getBinEnergy_WB */
/* Demangled: getBinEnergy_WB */
int getBinEnergy_WB(void);

/* Symbol: ENH_INFO_DMNR_compresss */
/* Demangled: ENH_INFO_DMNR_compresss */
int ENH_INFO_DMNR_compresss(void);

/* Symbol: init_SF_parms */
/* Demangled: init_SF_parms */
int init_SF_parms(void);

/* Symbol: NR_UL_Init */
/* Demangled: NR_UL_Init */
int NR_UL_Init(void);

/* Symbol: AGC_time_GainEst */
/* Demangled: AGC_time_GainEst */
int AGC_time_GainEst(void);

/* Symbol: calc_HB_VAD */
/* Demangled: calc_HB_VAD */
int calc_HB_VAD(void);

/* Symbol: Wn_i_256 */
/* Demangled: Wn_i_256 */
extern void* Wn_i_256;

/* Symbol: EC_Init_Coeff_Exp_Table1 */
/* Demangled: EC_Init_Coeff_Exp_Table1 */
extern void* EC_Init_Coeff_Exp_Table1;

/* Symbol: full_band_es */
/* Demangled: full_band_es */
int full_band_es(void);

/* Symbol: cb_less_gain_protection_spk */
/* Demangled: cb_less_gain_protection_spk */
int cb_less_gain_protection_spk(void);

/* Symbol: DMNR_convert_TMOS_POWER_THD */
/* Demangled: DMNR_convert_TMOS_POWER_THD */
int DMNR_convert_TMOS_POWER_THD(void);

/* Symbol: MusicEst */
/* Demangled: MusicEst */
int MusicEst(void);

/* Symbol: ENH_API_Update_Parameter */
/* Demangled: ENH_API_Update_Parameter */
int ENH_API_Update_Parameter(void);

/* Symbol: EC_Init_Coeff_Exp_Table2 */
/* Demangled: EC_Init_Coeff_Exp_Table2 */
extern void* EC_Init_Coeff_Exp_Table2;

/* Symbol: ENH_API_Get_CB_Memory_PF_spk */
/* Demangled: ENH_API_Get_CB_Memory_PF_spk */
int ENH_API_Get_CB_Memory_PF_spk(void);

/* Symbol: init_cb_struct_spk */
/* Demangled: init_cb_struct_spk */
int init_cb_struct_spk(void);

/* Symbol: debug_read */
/* Demangled: debug_read */
int debug_read(void);

/* Symbol: check_module_triggered_to_reset */
/* Demangled: check_module_triggered_to_reset */
int check_module_triggered_to_reset(void);

/* Symbol: DMNR_mic1_VAD */
/* Demangled: DMNR_mic1_VAD */
int DMNR_mic1_VAD(void);

/* Symbol: IIR_coef_16k_set1 */
/* Demangled: IIR_coef_16k_set1 */
extern void* IIR_coef_16k_set1;

/* Symbol: EC_Init_Coeff_Exp_Table3 */
/* Demangled: EC_Init_Coeff_Exp_Table3 */
extern void* EC_Init_Coeff_Exp_Table3;

/* Symbol: ENH_API_Get_CB_Memory_PF */
/* Demangled: ENH_API_Get_CB_Memory_PF */
int ENH_API_Get_CB_Memory_PF(void);

/* Symbol: init_agc_comp */
/* Demangled: init_agc_comp */
int init_agc_comp(void);

/* Symbol: IIR_coef_16k_set2 */
/* Demangled: IIR_coef_16k_set2 */
extern void* IIR_coef_16k_set2;

/* Symbol: fe_us_hist */
/* Demangled: fe_us_hist */
extern void* fe_us_hist;

/* Symbol: AGC_Release_THD */
/* Demangled: AGC_Release_THD */
int AGC_Release_THD(void);

/* Symbol: ENH_API_Compressor_48K_Alloc */
/* Demangled: ENH_API_Compressor_48K_Alloc */
int ENH_API_Compressor_48K_Alloc(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd_HB */
/* Demangled: DMNR_convert_Mic_selection_PD_thd_HB */
int DMNR_convert_Mic_selection_PD_thd_HB(void);

/* Symbol: abf_sb_pwr_bias_shadow */
/* Demangled: abf_sb_pwr_bias_shadow */
extern void* abf_sb_pwr_bias_shadow;

/* Symbol: IIR_coef_16k_set3 */
/* Demangled: IIR_coef_16k_set3 */
extern void* IIR_coef_16k_set3;

/* Symbol: WB_NR_SuppressGainSmoothing */
/* Demangled: WB_NR_SuppressGainSmoothing */
int WB_NR_SuppressGainSmoothing(void);

/* Symbol: init_cb_struct */
/* Demangled: init_cb_struct */
int init_cb_struct(void);

/* Symbol: cb_single_mic_detect_SND_DIST_spk */
/* Demangled: cb_single_mic_detect_SND_DIST_spk */
int cb_single_mic_detect_SND_DIST_spk(void);

/* Symbol: set_cpsr_thd */
/* Demangled: set_cpsr_thd */
int set_cpsr_thd(void);

/* Symbol: IIR_coef_16k_set4 */
/* Demangled: IIR_coef_16k_set4 */
extern void* IIR_coef_16k_set4;

/* Symbol: MusicDet */
/* Demangled: MusicDet */
int MusicDet(void);

/* Symbol: cb_postfiltering_runtime_check */
/* Demangled: cb_postfiltering_runtime_check */
int cb_postfiltering_runtime_check(void);

/* Symbol: update_cb_hVAD_spk */
/* Demangled: update_cb_hVAD_spk */
int update_cb_hVAD_spk(void);

/* Symbol: IIR_coef_16k_set5 */
/* Demangled: IIR_coef_16k_set5 */
extern void* IIR_coef_16k_set5;

/* Symbol: ENH_API_Run_Low_Latency */
/* Demangled: ENH_API_Run_Low_Latency */
int ENH_API_Run_Low_Latency(void);

/* Symbol: ABF_KBD */
/* Demangled: ABF_KBD */
extern void* ABF_KBD;

/* Symbol: IIR_coef_16k_set6 */
/* Demangled: IIR_coef_16k_set6 */
extern void* IIR_coef_16k_set6;

/* Symbol: NR_DL_Init */
/* Demangled: NR_DL_Init */
int NR_DL_Init(void);

/* Symbol: ENH_API_Update_AEC */
/* Demangled: ENH_API_Update_AEC */
int ENH_API_Update_AEC(void);

/* Symbol: IIR_coef_16k_set7 */
/* Demangled: IIR_coef_16k_set7 */
extern void* IIR_coef_16k_set7;

/* Symbol: nlms_abf */
/* Demangled: nlms_abf */
int nlms_abf(void);

/* Symbol: BitRev */
/* Demangled: BitRev */
int BitRev(void);

/* Symbol: sb_dl_aec */
/* Demangled: sb_dl_aec */
int sb_dl_aec(void);

/* Symbol: ENH_API_Update_CB */
/* Demangled: ENH_API_Update_CB */
int ENH_API_Update_CB(void);

/* Symbol: ABM_runtime_check */
/* Demangled: ABM_runtime_check */
int ABM_runtime_check(void);

/* Symbol: ENH_API_Get_MR_Memory */
/* Demangled: ENH_API_Get_MR_Memory */
int ENH_API_Get_MR_Memory(void);

/* Symbol: MBDRC_Reset */
/* Demangled: MBDRC_Reset */
int MBDRC_Reset(void);

/* Symbol: SmoothAmp */
/* Demangled: SmoothAmp */
int SmoothAmp(void);

/* Symbol: sub_band_sig_nf_compute */
/* Demangled: sub_band_sig_nf_compute */
int sub_band_sig_nf_compute(void);

/* Symbol: cb_expander_update */
/* Demangled: cb_expander_update */
int cb_expander_update(void);

/* Symbol: ABM_calc_VAD */
/* Demangled: ABM_calc_VAD */
int ABM_calc_VAD(void);

/* Symbol: DIF_FFT_Fix32_256 */
/* Demangled: DIF_FFT_Fix32_256 */
int DIF_FFT_Fix32_256(void);

/* Symbol: fe_ds_hist */
/* Demangled: fe_ds_hist */
extern void* fe_ds_hist;

/* Symbol: STE_Richen_Side_H_t */
/* Demangled: STE_Richen_Side_H_t */
extern void* STE_Richen_Side_H_t;

/* Symbol: Switch_SPK_ECrelated */
/* Demangled: Switch_SPK_ECrelated */
int Switch_SPK_ECrelated(void);

/* Symbol: ENH_API_update_Low_Latency */
/* Demangled: ENH_API_update_Low_Latency */
int ENH_API_update_Low_Latency(void);

/* Symbol: us_hist */
/* Demangled: us_hist */
extern void* us_hist;

/* Symbol: cb_apply_gain_buffer_AEC_spk */
/* Demangled: cb_apply_gain_buffer_AEC_spk */
int cb_apply_gain_buffer_AEC_spk(void);

/* Symbol: init_Mic_selection_parms */
/* Demangled: init_Mic_selection_parms */
int init_Mic_selection_parms(void);

/* Symbol: MBDRC_IIR_alpha_Table */
/* Demangled: MBDRC_IIR_alpha_Table */
extern void* MBDRC_IIR_alpha_Table;

/* Symbol: CNG_noise_level */
/* Demangled: CNG_noise_level */
int CNG_noise_level(void);

/* Symbol: STE_Richen_Side_L_t */
/* Demangled: STE_Richen_Side_L_t */
extern void* STE_Richen_Side_L_t;

/* Symbol: cb_HR_check_enablity */
/* Demangled: cb_HR_check_enablity */
int cb_HR_check_enablity(void);

/* Symbol: CB_convert_es_cem_value_THD */
/* Demangled: CB_convert_es_cem_value_THD */
int CB_convert_es_cem_value_THD(void);

/* Symbol: nlms_update_sig_pwr */
/* Demangled: nlms_update_sig_pwr */
int nlms_update_sig_pwr(void);

/* Symbol: ANENoiseEst */
/* Demangled: ANENoiseEst */
int ANENoiseEst(void);

/* Symbol: EC_stepsize_improve_band1_value_table */
/* Demangled: EC_stepsize_improve_band1_value_table */
extern void* EC_stepsize_improve_band1_value_table;

/* Symbol: vad_frontend_whistle */
/* Demangled: vad_frontend_whistle */
int vad_frontend_whistle(void);

/* Symbol: ABF_FIXED_DFT */
/* Demangled: ABF_FIXED_DFT */
int ABF_FIXED_DFT(void);

/* Symbol: compressor_48K_0 */
/* Demangled: compressor_48K_0 */
int compressor_48K_0(void);

/* Symbol: compressor_48K_1 */
/* Demangled: compressor_48K_1 */
int compressor_48K_1(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd2_HB */
/* Demangled: DMNR_convert_Mic_selection_PD_thd2_HB */
int DMNR_convert_Mic_selection_PD_thd2_HB(void);

/* Symbol: NR_Strength_Table */
/* Demangled: NR_Strength_Table */
extern void* NR_Strength_Table;

/* Symbol: WB_NR_PostProcessing */
/* Demangled: WB_NR_PostProcessing */
int WB_NR_PostProcessing(void);

/* Symbol: ASIE_convert_releaseTime */
/* Demangled: ASIE_convert_releaseTime */
int ASIE_convert_releaseTime(void);

/* Symbol: Table_TAV */
/* Demangled: Table_TAV */
extern void* Table_TAV;

/* Symbol: ENH_API_STE_Alloc */
/* Demangled: ENH_API_STE_Alloc */
int ENH_API_STE_Alloc(void);

/* Symbol: debug_fprint */
/* Demangled: debug_fprint */
int debug_fprint(void);

/* Symbol: nlms_whistle */
/* Demangled: nlms_whistle */
int nlms_whistle(void);

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

/* Symbol: reset_cb_GCC */
/* Demangled: reset_cb_GCC */
int reset_cb_GCC(void);

/* Symbol: whistle_suppress */
/* Demangled: whistle_suppress */
int whistle_suppress(void);

/* Symbol: ds_hist */
/* Demangled: ds_hist */
extern void* ds_hist;

/* Symbol: dB2Linear_pos */
/* Demangled: dB2Linear_pos */
extern void* dB2Linear_pos;

/* Symbol: ULDL_GainControl_Init */
/* Demangled: ULDL_GainControl_Init */
int ULDL_GainControl_Init(void);

/* Symbol: MBDRC_Gain_Index */
/* Demangled: MBDRC_Gain_Index */
extern void* MBDRC_Gain_Index;

/* Symbol: mpf_compensate */
/* Demangled: mpf_compensate */
int mpf_compensate(void);

/* Symbol: ENH_API_Get_DL_enh_start_flag */
/* Demangled: ENH_API_Get_DL_enh_start_flag */
int ENH_API_Get_DL_enh_start_flag(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: cb_postfiltering_gain_protection_spk */
/* Demangled: cb_postfiltering_gain_protection_spk */
int cb_postfiltering_gain_protection_spk(void);

/* Symbol: getSpecLocalMax */
/* Demangled: getSpecLocalMax */
int getSpecLocalMax(void);

/* Symbol: cb_ES_prevent_add_on */
/* Demangled: cb_ES_prevent_add_on */
int cb_ES_prevent_add_on(void);

/* Symbol: reset_fft_es_struct */
/* Demangled: reset_fft_es_struct */
int reset_fft_es_struct(void);

/* Symbol: DMNR_convert_Mic_selection_max_prob_thd */
/* Demangled: DMNR_convert_Mic_selection_max_prob_thd */
int DMNR_convert_Mic_selection_max_prob_thd(void);

/* Symbol: AGC_dB2Linear_neg */
/* Demangled: AGC_dB2Linear_neg */
extern void* AGC_dB2Linear_neg;

/* Symbol: ENH_API_Get_CB_Memory_FFT */
/* Demangled: ENH_API_Get_CB_Memory_FFT */
int ENH_API_Get_CB_Memory_FFT(void);

/* Symbol: DL_ClarityControl_Reset */
/* Demangled: DL_ClarityControl_Reset */
int DL_ClarityControl_Reset(void);

/* Symbol: twid_tab256_fast */
/* Demangled: twid_tab256_fast */
extern void* twid_tab256_fast;

/* Symbol: importFunc */
/* Demangled: importFunc */
extern void* importFunc;

/* Symbol: WB_NR_SpeechProbEst */
/* Demangled: WB_NR_SpeechProbEst */
int WB_NR_SpeechProbEst(void);

/* Symbol: ENH_API_Get_Memory */
/* Demangled: ENH_API_Get_Memory */
int ENH_API_Get_Memory(void);

/* Symbol: Set_coefValue */
/* Demangled: Set_coefValue */
int Set_coefValue(void);

/* Symbol: ASIE_convert_noiseDBGain */
/* Demangled: ASIE_convert_noiseDBGain */
int ASIE_convert_noiseDBGain(void);

/* Symbol: update_param_parser */
/* Demangled: update_param_parser */
int update_param_parser(void);

/* Symbol: ABF_CB_swap_table_spk */
/* Demangled: ABF_CB_swap_table_spk */
extern void* ABF_CB_swap_table_spk;

/* Symbol: ENH_API_Process */
/* Demangled: ENH_API_Process */
int ENH_API_Process(void);

/* Symbol: dB_Mult */
/* Demangled: dB_Mult */
int dB_Mult(void);

/* Symbol: EC_protect_band_value */
/* Demangled: EC_protect_band_value */
int EC_protect_band_value(void);

/* Symbol: MBDRC_IIR_Coef_div */
/* Demangled: MBDRC_IIR_Coef_div */
extern void* MBDRC_IIR_Coef_div;

/* Symbol: init_cb_hVAD */
/* Demangled: init_cb_hVAD */
int init_cb_hVAD(void);

/* Symbol: ENH_API_Free_DMNR */
/* Demangled: ENH_API_Free_DMNR */
int ENH_API_Free_DMNR(void);

/* Symbol: reset_ntd_struct */
/* Demangled: reset_ntd_struct */
int reset_ntd_struct(void);

/* Symbol: div_s_32_vot */
/* Demangled: div_s_32_vot */
int div_s_32_vot(void);

/* Symbol: NR_Agg_Mode_Table */
/* Demangled: NR_Agg_Mode_Table */
extern void* NR_Agg_Mode_Table;

/* Symbol: ENH_API_whistle_AEC_Alloc */
/* Demangled: ENH_API_whistle_AEC_Alloc */
int ENH_API_whistle_AEC_Alloc(void);

/* Symbol: DEBUG_CB_OBS_BIN */
/* Demangled: DEBUG_CB_OBS_BIN */
extern void* DEBUG_CB_OBS_BIN;

/* Symbol: ENH_API_CB_Alloc_ES */
/* Demangled: ENH_API_CB_Alloc_ES */
int ENH_API_CB_Alloc_ES(void);

/* Symbol: cb_postfiltering_apply_uncertainty_spk */
/* Demangled: cb_postfiltering_apply_uncertainty_spk */
int cb_postfiltering_apply_uncertainty_spk(void);

/* Symbol: fb_ASLR_noise_esti_spk */
/* Demangled: fb_ASLR_noise_esti_spk */
int fb_ASLR_noise_esti_spk(void);

/* Symbol: num_taps_shadow_abf */
/* Demangled: num_taps_shadow_abf */
extern void* num_taps_shadow_abf;

/* Symbol: DG_VCE_gain_t */
/* Demangled: DG_VCE_gain_t */
extern void* DG_VCE_gain_t;

/* Symbol: StereoEnhance */
/* Demangled: StereoEnhance */
int StereoEnhance(void);

/* Symbol: STE_2nd_IIR_Bass */
/* Demangled: STE_2nd_IIR_Bass */
int STE_2nd_IIR_Bass(void);

/* Symbol: powerNormalize */
/* Demangled: powerNormalize */
int powerNormalize(void);

/* Symbol: cb_postfiltering_calc_gain */
/* Demangled: cb_postfiltering_calc_gain */
int cb_postfiltering_calc_gain(void);

/* Symbol: pf_WB */
/* Demangled: pf_WB */
extern void* pf_WB;

/* Symbol: awBitRevTable */
/* Demangled: awBitRevTable */
extern void* awBitRevTable;

/* Symbol: init_PR_vad */
/* Demangled: init_PR_vad */
int init_PR_vad(void);

/* Symbol: ABF_cal_process_spk */
/* Demangled: ABF_cal_process_spk */
int ABF_cal_process_spk(void);

/* Symbol: SB_NORMAL_DMNR */
/* Demangled: SB_NORMAL_DMNR */
int SB_NORMAL_DMNR(void);

/* Symbol: ENH_API_Free */
/* Demangled: ENH_API_Free */
int ENH_API_Free(void);

/* Symbol: __aeabi_memmove4 */
/* Demangled: __aeabi_memmove4 */
int __aeabi_memmove4(void);

/* Symbol: sum_bin_to_avg_band_energy */
/* Demangled: sum_bin_to_avg_band_energy */
int sum_bin_to_avg_band_energy(void);

/* Symbol: Search_Max */
/* Demangled: Search_Max */
int Search_Max(void);

/* Symbol: init_sb_nlms */
/* Demangled: init_sb_nlms */
int init_sb_nlms(void);

/* Symbol: DFT_update_GCC */
/* Demangled: DFT_update_GCC */
int DFT_update_GCC(void);

/* Symbol: init_ASLR */
/* Demangled: init_ASLR */
int init_ASLR(void);

/* Symbol: ENH_API_Init_DMNR_spk */
/* Demangled: ENH_API_Init_DMNR_spk */
int ENH_API_Init_DMNR_spk(void);

/* Symbol: reset_cb_struct_spk */
/* Demangled: reset_cb_struct_spk */
int reset_cb_struct_spk(void);

/* Symbol: DlMusicDetL1aTblInit */
/* Demangled: DlMusicDetL1aTblInit */
extern void* DlMusicDetL1aTblInit;

/* Symbol: FFT_scaling_32to16bit */
/* Demangled: FFT_scaling_32to16bit */
int FFT_scaling_32to16bit(void);

/* Symbol: ENH_API_Reset_GDRC */
/* Demangled: ENH_API_Reset_GDRC */
int ENH_API_Reset_GDRC(void);

/* Symbol: set_module_activities */
/* Demangled: set_module_activities */
int set_module_activities(void);

/* Symbol: update_cb_postfiltering */
/* Demangled: update_cb_postfiltering */
int update_cb_postfiltering(void);

/* Symbol: ABF_AGC_Gain_Compensation_spk */
/* Demangled: ABF_AGC_Gain_Compensation_spk */
int ABF_AGC_Gain_Compensation_spk(void);

/* Symbol: UL_DRC_Exp_Gain_Target */
/* Demangled: UL_DRC_Exp_Gain_Target */
int UL_DRC_Exp_Gain_Target(void);

/* Symbol: __aeabi_memmove8 */
/* Demangled: __aeabi_memmove8 */
int __aeabi_memmove8(void);

/* Symbol: calculate_noise_floor */
/* Demangled: calculate_noise_floor */
int calculate_noise_floor(void);

/* Symbol: cb_update_stationary_noise_spk */
/* Demangled: cb_update_stationary_noise_spk */
int cb_update_stationary_noise_spk(void);

/* Symbol: subframe_num_switch */
/* Demangled: subframe_num_switch */
extern void* subframe_num_switch;

/* Symbol: num_taps_shadow */
/* Demangled: num_taps_shadow */
extern void* num_taps_shadow;

/* Symbol: amplifySubband */
/* Demangled: amplifySubband */
int amplifySubband(void);

/* Symbol: cb_HR_NL */
/* Demangled: cb_HR_NL */
int cb_HR_NL(void);

/* Symbol: Gain_AR_Rate_8 */
/* Demangled: Gain_AR_Rate_8 */
extern void* Gain_AR_Rate_8;

/* Symbol: STE_FIR */
/* Demangled: STE_FIR */
int STE_FIR(void);

/* Symbol: align_fractional_point_32 */
/* Demangled: align_fractional_point_32 */
int align_fractional_point_32(void);

/* Symbol: BMG_table */
/* Demangled: BMG_table */
extern void* BMG_table;

/* Symbol: AF */
/* Demangled: AF */
int AF(void);

/* Symbol: RFFT_32_Q31 */
/* Demangled: RFFT_32_Q31 */
int RFFT_32_Q31(void);

/* Symbol: UlDlMusicDet_L1aTblInit */
/* Demangled: UlDlMusicDet_L1aTblInit */
int UlDlMusicDet_L1aTblInit(void);

/* Symbol: ntd_get_current_spec */
/* Demangled: ntd_get_current_spec */
int ntd_get_current_spec(void);

/* Symbol: IIR_64_MicIIR_stereo */
/* Demangled: IIR_64_MicIIR_stereo */
int IIR_64_MicIIR_stereo(void);

/* Symbol: WB_NR_SetLevel */
/* Demangled: WB_NR_SetLevel */
int WB_NR_SetLevel(void);

/* Symbol: init_vad_fe */
/* Demangled: init_vad_fe */
int init_vad_fe(void);

/* Symbol: Get_Suppress_info */
/* Demangled: Get_Suppress_info */
int Get_Suppress_info(void);

/* Symbol: cb_main */
/* Demangled: cb_main */
int cb_main(void);

/* Symbol: cb_SND_protection */
/* Demangled: cb_SND_protection */
int cb_SND_protection(void);

/* Symbol: ENH_API_DMNR_Alloc_BankB */
/* Demangled: ENH_API_DMNR_Alloc_BankB */
int ENH_API_DMNR_Alloc_BankB(void);

/* Symbol: ABF_postfiltering */
/* Demangled: ABF_postfiltering */
int ABF_postfiltering(void);

/* Symbol: All_Pass_Filter_Computation */
/* Demangled: All_Pass_Filter_Computation */
int All_Pass_Filter_Computation(void);

/* Symbol: SRC_init */
/* Demangled: SRC_init */
int SRC_init(void);

/* Symbol: STE_Widen_Center_t */
/* Demangled: STE_Widen_Center_t */
extern void* STE_Widen_Center_t;

/* Symbol: Graphical_UI_DRC_Mono_24Bit */
/* Demangled: Graphical_UI_DRC_Mono_24Bit */
int Graphical_UI_DRC_Mono_24Bit(void);

/* Symbol: ABF_Complex_FBF_and_BM */
/* Demangled: ABF_Complex_FBF_and_BM */
int ABF_Complex_FBF_and_BM(void);

/* Symbol: init_agc_comp_spk */
/* Demangled: init_agc_comp_spk */
int init_agc_comp_spk(void);

/* Symbol: ENH_API_Update_MR */
/* Demangled: ENH_API_Update_MR */
int ENH_API_Update_MR(void);

/* Symbol: BKF_SoftChange_WeightingTable */
/* Demangled: BKF_SoftChange_WeightingTable */
extern void* BKF_SoftChange_WeightingTable;

/* Symbol: ENH_API_Free_STE */
/* Demangled: ENH_API_Free_STE */
int ENH_API_Free_STE(void);

/* Symbol: ENH_API_Reset_SCH */
/* Demangled: ENH_API_Reset_SCH */
int ENH_API_Reset_SCH(void);

/* Symbol: checkIsLoudNoise */
/* Demangled: checkIsLoudNoise */
int checkIsLoudNoise(void);

/* Symbol: ENH_API_Run_HVAD */
/* Demangled: ENH_API_Run_HVAD */
int ENH_API_Run_HVAD(void);

/* Symbol: cb_calc_speech_absence_prob_BM */
/* Demangled: cb_calc_speech_absence_prob_BM */
int cb_calc_speech_absence_prob_BM(void);

/* Symbol: ABF_AGC_Gain_Compensation */
/* Demangled: ABF_AGC_Gain_Compensation */
int ABF_AGC_Gain_Compensation(void);

/* Symbol: ENH_API_Run_Ndc_DL */
/* Demangled: ENH_API_Run_Ndc_DL */
int ENH_API_Run_Ndc_DL(void);

/* Symbol: ENH_API_Get_UL_enh_start_flag */
/* Demangled: ENH_API_Get_UL_enh_start_flag */
int ENH_API_Get_UL_enh_start_flag(void);

/* Symbol: pf_NB */
/* Demangled: pf_NB */
extern void* pf_NB;

/* Symbol: Set_MBDRC_freq */
/* Demangled: Set_MBDRC_freq */
int Set_MBDRC_freq(void);

/* Symbol: ESR_THD */
/* Demangled: ESR_THD */
extern void* ESR_THD;

/* Symbol: ABF_mic2_blocking_detection_spk */
/* Demangled: ABF_mic2_blocking_detection_spk */
int ABF_mic2_blocking_detection_spk(void);

/* Symbol: cb_main_spk */
/* Demangled: cb_main_spk */
int cb_main_spk(void);

/* Symbol: write_EPL_logger */
/* Demangled: write_EPL_logger */
int write_EPL_logger(void);

/* Symbol: abf_nlms_stepsize_normal */
/* Demangled: abf_nlms_stepsize_normal */
extern void* abf_nlms_stepsize_normal;

/* Symbol: Gama_Array */
/* Demangled: Gama_Array */
extern void* Gama_Array;

/* Symbol: SRC_Coef */
/* Demangled: SRC_Coef */
extern void* SRC_Coef;

/* Symbol: init_vad_DMNR */
/* Demangled: init_vad_DMNR */
int init_vad_DMNR(void);

/* Symbol: ENH_API_Get_frame_length */
/* Demangled: ENH_API_Get_frame_length */
int ENH_API_Get_frame_length(void);

/* Symbol: update_cb_expander */
/* Demangled: update_cb_expander */
int update_cb_expander(void);

/* Symbol: Radix2_Bfly_Q31 */
/* Demangled: Radix2_Bfly_Q31 */
int Radix2_Bfly_Q31(void);

/* Symbol: FIR_Q15_36tap */
/* Demangled: FIR_Q15_36tap */
int FIR_Q15_36tap(void);

/* Symbol: BGNT_stepsize_weighting_value */
/* Demangled: BGNT_stepsize_weighting_value */
int BGNT_stepsize_weighting_value(void);

/* Symbol: specEnergyBalancing */
/* Demangled: specEnergyBalancing */
int specEnergyBalancing(void);

/* Symbol: ENH_API_Run_CB_spk */
/* Demangled: ENH_API_Run_CB_spk */
int ENH_API_Run_CB_spk(void);

/* Symbol: Set_NR_VAD_thd */
/* Demangled: Set_NR_VAD_thd */
int Set_NR_VAD_thd(void);

/* Symbol: NR_48K_DB_LINEAR */
/* Demangled: NR_48K_DB_LINEAR */
extern void* NR_48K_DB_LINEAR;

/* Symbol: NR_MCRANoiseEst */
/* Demangled: NR_MCRANoiseEst */
int NR_MCRANoiseEst(void);

/* Symbol: dctcos_1_WB */
/* Demangled: dctcos_1_WB */
extern void* dctcos_1_WB;

/* Symbol: NR_UL_Reset */
/* Demangled: NR_UL_Reset */
int NR_UL_Reset(void);

/* Symbol: Set_NR_upper_bound_offset */
/* Demangled: Set_NR_upper_bound_offset */
int Set_NR_upper_bound_offset(void);

/* Symbol: CB2OB_band_idx */
/* Demangled: CB2OB_band_idx */
extern void* CB2OB_band_idx;

/* Symbol: MBPL_Estimate */
/* Demangled: MBPL_Estimate */
int MBPL_Estimate(void);

/* Symbol: calibrateSpeechLevel_posGain */
/* Demangled: calibrateSpeechLevel_posGain */
int calibrateSpeechLevel_posGain(void);

/* Symbol: MusicDet_StaticMemInit */
/* Demangled: MusicDet_StaticMemInit */
int MusicDet_StaticMemInit(void);

/* Symbol: AGC_dB2Linear_pos */
/* Demangled: AGC_dB2Linear_pos */
extern void* AGC_dB2Linear_pos;

/* Symbol: EC_protect_ratio_value_table */
/* Demangled: EC_protect_ratio_value_table */
extern void* EC_protect_ratio_value_table;

/* Symbol: AEC_AES_bound */
/* Demangled: AEC_AES_bound */
int AEC_AES_bound(void);

/* Symbol: delay_observe_band_7_11 */
/* Demangled: delay_observe_band_7_11 */
int delay_observe_band_7_11(void);

/* Symbol: asie_enhancer */
/* Demangled: asie_enhancer */
int asie_enhancer(void);

/* Symbol: MR_channel_synthesis */
/* Demangled: MR_channel_synthesis */
int MR_channel_synthesis(void);

/* Symbol: ASIE_prms_init */
/* Demangled: ASIE_prms_init */
int ASIE_prms_init(void);

/* Symbol: applySubbandDBGain */
/* Demangled: applySubbandDBGain */
int applySubbandDBGain(void);

/* Symbol: thd_mapping */
/* Demangled: thd_mapping */
int thd_mapping(void);

/* Symbol: MBPL_DG_ASIE_Gain_Apply */
/* Demangled: MBPL_DG_ASIE_Gain_Apply */
int MBPL_DG_ASIE_Gain_Apply(void);

/* Symbol: UlMusicDetL1aTblInit */
/* Demangled: UlMusicDetL1aTblInit */
extern void* UlMusicDetL1aTblInit;

/* Symbol: est_echo_weighting */
/* Demangled: est_echo_weighting */
extern void* est_echo_weighting;

/* Symbol: cb_calc_envelop_ratio */
/* Demangled: cb_calc_envelop_ratio */
int cb_calc_envelop_ratio(void);

/* Symbol: cb_postfiltering_calc_energy_VAD */
/* Demangled: cb_postfiltering_calc_energy_VAD */
int cb_postfiltering_calc_energy_VAD(void);

/* Symbol: CB_IFFT_spk */
/* Demangled: CB_IFFT_spk */
int CB_IFFT_spk(void);

/* Symbol: Cal_mic_selection */
/* Demangled: Cal_mic_selection */
int Cal_mic_selection(void);

/* Symbol: SB_analysis_whistle */
/* Demangled: SB_analysis_whistle */
int SB_analysis_whistle(void);

/* Symbol: Low_Latency_D2T_Normalized */
/* Demangled: Low_Latency_D2T_Normalized */
int Low_Latency_D2T_Normalized(void);

/* Symbol: UL_DRC */
/* Demangled: UL_DRC */
int UL_DRC(void);

/* Symbol: MBDRC_HalfBand_IIR_Coefs_Init */
/* Demangled: MBDRC_HalfBand_IIR_Coefs_Init */
int MBDRC_HalfBand_IIR_Coefs_Init(void);

/* Symbol: asdwRealCoefBQ31 */
/* Demangled: asdwRealCoefBQ31 */
extern void* asdwRealCoefBQ31;

/* Symbol: ENH_API_NDC_Alloc_DRC */
/* Demangled: ENH_API_NDC_Alloc_DRC */
int ENH_API_NDC_Alloc_DRC(void);

/* Symbol: ENH_API_Reset_DRC */
/* Demangled: ENH_API_Reset_DRC */
int ENH_API_Reset_DRC(void);

/* Symbol: Fixed_pow2 */
/* Demangled: Fixed_pow2 */
int Fixed_pow2(void);

/* Symbol: Echo_Suppress */
/* Demangled: Echo_Suppress */
int Echo_Suppress(void);

/* Symbol: ENH_API_Init_CB */
/* Demangled: ENH_API_Init_CB */
int ENH_API_Init_CB(void);

/* Symbol: reset_cb_struct */
/* Demangled: reset_cb_struct */
int reset_cb_struct(void);

/* Symbol: DRC_bounder_attack_rate1 */
/* Demangled: DRC_bounder_attack_rate1 */
extern void* DRC_bounder_attack_rate1;

/* Symbol: Gain_AR_Rate_16 */
/* Demangled: Gain_AR_Rate_16 */
extern void* Gain_AR_Rate_16;

/* Symbol: cb_nonlinear_echo_estimate */
/* Demangled: cb_nonlinear_echo_estimate */
int cb_nonlinear_echo_estimate(void);

/* Symbol: ENH_API_Check_AEC_Mic_status */
/* Demangled: ENH_API_Check_AEC_Mic_status */
int ENH_API_Check_AEC_Mic_status(void);

/* Symbol: DRC_bounder_attack_rate2 */
/* Demangled: DRC_bounder_attack_rate2 */
extern void* DRC_bounder_attack_rate2;

/* Symbol: calculateSII */
/* Demangled: calculateSII */
int calculateSII(void);

/* Symbol: NR_KBD_Window_480p */
/* Demangled: NR_KBD_Window_480p */
extern void* NR_KBD_Window_480p;

/* Symbol: cb_postfiltering_runtime_check_spk */
/* Demangled: cb_postfiltering_runtime_check_spk */
int cb_postfiltering_runtime_check_spk(void);

/* Symbol: init_power_difference_struct */
/* Demangled: init_power_difference_struct */
int init_power_difference_struct(void);

/* Symbol: AGC_Reverse_Gain_Compensation_spk */
/* Demangled: AGC_Reverse_Gain_Compensation_spk */
int AGC_Reverse_Gain_Compensation_spk(void);

/* Symbol: DMNR_convert_PF_Hmin_SPK */
/* Demangled: DMNR_convert_PF_Hmin_SPK */
int DMNR_convert_PF_Hmin_SPK(void);

/* Symbol: IIR_coef_a2_Tunable_16k_set1 */
/* Demangled: IIR_coef_a2_Tunable_16k_set1 */
extern void* IIR_coef_a2_Tunable_16k_set1;

/* Symbol: cb_postfiltering_calc_noise */
/* Demangled: cb_postfiltering_calc_noise */
int cb_postfiltering_calc_noise(void);

/* Symbol: reset_fft_es_buf_struct */
/* Demangled: reset_fft_es_buf_struct */
int reset_fft_es_buf_struct(void);

/* Symbol: IIR_coef_a2_Tunable_16k_set2 */
/* Demangled: IIR_coef_a2_Tunable_16k_set2 */
extern void* IIR_coef_a2_Tunable_16k_set2;

/* Symbol: CB_convert_comb_filter_echo_THD */
/* Demangled: CB_convert_comb_filter_echo_THD */
int CB_convert_comb_filter_echo_THD(void);

/* Symbol: dctcos_1_NB */
/* Demangled: dctcos_1_NB */
extern void* dctcos_1_NB;

/* Symbol: Graphical_UI_DRC_Mono */
/* Demangled: Graphical_UI_DRC_Mono */
int Graphical_UI_DRC_Mono(void);

/* Symbol: Gama_Interpolation */
/* Demangled: Gama_Interpolation */
int Gama_Interpolation(void);

/* Symbol: UlDlMusicDet */
/* Demangled: UlDlMusicDet */
int UlDlMusicDet(void);

/* Symbol: ENH_API_CB_Alloc_PF */
/* Demangled: ENH_API_CB_Alloc_PF */
int ENH_API_CB_Alloc_PF(void);

/* Symbol: power_limit_s3 */
/* Demangled: power_limit_s3 */
extern void* power_limit_s3;

/* Symbol: Reverb_switch_speed */
/* Demangled: Reverb_switch_speed */
int Reverb_switch_speed(void);

/* Symbol: LSPK_DT_improv_EPC */
/* Demangled: LSPK_DT_improv_EPC */
int LSPK_DT_improv_EPC(void);

/* Symbol: ABM_update_nlms_stepsize */
/* Demangled: ABM_update_nlms_stepsize */
int ABM_update_nlms_stepsize(void);

/* Symbol: IIR_64_MicIIR_24BIT */
/* Demangled: IIR_64_MicIIR_24BIT */
int IIR_64_MicIIR_24BIT(void);

/* Symbol: power_limit_s4 */
/* Demangled: power_limit_s4 */
extern void* power_limit_s4;

/* Symbol: RIFFT_32_Q31 */
/* Demangled: RIFFT_32_Q31 */
int RIFFT_32_Q31(void);

/* Symbol: sb_nlms_stepsize_DL */
/* Demangled: sb_nlms_stepsize_DL */
extern void* sb_nlms_stepsize_DL;

/* Symbol: ENH_API_Update_whistle_AEC */
/* Demangled: ENH_API_Update_whistle_AEC */
int ENH_API_Update_whistle_AEC(void);

/* Symbol: getLocalMaxIdx */
/* Demangled: getLocalMaxIdx */
int getLocalMaxIdx(void);

/* Symbol: abf_sb_pwr_bias_shadow_stepsize */
/* Demangled: abf_sb_pwr_bias_shadow_stepsize */
extern void* abf_sb_pwr_bias_shadow_stepsize;

/* Symbol: abf_AGC_Pos_Gain */
/* Demangled: abf_AGC_Pos_Gain */
extern void* abf_AGC_Pos_Gain;

/* Symbol: power_limit_s5 */
/* Demangled: power_limit_s5 */
extern void* power_limit_s5;

/* Symbol: IIR_coef_b2_Tunable_16k_set1 */
/* Demangled: IIR_coef_b2_Tunable_16k_set1 */
extern void* IIR_coef_b2_Tunable_16k_set1;

/* Symbol: EPC_Count_On */
/* Demangled: EPC_Count_On */
int EPC_Count_On(void);

/* Symbol: vad_DT */
/* Demangled: vad_DT */
int vad_DT(void);

/* Symbol: cb_hVAD_calc_pwr_spk */
/* Demangled: cb_hVAD_calc_pwr_spk */
int cb_hVAD_calc_pwr_spk(void);

/* Symbol: free_memory_DMNR_spk */
/* Demangled: free_memory_DMNR_spk */
int free_memory_DMNR_spk(void);

/* Symbol: power_limit_s6 */
/* Demangled: power_limit_s6 */
extern void* power_limit_s6;

/* Symbol: UL_FWEControl_Reset */
/* Demangled: UL_FWEControl_Reset */
int UL_FWEControl_Reset(void);

/* Symbol: IIR_coef_b2_Tunable_16k_set2 */
/* Demangled: IIR_coef_b2_Tunable_16k_set2 */
extern void* IIR_coef_b2_Tunable_16k_set2;

/* Symbol: mapping_function */
/* Demangled: mapping_function */
int mapping_function(void);

/* Symbol: Shift_to_Max_Q_32 */
/* Demangled: Shift_to_Max_Q_32 */
int Shift_to_Max_Q_32(void);

/* Symbol: Caldata_switch */
/* Demangled: Caldata_switch */
int Caldata_switch(void);

/* Symbol: DMNR_convert_ABM_regularization_handover */
/* Demangled: DMNR_convert_ABM_regularization_handover */
int DMNR_convert_ABM_regularization_handover(void);

/* Symbol: DMNR_convert_ABM_speed */
/* Demangled: DMNR_convert_ABM_speed */
int DMNR_convert_ABM_speed(void);

/* Symbol: adaptive_beamforming */
/* Demangled: adaptive_beamforming */
int adaptive_beamforming(void);

/* Symbol: ENH_API_Init */
/* Demangled: ENH_API_Init */
int ENH_API_Init(void);

/* Symbol: us_index */
/* Demangled: us_index */
extern void* us_index;

/* Symbol: init_param_parser */
/* Demangled: init_param_parser */
int init_param_parser(void);

/* Symbol: ENH_API_Update_DMNR */
/* Demangled: ENH_API_Update_DMNR */
int ENH_API_Update_DMNR(void);

/* Symbol: ENH_API_DELAY_BUF_Alloc */
/* Demangled: ENH_API_DELAY_BUF_Alloc */
int ENH_API_DELAY_BUF_Alloc(void);

/* Symbol: ENH_API_CB_Alloc_FFT */
/* Demangled: ENH_API_CB_Alloc_FFT */
int ENH_API_CB_Alloc_FFT(void);

/* Symbol: ENH_API_Reset_CB */
/* Demangled: ENH_API_Reset_CB */
int ENH_API_Reset_CB(void);

/* Symbol: fast_sqrt */
/* Demangled: fast_sqrt */
int fast_sqrt(void);

/* Symbol: NR_CriticalBandEnergyEst */
/* Demangled: NR_CriticalBandEnergyEst */
int NR_CriticalBandEnergyEst(void);

/* Symbol: ntd_update_input_feature */
/* Demangled: ntd_update_input_feature */
int ntd_update_input_feature(void);

/* Symbol: EC_protect_gain_bound_value_table */
/* Demangled: EC_protect_gain_bound_value_table */
extern void* EC_protect_gain_bound_value_table;

/* Symbol: sqrt_coef */
/* Demangled: sqrt_coef */
extern void* sqrt_coef;

/* Symbol: NR_SpectrumSmoothing */
/* Demangled: NR_SpectrumSmoothing */
int NR_SpectrumSmoothing(void);

/* Symbol: ABF_FIXED_DFT_spk */
/* Demangled: ABF_FIXED_DFT_spk */
int ABF_FIXED_DFT_spk(void);

/* Symbol: ModifyW32W16_mult_STE */
/* Demangled: ModifyW32W16_mult_STE */
int ModifyW32W16_mult_STE(void);

/* Symbol: sb_pwr_bias */
/* Demangled: sb_pwr_bias */
extern void* sb_pwr_bias;

/* Symbol: compute_noise_floor_16 */
/* Demangled: compute_noise_floor_16 */
int compute_noise_floor_16(void);

/* Symbol: cal_es_gain */
/* Demangled: cal_es_gain */
int cal_es_gain(void);

/* Symbol: Mic1_ES_param_To_Mic1 */
/* Demangled: Mic1_ES_param_To_Mic1 */
int Mic1_ES_param_To_Mic1(void);

/* Symbol: cb_init_over_est_spk */
/* Demangled: cb_init_over_est_spk */
int cb_init_over_est_spk(void);

/* Symbol: ENH_API_Update_NR */
/* Demangled: ENH_API_Update_NR */
int ENH_API_Update_NR(void);

/* Symbol: ENH_API_BT_EC_Alloc */
/* Demangled: ENH_API_BT_EC_Alloc */
int ENH_API_BT_EC_Alloc(void);

/* Symbol: ENH_API_Get_AEC_Memory */
/* Demangled: ENH_API_Get_AEC_Memory */
int ENH_API_Get_AEC_Memory(void);

/* Symbol: Mic1_ES_param_To_Mic2 */
/* Demangled: Mic1_ES_param_To_Mic2 */
int Mic1_ES_param_To_Mic2(void);

/* Symbol: abf_mode_update_spk */
/* Demangled: abf_mode_update_spk */
int abf_mode_update_spk(void);

/* Symbol: WB_NR_NoiseEst */
/* Demangled: WB_NR_NoiseEst */
int WB_NR_NoiseEst(void);

/* Symbol: VoiceDetector */
/* Demangled: VoiceDetector */
int VoiceDetector(void);

/* Symbol: DT_thd_value */
/* Demangled: DT_thd_value */
int DT_thd_value(void);

/* Symbol: DMNR_mic2_VAD */
/* Demangled: DMNR_mic2_VAD */
int DMNR_mic2_VAD(void);

/* Symbol: Wn_r_256 */
/* Demangled: Wn_r_256 */
extern void* Wn_r_256;

/* Symbol: sb_nlms_stepsize_normal */
/* Demangled: sb_nlms_stepsize_normal */
extern void* sb_nlms_stepsize_normal;

/* Symbol: pf_16_12_256 */
/* Demangled: pf_16_12_256 */
extern void* pf_16_12_256;

/* Symbol: cb_HR_set_runtime_parameters_spk */
/* Demangled: cb_HR_set_runtime_parameters_spk */
int cb_HR_set_runtime_parameters_spk(void);

/* Symbol: cb_update_SN_energy_spk */
/* Demangled: cb_update_SN_energy_spk */
int cb_update_SN_energy_spk(void);

/* Symbol: ABF_FFT_Cos */
/* Demangled: ABF_FFT_Cos */
extern void* ABF_FFT_Cos;

/* Symbol: NR_PostProcessing_48K */
/* Demangled: NR_PostProcessing_48K */
int NR_PostProcessing_48K(void);

/* Symbol: NR_SbAnalysis_48K_Q23 */
/* Demangled: NR_SbAnalysis_48K_Q23 */
int NR_SbAnalysis_48K_Q23(void);

/* Symbol: init_abf_nlms */
/* Demangled: init_abf_nlms */
int init_abf_nlms(void);

/* Symbol: reset_cb_energy_VAD */
/* Demangled: reset_cb_energy_VAD */
int reset_cb_energy_VAD(void);

/* Symbol: num_taps_shadow_stepsize_abf */
/* Demangled: num_taps_shadow_stepsize_abf */
extern void* num_taps_shadow_stepsize_abf;

/* Symbol: safeGainControl */
/* Demangled: safeGainControl */
int safeGainControl(void);

/* Symbol: set_cb_ctrl_spk */
/* Demangled: set_cb_ctrl_spk */
int set_cb_ctrl_spk(void);

/* Symbol: DMNR_convert_SF_highSNR_thd */
/* Demangled: DMNR_convert_SF_highSNR_thd */
int DMNR_convert_SF_highSNR_thd(void);

/* Symbol: NR_agg_mode_setting */
/* Demangled: NR_agg_mode_setting */
int NR_agg_mode_setting(void);

/* Symbol: __aeabi_memset */
/* Demangled: __aeabi_memset */
int __aeabi_memset(void);

/* Symbol: Bitreversal_Q31 */
/* Demangled: Bitreversal_Q31 */
int Bitreversal_Q31(void);

/* Symbol: Set_NR_SUP_Bound */
/* Demangled: Set_NR_SUP_Bound */
int Set_NR_SUP_Bound(void);

/* Symbol: Radix4FirstStageNDC_test32 */
/* Demangled: Radix4FirstStageNDC_test32 */
int Radix4FirstStageNDC_test32(void);

/* Symbol: STE_Richen_Center_B_t */
/* Demangled: STE_Richen_Center_B_t */
extern void* STE_Richen_Center_B_t;

/* Symbol: log10Table */
/* Demangled: log10Table */
extern void* log10Table;

/* Symbol: IIR_allpass_stereoSHIFT_record_Q23 */
/* Demangled: IIR_allpass_stereoSHIFT_record_Q23 */
int IIR_allpass_stereoSHIFT_record_Q23(void);

/* Symbol: DL_SF */
/* Demangled: DL_SF */
int DL_SF(void);

/* Symbol: dctcos_3_WB */
/* Demangled: dctcos_3_WB */
extern void* dctcos_3_WB;

/* Symbol: EC_stepsize_ERLE_band1_value_table */
/* Demangled: EC_stepsize_ERLE_band1_value_table */
extern void* EC_stepsize_ERLE_band1_value_table;

/* Symbol: init_cng_parms */
/* Demangled: init_cng_parms */
int init_cng_parms(void);

/* Symbol: LLR_test_6dB_soft */
/* Demangled: LLR_test_6dB_soft */
int LLR_test_6dB_soft(void);

/* Symbol: BandPwrMaxIdx */
/* Demangled: BandPwrMaxIdx */
int BandPwrMaxIdx(void);

/* Symbol: coef_normalization */
/* Demangled: coef_normalization */
int coef_normalization(void);

/* Symbol: num_taps_additional_shadow_st */
/* Demangled: num_taps_additional_shadow_st */
extern void* num_taps_additional_shadow_st;

/* Symbol: ASIE_convert_sii_smooth_thd */
/* Demangled: ASIE_convert_sii_smooth_thd */
int ASIE_convert_sii_smooth_thd(void);

/* Symbol: get_memory_DMNR_BankA */
/* Demangled: get_memory_DMNR_BankA */
int get_memory_DMNR_BankA(void);

/* Symbol: STE_Richen_Center_H_t */
/* Demangled: STE_Richen_Center_H_t */
extern void* STE_Richen_Center_H_t;

/* Symbol: AGC_cal_power */
/* Demangled: AGC_cal_power */
int AGC_cal_power(void);

/* Symbol: Fixed_log2 */
/* Demangled: Fixed_log2 */
int Fixed_log2(void);

/* Symbol: div_s_drc */
/* Demangled: div_s_drc */
int div_s_drc(void);

/* Symbol: get_memory_DMNR_BankB */
/* Demangled: get_memory_DMNR_BankB */
int get_memory_DMNR_BankB(void);

/* Symbol: Well_cal_Cal_VAD */
/* Demangled: Well_cal_Cal_VAD */
int Well_cal_Cal_VAD(void);

/* Symbol: ABF_SB_spk */
/* Demangled: ABF_SB_spk */
int ABF_SB_spk(void);

/* Symbol: synthesis_filter */
/* Demangled: synthesis_filter */
int synthesis_filter(void);

/* Symbol: power_limit_xu2 */
/* Demangled: power_limit_xu2 */
extern void* power_limit_xu2;

/* Symbol: low_flt */
/* Demangled: low_flt */
extern void* low_flt;

/* Symbol: cb_hVAD_calc_confidence_spk */
/* Demangled: cb_hVAD_calc_confidence_spk */
int cb_hVAD_calc_confidence_spk(void);

/* Symbol: Half_Band_IIR */
/* Demangled: Half_Band_IIR */
int Half_Band_IIR(void);

/* Symbol: STE_Richen_Center_L_t */
/* Demangled: STE_Richen_Center_L_t */
extern void* STE_Richen_Center_L_t;

/* Symbol: get_comb_filter_coeff_spk */
/* Demangled: get_comb_filter_coeff_spk */
int get_comb_filter_coeff_spk(void);

/* Symbol: align_EXP */
/* Demangled: align_EXP */
int align_EXP(void);

/* Symbol: EC_stepsize_improve_band1_value */
/* Demangled: EC_stepsize_improve_band1_value */
int EC_stepsize_improve_band1_value(void);

/* Symbol: ENH_API_Update_ES */
/* Demangled: ENH_API_Update_ES */
int ENH_API_Update_ES(void);

/* Symbol: start_EPL_logger_UL */
/* Demangled: start_EPL_logger_UL */
int start_EPL_logger_UL(void);

/* Symbol: DMNR_convert_TMOS_NOISE_THD */
/* Demangled: DMNR_convert_TMOS_NOISE_THD */
int DMNR_convert_TMOS_NOISE_THD(void);

/* Symbol: init_ASLR_parms */
/* Demangled: init_ASLR_parms */
int init_ASLR_parms(void);

/* Symbol: init_bankA_parms_DMNR_spk */
/* Demangled: init_bankA_parms_DMNR_spk */
int init_bankA_parms_DMNR_spk(void);

/* Symbol: Check_Param_Change */
/* Demangled: Check_Param_Change */
int Check_Param_Change(void);

/* Symbol: ENH_API_NDC_Alloc_NR */
/* Demangled: ENH_API_NDC_Alloc_NR */
int ENH_API_NDC_Alloc_NR(void);

/* Symbol: ENH_API_Reset_NR_48k */
/* Demangled: ENH_API_Reset_NR_48k */
int ENH_API_Reset_NR_48k(void);

/* Symbol: ENH_Record_Mute_Begin_UL */
/* Demangled: ENH_Record_Mute_Begin_UL */
int ENH_Record_Mute_Begin_UL(void);

/* Symbol: RFFT_256_Q31 */
/* Demangled: RFFT_256_Q31 */
int RFFT_256_Q31(void);

/* Symbol: ENH_API_Update_CB_spk */
/* Demangled: ENH_API_Update_CB_spk */
int ENH_API_Update_CB_spk(void);

/* Symbol: cb_postfiltering_calc_gain_spk */
/* Demangled: cb_postfiltering_calc_gain_spk */
int cb_postfiltering_calc_gain_spk(void);

/* Symbol: norm_r_shift_32 */
/* Demangled: norm_r_shift_32 */
int norm_r_shift_32(void);

/* Symbol: ENH_API_DMNR_Get_Data_spk */
/* Demangled: ENH_API_DMNR_Get_Data_spk */
int ENH_API_DMNR_Get_Data_spk(void);

/* Symbol: Freq_Array */
/* Demangled: Freq_Array */
extern void* Freq_Array;

/* Symbol: FFT_scaling */
/* Demangled: FFT_scaling */
int FFT_scaling(void);

/* Symbol: NDC_UL_ASLR */
/* Demangled: NDC_UL_ASLR */
int NDC_UL_ASLR(void);

/* Symbol: init_MCRA */
/* Demangled: init_MCRA */
int init_MCRA(void);

/* Symbol: init_cb_fft_struct */
/* Demangled: init_cb_fft_struct */
int init_cb_fft_struct(void);

/* Symbol: CheckCalibrationDataValid */
/* Demangled: CheckCalibrationDataValid */
int CheckCalibrationDataValid(void);

/* Symbol: DMNR_convert_mic2_block_thd_SPK */
/* Demangled: DMNR_convert_mic2_block_thd_SPK */
int DMNR_convert_mic2_block_thd_SPK(void);

/* Symbol: __aeabi_memclr4 */
/* Demangled: __aeabi_memclr4 */
int __aeabi_memclr4(void);

/* Symbol: ENH_API_Reset_AEC */
/* Demangled: ENH_API_Reset_AEC */
int ENH_API_Reset_AEC(void);

/* Symbol: Residual_echo_cal */
/* Demangled: Residual_echo_cal */
int Residual_echo_cal(void);

/* Symbol: LSPK_DT_improv_EPC_est */
/* Demangled: LSPK_DT_improv_EPC_est */
int LSPK_DT_improv_EPC_est(void);

/* Symbol: init_cb_hr_spk */
/* Demangled: init_cb_hr_spk */
int init_cb_hr_spk(void);

/* Symbol: Minimum_Statistics */
/* Demangled: Minimum_Statistics */
int Minimum_Statistics(void);

/* Symbol: ENH_API_CB_Get_Data_spk */
/* Demangled: ENH_API_CB_Get_Data_spk */
int ENH_API_CB_Get_Data_spk(void);

/* Symbol: sb_ASLR_noise_esti */
/* Demangled: sb_ASLR_noise_esti */
int sb_ASLR_noise_esti(void);

/* Symbol: ENH_API_Init_MR */
/* Demangled: ENH_API_Init_MR */
int ENH_API_Init_MR(void);

/* Symbol: FIXED_DFT */
/* Demangled: FIXED_DFT */
int FIXED_DFT(void);

/* Symbol: MBDRC_Gain_Table */
/* Demangled: MBDRC_Gain_Table */
extern void* MBDRC_Gain_Table;

/* Symbol: DRC_Com_Reset */
/* Demangled: DRC_Com_Reset */
int DRC_Com_Reset(void);

/* Symbol: ENH_API_Update_DL_AEC */
/* Demangled: ENH_API_Update_DL_AEC */
int ENH_API_Update_DL_AEC(void);

/* Symbol: init_esp_parms */
/* Demangled: init_esp_parms */
int init_esp_parms(void);

/* Symbol: Low_Latency_Standard_DRC */
/* Demangled: Low_Latency_Standard_DRC */
int Low_Latency_Standard_DRC(void);

/* Symbol: pf_16_12_112 */
/* Demangled: pf_16_12_112 */
extern void* pf_16_12_112;

/* Symbol: force_module_triggered_to_reset */
/* Demangled: force_module_triggered_to_reset */
int force_module_triggered_to_reset(void);

/* Symbol: WB_NR_EstCriticalBandEnergy */
/* Demangled: WB_NR_EstCriticalBandEnergy */
int WB_NR_EstCriticalBandEnergy(void);

/* Symbol: NDC_CB_Table_48K */
/* Demangled: NDC_CB_Table_48K */
extern void* NDC_CB_Table_48K;

/* Symbol: __aeabi_memclr8 */
/* Demangled: __aeabi_memclr8 */
int __aeabi_memclr8(void);

/* Symbol: adaptive_speech_intelligibility_enhancement */
/* Demangled: adaptive_speech_intelligibility_enhancement */
int adaptive_speech_intelligibility_enhancement(void);

/* Symbol: getSpecLvl */
/* Demangled: getSpecLvl */
int getSpecLvl(void);

/* Symbol: ENH_API_Update_Compressor_48K */
/* Demangled: ENH_API_Update_Compressor_48K */
int ENH_API_Update_Compressor_48K(void);

/* Symbol: init_welcal_vad_struct */
/* Demangled: init_welcal_vad_struct */
int init_welcal_vad_struct(void);

/* Symbol: MBDRC_Divide_s_32 */
/* Demangled: MBDRC_Divide_s_32 */
int MBDRC_Divide_s_32(void);

/* Symbol: DRC_UL_Init */
/* Demangled: DRC_UL_Init */
int DRC_UL_Init(void);

/* Symbol: NDC_BankB_Window_SWB */
/* Demangled: NDC_BankB_Window_SWB */
extern void* NDC_BankB_Window_SWB;

/* Symbol: ENH_API_Run_BKF_UL */
/* Demangled: ENH_API_Run_BKF_UL */
int ENH_API_Run_BKF_UL(void);

/* Symbol: debug_dump_array_Cmplx16 */
/* Demangled: debug_dump_array_Cmplx16 */
int debug_dump_array_Cmplx16(void);

/* Symbol: debug_print */
/* Demangled: debug_print */
int debug_print(void);

/* Symbol: debug_set_dump_dir */
/* Demangled: debug_set_dump_dir */
int debug_set_dump_dir(void);

/* Symbol: fixed_white_noise_gen */
/* Demangled: fixed_white_noise_gen */
int fixed_white_noise_gen(void);

/* Symbol: ENH_API_CB_Alloc_FFT_spk */
/* Demangled: ENH_API_CB_Alloc_FFT_spk */
int ENH_API_CB_Alloc_FFT_spk(void);

/* Symbol: ENH_API_Init_DMNR */
/* Demangled: ENH_API_Init_DMNR */
int ENH_API_Init_DMNR(void);

/* Symbol: ABM_calc_nlms */
/* Demangled: ABM_calc_nlms */
int ABM_calc_nlms(void);

/* Symbol: DT_EPC_shadow_st_handling */
/* Demangled: DT_EPC_shadow_st_handling */
int DT_EPC_shadow_st_handling(void);

/* Symbol: step1_shl_pwr_bias */
/* Demangled: step1_shl_pwr_bias */
int step1_shl_pwr_bias(void);

/* Symbol: debug_check */
/* Demangled: debug_check */
int debug_check(void);

/* Symbol: SetDefaultABFCalData */
/* Demangled: SetDefaultABFCalData */
int SetDefaultABFCalData(void);

/* Symbol: init_cds */
/* Demangled: init_cds */
int init_cds(void);

/* Symbol: nlms_abf_ABM */
/* Demangled: nlms_abf_ABM */
int nlms_abf_ABM(void);

/* Symbol: Echo_est_control */
/* Demangled: Echo_est_control */
int Echo_est_control(void);

/* Symbol: cb_calc_speech_absence_prob_PD_spk */
/* Demangled: cb_calc_speech_absence_prob_PD_spk */
int cb_calc_speech_absence_prob_PD_spk(void);

/* Symbol: swap_blk */
/* Demangled: swap_blk */
int swap_blk(void);

/* Symbol: SB_whistle_AECinblk */
/* Demangled: SB_whistle_AECinblk */
int SB_whistle_AECinblk(void);

/* Symbol: ENH_API_Get_SCH_Memory */
/* Demangled: ENH_API_Get_SCH_Memory */
int ENH_API_Get_SCH_Memory(void);

/* Symbol: fir_48K_90tap */
/* Demangled: fir_48K_90tap */
int fir_48K_90tap(void);

/* Symbol: pack_div_s_32_32_spk */
/* Demangled: pack_div_s_32_32_spk */
int pack_div_s_32_32_spk(void);

/* Symbol: nlms_sb_n */
/* Demangled: nlms_sb_n */
int nlms_sb_n(void);

/* Symbol: ENH_API_Get_CB_Memory_Core */
/* Demangled: ENH_API_Get_CB_Memory_Core */
int ENH_API_Get_CB_Memory_Core(void);

/* Symbol: CB_IFFT */
/* Demangled: CB_IFFT */
int CB_IFFT(void);

/* Symbol: init_PF */
/* Demangled: init_PF */
int init_PF(void);

/* Symbol: fe_delay_ds_hist */
/* Demangled: fe_delay_ds_hist */
extern void* fe_delay_ds_hist;

/* Symbol: CB2OB_band_width */
/* Demangled: CB2OB_band_width */
extern void* CB2OB_band_width;

/* Symbol: cb_less_gain_protection */
/* Demangled: cb_less_gain_protection */
int cb_less_gain_protection(void);

/* Symbol: cal_FFT_AES_Gain */
/* Demangled: cal_FFT_AES_Gain */
int cal_FFT_AES_Gain(void);

/* Symbol: init_cb_ctrl_spk */
/* Demangled: init_cb_ctrl_spk */
int init_cb_ctrl_spk(void);

/* Symbol: ENH_API_Get_DMNR_Memory_BankB */
/* Demangled: ENH_API_Get_DMNR_Memory_BankB */
int ENH_API_Get_DMNR_Memory_BankB(void);

/* Symbol: normalize_fun */
/* Demangled: normalize_fun */
int normalize_fun(void);

/* Symbol: FIR_Q15_90tap */
/* Demangled: FIR_Q15_90tap */
int FIR_Q15_90tap(void);

/* Symbol: NR_SuppressGainSmoothing */
/* Demangled: NR_SuppressGainSmoothing */
int NR_SuppressGainSmoothing(void);

/* Symbol: ENH_API_DMNR_Get_Data */
/* Demangled: ENH_API_DMNR_Get_Data */
int ENH_API_DMNR_Get_Data(void);

/* Symbol: init_ABM_vad */
/* Demangled: init_ABM_vad */
int init_ABM_vad(void);

/* Symbol: AGC_Reverse_Gain_Compensation_Org */
/* Demangled: AGC_Reverse_Gain_Compensation_Org */
int AGC_Reverse_Gain_Compensation_Org(void);

/* Symbol: ENH_API_Reset_MR */
/* Demangled: ENH_API_Reset_MR */
int ENH_API_Reset_MR(void);

/* Symbol: dctcos2_WB */
/* Demangled: dctcos2_WB */
extern void* dctcos2_WB;

/* Symbol: EC_Init_Coeff_Table1 */
/* Demangled: EC_Init_Coeff_Table1 */
extern void* EC_Init_Coeff_Table1;

/* Symbol: EC_stepsize_ERLE_band1_value */
/* Demangled: EC_stepsize_ERLE_band1_value */
int EC_stepsize_ERLE_band1_value(void);

/* Symbol: init_nlp_parms */
/* Demangled: init_nlp_parms */
int init_nlp_parms(void);

/* Symbol: ENH_API_DL_MR_Alloc */
/* Demangled: ENH_API_DL_MR_Alloc */
int ENH_API_DL_MR_Alloc(void);

/* Symbol: EC_Init_Coeff_Table2 */
/* Demangled: EC_Init_Coeff_Table2 */
extern void* EC_Init_Coeff_Table2;

/* Symbol: getSpecBinEnergy */
/* Demangled: getSpecBinEnergy */
int getSpecBinEnergy(void);

/* Symbol: cb_SND_protection_spk */
/* Demangled: cb_SND_protection_spk */
int cb_SND_protection_spk(void);

/* Symbol: ENH_API_Update_FE */
/* Demangled: ENH_API_Update_FE */
int ENH_API_Update_FE(void);

/* Symbol: ULDL_GainControl_Reset */
/* Demangled: ULDL_GainControl_Reset */
int ULDL_GainControl_Reset(void);

/* Symbol: energy_update_16 */
/* Demangled: energy_update_16 */
int energy_update_16(void);

/* Symbol: EC_Init_Coeff_Table3 */
/* Demangled: EC_Init_Coeff_Table3 */
extern void* EC_Init_Coeff_Table3;

/* Symbol: num_taps_additional_shadow */
/* Demangled: num_taps_additional_shadow */
extern void* num_taps_additional_shadow;

/* Symbol: DMNR_convert_Mic_selection_VAD_THD_SPK */
/* Demangled: DMNR_convert_Mic_selection_VAD_THD_SPK */
int DMNR_convert_Mic_selection_VAD_THD_SPK(void);

/* Symbol: update_cb_GCC_spk */
/* Demangled: update_cb_GCC_spk */
int update_cb_GCC_spk(void);

/* Symbol: abf_reset */
/* Demangled: abf_reset */
int abf_reset(void);

/* Symbol: ABF_FFT_Sin_Inv */
/* Demangled: ABF_FFT_Sin_Inv */
extern void* ABF_FFT_Sin_Inv;

/* Symbol: DL_AF */
/* Demangled: DL_AF */
int DL_AF(void);

/* Symbol: RIFFT_256_Q31 */
/* Demangled: RIFFT_256_Q31 */
int RIFFT_256_Q31(void);

/* Symbol: FIR_Q15_INIT */
/* Demangled: FIR_Q15_INIT */
int FIR_Q15_INIT(void);

/* Symbol: STE_Widen_Side01_t */
/* Demangled: STE_Widen_Side01_t */
extern void* STE_Widen_Side01_t;

/* Symbol: es_fact */
/* Demangled: es_fact */
extern void* es_fact;

/* Symbol: cb_feature_to_power_interpolation */
/* Demangled: cb_feature_to_power_interpolation */
int cb_feature_to_power_interpolation(void);

/* Symbol: Get_HighShelf_Coef */
/* Demangled: Get_HighShelf_Coef */
int Get_HighShelf_Coef(void);

/* Symbol: STE_Widen_Side03_t */
/* Demangled: STE_Widen_Side03_t */
extern void* STE_Widen_Side03_t;

/* Symbol: abf_mode_update */
/* Demangled: abf_mode_update */
int abf_mode_update(void);

/* Symbol: LR2CS */
/* Demangled: LR2CS */
int LR2CS(void);

/* Symbol: modify_stepsize_tcl_whistle */
/* Demangled: modify_stepsize_tcl_whistle */
int modify_stepsize_tcl_whistle(void);

/* Symbol: cb_HR_pitch_boost_spk */
/* Demangled: cb_HR_pitch_boost_spk */
int cb_HR_pitch_boost_spk(void);

/* Symbol: cb_postfiltering_calc_energy_VAD_spk */
/* Demangled: cb_postfiltering_calc_energy_VAD_spk */
int cb_postfiltering_calc_energy_VAD_spk(void);

/* Symbol: init_bankB_parms_DMNR_spk */
/* Demangled: init_bankB_parms_DMNR_spk */
int init_bankB_parms_DMNR_spk(void);

/* Symbol: TCLW_Suppress_Level */
/* Demangled: TCLW_Suppress_Level */
int TCLW_Suppress_Level(void);

/* Symbol: ENH_API_Get_dl_enh_value */
/* Demangled: ENH_API_Get_dl_enh_value */
int ENH_API_Get_dl_enh_value(void);

/* Symbol: ENH_API_Update_FFT_ES */
/* Demangled: ENH_API_Update_FFT_ES */
int ENH_API_Update_FFT_ES(void);

/* Symbol: cb_feature_to_power_interpolation_spk */
/* Demangled: cb_feature_to_power_interpolation_spk */
int cb_feature_to_power_interpolation_spk(void);

/* Symbol: Smooth_NoiseFloor */
/* Demangled: Smooth_NoiseFloor */
int Smooth_NoiseFloor(void);

/* Symbol: init_EPL_logger */
/* Demangled: init_EPL_logger */
int init_EPL_logger(void);

/* Symbol: DMNR_covert_Mic_selection_ASLR_gain */
/* Demangled: DMNR_covert_Mic_selection_ASLR_gain */
int DMNR_covert_Mic_selection_ASLR_gain(void);

/* Symbol: ENH_API_Free_DMNR_spk */
/* Demangled: ENH_API_Free_DMNR_spk */
int ENH_API_Free_DMNR_spk(void);

/* Symbol: ENH_API_Init_AEC2 */
/* Demangled: ENH_API_Init_AEC2 */
int ENH_API_Init_AEC2(void);

/* Symbol: Cal_DMNR_ASLR */
/* Demangled: Cal_DMNR_ASLR */
int Cal_DMNR_ASLR(void);

/* Symbol: BKF_Shaping_3Quest */
/* Demangled: BKF_Shaping_3Quest */
int BKF_Shaping_3Quest(void);

/* Symbol: NDC_BankB_Window */
/* Demangled: NDC_BankB_Window */
extern void* NDC_BankB_Window;

/* Symbol: DMNR_mic2_VAD_spk */
/* Demangled: DMNR_mic2_VAD_spk */
int DMNR_mic2_VAD_spk(void);

/* Symbol: nlms_abf_spk */
/* Demangled: nlms_abf_spk */
int nlms_abf_spk(void);

/* Symbol: SRC_upsample_2in */
/* Demangled: SRC_upsample_2in */
int SRC_upsample_2in(void);

/* Symbol: Switch_coef */
/* Demangled: Switch_coef */
int Switch_coef(void);

/* Symbol: cb_HR_cem_spk */
/* Demangled: cb_HR_cem_spk */
int cb_HR_cem_spk(void);

/* Symbol: init_delay */
/* Demangled: init_delay */
int init_delay(void);

/* Symbol: sb_postfiltering */
/* Demangled: sb_postfiltering */
int sb_postfiltering(void);

/* Symbol: spatial_filter_spk */
/* Demangled: spatial_filter_spk */
int spatial_filter_spk(void);

/* Symbol: ENH_API_DL_Process */
/* Demangled: ENH_API_DL_Process */
int ENH_API_DL_Process(void);

/* Symbol: high_flt_WB */
/* Demangled: high_flt_WB */
extern void* high_flt_WB;

/* Symbol: compute_noise_floor */
/* Demangled: compute_noise_floor */
int compute_noise_floor(void);

/* Symbol: Cal_parameter_1 */
/* Demangled: Cal_parameter_1 */
int Cal_parameter_1(void);

/* Symbol: WB_NR_ToneDetection */
/* Demangled: WB_NR_ToneDetection */
int WB_NR_ToneDetection(void);

/* Symbol: Noise_Bin2OB_band_idx */
/* Demangled: Noise_Bin2OB_band_idx */
extern void* Noise_Bin2OB_band_idx;

/* Symbol: ENH_API_Reset_Compressor_48K */
/* Demangled: ENH_API_Reset_Compressor_48K */
int ENH_API_Reset_Compressor_48K(void);

/* Symbol: sebuffer_L */
/* Demangled: sebuffer_L */
extern void* sebuffer_L;

/* Symbol: Table_T2D */
/* Demangled: Table_T2D */
extern void* Table_T2D;

/* Symbol: RIFFT_512_Q31 */
/* Demangled: RIFFT_512_Q31 */
int RIFFT_512_Q31(void);

/* Symbol: getBandPower */
/* Demangled: getBandPower */
int getBandPower(void);

/* Symbol: Cal_parameter_3 */
/* Demangled: Cal_parameter_3 */
int Cal_parameter_3(void);

/* Symbol: IIR_allpass_stereoSHIFT */
/* Demangled: IIR_allpass_stereoSHIFT */
int IIR_allpass_stereoSHIFT(void);

/* Symbol: ENH_API_Get_ENH_ctrl_ptr */
/* Demangled: ENH_API_Get_ENH_ctrl_ptr */
int ENH_API_Get_ENH_ctrl_ptr(void);

/* Symbol: update_AGC_gain */
/* Demangled: update_AGC_gain */
int update_AGC_gain(void);

/* Symbol: update_ntd_struct */
/* Demangled: update_ntd_struct */
int update_ntd_struct(void);

/* Symbol: DeEmpahsisFIR_coef */
/* Demangled: DeEmpahsisFIR_coef */
extern void* DeEmpahsisFIR_coef;

/* Symbol: stepsize_slow_bound */
/* Demangled: stepsize_slow_bound */
extern void* stepsize_slow_bound;

/* Symbol: update_cb_struct */
/* Demangled: update_cb_struct */
int update_cb_struct(void);

/* Symbol: init_voice_tracking */
/* Demangled: init_voice_tracking */
int init_voice_tracking(void);

/* Symbol: circular_conv */
/* Demangled: circular_conv */
int circular_conv(void);

/* Symbol: Radix4BflyFastNDC_test32_smmul */
/* Demangled: Radix4BflyFastNDC_test32_smmul */
int Radix4BflyFastNDC_test32_smmul(void);

/* Symbol: compressor_48K_sub_process */
/* Demangled: compressor_48K_sub_process */
int compressor_48K_sub_process(void);

/* Symbol: sebuffer2_L */
/* Demangled: sebuffer2_L */
extern void* sebuffer2_L;

/* Symbol: SB_whistle_AEC */
/* Demangled: SB_whistle_AEC */
int SB_whistle_AEC(void);

/* Symbol: reset_cb_fft_struct */
/* Demangled: reset_cb_fft_struct */
int reset_cb_fft_struct(void);

/* Symbol: init_cb_hr_status_ctrl_spk */
/* Demangled: init_cb_hr_status_ctrl_spk */
int init_cb_hr_status_ctrl_spk(void);

/* Symbol: spatial_filter */
/* Demangled: spatial_filter */
int spatial_filter(void);

/* Symbol: init_abf_nlms_spk */
/* Demangled: init_abf_nlms_spk */
int init_abf_nlms_spk(void);

/* Symbol: ENH_API_Init_NR */
/* Demangled: ENH_API_Init_NR */
int ENH_API_Init_NR(void);

/* Symbol: Set_Compression_ratio */
/* Demangled: Set_Compression_ratio */
int Set_Compression_ratio(void);

/* Symbol: align_fractional_point */
/* Demangled: align_fractional_point */
int align_fractional_point(void);

/* Symbol: getNoiseBinEnergy_WB */
/* Demangled: getNoiseBinEnergy_WB */
int getNoiseBinEnergy_WB(void);

/* Symbol: protectEnhanceGainLowerBound */
/* Demangled: protectEnhanceGainLowerBound */
int protectEnhanceGainLowerBound(void);

/* Symbol: abf_init */
/* Demangled: abf_init */
int abf_init(void);

/* Symbol: apply_sup_gain */
/* Demangled: apply_sup_gain */
int apply_sup_gain(void);

/* Symbol: MBDRC_sqrt_Gain_Table */
/* Demangled: MBDRC_sqrt_Gain_Table */
extern void* MBDRC_sqrt_Gain_Table;

/* Symbol: HP_IIR_coef_b2_16k_set */
/* Demangled: HP_IIR_coef_b2_16k_set */
extern void* HP_IIR_coef_b2_16k_set;

/* Symbol: init_SD_vad */
/* Demangled: init_SD_vad */
int init_SD_vad(void);

/* Symbol: Table_MinGain */
/* Demangled: Table_MinGain */
extern void* Table_MinGain;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: Reverb_band_Switch */
/* Demangled: Reverb_band_Switch */
int Reverb_band_Switch(void);

/* Symbol: log10Thd */
/* Demangled: log10Thd */
extern void* log10Thd;

/* Symbol: cb_postfiltering_with_uncertainty */
/* Demangled: cb_postfiltering_with_uncertainty */
int cb_postfiltering_with_uncertainty(void);

/* Symbol: reset_cb_hVAD_spk */
/* Demangled: reset_cb_hVAD_spk */
int reset_cb_hVAD_spk(void);

/* Symbol: cb_HR_calc_gain_spk */
/* Demangled: cb_HR_calc_gain_spk */
int cb_HR_calc_gain_spk(void);

/* Symbol: NR_Strength_Table48k */
/* Demangled: NR_Strength_Table48k */
extern void* NR_Strength_Table48k;

/* Symbol: init_ABM_vad_spk */
/* Demangled: init_ABM_vad_spk */
int init_ABM_vad_spk(void);

/* Symbol: Table_D2T */
/* Demangled: Table_D2T */
extern void* Table_D2T;

/* Symbol: init_cb_hVAD_spk */
/* Demangled: init_cb_hVAD_spk */
int init_cb_hVAD_spk(void);

/* Symbol: ENH_API_DMNR_spk_Alloc_BankA */
/* Demangled: ENH_API_DMNR_spk_Alloc_BankA */
int ENH_API_DMNR_spk_Alloc_BankA(void);

/* Symbol: cb_expander_apply */
/* Demangled: cb_expander_apply */
int cb_expander_apply(void);

/* Symbol: CB_convert_echo_weight */
/* Demangled: CB_convert_echo_weight */
int CB_convert_echo_weight(void);

/* Symbol: smooth_rate_convert_table */
/* Demangled: smooth_rate_convert_table */
extern void* smooth_rate_convert_table;

/* Symbol: SPK_ABF_FIXED_DFT */
/* Demangled: SPK_ABF_FIXED_DFT */
int SPK_ABF_FIXED_DFT(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd_LB */
/* Demangled: DMNR_convert_Mic_selection_PD_thd_LB */
int DMNR_convert_Mic_selection_PD_thd_LB(void);

/* Symbol: ENH_API_DMNR_spk_Alloc_BankB */
/* Demangled: ENH_API_DMNR_spk_Alloc_BankB */
int ENH_API_DMNR_spk_Alloc_BankB(void);

/* Symbol: FE_Minimum_Statistics */
/* Demangled: FE_Minimum_Statistics */
int FE_Minimum_Statistics(void);

/* Symbol: IIR_allpass_stereo */
/* Demangled: IIR_allpass_stereo */
int IIR_allpass_stereo(void);

/* Symbol: sb_aec */
/* Demangled: sb_aec */
int sb_aec(void);

/* Symbol: DMNR_convert_Mic2_selection_PowerB_FB */
/* Demangled: DMNR_convert_Mic2_selection_PowerB_FB */
int DMNR_convert_Mic2_selection_PowerB_FB(void);

/* Symbol: calibration_data_switch */
/* Demangled: calibration_data_switch */
int calibration_data_switch(void);

/* Symbol: AEC_Ne_sample_based_processing */
/* Demangled: AEC_Ne_sample_based_processing */
int AEC_Ne_sample_based_processing(void);

/* Symbol: ENH_API_whistle_AEC2_Alloc */
/* Demangled: ENH_API_whistle_AEC2_Alloc */
int ENH_API_whistle_AEC2_Alloc(void);

/* Symbol: ENH_API_MR_Alloc */
/* Demangled: ENH_API_MR_Alloc */
int ENH_API_MR_Alloc(void);

/* Symbol: NDC_DL_Comfort_Noise */
/* Demangled: NDC_DL_Comfort_Noise */
int NDC_DL_Comfort_Noise(void);

/* Symbol: Fixed_Spectral_Smoothing */
/* Demangled: Fixed_Spectral_Smoothing */
int Fixed_Spectral_Smoothing(void);

/* Symbol: ENH_API_Init_STE */
/* Demangled: ENH_API_Init_STE */
int ENH_API_Init_STE(void);

/* Symbol: DL_Echo_Suppress */
/* Demangled: DL_Echo_Suppress */
int DL_Echo_Suppress(void);

/* Symbol: high_flt_NB */
/* Demangled: high_flt_NB */
extern void* high_flt_NB;

/* Symbol: pf_16_12_128 */
/* Demangled: pf_16_12_128 */
extern void* pf_16_12_128;

/* Symbol: ENH_API_Get_CB_Memory_Core_spk */
/* Demangled: ENH_API_Get_CB_Memory_Core_spk */
int ENH_API_Get_CB_Memory_Core_spk(void);

/* Symbol: cfft_radix2_bfly_neon_2x2 */
/* Demangled: cfft_radix2_bfly_neon_2x2 */
int cfft_radix2_bfly_neon_2x2(void);

/* Symbol: STE_Richen_Side_HL_t */
/* Demangled: STE_Richen_Side_HL_t */
extern void* STE_Richen_Side_HL_t;

/* Symbol: thd_mapping_spk */
/* Demangled: thd_mapping_spk */
int thd_mapping_spk(void);

/* Symbol: DMNR_convert_PF_fixed_alpha_rise */
/* Demangled: DMNR_convert_PF_fixed_alpha_rise */
int DMNR_convert_PF_fixed_alpha_rise(void);

/* Symbol: NR_Shift_of_cr_lambda_n */
/* Demangled: NR_Shift_of_cr_lambda_n */
extern void* NR_Shift_of_cr_lambda_n;

/* Symbol: FIR_Q15_12tap */
/* Demangled: FIR_Q15_12tap */
int FIR_Q15_12tap(void);

/* Symbol: add_comfort_noise */
/* Demangled: add_comfort_noise */
int add_comfort_noise(void);

/* Symbol: ASIE_convert_attackTime */
/* Demangled: ASIE_convert_attackTime */
int ASIE_convert_attackTime(void);

/* Symbol: cb_init_over_est */
/* Demangled: cb_init_over_est */
int cb_init_over_est(void);

/* Symbol: MedianPwrIndx */
/* Demangled: MedianPwrIndx */
int MedianPwrIndx(void);

/* Symbol: aec_clipping */
/* Demangled: aec_clipping */
int aec_clipping(void);

/* Symbol: whistle_add */
/* Demangled: whistle_add */
int whistle_add(void);

/* Symbol: cb_OLA */
/* Demangled: cb_OLA */
int cb_OLA(void);

/* Symbol: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2 */
/* Demangled: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2 */
int DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2(void);

/* Symbol: IIR_64 */
/* Demangled: IIR_64 */
int IIR_64(void);

/* Symbol: lookLog10Table */
/* Demangled: lookLog10Table */
int lookLog10Table(void);

/* Symbol: cb_calc_speech_presence_prob */
/* Demangled: cb_calc_speech_presence_prob */
int cb_calc_speech_presence_prob(void);

/* Symbol: ENH_API_Get_FFT_AES_Memory */
/* Demangled: ENH_API_Get_FFT_AES_Memory */
int ENH_API_Get_FFT_AES_Memory(void);

/* Symbol: DMNR_convert_SF_delay */
/* Demangled: DMNR_convert_SF_delay */
int DMNR_convert_SF_delay(void);

/* Symbol: IIR_64_Halfband */
/* Demangled: IIR_64_Halfband */
int IIR_64_Halfband(void);

/* Symbol: ENH_API_Reset_NR */
/* Demangled: ENH_API_Reset_NR */
int ENH_API_Reset_NR(void);

/* Symbol: ENH_Mute_Begin_UL_24BIT */
/* Demangled: ENH_Mute_Begin_UL_24BIT */
int ENH_Mute_Begin_UL_24BIT(void);

/* Symbol: delay_signal */
/* Demangled: delay_signal */
int delay_signal(void);

/* Symbol: dctcos_NB_ABF */
/* Demangled: dctcos_NB_ABF */
extern void* dctcos_NB_ABF;

/* Symbol: cb_HR_NL_spk */
/* Demangled: cb_HR_NL_spk */
int cb_HR_NL_spk(void);

/* Symbol: DMNR_mic1_mic2_difference_VAD */
/* Demangled: DMNR_mic1_mic2_difference_VAD */
int DMNR_mic1_mic2_difference_VAD(void);

/* Symbol: ABM_process */
/* Demangled: ABM_process */
int ABM_process(void);

/* Symbol: LSPK_DT_improv_EPC_inst */
/* Demangled: LSPK_DT_improv_EPC_inst */
int LSPK_DT_improv_EPC_inst(void);

/* Symbol: NR_PostProcessing_48K_Q23 */
/* Demangled: NR_PostProcessing_48K_Q23 */
int NR_PostProcessing_48K_Q23(void);

/* Symbol: ENH_API_Run_Graphical_UI_DRC_48K */
/* Demangled: ENH_API_Run_Graphical_UI_DRC_48K */
int ENH_API_Run_Graphical_UI_DRC_48K(void);

/* Symbol: update_nlms_pwr */
/* Demangled: update_nlms_pwr */
int update_nlms_pwr(void);

/* Symbol: DMNR_convert_Mic_selection_PD_B_A_thd_SPK */
/* Demangled: DMNR_convert_Mic_selection_PD_B_A_thd_SPK */
int DMNR_convert_Mic_selection_PD_B_A_thd_SPK(void);

/* Symbol: Estimate_NonStationaryNoise */
/* Demangled: Estimate_NonStationaryNoise */
int Estimate_NonStationaryNoise(void);

/* Symbol: MBPL_FB_Gain_Apply */
/* Demangled: MBPL_FB_Gain_Apply */
int MBPL_FB_Gain_Apply(void);

/* Symbol: DRC_gain_smoothing */
/* Demangled: DRC_gain_smoothing */
extern void* DRC_gain_smoothing;

/* Symbol: ENH_API_Run_Compressor_48K_Front */
/* Demangled: ENH_API_Run_Compressor_48K_Front */
int ENH_API_Run_Compressor_48K_Front(void);

/* Symbol: NDC_app_sqrt */
/* Demangled: NDC_app_sqrt */
int NDC_app_sqrt(void);

/* Symbol: init_Mic_selection_parms_spk */
/* Demangled: init_Mic_selection_parms_spk */
int init_Mic_selection_parms_spk(void);

/* Symbol: DMNR_convert_Mic_selection_speed_thd_SPK */
/* Demangled: DMNR_convert_Mic_selection_speed_thd_SPK */
int DMNR_convert_Mic_selection_speed_thd_SPK(void);

/* Symbol: sb_pwr_bias_additional_shadow_st */
/* Demangled: sb_pwr_bias_additional_shadow_st */
extern void* sb_pwr_bias_additional_shadow_st;

/* Symbol: cb_postfiltering_calc_noise_spk */
/* Demangled: cb_postfiltering_calc_noise_spk */
int cb_postfiltering_calc_noise_spk(void);

/* Symbol: reset_power_difference_struct */
/* Demangled: reset_power_difference_struct */
int reset_power_difference_struct(void);

/* Symbol: Bin2OB_band_idx */
/* Demangled: Bin2OB_band_idx */
extern void* Bin2OB_band_idx;

/* Symbol: cb_postfiltering_calc_SFR_flag */
/* Demangled: cb_postfiltering_calc_SFR_flag */
int cb_postfiltering_calc_SFR_flag(void);

/* Symbol: num_taps_abf */
/* Demangled: num_taps_abf */
extern void* num_taps_abf;

/* Symbol: wide_angle_caldata_selection */
/* Demangled: wide_angle_caldata_selection */
int wide_angle_caldata_selection(void);

/* Symbol: AGCGainEst */
/* Demangled: AGCGainEst */
int AGCGainEst(void);

/* Symbol: cb_HR_pitch_boost */
/* Demangled: cb_HR_pitch_boost */
int cb_HR_pitch_boost(void);

/* Symbol: ENH_API_Get_Compressor_48K_Memory */
/* Demangled: ENH_API_Get_Compressor_48K_Memory */
int ENH_API_Get_Compressor_48K_Memory(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd_HB_SPK */
/* Demangled: DMNR_convert_Mic_selection_PD_thd_HB_SPK */
int DMNR_convert_Mic_selection_PD_thd_HB_SPK(void);

/* Symbol: MR_channel_syn_flush_buffered_output */
/* Demangled: MR_channel_syn_flush_buffered_output */
int MR_channel_syn_flush_buffered_output(void);

/* Symbol: WB_NR_pre_emphasis */
/* Demangled: WB_NR_pre_emphasis */
int WB_NR_pre_emphasis(void);

/* Symbol: sb_shadow_stepsize_normal */
/* Demangled: sb_shadow_stepsize_normal */
extern void* sb_shadow_stepsize_normal;

/* Symbol: ASIE_convert_safeGainLevel */
/* Demangled: ASIE_convert_safeGainLevel */
int ASIE_convert_safeGainLevel(void);

/* Symbol: cb_OLA_spk */
/* Demangled: cb_OLA_spk */
int cb_OLA_spk(void);

/* Symbol: reset_cb_postfiltering_spk */
/* Demangled: reset_cb_postfiltering_spk */
int reset_cb_postfiltering_spk(void);

/* Symbol: static_test_ENh_info_size */
/* Demangled: static_test_ENh_info_size */
extern void* static_test_ENh_info_size;

/* Symbol: power_limit_xd2 */
/* Demangled: power_limit_xd2 */
extern void* power_limit_xd2;

/* Symbol: Estimate_Echo_by_tcl */
/* Demangled: Estimate_Echo_by_tcl */
int Estimate_Echo_by_tcl(void);

/* Symbol: cb_single_mic_detect_TMOS_spk */
/* Demangled: cb_single_mic_detect_TMOS_spk */
int cb_single_mic_detect_TMOS_spk(void);

/* Symbol: NR_UAD */
/* Demangled: NR_UAD */
int NR_UAD(void);

/* Symbol: Graphical_UI_DRC_Stereo */
/* Demangled: Graphical_UI_DRC_Stereo */
int Graphical_UI_DRC_Stereo(void);

/* Symbol: UlMusicDet_Init */
/* Demangled: UlMusicDet_Init */
int UlMusicDet_Init(void);

/* Symbol: GDRC_DL_Reset */
/* Demangled: GDRC_DL_Reset */
int GDRC_DL_Reset(void);

/* Symbol: LSPK_DT_improv_EPC_st */
/* Demangled: LSPK_DT_improv_EPC_st */
int LSPK_DT_improv_EPC_st(void);

/* Symbol: CB_FFT */
/* Demangled: CB_FFT */
int CB_FFT(void);

/* Symbol: cb_update_SN_energy */
/* Demangled: cb_update_SN_energy */
int cb_update_SN_energy(void);

/* Symbol: calc_envelop_Cmplx32_spk */
/* Demangled: calc_envelop_Cmplx32_spk */
int calc_envelop_Cmplx32_spk(void);

/* Symbol: DL_DRC */
/* Demangled: DL_DRC */
int DL_DRC(void);

/* Symbol: Get_LowShelf_Coef */
/* Demangled: Get_LowShelf_Coef */
int Get_LowShelf_Coef(void);

/* Symbol: VAD_TH_Table */
/* Demangled: VAD_TH_Table */
extern void* VAD_TH_Table;

/* Symbol: cb_postfiltering_with_uncertainty_spk */
/* Demangled: cb_postfiltering_with_uncertainty_spk */
int cb_postfiltering_with_uncertainty_spk(void);

/* Symbol: start_EPL_logger_DL */
/* Demangled: start_EPL_logger_DL */
int start_EPL_logger_DL(void);

/* Symbol: DMNR_convert_Mic_selection_power_thd_FB */
/* Demangled: DMNR_convert_Mic_selection_power_thd_FB */
int DMNR_convert_Mic_selection_power_thd_FB(void);

/* Symbol: init_SF_parms_spk */
/* Demangled: init_SF_parms_spk */
int init_SF_parms_spk(void);

/* Symbol: ENH_API_Set_ul_mute */
/* Demangled: ENH_API_Set_ul_mute */
int ENH_API_Set_ul_mute(void);

/* Symbol: calibrateNoiseLevel_preGain */
/* Demangled: calibrateNoiseLevel_preGain */
int calibrateNoiseLevel_preGain(void);

/* Symbol: cb_calc_speech_absence_prob_MCRA */
/* Demangled: cb_calc_speech_absence_prob_MCRA */
int cb_calc_speech_absence_prob_MCRA(void);

/* Symbol: reset_cb_hr_spk */
/* Demangled: reset_cb_hr_spk */
int reset_cb_hr_spk(void);

/* Symbol: ENH_API_Free_Compressor_48K */
/* Demangled: ENH_API_Free_Compressor_48K */
int ENH_API_Free_Compressor_48K(void);

/* Symbol: DL_DRC_Exp_Gain_Target */
/* Demangled: DL_DRC_Exp_Gain_Target */
int DL_DRC_Exp_Gain_Target(void);

/* Symbol: ENH_API_Reset */
/* Demangled: ENH_API_Reset */
int ENH_API_Reset(void);

/* Symbol: Estimate_Echo_update */
/* Demangled: Estimate_Echo_update */
int Estimate_Echo_update(void);

/* Symbol: getSpecImportantPeak */
/* Demangled: getSpecImportantPeak */
int getSpecImportantPeak(void);

/* Symbol: ENH_API_Run_Low_Latency_24BIT */
/* Demangled: ENH_API_Run_Low_Latency_24BIT */
int ENH_API_Run_Low_Latency_24BIT(void);

/* Symbol: nonlinear_echo_est */
/* Demangled: nonlinear_echo_est */
int nonlinear_echo_est(void);

/* Symbol: NDC_Signal_Level_Calibration_48k */
/* Demangled: NDC_Signal_Level_Calibration_48k */
int NDC_Signal_Level_Calibration_48k(void);

/* Symbol: NR_48K_STE_RESPONSE */
/* Demangled: NR_48K_STE_RESPONSE */
extern void* NR_48K_STE_RESPONSE;

/* Symbol: ENH_API_Reset_ES */
/* Demangled: ENH_API_Reset_ES */
int ENH_API_Reset_ES(void);

/* Symbol: Fixed_ThermalNoise */
/* Demangled: Fixed_ThermalNoise */
int Fixed_ThermalNoise(void);

/* Symbol: NDC_Smooth */
/* Demangled: NDC_Smooth */
int NDC_Smooth(void);

/* Symbol: init_Mic2_blocking_parms */
/* Demangled: init_Mic2_blocking_parms */
int init_Mic2_blocking_parms(void);

/* Symbol: nlms_update */
/* Demangled: nlms_update */
int nlms_update(void);

/* Symbol: ENH_API_update_AGC_GAIN */
/* Demangled: ENH_API_update_AGC_GAIN */
int ENH_API_update_AGC_GAIN(void);

/* Symbol: init_vad_sb */
/* Demangled: init_vad_sb */
int init_vad_sb(void);

/* Symbol: init_cb_GCC */
/* Demangled: init_cb_GCC */
int init_cb_GCC(void);

/* Symbol: ENH_API_Set_ul_enhance */
/* Demangled: ENH_API_Set_ul_enhance */
int ENH_API_Set_ul_enhance(void);

/* Symbol: ENH_API_Free_AEC */
/* Demangled: ENH_API_Free_AEC */
int ENH_API_Free_AEC(void);

/* Symbol: CB_convert_CB_FSH_GAIN_THD */
/* Demangled: CB_convert_CB_FSH_GAIN_THD */
int CB_convert_CB_FSH_GAIN_THD(void);

/* Symbol: NR_ToneDetection */
/* Demangled: NR_ToneDetection */
int NR_ToneDetection(void);

/* Symbol: UL_IIR_coef_16k_set1 */
/* Demangled: UL_IIR_coef_16k_set1 */
extern void* UL_IIR_coef_16k_set1;

/* Symbol: end_EPL_logger */
/* Demangled: end_EPL_logger */
int end_EPL_logger(void);

/* Symbol: Graphical_UI_DRC */
/* Demangled: Graphical_UI_DRC */
int Graphical_UI_DRC(void);

/* Symbol: UL_IIR_coef_16k_set2 */
/* Demangled: UL_IIR_coef_16k_set2 */
extern void* UL_IIR_coef_16k_set2;

/* Symbol: ENH_API_Set_dl_mute */
/* Demangled: ENH_API_Set_dl_mute */
int ENH_API_Set_dl_mute(void);

/* Symbol: FIR_Q15 */
/* Demangled: FIR_Q15 */
int FIR_Q15(void);

/* Symbol: init_vad_fe_HB */
/* Demangled: init_vad_fe_HB */
int init_vad_fe_HB(void);

/* Symbol: cb_waek_ES */
/* Demangled: cb_waek_ES */
int cb_waek_ES(void);

/* Symbol: cb_analysis_spk */
/* Demangled: cb_analysis_spk */
int cb_analysis_spk(void);

/* Symbol: UL_IIR_coef_16k_set3 */
/* Demangled: UL_IIR_coef_16k_set3 */
extern void* UL_IIR_coef_16k_set3;

/* Symbol: Rad4fft256_test32 */
/* Demangled: Rad4fft256_test32 */
int Rad4fft256_test32(void);

/* Symbol: STE_Richen_Side_A_t */
/* Demangled: STE_Richen_Side_A_t */
extern void* STE_Richen_Side_A_t;

/* Symbol: debug_dump_array_Cmplx32 */
/* Demangled: debug_dump_array_Cmplx32 */
int debug_dump_array_Cmplx32(void);

/* Symbol: Gain_AR_Rate_48 */
/* Demangled: Gain_AR_Rate_48 */
extern void* Gain_AR_Rate_48;

/* Symbol: ENH_API_Init_FE */
/* Demangled: ENH_API_Init_FE */
int ENH_API_Init_FE(void);

/* Symbol: NR_Com_Init */
/* Demangled: NR_Com_Init */
int NR_Com_Init(void);

/* Symbol: CB_convert_es_under_estimate_THD */
/* Demangled: CB_convert_es_under_estimate_THD */
int CB_convert_es_under_estimate_THD(void);

/* Symbol: Graphical_UI_DRC_48K */
/* Demangled: Graphical_UI_DRC_48K */
int Graphical_UI_DRC_48K(void);

/* Symbol: abf_init_spk */
/* Demangled: abf_init_spk */
int abf_init_spk(void);

/* Symbol: ENH_API_Reset_whistle_AEC */
/* Demangled: ENH_API_Reset_whistle_AEC */
int ENH_API_Reset_whistle_AEC(void);

/* Symbol: UL_Bounder */
/* Demangled: UL_Bounder */
int UL_Bounder(void);

/* Symbol: Set_TNR_Bound */
/* Demangled: Set_TNR_Bound */
int Set_TNR_Bound(void);

/* Symbol: MMD_level_table */
/* Demangled: MMD_level_table */
extern void* MMD_level_table;

/* Symbol: ENH_API_Init_whistle_AEC */
/* Demangled: ENH_API_Init_whistle_AEC */
int ENH_API_Init_whistle_AEC(void);

/* Symbol: CB_convert_CB_DT_count_THD */
/* Demangled: CB_convert_CB_DT_count_THD */
int CB_convert_CB_DT_count_THD(void);

/* Symbol: CB_convert_TMOS_POWER_THD */
/* Demangled: CB_convert_TMOS_POWER_THD */
int CB_convert_TMOS_POWER_THD(void);

/* Symbol: get_power_difference_VAD */
/* Demangled: get_power_difference_VAD */
int get_power_difference_VAD(void);

/* Symbol: SRC_upsample_x2 */
/* Demangled: SRC_upsample_x2 */
int SRC_upsample_x2(void);

/* Symbol: EC_protect_gain_bound_value */
/* Demangled: EC_protect_gain_bound_value */
int EC_protect_gain_bound_value(void);

/* Symbol: debug_dump_array_Word16 */
/* Demangled: debug_dump_array_Word16 */
int debug_dump_array_Word16(void);

/* Symbol: free_NDC_memory */
/* Demangled: free_NDC_memory */
int free_NDC_memory(void);

/* Symbol: calc_SNR_spk */
/* Demangled: calc_SNR_spk */
int calc_SNR_spk(void);

/* Symbol: RFFT_1024_Q31 */
/* Demangled: RFFT_1024_Q31 */
int RFFT_1024_Q31(void);

/* Symbol: IIR_struct_init */
/* Demangled: IIR_struct_init */
int IIR_struct_init(void);

/* Symbol: Tunable_IIR_struct_init */
/* Demangled: Tunable_IIR_struct_init */
int Tunable_IIR_struct_init(void);

/* Symbol: Radix4BflyFast */
/* Demangled: Radix4BflyFast */
int Radix4BflyFast(void);

/* Symbol: aec_delay_compensate */
/* Demangled: aec_delay_compensate */
int aec_delay_compensate(void);

/* Symbol: MBDRC_Pores */
/* Demangled: MBDRC_Pores */
extern void* MBDRC_Pores;

/* Symbol: ENH_API_Get_NDC_Memory */
/* Demangled: ENH_API_Get_NDC_Memory */
int ENH_API_Get_NDC_Memory(void);

/* Symbol: calc_SNR */
/* Demangled: calc_SNR */
int calc_SNR(void);

/* Symbol: cb_HR_calc_harmonic_reference */
/* Demangled: cb_HR_calc_harmonic_reference */
int cb_HR_calc_harmonic_reference(void);

/* Symbol: NR_SBSynthesis_48K */
/* Demangled: NR_SBSynthesis_48K */
int NR_SBSynthesis_48K(void);

/* Symbol: STE_2nd_IIR */
/* Demangled: STE_2nd_IIR */
int STE_2nd_IIR(void);

/* Symbol: cb_frequency_smoothing_Word32 */
/* Demangled: cb_frequency_smoothing_Word32 */
int cb_frequency_smoothing_Word32(void);

/* Symbol: cb_EC_cem_spk */
/* Demangled: cb_EC_cem_spk */
int cb_EC_cem_spk(void);

/* Symbol: fb_ASLR_noise_esti */
/* Demangled: fb_ASLR_noise_esti */
int fb_ASLR_noise_esti(void);

/* Symbol: SRC_downsample */
/* Demangled: SRC_downsample */
int SRC_downsample(void);

/* Symbol: Fixed_sqrt_NDC */
/* Demangled: Fixed_sqrt_NDC */
int Fixed_sqrt_NDC(void);

/* Symbol: shl_pwr_bias_abf */
/* Demangled: shl_pwr_bias_abf */
int shl_pwr_bias_abf(void);

/* Symbol: HP_IIR_coef_a2_16k_set */
/* Demangled: HP_IIR_coef_a2_16k_set */
extern void* HP_IIR_coef_a2_16k_set;

/* Symbol: HP_IIR_coef_b1_16k_set */
/* Demangled: HP_IIR_coef_b1_16k_set */
extern void* HP_IIR_coef_b1_16k_set;

/* Symbol: ENH_API_DL_AEC2_Alloc */
/* Demangled: ENH_API_DL_AEC2_Alloc */
int ENH_API_DL_AEC2_Alloc(void);

/* Symbol: AEC_fe_sample_based_processing */
/* Demangled: AEC_fe_sample_based_processing */
int AEC_fe_sample_based_processing(void);

/* Symbol: ENH_API_Reset_FE */
/* Demangled: ENH_API_Reset_FE */
int ENH_API_Reset_FE(void);

/* Symbol: RFFT_512_Q31 */
/* Demangled: RFFT_512_Q31 */
int RFFT_512_Q31(void);

/* Symbol: cb_calc_envelop_ratio_spk */
/* Demangled: cb_calc_envelop_ratio_spk */
int cb_calc_envelop_ratio_spk(void);

/* Symbol: update_power_difference */
/* Demangled: update_power_difference */
int update_power_difference(void);

/* Symbol: reset_cb_expander */
/* Demangled: reset_cb_expander */
int reset_cb_expander(void);

/* Symbol: Cal_mic_selection_spk */
/* Demangled: Cal_mic_selection_spk */
int Cal_mic_selection_spk(void);

/* Symbol: PF_convert_stationary_tracking_VAD_THD_SPK */
/* Demangled: PF_convert_stationary_tracking_VAD_THD_SPK */
int PF_convert_stationary_tracking_VAD_THD_SPK(void);

/* Symbol: ENH_API_Get_ul_enh_value */
/* Demangled: ENH_API_Get_ul_enh_value */
int ENH_API_Get_ul_enh_value(void);

/* Symbol: init_cb_expander */
/* Demangled: init_cb_expander */
int init_cb_expander(void);

/* Symbol: NDC_UL_Comfort_Noise */
/* Demangled: NDC_UL_Comfort_Noise */
int NDC_UL_Comfort_Noise(void);

/* Symbol: HFE_FFTGain */
/* Demangled: HFE_FFTGain */
extern void* HFE_FFTGain;

/* Symbol: repeat_samples */
/* Demangled: repeat_samples */
extern void* repeat_samples;

/* Symbol: DRC_DL_Init */
/* Demangled: DRC_DL_Init */
int DRC_DL_Init(void);

/* Symbol: NDC_Comfort_Noise_Table */
/* Demangled: NDC_Comfort_Noise_Table */
extern void* NDC_Comfort_Noise_Table;

/* Symbol: StereoRichen */
/* Demangled: StereoRichen */
int StereoRichen(void);

/* Symbol: num_taps */
/* Demangled: num_taps */
extern void* num_taps;

/* Symbol: pf_16_12_96 */
/* Demangled: pf_16_12_96 */
extern void* pf_16_12_96;

/* Symbol: DMNR_convert_SingleNR_bound */
/* Demangled: DMNR_convert_SingleNR_bound */
int DMNR_convert_SingleNR_bound(void);

/* Symbol: DMNR_convert_Mic_selection_PD_thd_LB_SPK */
/* Demangled: DMNR_convert_Mic_selection_PD_thd_LB_SPK */
int DMNR_convert_Mic_selection_PD_thd_LB_SPK(void);

/* Symbol: analysis_filter */
/* Demangled: analysis_filter */
int analysis_filter(void);

/* Symbol: Low_Latency_D2T_GainCheck */
/* Demangled: Low_Latency_D2T_GainCheck */
int Low_Latency_D2T_GainCheck(void);

/* Symbol: init_cb_GCC_spk */
/* Demangled: init_cb_GCC_spk */
int init_cb_GCC_spk(void);

/* Symbol: allocate_memory_DMNR_spk */
/* Demangled: allocate_memory_DMNR_spk */
int allocate_memory_DMNR_spk(void);

/* Symbol: Change_ESrelated */
/* Demangled: Change_ESrelated */
int Change_ESrelated(void);

/* Symbol: ES_lower_bound_table */
/* Demangled: ES_lower_bound_table */
extern void* ES_lower_bound_table;

/* Symbol: vad_frontend_aec */
/* Demangled: vad_frontend_aec */
int vad_frontend_aec(void);

/* Symbol: Cal_correlation_FrameBase */
/* Demangled: Cal_correlation_FrameBase */
int Cal_correlation_FrameBase(void);

/* Symbol: ABF_Integer_Delay */
/* Demangled: ABF_Integer_Delay */
int ABF_Integer_Delay(void);

/* Symbol: ENH_API_Reset_DMNR */
/* Demangled: ENH_API_Reset_DMNR */
int ENH_API_Reset_DMNR(void);

/* Symbol: Fixed_Divide_48K */
/* Demangled: Fixed_Divide_48K */
int Fixed_Divide_48K(void);

/* Symbol: debug_dump */
/* Demangled: debug_dump */
int debug_dump(void);

/* Symbol: ENH_API_Get_DRC_Memory */
/* Demangled: ENH_API_Get_DRC_Memory */
int ENH_API_Get_DRC_Memory(void);

/* Symbol: ENH_API_Alloc */
/* Demangled: ENH_API_Alloc */
int ENH_API_Alloc(void);

/* Symbol: SRC_downsample_4in */
/* Demangled: SRC_downsample_4in */
int SRC_downsample_4in(void);

/* Symbol: Normal_flt_process_whistle */
/* Demangled: Normal_flt_process_whistle */
int Normal_flt_process_whistle(void);

/* Symbol: cb_calc_speech_absence_prob_PD */
/* Demangled: cb_calc_speech_absence_prob_PD */
int cb_calc_speech_absence_prob_PD(void);

/* Symbol: db_mdb2 */
/* Demangled: db_mdb2 */
int db_mdb2(void);

/* Symbol: check_module_enabled */
/* Demangled: check_module_enabled */
int check_module_enabled(void);

/* Symbol: DL_ClarityControl_Init */
/* Demangled: DL_ClarityControl_Init */
int DL_ClarityControl_Init(void);

/* Symbol: VCE_convert_switch */
/* Demangled: VCE_convert_switch */
int VCE_convert_switch(void);

/* Symbol: free_STE_memory */
/* Demangled: free_STE_memory */
int free_STE_memory(void);

/* Symbol: Estimate_ERL */
/* Demangled: Estimate_ERL */
int Estimate_ERL(void);

/* Symbol: spectralContrastEnhancement */
/* Demangled: spectralContrastEnhancement */
int spectralContrastEnhancement(void);

/* Symbol: fir_48K_960pt_36tap */
/* Demangled: fir_48K_960pt_36tap */
int fir_48K_960pt_36tap(void);

/* Symbol: reset_cb_energy_VAD_spk */
/* Demangled: reset_cb_energy_VAD_spk */
int reset_cb_energy_VAD_spk(void);

/* Symbol: Graphical_UI_DRC_Stereo_24Bit */
/* Demangled: Graphical_UI_DRC_Stereo_24Bit */
int Graphical_UI_DRC_Stereo_24Bit(void);

/* Symbol: DMNR_convert_PF_ABM_underest_SPK */
/* Demangled: DMNR_convert_PF_ABM_underest_SPK */
int DMNR_convert_PF_ABM_underest_SPK(void);

/* Symbol: UL_FrontEnd_48k */
/* Demangled: UL_FrontEnd_48k */
int UL_FrontEnd_48k(void);

/* Symbol: AGC_20ms_DB2Linear_MapP */
/* Demangled: AGC_20ms_DB2Linear_MapP */
extern void* AGC_20ms_DB2Linear_MapP;

/* Symbol: NDC_DG_gain_t */
/* Demangled: NDC_DG_gain_t */
extern void* NDC_DG_gain_t;

/* Symbol: ENH_API_Get_STE_Memory */
/* Demangled: ENH_API_Get_STE_Memory */
int ENH_API_Get_STE_Memory(void);

/* Symbol: AES_overestimation */
/* Demangled: AES_overestimation */
int AES_overestimation(void);

/* Symbol: ES_EPC_process */
/* Demangled: ES_EPC_process */
int ES_EPC_process(void);

/* Symbol: init_cb_postfiltering_spk */
/* Demangled: init_cb_postfiltering_spk */
int init_cb_postfiltering_spk(void);

/* Symbol: free_memory_DMNR */
/* Demangled: free_memory_DMNR */
int free_memory_DMNR(void);

/* Symbol: calc_ENH_DMNR_VAD */
/* Demangled: calc_ENH_DMNR_VAD */
int calc_ENH_DMNR_VAD(void);

/* Symbol: ABF_DIF_FFT */
/* Demangled: ABF_DIF_FFT */
int ABF_DIF_FFT(void);

/* Symbol: DRC_gain_table */
/* Demangled: DRC_gain_table */
extern void* DRC_gain_table;

/* Symbol: reset_cb_hr */
/* Demangled: reset_cb_hr */
int reset_cb_hr(void);

/* Symbol: NDC_Signal_Level_Calibration */
/* Demangled: NDC_Signal_Level_Calibration */
int NDC_Signal_Level_Calibration(void);

/* Symbol: getSpecPeak */
/* Demangled: getSpecPeak */
int getSpecPeak(void);

/* Symbol: ENH_API_Run_HVAD_spk */
/* Demangled: ENH_API_Run_HVAD_spk */
int ENH_API_Run_HVAD_spk(void);

/* Symbol: ENH_API_CB_Alloc_AES */
/* Demangled: ENH_API_CB_Alloc_AES */
int ENH_API_CB_Alloc_AES(void);

/* Symbol: NDC_NRDRC */
/* Demangled: NDC_NRDRC */
int NDC_NRDRC(void);

/* Symbol: CS2LR */
/* Demangled: CS2LR */
int CS2LR(void);

/* Symbol: DMNR_convert_Mic2_blocking_speed_thd */
/* Demangled: DMNR_convert_Mic2_blocking_speed_thd */
int DMNR_convert_Mic2_blocking_speed_thd(void);

/* Symbol: DG_gain_t */
/* Demangled: DG_gain_t */
extern void* DG_gain_t;

/* Symbol: MBPL_Gain_Apply */
/* Demangled: MBPL_Gain_Apply */
int MBPL_Gain_Apply(void);

/* Symbol: ENH_API_Init_CB_spk */
/* Demangled: ENH_API_Init_CB_spk */
int ENH_API_Init_CB_spk(void);

/* Symbol: cb_synthesis_spk */
/* Demangled: cb_synthesis_spk */
int cb_synthesis_spk(void);

/* Symbol: Set_MBDRC_Avg_Power_Thd */
/* Demangled: Set_MBDRC_Avg_Power_Thd */
int Set_MBDRC_Avg_Power_Thd(void);

/* Symbol: comfort_noise_generate */
/* Demangled: comfort_noise_generate */
int comfort_noise_generate(void);

/* Symbol: t_shift_reg */
/* Demangled: t_shift_reg */
extern void* t_shift_reg;

/* Symbol: cb_synthesis */
/* Demangled: cb_synthesis */
int cb_synthesis(void);

/* Symbol: cb_calc_speech_absence_prob_MCRA_spk */
/* Demangled: cb_calc_speech_absence_prob_MCRA_spk */
int cb_calc_speech_absence_prob_MCRA_spk(void);

/* Symbol: ABF_FFT_Sin */
/* Demangled: ABF_FFT_Sin */
extern void* ABF_FFT_Sin;

/* Symbol: DRC_DL_Reset */
/* Demangled: DRC_DL_Reset */
int DRC_DL_Reset(void);

/* Symbol: Set_RX_expander_attack_rate_level */
/* Demangled: Set_RX_expander_attack_rate_level */
int Set_RX_expander_attack_rate_level(void);

/* Symbol: ar1_filter_1_32 */
/* Demangled: ar1_filter_1_32 */
int ar1_filter_1_32(void);

/* Symbol: sb_nlms_stepsize_2 */
/* Demangled: sb_nlms_stepsize_2 */
extern void* sb_nlms_stepsize_2;

/* Symbol: get_comb_filter_coeff */
/* Demangled: get_comb_filter_coeff */
int get_comb_filter_coeff(void);

/* Symbol: CB_convert_es_under_estimate_range */
/* Demangled: CB_convert_es_under_estimate_range */
int CB_convert_es_under_estimate_range(void);

/* Symbol: ENH_API_GetSWGain */
/* Demangled: ENH_API_GetSWGain */
int ENH_API_GetSWGain(void);

/* Symbol: AEC_clip_value */
/* Demangled: AEC_clip_value */
int AEC_clip_value(void);

/* Symbol: cb_apply_gain_buffer_AEC */
/* Demangled: cb_apply_gain_buffer_AEC */
int cb_apply_gain_buffer_AEC(void);

/* Symbol: update_cb_struct_spk */
/* Demangled: update_cb_struct_spk */
int update_cb_struct_spk(void);

/* Symbol: Expender */
/* Demangled: Expender */
int Expender(void);

/* Symbol: WB_NR_SuppressGainApply */
/* Demangled: WB_NR_SuppressGainApply */
int WB_NR_SuppressGainApply(void);

/* Symbol: ENH_API_Init_DL_AEC */
/* Demangled: ENH_API_Init_DL_AEC */
int ENH_API_Init_DL_AEC(void);

/* Symbol: getSII */
/* Demangled: getSII */
int getSII(void);

/* Symbol: asdwRealCoefAQ31 */
/* Demangled: asdwRealCoefAQ31 */
extern void* asdwRealCoefAQ31;

/* Symbol: sb_shadow_stepsize */
/* Demangled: sb_shadow_stepsize */
extern void* sb_shadow_stepsize;

/* Symbol: DMNR_convert_SF_max_band */
/* Demangled: DMNR_convert_SF_max_band */
int DMNR_convert_SF_max_band(void);

/* Symbol: binarySearch_fract16 */
/* Demangled: binarySearch_fract16 */
int binarySearch_fract16(void);

/* Symbol: init_nlms_struct */
/* Demangled: init_nlms_struct */
int init_nlms_struct(void);

/* Symbol: ENH_API_Init_SCH */
/* Demangled: ENH_API_Init_SCH */
int ENH_API_Init_SCH(void);

/* Symbol: sb_additional_shadow_stepsize_st */
/* Demangled: sb_additional_shadow_stepsize_st */
extern void* sb_additional_shadow_stepsize_st;

/* Symbol: CB_convert_N_Power_smooth_THD */
/* Demangled: CB_convert_N_Power_smooth_THD */
int CB_convert_N_Power_smooth_THD(void);

/* Symbol: cb_frequency_smoothing_Word32_spk */
/* Demangled: cb_frequency_smoothing_Word32_spk */
int cb_frequency_smoothing_Word32_spk(void);

/* Symbol: DMNR_convert_Mic2_selection_PowerB_HB */
/* Demangled: DMNR_convert_Mic2_selection_PowerB_HB */
int DMNR_convert_Mic2_selection_PowerB_HB(void);

/* Symbol: ENH_API_Update_STE */
/* Demangled: ENH_API_Update_STE */
int ENH_API_Update_STE(void);

/* Symbol: SRC_downsample_x2 */
/* Demangled: SRC_downsample_x2 */
int SRC_downsample_x2(void);

/* Symbol: ENH_API_Reset_AEC2 */
/* Demangled: ENH_API_Reset_AEC2 */
int ENH_API_Reset_AEC2(void);

/* Symbol: LPF_FFTGain */
/* Demangled: LPF_FFTGain */
extern void* LPF_FFTGain;

/* Symbol: update_cb_hr */
/* Demangled: update_cb_hr */
int update_cb_hr(void);

/* Symbol: init_cb_hr_common_ctrl_spk */
/* Demangled: init_cb_hr_common_ctrl_spk */
int init_cb_hr_common_ctrl_spk(void);

/* Symbol: MBDRC_Gain_T2D_Index */
/* Demangled: MBDRC_Gain_T2D_Index */
extern void* MBDRC_Gain_T2D_Index;

/* Symbol: WB_NR_UAD */
/* Demangled: WB_NR_UAD */
int WB_NR_UAD(void);

/* Symbol: Pre_nlms_dl */
/* Demangled: Pre_nlms_dl */
int Pre_nlms_dl(void);

/* Symbol: debug_mkdir */
/* Demangled: debug_mkdir */
int debug_mkdir(void);

/* Symbol: AGC_Reverse_Gain_Compensation */
/* Demangled: AGC_Reverse_Gain_Compensation */
int AGC_Reverse_Gain_Compensation(void);

/* Symbol: subframe_num */
/* Demangled: subframe_num */
extern void* subframe_num;

/* Symbol: shl_pwr_bias */
/* Demangled: shl_pwr_bias */
int shl_pwr_bias(void);

/* Symbol: reset_fft_es_data_struct */
/* Demangled: reset_fft_es_data_struct */
int reset_fft_es_data_struct(void);

/* Symbol: band0pb_cos_table */
/* Demangled: band0pb_cos_table */
extern void* band0pb_cos_table;

/* Symbol: WB_NR_Subband_VAD */
/* Demangled: WB_NR_Subband_VAD */
int WB_NR_Subband_VAD(void);

/* Symbol: phasor_re_NOR */
/* Demangled: phasor_re_NOR */
extern void* phasor_re_NOR;

/* Symbol: LLR_test_12dB */
/* Demangled: LLR_test_12dB */
int LLR_test_12dB(void);

/* Symbol: AGC_Limiter_changerate */
/* Demangled: AGC_Limiter_changerate */
int AGC_Limiter_changerate(void);

/* Symbol: WB_NR_Music_Detection */
/* Demangled: WB_NR_Music_Detection */
int WB_NR_Music_Detection(void);

/* Symbol: update_MCRA_prob */
/* Demangled: update_MCRA_prob */
int update_MCRA_prob(void);

/* Symbol: ENH_API_CB_Get_FFT_ES_Data */
/* Demangled: ENH_API_CB_Get_FFT_ES_Data */
int ENH_API_CB_Get_FFT_ES_Data(void);

/* Symbol: cb_HR_calc_clean_envelop_spk */
/* Demangled: cb_HR_calc_clean_envelop_spk */
int cb_HR_calc_clean_envelop_spk(void);

/* Symbol: ntd_update_output_type */
/* Demangled: ntd_update_output_type */
int ntd_update_output_type(void);

/* Symbol: phasor_re */
/* Demangled: phasor_re */
extern void* phasor_re;

/* Symbol: cb_postfiltering_apply_gain */
/* Demangled: cb_postfiltering_apply_gain */
int cb_postfiltering_apply_gain(void);

/* Symbol: Maximum_Statistics */
/* Demangled: Maximum_Statistics */
int Maximum_Statistics(void);

/* Symbol: Radix4FirstStage */
/* Demangled: Radix4FirstStage */
int Radix4FirstStage(void);

/* Symbol: Convert_MagiClarityThd1Inx */
/* Demangled: Convert_MagiClarityThd1Inx */
int Convert_MagiClarityThd1Inx(void);

/* Symbol: cb_HR_set_runtime_parameters */
/* Demangled: cb_HR_set_runtime_parameters */
int cb_HR_set_runtime_parameters(void);

/* Symbol: LLR_test_18dB */
/* Demangled: LLR_test_18dB */
int LLR_test_18dB(void);

/* Symbol: calculate_band1_energy */
/* Demangled: calculate_band1_energy */
int calculate_band1_energy(void);

/* Symbol: Set_GDRC_TAV */
/* Demangled: Set_GDRC_TAV */
int Set_GDRC_TAV(void);

/* Symbol: applySpectralContrast */
/* Demangled: applySpectralContrast */
int applySpectralContrast(void);

/* Symbol: reset_cb_data */
/* Demangled: reset_cb_data */
int reset_cb_data(void);

/* Symbol: SearchEnvelope_frontend */
/* Demangled: SearchEnvelope_frontend */
int SearchEnvelope_frontend(void);

/* Symbol: delay_observe_band_13_2 */
/* Demangled: delay_observe_band_13_2 */
int delay_observe_band_13_2(void);

/* Symbol: ASIE_convert_isLoudNoiseThd */
/* Demangled: ASIE_convert_isLoudNoiseThd */
int ASIE_convert_isLoudNoiseThd(void);

/* Symbol: filterByEnvelop */
/* Demangled: filterByEnvelop */
int filterByEnvelop(void);

/* Symbol: shl_pwr_bias_abf_spk */
/* Demangled: shl_pwr_bias_abf_spk */
int shl_pwr_bias_abf_spk(void);

/* Symbol: ENH_API_whistle_MR_Alloc */
/* Demangled: ENH_API_whistle_MR_Alloc */
int ENH_API_whistle_MR_Alloc(void);

/* Symbol: LPF */
/* Demangled: LPF */
extern void* LPF;

/* Symbol: ULDL_GDRCControl_Reset */
/* Demangled: ULDL_GDRCControl_Reset */
int ULDL_GDRCControl_Reset(void);

/* Symbol: CB_FFT_REFLECT_spk */
/* Demangled: CB_FFT_REFLECT_spk */
int CB_FFT_REFLECT_spk(void);

/* Symbol: CB_FFT_spk */
/* Demangled: CB_FFT_spk */
int CB_FFT_spk(void);

/* Symbol: init_cb_fft_struct_spk */
/* Demangled: init_cb_fft_struct_spk */
int init_cb_fft_struct_spk(void);

/* Symbol: init_cb_hr */
/* Demangled: init_cb_hr */
int init_cb_hr(void);

/* Symbol: AGC_Limiter_THD */
/* Demangled: AGC_Limiter_THD */
int AGC_Limiter_THD(void);

/* Symbol: log2_1_plus_x_table */
/* Demangled: log2_1_plus_x_table */
extern void* log2_1_plus_x_table;

/* Symbol: ENH_API_CB_Alloc_PF_spk */
/* Demangled: ENH_API_CB_Alloc_PF_spk */
int ENH_API_CB_Alloc_PF_spk(void);

/* Symbol: SB_LSPK_DMNR */
/* Demangled: SB_LSPK_DMNR */
int SB_LSPK_DMNR(void);

/* Symbol: SlowBitReverse256 */
/* Demangled: SlowBitReverse256 */
int SlowBitReverse256(void);

/* Symbol: BGNT_stepsize_weighting_table */
/* Demangled: BGNT_stepsize_weighting_table */
extern void* BGNT_stepsize_weighting_table;

/* Symbol: ENH_API_Run_MR_UL */
/* Demangled: ENH_API_Run_MR_UL */
int ENH_API_Run_MR_UL(void);

/* Symbol: Radix2_Bfly_Inv_Q31 */
/* Demangled: Radix2_Bfly_Inv_Q31 */
int Radix2_Bfly_Inv_Q31(void);

/* Symbol: EC_protect_ratio_value */
/* Demangled: EC_protect_ratio_value */
int EC_protect_ratio_value(void);

/* Symbol: ENH_API_Get_BUF_Memory */
/* Demangled: ENH_API_Get_BUF_Memory */
int ENH_API_Get_BUF_Memory(void);

/* Symbol: uplink_nlp */
/* Demangled: uplink_nlp */
int uplink_nlp(void);

/* Symbol: pf_16_12_128_WB */
/* Demangled: pf_16_12_128_WB */
extern void* pf_16_12_128_WB;

/* Symbol: Fe_AF */
/* Demangled: Fe_AF */
int Fe_AF(void);

/* Symbol: init_cb_hr_common_ctrl */
/* Demangled: init_cb_hr_common_ctrl */
int init_cb_hr_common_ctrl(void);

/* Symbol: ENH_API_Init_DRC */
/* Demangled: ENH_API_Init_DRC */
int ENH_API_Init_DRC(void);

/* Symbol: reverse_bit */
/* Demangled: reverse_bit */
int reverse_bit(void);

/* Symbol: dynamic_noise_threshold */
/* Demangled: dynamic_noise_threshold */
int dynamic_noise_threshold(void);

/* Symbol: init_cb_ctrl */
/* Demangled: init_cb_ctrl */
int init_cb_ctrl(void);

/* Symbol: cb_postfiltering_calc_gain_by_power_spk */
/* Demangled: cb_postfiltering_calc_gain_by_power_spk */
int cb_postfiltering_calc_gain_by_power_spk(void);

/* Symbol: abf_AGC_Neg_Gain */
/* Demangled: abf_AGC_Neg_Gain */
extern void* abf_AGC_Neg_Gain;

/* Symbol: Table_BounderTHD */
/* Demangled: Table_BounderTHD */
extern void* Table_BounderTHD;

/* Symbol: NDC_NR_Init */
/* Demangled: NDC_NR_Init */
int NDC_NR_Init(void);

/* Symbol: cb_postfiltering_gain_protection */
/* Demangled: cb_postfiltering_gain_protection */
int cb_postfiltering_gain_protection(void);

/* Symbol: ENH_API_Init_FFT_ES */
/* Demangled: ENH_API_Init_FFT_ES */
int ENH_API_Init_FFT_ES(void);

/* Symbol: NR_SetAggMode */
/* Demangled: NR_SetAggMode */
int NR_SetAggMode(void);

/* Symbol: DMNR_convert_Mic_selection_power_thd_HB */
/* Demangled: DMNR_convert_Mic_selection_power_thd_HB */
int DMNR_convert_Mic_selection_power_thd_HB(void);

/* Symbol: init_MMD */
/* Demangled: init_MMD */
int init_MMD(void);

/* Symbol: HP_IIR_coef_a1_16k_set */
/* Demangled: HP_IIR_coef_a1_16k_set */
extern void* HP_IIR_coef_a1_16k_set;

/* Symbol: MBDRC_IIR_W0_Table */
/* Demangled: MBDRC_IIR_W0_Table */
extern void* MBDRC_IIR_W0_Table;

/* Symbol: ENH_API_CB_Get_Data */
/* Demangled: ENH_API_CB_Get_Data */
int ENH_API_CB_Get_Data(void);

/* Symbol: update_cb_hr_spk */
/* Demangled: update_cb_hr_spk */
int update_cb_hr_spk(void);

/* Symbol: cb_postfiltering_calc_stationary_noise_spk */
/* Demangled: cb_postfiltering_calc_stationary_noise_spk */
int cb_postfiltering_calc_stationary_noise_spk(void);

/* Symbol: IIR_coef_a1_Tunable_16k_set1 */
/* Demangled: IIR_coef_a1_Tunable_16k_set1 */
extern void* IIR_coef_a1_Tunable_16k_set1;

/* Symbol: Table_HysGain */
/* Demangled: Table_HysGain */
extern void* Table_HysGain;

/* Symbol: asdwTwiddleCoefQ31 */
/* Demangled: asdwTwiddleCoefQ31 */
extern void* asdwTwiddleCoefQ31;

/* Symbol: ABF_PF_Under_Estimation */
/* Demangled: ABF_PF_Under_Estimation */
extern void* ABF_PF_Under_Estimation;

/* Symbol: IIR_coef_a1_Tunable_16k_set2 */
/* Demangled: IIR_coef_a1_Tunable_16k_set2 */
extern void* IIR_coef_a1_Tunable_16k_set2;

/* Symbol: GDRC_UL_Reset */
/* Demangled: GDRC_UL_Reset */
int GDRC_UL_Reset(void);

/* Symbol: SRC_Coefx2 */
/* Demangled: SRC_Coefx2 */
extern void* SRC_Coefx2;

/* Symbol: Shadow_process */
/* Demangled: Shadow_process */
int Shadow_process(void);

/* Symbol: Table_MBPL_MinGain */
/* Demangled: Table_MBPL_MinGain */
extern void* Table_MBPL_MinGain;

/* Symbol: sb_pwr_bias_additional_shadow */
/* Demangled: sb_pwr_bias_additional_shadow */
extern void* sb_pwr_bias_additional_shadow;

/* Symbol: ENH_API_RUN_UPLINK_NLP */
/* Demangled: ENH_API_RUN_UPLINK_NLP */
int ENH_API_RUN_UPLINK_NLP(void);

/* Symbol: ENH_API_CB_Alloc_Core */
/* Demangled: ENH_API_CB_Alloc_Core */
int ENH_API_CB_Alloc_Core(void);

/* Symbol: FFT_ESR_THD */
/* Demangled: FFT_ESR_THD */
extern void* FFT_ESR_THD;

/* Symbol: cb_calc_speech_absence_prob_BM_spk */
/* Demangled: cb_calc_speech_absence_prob_BM_spk */
int cb_calc_speech_absence_prob_BM_spk(void);

/* Symbol: boost_cepstrum */
/* Demangled: boost_cepstrum */
int boost_cepstrum(void);

/* Symbol: cb_apply_envelop_ratio */
/* Demangled: cb_apply_envelop_ratio */
int cb_apply_envelop_ratio(void);

/* Symbol: DRC2_Add_10dB */
/* Demangled: DRC2_Add_10dB */
int DRC2_Add_10dB(void);

/* Symbol: ENH_API_Init_whistle_MR */
/* Demangled: ENH_API_Init_whistle_MR */
int ENH_API_Init_whistle_MR(void);

/* Symbol: dctcos_2_WB */
/* Demangled: dctcos_2_WB */
extern void* dctcos_2_WB;

/* Symbol: MBDRC_IIR_cos_Table */
/* Demangled: MBDRC_IIR_cos_Table */
extern void* MBDRC_IIR_cos_Table;

/* Symbol: NR_Fixed_sqrt */
/* Demangled: NR_Fixed_sqrt */
int NR_Fixed_sqrt(void);

/* Symbol: IIR_coef_b1_Tunable_16k_set1 */
/* Demangled: IIR_coef_b1_Tunable_16k_set1 */
extern void* IIR_coef_b1_Tunable_16k_set1;

/* Symbol: init_cb_hr_status_ctrl */
/* Demangled: init_cb_hr_status_ctrl */
int init_cb_hr_status_ctrl(void);

/* Symbol: cb_HR_check_enablity_spk */
/* Demangled: cb_HR_check_enablity_spk */
int cb_HR_check_enablity_spk(void);

/* Symbol: ENH_API_Reset_DL_MR */
/* Demangled: ENH_API_Reset_DL_MR */
int ENH_API_Reset_DL_MR(void);

/* Symbol: IIR_coef_b1_Tunable_16k_set2 */
/* Demangled: IIR_coef_b1_Tunable_16k_set2 */
extern void* IIR_coef_b1_Tunable_16k_set2;

/* Symbol: WB_NR_SbAnalysis */
/* Demangled: WB_NR_SbAnalysis */
int WB_NR_SbAnalysis(void);

/* Symbol: reset_cb_postfiltering */
/* Demangled: reset_cb_postfiltering */
int reset_cb_postfiltering(void);

/* Symbol: boost_cepstrum_spk */
/* Demangled: boost_cepstrum_spk */
int boost_cepstrum_spk(void);

/* Symbol: ENH_API_Run_Compressor_48K_Rear */
/* Demangled: ENH_API_Run_Compressor_48K_Rear */
int ENH_API_Run_Compressor_48K_Rear(void);

/* Symbol: ENH_API_Update_DMNR_spk */
/* Demangled: ENH_API_Update_DMNR_spk */
int ENH_API_Update_DMNR_spk(void);

/* Symbol: MBDRC_IIR_struct_init */
/* Demangled: MBDRC_IIR_struct_init */
int MBDRC_IIR_struct_init(void);

/* Symbol: ENH_API_Get_EPL_data_size */
/* Demangled: ENH_API_Get_EPL_data_size */
int ENH_API_Get_EPL_data_size(void);

/* Symbol: binarySearch */
/* Demangled: binarySearch */
int binarySearch(void);

/* Symbol: Table_T2D_LowLatencyDRC */
/* Demangled: Table_T2D_LowLatencyDRC */
extern void* Table_T2D_LowLatencyDRC;

/* Symbol: Noise_Level_Calibration */
/* Demangled: Noise_Level_Calibration */
int Noise_Level_Calibration(void);

/* Symbol: WB_NR_Schedule */
/* Demangled: WB_NR_Schedule */
int WB_NR_Schedule(void);

/* Symbol: ENH_API_Run_Ste */
/* Demangled: ENH_API_Run_Ste */
int ENH_API_Run_Ste(void);

/* Symbol: MBPL_DG_VCE_Gain_Apply */
/* Demangled: MBPL_DG_VCE_Gain_Apply */
int MBPL_DG_VCE_Gain_Apply(void);

/* Symbol: vad_ne */
/* Demangled: vad_ne */
int vad_ne(void);

/* Symbol: pf_16_12_128_NB */
/* Demangled: pf_16_12_128_NB */
extern void* pf_16_12_128_NB;

/* Symbol: abf_reset_spk */
/* Demangled: abf_reset_spk */
int abf_reset_spk(void);

/* Symbol: DlMusicDet_Init */
/* Demangled: DlMusicDet_Init */
int DlMusicDet_Init(void);

/* Symbol: MusicHisDet */
/* Demangled: MusicHisDet */
int MusicHisDet(void);

/* Symbol: HGain_time_smoothing */
/* Demangled: HGain_time_smoothing */
int HGain_time_smoothing(void);

/* Symbol: ENH_API_FE_Alloc */
/* Demangled: ENH_API_FE_Alloc */
int ENH_API_FE_Alloc(void);

/* Symbol: DIF_FFT_Fix16 */
/* Demangled: DIF_FFT_Fix16 */
int DIF_FFT_Fix16(void);

/* Symbol: SPLIT_RFFT_Q31 */
/* Demangled: SPLIT_RFFT_Q31 */
int SPLIT_RFFT_Q31(void);

/* Symbol: NDC_Cnst_Table */
/* Demangled: NDC_Cnst_Table */
extern void* NDC_Cnst_Table;

/* Symbol: sb_whistle_aec */
/* Demangled: sb_whistle_aec */
int sb_whistle_aec(void);

/* Symbol: debug_dump_array_Word32 */
/* Demangled: debug_dump_array_Word32 */
int debug_dump_array_Word32(void);

/* Symbol: init_cb_energy_VAD_spk */
/* Demangled: init_cb_energy_VAD_spk */
int init_cb_energy_VAD_spk(void);

/* Symbol: Fixed_Divide */
/* Demangled: Fixed_Divide */
int Fixed_Divide(void);

/* Symbol: cfft_radix2_bfly_neon */
/* Demangled: cfft_radix2_bfly_neon */
int cfft_radix2_bfly_neon(void);

/* Symbol: WB_NR_SpectrumSmoothing */
/* Demangled: WB_NR_SpectrumSmoothing */
int WB_NR_SpectrumSmoothing(void);

/* Symbol: Normal_flt_process_dl */
/* Demangled: Normal_flt_process_dl */
int Normal_flt_process_dl(void);

/* Symbol: Mic2_ES_param_To_Mic1 */
/* Demangled: Mic2_ES_param_To_Mic1 */
int Mic2_ES_param_To_Mic1(void);

/* Symbol: NR_FixedVAD */
/* Demangled: NR_FixedVAD */
int NR_FixedVAD(void);

/* Symbol: us_coef */
/* Demangled: us_coef */
extern void* us_coef;

/* Symbol: STE_1st_IIR_Stereo */
/* Demangled: STE_1st_IIR_Stereo */
int STE_1st_IIR_Stereo(void);

/* Symbol: cb_hVAD_calc_pwr */
/* Demangled: cb_hVAD_calc_pwr */
int cb_hVAD_calc_pwr(void);

/* Symbol: NR_SuppressGainEst */
/* Demangled: NR_SuppressGainEst */
int NR_SuppressGainEst(void);

/* Symbol: NR_cr_lambda_n */
/* Demangled: NR_cr_lambda_n */
extern void* NR_cr_lambda_n;

/* Symbol: ENH_API_Update_GDRC */
/* Demangled: ENH_API_Update_GDRC */
int ENH_API_Update_GDRC(void);

/* Symbol: SET_SCH_mem_print_log */
/* Demangled: SET_SCH_mem_print_log */
int SET_SCH_mem_print_log(void);

/* Symbol: fir_48K_Q15 */
/* Demangled: fir_48K_Q15 */
int fir_48K_Q15(void);

/* Symbol: sb_pwr_bias_normal */
/* Demangled: sb_pwr_bias_normal */
extern void* sb_pwr_bias_normal;

/* Symbol: cb_postfiltering_calc_stationary_noise */
/* Demangled: cb_postfiltering_calc_stationary_noise */
int cb_postfiltering_calc_stationary_noise(void);

/* Symbol: RIFFT_1024_Q31 */
/* Demangled: RIFFT_1024_Q31 */
int RIFFT_1024_Q31(void);

/* Symbol: LSPK_DT_improv_EPC_count */
/* Demangled: LSPK_DT_improv_EPC_count */
int LSPK_DT_improv_EPC_count(void);

/* Symbol: ENH_API_CB_Alloc_Core_spk */
/* Demangled: ENH_API_CB_Alloc_Core_spk */
int ENH_API_CB_Alloc_Core_spk(void);

/* Symbol: exp_B_table */
/* Demangled: exp_B_table */
extern void* exp_B_table;

/* Symbol: DMNR_mic1_VAD_spk */
/* Demangled: DMNR_mic1_VAD_spk */
int DMNR_mic1_VAD_spk(void);

/* Symbol: MBDRC_IIR_Gain_Init */
/* Demangled: MBDRC_IIR_Gain_Init */
int MBDRC_IIR_Gain_Init(void);

/* Symbol: UAD_FB */
/* Demangled: UAD_FB */
int UAD_FB(void);

/* Symbol: Low_Latency_Standard_DRC_24BIT */
/* Demangled: Low_Latency_Standard_DRC_24BIT */
int Low_Latency_Standard_DRC_24BIT(void);

/* Symbol: ENH_API_AEC2_Alloc */
/* Demangled: ENH_API_AEC2_Alloc */
int ENH_API_AEC2_Alloc(void);

/* Symbol: SetABFCalData */
/* Demangled: SetABFCalData */
int SetABFCalData(void);

/* Symbol: memory_copy_short */
/* Demangled: memory_copy_short */
int memory_copy_short(void);

/* Symbol: dctcos_2_NB */
/* Demangled: dctcos_2_NB */
extern void* dctcos_2_NB;

/* Symbol: cb_HR_set_strength_spk */
/* Demangled: cb_HR_set_strength_spk */
int cb_HR_set_strength_spk(void);

/* Symbol: modify_stepsize_tcl_DL */
/* Demangled: modify_stepsize_tcl_DL */
int modify_stepsize_tcl_DL(void);

/* Symbol: cb_ES */
/* Demangled: cb_ES */
int cb_ES(void);

/* Symbol: reset_cb_fft_struct_spk */
/* Demangled: reset_cb_fft_struct_spk */
int reset_cb_fft_struct_spk(void);

/* Symbol: ds_coef */
/* Demangled: ds_coef */
extern void* ds_coef;

/* Symbol: ds_index */
/* Demangled: ds_index */
extern void* ds_index;

/* Symbol: abf_sb_pwr_bias_normal */
/* Demangled: abf_sb_pwr_bias_normal */
extern void* abf_sb_pwr_bias_normal;

/* Symbol: SB_DMNR */
/* Demangled: SB_DMNR */
int SB_DMNR(void);

/* Symbol: IIR_64_Tunable */
/* Demangled: IIR_64_Tunable */
int IIR_64_Tunable(void);

/* Symbol: calc_envelop_Cmplx32 */
/* Demangled: calc_envelop_Cmplx32 */
int calc_envelop_Cmplx32(void);

/* Symbol: set_DMNR_SB_ctrl_spk */
/* Demangled: set_DMNR_SB_ctrl_spk */
int set_DMNR_SB_ctrl_spk(void);

/* Symbol: ENH_API_Get_FE_Memory */
/* Demangled: ENH_API_Get_FE_Memory */
int ENH_API_Get_FE_Memory(void);

/* Symbol: dctcos_WB */
/* Demangled: dctcos_WB */
extern void* dctcos_WB;

/* Symbol: FWB_FIR_Coef_Table */
/* Demangled: FWB_FIR_Coef_Table */
extern void* FWB_FIR_Coef_Table;

/* Symbol: Select_DRC_Echo_Thd */
/* Demangled: Select_DRC_Echo_Thd */
int Select_DRC_Echo_Thd(void);

/* Symbol: update_cb_hVAD */
/* Demangled: update_cb_hVAD */
int update_cb_hVAD(void);

/* Symbol: ENH_API_Reset_CB_spk */
/* Demangled: ENH_API_Reset_CB_spk */
int ENH_API_Reset_CB_spk(void);

/* Symbol: nlms_change_coeff */
/* Demangled: nlms_change_coeff */
int nlms_change_coeff(void);

/* Symbol: PseudoQ_Record */
/* Demangled: PseudoQ_Record */
int PseudoQ_Record(void);

/* Symbol: UL_FrontEnd_16k_24BIT */
/* Demangled: UL_FrontEnd_16k_24BIT */
int UL_FrontEnd_16k_24BIT(void);

/* Symbol: div_32_32_fft_es */
/* Demangled: div_32_32_fft_es */
int div_32_32_fft_es(void);

/* Symbol: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd */
/* Demangled: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd */
int DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd(void);

/* Symbol: DMNR_convert_Mic2_selection_PowerB_LB_Band0 */
/* Demangled: DMNR_convert_Mic2_selection_PowerB_LB_Band0 */
int DMNR_convert_Mic2_selection_PowerB_LB_Band0(void);

/* Symbol: reset_channel_syn_struct */
/* Demangled: reset_channel_syn_struct */
int reset_channel_syn_struct(void);

/* Symbol: NR_Com_Reset */
/* Demangled: NR_Com_Reset */
int NR_Com_Reset(void);

/* Symbol: ENH_API_Reset_DL_AEC */
/* Demangled: ENH_API_Reset_DL_AEC */
int ENH_API_Reset_DL_AEC(void);

/* Symbol: init_AGC_parms */
/* Demangled: init_AGC_parms */
int init_AGC_parms(void);

/* Symbol: calculateIES */
/* Demangled: calculateIES */
int calculateIES(void);

/* Symbol: DMNR_convert_Mic2_selection_PowerB_LB_Band1 */
/* Demangled: DMNR_convert_Mic2_selection_PowerB_LB_Band1 */
int DMNR_convert_Mic2_selection_PowerB_LB_Band1(void);

/* Symbol: fir_48K_60pt_36tap */
/* Demangled: fir_48K_60pt_36tap */
int fir_48K_60pt_36tap(void);

/* Symbol: LLR_test_9dB */
/* Demangled: LLR_test_9dB */
int LLR_test_9dB(void);

/* Symbol: free_compressor_48K */
/* Demangled: free_compressor_48K */
int free_compressor_48K(void);

/* Symbol: ENH_API_Get_DMNR_spk_Memory_BankA */
/* Demangled: ENH_API_Get_DMNR_spk_Memory_BankA */
int ENH_API_Get_DMNR_spk_Memory_BankA(void);

/* Symbol: Manual_clipping_table */
/* Demangled: Manual_clipping_table */
extern void* Manual_clipping_table;

/* Symbol: HGain_time_smoothing_spk */
/* Demangled: HGain_time_smoothing_spk */
int HGain_time_smoothing_spk(void);

/* Symbol: ENH_API_Get_DMNR_spk_Memory_BankB */
/* Demangled: ENH_API_Get_DMNR_spk_Memory_BankB */
int ENH_API_Get_DMNR_spk_Memory_BankB(void);

/* Symbol: Reverb_process */
/* Demangled: Reverb_process */
int Reverb_process(void);

/* Symbol: New_Cal_correlation_FrameBase */
/* Demangled: New_Cal_correlation_FrameBase */
int New_Cal_correlation_FrameBase(void);

/* Symbol: ABF_cal_process */
/* Demangled: ABF_cal_process */
int ABF_cal_process(void);

/* Symbol: SlowBitReverse256_test32 */
/* Demangled: SlowBitReverse256_test32 */
int SlowBitReverse256_test32(void);

/* Symbol: cb_HR_clean_source_spk */
/* Demangled: cb_HR_clean_source_spk */
int cb_HR_clean_source_spk(void);

/* Symbol: pre_emphasis_1 */
/* Demangled: pre_emphasis_1 */
extern void* pre_emphasis_1;

/* Symbol: UL_End_Suppress_Level_Target */
/* Demangled: UL_End_Suppress_Level_Target */
int UL_End_Suppress_Level_Target(void);

/* Symbol: ENH_API_Init_AEC */
/* Demangled: ENH_API_Init_AEC */
int ENH_API_Init_AEC(void);

/* Symbol: ENH_API_Run_CB */
/* Demangled: ENH_API_Run_CB */
int ENH_API_Run_CB(void);

/* Symbol: AGC_Releaserate */
/* Demangled: AGC_Releaserate */
int AGC_Releaserate(void);

/* Symbol: Hgain_smooth_threshold_table_spk */
/* Demangled: Hgain_smooth_threshold_table_spk */
extern void* Hgain_smooth_threshold_table_spk;

/* Symbol: pre_emphasis_2 */
/* Demangled: pre_emphasis_2 */
extern void* pre_emphasis_2;

/* Symbol: ENH_API_Update_NR_48k */
/* Demangled: ENH_API_Update_NR_48k */
int ENH_API_Update_NR_48k(void);

/* Symbol: sb_nlms_stepsize */
/* Demangled: sb_nlms_stepsize */
extern void* sb_nlms_stepsize;

/* Symbol: reset_cb_GCC_spk */
/* Demangled: reset_cb_GCC_spk */
int reset_cb_GCC_spk(void);

/* Symbol: MBDRC_IIR_64_Tunable */
/* Demangled: MBDRC_IIR_64_Tunable */
int MBDRC_IIR_64_Tunable(void);

/* Symbol: compute_nf_energy */
/* Demangled: compute_nf_energy */
int compute_nf_energy(void);

/* Symbol: Complex_mult */
/* Demangled: Complex_mult */
int Complex_mult(void);

/* Symbol: pre_emphasis_3 */
/* Demangled: pre_emphasis_3 */
extern void* pre_emphasis_3;

/* Symbol: Shadow_process_whistle */
/* Demangled: Shadow_process_whistle */
int Shadow_process_whistle(void);

/* Symbol: cb_apply_envelop_ratio_spk */
/* Demangled: cb_apply_envelop_ratio_spk */
int cb_apply_envelop_ratio_spk(void);

/* Symbol: DMNR_convert_Mic_selection_VAD_THD */
/* Demangled: DMNR_convert_Mic_selection_VAD_THD */
int DMNR_convert_Mic_selection_VAD_THD(void);

/* Symbol: DMNR_convert_WA_PR_THD_offset */
/* Demangled: DMNR_convert_WA_PR_THD_offset */
int DMNR_convert_WA_PR_THD_offset(void);

/* Symbol: init_SND */
/* Demangled: init_SND */
int init_SND(void);

/* Symbol: sub_band_CNG_nf_compute */
/* Demangled: sub_band_CNG_nf_compute */
int sub_band_CNG_nf_compute(void);

/* Symbol: cb_hVAD_calc_confidence */
/* Demangled: cb_hVAD_calc_confidence */
int cb_hVAD_calc_confidence(void);

/* Symbol: Reverse_PlaybackGain */
/* Demangled: Reverse_PlaybackGain */
int Reverse_PlaybackGain(void);

/* Symbol: calculate_bin_energy */
/* Demangled: calculate_bin_energy */
int calculate_bin_energy(void);

/* Symbol: DMNR_convert_WA_handover_counter_step */
/* Demangled: DMNR_convert_WA_handover_counter_step */
int DMNR_convert_WA_handover_counter_step(void);

/* Symbol: calc_PF_gain_modifier */
/* Demangled: calc_PF_gain_modifier */
int calc_PF_gain_modifier(void);

/* Symbol: dctcos_NB */
/* Demangled: dctcos_NB */
extern void* dctcos_NB;

/* Symbol: drc_cos_table */
/* Demangled: drc_cos_table */
extern void* drc_cos_table;

/* Symbol: STE_1st_IIR */
/* Demangled: STE_1st_IIR */
int STE_1st_IIR(void);

/* Symbol: dctcos_4_WB */
/* Demangled: dctcos_4_WB */
extern void* dctcos_4_WB;

/* Symbol: update_module_params */
/* Demangled: update_module_params */
int update_module_params(void);

/* Symbol: cb_postfiltering_apply_uncertainty */
/* Demangled: cb_postfiltering_apply_uncertainty */
int cb_postfiltering_apply_uncertainty(void);

/* Symbol: ENH_INFO_DMNR_decompresss */
/* Demangled: ENH_INFO_DMNR_decompresss */
int ENH_INFO_DMNR_decompresss(void);

/* Symbol: sb_ASLR_noise_esti_spk */
/* Demangled: sb_ASLR_noise_esti_spk */
int sb_ASLR_noise_esti_spk(void);

/* Symbol: init_AGC_time_parms */
/* Demangled: init_AGC_time_parms */
int init_AGC_time_parms(void);

/* Symbol: set_module_active */
/* Demangled: set_module_active */
int set_module_active(void);

/* Symbol: sb_nlms_stepsize_whistle */
/* Demangled: sb_nlms_stepsize_whistle */
extern void* sb_nlms_stepsize_whistle;

/* Symbol: CB_convert_TMOS_NOISE_THD */
/* Demangled: CB_convert_TMOS_NOISE_THD */
int CB_convert_TMOS_NOISE_THD(void);

/* Symbol: cb_postfiltering_apply_gain_spk */
/* Demangled: cb_postfiltering_apply_gain_spk */
int cb_postfiltering_apply_gain_spk(void);

/* Symbol: IIR_allpass */
/* Demangled: IIR_allpass */
int IIR_allpass(void);

/* Symbol: ASIE_convert_enhanceLevel */
/* Demangled: ASIE_convert_enhanceLevel */
int ASIE_convert_enhanceLevel(void);

/* Symbol: FIR_Soft_Coef_Table */
/* Demangled: FIR_Soft_Coef_Table */
extern void* FIR_Soft_Coef_Table;

/* Symbol: getTotalSpecEnergy */
/* Demangled: getTotalSpecEnergy */
int getTotalSpecEnergy(void);

/* Symbol: nlms_update_TDL */
/* Demangled: nlms_update_TDL */
int nlms_update_TDL(void);

/* Symbol: connections */
/* Demangled: connections */
extern void* connections;

/* Symbol: calculate_band0_energy */
/* Demangled: calculate_band0_energy */
int calculate_band0_energy(void);

/* Symbol: Set_GDRC_Min_Gain */
/* Demangled: Set_GDRC_Min_Gain */
int Set_GDRC_Min_Gain(void);

/* Symbol: ENH_API_AEC_Alloc */
/* Demangled: ENH_API_AEC_Alloc */
int ENH_API_AEC_Alloc(void);

/* Symbol: T2F_Transform */
/* Demangled: T2F_Transform */
int T2F_Transform(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBMTKSPEECHENH_H */
