/*
 * Reverse-Engineered Source for: libcamalgo.flicker.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libcamalgo_flicker"

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
#include "libcamalgo_flicker.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: convolve_Laplacian_filter(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z25convolve_Laplacian_filterPiS_i(void) {
    ALOGD("_Z25convolve_Laplacian_filterPiS_i() called");
    return 0;
}

/* Demangled: reset_flicker_queue() */
extern "C" __attribute__((visibility("default"))) int _Z19reset_flicker_queuev(void) {
    ALOGD("_Z19reset_flicker_queuev() called");
    return 0;
}

/* Demangled: decode_eht_entry */
extern "C" __attribute__((visibility("default"))) int decode_eht_entry(void) {
    ALOGD("decode_eht_entry() called");
    return 0;
}

/* Exported Object: flicker_filter_q */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_q = NULL;

/* Demangled: SGG(int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3SGGPiS_ii(void) {
    ALOGD("_Z3SGGPiS_ii() called");
    return 0;
}

/* Demangled: get_current_llr(int const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15get_current_llrPKij(void) {
    ALOGD("_Z15get_current_llrPKij() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_h1 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h1 = NULL;

/* Exported Object: flicker_filter_s */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_s = NULL;

/* Exported Object: flicker_despike_working_memory_h2 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h2 = NULL;

/* Exported Object: flicker_despike_working_memory_l1 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l1 = NULL;

/* Demangled: __gnu_uldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_uldivmod_helper(void) {
    ALOGD("__gnu_uldivmod_helper() called");
    return 0;
}

/* Demangled: laplace_diff_sum(int*, int*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16laplace_diff_sumPiS_ii(void) {
    ALOGD("_Z16laplace_diff_sumPiS_ii() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_h3 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h3 = NULL;

/* Exported Object: flicker_despike_working_memory_l2 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l2 = NULL;

/* Demangled: unw_is_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_is_fpreg(void) {
    ALOGD("unw_is_fpreg() called");
    return 0;
}

/* Demangled: flicker_setTable(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16flicker_setTablePiS_i(void) {
    ALOGD("_Z16flicker_setTablePiS_i() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_l3 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l3 = NULL;

/* Demangled: convolve_analysis(long long*, int, long long*, int*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17convolve_analysisPxiS_Piiiiii(void) {
    ALOGD("_Z17convolve_analysisPxiS_Piiiiii() called");
    return 0;
}

/* Exported Object: g_maxPastFrames */
extern "C" __attribute__((visibility("default"))) void* g_maxPastFrames = NULL;

/* Demangled: convolve_synthesis(int*, int, int*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18convolve_synthesisPiiS_S_iiii(void) {
    ALOGD("_Z18convolve_synthesisPiiS_S_iiii() called");
    return 0;
}

/* Demangled: __gnu_unwind_frame */
extern "C" __attribute__((visibility("default"))) int __gnu_unwind_frame(void) {
    ALOGD("__gnu_unwind_frame() called");
    return 0;
}

/* Demangled: __ashldi3 */
extern "C" __attribute__((visibility("default"))) int __ashldi3(void) {
    ALOGD("__ashldi3() called");
    return 0;
}

/* Demangled: detectFlicker_SW_SONY(int const*, int const*, int, int, int, int, int, flkSensorInfo, flkEISVector, flkAEInfo, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21detectFlicker_SW_SONYPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi(void) {
    ALOGD("_Z21detectFlicker_SW_SONYPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi() called");
    return 0;
}

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_input1 */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_input1 = NULL;

/* Exported Object: flicker_despike_working_memory_h_mask */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h_mask = NULL;

/* Exported Object: ovector_out_tmp_working_memory */
extern "C" __attribute__((visibility("default"))) void* ovector_out_tmp_working_memory = NULL;

/* Exported Object: cvector_out_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_out_working_memory = NULL;

/* Demangled: setThreshold(int const*, int const*, int const*) */
extern "C" __attribute__((visibility("default"))) int _Z12setThresholdPKiS0_S0_(void) {
    ALOGD("_Z12setThresholdPKiS0_S0_() called");
    return 0;
}

/* Demangled: vector_selection(int const*, int const*, int, int, int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16vector_selectionPKiS0_iiiiPiS1_S1_(void) {
    ALOGD("_Z16vector_selectionPKiS0_iiiiPiS1_S1_() called");
    return 0;
}

/* Exported Object: cvector_current_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_current_working_memory = NULL;

/* Exported Object: cvector_out_test_ptr_array */
extern "C" __attribute__((visibility("default"))) void* cvector_out_test_ptr_array = NULL;

