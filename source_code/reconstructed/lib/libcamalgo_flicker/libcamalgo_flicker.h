/*
 * Reverse-Engineered ABI Specification for: libcamalgo.flicker.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libcamalgo.flicker.so
 */

#ifndef BEGONIA_RE_LIBCAMALGO_FLICKER_H
#define BEGONIA_RE_LIBCAMALGO_FLICKER_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _Z25convolve_Laplacian_filterPiS_i */
/* Demangled: convolve_Laplacian_filter(int*, int*, int) */
int _Z25convolve_Laplacian_filterPiS_i(void);

/* Symbol: _Z19reset_flicker_queuev */
/* Demangled: reset_flicker_queue() */
int _Z19reset_flicker_queuev(void);

/* Symbol: decode_eht_entry */
/* Demangled: decode_eht_entry */
int decode_eht_entry(void);

/* Symbol: flicker_filter_q */
/* Demangled: flicker_filter_q */
extern void* flicker_filter_q;

/* Symbol: _Z3SGGPiS_ii */
/* Demangled: SGG(int*, int*, int, int) */
int _Z3SGGPiS_ii(void);

/* Symbol: _Z15get_current_llrPKij */
/* Demangled: get_current_llr(int const*, unsigned int) */
int _Z15get_current_llrPKij(void);

/* Symbol: flicker_despike_working_memory_h1 */
/* Demangled: flicker_despike_working_memory_h1 */
extern void* flicker_despike_working_memory_h1;

/* Symbol: flicker_filter_s */
/* Demangled: flicker_filter_s */
extern void* flicker_filter_s;

/* Symbol: flicker_despike_working_memory_h2 */
/* Demangled: flicker_despike_working_memory_h2 */
extern void* flicker_despike_working_memory_h2;

/* Symbol: flicker_despike_working_memory_l1 */
/* Demangled: flicker_despike_working_memory_l1 */
extern void* flicker_despike_working_memory_l1;

/* Symbol: __gnu_uldivmod_helper */
/* Demangled: __gnu_uldivmod_helper */
int __gnu_uldivmod_helper(void);

/* Symbol: _Z16laplace_diff_sumPiS_ii */
/* Demangled: laplace_diff_sum(int*, int*, int, int) */
int _Z16laplace_diff_sumPiS_ii(void);

/* Symbol: flicker_despike_working_memory_h3 */
/* Demangled: flicker_despike_working_memory_h3 */
extern void* flicker_despike_working_memory_h3;

/* Symbol: flicker_despike_working_memory_l2 */
/* Demangled: flicker_despike_working_memory_l2 */
extern void* flicker_despike_working_memory_l2;

/* Symbol: unw_is_fpreg */
/* Demangled: unw_is_fpreg */
int unw_is_fpreg(void);

/* Symbol: _Z16flicker_setTablePiS_i */
/* Demangled: flicker_setTable(int*, int*, int) */
int _Z16flicker_setTablePiS_i(void);

/* Symbol: flicker_despike_working_memory_l3 */
/* Demangled: flicker_despike_working_memory_l3 */
extern void* flicker_despike_working_memory_l3;

/* Symbol: _Z17convolve_analysisPxiS_Piiiiii */
/* Demangled: convolve_analysis(long long*, int, long long*, int*, int, int, int, int, int) */
int _Z17convolve_analysisPxiS_Piiiiii(void);

/* Symbol: g_maxPastFrames */
/* Demangled: g_maxPastFrames */
extern void* g_maxPastFrames;

/* Symbol: _Z18convolve_synthesisPiiS_S_iiii */
/* Demangled: convolve_synthesis(int*, int, int*, int*, int, int, int, int) */
int _Z18convolve_synthesisPiiS_S_iiii(void);

/* Symbol: __gnu_unwind_frame */
/* Demangled: __gnu_unwind_frame */
int __gnu_unwind_frame(void);

/* Symbol: __ashldi3 */
/* Demangled: __ashldi3 */
int __ashldi3(void);

