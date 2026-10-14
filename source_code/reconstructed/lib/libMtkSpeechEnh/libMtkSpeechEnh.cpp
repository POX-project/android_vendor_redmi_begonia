/*
 * Reverse-Engineered Source for: libMtkSpeechEnh.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libMtkSpeechEnh"

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
#include "libMtkSpeechEnh.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: Switch_ECrelated */
extern "C" __attribute__((visibility("default"))) int Switch_ECrelated(void) {
    ALOGD("Switch_ECrelated() called");
    return 0;
}

/* Demangled: ABF_Delay_Calibration */
extern "C" __attribute__((visibility("default"))) int ABF_Delay_Calibration(void) {
    ALOGD("ABF_Delay_Calibration() called");
    return 0;
}

/* Demangled: DRC_UL_Reset */
extern "C" __attribute__((visibility("default"))) int DRC_UL_Reset(void) {
    ALOGD("DRC_UL_Reset() called");
    return 0;
}

/* Demangled: ENH_API_Update_SCH */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_SCH(void) {
    ALOGD("ENH_API_Update_SCH() called");
    return 0;
}

/* Demangled: fir_48K_Q23 */
extern "C" __attribute__((visibility("default"))) int fir_48K_Q23(void) {
    ALOGD("fir_48K_Q23() called");
    return 0;
}

/* Demangled: set_expd_thd */
extern "C" __attribute__((visibility("default"))) int set_expd_thd(void) {
    ALOGD("set_expd_thd() called");
    return 0;
}

/* Exported Object: MBDRC_IIR_Coef */
extern "C" __attribute__((visibility("default"))) void* MBDRC_IIR_Coef = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: Caluate_ser */
extern "C" __attribute__((visibility("default"))) int Caluate_ser(void) {
    ALOGD("Caluate_ser() called");
    return 0;
}

/* Demangled: ENH_API_Reset_FFT_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_FFT_ES(void) {
    ALOGD("ENH_API_Reset_FFT_ES() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_powerB_thd_LB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_powerB_thd_LB(void) {
    ALOGD("DMNR_convert_Mic_selection_powerB_thd_LB() called");
    return 0;
}

/* Demangled: init_ntd_struct */
extern "C" __attribute__((visibility("default"))) int init_ntd_struct(void) {
    ALOGD("init_ntd_struct() called");
    return 0;
}

/* Demangled: init_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int init_ctrl_spk(void) {
    ALOGD("init_ctrl_spk() called");
    return 0;
}

/* Demangled: reset_cb_hVAD */
extern "C" __attribute__((visibility("default"))) int reset_cb_hVAD(void) {
    ALOGD("reset_cb_hVAD() called");
    return 0;
}

/* Exported Object: NDC_Cnst_Table_SWB */
extern "C" __attribute__((visibility("default"))) void* NDC_Cnst_Table_SWB = NULL;