/* Demangled: __aeabi_ldiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldiv0(void) {
    ALOGD("__aeabi_ldiv0() called");
    return 0;
}

/* Demangled: unw_get_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_get_fpreg(void) {
    ALOGD("unw_get_fpreg() called");
    return 0;
}

/* Demangled: _Unwind_VRS_Pop */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Pop(void) {
    ALOGD("_Unwind_VRS_Pop() called");
    return 0;
}

/* Demangled: __udivdi3 */
extern "C" __attribute__((visibility("default"))) int __udivdi3(void) {
    ALOGD("__udivdi3() called");
    return 0;
}

/* Exported Object: cvector_out_test_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_out_test_working_memory = NULL;

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

/* Exported Object: flicker_despike_working_memory_h3r */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h3r = NULL;

/* Exported Object: flicker_despike_working_memory_l2r */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l2r = NULL;

/* Exported Object: flicker_filter_s1 */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_s1 = NULL;

/* Demangled: convolve_analysis(int*, int, int*, int*, int, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z17convolve_analysisPiiS_S_iiiii(void) {
    ALOGD("_Z17convolve_analysisPiiS_S_iiiii() called");
    return 0;
}

/* Exported Object: convolve_analysis_working_memory_64 */
extern "C" __attribute__((visibility("default"))) void* convolve_analysis_working_memory_64 = NULL;

/* Exported Object: flicker_filter_s2 */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_s2 = NULL;

/* Exported Object: ovector_out_working_memory */
extern "C" __attribute__((visibility("default"))) void* ovector_out_working_memory = NULL;

/* Exported Object: FLKPAUSE */
extern "C" __attribute__((visibility("default"))) void* FLKPAUSE = NULL;

/* Demangled: unw_is_signal_frame */
extern "C" __attribute__((visibility("default"))) int unw_is_signal_frame(void) {
    ALOGD("unw_is_signal_frame() called");
    return 0;
}

/* Exported Object: cvector_out_tmp_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_out_tmp_working_memory = NULL;

/* Demangled: flicker_uninit() */
extern "C" __attribute__((visibility("default"))) int _Z14flicker_uninitv(void) {
    ALOGD("_Z14flicker_uninitv() called");
    return 0;
}

/* Demangled: set_flicker_state(EV_TABLE) */
extern "C" __attribute__((visibility("default"))) int _Z17set_flicker_state8EV_TABLE(void) {
    ALOGD("_Z17set_flicker_state8EV_TABLE() called");
    return 0;
}

/* Exported Object: ovector_out1_working_memory */
extern "C" __attribute__((visibility("default"))) void* ovector_out1_working_memory = NULL;

/* Demangled: find_peaks_SONY(int*, int, int, long long*) */
extern "C" __attribute__((visibility("default"))) int _Z15find_peaks_SONYPiiiPx(void) {
    ALOGD("_Z15find_peaks_SONYPiiiPx() called");
    return 0;
}

/* Demangled: unw_regname */
extern "C" __attribute__((visibility("default"))) int unw_regname(void) {
    ALOGD("unw_regname() called");
    return 0;
}

/* Demangled: setFlkPause(int) */
extern "C" __attribute__((visibility("default"))) int _Z11setFlkPausei(void) {
    ALOGD("_Z11setFlkPausei() called");
    return 0;
}

/* Exported Object: avector_out_working_memory */
extern "C" __attribute__((visibility("default"))) void* avector_out_working_memory = NULL;

/* Demangled: flicker_despike(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15flicker_despikePiS_i(void) {
    ALOGD("_Z15flicker_despikePiS_i() called");
    return 0;
}

/* Demangled: find_vector(int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z11find_vectorPiiii(void) {
    ALOGD("_Z11find_vectorPiiii() called");
    return 0;
}

/* Demangled: unw_step */
extern "C" __attribute__((visibility("default"))) int unw_step(void) {
    ALOGD("unw_step() called");
    return 0;
}

/* Exported Object: flickerGradThreshold */
extern "C" __attribute__((visibility("default"))) void* flickerGradThreshold = NULL;

/* Demangled: unw_save_vfp_as_X */
extern "C" __attribute__((visibility("default"))) int unw_save_vfp_as_X(void) {
    ALOGD("unw_save_vfp_as_X() called");
    return 0;
}

/* Demangled: unw_set_fpreg */
extern "C" __attribute__((visibility("default"))) int unw_set_fpreg(void) {
    ALOGD("unw_set_fpreg() called");
    return 0;
}