/* Symbol: _Z21detectFlicker_SW_SONYPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi */
/* Demangled: detectFlicker_SW_SONY(int const*, int const*, int, int, int, int, int, flkSensorInfo, flkEISVector, flkAEInfo, int*) */
int _Z21detectFlicker_SW_SONYPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi(void);

/* Symbol: _Unwind_Resume */
/* Demangled: _Unwind_Resume */
int _Unwind_Resume(void);

/* Symbol: flicker_despike_working_memory_input1 */
/* Demangled: flicker_despike_working_memory_input1 */
extern void* flicker_despike_working_memory_input1;

/* Symbol: flicker_despike_working_memory_h_mask */
/* Demangled: flicker_despike_working_memory_h_mask */
extern void* flicker_despike_working_memory_h_mask;

/* Symbol: ovector_out_tmp_working_memory */
/* Demangled: ovector_out_tmp_working_memory */
extern void* ovector_out_tmp_working_memory;

/* Symbol: cvector_out_working_memory */
/* Demangled: cvector_out_working_memory */
extern void* cvector_out_working_memory;

/* Symbol: _Z12setThresholdPKiS0_S0_ */
/* Demangled: setThreshold(int const*, int const*, int const*) */
int _Z12setThresholdPKiS0_S0_(void);

/* Symbol: _Z16vector_selectionPKiS0_iiiiPiS1_S1_ */
/* Demangled: vector_selection(int const*, int const*, int, int, int, int, int*, int*, int*) */
int _Z16vector_selectionPKiS0_iiiiPiS1_S1_(void);

/* Symbol: cvector_current_working_memory */
/* Demangled: cvector_current_working_memory */
extern void* cvector_current_working_memory;

/* Symbol: cvector_out_test_ptr_array */
/* Demangled: cvector_out_test_ptr_array */
extern void* cvector_out_test_ptr_array;

/* Symbol: __aeabi_ldiv0 */
/* Demangled: __aeabi_ldiv0 */
int __aeabi_ldiv0(void);

/* Symbol: unw_get_fpreg */
/* Demangled: unw_get_fpreg */
int unw_get_fpreg(void);

/* Symbol: _Unwind_VRS_Pop */
/* Demangled: _Unwind_VRS_Pop */
int _Unwind_VRS_Pop(void);

/* Symbol: __udivdi3 */
/* Demangled: __udivdi3 */
int __udivdi3(void);

/* Symbol: cvector_out_test_working_memory */
/* Demangled: cvector_out_test_working_memory */
extern void* cvector_out_test_working_memory;

/* Symbol: unw_get_proc_info */
/* Demangled: unw_get_proc_info */
int unw_get_proc_info(void);

/* Symbol: _Unwind_GetLanguageSpecificData */
/* Demangled: _Unwind_GetLanguageSpecificData */
int _Unwind_GetLanguageSpecificData(void);

/* Symbol: flicker_despike_working_memory_h3r */
/* Demangled: flicker_despike_working_memory_h3r */
extern void* flicker_despike_working_memory_h3r;

/* Symbol: flicker_despike_working_memory_l2r */
/* Demangled: flicker_despike_working_memory_l2r */
extern void* flicker_despike_working_memory_l2r;

/* Symbol: flicker_filter_s1 */
/* Demangled: flicker_filter_s1 */
extern void* flicker_filter_s1;

/* Symbol: _Z17convolve_analysisPiiS_S_iiiii */
/* Demangled: convolve_analysis(int*, int, int*, int*, int, int, int, int, int) */
int _Z17convolve_analysisPiiS_S_iiiii(void);

/* Symbol: convolve_analysis_working_memory_64 */
/* Demangled: convolve_analysis_working_memory_64 */
extern void* convolve_analysis_working_memory_64;

/* Symbol: flicker_filter_s2 */
/* Demangled: flicker_filter_s2 */
extern void* flicker_filter_s2;

/* Symbol: ovector_out_working_memory */
/* Demangled: ovector_out_working_memory */
extern void* ovector_out_working_memory;

/* Symbol: FLKPAUSE */
/* Demangled: FLKPAUSE */
extern void* FLKPAUSE;

/* Symbol: unw_is_signal_frame */
/* Demangled: unw_is_signal_frame */
int unw_is_signal_frame(void);

