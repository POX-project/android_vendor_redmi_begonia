/*
 * Reverse-Engineered Source for: libalLDC.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libalLDC"

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
#include "libalLDC.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15alignEmmRPvRm(void) {
    ALOGD("_ZNSt6__ndk15alignEmmRPvRm() called");
    return 0;
}

/* Demangled: pc_stability_estimation_without_face(void*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z36pc_stability_estimation_without_facePvPh(void) {
    ALOGD("_Z36pc_stability_estimation_without_facePvPh() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTSt = NULL;

/* Demangled: af_util_timeout_is_empty(af_util_timeout_sof_t*) */
extern "C" __attribute__((visibility("default"))) int _Z24af_util_timeout_is_emptyP21af_util_timeout_sof_t(void) {
    ALOGD("_Z24af_util_timeout_is_emptyP21af_util_timeout_sof_t() called");
    return 0;
}

/* Exported Object: typeinfo name for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSb = NULL;

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD2Ev() called");
    return 0;
}

/* Demangled: fpc_tuning_load_default_pc_param_preview_mode(alfpc_tuning_pc_param_by_mode_t*) */
extern "C" __attribute__((visibility("default"))) int _Z45fpc_tuning_load_default_pc_param_preview_modeP31alfpc_tuning_pc_param_by_mode_t(void) {
    ALOGD("_Z45fpc_tuning_load_default_pc_param_preview_modeP31alfpc_tuning_pc_param_by_mode_t() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD1Ev() called");
    return 0;
}

/* Demangled: Java_com_example_lvglrefocusing_MainActivity_closeGL */
extern "C" __attribute__((visibility("default"))) int Java_com_example_lvglrefocusing_MainActivity_closeGL(void) {
    ALOGD("Java_com_example_lvglrefocusing_MainActivity_closeGL() called");
    return 0;
}

/* Exported Object: typeinfo name for double */
extern "C" __attribute__((visibility("default"))) void* _ZTSd = NULL;

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD2Ev() called");
    return 0;
}

/* Exported Object: g_logfile_engineer_enable */
extern "C" __attribute__((visibility("default"))) void* g_logfile_engineer_enable = NULL;

/* Exported Object: typeinfo name for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9type_info = NULL;

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1EPKc(void) {
    ALOGD("_ZNSt11logic_errorC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: fpc_handle_reset_history(void*) */
extern "C" __attribute__((visibility("default"))) int _Z24fpc_handle_reset_historyPv(void) {
    ALOGD("_Z24fpc_handle_reset_historyPv() called");
    return 0;
}