/* Exported Object: cvector_prev_down_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_prev_down_working_memory = NULL;

/* Demangled: flicker_compute_freq_SONY(int*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z25flicker_compute_freq_SONYPiiS_(void) {
    ALOGD("_Z25flicker_compute_freq_SONYPiiS_() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_h_tmp */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h_tmp = NULL;

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: calFlickerTable(int, int, double, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15calFlickerTableiidiPiS_S_(void) {
    ALOGD("_Z15calFlickerTableiidiPiS_S_() called");
    return 0;
}

/* Demangled: detectFlicker_SW(int const*, int const*, int, int, int, int, int, flkSensorInfo, flkEISVector, flkAEInfo, int*) */
extern "C" __attribute__((visibility("default"))) int _Z16detectFlicker_SWPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi(void) {
    ALOGD("_Z16detectFlicker_SWPKiS0_iiiii13flkSensorInfo12flkEISVector9flkAEInfoPi() called");
    return 0;
}

/* Demangled: unw_get_proc_name */
extern "C" __attribute__((visibility("default"))) int unw_get_proc_name(void) {
    ALOGD("unw_get_proc_name() called");
    return 0;
}

/* Demangled: vector_diff(int*, int*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z11vector_diffPiS_iS_(void) {
    ALOGD("_Z11vector_diffPiS_iS_() called");
    return 0;
}

/* Exported Object: flicker_filter_h1 */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_h1 = NULL;

/* Exported Object: convolve_analysis_working_memory_32 */
extern "C" __attribute__((visibility("default"))) void* convolve_analysis_working_memory_32 = NULL;

/* Demangled: _Unwind_VRS_Interpret */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Interpret(void) {
    ALOGD("_Unwind_VRS_Interpret() called");
    return 0;
}

/* Demangled: flicker_setExtPara(FLICKER_EXT_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z18flicker_setExtParaP16FLICKER_EXT_PARA(void) {
    ALOGD("_Z18flicker_setExtParaP16FLICKER_EXT_PARA() called");
    return 0;
}

/* Demangled: flicker_setExtPara_seq(FLICKER_EXT_PARA*) */
extern "C" __attribute__((visibility("default"))) int _Z22flicker_setExtPara_seqP16FLICKER_EXT_PARA(void) {
    ALOGD("_Z22flicker_setExtPara_seqP16FLICKER_EXT_PARA() called");
    return 0;
}

/* Exported Object: flicker_despike_working_memory_l3r */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l3r = NULL;

/* Demangled: convolve_synthesis(long long*, int, long long*, int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18convolve_synthesisPxiS_Piiiii(void) {
    ALOGD("_Z18convolve_synthesisPxiS_Piiiii() called");
    return 0;
}

/* Exported Object: grad_current_working_memory */
extern "C" __attribute__((visibility("default"))) void* grad_current_working_memory = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: setLMVcnt(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z9setLMVcntj(void) {
    ALOGD("_Z9setLMVcntj() called");
    return 0;
}

/* Exported Object: unw_local_addr_space */
extern "C" __attribute__((visibility("default"))) void* unw_local_addr_space = NULL;

/* Exported Object: convolve_synthesis_working_memory_64 */
extern "C" __attribute__((visibility("default"))) void* convolve_synthesis_working_memory_64 = NULL;

/* Exported Object: cvector_current_down_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_current_down_working_memory = NULL;

/* Demangled: unw_resume */
extern "C" __attribute__((visibility("default"))) int unw_resume(void) {
    ALOGD("unw_resume() called");
    return 0;
}

/* Exported Object: cvector_prev_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_prev_working_memory = NULL;

/* Demangled: _Unwind_VRS_Set */
extern "C" __attribute__((visibility("default"))) int _Unwind_VRS_Set(void) {
    ALOGD("_Unwind_VRS_Set() called");
    return 0;
}

/* Demangled: __aeabi_llsl */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsl(void) {
    ALOGD("__aeabi_llsl() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: __lshrdi3 */
extern "C" __attribute__((visibility("default"))) int __lshrdi3(void) {
    ALOGD("__lshrdi3() called");
    return 0;
}

/* Demangled: flicker_init(int, int, int, double) */
extern "C" __attribute__((visibility("default"))) int _Z12flicker_initiiid(void) {
    ALOGD("_Z12flicker_initiiid() called");
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

/* Demangled: __aeabi_idiv0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_idiv0(void) {
    ALOGD("__aeabi_idiv0() called");
    return 0;
}

/* Exported Object: grad_prev_working_memory */
extern "C" __attribute__((visibility("default"))) void* grad_prev_working_memory = NULL;

/* Demangled: align_flicker(int*, int*, int, int, int, int*, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z13align_flickerPiS_iiiS_RiS0_(void) {
    ALOGD("_Z13align_flickerPiS_iiiS_RiS0_() called");
    return 0;
}

/* Demangled: flk_getTablSize(int, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15flk_getTablSizeiiPiS_(void) {
    ALOGD("_Z15flk_getTablSizeiiPiS_() called");
    return 0;
}

/* Demangled: __gnu_ldivmod_helper */
extern "C" __attribute__((visibility("default"))) int __gnu_ldivmod_helper(void) {
    ALOGD("__gnu_ldivmod_helper() called");
    return 0;
}

/* Demangled: __aeabi_llsr */
extern "C" __attribute__((visibility("default"))) int __aeabi_llsr(void) {
    ALOGD("__aeabi_llsr() called");
    return 0;
}

/* Demangled: exhaust_search_SONY(int*, int*, long long*, long long*, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _Z19exhaust_search_SONYPiS_PxS0_iiRi(void) {
    ALOGD("_Z19exhaust_search_SONYPiS_PxS0_iiRi() called");
    return 0;
}

/* Demangled: vector_selection_SONY(int const*, int const*, int, int, int, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21vector_selection_SONYPKiS0_iiiiPiS1_S1_(void) {
    ALOGD("_Z21vector_selection_SONYPKiS0_iiiiPiS1_S1_() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: __aeabi_unwind_cpp_pr0 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr0(void) {
    ALOGD("__aeabi_unwind_cpp_pr0() called");
    return 0;
}

/* Demangled: test_next_frame(int const*, unsigned int, int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z15test_next_framePKijij(void) {
    ALOGD("_Z15test_next_framePKijij() called");
    return 0;
}

/* Demangled: subpixel_shift_vec(int*, int*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18subpixel_shift_vecPiS_iii(void) {
    ALOGD("_Z18subpixel_shift_vecPiS_iii() called");
    return 0;
}

/* Demangled: findlog2(int) */
extern "C" __attribute__((visibility("default"))) int _Z8findlog2i(void) {
    ALOGD("_Z8findlog2i() called");
    return 0;
}

/* Demangled: __aeabi_unwind_cpp_pr1 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr1(void) {
    ALOGD("__aeabi_unwind_cpp_pr1() called");
    return 0;
}

/* Demangled: get_slrt_score(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z14get_slrt_scorej(void) {
    ALOGD("_Z14get_slrt_scorej() called");
    return 0;
}

/* Exported Object: cvector_prev_full_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_prev_full_working_memory = NULL;

/* Demangled: __aeabi_unwind_cpp_pr2 */
extern "C" __attribute__((visibility("default"))) int __aeabi_unwind_cpp_pr2(void) {
    ALOGD("__aeabi_unwind_cpp_pr2() called");
    return 0;
}

/* Demangled: getFlkPause() */
extern "C" __attribute__((visibility("default"))) int _Z11getFlkPausev(void) {
    ALOGD("_Z11getFlkPausev() called");
    return 0;
}

/* Demangled: exhaust_search(int*, int*, long long*, long long*, int, int, int, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _Z14exhaust_searchPiS_PxS0_iiiiiRi(void) {
    ALOGD("_Z14exhaust_searchPiS_PxS0_iiiiiRi() called");
    return 0;
}

/* Demangled: unw_init_local */
extern "C" __attribute__((visibility("default"))) int unw_init_local(void) {
    ALOGD("unw_init_local() called");
    return 0;
}

/* Demangled: flicker_init_SONY(int, int, int, double) */
extern "C" __attribute__((visibility("default"))) int _Z17flicker_init_SONYiiid(void) {
    ALOGD("_Z17flicker_init_SONYiiid() called");
    return 0;
}

/* Demangled: exhaust_search_fine(int*, int*, long long*, long long*, int, int, int, int, int, int, int, int&, int**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z19exhaust_search_finePiS_PxS0_iiiiiiiRiPS_S_(void) {
    ALOGD("_Z19exhaust_search_finePiS_PxS0_iiiiiiiRiPS_S_() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Demangled: flicker_compute_freq_robust(int*, int*, int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z27flicker_compute_freq_robustPiS_iS_S_(void) {
    ALOGD("_Z27flicker_compute_freq_robustPiS_iS_S_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: calFlickerTable_SONY(int, int, double, int, int*, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20calFlickerTable_SONYiidiPiS_S_(void) {
    ALOGD("_Z20calFlickerTable_SONYiidiPiS_S_() called");
    return 0;
}

/* Exported Object: convolve_synthesis_working_memory_32 */
extern "C" __attribute__((visibility("default"))) void* convolve_synthesis_working_memory_32 = NULL;

/* Exported Object: cvector_out1_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_out1_working_memory = NULL;

/* Exported Object: cvector_out_test_length_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_out_test_length_working_memory = NULL;

/* Demangled: align_flicker_SONY_subpixel(int*, int*, int, int, int, int, int*, int&, int&) */
extern "C" __attribute__((visibility("default"))) int _Z27align_flicker_SONY_subpixelPiS_iiiiS_RiS0_(void) {
    ALOGD("_Z27align_flicker_SONY_subpixelPiS_iiiiS_RiS0_() called");
    return 0;
}

/* Exported Object: iOutputLog */
extern "C" __attribute__((visibility("default"))) void* iOutputLog = NULL;

/* Demangled: __divdi3 */
extern "C" __attribute__((visibility("default"))) int __divdi3(void) {
    ALOGD("__divdi3() called");
    return 0;
}

/* Demangled: check_alignment(int*, int, int, int&) */
extern "C" __attribute__((visibility("default"))) int _Z15check_alignmentPiiiRi(void) {
    ALOGD("_Z15check_alignmentPiiiRi() called");
    return 0;
}

/* Demangled: flicker_despike_SONY(int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z20flicker_despike_SONYPiS_i(void) {
    ALOGD("_Z20flicker_despike_SONYPiS_i() called");
    return 0;
}

/* Demangled: flicker_compute_freq(int*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z20flicker_compute_freqPiiS_(void) {
    ALOGD("_Z20flicker_compute_freqPiiS_() called");
    return 0;
}

/* Demangled: check_AE_stable(int, int*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z15check_AE_stableiPiS_(void) {
    ALOGD("_Z15check_AE_stableiPiS_() called");
    return 0;
}

/* Demangled: findlog2(long long) */
extern "C" __attribute__((visibility("default"))) int _Z8findlog2x(void) {
    ALOGD("_Z8findlog2x() called");
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

/* Exported Object: cvector_current_full_working_memory */
extern "C" __attribute__((visibility("default"))) void* cvector_current_full_working_memory = NULL;

/* Exported Object: g_flickerFreq */
extern "C" __attribute__((visibility("default"))) void* g_flickerFreq = NULL;

/* Demangled: find_peaks(int*, int, int, long long*) */
extern "C" __attribute__((visibility("default"))) int _Z10find_peaksPiiiPx(void) {
    ALOGD("_Z10find_peaksPiiiPx() called");
    return 0;
}

/* Demangled: measureMotion(int const*, int const*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13measureMotionPKiS0_ji(void) {
    ALOGD("_Z13measureMotionPKiS0_ji() called");
    return 0;
}

/* Demangled: flicker_compute_freq_3x(int*, int*, int*, int, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z23flicker_compute_freq_3xPiS_S_iiS_(void) {
    ALOGD("_Z23flicker_compute_freq_3xPiS_S_iiS_() called");
    return 0;
}

/* Exported Object: flicker_filter_h */
extern "C" __attribute__((visibility("default"))) void* flicker_filter_h = NULL;

/* Exported Object: flicker_despike_working_memory_h2r */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_h2r = NULL;

/* Exported Object: flicker_despike_working_memory_l1r */
extern "C" __attribute__((visibility("default"))) void* flicker_despike_working_memory_l1r = NULL;

/* Demangled: unw_get_reg */
extern "C" __attribute__((visibility("default"))) int unw_get_reg(void) {
    ALOGD("unw_get_reg() called");
    return 0;
}

/* Demangled: flicker_interpolation(int*, int*, int*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21flicker_interpolationPiS_S_i(void) {
    ALOGD("_Z21flicker_interpolationPiS_S_i() called");
    return 0;
}

/* Demangled: __aeabi_uldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_uldivmod(void) {
    ALOGD("__aeabi_uldivmod() called");
    return 0;
}

/* Exported Object: flickerSearchRange */
extern "C" __attribute__((visibility("default"))) void* flickerSearchRange = NULL;

/* Demangled: find_vector_SONY(int*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z16find_vector_SONYPiiiii(void) {
    ALOGD("_Z16find_vector_SONYPiiiii() called");
    return 0;
}

/* Demangled: __aeabi_ldivmod */
extern "C" __attribute__((visibility("default"))) int __aeabi_ldivmod(void) {
    ALOGD("__aeabi_ldivmod() called");
    return 0;
}