/* Symbol: cvector_out_tmp_working_memory */
/* Demangled: cvector_out_tmp_working_memory */
extern void* cvector_out_tmp_working_memory;

/* Symbol: _Z14flicker_uninitv */
/* Demangled: flicker_uninit() */
int _Z14flicker_uninitv(void);

/* Symbol: _Z17set_flicker_state8EV_TABLE */
/* Demangled: set_flicker_state(EV_TABLE) */
int _Z17set_flicker_state8EV_TABLE(void);

/* Symbol: ovector_out1_working_memory */
/* Demangled: ovector_out1_working_memory */
extern void* ovector_out1_working_memory;

/* Symbol: _Z15find_peaks_SONYPiiiPx */
/* Demangled: find_peaks_SONY(int*, int, int, long long*) */
int _Z15find_peaks_SONYPiiiPx(void);

/* Symbol: unw_regname */
/* Demangled: unw_regname */
int unw_regname(void);

/* Symbol: _Z11setFlkPausei */
/* Demangled: setFlkPause(int) */
int _Z11setFlkPausei(void);

/* Symbol: avector_out_working_memory */
/* Demangled: avector_out_working_memory */
extern void* avector_out_working_memory;

/* Symbol: _Z15flicker_despikePiS_i */
/* Demangled: flicker_despike(int*, int*, int) */
int _Z15flicker_despikePiS_i(void);

/* Symbol: _Z11find_vectorPiiii */
/* Demangled: find_vector(int*, int, int, int) */
int _Z11find_vectorPiiii(void);

/* Symbol: unw_step */
/* Demangled: unw_step */
int unw_step(void);

/* Symbol: flickerGradThreshold */
/* Demangled: flickerGradThreshold */
extern void* flickerGradThreshold;

/* Symbol: unw_save_vfp_as_X */
/* Demangled: unw_save_vfp_as_X */
int unw_save_vfp_as_X(void);

/* Symbol: unw_set_fpreg */
/* Demangled: unw_set_fpreg */
int unw_set_fpreg(void);

/* Symbol: cvector_prev_down_working_memory */
/* Demangled: cvector_prev_down_working_memory */
extern void* cvector_prev_down_working_memory;

/* Symbol: _Z25flicker_compute_freq_SONYPiiS_ */
/* Demangled: flicker_compute_freq_SONY(int*, int, int*) */
int _Z25flicker_compute_freq_SONYPiiS_(void);

/* Symbol: flicker_despike_working_memory_h_tmp */
/* Demangled: flicker_despike_working_memory_h_tmp */
extern void* flicker_despike_working_memory_h_tmp;

/* Symbol: _Unwind_GetRegionStart */
/* Demangled: _Unwind_GetRegionStart */
int _Unwind_GetRegionStart(void);

/* Symbol: _Z15calFlickerTableiidiPiS_S_ */
/* Demangled: calFlickerTable(int, int, double, int, int*, int*, int*) */
int _Z15calFlickerTableiidiPiS_S_(void);

/* Symbol: _Z16detectFlicker_SWPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi */
/* Demangled: detectFlicker_SW(int const*, int const*, int, int, int, int, int, flkSensorInfo, flkEISVector, flkAEInfo, int*) */
int _Z16detectFlicker_SWPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi(void);

/* Symbol: unw_get_proc_name */
/* Demangled: unw_get_proc_name */
int unw_get_proc_name(void);

/* Symbol: _Z11vector_diffPiS_iS_ */
/* Demangled: vector_diff(int*, int*, int, int*) */
int _Z11vector_diffPiS_iS_(void);

/* Symbol: flicker_filter_h1 */
/* Demangled: flicker_filter_h1 */
extern void* flicker_filter_h1;

/* Symbol: convolve_analysis_working_memory_32 */
/* Demangled: convolve_analysis_working_memory_32 */
extern void* convolve_analysis_working_memory_32;

/* Symbol: _Unwind_VRS_Interpret */
/* Demangled: _Unwind_VRS_Interpret */
int _Unwind_VRS_Interpret(void);