/* Demangled: tcl_erl_update */
extern "C" __attribute__((visibility("default"))) int tcl_erl_update(void) {
    ALOGD("tcl_erl_update() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_gain_by_power */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_gain_by_power(void) {
    ALOGD("cb_postfiltering_calc_gain_by_power() called");
    return 0;
}

/* Exported Object: MMD_shift_table */
extern "C" __attribute__((visibility("default"))) void* MMD_shift_table = NULL;

/* Exported Object: NDC_dB_Gain_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_dB_Gain_Table = NULL;

/* Exported Object: STE_Widen_Side02_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side02_t = NULL;

/* Demangled: Cal_POS_NSER */
extern "C" __attribute__((visibility("default"))) int Cal_POS_NSER(void) {
    ALOGD("Cal_POS_NSER() called");
    return 0;
}

/* Demangled: cb_HR_set_strength */
extern "C" __attribute__((visibility("default"))) int cb_HR_set_strength(void) {
    ALOGD("cb_HR_set_strength() called");
    return 0;
}

/* Demangled: DMNR_convert_WA_counter_step */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_WA_counter_step(void) {
    ALOGD("DMNR_convert_WA_counter_step() called");
    return 0;
}

/* Demangled: BKF_Soft_Shaping */
extern "C" __attribute__((visibility("default"))) int BKF_Soft_Shaping(void) {
    ALOGD("BKF_Soft_Shaping() called");
    return 0;
}

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: cb_HR_calc_gain */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_gain(void) {
    ALOGD("cb_HR_calc_gain() called");
    return 0;
}

/* Demangled: shr_rr */
extern "C" __attribute__((visibility("default"))) int shr_rr(void) {
    ALOGD("shr_rr() called");
    return 0;
}

/* Demangled: Cal_parameter_1_spk */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_1_spk(void) {
    ALOGD("Cal_parameter_1_spk() called");
    return 0;
}

/* Exported Object: ne_us_hist */
extern "C" __attribute__((visibility("default"))) void* ne_us_hist = NULL;

/* Demangled: StereoEnh_Get_Memory */
extern "C" __attribute__((visibility("default"))) int StereoEnh_Get_Memory(void) {
    ALOGD("StereoEnh_Get_Memory() called");
    return 0;
}

/* Demangled: Low_Latency_Normalized_Division */
extern "C" __attribute__((visibility("default"))) int Low_Latency_Normalized_Division(void) {
    ALOGD("Low_Latency_Normalized_Division() called");
    return 0;
}

/* Demangled: Complex_mult_test32_smmul */
extern "C" __attribute__((visibility("default"))) int Complex_mult_test32_smmul(void) {
    ALOGD("Complex_mult_test32_smmul() called");
    return 0;
}

/* Demangled: DFT_update_GCC_spk */
extern "C" __attribute__((visibility("default"))) int DFT_update_GCC_spk(void) {
    ALOGD("DFT_update_GCC_spk() called");
    return 0;
}

/* Demangled: MBDRC_Gain_IIR */
extern "C" __attribute__((visibility("default"))) int MBDRC_Gain_IIR(void) {
    ALOGD("MBDRC_Gain_IIR() called");
    return 0;
}

/* Demangled: Caluate_pre_ser */
extern "C" __attribute__((visibility("default"))) int Caluate_pre_ser(void) {
    ALOGD("Caluate_pre_ser() called");
    return 0;
}

/* Demangled: ENH_API_Get_AEC2_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_AEC2_Memory(void) {
    ALOGD("ENH_API_Get_AEC2_Memory() called");
    return 0;
}

/* Demangled: normalize_fun_32 */
extern "C" __attribute__((visibility("default"))) int normalize_fun_32(void) {
    ALOGD("normalize_fun_32() called");
    return 0;
}

/* Demangled: CB_FFT_REFLECT */
extern "C" __attribute__((visibility("default"))) int CB_FFT_REFLECT(void) {
    ALOGD("CB_FFT_REFLECT() called");
    return 0;
}

/* Demangled: ENH_API_Get_FFT_ES_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_FFT_ES_Memory(void) {
    ALOGD("ENH_API_Get_FFT_ES_Memory() called");
    return 0;
}

/* Demangled: ENH_API_Run_MR_DL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_MR_DL(void) {
    ALOGD("ENH_API_Run_MR_DL() called");
    return 0;
}

/* Exported Object: MBDRC_AR_Rate_16 */
extern "C" __attribute__((visibility("default"))) void* MBDRC_AR_Rate_16 = NULL;

/* Demangled: Set_ambient_noise_calibra */
extern "C" __attribute__((visibility("default"))) int Set_ambient_noise_calibra(void) {
    ALOGD("Set_ambient_noise_calibra() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_HL_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_HL_t = NULL;

/* Exported Object: AES_overestimate_table */
extern "C" __attribute__((visibility("default"))) void* AES_overestimate_table = NULL;

/* Exported Object: sb_additional_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_additional_shadow_stepsize = NULL;

/* Demangled: vad_fe */
extern "C" __attribute__((visibility("default"))) int vad_fe(void) {
    ALOGD("vad_fe() called");
    return 0;
}

/* Exported Object: Bin2OB_band_width */
extern "C" __attribute__((visibility("default"))) void* Bin2OB_band_width = NULL;

/* Demangled: NR_PreSuppressGainEst */
extern "C" __attribute__((visibility("default"))) int NR_PreSuppressGainEst(void) {
    ALOGD("NR_PreSuppressGainEst() called");
    return 0;
}

/* Demangled: init_bankB_parms_DMNR */
extern "C" __attribute__((visibility("default"))) int init_bankB_parms_DMNR(void) {
    ALOGD("init_bankB_parms_DMNR() called");
    return 0;
}

/* Demangled: Cal_mic2_blocking */
extern "C" __attribute__((visibility("default"))) int Cal_mic2_blocking(void) {
    ALOGD("Cal_mic2_blocking() called");
    return 0;
}

/* Demangled: UL_FrontEnd_16k */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_16k(void) {
    ALOGD("UL_FrontEnd_16k() called");
    return 0;
}

/* Demangled: Rad4fft256 */
extern "C" __attribute__((visibility("default"))) int Rad4fft256(void) {
    ALOGD("Rad4fft256() called");
    return 0;
}

/* Demangled: AGC_Fixed_sqrt */
extern "C" __attribute__((visibility("default"))) int AGC_Fixed_sqrt(void) {
    ALOGD("AGC_Fixed_sqrt() called");
    return 0;
}

/* Demangled: compute_TCL */
extern "C" __attribute__((visibility("default"))) int compute_TCL(void) {
    ALOGD("compute_TCL() called");
    return 0;
}

/* Demangled: init_vad3 */
extern "C" __attribute__((visibility("default"))) int init_vad3(void) {
    ALOGD("init_vad3() called");
    return 0;
}

/* Demangled: ES_estimated_echo_control */
extern "C" __attribute__((visibility("default"))) int ES_estimated_echo_control(void) {
    ALOGD("ES_estimated_echo_control() called");
    return 0;
}

/* Demangled: ENH_API_Set_SQoS_ctrl_parameters */
extern "C" __attribute__((visibility("default"))) int ENH_API_Set_SQoS_ctrl_parameters(void) {
    ALOGD("ENH_API_Set_SQoS_ctrl_parameters() called");
    return 0;
}

/* Demangled: init_bankA_parms_DMNR */
extern "C" __attribute__((visibility("default"))) int init_bankA_parms_DMNR(void) {
    ALOGD("init_bankA_parms_DMNR() called");
    return 0;
}

/* Exported Object: ABF_sb_PF_Smoothing_N */
extern "C" __attribute__((visibility("default"))) void* ABF_sb_PF_Smoothing_N = NULL;

/* Demangled: NDC_Normalize_Gain_dB */
extern "C" __attribute__((visibility("default"))) int NDC_Normalize_Gain_dB(void) {
    ALOGD("NDC_Normalize_Gain_dB() called");
    return 0;
}

/* Demangled: init_FSH_parms */
extern "C" __attribute__((visibility("default"))) int init_FSH_parms(void) {
    ALOGD("init_FSH_parms() called");
    return 0;
}

/* Demangled: whistle_delay_Reset */
extern "C" __attribute__((visibility("default"))) int whistle_delay_Reset(void) {
    ALOGD("whistle_delay_Reset() called");
    return 0;
}

/* Demangled: cb_HR_calc_clean_envelop */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_clean_envelop(void) {
    ALOGD("cb_HR_calc_clean_envelop() called");
    return 0;
}

/* Demangled: cb_HR_clean_source */
extern "C" __attribute__((visibility("default"))) int cb_HR_clean_source(void) {
    ALOGD("cb_HR_clean_source() called");
    return 0;
}

/* Demangled: init_cb_data */
extern "C" __attribute__((visibility("default"))) int init_cb_data(void) {
    ALOGD("init_cb_data() called");
    return 0;
}

/* Demangled: NDC_IIR_64 */
extern "C" __attribute__((visibility("default"))) int NDC_IIR_64(void) {
    ALOGD("NDC_IIR_64() called");
    return 0;
}

/* Exported Object: ne_ds_hist */
extern "C" __attribute__((visibility("default"))) void* ne_ds_hist = NULL;

/* Demangled: init_cb_postfiltering */
extern "C" __attribute__((visibility("default"))) int init_cb_postfiltering(void) {
    ALOGD("init_cb_postfiltering() called");
    return 0;
}

/* Demangled: update_cb_postfiltering_spk */
extern "C" __attribute__((visibility("default"))) int update_cb_postfiltering_spk(void) {
    ALOGD("update_cb_postfiltering_spk() called");
    return 0;
}

/* Demangled: WB_NR_ToneDetection_HandFree */
extern "C" __attribute__((visibility("default"))) int WB_NR_ToneDetection_HandFree(void) {
    ALOGD("WB_NR_ToneDetection_HandFree() called");
    return 0;
}

/* Demangled: mdb2_linear */
extern "C" __attribute__((visibility("default"))) int mdb2_linear(void) {
    ALOGD("mdb2_linear() called");
    return 0;
}

/* Exported Object: FIR_coef_HPF */
extern "C" __attribute__((visibility("default"))) void* FIR_coef_HPF = NULL;

/* Demangled: ENH_API_Update_DRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_DRC(void) {
    ALOGD("ENH_API_Update_DRC() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_B_A_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_B_A_thd(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_B_A_thd() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_speed_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_speed_thd(void) {
    ALOGD("DMNR_convert_Mic_selection_speed_thd() called");
    return 0;
}

/* Demangled: DMNR_analysis_filter_spk */
extern "C" __attribute__((visibility("default"))) int DMNR_analysis_filter_spk(void) {
    ALOGD("DMNR_analysis_filter_spk() called");
    return 0;
}

/* Demangled: ENH_Mute_Begin_UL */
extern "C" __attribute__((visibility("default"))) int ENH_Mute_Begin_UL(void) {
    ALOGD("ENH_Mute_Begin_UL() called");
    return 0;
}

/* Demangled: LSPK_DT_improvBNAD1 */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improvBNAD1(void) {
    ALOGD("LSPK_DT_improvBNAD1() called");
    return 0;
}

/* Demangled: delay_observe_band */
extern "C" __attribute__((visibility("default"))) int delay_observe_band(void) {
    ALOGD("delay_observe_band() called");
    return 0;
}

/* Exported Object: ABF_sb_PF_Smoothing_S */
extern "C" __attribute__((visibility("default"))) void* ABF_sb_PF_Smoothing_S = NULL;

/* Demangled: init_ASLR_parms_spk */
extern "C" __attribute__((visibility("default"))) int init_ASLR_parms_spk(void) {
    ALOGD("init_ASLR_parms_spk() called");
    return 0;
}

/* Exported Object: subframe_num_switch_table */
extern "C" __attribute__((visibility("default"))) void* subframe_num_switch_table = NULL;

/* Demangled: ENH_API_Set_dl_enhance */
extern "C" __attribute__((visibility("default"))) int ENH_API_Set_dl_enhance(void) {
    ALOGD("ENH_API_Set_dl_enhance() called");
    return 0;
}

/* Exported Object: ne2_ds_hist */
extern "C" __attribute__((visibility("default"))) void* ne2_ds_hist = NULL;

/* Demangled: cb_HR_cem */
extern "C" __attribute__((visibility("default"))) int cb_HR_cem(void) {
    ALOGD("cb_HR_cem() called");
    return 0;
}

/* Exported Object: ABF_CB_width */
extern "C" __attribute__((visibility("default"))) void* ABF_CB_width = NULL;

/* Demangled: adaptive_beamforming_spk */
extern "C" __attribute__((visibility("default"))) int adaptive_beamforming_spk(void) {
    ALOGD("adaptive_beamforming_spk() called");
    return 0;
}

/* Demangled: LinearEcho_weight */
extern "C" __attribute__((visibility("default"))) int LinearEcho_weight(void) {
    ALOGD("LinearEcho_weight() called");
    return 0;
}

/* Demangled: init_cb_energy_VAD */
extern "C" __attribute__((visibility("default"))) int init_cb_energy_VAD(void) {
    ALOGD("init_cb_energy_VAD() called");
    return 0;
}

/* Demangled: MR_channel_syn_flush_output */
extern "C" __attribute__((visibility("default"))) int MR_channel_syn_flush_output(void) {
    ALOGD("MR_channel_syn_flush_output() called");
    return 0;
}

/* Demangled: WB_NR_SuppressGainEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainEst(void) {
    ALOGD("WB_NR_SuppressGainEst() called");
    return 0;
}

/* Demangled: DL_CC_Strength */
extern "C" __attribute__((visibility("default"))) int DL_CC_Strength(void) {
    ALOGD("DL_CC_Strength() called");
    return 0;
}

/* Demangled: DL_CC_Threshold */
extern "C" __attribute__((visibility("default"))) int DL_CC_Threshold(void) {
    ALOGD("DL_CC_Threshold() called");
    return 0;
}

/* Demangled: ENH_API_DL_AEC_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DL_AEC_Alloc(void) {
    ALOGD("ENH_API_DL_AEC_Alloc() called");
    return 0;
}

/* Demangled: cb_postfiltering_lower_bound_gain */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_lower_bound_gain(void) {
    ALOGD("cb_postfiltering_lower_bound_gain() called");
    return 0;
}

/* Demangled: AGC_low_bound */
extern "C" __attribute__((visibility("default"))) int AGC_low_bound(void) {
    ALOGD("AGC_low_bound() called");
    return 0;
}

/* Demangled: ENH_API_Reset_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_DMNR_spk(void) {
    ALOGD("ENH_API_Reset_DMNR_spk() called");
    return 0;
}

/* Demangled: IIR_64_MicIIR */
extern "C" __attribute__((visibility("default"))) int IIR_64_MicIIR(void) {
    ALOGD("IIR_64_MicIIR() called");
    return 0;
}

/* Demangled: Set_GDRC_Threshold */
extern "C" __attribute__((visibility("default"))) int Set_GDRC_Threshold(void) {
    ALOGD("Set_GDRC_Threshold() called");
    return 0;
}

/* Demangled: cb_HR_calc_harmonic_reference_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_harmonic_reference_spk(void) {
    ALOGD("cb_HR_calc_harmonic_reference_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd_FB_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd_FB_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd_FB_SPK() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: pack_div_s_32_32 */
extern "C" __attribute__((visibility("default"))) int pack_div_s_32_32(void) {
    ALOGD("pack_div_s_32_32() called");
    return 0;
}

/* Demangled: cb_analysis */
extern "C" __attribute__((visibility("default"))) int cb_analysis(void) {
    ALOGD("cb_analysis() called");
    return 0;
}

/* Demangled: update_EPL_logger */
extern "C" __attribute__((visibility("default"))) int update_EPL_logger(void) {
    ALOGD("update_EPL_logger() called");
    return 0;
}

/* Demangled: ENH_API_Free_NDC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_NDC(void) {
    ALOGD("ENH_API_Free_NDC() called");
    return 0;
}

/* Demangled: sumBandEnergy */
extern "C" __attribute__((visibility("default"))) int sumBandEnergy(void) {
    ALOGD("sumBandEnergy() called");
    return 0;
}

/* Demangled: NR_FixedNoiseEst */
extern "C" __attribute__((visibility("default"))) int NR_FixedNoiseEst(void) {
    ALOGD("NR_FixedNoiseEst() called");
    return 0;
}

/* Demangled: ENH_API_Get_BT_EC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_BT_EC_Memory(void) {
    ALOGD("ENH_API_Get_BT_EC_Memory() called");
    return 0;
}

/* Demangled: linear_mdb2 */
extern "C" __attribute__((visibility("default"))) int linear_mdb2(void) {
    ALOGD("linear_mdb2() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_selection_PowerA_LB_Band0 */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_selection_PowerA_LB_Band0(void) {
    ALOGD("DMNR_convert_Mic2_selection_PowerA_LB_Band0() called");
    return 0;
}

/* Demangled: IIR_allpass_stereo_record_Q23 */
extern "C" __attribute__((visibility("default"))) int IIR_allpass_stereo_record_Q23(void) {
    ALOGD("IIR_allpass_stereo_record_Q23() called");
    return 0;
}

/* Demangled: ENH_API_Reset_STE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_STE(void) {
    ALOGD("ENH_API_Reset_STE() called");
    return 0;
}

/* Demangled: copyCmplx16 */
extern "C" __attribute__((visibility("default"))) int copyCmplx16(void) {
    ALOGD("copyCmplx16() called");
    return 0;
}

/* Demangled: AGC_function */
extern "C" __attribute__((visibility("default"))) int AGC_function(void) {
    ALOGD("AGC_function() called");
    return 0;
}

/* Demangled: Set_AGC_48K */
extern "C" __attribute__((visibility("default"))) int Set_AGC_48K(void) {
    ALOGD("Set_AGC_48K() called");
    return 0;
}

/* Demangled: NR_SbAnalysis_48K */
extern "C" __attribute__((visibility("default"))) int NR_SbAnalysis_48K(void) {
    ALOGD("NR_SbAnalysis_48K() called");
    return 0;
}

/* Demangled: init_shadow_vad_struct */
extern "C" __attribute__((visibility("default"))) int init_shadow_vad_struct(void) {
    ALOGD("init_shadow_vad_struct() called");
    return 0;
}

/* Demangled: NR_DL_Reset */
extern "C" __attribute__((visibility("default"))) int NR_DL_Reset(void) {
    ALOGD("NR_DL_Reset() called");
    return 0;
}

/* Demangled: Set_MBDRC_TAV */
extern "C" __attribute__((visibility("default"))) int Set_MBDRC_TAV(void) {
    ALOGD("Set_MBDRC_TAV() called");
    return 0;
}

/* Exported Object: AGC_sqrt_coef */
extern "C" __attribute__((visibility("default"))) void* AGC_sqrt_coef = NULL;

/* Demangled: Normal_flt_process */
extern "C" __attribute__((visibility("default"))) int Normal_flt_process(void) {
    ALOGD("Normal_flt_process() called");
    return 0;
}

/* Demangled: Pre_nlms_whistle */
extern "C" __attribute__((visibility("default"))) int Pre_nlms_whistle(void) {
    ALOGD("Pre_nlms_whistle() called");
    return 0;
}

/* Demangled: NR_SBSynthesis_48K_Q23 */
extern "C" __attribute__((visibility("default"))) int NR_SBSynthesis_48K_Q23(void) {
    ALOGD("NR_SBSynthesis_48K_Q23() called");
    return 0;
}

/* Demangled: ENH_API_Run_Ndc_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ndc_UL(void) {
    ALOGD("ENH_API_Run_Ndc_UL() called");
    return 0;
}

/* Demangled: Pre_nlms */
extern "C" __attribute__((visibility("default"))) int Pre_nlms(void) {
    ALOGD("Pre_nlms() called");
    return 0;
}

/* Demangled: ENH_API_Module_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_Module_Alloc(void) {
    ALOGD("ENH_API_Module_Alloc() called");
    return 0;
}

/* Demangled: Mic2_process */
extern "C" __attribute__((visibility("default"))) int Mic2_process(void) {
    ALOGD("Mic2_process() called");
    return 0;
}

/* Demangled: set_ntd_ctrl */
extern "C" __attribute__((visibility("default"))) int set_ntd_ctrl(void) {
    ALOGD("set_ntd_ctrl() called");
    return 0;
}

/* Demangled: noise_estimation */
extern "C" __attribute__((visibility("default"))) int noise_estimation(void) {
    ALOGD("noise_estimation() called");
    return 0;
}

/* Demangled: vad_fe_HB */
extern "C" __attribute__((visibility("default"))) int vad_fe_HB(void) {
    ALOGD("vad_fe_HB() called");
    return 0;
}

/* Exported Object: dctcos_22_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_22_NB = NULL;

/* Demangled: cb_update_stationary_noise */
extern "C" __attribute__((visibility("default"))) int cb_update_stationary_noise(void) {
    ALOGD("cb_update_stationary_noise() called");
    return 0;
}

/* Demangled: cb_calc_speech_presence_prob_spk */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_presence_prob_spk(void) {
    ALOGD("cb_calc_speech_presence_prob_spk() called");
    return 0;
}

/* Exported Object: dB2Linear_neg */
extern "C" __attribute__((visibility("default"))) void* dB2Linear_neg = NULL;

/* Demangled: AGCGainREC */
extern "C" __attribute__((visibility("default"))) int AGCGainREC(void) {
    ALOGD("AGCGainREC() called");
    return 0;
}

/* Demangled: init_GCC_parms */
extern "C" __attribute__((visibility("default"))) int init_GCC_parms(void) {
    ALOGD("init_GCC_parms() called");
    return 0;
}

/* Demangled: Set_MBDRC_Hys */
extern "C" __attribute__((visibility("default"))) int Set_MBDRC_Hys(void) {
    ALOGD("Set_MBDRC_Hys() called");
    return 0;
}

/* Demangled: ENH_API_Get_Version */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Version(void) {
    ALOGD("ENH_API_Get_Version() called");
    return 0;
}

/* Demangled: EPC_handling */
extern "C" __attribute__((visibility("default"))) int EPC_handling(void) {
    ALOGD("EPC_handling() called");
    return 0;
}

/* Demangled: reset_cb_data_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_data_spk(void) {
    ALOGD("reset_cb_data_spk() called");
    return 0;
}

/* Demangled: ENH_API_Init_Compressor_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_Compressor_48K(void) {
    ALOGD("ENH_API_Init_Compressor_48K() called");
    return 0;
}

/* Exported Object: BKF_WeightingTable */
extern "C" __attribute__((visibility("default"))) void* BKF_WeightingTable = NULL;

/* Exported Object: EC_protect_band_value_table */
extern "C" __attribute__((visibility("default"))) void* EC_protect_band_value_table = NULL;

/* Demangled: init_cb_data_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_data_spk(void) {
    ALOGD("init_cb_data_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd(void) {
    ALOGD("DMNR_convert_Mic_selection_Power_A_B_ratio_band0_thd() called");
    return 0;
}

/* Demangled: modify_stepsize_tcl */
extern "C" __attribute__((visibility("default"))) int modify_stepsize_tcl(void) {
    ALOGD("modify_stepsize_tcl() called");
    return 0;
}

/* Demangled: ABF_SB */
extern "C" __attribute__((visibility("default"))) int ABF_SB(void) {
    ALOGD("ABF_SB() called");
    return 0;
}

/* Demangled: ENH_API_SCH_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_SCH_Alloc(void) {
    ALOGD("ENH_API_SCH_Alloc() called");
    return 0;
}

/* Demangled: ENH_API_Free_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_MR(void) {
    ALOGD("ENH_API_Free_MR() called");
    return 0;
}

/* Demangled: speech_band_analysis */
extern "C" __attribute__((visibility("default"))) int speech_band_analysis(void) {
    ALOGD("speech_band_analysis() called");
    return 0;
}

/* Demangled: SPLIT_RIFFT_Q31 */
extern "C" __attribute__((visibility("default"))) int SPLIT_RIFFT_Q31(void) {
    ALOGD("SPLIT_RIFFT_Q31() called");
    return 0;
}

/* Demangled: SRC_upsample */
extern "C" __attribute__((visibility("default"))) int SRC_upsample(void) {
    ALOGD("SRC_upsample() called");
    return 0;
}

/* Demangled: StereoWiden */
extern "C" __attribute__((visibility("default"))) int StereoWiden(void) {
    ALOGD("StereoWiden() called");
    return 0;
}

/* Demangled: cb_postfiltering_lower_bound_gain_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_lower_bound_gain_spk(void) {
    ALOGD("cb_postfiltering_lower_bound_gain_spk() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: power_limit_x */
extern "C" __attribute__((visibility("default"))) void* power_limit_x = NULL;

/* Demangled: Shadow_process_dl */
extern "C" __attribute__((visibility("default"))) int Shadow_process_dl(void) {
    ALOGD("Shadow_process_dl() called");
    return 0;
}

/* Demangled: Caluate_nser */
extern "C" __attribute__((visibility("default"))) int Caluate_nser(void) {
    ALOGD("Caluate_nser() called");
    return 0;
}

/* Demangled: init_vad_ne */
extern "C" __attribute__((visibility("default"))) int init_vad_ne(void) {
    ALOGD("init_vad_ne() called");
    return 0;
}

/* Demangled: round_s */
extern "C" __attribute__((visibility("default"))) int round_s(void) {
    ALOGD("round_s() called");
    return 0;
}

/* Exported Object: power_limit */
extern "C" __attribute__((visibility("default"))) void* power_limit = NULL;

/* Exported Object: sb_pwr_bias_shadow */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_shadow = NULL;

/* Demangled: Cal_Ref_vowel */
extern "C" __attribute__((visibility("default"))) int Cal_Ref_vowel(void) {
    ALOGD("Cal_Ref_vowel() called");
    return 0;
}

/* Demangled: FSH */
extern "C" __attribute__((visibility("default"))) int FSH(void) {
    ALOGD("FSH() called");
    return 0;
}

/* Demangled: getBinEnergy_WB */
extern "C" __attribute__((visibility("default"))) int getBinEnergy_WB(void) {
    ALOGD("getBinEnergy_WB() called");
    return 0;
}

/* Demangled: ENH_INFO_DMNR_compresss */
extern "C" __attribute__((visibility("default"))) int ENH_INFO_DMNR_compresss(void) {
    ALOGD("ENH_INFO_DMNR_compresss() called");
    return 0;
}

/* Demangled: init_SF_parms */
extern "C" __attribute__((visibility("default"))) int init_SF_parms(void) {
    ALOGD("init_SF_parms() called");
    return 0;
}

/* Demangled: NR_UL_Init */
extern "C" __attribute__((visibility("default"))) int NR_UL_Init(void) {
    ALOGD("NR_UL_Init() called");
    return 0;
}

/* Demangled: AGC_time_GainEst */
extern "C" __attribute__((visibility("default"))) int AGC_time_GainEst(void) {
    ALOGD("AGC_time_GainEst() called");
    return 0;
}

/* Demangled: calc_HB_VAD */
extern "C" __attribute__((visibility("default"))) int calc_HB_VAD(void) {
    ALOGD("calc_HB_VAD() called");
    return 0;
}

/* Exported Object: Wn_i_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_i_256 = NULL;

/* Exported Object: EC_Init_Coeff_Exp_Table1 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Exp_Table1 = NULL;

/* Demangled: full_band_es */
extern "C" __attribute__((visibility("default"))) int full_band_es(void) {
    ALOGD("full_band_es() called");
    return 0;
}

/* Demangled: cb_less_gain_protection_spk */
extern "C" __attribute__((visibility("default"))) int cb_less_gain_protection_spk(void) {
    ALOGD("cb_less_gain_protection_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_TMOS_POWER_THD */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_TMOS_POWER_THD(void) {
    ALOGD("DMNR_convert_TMOS_POWER_THD() called");
    return 0;
}

/* Demangled: MusicEst */
extern "C" __attribute__((visibility("default"))) int MusicEst(void) {
    ALOGD("MusicEst() called");
    return 0;
}

/* Demangled: ENH_API_Update_Parameter */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Parameter(void) {
    ALOGD("ENH_API_Update_Parameter() called");
    return 0;
}

/* Exported Object: EC_Init_Coeff_Exp_Table2 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Exp_Table2 = NULL;

/* Demangled: ENH_API_Get_CB_Memory_PF_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_CB_Memory_PF_spk(void) {
    ALOGD("ENH_API_Get_CB_Memory_PF_spk() called");
    return 0;
}

/* Demangled: init_cb_struct_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_struct_spk(void) {
    ALOGD("init_cb_struct_spk() called");
    return 0;
}

/* Demangled: debug_read */
extern "C" __attribute__((visibility("default"))) int debug_read(void) {
    ALOGD("debug_read() called");
    return 0;
}

/* Demangled: check_module_triggered_to_reset */
extern "C" __attribute__((visibility("default"))) int check_module_triggered_to_reset(void) {
    ALOGD("check_module_triggered_to_reset() called");
    return 0;
}

/* Demangled: DMNR_mic1_VAD */
extern "C" __attribute__((visibility("default"))) int DMNR_mic1_VAD(void) {
    ALOGD("DMNR_mic1_VAD() called");
    return 0;
}

/* Exported Object: IIR_coef_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set1 = NULL;

/* Exported Object: EC_Init_Coeff_Exp_Table3 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Exp_Table3 = NULL;

/* Demangled: ENH_API_Get_CB_Memory_PF */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_CB_Memory_PF(void) {
    ALOGD("ENH_API_Get_CB_Memory_PF() called");
    return 0;
}

/* Demangled: init_agc_comp */
extern "C" __attribute__((visibility("default"))) int init_agc_comp(void) {
    ALOGD("init_agc_comp() called");
    return 0;
}

/* Exported Object: IIR_coef_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set2 = NULL;

/* Exported Object: fe_us_hist */
extern "C" __attribute__((visibility("default"))) void* fe_us_hist = NULL;

/* Demangled: AGC_Release_THD */
extern "C" __attribute__((visibility("default"))) int AGC_Release_THD(void) {
    ALOGD("AGC_Release_THD() called");
    return 0;
}

/* Demangled: ENH_API_Compressor_48K_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_Compressor_48K_Alloc(void) {
    ALOGD("ENH_API_Compressor_48K_Alloc() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd_HB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd_HB(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd_HB() called");
    return 0;
}

/* Exported Object: abf_sb_pwr_bias_shadow */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_shadow = NULL;

/* Exported Object: IIR_coef_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set3 = NULL;

/* Demangled: WB_NR_SuppressGainSmoothing */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainSmoothing(void) {
    ALOGD("WB_NR_SuppressGainSmoothing() called");
    return 0;
}

/* Demangled: init_cb_struct */
extern "C" __attribute__((visibility("default"))) int init_cb_struct(void) {
    ALOGD("init_cb_struct() called");
    return 0;
}

/* Demangled: cb_single_mic_detect_SND_DIST_spk */
extern "C" __attribute__((visibility("default"))) int cb_single_mic_detect_SND_DIST_spk(void) {
    ALOGD("cb_single_mic_detect_SND_DIST_spk() called");
    return 0;
}

/* Demangled: set_cpsr_thd */
extern "C" __attribute__((visibility("default"))) int set_cpsr_thd(void) {
    ALOGD("set_cpsr_thd() called");
    return 0;
}

/* Exported Object: IIR_coef_16k_set4 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set4 = NULL;

/* Demangled: MusicDet */
extern "C" __attribute__((visibility("default"))) int MusicDet(void) {
    ALOGD("MusicDet() called");
    return 0;
}

/* Demangled: cb_postfiltering_runtime_check */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_runtime_check(void) {
    ALOGD("cb_postfiltering_runtime_check() called");
    return 0;
}

/* Demangled: update_cb_hVAD_spk */
extern "C" __attribute__((visibility("default"))) int update_cb_hVAD_spk(void) {
    ALOGD("update_cb_hVAD_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_16k_set5 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set5 = NULL;

/* Demangled: ENH_API_Run_Low_Latency */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Low_Latency(void) {
    ALOGD("ENH_API_Run_Low_Latency() called");
    return 0;
}

/* Exported Object: ABF_KBD */
extern "C" __attribute__((visibility("default"))) void* ABF_KBD = NULL;

/* Exported Object: IIR_coef_16k_set6 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set6 = NULL;

/* Demangled: NR_DL_Init */
extern "C" __attribute__((visibility("default"))) int NR_DL_Init(void) {
    ALOGD("NR_DL_Init() called");
    return 0;
}

/* Demangled: ENH_API_Update_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_AEC(void) {
    ALOGD("ENH_API_Update_AEC() called");
    return 0;
}

/* Exported Object: IIR_coef_16k_set7 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_16k_set7 = NULL;

/* Demangled: nlms_abf */
extern "C" __attribute__((visibility("default"))) int nlms_abf(void) {
    ALOGD("nlms_abf() called");
    return 0;
}

/* Demangled: BitRev */
extern "C" __attribute__((visibility("default"))) int BitRev(void) {
    ALOGD("BitRev() called");
    return 0;
}

/* Demangled: sb_dl_aec */
extern "C" __attribute__((visibility("default"))) int sb_dl_aec(void) {
    ALOGD("sb_dl_aec() called");
    return 0;
}

/* Demangled: ENH_API_Update_CB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_CB(void) {
    ALOGD("ENH_API_Update_CB() called");
    return 0;
}

/* Demangled: ABM_runtime_check */
extern "C" __attribute__((visibility("default"))) int ABM_runtime_check(void) {
    ALOGD("ABM_runtime_check() called");
    return 0;
}

/* Demangled: ENH_API_Get_MR_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_MR_Memory(void) {
    ALOGD("ENH_API_Get_MR_Memory() called");
    return 0;
}

/* Demangled: MBDRC_Reset */
extern "C" __attribute__((visibility("default"))) int MBDRC_Reset(void) {
    ALOGD("MBDRC_Reset() called");
    return 0;
}

/* Demangled: SmoothAmp */
extern "C" __attribute__((visibility("default"))) int SmoothAmp(void) {
    ALOGD("SmoothAmp() called");
    return 0;
}

/* Demangled: sub_band_sig_nf_compute */
extern "C" __attribute__((visibility("default"))) int sub_band_sig_nf_compute(void) {
    ALOGD("sub_band_sig_nf_compute() called");
    return 0;
}

/* Demangled: cb_expander_update */
extern "C" __attribute__((visibility("default"))) int cb_expander_update(void) {
    ALOGD("cb_expander_update() called");
    return 0;
}

/* Demangled: ABM_calc_VAD */
extern "C" __attribute__((visibility("default"))) int ABM_calc_VAD(void) {
    ALOGD("ABM_calc_VAD() called");
    return 0;
}

/* Demangled: DIF_FFT_Fix32_256 */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_Fix32_256(void) {
    ALOGD("DIF_FFT_Fix32_256() called");
    return 0;
}

/* Exported Object: fe_ds_hist */
extern "C" __attribute__((visibility("default"))) void* fe_ds_hist = NULL;

/* Exported Object: STE_Richen_Side_H_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_H_t = NULL;

/* Demangled: Switch_SPK_ECrelated */
extern "C" __attribute__((visibility("default"))) int Switch_SPK_ECrelated(void) {
    ALOGD("Switch_SPK_ECrelated() called");
    return 0;
}

/* Demangled: ENH_API_update_Low_Latency */
extern "C" __attribute__((visibility("default"))) int ENH_API_update_Low_Latency(void) {
    ALOGD("ENH_API_update_Low_Latency() called");
    return 0;
}

/* Exported Object: us_hist */
extern "C" __attribute__((visibility("default"))) void* us_hist = NULL;

/* Demangled: cb_apply_gain_buffer_AEC_spk */
extern "C" __attribute__((visibility("default"))) int cb_apply_gain_buffer_AEC_spk(void) {
    ALOGD("cb_apply_gain_buffer_AEC_spk() called");
    return 0;
}

/* Demangled: init_Mic_selection_parms */
extern "C" __attribute__((visibility("default"))) int init_Mic_selection_parms(void) {
    ALOGD("init_Mic_selection_parms() called");
    return 0;
}

/* Exported Object: MBDRC_IIR_alpha_Table */
extern "C" __attribute__((visibility("default"))) void* MBDRC_IIR_alpha_Table = NULL;

/* Demangled: CNG_noise_level */
extern "C" __attribute__((visibility("default"))) int CNG_noise_level(void) {
    ALOGD("CNG_noise_level() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_L_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_L_t = NULL;

/* Demangled: cb_HR_check_enablity */
extern "C" __attribute__((visibility("default"))) int cb_HR_check_enablity(void) {
    ALOGD("cb_HR_check_enablity() called");
    return 0;
}

/* Demangled: CB_convert_es_cem_value_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_es_cem_value_THD(void) {
    ALOGD("CB_convert_es_cem_value_THD() called");
    return 0;
}

/* Demangled: nlms_update_sig_pwr */
extern "C" __attribute__((visibility("default"))) int nlms_update_sig_pwr(void) {
    ALOGD("nlms_update_sig_pwr() called");
    return 0;
}

/* Demangled: ANENoiseEst */
extern "C" __attribute__((visibility("default"))) int ANENoiseEst(void) {
    ALOGD("ANENoiseEst() called");
    return 0;
}

/* Exported Object: EC_stepsize_improve_band1_value_table */
extern "C" __attribute__((visibility("default"))) void* EC_stepsize_improve_band1_value_table = NULL;

/* Demangled: vad_frontend_whistle */
extern "C" __attribute__((visibility("default"))) int vad_frontend_whistle(void) {
    ALOGD("vad_frontend_whistle() called");
    return 0;
}

/* Demangled: ABF_FIXED_DFT */
extern "C" __attribute__((visibility("default"))) int ABF_FIXED_DFT(void) {
    ALOGD("ABF_FIXED_DFT() called");
    return 0;
}

/* Demangled: compressor_48K_0 */
extern "C" __attribute__((visibility("default"))) int compressor_48K_0(void) {
    ALOGD("compressor_48K_0() called");
    return 0;
}

/* Demangled: compressor_48K_1 */
extern "C" __attribute__((visibility("default"))) int compressor_48K_1(void) {
    ALOGD("compressor_48K_1() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd2_HB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd2_HB(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd2_HB() called");
    return 0;
}

/* Exported Object: NR_Strength_Table */
extern "C" __attribute__((visibility("default"))) void* NR_Strength_Table = NULL;

/* Demangled: WB_NR_PostProcessing */
extern "C" __attribute__((visibility("default"))) int WB_NR_PostProcessing(void) {
    ALOGD("WB_NR_PostProcessing() called");
    return 0;
}

/* Demangled: ASIE_convert_releaseTime */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_releaseTime(void) {
    ALOGD("ASIE_convert_releaseTime() called");
    return 0;
}

/* Exported Object: Table_TAV */
extern "C" __attribute__((visibility("default"))) void* Table_TAV = NULL;

/* Demangled: ENH_API_STE_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_STE_Alloc(void) {
    ALOGD("ENH_API_STE_Alloc() called");
    return 0;
}

/* Demangled: debug_fprint */
extern "C" __attribute__((visibility("default"))) int debug_fprint(void) {
    ALOGD("debug_fprint() called");
    return 0;
}

/* Demangled: nlms_whistle */
extern "C" __attribute__((visibility("default"))) int nlms_whistle(void) {
    ALOGD("nlms_whistle() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: reset_cb_GCC */
extern "C" __attribute__((visibility("default"))) int reset_cb_GCC(void) {
    ALOGD("reset_cb_GCC() called");
    return 0;
}

/* Demangled: whistle_suppress */
extern "C" __attribute__((visibility("default"))) int whistle_suppress(void) {
    ALOGD("whistle_suppress() called");
    return 0;
}

/* Exported Object: ds_hist */
extern "C" __attribute__((visibility("default"))) void* ds_hist = NULL;

/* Exported Object: dB2Linear_pos */
extern "C" __attribute__((visibility("default"))) void* dB2Linear_pos = NULL;

/* Demangled: ULDL_GainControl_Init */
extern "C" __attribute__((visibility("default"))) int ULDL_GainControl_Init(void) {
    ALOGD("ULDL_GainControl_Init() called");
    return 0;
}

/* Exported Object: MBDRC_Gain_Index */
extern "C" __attribute__((visibility("default"))) void* MBDRC_Gain_Index = NULL;

/* Demangled: mpf_compensate */
extern "C" __attribute__((visibility("default"))) int mpf_compensate(void) {
    ALOGD("mpf_compensate() called");
    return 0;
}

/* Demangled: ENH_API_Get_DL_enh_start_flag */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DL_enh_start_flag(void) {
    ALOGD("ENH_API_Get_DL_enh_start_flag() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: cb_postfiltering_gain_protection_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_gain_protection_spk(void) {
    ALOGD("cb_postfiltering_gain_protection_spk() called");
    return 0;
}

/* Demangled: getSpecLocalMax */
extern "C" __attribute__((visibility("default"))) int getSpecLocalMax(void) {
    ALOGD("getSpecLocalMax() called");
    return 0;
}

/* Demangled: cb_ES_prevent_add_on */
extern "C" __attribute__((visibility("default"))) int cb_ES_prevent_add_on(void) {
    ALOGD("cb_ES_prevent_add_on() called");
    return 0;
}

/* Demangled: reset_fft_es_struct */
extern "C" __attribute__((visibility("default"))) int reset_fft_es_struct(void) {
    ALOGD("reset_fft_es_struct() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_max_prob_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_max_prob_thd(void) {
    ALOGD("DMNR_convert_Mic_selection_max_prob_thd() called");
    return 0;
}

/* Exported Object: AGC_dB2Linear_neg */
extern "C" __attribute__((visibility("default"))) void* AGC_dB2Linear_neg = NULL;

/* Demangled: ENH_API_Get_CB_Memory_FFT */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_CB_Memory_FFT(void) {
    ALOGD("ENH_API_Get_CB_Memory_FFT() called");
    return 0;
}

/* Demangled: DL_ClarityControl_Reset */
extern "C" __attribute__((visibility("default"))) int DL_ClarityControl_Reset(void) {
    ALOGD("DL_ClarityControl_Reset() called");
    return 0;
}

/* Exported Object: twid_tab256_fast */
extern "C" __attribute__((visibility("default"))) void* twid_tab256_fast = NULL;

/* Exported Object: importFunc */
extern "C" __attribute__((visibility("default"))) void* importFunc = NULL;

/* Demangled: WB_NR_SpeechProbEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_SpeechProbEst(void) {
    ALOGD("WB_NR_SpeechProbEst() called");
    return 0;
}

/* Demangled: ENH_API_Get_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Memory(void) {
    ALOGD("ENH_API_Get_Memory() called");
    return 0;
}

/* Demangled: Set_coefValue */
extern "C" __attribute__((visibility("default"))) int Set_coefValue(void) {
    ALOGD("Set_coefValue() called");
    return 0;
}

/* Demangled: ASIE_convert_noiseDBGain */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_noiseDBGain(void) {
    ALOGD("ASIE_convert_noiseDBGain() called");
    return 0;
}

/* Demangled: update_param_parser */
extern "C" __attribute__((visibility("default"))) int update_param_parser(void) {
    ALOGD("update_param_parser() called");
    return 0;
}

/* Exported Object: ABF_CB_swap_table_spk */
extern "C" __attribute__((visibility("default"))) void* ABF_CB_swap_table_spk = NULL;

/* Demangled: ENH_API_Process */
extern "C" __attribute__((visibility("default"))) int ENH_API_Process(void) {
    ALOGD("ENH_API_Process() called");
    return 0;
}

/* Demangled: dB_Mult */
extern "C" __attribute__((visibility("default"))) int dB_Mult(void) {
    ALOGD("dB_Mult() called");
    return 0;
}

/* Demangled: EC_protect_band_value */
extern "C" __attribute__((visibility("default"))) int EC_protect_band_value(void) {
    ALOGD("EC_protect_band_value() called");
    return 0;
}

/* Exported Object: MBDRC_IIR_Coef_div */
extern "C" __attribute__((visibility("default"))) void* MBDRC_IIR_Coef_div = NULL;

/* Demangled: init_cb_hVAD */
extern "C" __attribute__((visibility("default"))) int init_cb_hVAD(void) {
    ALOGD("init_cb_hVAD() called");
    return 0;
}

/* Demangled: ENH_API_Free_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_DMNR(void) {
    ALOGD("ENH_API_Free_DMNR() called");
    return 0;
}

/* Demangled: reset_ntd_struct */
extern "C" __attribute__((visibility("default"))) int reset_ntd_struct(void) {
    ALOGD("reset_ntd_struct() called");
    return 0;
}

/* Demangled: div_s_32_vot */
extern "C" __attribute__((visibility("default"))) int div_s_32_vot(void) {
    ALOGD("div_s_32_vot() called");
    return 0;
}

/* Exported Object: NR_Agg_Mode_Table */
extern "C" __attribute__((visibility("default"))) void* NR_Agg_Mode_Table = NULL;

/* Demangled: ENH_API_whistle_AEC_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_whistle_AEC_Alloc(void) {
    ALOGD("ENH_API_whistle_AEC_Alloc() called");
    return 0;
}

/* Exported Object: DEBUG_CB_OBS_BIN */
extern "C" __attribute__((visibility("default"))) void* DEBUG_CB_OBS_BIN = NULL;

/* Demangled: ENH_API_CB_Alloc_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_ES(void) {
    ALOGD("ENH_API_CB_Alloc_ES() called");
    return 0;
}

/* Demangled: cb_postfiltering_apply_uncertainty_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_apply_uncertainty_spk(void) {
    ALOGD("cb_postfiltering_apply_uncertainty_spk() called");
    return 0;
}

/* Demangled: fb_ASLR_noise_esti_spk */
extern "C" __attribute__((visibility("default"))) int fb_ASLR_noise_esti_spk(void) {
    ALOGD("fb_ASLR_noise_esti_spk() called");
    return 0;
}

/* Exported Object: num_taps_shadow_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow_abf = NULL;

/* Exported Object: DG_VCE_gain_t */
extern "C" __attribute__((visibility("default"))) void* DG_VCE_gain_t = NULL;

/* Demangled: StereoEnhance */
extern "C" __attribute__((visibility("default"))) int StereoEnhance(void) {
    ALOGD("StereoEnhance() called");
    return 0;
}

/* Demangled: STE_2nd_IIR_Bass */
extern "C" __attribute__((visibility("default"))) int STE_2nd_IIR_Bass(void) {
    ALOGD("STE_2nd_IIR_Bass() called");
    return 0;
}

/* Demangled: powerNormalize */
extern "C" __attribute__((visibility("default"))) int powerNormalize(void) {
    ALOGD("powerNormalize() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_gain */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_gain(void) {
    ALOGD("cb_postfiltering_calc_gain() called");
    return 0;
}

/* Exported Object: pf_WB */
extern "C" __attribute__((visibility("default"))) void* pf_WB = NULL;

/* Exported Object: awBitRevTable */
extern "C" __attribute__((visibility("default"))) void* awBitRevTable = NULL;

/* Demangled: init_PR_vad */
extern "C" __attribute__((visibility("default"))) int init_PR_vad(void) {
    ALOGD("init_PR_vad() called");
    return 0;
}

/* Demangled: ABF_cal_process_spk */
extern "C" __attribute__((visibility("default"))) int ABF_cal_process_spk(void) {
    ALOGD("ABF_cal_process_spk() called");
    return 0;
}

/* Demangled: SB_NORMAL_DMNR */
extern "C" __attribute__((visibility("default"))) int SB_NORMAL_DMNR(void) {
    ALOGD("SB_NORMAL_DMNR() called");
    return 0;
}

/* Demangled: ENH_API_Free */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free(void) {
    ALOGD("ENH_API_Free() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: sum_bin_to_avg_band_energy */
extern "C" __attribute__((visibility("default"))) int sum_bin_to_avg_band_energy(void) {
    ALOGD("sum_bin_to_avg_band_energy() called");
    return 0;
}

/* Demangled: Search_Max */
extern "C" __attribute__((visibility("default"))) int Search_Max(void) {
    ALOGD("Search_Max() called");
    return 0;
}

/* Demangled: init_sb_nlms */
extern "C" __attribute__((visibility("default"))) int init_sb_nlms(void) {
    ALOGD("init_sb_nlms() called");
    return 0;
}

/* Demangled: DFT_update_GCC */
extern "C" __attribute__((visibility("default"))) int DFT_update_GCC(void) {
    ALOGD("DFT_update_GCC() called");
    return 0;
}

/* Demangled: init_ASLR */
extern "C" __attribute__((visibility("default"))) int init_ASLR(void) {
    ALOGD("init_ASLR() called");
    return 0;
}

/* Demangled: ENH_API_Init_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DMNR_spk(void) {
    ALOGD("ENH_API_Init_DMNR_spk() called");
    return 0;
}

/* Demangled: reset_cb_struct_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_struct_spk(void) {
    ALOGD("reset_cb_struct_spk() called");
    return 0;
}

/* Exported Object: DlMusicDetL1aTblInit */
extern "C" __attribute__((visibility("default"))) void* DlMusicDetL1aTblInit = NULL;

/* Demangled: FFT_scaling_32to16bit */
extern "C" __attribute__((visibility("default"))) int FFT_scaling_32to16bit(void) {
    ALOGD("FFT_scaling_32to16bit() called");
    return 0;
}

/* Demangled: ENH_API_Reset_GDRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_GDRC(void) {
    ALOGD("ENH_API_Reset_GDRC() called");
    return 0;
}

/* Demangled: set_module_activities */
extern "C" __attribute__((visibility("default"))) int set_module_activities(void) {
    ALOGD("set_module_activities() called");
    return 0;
}

/* Demangled: update_cb_postfiltering */
extern "C" __attribute__((visibility("default"))) int update_cb_postfiltering(void) {
    ALOGD("update_cb_postfiltering() called");
    return 0;
}

/* Demangled: ABF_AGC_Gain_Compensation_spk */
extern "C" __attribute__((visibility("default"))) int ABF_AGC_Gain_Compensation_spk(void) {
    ALOGD("ABF_AGC_Gain_Compensation_spk() called");
    return 0;
}

/* Demangled: UL_DRC_Exp_Gain_Target */
extern "C" __attribute__((visibility("default"))) int UL_DRC_Exp_Gain_Target(void) {
    ALOGD("UL_DRC_Exp_Gain_Target() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: calculate_noise_floor */
extern "C" __attribute__((visibility("default"))) int calculate_noise_floor(void) {
    ALOGD("calculate_noise_floor() called");
    return 0;
}

/* Demangled: cb_update_stationary_noise_spk */
extern "C" __attribute__((visibility("default"))) int cb_update_stationary_noise_spk(void) {
    ALOGD("cb_update_stationary_noise_spk() called");
    return 0;
}

/* Exported Object: subframe_num_switch */
extern "C" __attribute__((visibility("default"))) void* subframe_num_switch = NULL;

/* Exported Object: num_taps_shadow */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow = NULL;

/* Demangled: amplifySubband */
extern "C" __attribute__((visibility("default"))) int amplifySubband(void) {
    ALOGD("amplifySubband() called");
    return 0;
}

/* Demangled: cb_HR_NL */
extern "C" __attribute__((visibility("default"))) int cb_HR_NL(void) {
    ALOGD("cb_HR_NL() called");
    return 0;
}

/* Exported Object: Gain_AR_Rate_8 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_8 = NULL;

/* Demangled: STE_FIR */
extern "C" __attribute__((visibility("default"))) int STE_FIR(void) {
    ALOGD("STE_FIR() called");
    return 0;
}

/* Demangled: align_fractional_point_32 */
extern "C" __attribute__((visibility("default"))) int align_fractional_point_32(void) {
    ALOGD("align_fractional_point_32() called");
    return 0;
}

/* Exported Object: BMG_table */
extern "C" __attribute__((visibility("default"))) void* BMG_table = NULL;

/* Demangled: AF */
extern "C" __attribute__((visibility("default"))) int AF(void) {
    ALOGD("AF() called");
    return 0;
}

/* Demangled: RFFT_32_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_32_Q31(void) {
    ALOGD("RFFT_32_Q31() called");
    return 0;
}

/* Demangled: UlDlMusicDet_L1aTblInit */
extern "C" __attribute__((visibility("default"))) int UlDlMusicDet_L1aTblInit(void) {
    ALOGD("UlDlMusicDet_L1aTblInit() called");
    return 0;
}

/* Demangled: ntd_get_current_spec */
extern "C" __attribute__((visibility("default"))) int ntd_get_current_spec(void) {
    ALOGD("ntd_get_current_spec() called");
    return 0;
}

/* Demangled: IIR_64_MicIIR_stereo */
extern "C" __attribute__((visibility("default"))) int IIR_64_MicIIR_stereo(void) {
    ALOGD("IIR_64_MicIIR_stereo() called");
    return 0;
}

/* Demangled: WB_NR_SetLevel */
extern "C" __attribute__((visibility("default"))) int WB_NR_SetLevel(void) {
    ALOGD("WB_NR_SetLevel() called");
    return 0;
}

/* Demangled: init_vad_fe */
extern "C" __attribute__((visibility("default"))) int init_vad_fe(void) {
    ALOGD("init_vad_fe() called");
    return 0;
}

/* Demangled: Get_Suppress_info */
extern "C" __attribute__((visibility("default"))) int Get_Suppress_info(void) {
    ALOGD("Get_Suppress_info() called");
    return 0;
}

/* Demangled: cb_main */
extern "C" __attribute__((visibility("default"))) int cb_main(void) {
    ALOGD("cb_main() called");
    return 0;
}

/* Demangled: cb_SND_protection */
extern "C" __attribute__((visibility("default"))) int cb_SND_protection(void) {
    ALOGD("cb_SND_protection() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_Alloc_BankB */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_Alloc_BankB(void) {
    ALOGD("ENH_API_DMNR_Alloc_BankB() called");
    return 0;
}

/* Demangled: ABF_postfiltering */
extern "C" __attribute__((visibility("default"))) int ABF_postfiltering(void) {
    ALOGD("ABF_postfiltering() called");
    return 0;
}

/* Demangled: All_Pass_Filter_Computation */
extern "C" __attribute__((visibility("default"))) int All_Pass_Filter_Computation(void) {
    ALOGD("All_Pass_Filter_Computation() called");
    return 0;
}

/* Demangled: SRC_init */
extern "C" __attribute__((visibility("default"))) int SRC_init(void) {
    ALOGD("SRC_init() called");
    return 0;
}

/* Exported Object: STE_Widen_Center_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Center_t = NULL;

/* Demangled: Graphical_UI_DRC_Mono_24Bit */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Mono_24Bit(void) {
    ALOGD("Graphical_UI_DRC_Mono_24Bit() called");
    return 0;
}

/* Demangled: ABF_Complex_FBF_and_BM */
extern "C" __attribute__((visibility("default"))) int ABF_Complex_FBF_and_BM(void) {
    ALOGD("ABF_Complex_FBF_and_BM() called");
    return 0;
}

/* Demangled: init_agc_comp_spk */
extern "C" __attribute__((visibility("default"))) int init_agc_comp_spk(void) {
    ALOGD("init_agc_comp_spk() called");
    return 0;
}

/* Demangled: ENH_API_Update_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_MR(void) {
    ALOGD("ENH_API_Update_MR() called");
    return 0;
}

/* Exported Object: BKF_SoftChange_WeightingTable */
extern "C" __attribute__((visibility("default"))) void* BKF_SoftChange_WeightingTable = NULL;

/* Demangled: ENH_API_Free_STE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_STE(void) {
    ALOGD("ENH_API_Free_STE() called");
    return 0;
}

/* Demangled: ENH_API_Reset_SCH */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_SCH(void) {
    ALOGD("ENH_API_Reset_SCH() called");
    return 0;
}

/* Demangled: checkIsLoudNoise */
extern "C" __attribute__((visibility("default"))) int checkIsLoudNoise(void) {
    ALOGD("checkIsLoudNoise() called");
    return 0;
}

/* Demangled: ENH_API_Run_HVAD */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_HVAD(void) {
    ALOGD("ENH_API_Run_HVAD() called");
    return 0;
}

/* Demangled: cb_calc_speech_absence_prob_BM */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_BM(void) {
    ALOGD("cb_calc_speech_absence_prob_BM() called");
    return 0;
}

/* Demangled: ABF_AGC_Gain_Compensation */
extern "C" __attribute__((visibility("default"))) int ABF_AGC_Gain_Compensation(void) {
    ALOGD("ABF_AGC_Gain_Compensation() called");
    return 0;
}

/* Demangled: ENH_API_Run_Ndc_DL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ndc_DL(void) {
    ALOGD("ENH_API_Run_Ndc_DL() called");
    return 0;
}

/* Demangled: ENH_API_Get_UL_enh_start_flag */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_UL_enh_start_flag(void) {
    ALOGD("ENH_API_Get_UL_enh_start_flag() called");
    return 0;
}

/* Exported Object: pf_NB */
extern "C" __attribute__((visibility("default"))) void* pf_NB = NULL;

/* Demangled: Set_MBDRC_freq */
extern "C" __attribute__((visibility("default"))) int Set_MBDRC_freq(void) {
    ALOGD("Set_MBDRC_freq() called");
    return 0;
}

/* Exported Object: ESR_THD */
extern "C" __attribute__((visibility("default"))) void* ESR_THD = NULL;

/* Demangled: ABF_mic2_blocking_detection_spk */
extern "C" __attribute__((visibility("default"))) int ABF_mic2_blocking_detection_spk(void) {
    ALOGD("ABF_mic2_blocking_detection_spk() called");
    return 0;
}

/* Demangled: cb_main_spk */
extern "C" __attribute__((visibility("default"))) int cb_main_spk(void) {
    ALOGD("cb_main_spk() called");
    return 0;
}

/* Demangled: write_EPL_logger */
extern "C" __attribute__((visibility("default"))) int write_EPL_logger(void) {
    ALOGD("write_EPL_logger() called");
    return 0;
}

/* Exported Object: abf_nlms_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* abf_nlms_stepsize_normal = NULL;

/* Exported Object: Gama_Array */
extern "C" __attribute__((visibility("default"))) void* Gama_Array = NULL;

/* Exported Object: SRC_Coef */
extern "C" __attribute__((visibility("default"))) void* SRC_Coef = NULL;

/* Demangled: init_vad_DMNR */
extern "C" __attribute__((visibility("default"))) int init_vad_DMNR(void) {
    ALOGD("init_vad_DMNR() called");
    return 0;
}

/* Demangled: ENH_API_Get_frame_length */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_frame_length(void) {
    ALOGD("ENH_API_Get_frame_length() called");
    return 0;
}

/* Demangled: update_cb_expander */
extern "C" __attribute__((visibility("default"))) int update_cb_expander(void) {
    ALOGD("update_cb_expander() called");
    return 0;
}

/* Demangled: Radix2_Bfly_Q31 */
extern "C" __attribute__((visibility("default"))) int Radix2_Bfly_Q31(void) {
    ALOGD("Radix2_Bfly_Q31() called");
    return 0;
}

/* Demangled: FIR_Q15_36tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_36tap(void) {
    ALOGD("FIR_Q15_36tap() called");
    return 0;
}

/* Demangled: BGNT_stepsize_weighting_value */
extern "C" __attribute__((visibility("default"))) int BGNT_stepsize_weighting_value(void) {
    ALOGD("BGNT_stepsize_weighting_value() called");
    return 0;
}

/* Demangled: specEnergyBalancing */
extern "C" __attribute__((visibility("default"))) int specEnergyBalancing(void) {
    ALOGD("specEnergyBalancing() called");
    return 0;
}

/* Demangled: ENH_API_Run_CB_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_CB_spk(void) {
    ALOGD("ENH_API_Run_CB_spk() called");
    return 0;
}

/* Demangled: Set_NR_VAD_thd */
extern "C" __attribute__((visibility("default"))) int Set_NR_VAD_thd(void) {
    ALOGD("Set_NR_VAD_thd() called");
    return 0;
}

/* Exported Object: NR_48K_DB_LINEAR */
extern "C" __attribute__((visibility("default"))) void* NR_48K_DB_LINEAR = NULL;

/* Demangled: NR_MCRANoiseEst */
extern "C" __attribute__((visibility("default"))) int NR_MCRANoiseEst(void) {
    ALOGD("NR_MCRANoiseEst() called");
    return 0;
}

/* Exported Object: dctcos_1_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_1_WB = NULL;

/* Demangled: NR_UL_Reset */
extern "C" __attribute__((visibility("default"))) int NR_UL_Reset(void) {
    ALOGD("NR_UL_Reset() called");
    return 0;
}

/* Demangled: Set_NR_upper_bound_offset */
extern "C" __attribute__((visibility("default"))) int Set_NR_upper_bound_offset(void) {
    ALOGD("Set_NR_upper_bound_offset() called");
    return 0;
}

/* Exported Object: CB2OB_band_idx */
extern "C" __attribute__((visibility("default"))) void* CB2OB_band_idx = NULL;

/* Demangled: MBPL_Estimate */
extern "C" __attribute__((visibility("default"))) int MBPL_Estimate(void) {
    ALOGD("MBPL_Estimate() called");
    return 0;
}

/* Demangled: calibrateSpeechLevel_posGain */
extern "C" __attribute__((visibility("default"))) int calibrateSpeechLevel_posGain(void) {
    ALOGD("calibrateSpeechLevel_posGain() called");
    return 0;
}

/* Demangled: MusicDet_StaticMemInit */
extern "C" __attribute__((visibility("default"))) int MusicDet_StaticMemInit(void) {
    ALOGD("MusicDet_StaticMemInit() called");
    return 0;
}

/* Exported Object: AGC_dB2Linear_pos */
extern "C" __attribute__((visibility("default"))) void* AGC_dB2Linear_pos = NULL;

/* Exported Object: EC_protect_ratio_value_table */
extern "C" __attribute__((visibility("default"))) void* EC_protect_ratio_value_table = NULL;

/* Demangled: AEC_AES_bound */
extern "C" __attribute__((visibility("default"))) int AEC_AES_bound(void) {
    ALOGD("AEC_AES_bound() called");
    return 0;
}

/* Demangled: delay_observe_band_7_11 */
extern "C" __attribute__((visibility("default"))) int delay_observe_band_7_11(void) {
    ALOGD("delay_observe_band_7_11() called");
    return 0;
}

/* Demangled: asie_enhancer */
extern "C" __attribute__((visibility("default"))) int asie_enhancer(void) {
    ALOGD("asie_enhancer() called");
    return 0;
}

/* Demangled: MR_channel_synthesis */
extern "C" __attribute__((visibility("default"))) int MR_channel_synthesis(void) {
    ALOGD("MR_channel_synthesis() called");
    return 0;
}

/* Demangled: ASIE_prms_init */
extern "C" __attribute__((visibility("default"))) int ASIE_prms_init(void) {
    ALOGD("ASIE_prms_init() called");
    return 0;
}

/* Demangled: applySubbandDBGain */
extern "C" __attribute__((visibility("default"))) int applySubbandDBGain(void) {
    ALOGD("applySubbandDBGain() called");
    return 0;
}

/* Demangled: thd_mapping */
extern "C" __attribute__((visibility("default"))) int thd_mapping(void) {
    ALOGD("thd_mapping() called");
    return 0;
}

/* Demangled: MBPL_DG_ASIE_Gain_Apply */
extern "C" __attribute__((visibility("default"))) int MBPL_DG_ASIE_Gain_Apply(void) {
    ALOGD("MBPL_DG_ASIE_Gain_Apply() called");
    return 0;
}

/* Exported Object: UlMusicDetL1aTblInit */
extern "C" __attribute__((visibility("default"))) void* UlMusicDetL1aTblInit = NULL;

/* Exported Object: est_echo_weighting */
extern "C" __attribute__((visibility("default"))) void* est_echo_weighting = NULL;

/* Demangled: cb_calc_envelop_ratio */
extern "C" __attribute__((visibility("default"))) int cb_calc_envelop_ratio(void) {
    ALOGD("cb_calc_envelop_ratio() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_energy_VAD */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_energy_VAD(void) {
    ALOGD("cb_postfiltering_calc_energy_VAD() called");
    return 0;
}

/* Demangled: CB_IFFT_spk */
extern "C" __attribute__((visibility("default"))) int CB_IFFT_spk(void) {
    ALOGD("CB_IFFT_spk() called");
    return 0;
}

/* Demangled: Cal_mic_selection */
extern "C" __attribute__((visibility("default"))) int Cal_mic_selection(void) {
    ALOGD("Cal_mic_selection() called");
    return 0;
}

/* Demangled: SB_analysis_whistle */
extern "C" __attribute__((visibility("default"))) int SB_analysis_whistle(void) {
    ALOGD("SB_analysis_whistle() called");
    return 0;
}

/* Demangled: Low_Latency_D2T_Normalized */
extern "C" __attribute__((visibility("default"))) int Low_Latency_D2T_Normalized(void) {
    ALOGD("Low_Latency_D2T_Normalized() called");
    return 0;
}

/* Demangled: UL_DRC */
extern "C" __attribute__((visibility("default"))) int UL_DRC(void) {
    ALOGD("UL_DRC() called");
    return 0;
}

/* Demangled: MBDRC_HalfBand_IIR_Coefs_Init */
extern "C" __attribute__((visibility("default"))) int MBDRC_HalfBand_IIR_Coefs_Init(void) {
    ALOGD("MBDRC_HalfBand_IIR_Coefs_Init() called");
    return 0;
}

/* Exported Object: asdwRealCoefBQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwRealCoefBQ31 = NULL;

/* Demangled: ENH_API_NDC_Alloc_DRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_NDC_Alloc_DRC(void) {
    ALOGD("ENH_API_NDC_Alloc_DRC() called");
    return 0;
}

/* Demangled: ENH_API_Reset_DRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_DRC(void) {
    ALOGD("ENH_API_Reset_DRC() called");
    return 0;
}

/* Demangled: Fixed_pow2 */
extern "C" __attribute__((visibility("default"))) int Fixed_pow2(void) {
    ALOGD("Fixed_pow2() called");
    return 0;
}

/* Demangled: Echo_Suppress */
extern "C" __attribute__((visibility("default"))) int Echo_Suppress(void) {
    ALOGD("Echo_Suppress() called");
    return 0;
}

/* Demangled: ENH_API_Init_CB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_CB(void) {
    ALOGD("ENH_API_Init_CB() called");
    return 0;
}

/* Demangled: reset_cb_struct */
extern "C" __attribute__((visibility("default"))) int reset_cb_struct(void) {
    ALOGD("reset_cb_struct() called");
    return 0;
}

/* Exported Object: DRC_bounder_attack_rate1 */
extern "C" __attribute__((visibility("default"))) void* DRC_bounder_attack_rate1 = NULL;

/* Exported Object: Gain_AR_Rate_16 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_16 = NULL;

/* Demangled: cb_nonlinear_echo_estimate */
extern "C" __attribute__((visibility("default"))) int cb_nonlinear_echo_estimate(void) {
    ALOGD("cb_nonlinear_echo_estimate() called");
    return 0;
}

/* Demangled: ENH_API_Check_AEC_Mic_status */
extern "C" __attribute__((visibility("default"))) int ENH_API_Check_AEC_Mic_status(void) {
    ALOGD("ENH_API_Check_AEC_Mic_status() called");
    return 0;
}

/* Exported Object: DRC_bounder_attack_rate2 */
extern "C" __attribute__((visibility("default"))) void* DRC_bounder_attack_rate2 = NULL;

/* Demangled: calculateSII */
extern "C" __attribute__((visibility("default"))) int calculateSII(void) {
    ALOGD("calculateSII() called");
    return 0;
}

/* Exported Object: NR_KBD_Window_480p */
extern "C" __attribute__((visibility("default"))) void* NR_KBD_Window_480p = NULL;

/* Demangled: cb_postfiltering_runtime_check_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_runtime_check_spk(void) {
    ALOGD("cb_postfiltering_runtime_check_spk() called");
    return 0;
}

/* Demangled: init_power_difference_struct */
extern "C" __attribute__((visibility("default"))) int init_power_difference_struct(void) {
    ALOGD("init_power_difference_struct() called");
    return 0;
}

/* Demangled: AGC_Reverse_Gain_Compensation_spk */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation_spk(void) {
    ALOGD("AGC_Reverse_Gain_Compensation_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_PF_Hmin_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_PF_Hmin_SPK(void) {
    ALOGD("DMNR_convert_PF_Hmin_SPK() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_Tunable_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_Tunable_16k_set1 = NULL;

/* Demangled: cb_postfiltering_calc_noise */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_noise(void) {
    ALOGD("cb_postfiltering_calc_noise() called");
    return 0;
}

/* Demangled: reset_fft_es_buf_struct */
extern "C" __attribute__((visibility("default"))) int reset_fft_es_buf_struct(void) {
    ALOGD("reset_fft_es_buf_struct() called");
    return 0;
}

/* Exported Object: IIR_coef_a2_Tunable_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a2_Tunable_16k_set2 = NULL;

/* Demangled: CB_convert_comb_filter_echo_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_comb_filter_echo_THD(void) {
    ALOGD("CB_convert_comb_filter_echo_THD() called");
    return 0;
}

/* Exported Object: dctcos_1_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_1_NB = NULL;

/* Demangled: Graphical_UI_DRC_Mono */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Mono(void) {
    ALOGD("Graphical_UI_DRC_Mono() called");
    return 0;
}

/* Demangled: Gama_Interpolation */
extern "C" __attribute__((visibility("default"))) int Gama_Interpolation(void) {
    ALOGD("Gama_Interpolation() called");
    return 0;
}

/* Demangled: UlDlMusicDet */
extern "C" __attribute__((visibility("default"))) int UlDlMusicDet(void) {
    ALOGD("UlDlMusicDet() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_PF */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_PF(void) {
    ALOGD("ENH_API_CB_Alloc_PF() called");
    return 0;
}

/* Exported Object: power_limit_s3 */
extern "C" __attribute__((visibility("default"))) void* power_limit_s3 = NULL;

/* Demangled: Reverb_switch_speed */
extern "C" __attribute__((visibility("default"))) int Reverb_switch_speed(void) {
    ALOGD("Reverb_switch_speed() called");
    return 0;
}

/* Demangled: LSPK_DT_improv_EPC */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improv_EPC(void) {
    ALOGD("LSPK_DT_improv_EPC() called");
    return 0;
}

/* Demangled: ABM_update_nlms_stepsize */
extern "C" __attribute__((visibility("default"))) int ABM_update_nlms_stepsize(void) {
    ALOGD("ABM_update_nlms_stepsize() called");
    return 0;
}

/* Demangled: IIR_64_MicIIR_24BIT */
extern "C" __attribute__((visibility("default"))) int IIR_64_MicIIR_24BIT(void) {
    ALOGD("IIR_64_MicIIR_24BIT() called");
    return 0;
}

/* Exported Object: power_limit_s4 */
extern "C" __attribute__((visibility("default"))) void* power_limit_s4 = NULL;

/* Demangled: RIFFT_32_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_32_Q31(void) {
    ALOGD("RIFFT_32_Q31() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize_DL */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_DL = NULL;

/* Demangled: ENH_API_Update_whistle_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_whistle_AEC(void) {
    ALOGD("ENH_API_Update_whistle_AEC() called");
    return 0;
}

/* Demangled: getLocalMaxIdx */
extern "C" __attribute__((visibility("default"))) int getLocalMaxIdx(void) {
    ALOGD("getLocalMaxIdx() called");
    return 0;
}

/* Exported Object: abf_sb_pwr_bias_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_shadow_stepsize = NULL;

/* Exported Object: abf_AGC_Pos_Gain */
extern "C" __attribute__((visibility("default"))) void* abf_AGC_Pos_Gain = NULL;

/* Exported Object: power_limit_s5 */
extern "C" __attribute__((visibility("default"))) void* power_limit_s5 = NULL;

/* Exported Object: IIR_coef_b2_Tunable_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_Tunable_16k_set1 = NULL;

/* Demangled: EPC_Count_On */
extern "C" __attribute__((visibility("default"))) int EPC_Count_On(void) {
    ALOGD("EPC_Count_On() called");
    return 0;
}

/* Demangled: vad_DT */
extern "C" __attribute__((visibility("default"))) int vad_DT(void) {
    ALOGD("vad_DT() called");
    return 0;
}

/* Demangled: cb_hVAD_calc_pwr_spk */
extern "C" __attribute__((visibility("default"))) int cb_hVAD_calc_pwr_spk(void) {
    ALOGD("cb_hVAD_calc_pwr_spk() called");
    return 0;
}

/* Demangled: free_memory_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int free_memory_DMNR_spk(void) {
    ALOGD("free_memory_DMNR_spk() called");
    return 0;
}

/* Exported Object: power_limit_s6 */
extern "C" __attribute__((visibility("default"))) void* power_limit_s6 = NULL;

/* Demangled: UL_FWEControl_Reset */
extern "C" __attribute__((visibility("default"))) int UL_FWEControl_Reset(void) {
    ALOGD("UL_FWEControl_Reset() called");
    return 0;
}

/* Exported Object: IIR_coef_b2_Tunable_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b2_Tunable_16k_set2 = NULL;

/* Demangled: mapping_function */
extern "C" __attribute__((visibility("default"))) int mapping_function(void) {
    ALOGD("mapping_function() called");
    return 0;
}

/* Demangled: Shift_to_Max_Q_32 */
extern "C" __attribute__((visibility("default"))) int Shift_to_Max_Q_32(void) {
    ALOGD("Shift_to_Max_Q_32() called");
    return 0;
}

/* Demangled: Caldata_switch */
extern "C" __attribute__((visibility("default"))) int Caldata_switch(void) {
    ALOGD("Caldata_switch() called");
    return 0;
}

/* Demangled: DMNR_convert_ABM_regularization_handover */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_ABM_regularization_handover(void) {
    ALOGD("DMNR_convert_ABM_regularization_handover() called");
    return 0;
}

/* Demangled: DMNR_convert_ABM_speed */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_ABM_speed(void) {
    ALOGD("DMNR_convert_ABM_speed() called");
    return 0;
}

/* Demangled: adaptive_beamforming */
extern "C" __attribute__((visibility("default"))) int adaptive_beamforming(void) {
    ALOGD("adaptive_beamforming() called");
    return 0;
}

/* Demangled: ENH_API_Init */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init(void) {
    ALOGD("ENH_API_Init() called");
    return 0;
}

/* Exported Object: us_index */
extern "C" __attribute__((visibility("default"))) void* us_index = NULL;

/* Demangled: init_param_parser */
extern "C" __attribute__((visibility("default"))) int init_param_parser(void) {
    ALOGD("init_param_parser() called");
    return 0;
}

/* Demangled: ENH_API_Update_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_DMNR(void) {
    ALOGD("ENH_API_Update_DMNR() called");
    return 0;
}

/* Demangled: ENH_API_DELAY_BUF_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DELAY_BUF_Alloc(void) {
    ALOGD("ENH_API_DELAY_BUF_Alloc() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_FFT */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_FFT(void) {
    ALOGD("ENH_API_CB_Alloc_FFT() called");
    return 0;
}

/* Demangled: ENH_API_Reset_CB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_CB(void) {
    ALOGD("ENH_API_Reset_CB() called");
    return 0;
}

/* Demangled: fast_sqrt */
extern "C" __attribute__((visibility("default"))) int fast_sqrt(void) {
    ALOGD("fast_sqrt() called");
    return 0;
}

/* Demangled: NR_CriticalBandEnergyEst */
extern "C" __attribute__((visibility("default"))) int NR_CriticalBandEnergyEst(void) {
    ALOGD("NR_CriticalBandEnergyEst() called");
    return 0;
}

/* Demangled: ntd_update_input_feature */
extern "C" __attribute__((visibility("default"))) int ntd_update_input_feature(void) {
    ALOGD("ntd_update_input_feature() called");
    return 0;
}

/* Exported Object: EC_protect_gain_bound_value_table */
extern "C" __attribute__((visibility("default"))) void* EC_protect_gain_bound_value_table = NULL;

/* Exported Object: sqrt_coef */
extern "C" __attribute__((visibility("default"))) void* sqrt_coef = NULL;

/* Demangled: NR_SpectrumSmoothing */
extern "C" __attribute__((visibility("default"))) int NR_SpectrumSmoothing(void) {
    ALOGD("NR_SpectrumSmoothing() called");
    return 0;
}

/* Demangled: ABF_FIXED_DFT_spk */
extern "C" __attribute__((visibility("default"))) int ABF_FIXED_DFT_spk(void) {
    ALOGD("ABF_FIXED_DFT_spk() called");
    return 0;
}

/* Demangled: ModifyW32W16_mult_STE */
extern "C" __attribute__((visibility("default"))) int ModifyW32W16_mult_STE(void) {
    ALOGD("ModifyW32W16_mult_STE() called");
    return 0;
}

/* Exported Object: sb_pwr_bias */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias = NULL;

/* Demangled: compute_noise_floor_16 */
extern "C" __attribute__((visibility("default"))) int compute_noise_floor_16(void) {
    ALOGD("compute_noise_floor_16() called");
    return 0;
}

/* Demangled: cal_es_gain */
extern "C" __attribute__((visibility("default"))) int cal_es_gain(void) {
    ALOGD("cal_es_gain() called");
    return 0;
}

/* Demangled: Mic1_ES_param_To_Mic1 */
extern "C" __attribute__((visibility("default"))) int Mic1_ES_param_To_Mic1(void) {
    ALOGD("Mic1_ES_param_To_Mic1() called");
    return 0;
}

/* Demangled: cb_init_over_est_spk */
extern "C" __attribute__((visibility("default"))) int cb_init_over_est_spk(void) {
    ALOGD("cb_init_over_est_spk() called");
    return 0;
}

/* Demangled: ENH_API_Update_NR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_NR(void) {
    ALOGD("ENH_API_Update_NR() called");
    return 0;
}

/* Demangled: ENH_API_BT_EC_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_BT_EC_Alloc(void) {
    ALOGD("ENH_API_BT_EC_Alloc() called");
    return 0;
}

/* Demangled: ENH_API_Get_AEC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_AEC_Memory(void) {
    ALOGD("ENH_API_Get_AEC_Memory() called");
    return 0;
}

/* Demangled: Mic1_ES_param_To_Mic2 */
extern "C" __attribute__((visibility("default"))) int Mic1_ES_param_To_Mic2(void) {
    ALOGD("Mic1_ES_param_To_Mic2() called");
    return 0;
}

/* Demangled: abf_mode_update_spk */
extern "C" __attribute__((visibility("default"))) int abf_mode_update_spk(void) {
    ALOGD("abf_mode_update_spk() called");
    return 0;
}

/* Demangled: WB_NR_NoiseEst */
extern "C" __attribute__((visibility("default"))) int WB_NR_NoiseEst(void) {
    ALOGD("WB_NR_NoiseEst() called");
    return 0;
}

/* Demangled: VoiceDetector */
extern "C" __attribute__((visibility("default"))) int VoiceDetector(void) {
    ALOGD("VoiceDetector() called");
    return 0;
}

/* Demangled: DT_thd_value */
extern "C" __attribute__((visibility("default"))) int DT_thd_value(void) {
    ALOGD("DT_thd_value() called");
    return 0;
}

/* Demangled: DMNR_mic2_VAD */
extern "C" __attribute__((visibility("default"))) int DMNR_mic2_VAD(void) {
    ALOGD("DMNR_mic2_VAD() called");
    return 0;
}

/* Exported Object: Wn_r_256 */
extern "C" __attribute__((visibility("default"))) void* Wn_r_256 = NULL;

/* Exported Object: sb_nlms_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_normal = NULL;

/* Exported Object: pf_16_12_256 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_256 = NULL;

/* Demangled: cb_HR_set_runtime_parameters_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_set_runtime_parameters_spk(void) {
    ALOGD("cb_HR_set_runtime_parameters_spk() called");
    return 0;
}

/* Demangled: cb_update_SN_energy_spk */
extern "C" __attribute__((visibility("default"))) int cb_update_SN_energy_spk(void) {
    ALOGD("cb_update_SN_energy_spk() called");
    return 0;
}

/* Exported Object: ABF_FFT_Cos */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Cos = NULL;

/* Demangled: NR_PostProcessing_48K */
extern "C" __attribute__((visibility("default"))) int NR_PostProcessing_48K(void) {
    ALOGD("NR_PostProcessing_48K() called");
    return 0;
}

/* Demangled: NR_SbAnalysis_48K_Q23 */
extern "C" __attribute__((visibility("default"))) int NR_SbAnalysis_48K_Q23(void) {
    ALOGD("NR_SbAnalysis_48K_Q23() called");
    return 0;
}

/* Demangled: init_abf_nlms */
extern "C" __attribute__((visibility("default"))) int init_abf_nlms(void) {
    ALOGD("init_abf_nlms() called");
    return 0;
}

/* Demangled: reset_cb_energy_VAD */
extern "C" __attribute__((visibility("default"))) int reset_cb_energy_VAD(void) {
    ALOGD("reset_cb_energy_VAD() called");
    return 0;
}

/* Exported Object: num_taps_shadow_stepsize_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_shadow_stepsize_abf = NULL;

/* Demangled: safeGainControl */
extern "C" __attribute__((visibility("default"))) int safeGainControl(void) {
    ALOGD("safeGainControl() called");
    return 0;
}

/* Demangled: set_cb_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int set_cb_ctrl_spk(void) {
    ALOGD("set_cb_ctrl_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_SF_highSNR_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_SF_highSNR_thd(void) {
    ALOGD("DMNR_convert_SF_highSNR_thd() called");
    return 0;
}

/* Demangled: NR_agg_mode_setting */
extern "C" __attribute__((visibility("default"))) int NR_agg_mode_setting(void) {
    ALOGD("NR_agg_mode_setting() called");
    return 0;
}

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: Bitreversal_Q31 */
extern "C" __attribute__((visibility("default"))) int Bitreversal_Q31(void) {
    ALOGD("Bitreversal_Q31() called");
    return 0;
}

/* Demangled: Set_NR_SUP_Bound */
extern "C" __attribute__((visibility("default"))) int Set_NR_SUP_Bound(void) {
    ALOGD("Set_NR_SUP_Bound() called");
    return 0;
}

/* Demangled: Radix4FirstStageNDC_test32 */
extern "C" __attribute__((visibility("default"))) int Radix4FirstStageNDC_test32(void) {
    ALOGD("Radix4FirstStageNDC_test32() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_B_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_B_t = NULL;

/* Exported Object: log10Table */
extern "C" __attribute__((visibility("default"))) void* log10Table = NULL;

/* Demangled: IIR_allpass_stereoSHIFT_record_Q23 */
extern "C" __attribute__((visibility("default"))) int IIR_allpass_stereoSHIFT_record_Q23(void) {
    ALOGD("IIR_allpass_stereoSHIFT_record_Q23() called");
    return 0;
}

/* Demangled: DL_SF */
extern "C" __attribute__((visibility("default"))) int DL_SF(void) {
    ALOGD("DL_SF() called");
    return 0;
}

/* Exported Object: dctcos_3_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_3_WB = NULL;

/* Exported Object: EC_stepsize_ERLE_band1_value_table */
extern "C" __attribute__((visibility("default"))) void* EC_stepsize_ERLE_band1_value_table = NULL;

/* Demangled: init_cng_parms */
extern "C" __attribute__((visibility("default"))) int init_cng_parms(void) {
    ALOGD("init_cng_parms() called");
    return 0;
}

/* Demangled: LLR_test_6dB_soft */
extern "C" __attribute__((visibility("default"))) int LLR_test_6dB_soft(void) {
    ALOGD("LLR_test_6dB_soft() called");
    return 0;
}

/* Demangled: BandPwrMaxIdx */
extern "C" __attribute__((visibility("default"))) int BandPwrMaxIdx(void) {
    ALOGD("BandPwrMaxIdx() called");
    return 0;
}

/* Demangled: coef_normalization */
extern "C" __attribute__((visibility("default"))) int coef_normalization(void) {
    ALOGD("coef_normalization() called");
    return 0;
}

/* Exported Object: num_taps_additional_shadow_st */
extern "C" __attribute__((visibility("default"))) void* num_taps_additional_shadow_st = NULL;

/* Demangled: ASIE_convert_sii_smooth_thd */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_sii_smooth_thd(void) {
    ALOGD("ASIE_convert_sii_smooth_thd() called");
    return 0;
}

/* Demangled: get_memory_DMNR_BankA */
extern "C" __attribute__((visibility("default"))) int get_memory_DMNR_BankA(void) {
    ALOGD("get_memory_DMNR_BankA() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_H_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_H_t = NULL;

/* Demangled: AGC_cal_power */
extern "C" __attribute__((visibility("default"))) int AGC_cal_power(void) {
    ALOGD("AGC_cal_power() called");
    return 0;
}

/* Demangled: Fixed_log2 */
extern "C" __attribute__((visibility("default"))) int Fixed_log2(void) {
    ALOGD("Fixed_log2() called");
    return 0;
}

/* Demangled: div_s_drc */
extern "C" __attribute__((visibility("default"))) int div_s_drc(void) {
    ALOGD("div_s_drc() called");
    return 0;
}

/* Demangled: get_memory_DMNR_BankB */
extern "C" __attribute__((visibility("default"))) int get_memory_DMNR_BankB(void) {
    ALOGD("get_memory_DMNR_BankB() called");
    return 0;
}

/* Demangled: Well_cal_Cal_VAD */
extern "C" __attribute__((visibility("default"))) int Well_cal_Cal_VAD(void) {
    ALOGD("Well_cal_Cal_VAD() called");
    return 0;
}

/* Demangled: ABF_SB_spk */
extern "C" __attribute__((visibility("default"))) int ABF_SB_spk(void) {
    ALOGD("ABF_SB_spk() called");
    return 0;
}

/* Demangled: synthesis_filter */
extern "C" __attribute__((visibility("default"))) int synthesis_filter(void) {
    ALOGD("synthesis_filter() called");
    return 0;
}

/* Exported Object: power_limit_xu2 */
extern "C" __attribute__((visibility("default"))) void* power_limit_xu2 = NULL;

/* Exported Object: low_flt */
extern "C" __attribute__((visibility("default"))) void* low_flt = NULL;

/* Demangled: cb_hVAD_calc_confidence_spk */
extern "C" __attribute__((visibility("default"))) int cb_hVAD_calc_confidence_spk(void) {
    ALOGD("cb_hVAD_calc_confidence_spk() called");
    return 0;
}

/* Demangled: Half_Band_IIR */
extern "C" __attribute__((visibility("default"))) int Half_Band_IIR(void) {
    ALOGD("Half_Band_IIR() called");
    return 0;
}

/* Exported Object: STE_Richen_Center_L_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Center_L_t = NULL;

/* Demangled: get_comb_filter_coeff_spk */
extern "C" __attribute__((visibility("default"))) int get_comb_filter_coeff_spk(void) {
    ALOGD("get_comb_filter_coeff_spk() called");
    return 0;
}

/* Demangled: align_EXP */
extern "C" __attribute__((visibility("default"))) int align_EXP(void) {
    ALOGD("align_EXP() called");
    return 0;
}

/* Demangled: EC_stepsize_improve_band1_value */
extern "C" __attribute__((visibility("default"))) int EC_stepsize_improve_band1_value(void) {
    ALOGD("EC_stepsize_improve_band1_value() called");
    return 0;
}

/* Demangled: ENH_API_Update_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_ES(void) {
    ALOGD("ENH_API_Update_ES() called");
    return 0;
}

/* Demangled: start_EPL_logger_UL */
extern "C" __attribute__((visibility("default"))) int start_EPL_logger_UL(void) {
    ALOGD("start_EPL_logger_UL() called");
    return 0;
}

/* Demangled: DMNR_convert_TMOS_NOISE_THD */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_TMOS_NOISE_THD(void) {
    ALOGD("DMNR_convert_TMOS_NOISE_THD() called");
    return 0;
}

/* Demangled: init_ASLR_parms */
extern "C" __attribute__((visibility("default"))) int init_ASLR_parms(void) {
    ALOGD("init_ASLR_parms() called");
    return 0;
}

/* Demangled: init_bankA_parms_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int init_bankA_parms_DMNR_spk(void) {
    ALOGD("init_bankA_parms_DMNR_spk() called");
    return 0;
}

/* Demangled: Check_Param_Change */
extern "C" __attribute__((visibility("default"))) int Check_Param_Change(void) {
    ALOGD("Check_Param_Change() called");
    return 0;
}

/* Demangled: ENH_API_NDC_Alloc_NR */
extern "C" __attribute__((visibility("default"))) int ENH_API_NDC_Alloc_NR(void) {
    ALOGD("ENH_API_NDC_Alloc_NR() called");
    return 0;
}

/* Demangled: ENH_API_Reset_NR_48k */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_NR_48k(void) {
    ALOGD("ENH_API_Reset_NR_48k() called");
    return 0;
}

/* Demangled: ENH_Record_Mute_Begin_UL */
extern "C" __attribute__((visibility("default"))) int ENH_Record_Mute_Begin_UL(void) {
    ALOGD("ENH_Record_Mute_Begin_UL() called");
    return 0;
}

/* Demangled: RFFT_256_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_256_Q31(void) {
    ALOGD("RFFT_256_Q31() called");
    return 0;
}

/* Demangled: ENH_API_Update_CB_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_CB_spk(void) {
    ALOGD("ENH_API_Update_CB_spk() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_gain_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_gain_spk(void) {
    ALOGD("cb_postfiltering_calc_gain_spk() called");
    return 0;
}

/* Demangled: norm_r_shift_32 */
extern "C" __attribute__((visibility("default"))) int norm_r_shift_32(void) {
    ALOGD("norm_r_shift_32() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_Get_Data_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_Get_Data_spk(void) {
    ALOGD("ENH_API_DMNR_Get_Data_spk() called");
    return 0;
}

/* Exported Object: Freq_Array */
extern "C" __attribute__((visibility("default"))) void* Freq_Array = NULL;

/* Demangled: FFT_scaling */
extern "C" __attribute__((visibility("default"))) int FFT_scaling(void) {
    ALOGD("FFT_scaling() called");
    return 0;
}

/* Demangled: NDC_UL_ASLR */
extern "C" __attribute__((visibility("default"))) int NDC_UL_ASLR(void) {
    ALOGD("NDC_UL_ASLR() called");
    return 0;
}

/* Demangled: init_MCRA */
extern "C" __attribute__((visibility("default"))) int init_MCRA(void) {
    ALOGD("init_MCRA() called");
    return 0;
}

/* Demangled: init_cb_fft_struct */
extern "C" __attribute__((visibility("default"))) int init_cb_fft_struct(void) {
    ALOGD("init_cb_fft_struct() called");
    return 0;
}

/* Demangled: CheckCalibrationDataValid */
extern "C" __attribute__((visibility("default"))) int CheckCalibrationDataValid(void) {
    ALOGD("CheckCalibrationDataValid() called");
    return 0;
}

/* Demangled: DMNR_convert_mic2_block_thd_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_mic2_block_thd_SPK(void) {
    ALOGD("DMNR_convert_mic2_block_thd_SPK() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: ENH_API_Reset_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_AEC(void) {
    ALOGD("ENH_API_Reset_AEC() called");
    return 0;
}

/* Demangled: Residual_echo_cal */
extern "C" __attribute__((visibility("default"))) int Residual_echo_cal(void) {
    ALOGD("Residual_echo_cal() called");
    return 0;
}

/* Demangled: LSPK_DT_improv_EPC_est */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improv_EPC_est(void) {
    ALOGD("LSPK_DT_improv_EPC_est() called");
    return 0;
}

/* Demangled: init_cb_hr_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_hr_spk(void) {
    ALOGD("init_cb_hr_spk() called");
    return 0;
}

/* Demangled: Minimum_Statistics */
extern "C" __attribute__((visibility("default"))) int Minimum_Statistics(void) {
    ALOGD("Minimum_Statistics() called");
    return 0;
}

/* Demangled: ENH_API_CB_Get_Data_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Get_Data_spk(void) {
    ALOGD("ENH_API_CB_Get_Data_spk() called");
    return 0;
}

/* Demangled: sb_ASLR_noise_esti */
extern "C" __attribute__((visibility("default"))) int sb_ASLR_noise_esti(void) {
    ALOGD("sb_ASLR_noise_esti() called");
    return 0;
}

/* Demangled: ENH_API_Init_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_MR(void) {
    ALOGD("ENH_API_Init_MR() called");
    return 0;
}

/* Demangled: FIXED_DFT */
extern "C" __attribute__((visibility("default"))) int FIXED_DFT(void) {
    ALOGD("FIXED_DFT() called");
    return 0;
}

/* Exported Object: MBDRC_Gain_Table */
extern "C" __attribute__((visibility("default"))) void* MBDRC_Gain_Table = NULL;

/* Demangled: DRC_Com_Reset */
extern "C" __attribute__((visibility("default"))) int DRC_Com_Reset(void) {
    ALOGD("DRC_Com_Reset() called");
    return 0;
}

/* Demangled: ENH_API_Update_DL_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_DL_AEC(void) {
    ALOGD("ENH_API_Update_DL_AEC() called");
    return 0;
}

/* Demangled: init_esp_parms */
extern "C" __attribute__((visibility("default"))) int init_esp_parms(void) {
    ALOGD("init_esp_parms() called");
    return 0;
}

/* Demangled: Low_Latency_Standard_DRC */
extern "C" __attribute__((visibility("default"))) int Low_Latency_Standard_DRC(void) {
    ALOGD("Low_Latency_Standard_DRC() called");
    return 0;
}

/* Exported Object: pf_16_12_112 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_112 = NULL;

/* Demangled: force_module_triggered_to_reset */
extern "C" __attribute__((visibility("default"))) int force_module_triggered_to_reset(void) {
    ALOGD("force_module_triggered_to_reset() called");
    return 0;
}

/* Demangled: WB_NR_EstCriticalBandEnergy */
extern "C" __attribute__((visibility("default"))) int WB_NR_EstCriticalBandEnergy(void) {
    ALOGD("WB_NR_EstCriticalBandEnergy() called");
    return 0;
}

/* Exported Object: NDC_CB_Table_48K */
extern "C" __attribute__((visibility("default"))) void* NDC_CB_Table_48K = NULL;

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: adaptive_speech_intelligibility_enhancement */
extern "C" __attribute__((visibility("default"))) int adaptive_speech_intelligibility_enhancement(void) {
    ALOGD("adaptive_speech_intelligibility_enhancement() called");
    return 0;
}

/* Demangled: getSpecLvl */
extern "C" __attribute__((visibility("default"))) int getSpecLvl(void) {
    ALOGD("getSpecLvl() called");
    return 0;
}

/* Demangled: ENH_API_Update_Compressor_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_Compressor_48K(void) {
    ALOGD("ENH_API_Update_Compressor_48K() called");
    return 0;
}

/* Demangled: init_welcal_vad_struct */
extern "C" __attribute__((visibility("default"))) int init_welcal_vad_struct(void) {
    ALOGD("init_welcal_vad_struct() called");
    return 0;
}

/* Demangled: MBDRC_Divide_s_32 */
extern "C" __attribute__((visibility("default"))) int MBDRC_Divide_s_32(void) {
    ALOGD("MBDRC_Divide_s_32() called");
    return 0;
}

/* Demangled: DRC_UL_Init */
extern "C" __attribute__((visibility("default"))) int DRC_UL_Init(void) {
    ALOGD("DRC_UL_Init() called");
    return 0;
}

/* Exported Object: NDC_BankB_Window_SWB */
extern "C" __attribute__((visibility("default"))) void* NDC_BankB_Window_SWB = NULL;

/* Demangled: ENH_API_Run_BKF_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_BKF_UL(void) {
    ALOGD("ENH_API_Run_BKF_UL() called");
    return 0;
}

/* Demangled: debug_dump_array_Cmplx16 */
extern "C" __attribute__((visibility("default"))) int debug_dump_array_Cmplx16(void) {
    ALOGD("debug_dump_array_Cmplx16() called");
    return 0;
}

/* Demangled: debug_print */
extern "C" __attribute__((visibility("default"))) int debug_print(void) {
    ALOGD("debug_print() called");
    return 0;
}

/* Demangled: debug_set_dump_dir */
extern "C" __attribute__((visibility("default"))) int debug_set_dump_dir(void) {
    ALOGD("debug_set_dump_dir() called");
    return 0;
}

/* Demangled: fixed_white_noise_gen */
extern "C" __attribute__((visibility("default"))) int fixed_white_noise_gen(void) {
    ALOGD("fixed_white_noise_gen() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_FFT_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_FFT_spk(void) {
    ALOGD("ENH_API_CB_Alloc_FFT_spk() called");
    return 0;
}

/* Demangled: ENH_API_Init_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DMNR(void) {
    ALOGD("ENH_API_Init_DMNR() called");
    return 0;
}

/* Demangled: ABM_calc_nlms */
extern "C" __attribute__((visibility("default"))) int ABM_calc_nlms(void) {
    ALOGD("ABM_calc_nlms() called");
    return 0;
}

/* Demangled: DT_EPC_shadow_st_handling */
extern "C" __attribute__((visibility("default"))) int DT_EPC_shadow_st_handling(void) {
    ALOGD("DT_EPC_shadow_st_handling() called");
    return 0;
}

/* Demangled: step1_shl_pwr_bias */
extern "C" __attribute__((visibility("default"))) int step1_shl_pwr_bias(void) {
    ALOGD("step1_shl_pwr_bias() called");
    return 0;
}

/* Demangled: debug_check */
extern "C" __attribute__((visibility("default"))) int debug_check(void) {
    ALOGD("debug_check() called");
    return 0;
}

/* Demangled: SetDefaultABFCalData */
extern "C" __attribute__((visibility("default"))) int SetDefaultABFCalData(void) {
    ALOGD("SetDefaultABFCalData() called");
    return 0;
}

/* Demangled: init_cds */
extern "C" __attribute__((visibility("default"))) int init_cds(void) {
    ALOGD("init_cds() called");
    return 0;
}

/* Demangled: nlms_abf_ABM */
extern "C" __attribute__((visibility("default"))) int nlms_abf_ABM(void) {
    ALOGD("nlms_abf_ABM() called");
    return 0;
}

/* Demangled: Echo_est_control */
extern "C" __attribute__((visibility("default"))) int Echo_est_control(void) {
    ALOGD("Echo_est_control() called");
    return 0;
}

/* Demangled: cb_calc_speech_absence_prob_PD_spk */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_PD_spk(void) {
    ALOGD("cb_calc_speech_absence_prob_PD_spk() called");
    return 0;
}

/* Demangled: swap_blk */
extern "C" __attribute__((visibility("default"))) int swap_blk(void) {
    ALOGD("swap_blk() called");
    return 0;
}

/* Demangled: SB_whistle_AECinblk */
extern "C" __attribute__((visibility("default"))) int SB_whistle_AECinblk(void) {
    ALOGD("SB_whistle_AECinblk() called");
    return 0;
}

/* Demangled: ENH_API_Get_SCH_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_SCH_Memory(void) {
    ALOGD("ENH_API_Get_SCH_Memory() called");
    return 0;
}

/* Demangled: fir_48K_90tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_90tap(void) {
    ALOGD("fir_48K_90tap() called");
    return 0;
}

/* Demangled: pack_div_s_32_32_spk */
extern "C" __attribute__((visibility("default"))) int pack_div_s_32_32_spk(void) {
    ALOGD("pack_div_s_32_32_spk() called");
    return 0;
}

/* Demangled: nlms_sb_n */
extern "C" __attribute__((visibility("default"))) int nlms_sb_n(void) {
    ALOGD("nlms_sb_n() called");
    return 0;
}

/* Demangled: ENH_API_Get_CB_Memory_Core */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_CB_Memory_Core(void) {
    ALOGD("ENH_API_Get_CB_Memory_Core() called");
    return 0;
}

/* Demangled: CB_IFFT */
extern "C" __attribute__((visibility("default"))) int CB_IFFT(void) {
    ALOGD("CB_IFFT() called");
    return 0;
}

/* Demangled: init_PF */
extern "C" __attribute__((visibility("default"))) int init_PF(void) {
    ALOGD("init_PF() called");
    return 0;
}

/* Exported Object: fe_delay_ds_hist */
extern "C" __attribute__((visibility("default"))) void* fe_delay_ds_hist = NULL;

/* Exported Object: CB2OB_band_width */
extern "C" __attribute__((visibility("default"))) void* CB2OB_band_width = NULL;

/* Demangled: cb_less_gain_protection */
extern "C" __attribute__((visibility("default"))) int cb_less_gain_protection(void) {
    ALOGD("cb_less_gain_protection() called");
    return 0;
}

/* Demangled: cal_FFT_AES_Gain */
extern "C" __attribute__((visibility("default"))) int cal_FFT_AES_Gain(void) {
    ALOGD("cal_FFT_AES_Gain() called");
    return 0;
}

/* Demangled: init_cb_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_ctrl_spk(void) {
    ALOGD("init_cb_ctrl_spk() called");
    return 0;
}

/* Demangled: ENH_API_Get_DMNR_Memory_BankB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DMNR_Memory_BankB(void) {
    ALOGD("ENH_API_Get_DMNR_Memory_BankB() called");
    return 0;
}

/* Demangled: normalize_fun */
extern "C" __attribute__((visibility("default"))) int normalize_fun(void) {
    ALOGD("normalize_fun() called");
    return 0;
}

/* Demangled: FIR_Q15_90tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_90tap(void) {
    ALOGD("FIR_Q15_90tap() called");
    return 0;
}

/* Demangled: NR_SuppressGainSmoothing */
extern "C" __attribute__((visibility("default"))) int NR_SuppressGainSmoothing(void) {
    ALOGD("NR_SuppressGainSmoothing() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_Get_Data */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_Get_Data(void) {
    ALOGD("ENH_API_DMNR_Get_Data() called");
    return 0;
}

/* Demangled: init_ABM_vad */
extern "C" __attribute__((visibility("default"))) int init_ABM_vad(void) {
    ALOGD("init_ABM_vad() called");
    return 0;
}

/* Demangled: AGC_Reverse_Gain_Compensation_Org */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation_Org(void) {
    ALOGD("AGC_Reverse_Gain_Compensation_Org() called");
    return 0;
}

/* Demangled: ENH_API_Reset_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_MR(void) {
    ALOGD("ENH_API_Reset_MR() called");
    return 0;
}

/* Exported Object: dctcos2_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos2_WB = NULL;

/* Exported Object: EC_Init_Coeff_Table1 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Table1 = NULL;

/* Demangled: EC_stepsize_ERLE_band1_value */
extern "C" __attribute__((visibility("default"))) int EC_stepsize_ERLE_band1_value(void) {
    ALOGD("EC_stepsize_ERLE_band1_value() called");
    return 0;
}

/* Demangled: init_nlp_parms */
extern "C" __attribute__((visibility("default"))) int init_nlp_parms(void) {
    ALOGD("init_nlp_parms() called");
    return 0;
}

/* Demangled: ENH_API_DL_MR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DL_MR_Alloc(void) {
    ALOGD("ENH_API_DL_MR_Alloc() called");
    return 0;
}

/* Exported Object: EC_Init_Coeff_Table2 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Table2 = NULL;

/* Demangled: getSpecBinEnergy */
extern "C" __attribute__((visibility("default"))) int getSpecBinEnergy(void) {
    ALOGD("getSpecBinEnergy() called");
    return 0;
}

/* Demangled: cb_SND_protection_spk */
extern "C" __attribute__((visibility("default"))) int cb_SND_protection_spk(void) {
    ALOGD("cb_SND_protection_spk() called");
    return 0;
}

/* Demangled: ENH_API_Update_FE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_FE(void) {
    ALOGD("ENH_API_Update_FE() called");
    return 0;
}

/* Demangled: ULDL_GainControl_Reset */
extern "C" __attribute__((visibility("default"))) int ULDL_GainControl_Reset(void) {
    ALOGD("ULDL_GainControl_Reset() called");
    return 0;
}

/* Demangled: energy_update_16 */
extern "C" __attribute__((visibility("default"))) int energy_update_16(void) {
    ALOGD("energy_update_16() called");
    return 0;
}

/* Exported Object: EC_Init_Coeff_Table3 */
extern "C" __attribute__((visibility("default"))) void* EC_Init_Coeff_Table3 = NULL;

/* Exported Object: num_taps_additional_shadow */
extern "C" __attribute__((visibility("default"))) void* num_taps_additional_shadow = NULL;

/* Demangled: DMNR_convert_Mic_selection_VAD_THD_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_VAD_THD_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_VAD_THD_SPK() called");
    return 0;
}

/* Demangled: update_cb_GCC_spk */
extern "C" __attribute__((visibility("default"))) int update_cb_GCC_spk(void) {
    ALOGD("update_cb_GCC_spk() called");
    return 0;
}

/* Demangled: abf_reset */
extern "C" __attribute__((visibility("default"))) int abf_reset(void) {
    ALOGD("abf_reset() called");
    return 0;
}

/* Exported Object: ABF_FFT_Sin_Inv */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Sin_Inv = NULL;

/* Demangled: DL_AF */
extern "C" __attribute__((visibility("default"))) int DL_AF(void) {
    ALOGD("DL_AF() called");
    return 0;
}

/* Demangled: RIFFT_256_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_256_Q31(void) {
    ALOGD("RIFFT_256_Q31() called");
    return 0;
}

/* Demangled: FIR_Q15_INIT */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_INIT(void) {
    ALOGD("FIR_Q15_INIT() called");
    return 0;
}

/* Exported Object: STE_Widen_Side01_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side01_t = NULL;

/* Exported Object: es_fact */
extern "C" __attribute__((visibility("default"))) void* es_fact = NULL;

/* Demangled: cb_feature_to_power_interpolation */
extern "C" __attribute__((visibility("default"))) int cb_feature_to_power_interpolation(void) {
    ALOGD("cb_feature_to_power_interpolation() called");
    return 0;
}

/* Demangled: Get_HighShelf_Coef */
extern "C" __attribute__((visibility("default"))) int Get_HighShelf_Coef(void) {
    ALOGD("Get_HighShelf_Coef() called");
    return 0;
}

/* Exported Object: STE_Widen_Side03_t */
extern "C" __attribute__((visibility("default"))) void* STE_Widen_Side03_t = NULL;

/* Demangled: abf_mode_update */
extern "C" __attribute__((visibility("default"))) int abf_mode_update(void) {
    ALOGD("abf_mode_update() called");
    return 0;
}

/* Demangled: LR2CS */
extern "C" __attribute__((visibility("default"))) int LR2CS(void) {
    ALOGD("LR2CS() called");
    return 0;
}

/* Demangled: modify_stepsize_tcl_whistle */
extern "C" __attribute__((visibility("default"))) int modify_stepsize_tcl_whistle(void) {
    ALOGD("modify_stepsize_tcl_whistle() called");
    return 0;
}

/* Demangled: cb_HR_pitch_boost_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_pitch_boost_spk(void) {
    ALOGD("cb_HR_pitch_boost_spk() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_energy_VAD_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_energy_VAD_spk(void) {
    ALOGD("cb_postfiltering_calc_energy_VAD_spk() called");
    return 0;
}

/* Demangled: init_bankB_parms_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int init_bankB_parms_DMNR_spk(void) {
    ALOGD("init_bankB_parms_DMNR_spk() called");
    return 0;
}

/* Demangled: TCLW_Suppress_Level */
extern "C" __attribute__((visibility("default"))) int TCLW_Suppress_Level(void) {
    ALOGD("TCLW_Suppress_Level() called");
    return 0;
}

/* Demangled: ENH_API_Get_dl_enh_value */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_dl_enh_value(void) {
    ALOGD("ENH_API_Get_dl_enh_value() called");
    return 0;
}

/* Demangled: ENH_API_Update_FFT_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_FFT_ES(void) {
    ALOGD("ENH_API_Update_FFT_ES() called");
    return 0;
}

/* Demangled: cb_feature_to_power_interpolation_spk */
extern "C" __attribute__((visibility("default"))) int cb_feature_to_power_interpolation_spk(void) {
    ALOGD("cb_feature_to_power_interpolation_spk() called");
    return 0;
}

/* Demangled: Smooth_NoiseFloor */
extern "C" __attribute__((visibility("default"))) int Smooth_NoiseFloor(void) {
    ALOGD("Smooth_NoiseFloor() called");
    return 0;
}

/* Demangled: init_EPL_logger */
extern "C" __attribute__((visibility("default"))) int init_EPL_logger(void) {
    ALOGD("init_EPL_logger() called");
    return 0;
}

/* Demangled: DMNR_covert_Mic_selection_ASLR_gain */
extern "C" __attribute__((visibility("default"))) int DMNR_covert_Mic_selection_ASLR_gain(void) {
    ALOGD("DMNR_covert_Mic_selection_ASLR_gain() called");
    return 0;
}

/* Demangled: ENH_API_Free_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_DMNR_spk(void) {
    ALOGD("ENH_API_Free_DMNR_spk() called");
    return 0;
}

/* Demangled: ENH_API_Init_AEC2 */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_AEC2(void) {
    ALOGD("ENH_API_Init_AEC2() called");
    return 0;
}

/* Demangled: Cal_DMNR_ASLR */
extern "C" __attribute__((visibility("default"))) int Cal_DMNR_ASLR(void) {
    ALOGD("Cal_DMNR_ASLR() called");
    return 0;
}

/* Demangled: BKF_Shaping_3Quest */
extern "C" __attribute__((visibility("default"))) int BKF_Shaping_3Quest(void) {
    ALOGD("BKF_Shaping_3Quest() called");
    return 0;
}

/* Exported Object: NDC_BankB_Window */
extern "C" __attribute__((visibility("default"))) void* NDC_BankB_Window = NULL;

/* Demangled: DMNR_mic2_VAD_spk */
extern "C" __attribute__((visibility("default"))) int DMNR_mic2_VAD_spk(void) {
    ALOGD("DMNR_mic2_VAD_spk() called");
    return 0;
}

/* Demangled: nlms_abf_spk */
extern "C" __attribute__((visibility("default"))) int nlms_abf_spk(void) {
    ALOGD("nlms_abf_spk() called");
    return 0;
}

/* Demangled: SRC_upsample_2in */
extern "C" __attribute__((visibility("default"))) int SRC_upsample_2in(void) {
    ALOGD("SRC_upsample_2in() called");
    return 0;
}

/* Demangled: Switch_coef */
extern "C" __attribute__((visibility("default"))) int Switch_coef(void) {
    ALOGD("Switch_coef() called");
    return 0;
}

/* Demangled: cb_HR_cem_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_cem_spk(void) {
    ALOGD("cb_HR_cem_spk() called");
    return 0;
}

/* Demangled: init_delay */
extern "C" __attribute__((visibility("default"))) int init_delay(void) {
    ALOGD("init_delay() called");
    return 0;
}

/* Demangled: sb_postfiltering */
extern "C" __attribute__((visibility("default"))) int sb_postfiltering(void) {
    ALOGD("sb_postfiltering() called");
    return 0;
}

/* Demangled: spatial_filter_spk */
extern "C" __attribute__((visibility("default"))) int spatial_filter_spk(void) {
    ALOGD("spatial_filter_spk() called");
    return 0;
}

/* Demangled: ENH_API_DL_Process */
extern "C" __attribute__((visibility("default"))) int ENH_API_DL_Process(void) {
    ALOGD("ENH_API_DL_Process() called");
    return 0;
}

/* Exported Object: high_flt_WB */
extern "C" __attribute__((visibility("default"))) void* high_flt_WB = NULL;

/* Demangled: compute_noise_floor */
extern "C" __attribute__((visibility("default"))) int compute_noise_floor(void) {
    ALOGD("compute_noise_floor() called");
    return 0;
}

/* Demangled: Cal_parameter_1 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_1(void) {
    ALOGD("Cal_parameter_1() called");
    return 0;
}

/* Demangled: WB_NR_ToneDetection */
extern "C" __attribute__((visibility("default"))) int WB_NR_ToneDetection(void) {
    ALOGD("WB_NR_ToneDetection() called");
    return 0;
}

/* Exported Object: Noise_Bin2OB_band_idx */
extern "C" __attribute__((visibility("default"))) void* Noise_Bin2OB_band_idx = NULL;

/* Demangled: ENH_API_Reset_Compressor_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_Compressor_48K(void) {
    ALOGD("ENH_API_Reset_Compressor_48K() called");
    return 0;
}

/* Exported Object: sebuffer_L */
extern "C" __attribute__((visibility("default"))) void* sebuffer_L = NULL;

/* Exported Object: Table_T2D */
extern "C" __attribute__((visibility("default"))) void* Table_T2D = NULL;

/* Demangled: RIFFT_512_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_512_Q31(void) {
    ALOGD("RIFFT_512_Q31() called");
    return 0;
}

/* Demangled: getBandPower */
extern "C" __attribute__((visibility("default"))) int getBandPower(void) {
    ALOGD("getBandPower() called");
    return 0;
}

/* Demangled: Cal_parameter_3 */
extern "C" __attribute__((visibility("default"))) int Cal_parameter_3(void) {
    ALOGD("Cal_parameter_3() called");
    return 0;
}

/* Demangled: IIR_allpass_stereoSHIFT */
extern "C" __attribute__((visibility("default"))) int IIR_allpass_stereoSHIFT(void) {
    ALOGD("IIR_allpass_stereoSHIFT() called");
    return 0;
}

/* Demangled: ENH_API_Get_ENH_ctrl_ptr */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_ENH_ctrl_ptr(void) {
    ALOGD("ENH_API_Get_ENH_ctrl_ptr() called");
    return 0;
}

/* Demangled: update_AGC_gain */
extern "C" __attribute__((visibility("default"))) int update_AGC_gain(void) {
    ALOGD("update_AGC_gain() called");
    return 0;
}

/* Demangled: update_ntd_struct */
extern "C" __attribute__((visibility("default"))) int update_ntd_struct(void) {
    ALOGD("update_ntd_struct() called");
    return 0;
}

/* Exported Object: DeEmpahsisFIR_coef */
extern "C" __attribute__((visibility("default"))) void* DeEmpahsisFIR_coef = NULL;

/* Exported Object: stepsize_slow_bound */
extern "C" __attribute__((visibility("default"))) void* stepsize_slow_bound = NULL;

/* Demangled: update_cb_struct */
extern "C" __attribute__((visibility("default"))) int update_cb_struct(void) {
    ALOGD("update_cb_struct() called");
    return 0;
}

/* Demangled: init_voice_tracking */
extern "C" __attribute__((visibility("default"))) int init_voice_tracking(void) {
    ALOGD("init_voice_tracking() called");
    return 0;
}

/* Demangled: circular_conv */
extern "C" __attribute__((visibility("default"))) int circular_conv(void) {
    ALOGD("circular_conv() called");
    return 0;
}

/* Demangled: Radix4BflyFastNDC_test32_smmul */
extern "C" __attribute__((visibility("default"))) int Radix4BflyFastNDC_test32_smmul(void) {
    ALOGD("Radix4BflyFastNDC_test32_smmul() called");
    return 0;
}

/* Demangled: compressor_48K_sub_process */
extern "C" __attribute__((visibility("default"))) int compressor_48K_sub_process(void) {
    ALOGD("compressor_48K_sub_process() called");
    return 0;
}

/* Exported Object: sebuffer2_L */
extern "C" __attribute__((visibility("default"))) void* sebuffer2_L = NULL;

/* Demangled: SB_whistle_AEC */
extern "C" __attribute__((visibility("default"))) int SB_whistle_AEC(void) {
    ALOGD("SB_whistle_AEC() called");
    return 0;
}

/* Demangled: reset_cb_fft_struct */
extern "C" __attribute__((visibility("default"))) int reset_cb_fft_struct(void) {
    ALOGD("reset_cb_fft_struct() called");
    return 0;
}

/* Demangled: init_cb_hr_status_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_hr_status_ctrl_spk(void) {
    ALOGD("init_cb_hr_status_ctrl_spk() called");
    return 0;
}

/* Demangled: spatial_filter */
extern "C" __attribute__((visibility("default"))) int spatial_filter(void) {
    ALOGD("spatial_filter() called");
    return 0;
}

/* Demangled: init_abf_nlms_spk */
extern "C" __attribute__((visibility("default"))) int init_abf_nlms_spk(void) {
    ALOGD("init_abf_nlms_spk() called");
    return 0;
}

/* Demangled: ENH_API_Init_NR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_NR(void) {
    ALOGD("ENH_API_Init_NR() called");
    return 0;
}

/* Demangled: Set_Compression_ratio */
extern "C" __attribute__((visibility("default"))) int Set_Compression_ratio(void) {
    ALOGD("Set_Compression_ratio() called");
    return 0;
}

/* Demangled: align_fractional_point */
extern "C" __attribute__((visibility("default"))) int align_fractional_point(void) {
    ALOGD("align_fractional_point() called");
    return 0;
}

/* Demangled: getNoiseBinEnergy_WB */
extern "C" __attribute__((visibility("default"))) int getNoiseBinEnergy_WB(void) {
    ALOGD("getNoiseBinEnergy_WB() called");
    return 0;
}

/* Demangled: protectEnhanceGainLowerBound */
extern "C" __attribute__((visibility("default"))) int protectEnhanceGainLowerBound(void) {
    ALOGD("protectEnhanceGainLowerBound() called");
    return 0;
}

/* Demangled: abf_init */
extern "C" __attribute__((visibility("default"))) int abf_init(void) {
    ALOGD("abf_init() called");
    return 0;
}

/* Demangled: apply_sup_gain */
extern "C" __attribute__((visibility("default"))) int apply_sup_gain(void) {
    ALOGD("apply_sup_gain() called");
    return 0;
}

/* Exported Object: MBDRC_sqrt_Gain_Table */
extern "C" __attribute__((visibility("default"))) void* MBDRC_sqrt_Gain_Table = NULL;

/* Exported Object: HP_IIR_coef_b2_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_b2_16k_set = NULL;

/* Demangled: init_SD_vad */
extern "C" __attribute__((visibility("default"))) int init_SD_vad(void) {
    ALOGD("init_SD_vad() called");
    return 0;
}

/* Exported Object: Table_MinGain */
extern "C" __attribute__((visibility("default"))) void* Table_MinGain = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: Reverb_band_Switch */
extern "C" __attribute__((visibility("default"))) int Reverb_band_Switch(void) {
    ALOGD("Reverb_band_Switch() called");
    return 0;
}

/* Exported Object: log10Thd */
extern "C" __attribute__((visibility("default"))) void* log10Thd = NULL;

/* Demangled: cb_postfiltering_with_uncertainty */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_with_uncertainty(void) {
    ALOGD("cb_postfiltering_with_uncertainty() called");
    return 0;
}

/* Demangled: reset_cb_hVAD_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_hVAD_spk(void) {
    ALOGD("reset_cb_hVAD_spk() called");
    return 0;
}

/* Demangled: cb_HR_calc_gain_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_gain_spk(void) {
    ALOGD("cb_HR_calc_gain_spk() called");
    return 0;
}

/* Exported Object: NR_Strength_Table48k */
extern "C" __attribute__((visibility("default"))) void* NR_Strength_Table48k = NULL;

/* Demangled: init_ABM_vad_spk */
extern "C" __attribute__((visibility("default"))) int init_ABM_vad_spk(void) {
    ALOGD("init_ABM_vad_spk() called");
    return 0;
}

/* Exported Object: Table_D2T */
extern "C" __attribute__((visibility("default"))) void* Table_D2T = NULL;

/* Demangled: init_cb_hVAD_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_hVAD_spk(void) {
    ALOGD("init_cb_hVAD_spk() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_spk_Alloc_BankA */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_spk_Alloc_BankA(void) {
    ALOGD("ENH_API_DMNR_spk_Alloc_BankA() called");
    return 0;
}

/* Demangled: cb_expander_apply */
extern "C" __attribute__((visibility("default"))) int cb_expander_apply(void) {
    ALOGD("cb_expander_apply() called");
    return 0;
}

/* Demangled: CB_convert_echo_weight */
extern "C" __attribute__((visibility("default"))) int CB_convert_echo_weight(void) {
    ALOGD("CB_convert_echo_weight() called");
    return 0;
}

/* Exported Object: smooth_rate_convert_table */
extern "C" __attribute__((visibility("default"))) void* smooth_rate_convert_table = NULL;

/* Demangled: SPK_ABF_FIXED_DFT */
extern "C" __attribute__((visibility("default"))) int SPK_ABF_FIXED_DFT(void) {
    ALOGD("SPK_ABF_FIXED_DFT() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd_LB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd_LB(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd_LB() called");
    return 0;
}

/* Demangled: ENH_API_DMNR_spk_Alloc_BankB */
extern "C" __attribute__((visibility("default"))) int ENH_API_DMNR_spk_Alloc_BankB(void) {
    ALOGD("ENH_API_DMNR_spk_Alloc_BankB() called");
    return 0;
}

/* Demangled: FE_Minimum_Statistics */
extern "C" __attribute__((visibility("default"))) int FE_Minimum_Statistics(void) {
    ALOGD("FE_Minimum_Statistics() called");
    return 0;
}

/* Demangled: IIR_allpass_stereo */
extern "C" __attribute__((visibility("default"))) int IIR_allpass_stereo(void) {
    ALOGD("IIR_allpass_stereo() called");
    return 0;
}

/* Demangled: sb_aec */
extern "C" __attribute__((visibility("default"))) int sb_aec(void) {
    ALOGD("sb_aec() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_selection_PowerB_FB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_selection_PowerB_FB(void) {
    ALOGD("DMNR_convert_Mic2_selection_PowerB_FB() called");
    return 0;
}

/* Demangled: calibration_data_switch */
extern "C" __attribute__((visibility("default"))) int calibration_data_switch(void) {
    ALOGD("calibration_data_switch() called");
    return 0;
}

/* Demangled: AEC_Ne_sample_based_processing */
extern "C" __attribute__((visibility("default"))) int AEC_Ne_sample_based_processing(void) {
    ALOGD("AEC_Ne_sample_based_processing() called");
    return 0;
}

/* Demangled: ENH_API_whistle_AEC2_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_whistle_AEC2_Alloc(void) {
    ALOGD("ENH_API_whistle_AEC2_Alloc() called");
    return 0;
}

/* Demangled: ENH_API_MR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_MR_Alloc(void) {
    ALOGD("ENH_API_MR_Alloc() called");
    return 0;
}

/* Demangled: NDC_DL_Comfort_Noise */
extern "C" __attribute__((visibility("default"))) int NDC_DL_Comfort_Noise(void) {
    ALOGD("NDC_DL_Comfort_Noise() called");
    return 0;
}

/* Demangled: Fixed_Spectral_Smoothing */
extern "C" __attribute__((visibility("default"))) int Fixed_Spectral_Smoothing(void) {
    ALOGD("Fixed_Spectral_Smoothing() called");
    return 0;
}

/* Demangled: ENH_API_Init_STE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_STE(void) {
    ALOGD("ENH_API_Init_STE() called");
    return 0;
}

/* Demangled: DL_Echo_Suppress */
extern "C" __attribute__((visibility("default"))) int DL_Echo_Suppress(void) {
    ALOGD("DL_Echo_Suppress() called");
    return 0;
}

/* Exported Object: high_flt_NB */
extern "C" __attribute__((visibility("default"))) void* high_flt_NB = NULL;

/* Exported Object: pf_16_12_128 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128 = NULL;

/* Demangled: ENH_API_Get_CB_Memory_Core_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_CB_Memory_Core_spk(void) {
    ALOGD("ENH_API_Get_CB_Memory_Core_spk() called");
    return 0;
}

/* Demangled: cfft_radix2_bfly_neon_2x2 */
extern "C" __attribute__((visibility("default"))) int cfft_radix2_bfly_neon_2x2(void) {
    ALOGD("cfft_radix2_bfly_neon_2x2() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_HL_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_HL_t = NULL;

/* Demangled: thd_mapping_spk */
extern "C" __attribute__((visibility("default"))) int thd_mapping_spk(void) {
    ALOGD("thd_mapping_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_PF_fixed_alpha_rise */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_PF_fixed_alpha_rise(void) {
    ALOGD("DMNR_convert_PF_fixed_alpha_rise() called");
    return 0;
}

/* Exported Object: NR_Shift_of_cr_lambda_n */
extern "C" __attribute__((visibility("default"))) void* NR_Shift_of_cr_lambda_n = NULL;

/* Demangled: FIR_Q15_12tap */
extern "C" __attribute__((visibility("default"))) int FIR_Q15_12tap(void) {
    ALOGD("FIR_Q15_12tap() called");
    return 0;
}

/* Demangled: add_comfort_noise */
extern "C" __attribute__((visibility("default"))) int add_comfort_noise(void) {
    ALOGD("add_comfort_noise() called");
    return 0;
}

/* Demangled: ASIE_convert_attackTime */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_attackTime(void) {
    ALOGD("ASIE_convert_attackTime() called");
    return 0;
}

/* Demangled: cb_init_over_est */
extern "C" __attribute__((visibility("default"))) int cb_init_over_est(void) {
    ALOGD("cb_init_over_est() called");
    return 0;
}

/* Demangled: MedianPwrIndx */
extern "C" __attribute__((visibility("default"))) int MedianPwrIndx(void) {
    ALOGD("MedianPwrIndx() called");
    return 0;
}

/* Demangled: aec_clipping */
extern "C" __attribute__((visibility("default"))) int aec_clipping(void) {
    ALOGD("aec_clipping() called");
    return 0;
}

/* Demangled: whistle_add */
extern "C" __attribute__((visibility("default"))) int whistle_add(void) {
    ALOGD("whistle_add() called");
    return 0;
}

/* Demangled: cb_OLA */
extern "C" __attribute__((visibility("default"))) int cb_OLA(void) {
    ALOGD("cb_OLA() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2 */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2(void) {
    ALOGD("DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd2() called");
    return 0;
}

/* Demangled: IIR_64 */
extern "C" __attribute__((visibility("default"))) int IIR_64(void) {
    ALOGD("IIR_64() called");
    return 0;
}

/* Demangled: lookLog10Table */
extern "C" __attribute__((visibility("default"))) int lookLog10Table(void) {
    ALOGD("lookLog10Table() called");
    return 0;
}

/* Demangled: cb_calc_speech_presence_prob */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_presence_prob(void) {
    ALOGD("cb_calc_speech_presence_prob() called");
    return 0;
}

/* Demangled: ENH_API_Get_FFT_AES_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_FFT_AES_Memory(void) {
    ALOGD("ENH_API_Get_FFT_AES_Memory() called");
    return 0;
}

/* Demangled: DMNR_convert_SF_delay */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_SF_delay(void) {
    ALOGD("DMNR_convert_SF_delay() called");
    return 0;
}

/* Demangled: IIR_64_Halfband */
extern "C" __attribute__((visibility("default"))) int IIR_64_Halfband(void) {
    ALOGD("IIR_64_Halfband() called");
    return 0;
}

/* Demangled: ENH_API_Reset_NR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_NR(void) {
    ALOGD("ENH_API_Reset_NR() called");
    return 0;
}

/* Demangled: ENH_Mute_Begin_UL_24BIT */
extern "C" __attribute__((visibility("default"))) int ENH_Mute_Begin_UL_24BIT(void) {
    ALOGD("ENH_Mute_Begin_UL_24BIT() called");
    return 0;
}

/* Demangled: delay_signal */
extern "C" __attribute__((visibility("default"))) int delay_signal(void) {
    ALOGD("delay_signal() called");
    return 0;
}

/* Exported Object: dctcos_NB_ABF */
extern "C" __attribute__((visibility("default"))) void* dctcos_NB_ABF = NULL;

/* Demangled: cb_HR_NL_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_NL_spk(void) {
    ALOGD("cb_HR_NL_spk() called");
    return 0;
}

/* Demangled: DMNR_mic1_mic2_difference_VAD */
extern "C" __attribute__((visibility("default"))) int DMNR_mic1_mic2_difference_VAD(void) {
    ALOGD("DMNR_mic1_mic2_difference_VAD() called");
    return 0;
}

/* Demangled: ABM_process */
extern "C" __attribute__((visibility("default"))) int ABM_process(void) {
    ALOGD("ABM_process() called");
    return 0;
}

/* Demangled: LSPK_DT_improv_EPC_inst */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improv_EPC_inst(void) {
    ALOGD("LSPK_DT_improv_EPC_inst() called");
    return 0;
}

/* Demangled: NR_PostProcessing_48K_Q23 */
extern "C" __attribute__((visibility("default"))) int NR_PostProcessing_48K_Q23(void) {
    ALOGD("NR_PostProcessing_48K_Q23() called");
    return 0;
}

/* Demangled: ENH_API_Run_Graphical_UI_DRC_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Graphical_UI_DRC_48K(void) {
    ALOGD("ENH_API_Run_Graphical_UI_DRC_48K() called");
    return 0;
}

/* Demangled: update_nlms_pwr */
extern "C" __attribute__((visibility("default"))) int update_nlms_pwr(void) {
    ALOGD("update_nlms_pwr() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_B_A_thd_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_B_A_thd_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_B_A_thd_SPK() called");
    return 0;
}

/* Demangled: Estimate_NonStationaryNoise */
extern "C" __attribute__((visibility("default"))) int Estimate_NonStationaryNoise(void) {
    ALOGD("Estimate_NonStationaryNoise() called");
    return 0;
}

/* Demangled: MBPL_FB_Gain_Apply */
extern "C" __attribute__((visibility("default"))) int MBPL_FB_Gain_Apply(void) {
    ALOGD("MBPL_FB_Gain_Apply() called");
    return 0;
}

/* Exported Object: DRC_gain_smoothing */
extern "C" __attribute__((visibility("default"))) void* DRC_gain_smoothing = NULL;

/* Demangled: ENH_API_Run_Compressor_48K_Front */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Compressor_48K_Front(void) {
    ALOGD("ENH_API_Run_Compressor_48K_Front() called");
    return 0;
}

/* Demangled: NDC_app_sqrt */
extern "C" __attribute__((visibility("default"))) int NDC_app_sqrt(void) {
    ALOGD("NDC_app_sqrt() called");
    return 0;
}

/* Demangled: init_Mic_selection_parms_spk */
extern "C" __attribute__((visibility("default"))) int init_Mic_selection_parms_spk(void) {
    ALOGD("init_Mic_selection_parms_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_speed_thd_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_speed_thd_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_speed_thd_SPK() called");
    return 0;
}

/* Exported Object: sb_pwr_bias_additional_shadow_st */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_additional_shadow_st = NULL;

/* Demangled: cb_postfiltering_calc_noise_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_noise_spk(void) {
    ALOGD("cb_postfiltering_calc_noise_spk() called");
    return 0;
}

/* Demangled: reset_power_difference_struct */
extern "C" __attribute__((visibility("default"))) int reset_power_difference_struct(void) {
    ALOGD("reset_power_difference_struct() called");
    return 0;
}

/* Exported Object: Bin2OB_band_idx */
extern "C" __attribute__((visibility("default"))) void* Bin2OB_band_idx = NULL;

/* Demangled: cb_postfiltering_calc_SFR_flag */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_SFR_flag(void) {
    ALOGD("cb_postfiltering_calc_SFR_flag() called");
    return 0;
}

/* Exported Object: num_taps_abf */
extern "C" __attribute__((visibility("default"))) void* num_taps_abf = NULL;

/* Demangled: wide_angle_caldata_selection */
extern "C" __attribute__((visibility("default"))) int wide_angle_caldata_selection(void) {
    ALOGD("wide_angle_caldata_selection() called");
    return 0;
}

/* Demangled: AGCGainEst */
extern "C" __attribute__((visibility("default"))) int AGCGainEst(void) {
    ALOGD("AGCGainEst() called");
    return 0;
}

/* Demangled: cb_HR_pitch_boost */
extern "C" __attribute__((visibility("default"))) int cb_HR_pitch_boost(void) {
    ALOGD("cb_HR_pitch_boost() called");
    return 0;
}

/* Demangled: ENH_API_Get_Compressor_48K_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_Compressor_48K_Memory(void) {
    ALOGD("ENH_API_Get_Compressor_48K_Memory() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd_HB_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd_HB_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd_HB_SPK() called");
    return 0;
}

/* Demangled: MR_channel_syn_flush_buffered_output */
extern "C" __attribute__((visibility("default"))) int MR_channel_syn_flush_buffered_output(void) {
    ALOGD("MR_channel_syn_flush_buffered_output() called");
    return 0;
}

/* Demangled: WB_NR_pre_emphasis */
extern "C" __attribute__((visibility("default"))) int WB_NR_pre_emphasis(void) {
    ALOGD("WB_NR_pre_emphasis() called");
    return 0;
}

/* Exported Object: sb_shadow_stepsize_normal */
extern "C" __attribute__((visibility("default"))) void* sb_shadow_stepsize_normal = NULL;

/* Demangled: ASIE_convert_safeGainLevel */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_safeGainLevel(void) {
    ALOGD("ASIE_convert_safeGainLevel() called");
    return 0;
}

/* Demangled: cb_OLA_spk */
extern "C" __attribute__((visibility("default"))) int cb_OLA_spk(void) {
    ALOGD("cb_OLA_spk() called");
    return 0;
}

/* Demangled: reset_cb_postfiltering_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_postfiltering_spk(void) {
    ALOGD("reset_cb_postfiltering_spk() called");
    return 0;
}

/* Exported Object: static_test_ENh_info_size */
extern "C" __attribute__((visibility("default"))) void* static_test_ENh_info_size = NULL;

/* Exported Object: power_limit_xd2 */
extern "C" __attribute__((visibility("default"))) void* power_limit_xd2 = NULL;

/* Demangled: Estimate_Echo_by_tcl */
extern "C" __attribute__((visibility("default"))) int Estimate_Echo_by_tcl(void) {
    ALOGD("Estimate_Echo_by_tcl() called");
    return 0;
}

/* Demangled: cb_single_mic_detect_TMOS_spk */
extern "C" __attribute__((visibility("default"))) int cb_single_mic_detect_TMOS_spk(void) {
    ALOGD("cb_single_mic_detect_TMOS_spk() called");
    return 0;
}

/* Demangled: NR_UAD */
extern "C" __attribute__((visibility("default"))) int NR_UAD(void) {
    ALOGD("NR_UAD() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_Stereo */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Stereo(void) {
    ALOGD("Graphical_UI_DRC_Stereo() called");
    return 0;
}

/* Demangled: UlMusicDet_Init */
extern "C" __attribute__((visibility("default"))) int UlMusicDet_Init(void) {
    ALOGD("UlMusicDet_Init() called");
    return 0;
}

/* Demangled: GDRC_DL_Reset */
extern "C" __attribute__((visibility("default"))) int GDRC_DL_Reset(void) {
    ALOGD("GDRC_DL_Reset() called");
    return 0;
}

/* Demangled: LSPK_DT_improv_EPC_st */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improv_EPC_st(void) {
    ALOGD("LSPK_DT_improv_EPC_st() called");
    return 0;
}

/* Demangled: CB_FFT */
extern "C" __attribute__((visibility("default"))) int CB_FFT(void) {
    ALOGD("CB_FFT() called");
    return 0;
}

/* Demangled: cb_update_SN_energy */
extern "C" __attribute__((visibility("default"))) int cb_update_SN_energy(void) {
    ALOGD("cb_update_SN_energy() called");
    return 0;
}

/* Demangled: calc_envelop_Cmplx32_spk */
extern "C" __attribute__((visibility("default"))) int calc_envelop_Cmplx32_spk(void) {
    ALOGD("calc_envelop_Cmplx32_spk() called");
    return 0;
}

/* Demangled: DL_DRC */
extern "C" __attribute__((visibility("default"))) int DL_DRC(void) {
    ALOGD("DL_DRC() called");
    return 0;
}

/* Demangled: Get_LowShelf_Coef */
extern "C" __attribute__((visibility("default"))) int Get_LowShelf_Coef(void) {
    ALOGD("Get_LowShelf_Coef() called");
    return 0;
}

/* Exported Object: VAD_TH_Table */
extern "C" __attribute__((visibility("default"))) void* VAD_TH_Table = NULL;

/* Demangled: cb_postfiltering_with_uncertainty_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_with_uncertainty_spk(void) {
    ALOGD("cb_postfiltering_with_uncertainty_spk() called");
    return 0;
}

/* Demangled: start_EPL_logger_DL */
extern "C" __attribute__((visibility("default"))) int start_EPL_logger_DL(void) {
    ALOGD("start_EPL_logger_DL() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_power_thd_FB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_power_thd_FB(void) {
    ALOGD("DMNR_convert_Mic_selection_power_thd_FB() called");
    return 0;
}

/* Demangled: init_SF_parms_spk */
extern "C" __attribute__((visibility("default"))) int init_SF_parms_spk(void) {
    ALOGD("init_SF_parms_spk() called");
    return 0;
}

/* Demangled: ENH_API_Set_ul_mute */
extern "C" __attribute__((visibility("default"))) int ENH_API_Set_ul_mute(void) {
    ALOGD("ENH_API_Set_ul_mute() called");
    return 0;
}

/* Demangled: calibrateNoiseLevel_preGain */
extern "C" __attribute__((visibility("default"))) int calibrateNoiseLevel_preGain(void) {
    ALOGD("calibrateNoiseLevel_preGain() called");
    return 0;
}

/* Demangled: cb_calc_speech_absence_prob_MCRA */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_MCRA(void) {
    ALOGD("cb_calc_speech_absence_prob_MCRA() called");
    return 0;
}

/* Demangled: reset_cb_hr_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_hr_spk(void) {
    ALOGD("reset_cb_hr_spk() called");
    return 0;
}

/* Demangled: ENH_API_Free_Compressor_48K */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_Compressor_48K(void) {
    ALOGD("ENH_API_Free_Compressor_48K() called");
    return 0;
}

/* Demangled: DL_DRC_Exp_Gain_Target */
extern "C" __attribute__((visibility("default"))) int DL_DRC_Exp_Gain_Target(void) {
    ALOGD("DL_DRC_Exp_Gain_Target() called");
    return 0;
}

/* Demangled: ENH_API_Reset */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset(void) {
    ALOGD("ENH_API_Reset() called");
    return 0;
}

/* Demangled: Estimate_Echo_update */
extern "C" __attribute__((visibility("default"))) int Estimate_Echo_update(void) {
    ALOGD("Estimate_Echo_update() called");
    return 0;
}

/* Demangled: getSpecImportantPeak */
extern "C" __attribute__((visibility("default"))) int getSpecImportantPeak(void) {
    ALOGD("getSpecImportantPeak() called");
    return 0;
}

/* Demangled: ENH_API_Run_Low_Latency_24BIT */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Low_Latency_24BIT(void) {
    ALOGD("ENH_API_Run_Low_Latency_24BIT() called");
    return 0;
}

/* Demangled: nonlinear_echo_est */
extern "C" __attribute__((visibility("default"))) int nonlinear_echo_est(void) {
    ALOGD("nonlinear_echo_est() called");
    return 0;
}

/* Demangled: NDC_Signal_Level_Calibration_48k */
extern "C" __attribute__((visibility("default"))) int NDC_Signal_Level_Calibration_48k(void) {
    ALOGD("NDC_Signal_Level_Calibration_48k() called");
    return 0;
}

/* Exported Object: NR_48K_STE_RESPONSE */
extern "C" __attribute__((visibility("default"))) void* NR_48K_STE_RESPONSE = NULL;

/* Demangled: ENH_API_Reset_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_ES(void) {
    ALOGD("ENH_API_Reset_ES() called");
    return 0;
}

/* Demangled: Fixed_ThermalNoise */
extern "C" __attribute__((visibility("default"))) int Fixed_ThermalNoise(void) {
    ALOGD("Fixed_ThermalNoise() called");
    return 0;
}

/* Demangled: NDC_Smooth */
extern "C" __attribute__((visibility("default"))) int NDC_Smooth(void) {
    ALOGD("NDC_Smooth() called");
    return 0;
}

/* Demangled: init_Mic2_blocking_parms */
extern "C" __attribute__((visibility("default"))) int init_Mic2_blocking_parms(void) {
    ALOGD("init_Mic2_blocking_parms() called");
    return 0;
}

/* Demangled: nlms_update */
extern "C" __attribute__((visibility("default"))) int nlms_update(void) {
    ALOGD("nlms_update() called");
    return 0;
}

/* Demangled: ENH_API_update_AGC_GAIN */
extern "C" __attribute__((visibility("default"))) int ENH_API_update_AGC_GAIN(void) {
    ALOGD("ENH_API_update_AGC_GAIN() called");
    return 0;
}

/* Demangled: init_vad_sb */
extern "C" __attribute__((visibility("default"))) int init_vad_sb(void) {
    ALOGD("init_vad_sb() called");
    return 0;
}

/* Demangled: init_cb_GCC */
extern "C" __attribute__((visibility("default"))) int init_cb_GCC(void) {
    ALOGD("init_cb_GCC() called");
    return 0;
}

/* Demangled: ENH_API_Set_ul_enhance */
extern "C" __attribute__((visibility("default"))) int ENH_API_Set_ul_enhance(void) {
    ALOGD("ENH_API_Set_ul_enhance() called");
    return 0;
}

/* Demangled: ENH_API_Free_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Free_AEC(void) {
    ALOGD("ENH_API_Free_AEC() called");
    return 0;
}

/* Demangled: CB_convert_CB_FSH_GAIN_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_CB_FSH_GAIN_THD(void) {
    ALOGD("CB_convert_CB_FSH_GAIN_THD() called");
    return 0;
}

/* Demangled: NR_ToneDetection */
extern "C" __attribute__((visibility("default"))) int NR_ToneDetection(void) {
    ALOGD("NR_ToneDetection() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_16k_set1 = NULL;

/* Demangled: end_EPL_logger */
extern "C" __attribute__((visibility("default"))) int end_EPL_logger(void) {
    ALOGD("end_EPL_logger() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC(void) {
    ALOGD("Graphical_UI_DRC() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_16k_set2 = NULL;

/* Demangled: ENH_API_Set_dl_mute */
extern "C" __attribute__((visibility("default"))) int ENH_API_Set_dl_mute(void) {
    ALOGD("ENH_API_Set_dl_mute() called");
    return 0;
}

/* Demangled: FIR_Q15 */
extern "C" __attribute__((visibility("default"))) int FIR_Q15(void) {
    ALOGD("FIR_Q15() called");
    return 0;
}

/* Demangled: init_vad_fe_HB */
extern "C" __attribute__((visibility("default"))) int init_vad_fe_HB(void) {
    ALOGD("init_vad_fe_HB() called");
    return 0;
}

/* Demangled: cb_waek_ES */
extern "C" __attribute__((visibility("default"))) int cb_waek_ES(void) {
    ALOGD("cb_waek_ES() called");
    return 0;
}

/* Demangled: cb_analysis_spk */
extern "C" __attribute__((visibility("default"))) int cb_analysis_spk(void) {
    ALOGD("cb_analysis_spk() called");
    return 0;
}

/* Exported Object: UL_IIR_coef_16k_set3 */
extern "C" __attribute__((visibility("default"))) void* UL_IIR_coef_16k_set3 = NULL;

/* Demangled: Rad4fft256_test32 */
extern "C" __attribute__((visibility("default"))) int Rad4fft256_test32(void) {
    ALOGD("Rad4fft256_test32() called");
    return 0;
}

/* Exported Object: STE_Richen_Side_A_t */
extern "C" __attribute__((visibility("default"))) void* STE_Richen_Side_A_t = NULL;

/* Demangled: debug_dump_array_Cmplx32 */
extern "C" __attribute__((visibility("default"))) int debug_dump_array_Cmplx32(void) {
    ALOGD("debug_dump_array_Cmplx32() called");
    return 0;
}

/* Exported Object: Gain_AR_Rate_48 */
extern "C" __attribute__((visibility("default"))) void* Gain_AR_Rate_48 = NULL;

/* Demangled: ENH_API_Init_FE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_FE(void) {
    ALOGD("ENH_API_Init_FE() called");
    return 0;
}

/* Demangled: NR_Com_Init */
extern "C" __attribute__((visibility("default"))) int NR_Com_Init(void) {
    ALOGD("NR_Com_Init() called");
    return 0;
}

/* Demangled: CB_convert_es_under_estimate_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_es_under_estimate_THD(void) {
    ALOGD("CB_convert_es_under_estimate_THD() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_48K */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_48K(void) {
    ALOGD("Graphical_UI_DRC_48K() called");
    return 0;
}

/* Demangled: abf_init_spk */
extern "C" __attribute__((visibility("default"))) int abf_init_spk(void) {
    ALOGD("abf_init_spk() called");
    return 0;
}

/* Demangled: ENH_API_Reset_whistle_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_whistle_AEC(void) {
    ALOGD("ENH_API_Reset_whistle_AEC() called");
    return 0;
}

/* Demangled: UL_Bounder */
extern "C" __attribute__((visibility("default"))) int UL_Bounder(void) {
    ALOGD("UL_Bounder() called");
    return 0;
}

/* Demangled: Set_TNR_Bound */
extern "C" __attribute__((visibility("default"))) int Set_TNR_Bound(void) {
    ALOGD("Set_TNR_Bound() called");
    return 0;
}

/* Exported Object: MMD_level_table */
extern "C" __attribute__((visibility("default"))) void* MMD_level_table = NULL;

/* Demangled: ENH_API_Init_whistle_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_whistle_AEC(void) {
    ALOGD("ENH_API_Init_whistle_AEC() called");
    return 0;
}

/* Demangled: CB_convert_CB_DT_count_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_CB_DT_count_THD(void) {
    ALOGD("CB_convert_CB_DT_count_THD() called");
    return 0;
}

/* Demangled: CB_convert_TMOS_POWER_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_TMOS_POWER_THD(void) {
    ALOGD("CB_convert_TMOS_POWER_THD() called");
    return 0;
}

/* Demangled: get_power_difference_VAD */
extern "C" __attribute__((visibility("default"))) int get_power_difference_VAD(void) {
    ALOGD("get_power_difference_VAD() called");
    return 0;
}

/* Demangled: SRC_upsample_x2 */
extern "C" __attribute__((visibility("default"))) int SRC_upsample_x2(void) {
    ALOGD("SRC_upsample_x2() called");
    return 0;
}

/* Demangled: EC_protect_gain_bound_value */
extern "C" __attribute__((visibility("default"))) int EC_protect_gain_bound_value(void) {
    ALOGD("EC_protect_gain_bound_value() called");
    return 0;
}

/* Demangled: debug_dump_array_Word16 */
extern "C" __attribute__((visibility("default"))) int debug_dump_array_Word16(void) {
    ALOGD("debug_dump_array_Word16() called");
    return 0;
}

/* Demangled: free_NDC_memory */
extern "C" __attribute__((visibility("default"))) int free_NDC_memory(void) {
    ALOGD("free_NDC_memory() called");
    return 0;
}

/* Demangled: calc_SNR_spk */
extern "C" __attribute__((visibility("default"))) int calc_SNR_spk(void) {
    ALOGD("calc_SNR_spk() called");
    return 0;
}

/* Demangled: RFFT_1024_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_1024_Q31(void) {
    ALOGD("RFFT_1024_Q31() called");
    return 0;
}

/* Demangled: IIR_struct_init */
extern "C" __attribute__((visibility("default"))) int IIR_struct_init(void) {
    ALOGD("IIR_struct_init() called");
    return 0;
}

/* Demangled: Tunable_IIR_struct_init */
extern "C" __attribute__((visibility("default"))) int Tunable_IIR_struct_init(void) {
    ALOGD("Tunable_IIR_struct_init() called");
    return 0;
}

/* Demangled: Radix4BflyFast */
extern "C" __attribute__((visibility("default"))) int Radix4BflyFast(void) {
    ALOGD("Radix4BflyFast() called");
    return 0;
}

/* Demangled: aec_delay_compensate */
extern "C" __attribute__((visibility("default"))) int aec_delay_compensate(void) {
    ALOGD("aec_delay_compensate() called");
    return 0;
}

/* Exported Object: MBDRC_Pores */
extern "C" __attribute__((visibility("default"))) void* MBDRC_Pores = NULL;

/* Demangled: ENH_API_Get_NDC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_NDC_Memory(void) {
    ALOGD("ENH_API_Get_NDC_Memory() called");
    return 0;
}

/* Demangled: calc_SNR */
extern "C" __attribute__((visibility("default"))) int calc_SNR(void) {
    ALOGD("calc_SNR() called");
    return 0;
}

/* Demangled: cb_HR_calc_harmonic_reference */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_harmonic_reference(void) {
    ALOGD("cb_HR_calc_harmonic_reference() called");
    return 0;
}

/* Demangled: NR_SBSynthesis_48K */
extern "C" __attribute__((visibility("default"))) int NR_SBSynthesis_48K(void) {
    ALOGD("NR_SBSynthesis_48K() called");
    return 0;
}

/* Demangled: STE_2nd_IIR */
extern "C" __attribute__((visibility("default"))) int STE_2nd_IIR(void) {
    ALOGD("STE_2nd_IIR() called");
    return 0;
}

/* Demangled: cb_frequency_smoothing_Word32 */
extern "C" __attribute__((visibility("default"))) int cb_frequency_smoothing_Word32(void) {
    ALOGD("cb_frequency_smoothing_Word32() called");
    return 0;
}

/* Demangled: cb_EC_cem_spk */
extern "C" __attribute__((visibility("default"))) int cb_EC_cem_spk(void) {
    ALOGD("cb_EC_cem_spk() called");
    return 0;
}

/* Demangled: fb_ASLR_noise_esti */
extern "C" __attribute__((visibility("default"))) int fb_ASLR_noise_esti(void) {
    ALOGD("fb_ASLR_noise_esti() called");
    return 0;
}

/* Demangled: SRC_downsample */
extern "C" __attribute__((visibility("default"))) int SRC_downsample(void) {
    ALOGD("SRC_downsample() called");
    return 0;
}

/* Demangled: Fixed_sqrt_NDC */
extern "C" __attribute__((visibility("default"))) int Fixed_sqrt_NDC(void) {
    ALOGD("Fixed_sqrt_NDC() called");
    return 0;
}

/* Demangled: shl_pwr_bias_abf */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias_abf(void) {
    ALOGD("shl_pwr_bias_abf() called");
    return 0;
}

/* Exported Object: HP_IIR_coef_a2_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_a2_16k_set = NULL;

/* Exported Object: HP_IIR_coef_b1_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_b1_16k_set = NULL;

/* Demangled: ENH_API_DL_AEC2_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_DL_AEC2_Alloc(void) {
    ALOGD("ENH_API_DL_AEC2_Alloc() called");
    return 0;
}

/* Demangled: AEC_fe_sample_based_processing */
extern "C" __attribute__((visibility("default"))) int AEC_fe_sample_based_processing(void) {
    ALOGD("AEC_fe_sample_based_processing() called");
    return 0;
}

/* Demangled: ENH_API_Reset_FE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_FE(void) {
    ALOGD("ENH_API_Reset_FE() called");
    return 0;
}

/* Demangled: RFFT_512_Q31 */
extern "C" __attribute__((visibility("default"))) int RFFT_512_Q31(void) {
    ALOGD("RFFT_512_Q31() called");
    return 0;
}

/* Demangled: cb_calc_envelop_ratio_spk */
extern "C" __attribute__((visibility("default"))) int cb_calc_envelop_ratio_spk(void) {
    ALOGD("cb_calc_envelop_ratio_spk() called");
    return 0;
}

/* Demangled: update_power_difference */
extern "C" __attribute__((visibility("default"))) int update_power_difference(void) {
    ALOGD("update_power_difference() called");
    return 0;
}

/* Demangled: reset_cb_expander */
extern "C" __attribute__((visibility("default"))) int reset_cb_expander(void) {
    ALOGD("reset_cb_expander() called");
    return 0;
}

/* Demangled: Cal_mic_selection_spk */
extern "C" __attribute__((visibility("default"))) int Cal_mic_selection_spk(void) {
    ALOGD("Cal_mic_selection_spk() called");
    return 0;
}

/* Demangled: PF_convert_stationary_tracking_VAD_THD_SPK */
extern "C" __attribute__((visibility("default"))) int PF_convert_stationary_tracking_VAD_THD_SPK(void) {
    ALOGD("PF_convert_stationary_tracking_VAD_THD_SPK() called");
    return 0;
}

/* Demangled: ENH_API_Get_ul_enh_value */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_ul_enh_value(void) {
    ALOGD("ENH_API_Get_ul_enh_value() called");
    return 0;
}

/* Demangled: init_cb_expander */
extern "C" __attribute__((visibility("default"))) int init_cb_expander(void) {
    ALOGD("init_cb_expander() called");
    return 0;
}

/* Demangled: NDC_UL_Comfort_Noise */
extern "C" __attribute__((visibility("default"))) int NDC_UL_Comfort_Noise(void) {
    ALOGD("NDC_UL_Comfort_Noise() called");
    return 0;
}

/* Exported Object: HFE_FFTGain */
extern "C" __attribute__((visibility("default"))) void* HFE_FFTGain = NULL;

/* Exported Object: repeat_samples */
extern "C" __attribute__((visibility("default"))) void* repeat_samples = NULL;

/* Demangled: DRC_DL_Init */
extern "C" __attribute__((visibility("default"))) int DRC_DL_Init(void) {
    ALOGD("DRC_DL_Init() called");
    return 0;
}

/* Exported Object: NDC_Comfort_Noise_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_Comfort_Noise_Table = NULL;

/* Demangled: StereoRichen */
extern "C" __attribute__((visibility("default"))) int StereoRichen(void) {
    ALOGD("StereoRichen() called");
    return 0;
}

/* Exported Object: num_taps */
extern "C" __attribute__((visibility("default"))) void* num_taps = NULL;

/* Exported Object: pf_16_12_96 */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_96 = NULL;

/* Demangled: DMNR_convert_SingleNR_bound */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_SingleNR_bound(void) {
    ALOGD("DMNR_convert_SingleNR_bound() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_PD_thd_LB_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_PD_thd_LB_SPK(void) {
    ALOGD("DMNR_convert_Mic_selection_PD_thd_LB_SPK() called");
    return 0;
}

/* Demangled: analysis_filter */
extern "C" __attribute__((visibility("default"))) int analysis_filter(void) {
    ALOGD("analysis_filter() called");
    return 0;
}

/* Demangled: Low_Latency_D2T_GainCheck */
extern "C" __attribute__((visibility("default"))) int Low_Latency_D2T_GainCheck(void) {
    ALOGD("Low_Latency_D2T_GainCheck() called");
    return 0;
}

/* Demangled: init_cb_GCC_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_GCC_spk(void) {
    ALOGD("init_cb_GCC_spk() called");
    return 0;
}

/* Demangled: allocate_memory_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int allocate_memory_DMNR_spk(void) {
    ALOGD("allocate_memory_DMNR_spk() called");
    return 0;
}

/* Demangled: Change_ESrelated */
extern "C" __attribute__((visibility("default"))) int Change_ESrelated(void) {
    ALOGD("Change_ESrelated() called");
    return 0;
}

/* Exported Object: ES_lower_bound_table */
extern "C" __attribute__((visibility("default"))) void* ES_lower_bound_table = NULL;

/* Demangled: vad_frontend_aec */
extern "C" __attribute__((visibility("default"))) int vad_frontend_aec(void) {
    ALOGD("vad_frontend_aec() called");
    return 0;
}

/* Demangled: Cal_correlation_FrameBase */
extern "C" __attribute__((visibility("default"))) int Cal_correlation_FrameBase(void) {
    ALOGD("Cal_correlation_FrameBase() called");
    return 0;
}

/* Demangled: ABF_Integer_Delay */
extern "C" __attribute__((visibility("default"))) int ABF_Integer_Delay(void) {
    ALOGD("ABF_Integer_Delay() called");
    return 0;
}

/* Demangled: ENH_API_Reset_DMNR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_DMNR(void) {
    ALOGD("ENH_API_Reset_DMNR() called");
    return 0;
}

/* Demangled: Fixed_Divide_48K */
extern "C" __attribute__((visibility("default"))) int Fixed_Divide_48K(void) {
    ALOGD("Fixed_Divide_48K() called");
    return 0;
}

/* Demangled: debug_dump */
extern "C" __attribute__((visibility("default"))) int debug_dump(void) {
    ALOGD("debug_dump() called");
    return 0;
}

/* Demangled: ENH_API_Get_DRC_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DRC_Memory(void) {
    ALOGD("ENH_API_Get_DRC_Memory() called");
    return 0;
}

/* Demangled: ENH_API_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_Alloc(void) {
    ALOGD("ENH_API_Alloc() called");
    return 0;
}

/* Demangled: SRC_downsample_4in */
extern "C" __attribute__((visibility("default"))) int SRC_downsample_4in(void) {
    ALOGD("SRC_downsample_4in() called");
    return 0;
}

/* Demangled: Normal_flt_process_whistle */
extern "C" __attribute__((visibility("default"))) int Normal_flt_process_whistle(void) {
    ALOGD("Normal_flt_process_whistle() called");
    return 0;
}

/* Demangled: cb_calc_speech_absence_prob_PD */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_PD(void) {
    ALOGD("cb_calc_speech_absence_prob_PD() called");
    return 0;
}

/* Demangled: db_mdb2 */
extern "C" __attribute__((visibility("default"))) int db_mdb2(void) {
    ALOGD("db_mdb2() called");
    return 0;
}

/* Demangled: check_module_enabled */
extern "C" __attribute__((visibility("default"))) int check_module_enabled(void) {
    ALOGD("check_module_enabled() called");
    return 0;
}

/* Demangled: DL_ClarityControl_Init */
extern "C" __attribute__((visibility("default"))) int DL_ClarityControl_Init(void) {
    ALOGD("DL_ClarityControl_Init() called");
    return 0;
}

/* Demangled: VCE_convert_switch */
extern "C" __attribute__((visibility("default"))) int VCE_convert_switch(void) {
    ALOGD("VCE_convert_switch() called");
    return 0;
}

/* Demangled: free_STE_memory */
extern "C" __attribute__((visibility("default"))) int free_STE_memory(void) {
    ALOGD("free_STE_memory() called");
    return 0;
}

/* Demangled: Estimate_ERL */
extern "C" __attribute__((visibility("default"))) int Estimate_ERL(void) {
    ALOGD("Estimate_ERL() called");
    return 0;
}

/* Demangled: spectralContrastEnhancement */
extern "C" __attribute__((visibility("default"))) int spectralContrastEnhancement(void) {
    ALOGD("spectralContrastEnhancement() called");
    return 0;
}

/* Demangled: fir_48K_960pt_36tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_960pt_36tap(void) {
    ALOGD("fir_48K_960pt_36tap() called");
    return 0;
}

/* Demangled: reset_cb_energy_VAD_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_energy_VAD_spk(void) {
    ALOGD("reset_cb_energy_VAD_spk() called");
    return 0;
}

/* Demangled: Graphical_UI_DRC_Stereo_24Bit */
extern "C" __attribute__((visibility("default"))) int Graphical_UI_DRC_Stereo_24Bit(void) {
    ALOGD("Graphical_UI_DRC_Stereo_24Bit() called");
    return 0;
}

/* Demangled: DMNR_convert_PF_ABM_underest_SPK */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_PF_ABM_underest_SPK(void) {
    ALOGD("DMNR_convert_PF_ABM_underest_SPK() called");
    return 0;
}

/* Demangled: UL_FrontEnd_48k */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_48k(void) {
    ALOGD("UL_FrontEnd_48k() called");
    return 0;
}

/* Exported Object: AGC_20ms_DB2Linear_MapP */
extern "C" __attribute__((visibility("default"))) void* AGC_20ms_DB2Linear_MapP = NULL;

/* Exported Object: NDC_DG_gain_t */
extern "C" __attribute__((visibility("default"))) void* NDC_DG_gain_t = NULL;

/* Demangled: ENH_API_Get_STE_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_STE_Memory(void) {
    ALOGD("ENH_API_Get_STE_Memory() called");
    return 0;
}

/* Demangled: AES_overestimation */
extern "C" __attribute__((visibility("default"))) int AES_overestimation(void) {
    ALOGD("AES_overestimation() called");
    return 0;
}

/* Demangled: ES_EPC_process */
extern "C" __attribute__((visibility("default"))) int ES_EPC_process(void) {
    ALOGD("ES_EPC_process() called");
    return 0;
}

/* Demangled: init_cb_postfiltering_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_postfiltering_spk(void) {
    ALOGD("init_cb_postfiltering_spk() called");
    return 0;
}

/* Demangled: free_memory_DMNR */
extern "C" __attribute__((visibility("default"))) int free_memory_DMNR(void) {
    ALOGD("free_memory_DMNR() called");
    return 0;
}

/* Demangled: calc_ENH_DMNR_VAD */
extern "C" __attribute__((visibility("default"))) int calc_ENH_DMNR_VAD(void) {
    ALOGD("calc_ENH_DMNR_VAD() called");
    return 0;
}

/* Demangled: ABF_DIF_FFT */
extern "C" __attribute__((visibility("default"))) int ABF_DIF_FFT(void) {
    ALOGD("ABF_DIF_FFT() called");
    return 0;
}

/* Exported Object: DRC_gain_table */
extern "C" __attribute__((visibility("default"))) void* DRC_gain_table = NULL;

/* Demangled: reset_cb_hr */
extern "C" __attribute__((visibility("default"))) int reset_cb_hr(void) {
    ALOGD("reset_cb_hr() called");
    return 0;
}

/* Demangled: NDC_Signal_Level_Calibration */
extern "C" __attribute__((visibility("default"))) int NDC_Signal_Level_Calibration(void) {
    ALOGD("NDC_Signal_Level_Calibration() called");
    return 0;
}

/* Demangled: getSpecPeak */
extern "C" __attribute__((visibility("default"))) int getSpecPeak(void) {
    ALOGD("getSpecPeak() called");
    return 0;
}

/* Demangled: ENH_API_Run_HVAD_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_HVAD_spk(void) {
    ALOGD("ENH_API_Run_HVAD_spk() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_AES */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_AES(void) {
    ALOGD("ENH_API_CB_Alloc_AES() called");
    return 0;
}

/* Demangled: NDC_NRDRC */
extern "C" __attribute__((visibility("default"))) int NDC_NRDRC(void) {
    ALOGD("NDC_NRDRC() called");
    return 0;
}

/* Demangled: CS2LR */
extern "C" __attribute__((visibility("default"))) int CS2LR(void) {
    ALOGD("CS2LR() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_blocking_speed_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_blocking_speed_thd(void) {
    ALOGD("DMNR_convert_Mic2_blocking_speed_thd() called");
    return 0;
}

/* Exported Object: DG_gain_t */
extern "C" __attribute__((visibility("default"))) void* DG_gain_t = NULL;

/* Demangled: MBPL_Gain_Apply */
extern "C" __attribute__((visibility("default"))) int MBPL_Gain_Apply(void) {
    ALOGD("MBPL_Gain_Apply() called");
    return 0;
}

/* Demangled: ENH_API_Init_CB_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_CB_spk(void) {
    ALOGD("ENH_API_Init_CB_spk() called");
    return 0;
}

/* Demangled: cb_synthesis_spk */
extern "C" __attribute__((visibility("default"))) int cb_synthesis_spk(void) {
    ALOGD("cb_synthesis_spk() called");
    return 0;
}

/* Demangled: Set_MBDRC_Avg_Power_Thd */
extern "C" __attribute__((visibility("default"))) int Set_MBDRC_Avg_Power_Thd(void) {
    ALOGD("Set_MBDRC_Avg_Power_Thd() called");
    return 0;
}

/* Demangled: comfort_noise_generate */
extern "C" __attribute__((visibility("default"))) int comfort_noise_generate(void) {
    ALOGD("comfort_noise_generate() called");
    return 0;
}

/* Exported Object: t_shift_reg */
extern "C" __attribute__((visibility("default"))) void* t_shift_reg = NULL;

/* Demangled: cb_synthesis */
extern "C" __attribute__((visibility("default"))) int cb_synthesis(void) {
    ALOGD("cb_synthesis() called");
    return 0;
}

/* Demangled: cb_calc_speech_absence_prob_MCRA_spk */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_MCRA_spk(void) {
    ALOGD("cb_calc_speech_absence_prob_MCRA_spk() called");
    return 0;
}

/* Exported Object: ABF_FFT_Sin */
extern "C" __attribute__((visibility("default"))) void* ABF_FFT_Sin = NULL;

/* Demangled: DRC_DL_Reset */
extern "C" __attribute__((visibility("default"))) int DRC_DL_Reset(void) {
    ALOGD("DRC_DL_Reset() called");
    return 0;
}

/* Demangled: Set_RX_expander_attack_rate_level */
extern "C" __attribute__((visibility("default"))) int Set_RX_expander_attack_rate_level(void) {
    ALOGD("Set_RX_expander_attack_rate_level() called");
    return 0;
}

/* Demangled: ar1_filter_1_32 */
extern "C" __attribute__((visibility("default"))) int ar1_filter_1_32(void) {
    ALOGD("ar1_filter_1_32() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize_2 */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_2 = NULL;

/* Demangled: get_comb_filter_coeff */
extern "C" __attribute__((visibility("default"))) int get_comb_filter_coeff(void) {
    ALOGD("get_comb_filter_coeff() called");
    return 0;
}

/* Demangled: CB_convert_es_under_estimate_range */
extern "C" __attribute__((visibility("default"))) int CB_convert_es_under_estimate_range(void) {
    ALOGD("CB_convert_es_under_estimate_range() called");
    return 0;
}

/* Demangled: ENH_API_GetSWGain */
extern "C" __attribute__((visibility("default"))) int ENH_API_GetSWGain(void) {
    ALOGD("ENH_API_GetSWGain() called");
    return 0;
}

/* Demangled: AEC_clip_value */
extern "C" __attribute__((visibility("default"))) int AEC_clip_value(void) {
    ALOGD("AEC_clip_value() called");
    return 0;
}

/* Demangled: cb_apply_gain_buffer_AEC */
extern "C" __attribute__((visibility("default"))) int cb_apply_gain_buffer_AEC(void) {
    ALOGD("cb_apply_gain_buffer_AEC() called");
    return 0;
}

/* Demangled: update_cb_struct_spk */
extern "C" __attribute__((visibility("default"))) int update_cb_struct_spk(void) {
    ALOGD("update_cb_struct_spk() called");
    return 0;
}

/* Demangled: Expender */
extern "C" __attribute__((visibility("default"))) int Expender(void) {
    ALOGD("Expender() called");
    return 0;
}

/* Demangled: WB_NR_SuppressGainApply */
extern "C" __attribute__((visibility("default"))) int WB_NR_SuppressGainApply(void) {
    ALOGD("WB_NR_SuppressGainApply() called");
    return 0;
}

/* Demangled: ENH_API_Init_DL_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DL_AEC(void) {
    ALOGD("ENH_API_Init_DL_AEC() called");
    return 0;
}

/* Demangled: getSII */
extern "C" __attribute__((visibility("default"))) int getSII(void) {
    ALOGD("getSII() called");
    return 0;
}

/* Exported Object: asdwRealCoefAQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwRealCoefAQ31 = NULL;

/* Exported Object: sb_shadow_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_shadow_stepsize = NULL;

/* Demangled: DMNR_convert_SF_max_band */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_SF_max_band(void) {
    ALOGD("DMNR_convert_SF_max_band() called");
    return 0;
}

/* Demangled: binarySearch_fract16 */
extern "C" __attribute__((visibility("default"))) int binarySearch_fract16(void) {
    ALOGD("binarySearch_fract16() called");
    return 0;
}

/* Demangled: init_nlms_struct */
extern "C" __attribute__((visibility("default"))) int init_nlms_struct(void) {
    ALOGD("init_nlms_struct() called");
    return 0;
}

/* Demangled: ENH_API_Init_SCH */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_SCH(void) {
    ALOGD("ENH_API_Init_SCH() called");
    return 0;
}

/* Exported Object: sb_additional_shadow_stepsize_st */
extern "C" __attribute__((visibility("default"))) void* sb_additional_shadow_stepsize_st = NULL;

/* Demangled: CB_convert_N_Power_smooth_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_N_Power_smooth_THD(void) {
    ALOGD("CB_convert_N_Power_smooth_THD() called");
    return 0;
}

/* Demangled: cb_frequency_smoothing_Word32_spk */
extern "C" __attribute__((visibility("default"))) int cb_frequency_smoothing_Word32_spk(void) {
    ALOGD("cb_frequency_smoothing_Word32_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_selection_PowerB_HB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_selection_PowerB_HB(void) {
    ALOGD("DMNR_convert_Mic2_selection_PowerB_HB() called");
    return 0;
}

/* Demangled: ENH_API_Update_STE */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_STE(void) {
    ALOGD("ENH_API_Update_STE() called");
    return 0;
}

/* Demangled: SRC_downsample_x2 */
extern "C" __attribute__((visibility("default"))) int SRC_downsample_x2(void) {
    ALOGD("SRC_downsample_x2() called");
    return 0;
}

/* Demangled: ENH_API_Reset_AEC2 */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_AEC2(void) {
    ALOGD("ENH_API_Reset_AEC2() called");
    return 0;
}

/* Exported Object: LPF_FFTGain */
extern "C" __attribute__((visibility("default"))) void* LPF_FFTGain = NULL;

/* Demangled: update_cb_hr */
extern "C" __attribute__((visibility("default"))) int update_cb_hr(void) {
    ALOGD("update_cb_hr() called");
    return 0;
}

/* Demangled: init_cb_hr_common_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_hr_common_ctrl_spk(void) {
    ALOGD("init_cb_hr_common_ctrl_spk() called");
    return 0;
}

/* Exported Object: MBDRC_Gain_T2D_Index */
extern "C" __attribute__((visibility("default"))) void* MBDRC_Gain_T2D_Index = NULL;

/* Demangled: WB_NR_UAD */
extern "C" __attribute__((visibility("default"))) int WB_NR_UAD(void) {
    ALOGD("WB_NR_UAD() called");
    return 0;
}

/* Demangled: Pre_nlms_dl */
extern "C" __attribute__((visibility("default"))) int Pre_nlms_dl(void) {
    ALOGD("Pre_nlms_dl() called");
    return 0;
}

/* Demangled: debug_mkdir */
extern "C" __attribute__((visibility("default"))) int debug_mkdir(void) {
    ALOGD("debug_mkdir() called");
    return 0;
}

/* Demangled: AGC_Reverse_Gain_Compensation */
extern "C" __attribute__((visibility("default"))) int AGC_Reverse_Gain_Compensation(void) {
    ALOGD("AGC_Reverse_Gain_Compensation() called");
    return 0;
}

/* Exported Object: subframe_num */
extern "C" __attribute__((visibility("default"))) void* subframe_num = NULL;

/* Demangled: shl_pwr_bias */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias(void) {
    ALOGD("shl_pwr_bias() called");
    return 0;
}

/* Demangled: reset_fft_es_data_struct */
extern "C" __attribute__((visibility("default"))) int reset_fft_es_data_struct(void) {
    ALOGD("reset_fft_es_data_struct() called");
    return 0;
}

/* Exported Object: band0pb_cos_table */
extern "C" __attribute__((visibility("default"))) void* band0pb_cos_table = NULL;

/* Demangled: WB_NR_Subband_VAD */
extern "C" __attribute__((visibility("default"))) int WB_NR_Subband_VAD(void) {
    ALOGD("WB_NR_Subband_VAD() called");
    return 0;
}

/* Exported Object: phasor_re_NOR */
extern "C" __attribute__((visibility("default"))) void* phasor_re_NOR = NULL;

/* Demangled: LLR_test_12dB */
extern "C" __attribute__((visibility("default"))) int LLR_test_12dB(void) {
    ALOGD("LLR_test_12dB() called");
    return 0;
}

/* Demangled: AGC_Limiter_changerate */
extern "C" __attribute__((visibility("default"))) int AGC_Limiter_changerate(void) {
    ALOGD("AGC_Limiter_changerate() called");
    return 0;
}

/* Demangled: WB_NR_Music_Detection */
extern "C" __attribute__((visibility("default"))) int WB_NR_Music_Detection(void) {
    ALOGD("WB_NR_Music_Detection() called");
    return 0;
}

/* Demangled: update_MCRA_prob */
extern "C" __attribute__((visibility("default"))) int update_MCRA_prob(void) {
    ALOGD("update_MCRA_prob() called");
    return 0;
}

/* Demangled: ENH_API_CB_Get_FFT_ES_Data */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Get_FFT_ES_Data(void) {
    ALOGD("ENH_API_CB_Get_FFT_ES_Data() called");
    return 0;
}

/* Demangled: cb_HR_calc_clean_envelop_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_calc_clean_envelop_spk(void) {
    ALOGD("cb_HR_calc_clean_envelop_spk() called");
    return 0;
}

/* Demangled: ntd_update_output_type */
extern "C" __attribute__((visibility("default"))) int ntd_update_output_type(void) {
    ALOGD("ntd_update_output_type() called");
    return 0;
}

/* Exported Object: phasor_re */
extern "C" __attribute__((visibility("default"))) void* phasor_re = NULL;

/* Demangled: cb_postfiltering_apply_gain */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_apply_gain(void) {
    ALOGD("cb_postfiltering_apply_gain() called");
    return 0;
}

/* Demangled: Maximum_Statistics */
extern "C" __attribute__((visibility("default"))) int Maximum_Statistics(void) {
    ALOGD("Maximum_Statistics() called");
    return 0;
}

/* Demangled: Radix4FirstStage */
extern "C" __attribute__((visibility("default"))) int Radix4FirstStage(void) {
    ALOGD("Radix4FirstStage() called");
    return 0;
}

/* Demangled: Convert_MagiClarityThd1Inx */
extern "C" __attribute__((visibility("default"))) int Convert_MagiClarityThd1Inx(void) {
    ALOGD("Convert_MagiClarityThd1Inx() called");
    return 0;
}

/* Demangled: cb_HR_set_runtime_parameters */
extern "C" __attribute__((visibility("default"))) int cb_HR_set_runtime_parameters(void) {
    ALOGD("cb_HR_set_runtime_parameters() called");
    return 0;
}

/* Demangled: LLR_test_18dB */
extern "C" __attribute__((visibility("default"))) int LLR_test_18dB(void) {
    ALOGD("LLR_test_18dB() called");
    return 0;
}

/* Demangled: calculate_band1_energy */
extern "C" __attribute__((visibility("default"))) int calculate_band1_energy(void) {
    ALOGD("calculate_band1_energy() called");
    return 0;
}

/* Demangled: Set_GDRC_TAV */
extern "C" __attribute__((visibility("default"))) int Set_GDRC_TAV(void) {
    ALOGD("Set_GDRC_TAV() called");
    return 0;
}

/* Demangled: applySpectralContrast */
extern "C" __attribute__((visibility("default"))) int applySpectralContrast(void) {
    ALOGD("applySpectralContrast() called");
    return 0;
}

/* Demangled: reset_cb_data */
extern "C" __attribute__((visibility("default"))) int reset_cb_data(void) {
    ALOGD("reset_cb_data() called");
    return 0;
}

/* Demangled: SearchEnvelope_frontend */
extern "C" __attribute__((visibility("default"))) int SearchEnvelope_frontend(void) {
    ALOGD("SearchEnvelope_frontend() called");
    return 0;
}

/* Demangled: delay_observe_band_13_2 */
extern "C" __attribute__((visibility("default"))) int delay_observe_band_13_2(void) {
    ALOGD("delay_observe_band_13_2() called");
    return 0;
}

/* Demangled: ASIE_convert_isLoudNoiseThd */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_isLoudNoiseThd(void) {
    ALOGD("ASIE_convert_isLoudNoiseThd() called");
    return 0;
}

/* Demangled: filterByEnvelop */
extern "C" __attribute__((visibility("default"))) int filterByEnvelop(void) {
    ALOGD("filterByEnvelop() called");
    return 0;
}

/* Demangled: shl_pwr_bias_abf_spk */
extern "C" __attribute__((visibility("default"))) int shl_pwr_bias_abf_spk(void) {
    ALOGD("shl_pwr_bias_abf_spk() called");
    return 0;
}

/* Demangled: ENH_API_whistle_MR_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_whistle_MR_Alloc(void) {
    ALOGD("ENH_API_whistle_MR_Alloc() called");
    return 0;
}

/* Exported Object: LPF */
extern "C" __attribute__((visibility("default"))) void* LPF = NULL;

/* Demangled: ULDL_GDRCControl_Reset */
extern "C" __attribute__((visibility("default"))) int ULDL_GDRCControl_Reset(void) {
    ALOGD("ULDL_GDRCControl_Reset() called");
    return 0;
}

/* Demangled: CB_FFT_REFLECT_spk */
extern "C" __attribute__((visibility("default"))) int CB_FFT_REFLECT_spk(void) {
    ALOGD("CB_FFT_REFLECT_spk() called");
    return 0;
}

/* Demangled: CB_FFT_spk */
extern "C" __attribute__((visibility("default"))) int CB_FFT_spk(void) {
    ALOGD("CB_FFT_spk() called");
    return 0;
}

/* Demangled: init_cb_fft_struct_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_fft_struct_spk(void) {
    ALOGD("init_cb_fft_struct_spk() called");
    return 0;
}

/* Demangled: init_cb_hr */
extern "C" __attribute__((visibility("default"))) int init_cb_hr(void) {
    ALOGD("init_cb_hr() called");
    return 0;
}

/* Demangled: AGC_Limiter_THD */
extern "C" __attribute__((visibility("default"))) int AGC_Limiter_THD(void) {
    ALOGD("AGC_Limiter_THD() called");
    return 0;
}

/* Exported Object: log2_1_plus_x_table */
extern "C" __attribute__((visibility("default"))) void* log2_1_plus_x_table = NULL;

/* Demangled: ENH_API_CB_Alloc_PF_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_PF_spk(void) {
    ALOGD("ENH_API_CB_Alloc_PF_spk() called");
    return 0;
}

/* Demangled: SB_LSPK_DMNR */
extern "C" __attribute__((visibility("default"))) int SB_LSPK_DMNR(void) {
    ALOGD("SB_LSPK_DMNR() called");
    return 0;
}

/* Demangled: SlowBitReverse256 */
extern "C" __attribute__((visibility("default"))) int SlowBitReverse256(void) {
    ALOGD("SlowBitReverse256() called");
    return 0;
}

/* Exported Object: BGNT_stepsize_weighting_table */
extern "C" __attribute__((visibility("default"))) void* BGNT_stepsize_weighting_table = NULL;

/* Demangled: ENH_API_Run_MR_UL */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_MR_UL(void) {
    ALOGD("ENH_API_Run_MR_UL() called");
    return 0;
}

/* Demangled: Radix2_Bfly_Inv_Q31 */
extern "C" __attribute__((visibility("default"))) int Radix2_Bfly_Inv_Q31(void) {
    ALOGD("Radix2_Bfly_Inv_Q31() called");
    return 0;
}

/* Demangled: EC_protect_ratio_value */
extern "C" __attribute__((visibility("default"))) int EC_protect_ratio_value(void) {
    ALOGD("EC_protect_ratio_value() called");
    return 0;
}

/* Demangled: ENH_API_Get_BUF_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_BUF_Memory(void) {
    ALOGD("ENH_API_Get_BUF_Memory() called");
    return 0;
}

/* Demangled: uplink_nlp */
extern "C" __attribute__((visibility("default"))) int uplink_nlp(void) {
    ALOGD("uplink_nlp() called");
    return 0;
}

/* Exported Object: pf_16_12_128_WB */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128_WB = NULL;

/* Demangled: Fe_AF */
extern "C" __attribute__((visibility("default"))) int Fe_AF(void) {
    ALOGD("Fe_AF() called");
    return 0;
}

/* Demangled: init_cb_hr_common_ctrl */
extern "C" __attribute__((visibility("default"))) int init_cb_hr_common_ctrl(void) {
    ALOGD("init_cb_hr_common_ctrl() called");
    return 0;
}

/* Demangled: ENH_API_Init_DRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_DRC(void) {
    ALOGD("ENH_API_Init_DRC() called");
    return 0;
}

/* Demangled: reverse_bit */
extern "C" __attribute__((visibility("default"))) int reverse_bit(void) {
    ALOGD("reverse_bit() called");
    return 0;
}

/* Demangled: dynamic_noise_threshold */
extern "C" __attribute__((visibility("default"))) int dynamic_noise_threshold(void) {
    ALOGD("dynamic_noise_threshold() called");
    return 0;
}

/* Demangled: init_cb_ctrl */
extern "C" __attribute__((visibility("default"))) int init_cb_ctrl(void) {
    ALOGD("init_cb_ctrl() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_gain_by_power_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_gain_by_power_spk(void) {
    ALOGD("cb_postfiltering_calc_gain_by_power_spk() called");
    return 0;
}

/* Exported Object: abf_AGC_Neg_Gain */
extern "C" __attribute__((visibility("default"))) void* abf_AGC_Neg_Gain = NULL;

/* Exported Object: Table_BounderTHD */
extern "C" __attribute__((visibility("default"))) void* Table_BounderTHD = NULL;

/* Demangled: NDC_NR_Init */
extern "C" __attribute__((visibility("default"))) int NDC_NR_Init(void) {
    ALOGD("NDC_NR_Init() called");
    return 0;
}

/* Demangled: cb_postfiltering_gain_protection */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_gain_protection(void) {
    ALOGD("cb_postfiltering_gain_protection() called");
    return 0;
}

/* Demangled: ENH_API_Init_FFT_ES */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_FFT_ES(void) {
    ALOGD("ENH_API_Init_FFT_ES() called");
    return 0;
}

/* Demangled: NR_SetAggMode */
extern "C" __attribute__((visibility("default"))) int NR_SetAggMode(void) {
    ALOGD("NR_SetAggMode() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_power_thd_HB */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_power_thd_HB(void) {
    ALOGD("DMNR_convert_Mic_selection_power_thd_HB() called");
    return 0;
}

/* Demangled: init_MMD */
extern "C" __attribute__((visibility("default"))) int init_MMD(void) {
    ALOGD("init_MMD() called");
    return 0;
}

/* Exported Object: HP_IIR_coef_a1_16k_set */
extern "C" __attribute__((visibility("default"))) void* HP_IIR_coef_a1_16k_set = NULL;

/* Exported Object: MBDRC_IIR_W0_Table */
extern "C" __attribute__((visibility("default"))) void* MBDRC_IIR_W0_Table = NULL;

/* Demangled: ENH_API_CB_Get_Data */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Get_Data(void) {
    ALOGD("ENH_API_CB_Get_Data() called");
    return 0;
}

/* Demangled: update_cb_hr_spk */
extern "C" __attribute__((visibility("default"))) int update_cb_hr_spk(void) {
    ALOGD("update_cb_hr_spk() called");
    return 0;
}

/* Demangled: cb_postfiltering_calc_stationary_noise_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_stationary_noise_spk(void) {
    ALOGD("cb_postfiltering_calc_stationary_noise_spk() called");
    return 0;
}

/* Exported Object: IIR_coef_a1_Tunable_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_Tunable_16k_set1 = NULL;

/* Exported Object: Table_HysGain */
extern "C" __attribute__((visibility("default"))) void* Table_HysGain = NULL;

/* Exported Object: asdwTwiddleCoefQ31 */
extern "C" __attribute__((visibility("default"))) void* asdwTwiddleCoefQ31 = NULL;

/* Exported Object: ABF_PF_Under_Estimation */
extern "C" __attribute__((visibility("default"))) void* ABF_PF_Under_Estimation = NULL;

/* Exported Object: IIR_coef_a1_Tunable_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_a1_Tunable_16k_set2 = NULL;

/* Demangled: GDRC_UL_Reset */
extern "C" __attribute__((visibility("default"))) int GDRC_UL_Reset(void) {
    ALOGD("GDRC_UL_Reset() called");
    return 0;
}

/* Exported Object: SRC_Coefx2 */
extern "C" __attribute__((visibility("default"))) void* SRC_Coefx2 = NULL;

/* Demangled: Shadow_process */
extern "C" __attribute__((visibility("default"))) int Shadow_process(void) {
    ALOGD("Shadow_process() called");
    return 0;
}

/* Exported Object: Table_MBPL_MinGain */
extern "C" __attribute__((visibility("default"))) void* Table_MBPL_MinGain = NULL;

/* Exported Object: sb_pwr_bias_additional_shadow */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_additional_shadow = NULL;

/* Demangled: ENH_API_RUN_UPLINK_NLP */
extern "C" __attribute__((visibility("default"))) int ENH_API_RUN_UPLINK_NLP(void) {
    ALOGD("ENH_API_RUN_UPLINK_NLP() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_Core */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_Core(void) {
    ALOGD("ENH_API_CB_Alloc_Core() called");
    return 0;
}

/* Exported Object: FFT_ESR_THD */
extern "C" __attribute__((visibility("default"))) void* FFT_ESR_THD = NULL;

/* Demangled: cb_calc_speech_absence_prob_BM_spk */
extern "C" __attribute__((visibility("default"))) int cb_calc_speech_absence_prob_BM_spk(void) {
    ALOGD("cb_calc_speech_absence_prob_BM_spk() called");
    return 0;
}

/* Demangled: boost_cepstrum */
extern "C" __attribute__((visibility("default"))) int boost_cepstrum(void) {
    ALOGD("boost_cepstrum() called");
    return 0;
}

/* Demangled: cb_apply_envelop_ratio */
extern "C" __attribute__((visibility("default"))) int cb_apply_envelop_ratio(void) {
    ALOGD("cb_apply_envelop_ratio() called");
    return 0;
}

/* Demangled: DRC2_Add_10dB */
extern "C" __attribute__((visibility("default"))) int DRC2_Add_10dB(void) {
    ALOGD("DRC2_Add_10dB() called");
    return 0;
}

/* Demangled: ENH_API_Init_whistle_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_whistle_MR(void) {
    ALOGD("ENH_API_Init_whistle_MR() called");
    return 0;
}

/* Exported Object: dctcos_2_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_2_WB = NULL;

/* Exported Object: MBDRC_IIR_cos_Table */
extern "C" __attribute__((visibility("default"))) void* MBDRC_IIR_cos_Table = NULL;

/* Demangled: NR_Fixed_sqrt */
extern "C" __attribute__((visibility("default"))) int NR_Fixed_sqrt(void) {
    ALOGD("NR_Fixed_sqrt() called");
    return 0;
}

/* Exported Object: IIR_coef_b1_Tunable_16k_set1 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_Tunable_16k_set1 = NULL;

/* Demangled: init_cb_hr_status_ctrl */
extern "C" __attribute__((visibility("default"))) int init_cb_hr_status_ctrl(void) {
    ALOGD("init_cb_hr_status_ctrl() called");
    return 0;
}

/* Demangled: cb_HR_check_enablity_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_check_enablity_spk(void) {
    ALOGD("cb_HR_check_enablity_spk() called");
    return 0;
}

/* Demangled: ENH_API_Reset_DL_MR */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_DL_MR(void) {
    ALOGD("ENH_API_Reset_DL_MR() called");
    return 0;
}

/* Exported Object: IIR_coef_b1_Tunable_16k_set2 */
extern "C" __attribute__((visibility("default"))) void* IIR_coef_b1_Tunable_16k_set2 = NULL;

/* Demangled: WB_NR_SbAnalysis */
extern "C" __attribute__((visibility("default"))) int WB_NR_SbAnalysis(void) {
    ALOGD("WB_NR_SbAnalysis() called");
    return 0;
}

/* Demangled: reset_cb_postfiltering */
extern "C" __attribute__((visibility("default"))) int reset_cb_postfiltering(void) {
    ALOGD("reset_cb_postfiltering() called");
    return 0;
}

/* Demangled: boost_cepstrum_spk */
extern "C" __attribute__((visibility("default"))) int boost_cepstrum_spk(void) {
    ALOGD("boost_cepstrum_spk() called");
    return 0;
}

/* Demangled: ENH_API_Run_Compressor_48K_Rear */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Compressor_48K_Rear(void) {
    ALOGD("ENH_API_Run_Compressor_48K_Rear() called");
    return 0;
}

/* Demangled: ENH_API_Update_DMNR_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_DMNR_spk(void) {
    ALOGD("ENH_API_Update_DMNR_spk() called");
    return 0;
}

/* Demangled: MBDRC_IIR_struct_init */
extern "C" __attribute__((visibility("default"))) int MBDRC_IIR_struct_init(void) {
    ALOGD("MBDRC_IIR_struct_init() called");
    return 0;
}

/* Demangled: ENH_API_Get_EPL_data_size */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_EPL_data_size(void) {
    ALOGD("ENH_API_Get_EPL_data_size() called");
    return 0;
}

/* Demangled: binarySearch */
extern "C" __attribute__((visibility("default"))) int binarySearch(void) {
    ALOGD("binarySearch() called");
    return 0;
}

/* Exported Object: Table_T2D_LowLatencyDRC */
extern "C" __attribute__((visibility("default"))) void* Table_T2D_LowLatencyDRC = NULL;

/* Demangled: Noise_Level_Calibration */
extern "C" __attribute__((visibility("default"))) int Noise_Level_Calibration(void) {
    ALOGD("Noise_Level_Calibration() called");
    return 0;
}

/* Demangled: WB_NR_Schedule */
extern "C" __attribute__((visibility("default"))) int WB_NR_Schedule(void) {
    ALOGD("WB_NR_Schedule() called");
    return 0;
}

/* Demangled: ENH_API_Run_Ste */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_Ste(void) {
    ALOGD("ENH_API_Run_Ste() called");
    return 0;
}

/* Demangled: MBPL_DG_VCE_Gain_Apply */
extern "C" __attribute__((visibility("default"))) int MBPL_DG_VCE_Gain_Apply(void) {
    ALOGD("MBPL_DG_VCE_Gain_Apply() called");
    return 0;
}

/* Demangled: vad_ne */
extern "C" __attribute__((visibility("default"))) int vad_ne(void) {
    ALOGD("vad_ne() called");
    return 0;
}

/* Exported Object: pf_16_12_128_NB */
extern "C" __attribute__((visibility("default"))) void* pf_16_12_128_NB = NULL;

/* Demangled: abf_reset_spk */
extern "C" __attribute__((visibility("default"))) int abf_reset_spk(void) {
    ALOGD("abf_reset_spk() called");
    return 0;
}

/* Demangled: DlMusicDet_Init */
extern "C" __attribute__((visibility("default"))) int DlMusicDet_Init(void) {
    ALOGD("DlMusicDet_Init() called");
    return 0;
}

/* Demangled: MusicHisDet */
extern "C" __attribute__((visibility("default"))) int MusicHisDet(void) {
    ALOGD("MusicHisDet() called");
    return 0;
}

/* Demangled: HGain_time_smoothing */
extern "C" __attribute__((visibility("default"))) int HGain_time_smoothing(void) {
    ALOGD("HGain_time_smoothing() called");
    return 0;
}

/* Demangled: ENH_API_FE_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_FE_Alloc(void) {
    ALOGD("ENH_API_FE_Alloc() called");
    return 0;
}

/* Demangled: DIF_FFT_Fix16 */
extern "C" __attribute__((visibility("default"))) int DIF_FFT_Fix16(void) {
    ALOGD("DIF_FFT_Fix16() called");
    return 0;
}

/* Demangled: SPLIT_RFFT_Q31 */
extern "C" __attribute__((visibility("default"))) int SPLIT_RFFT_Q31(void) {
    ALOGD("SPLIT_RFFT_Q31() called");
    return 0;
}

/* Exported Object: NDC_Cnst_Table */
extern "C" __attribute__((visibility("default"))) void* NDC_Cnst_Table = NULL;

/* Demangled: sb_whistle_aec */
extern "C" __attribute__((visibility("default"))) int sb_whistle_aec(void) {
    ALOGD("sb_whistle_aec() called");
    return 0;
}

/* Demangled: debug_dump_array_Word32 */
extern "C" __attribute__((visibility("default"))) int debug_dump_array_Word32(void) {
    ALOGD("debug_dump_array_Word32() called");
    return 0;
}

/* Demangled: init_cb_energy_VAD_spk */
extern "C" __attribute__((visibility("default"))) int init_cb_energy_VAD_spk(void) {
    ALOGD("init_cb_energy_VAD_spk() called");
    return 0;
}

/* Demangled: Fixed_Divide */
extern "C" __attribute__((visibility("default"))) int Fixed_Divide(void) {
    ALOGD("Fixed_Divide() called");
    return 0;
}

/* Demangled: cfft_radix2_bfly_neon */
extern "C" __attribute__((visibility("default"))) int cfft_radix2_bfly_neon(void) {
    ALOGD("cfft_radix2_bfly_neon() called");
    return 0;
}

/* Demangled: WB_NR_SpectrumSmoothing */
extern "C" __attribute__((visibility("default"))) int WB_NR_SpectrumSmoothing(void) {
    ALOGD("WB_NR_SpectrumSmoothing() called");
    return 0;
}

/* Demangled: Normal_flt_process_dl */
extern "C" __attribute__((visibility("default"))) int Normal_flt_process_dl(void) {
    ALOGD("Normal_flt_process_dl() called");
    return 0;
}

/* Demangled: Mic2_ES_param_To_Mic1 */
extern "C" __attribute__((visibility("default"))) int Mic2_ES_param_To_Mic1(void) {
    ALOGD("Mic2_ES_param_To_Mic1() called");
    return 0;
}

/* Demangled: NR_FixedVAD */
extern "C" __attribute__((visibility("default"))) int NR_FixedVAD(void) {
    ALOGD("NR_FixedVAD() called");
    return 0;
}

/* Exported Object: us_coef */
extern "C" __attribute__((visibility("default"))) void* us_coef = NULL;

/* Demangled: STE_1st_IIR_Stereo */
extern "C" __attribute__((visibility("default"))) int STE_1st_IIR_Stereo(void) {
    ALOGD("STE_1st_IIR_Stereo() called");
    return 0;
}

/* Demangled: cb_hVAD_calc_pwr */
extern "C" __attribute__((visibility("default"))) int cb_hVAD_calc_pwr(void) {
    ALOGD("cb_hVAD_calc_pwr() called");
    return 0;
}

/* Demangled: NR_SuppressGainEst */
extern "C" __attribute__((visibility("default"))) int NR_SuppressGainEst(void) {
    ALOGD("NR_SuppressGainEst() called");
    return 0;
}

/* Exported Object: NR_cr_lambda_n */
extern "C" __attribute__((visibility("default"))) void* NR_cr_lambda_n = NULL;

/* Demangled: ENH_API_Update_GDRC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_GDRC(void) {
    ALOGD("ENH_API_Update_GDRC() called");
    return 0;
}

/* Demangled: SET_SCH_mem_print_log */
extern "C" __attribute__((visibility("default"))) int SET_SCH_mem_print_log(void) {
    ALOGD("SET_SCH_mem_print_log() called");
    return 0;
}

/* Demangled: fir_48K_Q15 */
extern "C" __attribute__((visibility("default"))) int fir_48K_Q15(void) {
    ALOGD("fir_48K_Q15() called");
    return 0;
}

/* Exported Object: sb_pwr_bias_normal */
extern "C" __attribute__((visibility("default"))) void* sb_pwr_bias_normal = NULL;

/* Demangled: cb_postfiltering_calc_stationary_noise */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_calc_stationary_noise(void) {
    ALOGD("cb_postfiltering_calc_stationary_noise() called");
    return 0;
}

/* Demangled: RIFFT_1024_Q31 */
extern "C" __attribute__((visibility("default"))) int RIFFT_1024_Q31(void) {
    ALOGD("RIFFT_1024_Q31() called");
    return 0;
}

/* Demangled: LSPK_DT_improv_EPC_count */
extern "C" __attribute__((visibility("default"))) int LSPK_DT_improv_EPC_count(void) {
    ALOGD("LSPK_DT_improv_EPC_count() called");
    return 0;
}

/* Demangled: ENH_API_CB_Alloc_Core_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_CB_Alloc_Core_spk(void) {
    ALOGD("ENH_API_CB_Alloc_Core_spk() called");
    return 0;
}

/* Exported Object: exp_B_table */
extern "C" __attribute__((visibility("default"))) void* exp_B_table = NULL;

/* Demangled: DMNR_mic1_VAD_spk */
extern "C" __attribute__((visibility("default"))) int DMNR_mic1_VAD_spk(void) {
    ALOGD("DMNR_mic1_VAD_spk() called");
    return 0;
}

/* Demangled: MBDRC_IIR_Gain_Init */
extern "C" __attribute__((visibility("default"))) int MBDRC_IIR_Gain_Init(void) {
    ALOGD("MBDRC_IIR_Gain_Init() called");
    return 0;
}

/* Demangled: UAD_FB */
extern "C" __attribute__((visibility("default"))) int UAD_FB(void) {
    ALOGD("UAD_FB() called");
    return 0;
}

/* Demangled: Low_Latency_Standard_DRC_24BIT */
extern "C" __attribute__((visibility("default"))) int Low_Latency_Standard_DRC_24BIT(void) {
    ALOGD("Low_Latency_Standard_DRC_24BIT() called");
    return 0;
}

/* Demangled: ENH_API_AEC2_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_AEC2_Alloc(void) {
    ALOGD("ENH_API_AEC2_Alloc() called");
    return 0;
}

/* Demangled: SetABFCalData */
extern "C" __attribute__((visibility("default"))) int SetABFCalData(void) {
    ALOGD("SetABFCalData() called");
    return 0;
}

/* Demangled: memory_copy_short */
extern "C" __attribute__((visibility("default"))) int memory_copy_short(void) {
    ALOGD("memory_copy_short() called");
    return 0;
}

/* Exported Object: dctcos_2_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_2_NB = NULL;

/* Demangled: cb_HR_set_strength_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_set_strength_spk(void) {
    ALOGD("cb_HR_set_strength_spk() called");
    return 0;
}

/* Demangled: modify_stepsize_tcl_DL */
extern "C" __attribute__((visibility("default"))) int modify_stepsize_tcl_DL(void) {
    ALOGD("modify_stepsize_tcl_DL() called");
    return 0;
}

/* Demangled: cb_ES */
extern "C" __attribute__((visibility("default"))) int cb_ES(void) {
    ALOGD("cb_ES() called");
    return 0;
}

/* Demangled: reset_cb_fft_struct_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_fft_struct_spk(void) {
    ALOGD("reset_cb_fft_struct_spk() called");
    return 0;
}

/* Exported Object: ds_coef */
extern "C" __attribute__((visibility("default"))) void* ds_coef = NULL;

/* Exported Object: ds_index */
extern "C" __attribute__((visibility("default"))) void* ds_index = NULL;

/* Exported Object: abf_sb_pwr_bias_normal */
extern "C" __attribute__((visibility("default"))) void* abf_sb_pwr_bias_normal = NULL;

/* Demangled: SB_DMNR */
extern "C" __attribute__((visibility("default"))) int SB_DMNR(void) {
    ALOGD("SB_DMNR() called");
    return 0;
}

/* Demangled: IIR_64_Tunable */
extern "C" __attribute__((visibility("default"))) int IIR_64_Tunable(void) {
    ALOGD("IIR_64_Tunable() called");
    return 0;
}

/* Demangled: calc_envelop_Cmplx32 */
extern "C" __attribute__((visibility("default"))) int calc_envelop_Cmplx32(void) {
    ALOGD("calc_envelop_Cmplx32() called");
    return 0;
}

/* Demangled: set_DMNR_SB_ctrl_spk */
extern "C" __attribute__((visibility("default"))) int set_DMNR_SB_ctrl_spk(void) {
    ALOGD("set_DMNR_SB_ctrl_spk() called");
    return 0;
}

/* Demangled: ENH_API_Get_FE_Memory */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_FE_Memory(void) {
    ALOGD("ENH_API_Get_FE_Memory() called");
    return 0;
}

/* Exported Object: dctcos_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_WB = NULL;

/* Exported Object: FWB_FIR_Coef_Table */
extern "C" __attribute__((visibility("default"))) void* FWB_FIR_Coef_Table = NULL;

/* Demangled: Select_DRC_Echo_Thd */
extern "C" __attribute__((visibility("default"))) int Select_DRC_Echo_Thd(void) {
    ALOGD("Select_DRC_Echo_Thd() called");
    return 0;
}

/* Demangled: update_cb_hVAD */
extern "C" __attribute__((visibility("default"))) int update_cb_hVAD(void) {
    ALOGD("update_cb_hVAD() called");
    return 0;
}

/* Demangled: ENH_API_Reset_CB_spk */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_CB_spk(void) {
    ALOGD("ENH_API_Reset_CB_spk() called");
    return 0;
}

/* Demangled: nlms_change_coeff */
extern "C" __attribute__((visibility("default"))) int nlms_change_coeff(void) {
    ALOGD("nlms_change_coeff() called");
    return 0;
}

/* Demangled: PseudoQ_Record */
extern "C" __attribute__((visibility("default"))) int PseudoQ_Record(void) {
    ALOGD("PseudoQ_Record() called");
    return 0;
}

/* Demangled: UL_FrontEnd_16k_24BIT */
extern "C" __attribute__((visibility("default"))) int UL_FrontEnd_16k_24BIT(void) {
    ALOGD("UL_FrontEnd_16k_24BIT() called");
    return 0;
}

/* Demangled: div_32_32_fft_es */
extern "C" __attribute__((visibility("default"))) int div_32_32_fft_es(void) {
    ALOGD("div_32_32_fft_es() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd(void) {
    ALOGD("DMNR_convert_Mic2_blocking_Power_A_B_ratio_band0_thd() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_selection_PowerB_LB_Band0 */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_selection_PowerB_LB_Band0(void) {
    ALOGD("DMNR_convert_Mic2_selection_PowerB_LB_Band0() called");
    return 0;
}

/* Demangled: reset_channel_syn_struct */
extern "C" __attribute__((visibility("default"))) int reset_channel_syn_struct(void) {
    ALOGD("reset_channel_syn_struct() called");
    return 0;
}

/* Demangled: NR_Com_Reset */
extern "C" __attribute__((visibility("default"))) int NR_Com_Reset(void) {
    ALOGD("NR_Com_Reset() called");
    return 0;
}

/* Demangled: ENH_API_Reset_DL_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Reset_DL_AEC(void) {
    ALOGD("ENH_API_Reset_DL_AEC() called");
    return 0;
}

/* Demangled: init_AGC_parms */
extern "C" __attribute__((visibility("default"))) int init_AGC_parms(void) {
    ALOGD("init_AGC_parms() called");
    return 0;
}

/* Demangled: calculateIES */
extern "C" __attribute__((visibility("default"))) int calculateIES(void) {
    ALOGD("calculateIES() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic2_selection_PowerB_LB_Band1 */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic2_selection_PowerB_LB_Band1(void) {
    ALOGD("DMNR_convert_Mic2_selection_PowerB_LB_Band1() called");
    return 0;
}

/* Demangled: fir_48K_60pt_36tap */
extern "C" __attribute__((visibility("default"))) int fir_48K_60pt_36tap(void) {
    ALOGD("fir_48K_60pt_36tap() called");
    return 0;
}

/* Demangled: LLR_test_9dB */
extern "C" __attribute__((visibility("default"))) int LLR_test_9dB(void) {
    ALOGD("LLR_test_9dB() called");
    return 0;
}

/* Demangled: free_compressor_48K */
extern "C" __attribute__((visibility("default"))) int free_compressor_48K(void) {
    ALOGD("free_compressor_48K() called");
    return 0;
}

/* Demangled: ENH_API_Get_DMNR_spk_Memory_BankA */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DMNR_spk_Memory_BankA(void) {
    ALOGD("ENH_API_Get_DMNR_spk_Memory_BankA() called");
    return 0;
}

/* Exported Object: Manual_clipping_table */
extern "C" __attribute__((visibility("default"))) void* Manual_clipping_table = NULL;

/* Demangled: HGain_time_smoothing_spk */
extern "C" __attribute__((visibility("default"))) int HGain_time_smoothing_spk(void) {
    ALOGD("HGain_time_smoothing_spk() called");
    return 0;
}

/* Demangled: ENH_API_Get_DMNR_spk_Memory_BankB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Get_DMNR_spk_Memory_BankB(void) {
    ALOGD("ENH_API_Get_DMNR_spk_Memory_BankB() called");
    return 0;
}

/* Demangled: Reverb_process */
extern "C" __attribute__((visibility("default"))) int Reverb_process(void) {
    ALOGD("Reverb_process() called");
    return 0;
}

/* Demangled: New_Cal_correlation_FrameBase */
extern "C" __attribute__((visibility("default"))) int New_Cal_correlation_FrameBase(void) {
    ALOGD("New_Cal_correlation_FrameBase() called");
    return 0;
}

/* Demangled: ABF_cal_process */
extern "C" __attribute__((visibility("default"))) int ABF_cal_process(void) {
    ALOGD("ABF_cal_process() called");
    return 0;
}

/* Demangled: SlowBitReverse256_test32 */
extern "C" __attribute__((visibility("default"))) int SlowBitReverse256_test32(void) {
    ALOGD("SlowBitReverse256_test32() called");
    return 0;
}

/* Demangled: cb_HR_clean_source_spk */
extern "C" __attribute__((visibility("default"))) int cb_HR_clean_source_spk(void) {
    ALOGD("cb_HR_clean_source_spk() called");
    return 0;
}

/* Exported Object: pre_emphasis_1 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_1 = NULL;

/* Demangled: UL_End_Suppress_Level_Target */
extern "C" __attribute__((visibility("default"))) int UL_End_Suppress_Level_Target(void) {
    ALOGD("UL_End_Suppress_Level_Target() called");
    return 0;
}

/* Demangled: ENH_API_Init_AEC */
extern "C" __attribute__((visibility("default"))) int ENH_API_Init_AEC(void) {
    ALOGD("ENH_API_Init_AEC() called");
    return 0;
}

/* Demangled: ENH_API_Run_CB */
extern "C" __attribute__((visibility("default"))) int ENH_API_Run_CB(void) {
    ALOGD("ENH_API_Run_CB() called");
    return 0;
}

/* Demangled: AGC_Releaserate */
extern "C" __attribute__((visibility("default"))) int AGC_Releaserate(void) {
    ALOGD("AGC_Releaserate() called");
    return 0;
}

/* Exported Object: Hgain_smooth_threshold_table_spk */
extern "C" __attribute__((visibility("default"))) void* Hgain_smooth_threshold_table_spk = NULL;

/* Exported Object: pre_emphasis_2 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_2 = NULL;

/* Demangled: ENH_API_Update_NR_48k */
extern "C" __attribute__((visibility("default"))) int ENH_API_Update_NR_48k(void) {
    ALOGD("ENH_API_Update_NR_48k() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize = NULL;

/* Demangled: reset_cb_GCC_spk */
extern "C" __attribute__((visibility("default"))) int reset_cb_GCC_spk(void) {
    ALOGD("reset_cb_GCC_spk() called");
    return 0;
}

/* Demangled: MBDRC_IIR_64_Tunable */
extern "C" __attribute__((visibility("default"))) int MBDRC_IIR_64_Tunable(void) {
    ALOGD("MBDRC_IIR_64_Tunable() called");
    return 0;
}

/* Demangled: compute_nf_energy */
extern "C" __attribute__((visibility("default"))) int compute_nf_energy(void) {
    ALOGD("compute_nf_energy() called");
    return 0;
}

/* Demangled: Complex_mult */
extern "C" __attribute__((visibility("default"))) int Complex_mult(void) {
    ALOGD("Complex_mult() called");
    return 0;
}

/* Exported Object: pre_emphasis_3 */
extern "C" __attribute__((visibility("default"))) void* pre_emphasis_3 = NULL;

/* Demangled: Shadow_process_whistle */
extern "C" __attribute__((visibility("default"))) int Shadow_process_whistle(void) {
    ALOGD("Shadow_process_whistle() called");
    return 0;
}

/* Demangled: cb_apply_envelop_ratio_spk */
extern "C" __attribute__((visibility("default"))) int cb_apply_envelop_ratio_spk(void) {
    ALOGD("cb_apply_envelop_ratio_spk() called");
    return 0;
}

/* Demangled: DMNR_convert_Mic_selection_VAD_THD */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_Mic_selection_VAD_THD(void) {
    ALOGD("DMNR_convert_Mic_selection_VAD_THD() called");
    return 0;
}

/* Demangled: DMNR_convert_WA_PR_THD_offset */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_WA_PR_THD_offset(void) {
    ALOGD("DMNR_convert_WA_PR_THD_offset() called");
    return 0;
}

/* Demangled: init_SND */
extern "C" __attribute__((visibility("default"))) int init_SND(void) {
    ALOGD("init_SND() called");
    return 0;
}

/* Demangled: sub_band_CNG_nf_compute */
extern "C" __attribute__((visibility("default"))) int sub_band_CNG_nf_compute(void) {
    ALOGD("sub_band_CNG_nf_compute() called");
    return 0;
}

/* Demangled: cb_hVAD_calc_confidence */
extern "C" __attribute__((visibility("default"))) int cb_hVAD_calc_confidence(void) {
    ALOGD("cb_hVAD_calc_confidence() called");
    return 0;
}

/* Demangled: Reverse_PlaybackGain */
extern "C" __attribute__((visibility("default"))) int Reverse_PlaybackGain(void) {
    ALOGD("Reverse_PlaybackGain() called");
    return 0;
}

/* Demangled: calculate_bin_energy */
extern "C" __attribute__((visibility("default"))) int calculate_bin_energy(void) {
    ALOGD("calculate_bin_energy() called");
    return 0;
}

/* Demangled: DMNR_convert_WA_handover_counter_step */
extern "C" __attribute__((visibility("default"))) int DMNR_convert_WA_handover_counter_step(void) {
    ALOGD("DMNR_convert_WA_handover_counter_step() called");
    return 0;
}

/* Demangled: calc_PF_gain_modifier */
extern "C" __attribute__((visibility("default"))) int calc_PF_gain_modifier(void) {
    ALOGD("calc_PF_gain_modifier() called");
    return 0;
}

/* Exported Object: dctcos_NB */
extern "C" __attribute__((visibility("default"))) void* dctcos_NB = NULL;

/* Exported Object: drc_cos_table */
extern "C" __attribute__((visibility("default"))) void* drc_cos_table = NULL;

/* Demangled: STE_1st_IIR */
extern "C" __attribute__((visibility("default"))) int STE_1st_IIR(void) {
    ALOGD("STE_1st_IIR() called");
    return 0;
}

/* Exported Object: dctcos_4_WB */
extern "C" __attribute__((visibility("default"))) void* dctcos_4_WB = NULL;

/* Demangled: update_module_params */
extern "C" __attribute__((visibility("default"))) int update_module_params(void) {
    ALOGD("update_module_params() called");
    return 0;
}

/* Demangled: cb_postfiltering_apply_uncertainty */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_apply_uncertainty(void) {
    ALOGD("cb_postfiltering_apply_uncertainty() called");
    return 0;
}

/* Demangled: ENH_INFO_DMNR_decompresss */
extern "C" __attribute__((visibility("default"))) int ENH_INFO_DMNR_decompresss(void) {
    ALOGD("ENH_INFO_DMNR_decompresss() called");
    return 0;
}

/* Demangled: sb_ASLR_noise_esti_spk */
extern "C" __attribute__((visibility("default"))) int sb_ASLR_noise_esti_spk(void) {
    ALOGD("sb_ASLR_noise_esti_spk() called");
    return 0;
}

/* Demangled: init_AGC_time_parms */
extern "C" __attribute__((visibility("default"))) int init_AGC_time_parms(void) {
    ALOGD("init_AGC_time_parms() called");
    return 0;
}

/* Demangled: set_module_active */
extern "C" __attribute__((visibility("default"))) int set_module_active(void) {
    ALOGD("set_module_active() called");
    return 0;
}

/* Exported Object: sb_nlms_stepsize_whistle */
extern "C" __attribute__((visibility("default"))) void* sb_nlms_stepsize_whistle = NULL;

/* Demangled: CB_convert_TMOS_NOISE_THD */
extern "C" __attribute__((visibility("default"))) int CB_convert_TMOS_NOISE_THD(void) {
    ALOGD("CB_convert_TMOS_NOISE_THD() called");
    return 0;
}

/* Demangled: cb_postfiltering_apply_gain_spk */
extern "C" __attribute__((visibility("default"))) int cb_postfiltering_apply_gain_spk(void) {
    ALOGD("cb_postfiltering_apply_gain_spk() called");
    return 0;
}

/* Demangled: IIR_allpass */
extern "C" __attribute__((visibility("default"))) int IIR_allpass(void) {
    ALOGD("IIR_allpass() called");
    return 0;
}

/* Demangled: ASIE_convert_enhanceLevel */
extern "C" __attribute__((visibility("default"))) int ASIE_convert_enhanceLevel(void) {
    ALOGD("ASIE_convert_enhanceLevel() called");
    return 0;
}

/* Exported Object: FIR_Soft_Coef_Table */
extern "C" __attribute__((visibility("default"))) void* FIR_Soft_Coef_Table = NULL;

/* Demangled: getTotalSpecEnergy */
extern "C" __attribute__((visibility("default"))) int getTotalSpecEnergy(void) {
    ALOGD("getTotalSpecEnergy() called");
    return 0;
}

/* Demangled: nlms_update_TDL */
extern "C" __attribute__((visibility("default"))) int nlms_update_TDL(void) {
    ALOGD("nlms_update_TDL() called");
    return 0;
}

/* Exported Object: connections */
extern "C" __attribute__((visibility("default"))) void* connections = NULL;

/* Demangled: calculate_band0_energy */
extern "C" __attribute__((visibility("default"))) int calculate_band0_energy(void) {
    ALOGD("calculate_band0_energy() called");
    return 0;
}

/* Demangled: Set_GDRC_Min_Gain */
extern "C" __attribute__((visibility("default"))) int Set_GDRC_Min_Gain(void) {
    ALOGD("Set_GDRC_Min_Gain() called");
    return 0;
}

/* Demangled: ENH_API_AEC_Alloc */
extern "C" __attribute__((visibility("default"))) int ENH_API_AEC_Alloc(void) {
    ALOGD("ENH_API_AEC_Alloc() called");
    return 0;
}

/* Demangled: T2F_Transform */
extern "C" __attribute__((visibility("default"))) int T2F_Transform(void) {
    ALOGD("T2F_Transform() called");
    return 0;
}