/* Demangled: aft_face_lock_and_judge(void*, aft_face_state_n) */
extern "C" __attribute__((visibility("default"))) int _Z23aft_face_lock_and_judgePv16aft_face_state_n(void) {
    ALOGD("_Z23aft_face_lock_and_judgePv16aft_face_state_n() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info(void) {
    ALOGD("_ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: std::get_unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt14get_unexpectedv(void) {
    ALOGD("_ZSt14get_unexpectedv() called");
    return 0;
}

/* Exported Object: typeinfo name for float */
extern "C" __attribute__((visibility("default"))) void* _ZTSf = NULL;

/* Demangled: fpc_handle_focus_state(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z22fpc_handle_focus_statePvS_(void) {
    ALOGD("_Z22fpc_handle_focus_statePvS_() called");
    return 0;
}

/* Demangled: af_util_timeout_is_timeout(af_util_timeout_sof_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z26af_util_timeout_is_timeoutP21af_util_timeout_sof_tj(void) {
    ALOGD("_Z26af_util_timeout_is_timeoutP21af_util_timeout_sof_tj() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTSh = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: __cxa_rethrow_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow_primary_exception(void) {
    ALOGD("__cxa_rethrow_primary_exception() called");
    return 0;
}

/* Exported Object: g_e_33mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_33mm_distortion_curve = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: __cxa_decrement_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_decrement_exception_refcount(void) {
    ALOGD("__cxa_decrement_exception_refcount() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: fpc_handle_manual_fpc_level_output(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z34fpc_handle_manual_fpc_level_outputPvS_S_(void) {
    ALOGD("_Z34fpc_handle_manual_fpc_level_outputPvS_S_() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Exported Object: vtable for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt8bad_cast = NULL;

/* Exported Object: typeinfo for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11range_error = NULL;

/* Demangled: operator delete[](void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvmSt11align_val_t(void) {
    ALOGD("_ZdaPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: std::__ndk1::error_code::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110error_code7messageEv(void) {
    ALOGD("_ZNKSt6__ndk110error_code7messageEv() called");
    return 0;
}

/* Exported Object: __cxa_unexpected_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_unexpected_handler = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD1Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSx = NULL;

/* Demangled: aft_face_cal_reference_center(void*) */
extern "C" __attribute__((visibility("default"))) int _Z29aft_face_cal_reference_centerPv(void) {
    ALOGD("_Z29aft_face_cal_reference_centerPv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: pc_next_pc_level_estimation_under_unstable_face_state(unsigned char*, unsigned char*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z53pc_next_pc_level_estimation_under_unstable_face_statePhS_Pv(void) {
    ALOGD("_Z53pc_next_pc_level_estimation_under_unstable_face_statePhS_Pv() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSn = NULL;

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex8try_lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::get_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE10get_futureEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE10get_futureEv() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD2Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD2Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD2Ev(void) {
    ALOGD("_ZNSt10bad_typeidD2Ev() called");
    return 0;
}

/* Demangled: operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZdlPv(void) {
    ALOGD("_ZdlPv() called");
    return 0;
}

/* Demangled: alLDC_BindFBO */
extern "C" __attribute__((visibility("default"))) int alLDC_BindFBO(void) {
    ALOGD("alLDC_BindFBO() called");
    return 0;
}

/* Exported Object: typeinfo name for void */
extern "C" __attribute__((visibility("default"))) void* _ZTSv = NULL;

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD1Ev() called");
    return 0;
}

/* Demangled: alLDC_Video_Run_SAT */
extern "C" __attribute__((visibility("default"))) int alLDC_Video_Run_SAT(void) {
    ALOGD("alLDC_Video_Run_SAT() called");
    return 0;
}

/* Exported Object: typeinfo for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKv = NULL;

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD1Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD1Ev() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: fpc_handle_record_ideal_pc_level(void*, pc_estimation_out_data_t*) */
extern "C" __attribute__((visibility("default"))) int _Z32fpc_handle_record_ideal_pc_levelPvP24pc_estimation_out_data_t(void) {
    ALOGD("_Z32fpc_handle_record_ideal_pc_levelPvP24pc_estimation_out_data_t() called");
    return 0;
}

/* Exported Object: std::__ndk1::adopt_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110adopt_lockE = NULL;

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD2Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD2Ev() called");
    return 0;
}

/* Demangled: alLDC_RunTexture_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_RunTexture_v2(void) {
    ALOGD("alLDC_RunTexture_v2() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Exported Object: typeinfo for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKx = NULL;

/* Demangled: operator new[](unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znam(void) {
    ALOGD("_Znam() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD0Ev(void) {
    ALOGD("_ZNSt9type_infoD0Ev() called");
    return 0;
}

/* Demangled: fpc_handle_still_fpc_level_calculation(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z38fpc_handle_still_fpc_level_calculationPvS_S_(void) {
    ALOGD("_Z38fpc_handle_still_fpc_level_calculationPvS_S_() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2EPKc(void) {
    ALOGD("_ZNSt11logic_errorC2EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: pc_stability_estimation_with_face(void*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z33pc_stability_estimation_with_facePvPh(void) {
    ALOGD("_Z33pc_stability_estimation_with_facePvPh() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD0Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv() called");
    return 0;
}

/* Demangled: af_debug_log_get_priority_lv() */
extern "C" __attribute__((visibility("default"))) int _Z28af_debug_log_get_priority_lvv(void) {
    ALOGD("_Z28af_debug_log_get_priority_lvv() called");
    return 0;
}

/* Demangled: af_cmd_get_setting_mode(char*, char*, ALLIB_ENGINEER_MODE*, af_pcmd_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23af_cmd_get_setting_modePcS_P19ALLIB_ENGINEER_MODEP9af_pcmd_t(void) {
    ALOGD("_Z23af_cmd_get_setting_modePcS_P19ALLIB_ENGINEER_MODEP9af_pcmd_t() called");
    return 0;
}

/* Exported Object: typeinfo for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt14overflow_error = NULL;

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKS_() called");
    return 0;
}

/* Exported Object: g_e_29mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_29mm_distortion_curve = NULL;

/* Exported Object: typeinfo name for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112future_errorE = NULL;

/* Exported Object: __cxa_new_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_new_handler = NULL;

/* Demangled: __cxa_end_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_end_catch(void) {
    ALOGD("__cxa_end_catch() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD0Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD0Ev() called");
    return 0;
}

/* Demangled: __cxa_allocate_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_exception(void) {
    ALOGD("__cxa_allocate_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: fpc_tuning_load_default_pc_param_common(alfpc_tuning_pc_param_common_t*) */
extern "C" __attribute__((visibility("default"))) int _Z39fpc_tuning_load_default_pc_param_commonP30alfpc_tuning_pc_param_common_t(void) {
    ALOGD("_Z39fpc_tuning_load_default_pc_param_commonP30alfpc_tuning_pc_param_common_t() called");
    return 0;
}

/* Demangled: Java_com_example_lvglrefocusing_MainActivity_initGL */
extern "C" __attribute__((visibility("default"))) int Java_com_example_lvglrefocusing_MainActivity_initGL(void) {
    ALOGD("Java_com_example_lvglrefocusing_MainActivity_initGL() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC2Ev() called");
    return 0;
}

/* Demangled: std::get_new_handler() */
extern "C" __attribute__((visibility("default"))) int _ZSt15get_new_handlerv(void) {
    ALOGD("_ZSt15get_new_handlerv() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED1Ev() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD2Ev(void) {
    ALOGD("_ZNSt14overflow_errorD2Ev() called");
    return 0;
}

/* Demangled: fpc_mgr_deinit(void*) */
extern "C" __attribute__((visibility("default"))) int _Z14fpc_mgr_deinitPv(void) {
    ALOGD("_Z14fpc_mgr_deinitPv() called");
    return 0;
}

/* Exported Object: typeinfo name for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDh = NULL;

/* Demangled: std::__ndk1::__thread_specific_ptr<std::__ndk1::__thread_struct>::__at_thread_exit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv(void) {
    ALOGD("_ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD1Ev(void) {
    ALOGD("_ZNSt9bad_allocD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112bad_weak_ptrE = NULL;

/* Exported Object: typeinfo name for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12domain_error = NULL;

/* Exported Object: vtable for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16bad_array_length = NULL;

/* Exported Object: g_e_16mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_16mm_distortion_curve = NULL;

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: typeinfo name for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKb = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo name for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKd = NULL;

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD0Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKf = NULL;

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Exported Object: typeinfo for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9type_info = NULL;

/* Demangled: std::exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9exception4whatEv(void) {
    ALOGD("_ZNKSt9exception4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDn = NULL;

/* Demangled: __cxa_get_exception_ptr */
extern "C" __attribute__((visibility("default"))) int __cxa_get_exception_ptr(void) {
    ALOGD("__cxa_get_exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_t(void) {
    ALOGD("_ZdaPvSt11align_val_t() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC2Ev(void) {
    ALOGD("_ZNSt9bad_allocC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::detach() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread6detachEv(void) {
    ALOGD("_ZNSt6__ndk16thread6detachEv() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex6unlockEv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: typeinfo for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPc = NULL;

/* Exported Object: typeinfo for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTIDn = NULL;

/* Exported Object: g_e_24mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_24mm_distortion_curve = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPo = NULL;

/* Demangled: af_util_get_property(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z20af_util_get_propertyPKc(void) {
    ALOGD("_Z20af_util_get_propertyPKc() called");
    return 0;
}

/* Demangled: fpc_mgr_mem_get_obj_size() */
extern "C" __attribute__((visibility("default"))) int _Z24fpc_mgr_mem_get_obj_sizev(void) {
    ALOGD("_Z24fpc_mgr_mem_get_obj_sizev() called");
    return 0;
}

/* Demangled: Java_com_example_lvglrefocusing_MainActivity_startGL */
extern "C" __attribute__((visibility("default"))) int Java_com_example_lvglrefocusing_MainActivity_startGL(void) {
    ALOGD("Java_com_example_lvglrefocusing_MainActivity_startGL() called");
    return 0;
}

/* Exported Object: typeinfo for half */
extern "C" __attribute__((visibility("default"))) void* _ZTIDh = NULL;

/* Demangled: face_analysis_estimation(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z24face_analysis_estimationPvS_S_(void) {
    ALOGD("_Z24face_analysis_estimationPvS_S_() called");
    return 0;
}

/* Demangled: std::exception_ptr::operator=(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptraSERKS_(void) {
    ALOGD("_ZNSt13exception_ptraSERKS_() called");
    return 0;
}

/* Exported Object: g_log_priority_new */
extern "C" __attribute__((visibility("default"))) void* g_log_priority_new = NULL;

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD2Ev(void) {
    ALOGD("_ZNSt12length_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPm = NULL;

/* Demangled: fpc_tuning_load_default_pc_param_video_mode(alfpc_tuning_pc_param_by_mode_t*) */
extern "C" __attribute__((visibility("default"))) int _Z43fpc_tuning_load_default_pc_param_video_modeP31alfpc_tuning_pc_param_by_mode_t(void) {
    ALOGD("_Z43fpc_tuning_load_default_pc_param_video_modeP31alfpc_tuning_pc_param_by_mode_t() called");
    return 0;
}

/* Demangled: std::__ndk1::error_condition::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115error_condition7messageEv(void) {
    ALOGD("_ZNKSt6__ndk115error_condition7messageEv() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPw = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__shared_countE = NULL;

/* Exported Object: typeinfo name for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKt = NULL;

/* Exported Object: g_e_31mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_31mm_distortion_curve = NULL;

/* Exported Object: g_e_34mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_34mm_distortion_curve = NULL;

/* Exported Object: typeinfo name for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKx = NULL;

/* Demangled: std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnamSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt10bad_typeid = NULL;

/* Exported Object: typeinfo for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPi = NULL;

/* Demangled: std::uncaught_exceptions() */
extern "C" __attribute__((visibility("default"))) int _ZSt19uncaught_exceptionsv(void) {
    ALOGD("_ZSt19uncaught_exceptionsv() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD2Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKv = NULL;

/* Demangled: alLDC_Manual_FPC_Ratio */
extern "C" __attribute__((visibility("default"))) int alLDC_Manual_FPC_Ratio(void) {
    ALOGD("alLDC_Manual_FPC_Ratio() called");
    return 0;
}

/* Exported Object: typeinfo for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPe = NULL;

/* Demangled: std::bad_array_new_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt20bad_array_new_length4whatEv(void) {
    ALOGD("_ZNKSt20bad_array_new_length4whatEv() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD1Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPg = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::declare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119declare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk119declare_no_pointersEPcm() called");
    return 0;
}

/* Exported Object: typeinfo for float */
extern "C" __attribute__((visibility("default"))) void* _ZTIf = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__array_type_infoE = NULL;

/* Exported Object: typeinfo for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt15underflow_error = NULL;

/* Demangled: std::__ndk1::mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state16__on_zero_sharedEv() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD1Ev(void) {
    ALOGD("_ZNSt12length_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKl = NULL;

/* Exported Object: typeinfo for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTIh = NULL;

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKh = NULL;

/* Demangled: fpc_handle_stop_fpc_transition_by_cmd(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z37fpc_handle_stop_fpc_transition_by_cmdPvS_S_(void) {
    ALOGD("_Z37fpc_handle_stop_fpc_transition_by_cmdPvS_S_() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKn = NULL;

/* Exported Object: typeinfo name for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKj = NULL;

/* Exported Object: vtable for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt10bad_typeid = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD2Ev() called");
    return 0;
}

/* Demangled: fpc_handle_gen_input_for_ideal_pc_level_estimation(void*, pc_estimation_input_data_t*) */
extern "C" __attribute__((visibility("default"))) int _Z50fpc_handle_gen_input_for_ideal_pc_level_estimationPvP26pc_estimation_input_data_t(void) {
    ALOGD("_Z50fpc_handle_gen_input_for_ideal_pc_level_estimationPvP26pc_estimation_input_data_t() called");
    return 0;
}

/* Demangled: fpc_tuning_check_sum(unsigned int*, unsigned int*, void*, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z20fpc_tuning_check_sumPjS_Pvt(void) {
    ALOGD("_Z20fpc_tuning_check_sumPjS_Pvt() called");
    return 0;
}

/* Exported Object: typeinfo name for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPv = NULL;

/* Exported Object: typeinfo name for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPn = NULL;

/* Demangled: __cxa_get_globals_fast */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals_fast(void) {
    ALOGD("__cxa_get_globals_fast() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC1Ev(void) {
    ALOGD("_ZNSt10bad_typeidC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPj = NULL;

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Exported Object: std::nothrow */
extern "C" __attribute__((visibility("default"))) void* _ZSt7nothrow = NULL;

/* Exported Object: typeinfo name for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPh = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__function_type_infoE = NULL;

/* Exported Object: typeinfo name for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPf = NULL;

/* Demangled: __cxa_guard_release */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_release(void) {
    ALOGD("__cxa_guard_release() called");
    return 0;
}

/* Demangled: alfpc_wrapper_cmd_call(alfpc_cmd_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z22alfpc_wrapper_cmd_callP11alfpc_cmd_tPv(void) {
    ALOGD("_Z22alfpc_wrapper_cmd_callP11alfpc_cmd_tPv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: aft_face_is_noface(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18aft_face_is_nofacePvi(void) {
    ALOGD("_Z18aft_face_is_nofacePvi() called");
    return 0;
}

/* Exported Object: typeinfo for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPa = NULL;

/* Exported Object: typeinfo name for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPx = NULL;

/* Demangled: std::get_terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt13get_terminatev(void) {
    ALOGD("_ZSt13get_terminatev() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: vtable for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD2Ev(void) {
    ALOGD("_ZNSt13exception_ptrD2Ev() called");
    return 0;
}

/* Demangled: aft_face_cal_center(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int*, unsigned int*, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z19aft_face_cal_centerjjjjPjS_S_(void) {
    ALOGD("_Z19aft_face_cal_centerjjjjPjS_S_() called");
    return 0;
}

/* Demangled: fpc_tuning_load_default_pc_param_manual_mode(alfpc_tuning_pc_param_manual_mode_t*) */
extern "C" __attribute__((visibility("default"))) int _Z44fpc_tuning_load_default_pc_param_manual_modeP35alfpc_tuning_pc_param_manual_mode_t(void) {
    ALOGD("_Z44fpc_tuning_load_default_pc_param_manual_modeP35alfpc_tuning_pc_param_manual_mode_t() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for void */
extern "C" __attribute__((visibility("default"))) void* _ZTIv = NULL;

/* Exported Object: typeinfo name for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPt = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD1Ev(void) {
    ALOGD("_ZNSt10bad_typeidD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Exported Object: typeinfo for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDh = NULL;

/* Exported Object: typeinfo for long */
extern "C" __attribute__((visibility("default"))) void* _ZTIl = NULL;

/* Exported Object: typeinfo for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDn = NULL;

/* Demangled: operator delete(void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvmSt11align_val_t(void) {
    ALOGD("_ZdlPvmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTIj = NULL;

/* Demangled: face_analysis_find_face_idx_farth_from_center(unsigned char, unsigned int*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z45face_analysis_find_face_idx_farth_from_centerhPjPhS0_(void) {
    ALOGD("_Z45face_analysis_find_face_idx_farth_from_centerhPjPhS0_() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt20bad_array_new_length = NULL;

/* Exported Object: typeinfo for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIx = NULL;

/* Exported Object: typeinfo for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTIt = NULL;

/* Demangled: fpc_tuning_read_data(alfpc_object_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20fpc_tuning_read_dataP14alfpc_object_tPv(void) {
    ALOGD("_Z20fpc_tuning_read_dataP14alfpc_object_tPv() called");
    return 0;
}

/* Demangled: aft_face_counter(void*) */
extern "C" __attribute__((visibility("default"))) int _Z16aft_face_counterPv(void) {
    ALOGD("_Z16aft_face_counterPv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Exported Object: typeinfo for double */
extern "C" __attribute__((visibility("default"))) void* _ZTId = NULL;

/* Exported Object: typeinfo for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIb = NULL;

/* Demangled: std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*, std::__ndk1::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Exported Object: typeinfo for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIn = NULL;

/* Exported Object: typeinfo name for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11range_error = NULL;

/* Demangled: alLDC_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alLDC_VersionInfo_Get(void) {
    ALOGD("alLDC_VersionInfo_Get() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC1Ev() called");
    return 0;
}

/* Demangled: aft_face_sort_score(void*) */
extern "C" __attribute__((visibility("default"))) int _Z19aft_face_sort_scorePv(void) {
    ALOGD("_Z19aft_face_sort_scorePv() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD2Ev() called");
    return 0;
}

/* Demangled: af_debug_log_enable_logfile(int) */
extern "C" __attribute__((visibility("default"))) int _Z27af_debug_log_enable_logfilei(void) {
    ALOGD("_Z27af_debug_log_enable_logfilei() called");
    return 0;
}

/* Demangled: aft_face_cal_roisz_score(aft_face_center_t*, aft_face_center_t*) */
extern "C" __attribute__((visibility("default"))) int _Z24aft_face_cal_roisz_scoreP17aft_face_center_tS0_(void) {
    ALOGD("_Z24aft_face_cal_roisz_scoreP17aft_face_center_tS0_() called");
    return 0;
}

/* Exported Object: vtable for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13bad_exception = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD1Ev(void) {
    ALOGD("_ZNSt8bad_castD1Ev() called");
    return 0;
}

/* Demangled: std::set_terminate(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt13set_terminatePFvvE(void) {
    ALOGD("_ZSt13set_terminatePFvvE() called");
    return 0;
}

/* Exported Object: typeinfo name for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPb = NULL;

/* Demangled: fpc_handle_face_disappear_reset(void*) */
extern "C" __attribute__((visibility("default"))) int _Z31fpc_handle_face_disappear_resetPv(void) {
    ALOGD("_Z31fpc_handle_face_disappear_resetPv() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC2ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::join() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread4joinEv(void) {
    ALOGD("_ZNSt6__ndk16thread4joinEv() called");
    return 0;
}

/* Exported Object: typeinfo name for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPl = NULL;

/* Demangled: pc_initialize(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z13pc_initializePvS_(void) {
    ALOGD("_Z13pc_initializePvS_() called");
    return 0;
}

/* Demangled: pc_generate_distortion_curve_by_focal_length(alfpc_object_t*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z44pc_generate_distortion_curve_by_focal_lengthP14alfpc_object_th(void) {
    ALOGD("_Z44pc_generate_distortion_curve_by_focal_lengthP14alfpc_object_th() called");
    return 0;
}

/* Demangled: face_ignore_face_out_of_crop_region(alfpc_crop_region_t*, alfpc_faces_info_t*, face_analysis_data_t*) */
extern "C" __attribute__((visibility("default"))) int _Z35face_ignore_face_out_of_crop_regionP19alfpc_crop_region_tP18alfpc_faces_info_tP20face_analysis_data_t(void) {
    ALOGD("_Z35face_ignore_face_out_of_crop_regionP19alfpc_crop_region_tP18alfpc_faces_info_tP20face_analysis_data_t() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD1Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPd = NULL;

/* Exported Object: typeinfo name for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDs = NULL;

/* Demangled: std::__ndk1::__undeclare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__undeclare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk121__undeclare_reachableEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex6unlockEv() called");
    return 0;
}

/* Exported Object: typeinfo for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDs = NULL;

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDi = NULL;

/* Exported Object: typeinfo for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPy = NULL;

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPs = NULL;

/* Demangled: alfpc_load_func */
extern "C" __attribute__((visibility("default"))) int alfpc_load_func(void) {
    ALOGD("alfpc_load_func() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: __cxa_free_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_dependent_exception(void) {
    ALOGD("__cxa_free_dependent_exception() called");
    return 0;
}

/* Demangled: af_util_cal_center_position(unsigned short*, unsigned short*, unsigned short, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z27af_util_cal_center_positionPtS_tttt(void) {
    ALOGD("_Z27af_util_cal_center_positionPtS_tttt() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC1Ev() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: std::__ndk1::defer_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110defer_lockE = NULL;

/* Demangled: aft_face_estimation(void*) */
extern "C" __attribute__((visibility("default"))) int _Z19aft_face_estimationPv(void) {
    ALOGD("_Z19aft_face_estimationPv() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED2Ev() called");
    return 0;
}

/* Demangled: alLDC_Init_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_Init_v2(void) {
    ALOGD("alLDC_Init_v2() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD2Ev() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD0Ev(void) {
    ALOGD("_ZNSt9bad_allocD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::hardware_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread20hardware_concurrencyEv(void) {
    ALOGD("_ZNSt6__ndk16thread20hardware_concurrencyEv() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD2Ev() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC1ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD0Ev(void) {
    ALOGD("_ZNSt12length_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__add_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count10__add_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count10__add_weakEv() called");
    return 0;
}

/* Demangled: fpc_handle_manual_level_setting(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z31fpc_handle_manual_level_settingPvS_(void) {
    ALOGD("_Z31fpc_handle_manual_level_settingPvS_() called");
    return 0;
}

/* Exported Object: g_e_23mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_23mm_distortion_curve = NULL;

/* Demangled: check_sum */
extern "C" __attribute__((visibility("default"))) int check_sum(void) {
    ALOGD("check_sum() called");
    return 0;
}

/* Exported Object: g_e_35mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_35mm_distortion_curve = NULL;

/* Demangled: alLDC_Get_Current_FPC_Ratio */
extern "C" __attribute__((visibility("default"))) int alLDC_Get_Current_FPC_Ratio(void) {
    ALOGD("alLDC_Get_Current_FPC_Ratio() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC1Ev(void) {
    ALOGD("_ZNSt9bad_allocC1Ev() called");
    return 0;
}

/* Demangled: pc_generate_distortion_curve_by_coef_k(double, double*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z38pc_generate_distortion_curve_by_coef_kdPdh(void) {
    ALOGD("_Z38pc_generate_distortion_curve_by_coef_kdPdh() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC2EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: aft_face_cal_dist_change_ratio(aft_face_sort_info_t*, aft_face_sort_info_t*) */
extern "C" __attribute__((visibility("default"))) int _Z30aft_face_cal_dist_change_ratioP20aft_face_sort_info_tS0_(void) {
    ALOGD("_Z30aft_face_cal_dist_change_ratioP20aft_face_sort_info_tS0_() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Exported Object: typeinfo for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKg = NULL;

/* Demangled: __cxa_deleted_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_deleted_virtual(void) {
    ALOGD("__cxa_deleted_virtual() called");
    return 0;
}

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Exported Object: typeinfo for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKi = NULL;

/* Exported Object: vtable for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112future_errorE = NULL;

/* Exported Object: typeinfo name for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDi = NULL;

/* Exported Object: typeinfo for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKm = NULL;

/* Exported Object: g_e_26mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_26mm_distortion_curve = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD1Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKc = NULL;

/* Demangled: operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnwmSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKe = NULL;

/* Exported Object: typeinfo for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKa = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: vtable for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11logic_error = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD0Ev(void) {
    ALOGD("_ZNSt10bad_typeidD0Ev() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD0Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDs = NULL;

/* Exported Object: typeinfo name for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::future<void>::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvE3getEv(void) {
    ALOGD("_ZNSt6__ndk16futureIvE3getEv() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD2Ev(void) {
    ALOGD("_ZNSt9bad_allocD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::system_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115system_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115system_categoryEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc() called");
    return 0;
}

/* Exported Object: std::__ndk1::try_to_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk111try_to_lockE = NULL;

/* Exported Object: vtable for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: alLDC_Video_Run_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_Video_Run_v2(void) {
    ALOGD("alLDC_Video_Run_v2() called");
    return 0;
}

/* Exported Object: typeinfo for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKs = NULL;

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: fpc_tuning_load_default_pc_param_crop_handle(alfpc_tuning_crop_handle_t*) */
extern "C" __attribute__((visibility("default"))) int _Z44fpc_tuning_load_default_pc_param_crop_handleP26alfpc_tuning_crop_handle_t(void) {
    ALOGD("_Z44fpc_tuning_load_default_pc_param_crop_handleP26alfpc_tuning_crop_handle_t() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKo = NULL;

/* Exported Object: typeinfo for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDi = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: alLDC_Map_Location */
extern "C" __attribute__((visibility("default"))) int alLDC_Map_Location(void) {
    ALOGD("alLDC_Map_Location() called");
    return 0;
}

/* Demangled: __dynamic_cast */
extern "C" __attribute__((visibility("default"))) int __dynamic_cast(void) {
    ALOGD("__dynamic_cast() called");
    return 0;
}

/* Demangled: af_util_memset(void*, int, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14af_util_memsetPvijPKc(void) {
    ALOGD("_Z14af_util_memsetPvijPKc() called");
    return 0;
}

/* Exported Object: vtable for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16nested_exception = NULL;

/* Demangled: alLDC_Video_Init_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_Video_Init_v2(void) {
    ALOGD("alLDC_Video_Init_v2() called");
    return 0;
}

/* Demangled: af_debug_log_set_customer_priority_lv(int) */
extern "C" __attribute__((visibility("default"))) int _Z37af_debug_log_set_customer_priority_lvi(void) {
    ALOGD("_Z37af_debug_log_set_customer_priority_lvi() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt20bad_array_new_length = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: fpc_mgr_load_kernel(void*) */
extern "C" __attribute__((visibility("default"))) int _Z19fpc_mgr_load_kernelPv(void) {
    ALOGD("_Z19fpc_mgr_load_kernelPv() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exceptions */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exceptions(void) {
    ALOGD("__cxa_uncaught_exceptions() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category23default_error_conditionEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category23default_error_conditionEi() called");
    return 0;
}

/* Demangled: std::__ndk1::generic_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116generic_categoryEv(void) {
    ALOGD("_ZNSt6__ndk116generic_categoryEv() called");
    return 0;
}

/* Demangled: af_util_timeout_get_diff(af_util_timeout_sof_t*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z24af_util_timeout_get_diffP21af_util_timeout_sof_tj(void) {
    ALOGD("_Z24af_util_timeout_get_diffP21af_util_timeout_sof_tj() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_all() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_allEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_allEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::__init(std::__ndk1::error_code const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_error6__initERKNS_10error_codeENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_error6__initERKNS_10error_codeENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for char */
extern "C" __attribute__((visibility("default"))) void* _ZTSc = NULL;

/* Demangled: __cxa_get_globals */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals(void) {
    ALOGD("__cxa_get_globals() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__enum_type_infoE = NULL;

/* Exported Object: typeinfo for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTISt10bad_typeid = NULL;

/* Demangled: std::__ndk1::shared_future<void>::operator=(std::__ndk1::shared_future<void> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvEaSERKS1_(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvEaSERKS1_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: __system_property_get */
extern "C" __attribute__((visibility("default"))) int __system_property_get(void) {
    ALOGD("__system_property_get() called");
    return 0;
}

/* Exported Object: vtable for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12domain_error = NULL;

/* Demangled: af_debug_log_set_priority_lv_new(int) */
extern "C" __attribute__((visibility("default"))) int _Z32af_debug_log_set_priority_lv_newi(void) {
    ALOGD("_Z32af_debug_log_set_priority_lv_newi() called");
    return 0;
}

/* Demangled: fpc_handle_runtime_data_initialize(void*) */
extern "C" __attribute__((visibility("default"))) int _Z34fpc_handle_runtime_data_initializePv(void) {
    ALOGD("_Z34fpc_handle_runtime_data_initializePv() called");
    return 0;
}

/* Demangled: fpc_handle_face_reset_rpt(void*) */
extern "C" __attribute__((visibility("default"))) int _Z25fpc_handle_face_reset_rptPv(void) {
    ALOGD("_Z25fpc_handle_face_reset_rptPv() called");
    return 0;
}

/* Exported Object: g_e_22mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_22mm_distortion_curve = NULL;

/* Demangled: pc_check_tolerance(void*, unsigned char, unsigned char, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z18pc_check_tolerancePvhhPh(void) {
    ALOGD("_Z18pc_check_tolerancePvhhPh() called");
    return 0;
}

/* Exported Object: typeinfo name for short */
extern "C" __attribute__((visibility("default"))) void* _ZTSs = NULL;

/* Exported Object: typeinfo name for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTSa = NULL;

/* Exported Object: typeinfo name for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16bad_array_length = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD1Ev(void) {
    ALOGD("_ZNSt15underflow_errorD1Ev() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD2Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD2Ev() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD2Ev(void) {
    ALOGD("_ZNSt11range_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__shared_countE = NULL;

/* Demangled: af_util_timeout_clear(af_util_timeout_sof_t*) */
extern "C" __attribute__((visibility("default"))) int _Z21af_util_timeout_clearP21af_util_timeout_sof_t(void) {
    ALOGD("_Z21af_util_timeout_clearP21af_util_timeout_sof_t() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD0Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for int */
extern "C" __attribute__((visibility("default"))) void* _ZTSi = NULL;

/* Demangled: std::bad_array_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16bad_array_length4whatEv(void) {
    ALOGD("_ZNKSt16bad_array_length4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSg = NULL;

/* Exported Object: vtable for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12length_error = NULL;

/* Demangled: fpc_tuning_load_default_face_param(aft_face_tuning_param_t*) */
extern "C" __attribute__((visibility("default"))) int _Z34fpc_tuning_load_default_face_paramP23aft_face_tuning_param_t(void) {
    ALOGD("_Z34fpc_tuning_load_default_face_paramP23aft_face_tuning_param_t() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC2ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC2ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTSe = NULL;

/* Exported Object: typeinfo for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16nested_exception = NULL;

/* Demangled: std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&, std::__ndk1::unique_lock<std::__ndk1::mutex>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD1Ev(void) {
    ALOGD("_ZNSt13exception_ptrD1Ev() called");
    return 0;
}

/* Demangled: std::nested_exception::rethrow_nested() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16nested_exception14rethrow_nestedEv(void) {
    ALOGD("_ZNKSt16nested_exception14rethrow_nestedEv() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC2Ev() called");
    return 0;
}

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC1Ev(void) {
    ALOGD("_ZNSt8bad_castC1Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC2Ev(void) {
    ALOGD("_ZNSt10bad_typeidC2Ev() called");
    return 0;
}

/* Demangled: aft_face_clean_runtime_data(void*) */
extern "C" __attribute__((visibility("default"))) int _Z27aft_face_clean_runtime_dataPv(void) {
    ALOGD("_Z27aft_face_clean_runtime_dataPv() called");
    return 0;
}

/* Demangled: fpc_mgr_init(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z12fpc_mgr_initPvS_S_(void) {
    ALOGD("_Z12fpc_mgr_initPvS_S_() called");
    return 0;
}

/* Demangled: fpc_handle_set_focus_face(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z25fpc_handle_set_focus_facePvS_(void) {
    ALOGD("_Z25fpc_handle_set_focus_facePvS_() called");
    return 0;
}

/* Demangled: std::set_unexpected(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt14set_unexpectedPFvvE(void) {
    ALOGD("_ZSt14set_unexpectedPFvvE() called");
    return 0;
}

/* Exported Object: vtable for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11range_error = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD2Ev(void) {
    ALOGD("_ZNSt8bad_castD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSw = NULL;

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD0Ev(void) {
    ALOGD("_ZNSt11logic_errorD0Ev() called");
    return 0;
}

/* Exported Object: g_e_19mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_19mm_distortion_curve = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: std::set_new_handler(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt15set_new_handlerPFvvE(void) {
    ALOGD("_ZSt15set_new_handlerPFvvE() called");
    return 0;
}

/* Exported Object: vtable for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12out_of_range = NULL;

/* Exported Object: g_e_25mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_25mm_distortion_curve = NULL;

/* Exported Object: typeinfo name for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSo = NULL;

/* Demangled: aft_face_clean(void*) */
extern "C" __attribute__((visibility("default"))) int _Z14aft_face_cleanPv(void) {
    ALOGD("_Z14aft_face_cleanPv() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::future_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115future_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115future_categoryEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTSm = NULL;

/* Exported Object: typeinfo name for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSy = NULL;

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD2Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD2Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt20bad_array_new_length = NULL;

/* Demangled: alLDC_Video_Deinit_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_Video_Deinit_v2(void) {
    ALOGD("alLDC_Video_Deinit_v2() called");
    return 0;
}

/* Demangled: af_cmd_getprop(char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z14af_cmd_getpropPKcPc(void) {
    ALOGD("_Z14af_cmd_getpropPKcPc() called");
    return 0;
}

/* Demangled: aft_face_log(void*) */
extern "C" __attribute__((visibility("default"))) int _Z12aft_face_logPv(void) {
    ALOGD("_Z12aft_face_logPv() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKy = NULL;

/* Exported Object: typeinfo for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKw = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD0Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD1Ev(void) {
    ALOGD("_ZNSt13runtime_errorD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE9set_valueEv() called");
    return 0;
}

/* Exported Object: g_e_18mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_18mm_distortion_curve = NULL;

/* Demangled: aft_face_appear(void*, aft_face_state_n) */
extern "C" __attribute__((visibility("default"))) int _Z15aft_face_appearPv16aft_face_state_n(void) {
    ALOGD("_Z15aft_face_appearPv16aft_face_state_n() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD0Ev(void) {
    ALOGD("_ZNSt14overflow_errorD0Ev() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD0Ev(void) {
    ALOGD("_ZNSt8bad_castD0Ev() called");
    return 0;
}

/* Exported Object: g_e_21mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_21mm_distortion_curve = NULL;

/* Demangled: std::__ndk1::__sp_mut::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut6unlockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut6unlockEv() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD0Ev(void) {
    ALOGD("_ZNSt11range_errorD0Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD2Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD2Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC1EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::runtime_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13runtime_error4whatEv(void) {
    ALOGD("_ZNKSt13runtime_error4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD1Ev(void) {
    ALOGD("_ZNSt9type_infoD1Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD2Ev() called");
    return 0;
}

/* Exported Object: __cxa_terminate_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_terminate_handler = NULL;

/* Demangled: std::__ndk1::error_category::error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryC2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryC2Ev() called");
    return 0;
}

/* Demangled: __gxx_personality_v0 */
extern "C" __attribute__((visibility("default"))) int __gxx_personality_v0(void) {
    ALOGD("__gxx_personality_v0() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC1ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC1ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: aft_face_cal_roisz_change_ratio(aft_face_sort_info_t*, aft_face_sort_info_t*) */
extern "C" __attribute__((visibility("default"))) int _Z31aft_face_cal_roisz_change_ratioP20aft_face_sort_info_tS0_(void) {
    ALOGD("_Z31aft_face_cal_roisz_change_ratioP20aft_face_sort_info_tS0_() called");
    return 0;
}

/* Demangled: alfpc_wrapper_init_call(void*, void*, alfpc_ldc_request_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23alfpc_wrapper_init_callPvS_P19alfpc_ldc_request_t(void) {
    ALOGD("_Z23alfpc_wrapper_init_callPvS_P19alfpc_ldc_request_t() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD0Ev() called");
    return 0;
}

/* Demangled: aft_face_find_sort_idx_by_id(aft_face_sort_info_t*, int) */
extern "C" __attribute__((visibility("default"))) int _Z28aft_face_find_sort_idx_by_idP20aft_face_sort_info_ti(void) {
    ALOGD("_Z28aft_face_find_sort_idx_by_idP20aft_face_sort_info_ti() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD1Ev(void) {
    ALOGD("_ZNSt12domain_errorD1Ev() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD2Ev(void) {
    ALOGD("_ZNSt11logic_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112system_errorE = NULL;

/* Demangled: fpc_tuning_load_default_pc_param_still_mode(alfpc_tuning_pc_param_by_mode_t*) */
extern "C" __attribute__((visibility("default"))) int _Z43fpc_tuning_load_default_pc_param_still_modeP31alfpc_tuning_pc_param_by_mode_t(void) {
    ALOGD("_Z43fpc_tuning_load_default_pc_param_still_modeP31alfpc_tuning_pc_param_by_mode_t() called");
    return 0;
}

/* Demangled: face_analysis_find_face_idx_closest_to_center(unsigned char, unsigned int*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z45face_analysis_find_face_idx_closest_to_centerhPjPhS0_(void) {
    ALOGD("_Z45face_analysis_find_face_idx_closest_to_centerhPjPhS0_() called");
    return 0;
}

/* Demangled: fpc_handle_set_mode(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19fpc_handle_set_modePvS_(void) {
    ALOGD("_Z19fpc_handle_set_modePvS_() called");
    return 0;
}

/* Demangled: std::bad_exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13bad_exception4whatEv(void) {
    ALOGD("_ZNKSt13bad_exception4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::declare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117declare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk117declare_reachableEPv() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD0Ev(void) {
    ALOGD("_ZNSt13runtime_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: alfpc_get_lib_ver */
extern "C" __attribute__((visibility("default"))) int alfpc_get_lib_ver(void) {
    ALOGD("alfpc_get_lib_ver() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__release_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count14__release_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count14__release_weakEv() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex8try_lockEv() called");
    return 0;
}

/* Demangled: alfpc_wrapper_close_call(void*) */
extern "C" __attribute__((visibility("default"))) int _Z24alfpc_wrapper_close_callPv(void) {
    ALOGD("_Z24alfpc_wrapper_close_callPv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE() called");
    return 0;
}

/* Exported Object: vtable for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9bad_alloc = NULL;

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDi = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD1Ev() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD0Ev(void) {
    ALOGD("_ZNSt15underflow_errorD0Ev() called");
    return 0;
}

/* Demangled: std::current_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt17current_exceptionv(void) {
    ALOGD("_ZSt17current_exceptionv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112future_errorE = NULL;

/* Demangled: aft_face_reset(void*) */
extern "C" __attribute__((visibility("default"))) int _Z14aft_face_resetPv(void) {
    ALOGD("_Z14aft_face_resetPv() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD0Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD0Ev() called");
    return 0;
}

/* Demangled: __cxa_begin_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_begin_catch(void) {
    ALOGD("__cxa_begin_catch() called");
    return 0;
}

/* Exported Object: g_e_27mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_27mm_distortion_curve = NULL;

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC2Ev(void) {
    ALOGD("_ZNSt8bad_castC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKa = NULL;

/* Demangled: __cxa_current_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_current_primary_exception(void) {
    ALOGD("__cxa_current_primary_exception() called");
    return 0;
}

/* Demangled: __cxa_rethrow */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow(void) {
    ALOGD("__cxa_rethrow() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDs = NULL;

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: vtable for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16invalid_argument = NULL;

/* Exported Object: typeinfo name for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKc = NULL;

/* Demangled: __cxa_throw */
extern "C" __attribute__((visibility("default"))) int __cxa_throw(void) {
    ALOGD("__cxa_throw() called");
    return 0;
}

/* Exported Object: typeinfo name for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKe = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9__executeEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9__executeEv() called");
    return 0;
}

/* Exported Object: vtable for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9type_info = NULL;

/* Demangled: std::rethrow_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZSt17rethrow_exceptionSt13exception_ptr(void) {
    ALOGD("_ZSt17rethrow_exceptionSt13exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::undeclare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121undeclare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk121undeclare_no_pointersEPcm() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: vtable for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__shared_countE = NULL;

/* Exported Object: typeinfo for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPl = NULL;

/* Demangled: operator delete(void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPd = NULL;

/* Exported Object: vtable for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__function_type_infoE = NULL;

/* Exported Object: vtable for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt14overflow_error = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD0Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD0Ev() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD0Ev(void) {
    ALOGD("_ZNSt12domain_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDi = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD0Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16nested_exception = NULL;

/* Exported Object: typeinfo for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPn = NULL;

/* Demangled: std::__ndk1::promise<void>::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Demangled: fpc_tuning_load_default_pc_param(alfpc_tuning_pc_param_t*) */
extern "C" __attribute__((visibility("default"))) int _Z32fpc_tuning_load_default_pc_paramP23alfpc_tuning_pc_param_t(void) {
    ALOGD("_Z32fpc_tuning_load_default_pc_paramP23alfpc_tuning_pc_param_t() called");
    return 0;
}

/* Demangled: __cxa_current_exception_type */
extern "C" __attribute__((visibility("default"))) int __cxa_current_exception_type(void) {
    ALOGD("__cxa_current_exception_type() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKy = NULL;

/* Demangled: pc_ideal_pc_level_estimation(void*, pc_estimation_input_data_t*, pc_estimation_out_data_t*) */
extern "C" __attribute__((visibility("default"))) int _Z28pc_ideal_pc_level_estimationPvP26pc_estimation_input_data_tP24pc_estimation_out_data_t(void) {
    ALOGD("_Z28pc_ideal_pc_level_estimationPvP26pc_estimation_input_data_tP24pc_estimation_out_data_t() called");
    return 0;
}

/* Exported Object: typeinfo for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPx = NULL;

/* Demangled: fpc_handle_stop_fpc_transition_during_focusing(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z46fpc_handle_stop_fpc_transition_during_focusingPvS_S_(void) {
    ALOGD("_Z46fpc_handle_stop_fpc_transition_during_focusingPvS_S_() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKw = NULL;

/* Exported Object: typeinfo name for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt15underflow_error = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPj = NULL;

/* Exported Object: typeinfo name for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKi = NULL;

/* Demangled: alfpc_wrapper_process_call(alfpc_process_input_t*, alfpc_process_output_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z26alfpc_wrapper_process_callP21alfpc_process_input_tP22alfpc_process_output_tPv(void) {
    ALOGD("_Z26alfpc_wrapper_process_callP21alfpc_process_input_tP22alfpc_process_output_tPv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKs = NULL;

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD2Ev(void) {
    ALOGD("_ZNSt15underflow_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112bad_weak_ptr4whatEv(void) {
    ALOGD("_ZNKSt6__ndk112bad_weak_ptr4whatEv() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_t(void) {
    ALOGD("_ZnwmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKo = NULL;

/* Exported Object: typeinfo for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPf = NULL;

/* Exported Object: typeinfo for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPh = NULL;

/* Exported Object: typeinfo for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDs = NULL;

/* Exported Object: typeinfo for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTIa = NULL;

/* Demangled: aft_face_state_trans(void*, aft_face_state_n) */
extern "C" __attribute__((visibility("default"))) int _Z20aft_face_state_transPv16aft_face_state_n(void) {
    ALOGD("_Z20aft_face_state_transPv16aft_face_state_n() called");
    return 0;
}

/* Exported Object: typeinfo for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTIe = NULL;

/* Exported Object: typeinfo for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIg = NULL;

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo for int */
extern "C" __attribute__((visibility("default"))) void* _ZTIi = NULL;

/* Exported Object: typeinfo name for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKm = NULL;

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::wait() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4waitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4waitEv() called");
    return 0;
}

/* Exported Object: g_e_28mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_28mm_distortion_curve = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm() called");
    return 0;
}

/* Exported Object: typeinfo name for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKg = NULL;

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD2Ev(void) {
    ALOGD("_ZNSt9exceptionD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi() called");
    return 0;
}

/* Demangled: std::logic_error::operator=(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_erroraSERKS_(void) {
    ALOGD("_ZNSt11logic_erroraSERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_one() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_oneEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_oneEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPm = NULL;

/* Exported Object: typeinfo name for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPy = NULL;

/* Exported Object: typeinfo name for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPi = NULL;

/* Exported Object: typeinfo name for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPg = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: vtable for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC1Ev() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exception(void) {
    ALOGD("__cxa_uncaught_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPe = NULL;

/* Demangled: fpc_handle_crop_info(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20fpc_handle_crop_infoPvS_(void) {
    ALOGD("_Z20fpc_handle_crop_infoPvS_() called");
    return 0;
}

/* Demangled: af_util_memcpy(void*, void*, unsigned int, char const*) */
extern "C" __attribute__((visibility("default"))) int _Z14af_util_memcpyPvS_jPKc(void) {
    ALOGD("_Z14af_util_memcpyPvS_jPKc() called");
    return 0;
}

/* Exported Object: typeinfo for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPb = NULL;

/* Demangled: aft_face_init(void*, void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z13aft_face_initPvS_j(void) {
    ALOGD("_Z13aft_face_initPvS_j() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPw = NULL;

/* Demangled: aft_face_wait(void*, aft_face_state_n) */
extern "C" __attribute__((visibility("default"))) int _Z13aft_face_waitPv16aft_face_state_n(void) {
    ALOGD("_Z13aft_face_waitPv16aft_face_state_n() called");
    return 0;
}

/* Demangled: af_cmd_setprop(char const*, char*) */
extern "C" __attribute__((visibility("default"))) int _Z14af_cmd_setpropPKcPc(void) {
    ALOGD("_Z14af_cmd_setpropPKcPc() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDi = NULL;

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD1Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDs = NULL;

/* Demangled: pc_next_pc_level_estimation(unsigned char*, unsigned char*, unsigned char*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z27pc_next_pc_level_estimationPhS_S_h(void) {
    ALOGD("_Z27pc_next_pc_level_estimationPhS_S_h() called");
    return 0;
}

/* Demangled: alLDC_Deinit_v2 */
extern "C" __attribute__((visibility("default"))) int alLDC_Deinit_v2(void) {
    ALOGD("alLDC_Deinit_v2() called");
    return 0;
}

/* Demangled: fpc_handle_process(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z18fpc_handle_processPvS_S_(void) {
    ALOGD("_Z18fpc_handle_processPvS_S_() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIy = NULL;

/* Exported Object: typeinfo name for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPs = NULL;

/* Exported Object: typeinfo for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIw = NULL;

/* Exported Object: typeinfo name for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPo = NULL;

/* Demangled: operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znwm(void) {
    ALOGD("_Znwm() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD1Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD1Ev() called");
    return 0;
}

/* Demangled: fpc_handle_face_input(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z21fpc_handle_face_inputPvS_(void) {
    ALOGD("_Z21fpc_handle_face_inputPvS_() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTIm = NULL;

/* Demangled: std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(void) {
    ALOGD("_ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE() called");
    return 0;
}

/* Demangled: aft_face_state_handle(void*) */
extern "C" __attribute__((visibility("default"))) int _Z21aft_face_state_handlePv(void) {
    ALOGD("_Z21aft_face_state_handlePv() called");
    return 0;
}

/* Demangled: set_check_sum */
extern "C" __attribute__((visibility("default"))) int set_check_sum(void) {
    ALOGD("set_check_sum() called");
    return 0;
}

/* Exported Object: typeinfo for short */
extern "C" __attribute__((visibility("default"))) void* _ZTIs = NULL;

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD1Ev(void) {
    ALOGD("_ZNSt11range_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char */
extern "C" __attribute__((visibility("default"))) void* _ZTIc = NULL;

/* Exported Object: g_e_30mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_30mm_distortion_curve = NULL;

/* Exported Object: typeinfo for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIo = NULL;

/* Demangled: __cxa_allocate_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_dependent_exception(void) {
    ALOGD("__cxa_allocate_dependent_exception() called");
    return 0;
}

/* Demangled: fpc_mgr_mem_allocate_obj_buf(void*) */
extern "C" __attribute__((visibility("default"))) int _Z28fpc_mgr_mem_allocate_obj_bufPv(void) {
    ALOGD("_Z28fpc_mgr_mem_allocate_obj_bufPv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD1Ev(void) {
    ALOGD("_ZNSt14overflow_errorD1Ev() called");
    return 0;
}

/* Demangled: __cxa_increment_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_increment_exception_refcount(void) {
    ALOGD("__cxa_increment_exception_refcount() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13bad_exception = NULL;

/* Exported Object: typeinfo name for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPa = NULL;

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD0Ev(void) {
    ALOGD("_ZNSt9exceptionD0Ev() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD1Ev(void) {
    ALOGD("_ZNSt9exceptionD1Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvm(void) {
    ALOGD("_ZdaPvm() called");
    return 0;
}

/* Demangled: af_util_timeout_init(af_util_timeout_sof_t*, unsigned int, int) */
extern "C" __attribute__((visibility("default"))) int _Z20af_util_timeout_initP21af_util_timeout_sof_tji(void) {
    ALOGD("_Z20af_util_timeout_initP21af_util_timeout_sof_tji() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: vtable for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::__shared_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112system_errorE = NULL;

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc() called");
    return 0;
}

/* Demangled: aft_face_is_switch_face(void*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z23aft_face_is_switch_facePvj(void) {
    ALOGD("_Z23aft_face_is_switch_facePvj() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD1Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD1Ev() called");
    return 0;
}

/* Demangled: __cxa_guard_abort */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_abort(void) {
    ALOGD("__cxa_guard_abort() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk119__shared_weak_countE = NULL;

/* Exported Object: typeinfo name for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPc = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: std::__ndk1::__get_sp_mut(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__get_sp_mutEPKv(void) {
    ALOGD("_ZNSt6__ndk112__get_sp_mutEPKv() called");
    return 0;
}

/* Demangled: std::runtime_error::operator=(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_erroraSERKS_(void) {
    ALOGD("_ZNSt13runtime_erroraSERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDn = NULL;

/* Exported Object: vtable for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13runtime_error = NULL;

/* Exported Object: typeinfo name for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDh = NULL;

/* Demangled: operator delete(void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_t(void) {
    ALOGD("_ZdlPvSt11align_val_t() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD1Ev(void) {
    ALOGD("_ZNSt11logic_errorD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9exception = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPt = NULL;

/* Demangled: std::__ndk1::timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: typeinfo for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPv = NULL;

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: af_debug_log_new(int, char const*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _Z16af_debug_log_newiPKcS0_z(void) {
    ALOGD("_Z16af_debug_log_newiPKcS0_z() called");
    return 0;
}

/* Demangled: operator delete(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvm(void) {
    ALOGD("_ZdlPvm() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: aft_face_cal_dist_score(aft_face_roi_t*, aft_face_center_t*, aft_face_center_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23aft_face_cal_dist_scoreP14aft_face_roi_tP17aft_face_center_tS2_(void) {
    ALOGD("_Z23aft_face_cal_dist_scoreP14aft_face_roi_tP17aft_face_center_tS2_() called");
    return 0;
}

/* Exported Object: typeinfo for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDn = NULL;

/* Demangled: std::__ndk1::recursive_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__sp_mut::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut4lockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: aft_face_set_focus_face(void*) */
extern "C" __attribute__((visibility("default"))) int _Z23aft_face_set_focus_facePv(void) {
    ALOGD("_Z23aft_face_set_focus_facePv() called");
    return 0;
}

/* Demangled: fpc_state_machine(void*, void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z17fpc_state_machinePvS_S_S_(void) {
    ALOGD("_Z17fpc_state_machinePvS_S_S_() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt14overflow_error = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::copy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4copyEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4copyEv() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk15mutexD2Ev() called");
    return 0;
}

/* Demangled: std::unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt10unexpectedv(void) {
    ALOGD("_ZSt10unexpectedv() called");
    return 0;
}

/* Demangled: fpc_mgr_cmd(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z11fpc_mgr_cmdPvS_(void) {
    ALOGD("_Z11fpc_mgr_cmdPvS_() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk15mutexD1Ev() called");
    return 0;
}

/* Exported Object: g_e_32mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_32mm_distortion_curve = NULL;

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD2Ev(void) {
    ALOGD("_ZNSt9type_infoD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_local_data() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__thread_local_dataEv(void) {
    ALOGD("_ZNSt6__ndk119__thread_local_dataEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16bad_array_length = NULL;

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int __cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Exported Object: typeinfo for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12domain_error = NULL;

/* Exported Object: typeinfo for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKh = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__make_ready() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state12__make_readyEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state12__make_readyEv() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC2Ev() called");
    return 0;
}

/* Demangled: af_debug_log_set_rd_priority_lv(int) */
extern "C" __attribute__((visibility("default"))) int _Z31af_debug_log_set_rd_priority_lvi(void) {
    ALOGD("_Z31af_debug_log_set_rd_priority_lvi() called");
    return 0;
}

/* Exported Object: typeinfo name for half */
extern "C" __attribute__((visibility("default"))) void* _ZTSDh = NULL;

/* Exported Object: typeinfo for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKj = NULL;

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED1Ev() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD2Ev(void) {
    ALOGD("_ZNSt12domain_errorD2Ev() called");
    return 0;
}

/* Demangled: std::logic_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt11logic_error4whatEv(void) {
    ALOGD("_ZNKSt11logic_error4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKl = NULL;

/* Exported Object: typeinfo for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKf = NULL;

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: typeinfo for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKb = NULL;

/* Demangled: af_time_get_system_time(long long*, long long*) */
extern "C" __attribute__((visibility("default"))) int _Z23af_time_get_system_timePxS_(void) {
    ALOGD("_Z23af_time_get_system_timePxS_() called");
    return 0;
}

/* Exported Object: g_e_20mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_20mm_distortion_curve = NULL;

/* Exported Object: typeinfo for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKd = NULL;

/* Demangled: aft_face_process(void*) */
extern "C" __attribute__((visibility("default"))) int _Z16aft_face_processPv(void) {
    ALOGD("_Z16aft_face_processPv() called");
    return 0;
}

/* Demangled: fpc_tuning_print_params(alfpc_tuning_data_t*) */
extern "C" __attribute__((visibility("default"))) int _Z23fpc_tuning_print_paramsP19alfpc_tuning_data_t(void) {
    ALOGD("_Z23fpc_tuning_print_paramsP19alfpc_tuning_data_t() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTSDn = NULL;

/* Exported Object: std::__ndk1::allocator_arg */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk113allocator_argE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: std::terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt9terminatev(void) {
    ALOGD("_ZSt9terminatev() called");
    return 0;
}

/* Demangled: fpc_handle_face_count(void*) */
extern "C" __attribute__((visibility("default"))) int _Z21fpc_handle_face_countPv(void) {
    ALOGD("_Z21fpc_handle_face_countPv() called");
    return 0;
}

/* Demangled: std::bad_typeid::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt10bad_typeid4whatEv(void) {
    ALOGD("_ZNKSt10bad_typeid4whatEv() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD2Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKt = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::__throw_bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZSt17__throw_bad_allocv(void) {
    ALOGD("_ZSt17__throw_bad_allocv() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC1Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDh = NULL;

/* Demangled: std::__ndk1::timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count16__release_sharedEv() called");
    return 0;
}

/* Exported Object: typeinfo for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKn = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9set_valueEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112system_errorE = NULL;

/* Exported Object: vtable for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt15underflow_error = NULL;

/* Demangled: std::uncaught_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt18uncaught_exceptionv(void) {
    ALOGD("_ZSt18uncaught_exceptionv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: __cxa_call_unexpected */
extern "C" __attribute__((visibility("default"))) int __cxa_call_unexpected(void) {
    ALOGD("__cxa_call_unexpected() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex4lockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13bad_exception = NULL;

/* Demangled: std::__ndk1::__throw_system_error(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__throw_system_errorEiPKc(void) {
    ALOGD("_ZNSt6__ndk120__throw_system_errorEiPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count4lockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count4lockEv() called");
    return 0;
}

/* Demangled: std::bad_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt8bad_cast4whatEv(void) {
    ALOGD("_ZNKSt8bad_cast4whatEv() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD2Ev(void) {
    ALOGD("_ZNSt13runtime_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Demangled: std::__ndk1::get_pointer_safety() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118get_pointer_safetyEv(void) {
    ALOGD("_ZNSt6__ndk118get_pointer_safetyEv() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD0Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD0Ev() called");
    return 0;
}

/* Demangled: fpc_mgr_process(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z15fpc_mgr_processPvS_S_(void) {
    ALOGD("_Z15fpc_mgr_processPvS_S_() called");
    return 0;
}

/* Demangled: fpc_handle_reduce_fpc_level_for_crop(void*, void*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z36fpc_handle_reduce_fpc_level_for_cropPvS_S_(void) {
    ALOGD("_Z36fpc_handle_reduce_fpc_level_for_cropPvS_S_() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: __cxa_free_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_exception(void) {
    ALOGD("__cxa_free_exception() called");
    return 0;
}

/* Demangled: pc_generate_distortion_curve_cpy(alfpc_object_t*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z32pc_generate_distortion_curve_cpyP14alfpc_object_tPd(void) {
    ALOGD("_Z32pc_generate_distortion_curve_cpyP14alfpc_object_tPd() called");
    return 0;
}

/* Demangled: face_analysis_coordinate_transform_center(int, int, int, int, int, int, unsigned int*) */
extern "C" __attribute__((visibility("default"))) int _Z41face_analysis_coordinate_transform_centeriiiiiiPj(void) {
    ALOGD("_Z41face_analysis_coordinate_transform_centeriiiiiiPj() called");
    return 0;
}

/* Demangled: std::exception_ptr std::make_exception_ptr<std::__ndk1::future_error>(std::__ndk1::future_error) */
extern "C" __attribute__((visibility("default"))) int _ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_(void) {
    ALOGD("_ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_t(void) {
    ALOGD("_ZnamSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::promise<void>::set_value_at_thread_exit() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE24set_value_at_thread_exitEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE24set_value_at_thread_exitEv() called");
    return 0;
}

/* Exported Object: g_e_17mm_distortion_curve */
extern "C" __attribute__((visibility("default"))) void* g_e_17mm_distortion_curve = NULL;

/* Demangled: __cxa_guard_acquire */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_acquire(void) {
    ALOGD("__cxa_guard_acquire() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTSj = NULL;

/* Exported Object: typeinfo name for long */
extern "C" __attribute__((visibility("default"))) void* _ZTSl = NULL;

/* Demangled: operator delete(void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::bad_alloc::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9bad_alloc4whatEv(void) {
    ALOGD("_ZNKSt9bad_alloc4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__call_onceERVmPvPFvS2_E(void) {
    ALOGD("_ZNSt6__ndk111__call_onceERVmPvPFvS2_E() called");
    return 0;
}