/* Symbol: _Z18flicker_setExtParaP16FLICKER_EXT_PARA */
/* Demangled: flicker_setExtPara(FLICKER_EXT_PARA*) */
int _Z18flicker_setExtParaP16FLICKER_EXT_PARA(void);

/* Symbol: _Z22flicker_setExtPara_seqP16FLICKER_EXT_PARA */
/* Demangled: flicker_setExtPara_seq(FLICKER_EXT_PARA*) */
int _Z22flicker_setExtPara_seqP16FLICKER_EXT_PARA(void);

/* Symbol: flicker_despike_working_memory_l3r */
/* Demangled: flicker_despike_working_memory_l3r */
extern void* flicker_despike_working_memory_l3r;

/* Symbol: _Z18convolve_synthesisPxiS_Piiiii */
/* Demangled: convolve_synthesis(long long*, int, long long*, int*, int, int, int, int) */
int _Z18convolve_synthesisPxiS_Piiiii(void);

/* Symbol: grad_current_working_memory */
/* Demangled: grad_current_working_memory */
extern void* grad_current_working_memory;

/* Symbol: __bss_start */
/* Demangled: __bss_start */
extern void* __bss_start;

/* Symbol: _Z9setLMVcntj */
/* Demangled: setLMVcnt(unsigned int) */
int _Z9setLMVcntj(void);

/* Symbol: unw_local_addr_space */
/* Demangled: unw_local_addr_space */
extern void* unw_local_addr_space;

/* Symbol: convolve_synthesis_working_memory_64 */
/* Demangled: convolve_synthesis_working_memory_64 */
extern void* convolve_synthesis_working_memory_64;

/* Symbol: cvector_current_down_working_memory */
/* Demangled: cvector_current_down_working_memory */
extern void* cvector_current_down_working_memory;

/* Symbol: unw_resume */
/* Demangled: unw_resume */
int unw_resume(void);

/* Symbol: cvector_prev_working_memory */
/* Demangled: cvector_prev_working_memory */
extern void* cvector_prev_working_memory;

/* Symbol: _Unwind_VRS_Set */
/* Demangled: _Unwind_VRS_Set */
int _Unwind_VRS_Set(void);

/* Symbol: __aeabi_llsl */
/* Demangled: __aeabi_llsl */
int __aeabi_llsl(void);

/* Symbol: _Unwind_DeleteException */
/* Demangled: _Unwind_DeleteException */
int _Unwind_DeleteException(void);

/* Symbol: __lshrdi3 */
/* Demangled: __lshrdi3 */
int __lshrdi3(void);

/* Symbol: _Z12flicker_initiiid */
/* Demangled: flicker_init(int, int, int, double) */
int _Z12flicker_initiiid(void);

/* Symbol: _Unwind_Complete */
/* Demangled: _Unwind_Complete */
int _Unwind_Complete(void);

/* Symbol: unw_set_reg */
/* Demangled: unw_set_reg */
int unw_set_reg(void);

/* Symbol: __aeabi_idiv0 */
/* Demangled: __aeabi_idiv0 */
int __aeabi_idiv0(void);

/* Symbol: grad_prev_working_memory */
/* Demangled: grad_prev_working_memory */
extern void* grad_prev_working_memory;

/* Symbol: _Z13align_flickerPiS_iiiS_RiS0_ */
/* Demangled: align_flicker(int*, int*, int, int, int, int*, int&, int&) */
int _Z13align_flickerPiS_iiiS_RiS0_(void);

/* Symbol: _Z15flk_getTablSizeiiPiS_ */
/* Demangled: flk_getTablSize(int, int, int*, int*) */
int _Z15flk_getTablSizeiiPiS_(void);

/* Symbol: __gnu_ldivmod_helper */
/* Demangled: __gnu_ldivmod_helper */
int __gnu_ldivmod_helper(void);

/* Symbol: __aeabi_llsr */
/* Demangled: __aeabi_llsr */
int __aeabi_llsr(void);

/* Symbol: _Z19exhaust_search_SONYPiS_PxS0_iiRi */
/* Demangled: exhaust_search_SONY(int*, int*, long long*, long long*, int, int, int&) */
int _Z19exhaust_search_SONYPiS_PxS0_iiRi(void);

/* Symbol: _Z21vector_selection_SONYPKiS0_iiiiPiS1_S1_ */
/* Demangled: vector_selection_SONY(int const*, int const*, int, int, int, int, int*, int*, int*) */
int _Z21vector_selection_SONYPKiS0_iiiiPiS1_S1_(void);

/* Symbol: _end */
/* Demangled: _end */
extern void* _end;

/* Symbol: __aeabi_unwind_cpp_pr0 */
/* Demangled: __aeabi_unwind_cpp_pr0 */
int __aeabi_unwind_cpp_pr0(void);

/* Symbol: _Z15test_next_framePKijij */
/* Demangled: test_next_frame(int const*, unsigned int, int, unsigned int) */
int _Z15test_next_framePKijij(void);

/* Symbol: _Z18subpixel_shift_vecPiS_iii */
/* Demangled: subpixel_shift_vec(int*, int*, int, int, int) */
int _Z18subpixel_shift_vecPiS_iii(void);

/* Symbol: _Z8findlog2i */
/* Demangled: findlog2(int) */
int _Z8findlog2i(void);

/* Symbol: __aeabi_unwind_cpp_pr1 */
/* Demangled: __aeabi_unwind_cpp_pr1 */
int __aeabi_unwind_cpp_pr1(void);

/* Symbol: _Z14get_slrt_scorej */
/* Demangled: get_slrt_score(unsigned int) */
int _Z14get_slrt_scorej(void);

/* Symbol: cvector_prev_full_working_memory */
/* Demangled: cvector_prev_full_working_memory */
extern void* cvector_prev_full_working_memory;

/* Symbol: __aeabi_unwind_cpp_pr2 */
/* Demangled: __aeabi_unwind_cpp_pr2 */
int __aeabi_unwind_cpp_pr2(void);

/* Symbol: _Z11getFlkPausev */
/* Demangled: getFlkPause() */
int _Z11getFlkPausev(void);

/* Symbol: _Z14exhaust_searchPiS_PxS0_iiiiiRi */
/* Demangled: exhaust_search(int*, int*, long long*, long long*, int, int, int, int, int, int&) */
int _Z14exhaust_searchPiS_PxS0_iiiiiRi(void);

/* Symbol: unw_init_local */
/* Demangled: unw_init_local */
int unw_init_local(void);

/* Symbol: _Z17flicker_init_SONYiiid */
/* Demangled: flicker_init_SONY(int, int, int, double) */
int _Z17flicker_init_SONYiiid(void);

/* Symbol: _Z19exhaust_search_finePiS_PxS0_iiiiiiiRiPS_S_ */
/* Demangled: exhaust_search_fine(int*, int*, long long*, long long*, int, int, int, int, int, int, int, int&, int**, int*) */
int _Z19exhaust_search_finePiS_PxS0_iiiiiiiRiPS_S_(void);

/* Symbol: _Unwind_RaiseException */
/* Demangled: _Unwind_RaiseException */
int _Unwind_RaiseException(void);

/* Symbol: _Z27flicker_compute_freq_robustPiS_iS_S_ */
/* Demangled: flicker_compute_freq_robust(int*, int*, int, int*, int*) */
int _Z27flicker_compute_freq_robustPiS_iS_S_(void);

/* Symbol: _edata */
/* Demangled: _edata */
extern void* _edata;

/* Symbol: _Z20calFlickerTable_SONYiidiPiS_S_ */
/* Demangled: calFlickerTable_SONY(int, int, double, int, int*, int*, int*) */
int _Z20calFlickerTable_SONYiidiPiS_S_(void);

/* Symbol: convolve_synthesis_working_memory_32 */
/* Demangled: convolve_synthesis_working_memory_32 */
extern void* convolve_synthesis_working_memory_32;

/* Symbol: cvector_out1_working_memory */
/* Demangled: cvector_out1_working_memory */
extern void* cvector_out1_working_memory;

/* Symbol: cvector_out_test_length_working_memory */
/* Demangled: cvector_out_test_length_working_memory */
extern void* cvector_out_test_length_working_memory;

/* Symbol: _Z27align_flicker_SONY_subpixelPiS_iiiiS_RiS0_ */
/* Demangled: align_flicker_SONY_subpixel(int*, int*, int, int, int, int, int*, int&, int&) */
int _Z27align_flicker_SONY_subpixelPiS_iiiiS_RiS0_(void);

/* Symbol: iOutputLog */
/* Demangled: iOutputLog */
extern void* iOutputLog;

/* Symbol: __divdi3 */
/* Demangled: __divdi3 */
int __divdi3(void);

/* Symbol: _Z15check_alignmentPiiiRi */
/* Demangled: check_alignment(int*, int, int, int&) */
int _Z15check_alignmentPiiiRi(void);

/* Symbol: _Z20flicker_despike_SONYPiS_i */
/* Demangled: flicker_despike_SONY(int*, int*, int) */
int _Z20flicker_despike_SONYPiS_i(void);

/* Symbol: _Z20flicker_compute_freqPiiS_ */
/* Demangled: flicker_compute_freq(int*, int, int*) */
int _Z20flicker_compute_freqPiiS_(void);

/* Symbol: _Z15check_AE_stableiPiS_ */
/* Demangled: check_AE_stable(int, int*, int*) */
int _Z15check_AE_stableiPiS_(void);

/* Symbol: _Z8findlog2x */
/* Demangled: findlog2(long long) */
int _Z8findlog2x(void);

/* Symbol: _Unwind_VRS_Get */
/* Demangled: _Unwind_VRS_Get */
int _Unwind_VRS_Get(void);

/* Symbol: unw_getcontext */
/* Demangled: unw_getcontext */
int unw_getcontext(void);

/* Symbol: cvector_current_full_working_memory */
/* Demangled: cvector_current_full_working_memory */
extern void* cvector_current_full_working_memory;

/* Symbol: g_flickerFreq */
/* Demangled: g_flickerFreq */
extern void* g_flickerFreq;

/* Symbol: _Z10find_peaksPiiiPx */
/* Demangled: find_peaks(int*, int, int, long long*) */
int _Z10find_peaksPiiiPx(void);

/* Symbol: _Z13measureMotionPKiS0_ji */
/* Demangled: measureMotion(int const*, int const*, unsigned int, int) */
int _Z13measureMotionPKiS0_ji(void);

/* Symbol: _Z23flicker_compute_freq_3xPiS_S_iiS_ */
/* Demangled: flicker_compute_freq_3x(int*, int*, int*, int, int, int*) */
int _Z23flicker_compute_freq_3xPiS_S_iiS_(void);

/* Symbol: flicker_filter_h */
/* Demangled: flicker_filter_h */
extern void* flicker_filter_h;

/* Symbol: flicker_despike_working_memory_h2r */
/* Demangled: flicker_despike_working_memory_h2r */
extern void* flicker_despike_working_memory_h2r;

/* Symbol: flicker_despike_working_memory_l1r */
/* Demangled: flicker_despike_working_memory_l1r */
extern void* flicker_despike_working_memory_l1r;

/* Symbol: unw_get_reg */
/* Demangled: unw_get_reg */
int unw_get_reg(void);

/* Symbol: _Z21flicker_interpolationPiS_S_i */
/* Demangled: flicker_interpolation(int*, int*, int*, int) */
int _Z21flicker_interpolationPiS_S_i(void);

/* Symbol: __aeabi_uldivmod */
/* Demangled: __aeabi_uldivmod */
int __aeabi_uldivmod(void);

/* Symbol: flickerSearchRange */
/* Demangled: flickerSearchRange */
extern void* flickerSearchRange;

/* Symbol: _Z16find_vector_SONYPiiiii */
/* Demangled: find_vector_SONY(int*, int, int, int, int) */
int _Z16find_vector_SONYPiiiii(void);

/* Symbol: __aeabi_ldivmod */
/* Demangled: __aeabi_ldivmod */
int __aeabi_ldivmod(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBCAMALGO_FLICKER_H */
