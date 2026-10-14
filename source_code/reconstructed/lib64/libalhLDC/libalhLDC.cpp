/*
 * Reverse-Engineered Source for: libalhLDC.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libalhLDC"

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
#include "libalhLDC.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetCommandQueueInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL21clGetCommandQueueInfoE = NULL;

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD2Ev(void) {
    ALOGD("_ZNSt11logic_errorD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_root */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_root __asm__("__kmp_root") = NULL;

/* Demangled: std::__ndk1::timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetProgramBuildInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL21clGetProgramBuildInfoE = NULL;

/* Demangled: __kmpc_atomic_fixed2_mul_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_mul_float8(void) __asm__("__kmpc_atomic_fixed2_mul_float8");
int fn___kmpc_atomic_fixed2_mul_float8(void) {
    ALOGD("__kmpc_atomic_fixed2_mul_float8() called");
    return 0;
}

/* Exported Object: __cxa_terminate_handler */
extern "C" __attribute__((visibility("default"))) void* obj___cxa_terminate_handler __asm__("__cxa_terminate_handler") = NULL;

/* Demangled: __kmp_push_workshare */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_workshare(void) __asm__("__kmp_push_workshare");
int fn___kmp_push_workshare(void) {
    ALOGD("__kmp_push_workshare() called");
    return 0;
}

/* Demangled: GC_Point3D_Normalization(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z24GC_Point3D_NormalizationPdS_S_S_i(void) {
    ALOGD("_Z24GC_Point3D_NormalizationPdS_S_S_i() called");
    return 0;
}

/* Demangled: PackDataDecryption_V3(alDCAL_PACKDATA_V3*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataDecryption_V3P18alDCAL_PACKDATA_V3PhS1_(void) {
    ALOGD("_Z21PackDataDecryption_V3P18alDCAL_PACKDATA_V3PhS1_() called");
    return 0;
}

/* Demangled: PackDataEncryption_V4(unsigned char*, unsigned char*, int, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataEncryption_V4PhS_iS_i(void) {
    ALOGD("_Z21PackDataEncryption_V4PhS_iS_i() called");
    return 0;
}

/* Exported Object: g_aeImageHeight */
extern "C" __attribute__((visibility("default"))) void* g_aeImageHeight = NULL;

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKS_() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_max(void) __asm__("__kmpc_atomic_fixed4_max");
int fn___kmpc_atomic_fixed4_max(void) {
    ALOGD("__kmpc_atomic_fixed4_max() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD0Ev(void) {
    ALOGD("_ZNSt10bad_typeidD0Ev() called");
    return 0;
}

/* Demangled: __kmp_enter_single */
extern "C" __attribute__((visibility("default"))) int fn___kmp_enter_single(void) __asm__("__kmp_enter_single");
int fn___kmp_enter_single(void) {
    ALOGD("__kmp_enter_single() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC2Ev() called");
    return 0;
}

/* Demangled: __kmpc_doacross_init */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_doacross_init(void) __asm__("__kmpc_doacross_init");
int fn___kmpc_doacross_init(void) {
    ALOGD("__kmpc_doacross_init() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD1Ev(void) {
    ALOGD("_ZNSt11range_errorD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: typeinfo for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPa = NULL;

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD2Ev() called");
    return 0;
}

/* Demangled: __kmp_str_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_free(void) __asm__("__kmp_str_free");
int fn___kmp_str_free(void) {
    ALOGD("__kmp_str_free() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC2Ev() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx10_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx10_sub(void) __asm__("__kmpc_atomic_cmplx10_sub");
int fn___kmpc_atomic_cmplx10_sub(void) {
    ALOGD("__kmpc_atomic_cmplx10_sub() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPb = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::__ndk1::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk15mutexD2Ev() called");
    return 0;
}

/* Demangled: std::logic_error::operator=(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_erroraSERKS_(void) {
    ALOGD("_ZNSt11logic_erroraSERKS_() called");
    return 0;
}

/* Demangled: __kmp_resume_32 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_resume_32(void) __asm__("__kmp_resume_32");
int fn___kmp_resume_32(void) {
    ALOGD("__kmp_resume_32() called");
    return 0;
}

/* Demangled: halide_error_param_too_large_f64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_large_f64(void) {
    ALOGD("halide_error_param_too_large_f64() called");
    return 0;
}

/* Demangled: GC_DepthToDisparity_Baseline(double*, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z28GC_DepthToDisparity_BaselinePdddd(void) {
    ALOGD("_Z28GC_DepthToDisparity_BaselinePdddd() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueReadBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL19clEnqueueReadBufferE = NULL;

/* Exported Object: typeinfo name for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKl = NULL;

/* Exported Object: typeinfo name for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKm = NULL;

/* Exported Object: __kmp_hws_requested */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_requested __asm__("__kmp_hws_requested") = NULL;

/* Demangled: __kmp_abort_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_abort_thread(void) __asm__("__kmp_abort_thread");
int fn___kmp_abort_thread(void) {
    ALOGD("__kmp_abort_thread() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::hardware_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread20hardware_concurrencyEv(void) {
    ALOGD("_ZNSt6__ndk16thread20hardware_concurrencyEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKh = NULL;

/* Demangled: GC_compute_RectificationMatrix_Rectify_BothCams(double*, double*, double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z47GC_compute_RectificationMatrix_Rectify_BothCamsPdS_S_S_S_S_S_(void) {
    ALOGD("_Z47GC_compute_RectificationMatrix_Rectify_BothCamsPdS_S_S_S_S_S_() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKn = NULL;

/* Exported Object: typeinfo for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13bad_exception = NULL;

/* Exported Object: typeinfo name for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKj = NULL;

/* Exported Object: typeinfo for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDs = NULL;

/* Demangled: halide_mutex_unlock */
extern "C" __attribute__((visibility("default"))) int halide_mutex_unlock(void) {
    ALOGD("halide_mutex_unlock() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnamSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: ldc8_chroma_gpu */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_gpu(void) {
    ALOGD("ldc8_chroma_gpu() called");
    return 0;
}

/* Exported Object: __kmp_allThreadsSpecified */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_allThreadsSpecified __asm__("__kmp_allThreadsSpecified") = NULL;

/* Demangled: GC_getEulerAngles(double*, double (*) [3]) */
extern "C" __attribute__((visibility("default"))) int _Z17GC_getEulerAnglesPdPA3_d(void) {
    ALOGD("_Z17GC_getEulerAnglesPdPA3_d() called");
    return 0;
}

/* Demangled: __kmp_init_implicit_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_implicit_task(void) __asm__("__kmp_init_implicit_task");
int fn___kmp_init_implicit_task(void) {
    ALOGD("__kmp_init_implicit_task() called");
    return 0;
}

/* Exported Object: vtable for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12length_error = NULL;

/* Demangled: kmpc_set_library */
extern "C" __attribute__((visibility("default"))) int kmpc_set_library(void) {
    ALOGD("kmpc_set_library() called");
    return 0;
}

/* Exported Object: __kmp_version_build */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_build __asm__("__kmp_version_build") = NULL;

/* Demangled: KMPNativeAffinity::allocate_mask_array(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity19allocate_mask_arrayEi(void) {
    ALOGD("_ZN17KMPNativeAffinity19allocate_mask_arrayEi() called");
    return 0;
}

/* Exported Object: g_aeLDCDistRate */
extern "C" __attribute__((visibility("default"))) void* g_aeLDCDistRate = NULL;

/* Exported Object: typeinfo name for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKg = NULL;

/* Exported Object: Halide::Runtime::Internal::custom_malloc */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal13custom_mallocE = NULL;

/* Demangled: DotProduct(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10DotProductPdS_i(void) {
    ALOGD("_Z10DotProductPdS_i() called");
    return 0;
}

/* Exported Object: __kmp_indirect_set_flags */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_set_flags __asm__("__kmp_indirect_set_flags") = NULL;

/* Exported Object: __kmp_malloc_pool_incr */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_malloc_pool_incr __asm__("__kmp_malloc_pool_incr") = NULL;

/* Demangled: __kmpc_atomic_fixed2_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_max(void) __asm__("__kmpc_atomic_fixed2_max");
int fn___kmpc_atomic_fixed2_max(void) {
    ALOGD("__kmpc_atomic_fixed2_max() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<unsigned short, 4>::operator=(Halide::Runtime::Buffer<unsigned short, 4>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferItLi4EEaSEOS2_(void) {
    ALOGD("_ZN6Halide7Runtime6BufferItLi4EEaSEOS2_() called");
    return 0;
}

/* Demangled: Matrix_ludcmp(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13Matrix_ludcmpPdS_i(void) {
    ALOGD("_Z13Matrix_ludcmpPdS_i() called");
    return 0;
}

/* Demangled: halide_error_param_too_small_i64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_small_i64(void) {
    ALOGD("halide_error_param_too_small_i64() called");
    return 0;
}

/* Exported Object: typeinfo name for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPv = NULL;

/* Demangled: __kmp_acquire_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_ticket_lock(void) __asm__("__kmp_acquire_ticket_lock");
int fn___kmp_acquire_ticket_lock(void) {
    ALOGD("__kmp_acquire_ticket_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clReleaseProgram */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL16clReleaseProgramE = NULL;

/* Demangled: Halide::Runtime::Buffer<unsigned short, 4>::decref_dev() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferItLi4EE10decref_devEv(void) {
    ALOGD("_ZN6Halide7Runtime6BufferItLi4EE10decref_devEv() called");
    return 0;
}

/* Demangled: GC_Point2D_Normalization(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z24GC_Point2D_NormalizationPdS_S_S_i(void) {
    ALOGD("_Z24GC_Point2D_NormalizationPdS_S_S_i() called");
    return 0;
}

/* Demangled: __ompt_get_task_info_object(int) */
extern "C" __attribute__((visibility("default"))) int _Z27__ompt_get_task_info_objecti(void) {
    ALOGD("_Z27__ompt_get_task_info_objecti() called");
    return 0;
}

/* Demangled: halide_opencl_get_crop_offset */
extern "C" __attribute__((visibility("default"))) int halide_opencl_get_crop_offset(void) {
    ALOGD("halide_opencl_get_crop_offset() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPj = NULL;

/* Exported Object: typeinfo name for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPn = NULL;

/* Exported Object: typeinfo name for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPi = NULL;

/* Exported Object: typeinfo name for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPm = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: typeinfo name for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPg = NULL;

/* Exported Object: typeinfo name for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPy = NULL;

/* Exported Object: lvCb */
extern "C" __attribute__((visibility("default"))) void* lvCb = NULL;

/* Demangled: __kmpc_dist_dispatch_init_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dist_dispatch_init_8u(void) __asm__("__kmpc_dist_dispatch_init_8u");
int fn___kmpc_dist_dispatch_init_8u(void) {
    ALOGD("__kmpc_dist_dispatch_init_8u() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: __kmpc_atomic_fixed2_orb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_orb(void) __asm__("__kmpc_atomic_fixed2_orb");
int fn___kmpc_atomic_fixed2_orb(void) {
    ALOGD("__kmpc_atomic_fixed2_orb() called");
    return 0;
}

/* Demangled: __kmp_aux_set_defaults */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_defaults(void) __asm__("__kmp_aux_set_defaults");
int fn___kmp_aux_set_defaults(void) {
    ALOGD("__kmp_aux_set_defaults() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPh = NULL;

/* Demangled: __cxa_get_globals_fast */
extern "C" __attribute__((visibility("default"))) int fn___cxa_get_globals_fast(void) __asm__("__cxa_get_globals_fast");
int fn___cxa_get_globals_fast(void) {
    ALOGD("__cxa_get_globals_fast() called");
    return 0;
}

/* Exported Object: __kmp_direct_test */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_direct_test __asm__("__kmp_direct_test") = NULL;

/* Demangled: halide_do_task */
extern "C" __attribute__((visibility("default"))) int halide_do_task(void) {
    ALOGD("halide_do_task() called");
    return 0;
}

/* Exported Object: typeinfo name for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPf = NULL;

/* Demangled: __kmpc_atomic_fixed1_neqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_neqv(void) __asm__("__kmpc_atomic_fixed1_neqv");
int fn___kmpc_atomic_fixed1_neqv(void) {
    ALOGD("__kmpc_atomic_fixed1_neqv() called");
    return 0;
}

/* Exported Object: typeinfo name for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPe = NULL;

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Exported Object: __kmp_version_lib_ver */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_lib_ver __asm__("__kmp_version_lib_ver") = NULL;

/* Demangled: __kmpc_taskloop */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_taskloop(void) __asm__("__kmpc_taskloop");
int fn___kmpc_taskloop(void) {
    ALOGD("__kmpc_taskloop() called");
    return 0;
}

/* Exported Object: typeinfo for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTIa = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clReleaseMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL18clReleaseMemObjectE = NULL;

/* Demangled: alKD_GetCaliDataToPackData_ENC */
extern "C" __attribute__((visibility("default"))) int alKD_GetCaliDataToPackData_ENC(void) {
    ALOGD("alKD_GetCaliDataToPackData_ENC() called");
    return 0;
}

/* Demangled: GC_calculateP_DLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17GC_calculateP_DLTPdS_S_i(void) {
    ALOGD("_Z17GC_calculateP_DLTPdS_S_i() called");
    return 0;
}

/* Demangled: halide_error_bounds_inference_call_failed */
extern "C" __attribute__((visibility("default"))) int halide_error_bounds_inference_call_failed(void) {
    ALOGD("halide_error_bounds_inference_call_failed() called");
    return 0;
}

/* Demangled: halide_error_no_device_interface */
extern "C" __attribute__((visibility("default"))) int halide_error_no_device_interface(void) {
    ALOGD("halide_error_no_device_interface() called");
    return 0;
}

/* Exported Object: typeinfo for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTIe = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: Halide::Runtime::Internal::halide_gpu_device_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal22halide_gpu_device_lockE = NULL;

/* Demangled: GC_compute_RectificationMatrix_Fix_MainCam(double*, double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z42GC_compute_RectificationMatrix_Fix_MainCamPdS_S_S_S_S_(void) {
    ALOGD("_Z42GC_compute_RectificationMatrix_Fix_MainCamPdS_S_S_S_S_() called");
    return 0;
}

/* Demangled: __kmp_aux_get_affinity */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_get_affinity(void) __asm__("__kmp_aux_get_affinity");
int fn___kmp_aux_get_affinity(void) {
    ALOGD("__kmp_aux_get_affinity() called");
    return 0;
}

/* Exported Object: typeinfo for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIg = NULL;

/* Demangled: __kmp_allocate_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_allocate_thread(void) __asm__("__kmp_allocate_thread");
int fn___kmp_allocate_thread(void) {
    ALOGD("__kmp_allocate_thread() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo name for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPx = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: Halide::Runtime::Internal::halide_gpu_device */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal17halide_gpu_deviceE = NULL;

/* Demangled: __kmp_convert_to_milliseconds(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z29__kmp_convert_to_millisecondsPKc(void) {
    ALOGD("_Z29__kmp_convert_to_millisecondsPKc() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::copy_to_host_already_locked(void*, halide_buffer_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal27copy_to_host_already_lockedEPvP15halide_buffer_t(void) {
    ALOGD("_ZN6Halide7Runtime8Internal27copy_to_host_already_lockedEPvP15halide_buffer_t() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPw = NULL;

/* Exported Object: typeinfo for float */
extern "C" __attribute__((visibility("default"))) void* _ZTIf = NULL;

/* Exported Object: typeinfo for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDn = NULL;

/* Demangled: __cxa_throw */
extern "C" __attribute__((visibility("default"))) int fn___cxa_throw(void) __asm__("__cxa_throw");
int fn___cxa_throw(void) {
    ALOGD("__cxa_throw() called");
    return 0;
}

/* Demangled: altek::get_prop_dump() */
extern "C" __attribute__((visibility("default"))) int _ZN5altek13get_prop_dumpEv(void) {
    ALOGD("_ZN5altek13get_prop_dumpEv() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for int */
extern "C" __attribute__((visibility("default"))) void* _ZTIi = NULL;

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: hierarchy_info::init(AddrUnsPair*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN14hierarchy_info4initEP11AddrUnsPairi(void) {
    ALOGD("_ZN14hierarchy_info4initEP11AddrUnsPairi() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count4lockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count4lockEv() called");
    return 0;
}

/* Demangled: __kmp_spin_backoff */
extern "C" __attribute__((visibility("default"))) int fn___kmp_spin_backoff(void) __asm__("__kmp_spin_backoff");
int fn___kmp_spin_backoff(void) {
    ALOGD("__kmp_spin_backoff() called");
    return 0;
}

/* Demangled: alKD_GetOnePackOfCaliData */
extern "C" __attribute__((visibility("default"))) int alKD_GetOnePackOfCaliData(void) {
    ALOGD("alKD_GetOnePackOfCaliData() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::bitwise_or(KMPAffinity::Mask const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask10bitwise_orEPKN11KMPAffinity4MaskE(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask10bitwise_orEPKN11KMPAffinity4MaskE() called");
    return 0;
}

/* Demangled: alPackDataUpdate_HLDCInfo_V3_init(tH_RectLDCPara*, tH_RectLDCPara*, tH_RectLDCPara*, alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, short, short, unsigned short*, unsigned short*, double) */
extern "C" __attribute__((visibility("default"))) int _Z33alPackDataUpdate_HLDCInfo_V3_initP14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_d(void) {
    ALOGD("_Z33alPackDataUpdate_HLDCInfo_V3_initP14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_d() called");
    return 0;
}

/* Demangled: alKD_FlowGetEncPackData */
extern "C" __attribute__((visibility("default"))) int alKD_FlowGetEncPackData(void) {
    ALOGD("alKD_FlowGetEncPackData() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_t(void) {
    ALOGD("_ZnamSt11align_val_t() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::halide_release_jit_module() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal25halide_release_jit_moduleEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal25halide_release_jit_moduleEv() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTIh = NULL;

/* Demangled: __kmpc_atomic_fixed4_neqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_neqv(void) __asm__("__kmpc_atomic_fixed4_neqv");
int fn___kmpc_atomic_fixed4_neqv(void) {
    ALOGD("__kmpc_atomic_fixed4_neqv() called");
    return 0;
}

/* Demangled: LUDInverse(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10LUDInversePdS_i(void) {
    ALOGD("_Z10LUDInversePdS_i() called");
    return 0;
}

/* Demangled: permission_init() */
extern "C" __attribute__((visibility("default"))) int _Z15permission_initv(void) {
    ALOGD("_Z15permission_initv() called");
    return 0;
}

/* Demangled: alDU_RSEParameters_SK1_Inverse_rectify(INVRECTMGR_QUALITY_INFO*, tH_RectLDCPara*) */
extern "C" __attribute__((visibility("default"))) int _Z38alDU_RSEParameters_SK1_Inverse_rectifyP23INVRECTMGR_QUALITY_INFOP14tH_RectLDCPara(void) {
    ALOGD("_Z38alDU_RSEParameters_SK1_Inverse_rectifyP23INVRECTMGR_QUALITY_INFOP14tH_RectLDCPara() called");
    return 0;
}

/* Demangled: __kmp_runtime_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_runtime_initialize(void) __asm__("__kmp_runtime_initialize");
int fn___kmp_runtime_initialize(void) {
    ALOGD("__kmp_runtime_initialize() called");
    return 0;
}

/* Demangled: __kmp_test_nested_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_nested_tas_lock(void) __asm__("__kmp_test_nested_tas_lock");
int fn___kmp_test_nested_tas_lock(void) {
    ALOGD("__kmp_test_nested_tas_lock() called");
    return 0;
}

/* Demangled: __kmp_neq_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_neq_4(void) __asm__("__kmp_neq_4");
int fn___kmp_neq_4(void) {
    ALOGD("__kmp_neq_4() called");
    return 0;
}

/* Demangled: halide_copy_to_device_legacy */
extern "C" __attribute__((visibility("default"))) int halide_copy_to_device_legacy(void) {
    ALOGD("halide_copy_to_device_legacy() called");
    return 0;
}

/* Demangled: __kmp_cleanup */
extern "C" __attribute__((visibility("default"))) int fn___kmp_cleanup(void) __asm__("__kmp_cleanup");
int fn___kmp_cleanup(void) {
    ALOGD("__kmp_cleanup() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED2Ev() called");
    return 0;
}

/* Demangled: __kmpc_fork_teams */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_fork_teams(void) __asm__("__kmpc_fork_teams");
int fn___kmpc_fork_teams(void) {
    ALOGD("__kmpc_fork_teams() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::OpenCL::validate_device_pointer(void*, halide_buffer_t*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal6OpenCL23validate_device_pointerEPvP15halide_buffer_tm(void) {
    ALOGD("_ZN6Halide7Runtime8Internal6OpenCL23validate_device_pointerEPvP15halide_buffer_tm() called");
    return 0;
}

/* Demangled: GC_ScaleImagePoints(double*, double*, int, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z19GC_ScaleImagePointsPdS_idd(void) {
    ALOGD("_Z19GC_ScaleImagePointsPdS_idd() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_orl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_orl(void) __asm__("__kmpc_atomic_fixed2_orl");
int fn___kmpc_atomic_fixed2_orl(void) {
    ALOGD("__kmpc_atomic_fixed2_orl() called");
    return 0;
}

/* Demangled: __kmpc_atomic_end() */
extern "C" __attribute__((visibility("default"))) int _Z17__kmpc_atomic_endv(void) {
    ALOGD("_Z17__kmpc_atomic_endv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8u_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8u_div(void) __asm__("__kmpc_atomic_fixed8u_div");
int fn___kmpc_atomic_fixed8u_div(void) {
    ALOGD("__kmpc_atomic_fixed8u_div() called");
    return 0;
}

/* Demangled: ___kmp_thread_malloc */
extern "C" __attribute__((visibility("default"))) int fn____kmp_thread_malloc(void) __asm__("___kmp_thread_malloc");
int fn____kmp_thread_malloc(void) {
    ALOGD("___kmp_thread_malloc() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_all() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_allEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_allEv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_sub(void) __asm__("__kmpc_atomic_fixed1_sub");
int fn___kmpc_atomic_fixed1_sub(void) {
    ALOGD("__kmpc_atomic_fixed1_sub() called");
    return 0;
}

/* Demangled: __kmp_acquire_nested_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_nested_futex_lock(void) __asm__("__kmp_acquire_nested_futex_lock");
int fn___kmp_acquire_nested_futex_lock(void) {
    ALOGD("__kmp_acquire_nested_futex_lock() called");
    return 0;
}

/* Demangled: halide_free */
extern "C" __attribute__((visibility("default"))) int halide_free(void) {
    ALOGD("halide_free() called");
    return 0;
}

/* Demangled: __kmp_test_nested_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_nested_ticket_lock(void) __asm__("__kmp_test_nested_ticket_lock");
int fn___kmp_test_nested_ticket_lock(void) {
    ALOGD("__kmp_test_nested_ticket_lock() called");
    return 0;
}

/* Exported Object: typeinfo name for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPs = NULL;

/* Demangled: halide_opencl_device_and_host_malloc */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_and_host_malloc(void) {
    ALOGD("halide_opencl_device_and_host_malloc() called");
    return 0;
}

/* Demangled: alGLDC_PV_PackdataGen(GLDC_DATA_STRC_ANDROID*, alDCAL_PACKDATA_V3*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z21alGLDC_PV_PackdataGenP22GLDC_DATA_STRC_ANDROIDP18alDCAL_PACKDATA_V3Pd(void) {
    ALOGD("_Z21alGLDC_PV_PackdataGenP22GLDC_DATA_STRC_ANDROIDP18alDCAL_PACKDATA_V3Pd() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex6unlockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPt = NULL;

/* Exported Object: vtable for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12domain_error = NULL;

/* Demangled: alLDCOnly_PackdataGen(alDCAL_PACKDATA_V3*, int, int, int, int, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z21alLDCOnly_PackdataGenP18alDCAL_PACKDATA_V3iiiiPdS1_(void) {
    ALOGD("_Z21alLDCOnly_PackdataGenP18alDCAL_PACKDATA_V3iiiiPdS1_() called");
    return 0;
}

/* Demangled: __kmp_check_workshare */
extern "C" __attribute__((visibility("default"))) int fn___kmp_check_workshare(void) __asm__("__kmp_check_workshare");
int fn___kmp_check_workshare(void) {
    ALOGD("__kmp_check_workshare() called");
    return 0;
}

/* Demangled: alKD_PackDataVersion_Get */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataVersion_Get(void) {
    ALOGD("alKD_PackDataVersion_Get() called");
    return 0;
}

/* Exported Object: __kmp_max_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_max_nth __asm__("__kmp_max_nth") = NULL;

/* Demangled: halide_device_sync_legacy */
extern "C" __attribute__((visibility("default"))) int halide_device_sync_legacy(void) {
    ALOGD("halide_device_sync_legacy() called");
    return 0;
}

/* Demangled: __kmp_validate_locks */
extern "C" __attribute__((visibility("default"))) int fn___kmp_validate_locks(void) __asm__("__kmp_validate_locks");
int fn___kmp_validate_locks(void) {
    ALOGD("__kmp_validate_locks() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD1Ev(void) {
    ALOGD("_ZNSt14overflow_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPo = NULL;

/* Demangled: __ompt_get_teaminfo(int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z19__ompt_get_teaminfoiPi(void) {
    ALOGD("_Z19__ompt_get_teaminfoiPi() called");
    return 0;
}

/* Demangled: __kmp_setup_icv_copy(kmp_team*, int, kmp_internal_control*, ident*) */
extern "C" __attribute__((visibility("default"))) int _Z20__kmp_setup_icv_copyP8kmp_teamiP20kmp_internal_controlP5ident(void) {
    ALOGD("_Z20__kmp_setup_icv_copyP8kmp_teamiP20kmp_internal_controlP5ident() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD2Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD2Ev() called");
    return 0;
}

/* Demangled: __kmp_aux_set_library */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_library(void) __asm__("__kmp_aux_set_library");
int fn___kmp_aux_set_library(void) {
    ALOGD("__kmp_aux_set_library() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueMapImage */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL17clEnqueueMapImageE = NULL;

/* Demangled: GC_calculateH_NormalizedInhomogeneous(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z37GC_calculateH_NormalizedInhomogeneousPdS_S_i(void) {
    ALOGD("_Z37GC_calculateH_NormalizedInhomogeneousPdS_S_i() called");
    return 0;
}

/* Demangled: halide_opencl_run */
extern "C" __attribute__((visibility("default"))) int halide_opencl_run(void) {
    ALOGD("halide_opencl_run() called");
    return 0;
}

/* Exported Object: __kmp_init_parallel */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_parallel __asm__("__kmp_init_parallel") = NULL;

/* Demangled: kmpc_get_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int kmpc_get_affinity_mask_proc(void) {
    ALOGD("kmpc_get_affinity_mask_proc() called");
    return 0;
}

/* Demangled: __kmp_get_global_thread_id_reg */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_global_thread_id_reg(void) __asm__("__kmp_get_global_thread_id_reg");
int fn___kmp_get_global_thread_id_reg(void) {
    ALOGD("__kmp_get_global_thread_id_reg() called");
    return 0;
}

/* Demangled: halide_default_do_par_for */
extern "C" __attribute__((visibility("default"))) int halide_default_do_par_for(void) {
    ALOGD("halide_default_do_par_for() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC1EPKc() called");
    return 0;
}

/* Demangled: GC_compute_RectificationMatrix_Rectify_BothCams(double*, double*, double*, double*, double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z47GC_compute_RectificationMatrix_Rectify_BothCamsPdS_S_S_S_S_S_S_S_(void) {
    ALOGD("_Z47GC_compute_RectificationMatrix_Rectify_BothCamsPdS_S_S_S_S_S_S_S_() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::parking_control_validate(void*, Halide::Runtime::Internal::Synchronization::validate_action&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization24parking_control_validateEPvRNS2_15validate_actionE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization24parking_control_validateEPvRNS2_15validate_actionE() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_div(void) __asm__("__kmpc_atomic_fixed8_div");
int fn___kmpc_atomic_fixed8_div(void) {
    ALOGD("__kmpc_atomic_fixed8_div() called");
    return 0;
}

/* Demangled: halide_memoization_cache_lookup */
extern "C" __attribute__((visibility("default"))) int halide_memoization_cache_lookup(void) {
    ALOGD("halide_memoization_cache_lookup() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clCreateKernelE = NULL;

/* Exported Object: __kmp_hws_node */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_node __asm__("__kmp_hws_node") = NULL;

/* Demangled: GC_compute_T_relative(double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z21GC_compute_T_relativePdS_S_S_(void) {
    ALOGD("_Z21GC_compute_T_relativePdS_S_S_() called");
    return 0;
}

/* Demangled: ldc_sharp8_cpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc_sharp8_cpu_metadata(void) {
    ALOGD("ldc_sharp8_cpu_metadata() called");
    return 0;
}

/* Exported Object: __kmp_hws_abs_flag */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_abs_flag __asm__("__kmp_hws_abs_flag") = NULL;

/* Exported Object: __kmp_affinity_num_masks */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_num_masks __asm__("__kmp_affinity_num_masks") = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueMapBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL18clEnqueueMapBufferE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Exported Object: __kmp_settings */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_settings __asm__("__kmp_settings") = NULL;

/* Demangled: __kmpc_atomic_fixed1_orb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_orb(void) __asm__("__kmpc_atomic_fixed1_orb");
int fn___kmpc_atomic_fixed1_orb(void) {
    ALOGD("__kmpc_atomic_fixed1_orb() called");
    return 0;
}

/* Exported Object: g_aeFPCDistRate */
extern "C" __attribute__((visibility("default"))) void* g_aeFPCDistRate = NULL;

/* Demangled: __kmp_i18n_catgets */
extern "C" __attribute__((visibility("default"))) int fn___kmp_i18n_catgets(void) __asm__("__kmp_i18n_catgets");
int fn___kmp_i18n_catgets(void) {
    ALOGD("__kmp_i18n_catgets() called");
    return 0;
}

/* Demangled: __kmp_internal_end_dtor */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_dtor(void) __asm__("__kmp_internal_end_dtor");
int fn___kmp_internal_end_dtor(void) {
    ALOGD("__kmp_internal_end_dtor() called");
    return 0;
}

/* Demangled: __kmp_destroy_nested_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_nested_ticket_lock(void) __asm__("__kmp_destroy_nested_ticket_lock");
int fn___kmp_destroy_nested_ticket_lock(void) {
    ALOGD("__kmp_destroy_nested_ticket_lock() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: __kmp_dflt_max_active_levels */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dflt_max_active_levels __asm__("__kmp_dflt_max_active_levels") = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: alDU_RSEParameters(tRSE_STRUCT*, tH_RectLDCPara*) */
extern "C" __attribute__((visibility("default"))) int _Z18alDU_RSEParametersP11tRSE_STRUCTP14tH_RectLDCPara(void) {
    ALOGD("_Z18alDU_RSEParametersP11tRSE_STRUCTP14tH_RectLDCPara() called");
    return 0;
}

/* Demangled: __kmpc_single */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_single(void) __asm__("__kmpc_single");
int fn___kmpc_single(void) {
    ALOGD("__kmpc_single() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: alRectLDC_PV_CalculateH_LDC_CropScale(double*, tLDC_STRUCT*, double*, double*, unsigned char, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z37alRectLDC_PV_CalculateH_LDC_CropScalePdP11tLDC_STRUCTS_S_httPt(void) {
    ALOGD("_Z37alRectLDC_PV_CalculateH_LDC_CropScalePdP11tLDC_STRUCTS_S_httPt() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_div_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_div_float8(void) __asm__("__kmpc_atomic_fixed4_div_float8");
int fn___kmpc_atomic_fixed4_div_float8(void) {
    ALOGD("__kmpc_atomic_fixed4_div_float8() called");
    return 0;
}

/* Demangled: alKD_CaliDataToPackData_NonOTP_ENC */
extern "C" __attribute__((visibility("default"))) int alKD_CaliDataToPackData_NonOTP_ENC(void) {
    ALOGD("alKD_CaliDataToPackData_NonOTP_ENC() called");
    return 0;
}

/* Demangled: __kmp_taskloop_task(int, void*) */
extern "C" __attribute__((visibility("default"))) int _Z19__kmp_taskloop_taskiPv(void) {
    ALOGD("_Z19__kmp_taskloop_taskiPv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_shl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_shl(void) __asm__("__kmpc_atomic_fixed2_shl");
int fn___kmpc_atomic_fixed2_shl(void) {
    ALOGD("__kmpc_atomic_fixed2_shl() called");
    return 0;
}

/* Exported Object: __kmp_indirect_set_location */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_set_location __asm__("__kmp_indirect_set_location") = NULL;

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: halide_opencl_device_free */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_free(void) {
    ALOGD("halide_opencl_device_free() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_add(void) __asm__("__kmpc_atomic_float8_add");
int fn___kmpc_atomic_float8_add(void) {
    ALOGD("__kmpc_atomic_float8_add() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_min(void) __asm__("__kmpc_atomic_fixed2_min");
int fn___kmpc_atomic_fixed2_min(void) {
    ALOGD("__kmpc_atomic_fixed2_min() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueNDRangeKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL22clEnqueueNDRangeKernelE = NULL;

/* Demangled: alhLDC_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alhLDC_VersionInfo_Get(void) {
    ALOGD("alhLDC_VersionInfo_Get() called");
    return 0;
}

/* Exported Object: _You_must_link_with_exactly_one_OpenMP_library */
extern "C" __attribute__((visibility("default"))) void* _You_must_link_with_exactly_one_OpenMP_library = NULL;

/* Demangled: halide_error_bad_fold */
extern "C" __attribute__((visibility("default"))) int halide_error_bad_fold(void) {
    ALOGD("halide_error_bad_fold() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_shr(void) __asm__("__kmpc_atomic_fixed2_shr");
int fn___kmpc_atomic_fixed2_shr(void) {
    ALOGD("__kmpc_atomic_fixed2_shr() called");
    return 0;
}

/* Demangled: __cxa_end_catch */
extern "C" __attribute__((visibility("default"))) int fn___cxa_end_catch(void) __asm__("__cxa_end_catch");
int fn___cxa_end_catch(void) {
    ALOGD("__cxa_end_catch() called");
    return 0;
}

/* Demangled: halide_device_free */
extern "C" __attribute__((visibility("default"))) int halide_device_free(void) {
    ALOGD("halide_device_free() called");
    return 0;
}

/* Exported Object: __kmp_debug_buffer */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buffer __asm__("__kmp_debug_buffer") = NULL;

/* Demangled: __kmp_get_global_thread_id */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_global_thread_id(void) __asm__("__kmp_get_global_thread_id");
int fn___kmp_get_global_thread_id(void) {
    ALOGD("__kmp_get_global_thread_id() called");
    return 0;
}

/* Exported Object: __kmp_affinity_compact */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_compact __asm__("__kmp_affinity_compact") = NULL;

/* Demangled: __kmpc_copyprivate */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_copyprivate(void) __asm__("__kmpc_copyprivate");
int fn___kmpc_copyprivate(void) {
    ALOGD("__kmpc_copyprivate() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::wait() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4waitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4waitEv() called");
    return 0;
}

/* Demangled: to_UnitVector(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13to_UnitVectorPdS_i(void) {
    ALOGD("_Z13to_UnitVectorPdS_i() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIy = NULL;

/* Demangled: __kmp_release_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_drdpa_lock(void) __asm__("__kmp_release_drdpa_lock");
int fn___kmp_release_drdpa_lock(void) {
    ALOGD("__kmp_release_drdpa_lock() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD1Ev(void) {
    ALOGD("_ZNSt9exceptionD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPy = NULL;

/* Exported Object: __kmp_cpuinfo_file */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_cpuinfo_file __asm__("__kmp_cpuinfo_file") = NULL;

/* Demangled: std::__ndk1::future<void>::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvE3getEv(void) {
    ALOGD("_ZNSt6__ndk16futureIvE3getEv() called");
    return 0;
}

/* Exported Object: __kmp_barrier_pattern_name */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_pattern_name __asm__("__kmp_barrier_pattern_name") = NULL;

/* Demangled: KMPNativeAffinity::deallocate_mask(KMPAffinity::Mask*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity15deallocate_maskEPN11KMPAffinity4MaskE(void) {
    ALOGD("_ZN17KMPNativeAffinity15deallocate_maskEPN11KMPAffinity4MaskE() called");
    return 0;
}

/* Exported Object: typeinfo for void */
extern "C" __attribute__((visibility("default"))) void* _ZTIv = NULL;

/* Exported Object: typeinfo for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPs = NULL;

/* Demangled: halide_memoization_cache_set_size */
extern "C" __attribute__((visibility("default"))) int halide_memoization_cache_set_size(void) {
    ALOGD("halide_memoization_cache_set_size() called");
    return 0;
}

/* Demangled: __kmpc_push_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_push_num_threads(void) __asm__("__kmpc_push_num_threads");
int fn___kmpc_push_num_threads(void) {
    ALOGD("__kmpc_push_num_threads() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIw = NULL;

/* Demangled: __kmpc_atomic_2 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_2(void) __asm__("__kmpc_atomic_2");
int fn___kmpc_atomic_2(void) {
    ALOGD("__kmpc_atomic_2() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPt = NULL;

/* Demangled: ___kmp_fast_free */
extern "C" __attribute__((visibility("default"))) int fn____kmp_fast_free(void) __asm__("___kmp_fast_free");
int fn____kmp_fast_free(void) {
    ALOGD("___kmp_fast_free() called");
    return 0;
}

/* Exported Object: __kmp_version_omp_api */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_omp_api __asm__("__kmp_version_omp_api") = NULL;

/* Demangled: __kmpc_atomic_1 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_1(void) __asm__("__kmpc_atomic_1");
int fn___kmpc_atomic_1(void) {
    ALOGD("__kmpc_atomic_1() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPa = NULL;

/* Demangled: Matrix_MatrixMultiply(double*, double*, double*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z21Matrix_MatrixMultiplyPdS_S_iiii(void) {
    ALOGD("_Z21Matrix_MatrixMultiplyPdS_S_iiii() called");
    return 0;
}

/* Exported Object: typeinfo for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPv = NULL;

/* Exported Object: typeinfo name for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt20bad_array_new_length = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: typeinfo name for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPb = NULL;

/* Exported Object: typeinfo for long */
extern "C" __attribute__((visibility("default"))) void* _ZTIl = NULL;

/* Demangled: __kmp_affinity_print_mask */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_print_mask(void) __asm__("__kmp_affinity_print_mask");
int fn___kmp_affinity_print_mask(void) {
    ALOGD("__kmp_affinity_print_mask() called");
    return 0;
}

/* Exported Object: __kmp_clock_function */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_clock_function __asm__("__kmp_clock_function") = NULL;

/* Demangled: __kmp_taskloop_linear(ident*, int, kmp_task*, unsigned long long*, unsigned long long*, long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, void*) */
extern "C" __attribute__((visibility("default"))) int _Z21__kmp_taskloop_linearP5identiP8kmp_taskPyS3_xyyyyyPv(void) {
    ALOGD("_Z21__kmp_taskloop_linearP5identiP8kmp_taskPyS3_xyyyyyPv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetDeviceIDs */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clGetDeviceIDsE = NULL;

/* Demangled: ompc_set_schedule */
extern "C" __attribute__((visibility("default"))) int ompc_set_schedule(void) {
    ALOGD("ompc_set_schedule() called");
    return 0;
}

/* Demangled: __kmp_str_buf_cat */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_cat(void) __asm__("__kmp_str_buf_cat");
int fn___kmp_str_buf_cat(void) {
    ALOGD("__kmp_str_buf_cat() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTIj = NULL;

/* Demangled: __kmp_destroy_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_futex_lock(void) __asm__("__kmp_destroy_futex_lock");
int fn___kmp_destroy_futex_lock(void) {
    ALOGD("__kmp_destroy_futex_lock() called");
    return 0;
}

/* Demangled: __kmp_pop_current_task_from_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_pop_current_task_from_thread(void) __asm__("__kmp_pop_current_task_from_thread");
int fn___kmp_pop_current_task_from_thread(void) {
    ALOGD("__kmp_pop_current_task_from_thread() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTIm = NULL;

/* Demangled: __kmpc_atomic_fixed8_eqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_eqv(void) __asm__("__kmpc_atomic_fixed8_eqv");
int fn___kmpc_atomic_fixed8_eqv(void) {
    ALOGD("__kmpc_atomic_fixed8_eqv() called");
    return 0;
}

/* Demangled: __kmpc_omp_taskwait */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_taskwait(void) __asm__("__kmpc_omp_taskwait");
int fn___kmpc_omp_taskwait(void) {
    ALOGD("__kmpc_omp_taskwait() called");
    return 0;
}

/* Demangled: __kmp_init_nested_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_nested_drdpa_lock(void) __asm__("__kmp_init_nested_drdpa_lock");
int fn___kmp_init_nested_drdpa_lock(void) {
    ALOGD("__kmp_init_nested_drdpa_lock() called");
    return 0;
}

/* Demangled: __kmp_affinity_process_placelist(KMPAffinity::Mask**, unsigned int*, char const*, KMPAffinity::Mask*, int) */
extern "C" __attribute__((visibility("default"))) int _Z32__kmp_affinity_process_placelistPPN11KMPAffinity4MaskEPjPKcS1_i(void) {
    ALOGD("_Z32__kmp_affinity_process_placelistPPN11KMPAffinity4MaskEPjPKcS1_i() called");
    return 0;
}

/* Demangled: __kmp_destroy_nested_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_nested_drdpa_lock(void) __asm__("__kmp_destroy_nested_drdpa_lock");
int fn___kmp_destroy_nested_drdpa_lock(void) {
    ALOGD("__kmp_destroy_nested_drdpa_lock() called");
    return 0;
}

/* Demangled: halide_profiler_reset_unlocked */
extern "C" __attribute__((visibility("default"))) int halide_profiler_reset_unlocked(void) {
    ALOGD("halide_profiler_reset_unlocked() called");
    return 0;
}

/* Demangled: kmp_threadprivate_insert_private_data */
extern "C" __attribute__((visibility("default"))) int kmp_threadprivate_insert_private_data(void) {
    ALOGD("kmp_threadprivate_insert_private_data() called");
    return 0;
}

/* Demangled: __kmpc_atomic_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_4(void) __asm__("__kmpc_atomic_4");
int fn___kmpc_atomic_4(void) {
    ALOGD("__kmpc_atomic_4() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<unsigned short, 4>::Buffer<int, void>(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferItLi4EEC2IJiEvEEiiDpT_(void) {
    ALOGD("_ZN6Halide7Runtime6BufferItLi4EEC2IJiEvEEiiDpT_() called");
    return 0;
}

/* Exported Object: __kmp_i_lock_table */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_i_lock_table __asm__("__kmp_i_lock_table") = NULL;

/* Demangled: GC_constructRotationMatrix(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z26GC_constructRotationMatrixPdS_(void) {
    ALOGD("_Z26GC_constructRotationMatrixPdS_() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float4_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_sub(void) __asm__("__kmpc_atomic_float4_sub");
int fn___kmpc_atomic_float4_sub(void) {
    ALOGD("__kmpc_atomic_float4_sub() called");
    return 0;
}

/* Exported Object: typeinfo for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIx = NULL;

/* Demangled: halide_sleep_ms */
extern "C" __attribute__((visibility("default"))) int halide_sleep_ms(void) {
    ALOGD("halide_sleep_ms() called");
    return 0;
}

/* Exported Object: typeinfo name for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPl = NULL;

/* Demangled: operator delete(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvm(void) {
    ALOGD("_ZdlPvm() called");
    return 0;
}

/* Demangled: __kmp_internal_end_dest */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_dest(void) __asm__("__kmp_internal_end_dest");
int fn___kmp_internal_end_dest(void) {
    ALOGD("__kmp_internal_end_dest() called");
    return 0;
}

/* Exported Object: vtable for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11range_error = NULL;

/* Exported Object: typeinfo name for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11range_error = NULL;

/* Demangled: LDC_CropPincushion2_center(double*, double*, tLDC_STRUCT*, double*, double*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z26LDC_CropPincushion2_centerPdS_P11tLDC_STRUCTS_S_h(void) {
    ALOGD("_Z26LDC_CropPincushion2_centerPdS_P11tLDC_STRUCTS_S_h() called");
    return 0;
}

/* Demangled: alPackDataUpdate_VCM_Dual_V3(alDCAL_PACKDATA_V3*, short, short) */
extern "C" __attribute__((visibility("default"))) int _Z28alPackDataUpdate_VCM_Dual_V3P18alDCAL_PACKDATA_V3ss(void) {
    ALOGD("_Z28alPackDataUpdate_VCM_Dual_V3P18alDCAL_PACKDATA_V3ss() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKh = NULL;

/* Exported Object: typeinfo for short */
extern "C" __attribute__((visibility("default"))) void* _ZTIs = NULL;

/* Demangled: CheckSum_Insert_V3(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18CheckSum_Insert_V3Pvi(void) {
    ALOGD("_Z18CheckSum_Insert_V3Pvi() called");
    return 0;
}

/* Demangled: halide_default_free */
extern "C" __attribute__((visibility("default"))) int halide_default_free(void) {
    ALOGD("halide_default_free() called");
    return 0;
}

/* Demangled: ompc_set_nested */
extern "C" __attribute__((visibility("default"))) int ompc_set_nested(void) {
    ALOGD("ompc_set_nested() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTIt = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: __kmp_serialized_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmp_serialized_parallel(void) __asm__("__kmp_serialized_parallel");
int fn___kmp_serialized_parallel(void) {
    ALOGD("__kmp_serialized_parallel() called");
    return 0;
}

/* Exported Object: typeinfo for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKg = NULL;

/* Exported Object: typeinfo for double */
extern "C" __attribute__((visibility("default"))) void* _ZTId = NULL;

/* Demangled: alKD_CheckSum_Check */
extern "C" __attribute__((visibility("default"))) int alKD_CheckSum_Check(void) {
    ALOGD("alKD_CheckSum_Check() called");
    return 0;
}

/* Exported Object: __kmp_stksize */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_stksize __asm__("__kmp_stksize") = NULL;

/* Demangled: __kmp_fork_barrier(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z18__kmp_fork_barrierii(void) {
    ALOGD("_Z18__kmp_fork_barrierii() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD0Ev(void) {
    ALOGD("_ZNSt15underflow_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char */
extern "C" __attribute__((visibility("default"))) void* _ZTIc = NULL;

/* Exported Object: typeinfo for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKi = NULL;

/* Demangled: __kmpc_atomic_float4_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_max(void) __asm__("__kmpc_atomic_float4_max");
int fn___kmpc_atomic_float4_max(void) {
    ALOGD("__kmpc_atomic_float4_max() called");
    return 0;
}

/* Demangled: halide_get_library_symbol */
extern "C" __attribute__((visibility("default"))) int halide_get_library_symbol(void) {
    ALOGD("halide_get_library_symbol() called");
    return 0;
}

/* Exported Object: typeinfo for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIb = NULL;

/* Demangled: __kmpc_atomic_cmplx8_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx8_mul(void) __asm__("__kmpc_atomic_cmplx8_mul");
int fn___kmpc_atomic_cmplx8_mul(void) {
    ALOGD("__kmpc_atomic_cmplx8_mul() called");
    return 0;
}

/* Demangled: __kmp_wait_yield_4_ptr */
extern "C" __attribute__((visibility("default"))) int fn___kmp_wait_yield_4_ptr(void) __asm__("__kmp_wait_yield_4_ptr");
int fn___kmp_wait_yield_4_ptr(void) {
    ALOGD("__kmp_wait_yield_4_ptr() called");
    return 0;
}

/* Exported Object: typeinfo name for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPd = NULL;

/* Exported Object: typeinfo for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKj = NULL;

/* Demangled: __kmpc_atomic_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_8(void) __asm__("__kmpc_atomic_8");
int fn___kmpc_atomic_8(void) {
    ALOGD("__kmpc_atomic_8() called");
    return 0;
}

/* Exported Object: typeinfo for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIn = NULL;

/* Exported Object: typeinfo name for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPc = NULL;

/* Exported Object: typeinfo for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKm = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::park(unsigned long long, Halide::Runtime::Internal::Synchronization::parking_control&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization4parkEyRNS2_15parking_controlE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization4parkEyRNS2_15parking_controlE() called");
    return 0;
}

/* Exported Object: typeinfo for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKl = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::platform_name_initialized */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL25platform_name_initializedE = NULL;

/* Exported Object: typeinfo for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKf = NULL;

/* Demangled: alKD_FlowGetEncPackDataLDC */
extern "C" __attribute__((visibility("default"))) int alKD_FlowGetEncPackDataLDC(void) {
    ALOGD("alKD_FlowGetEncPackDataLDC() called");
    return 0;
}

/* Demangled: __kmp_str_buf_reserve */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_reserve(void) __asm__("__kmp_str_buf_reserve");
int fn___kmp_str_buf_reserve(void) {
    ALOGD("__kmp_str_buf_reserve() called");
    return 0;
}

/* Demangled: get_Norm2(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z9get_Norm2Pdi(void) {
    ALOGD("_Z9get_Norm2Pdi() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIo = NULL;

/* Demangled: alKD_CheckSum_Update */
extern "C" __attribute__((visibility("default"))) int alKD_CheckSum_Update(void) {
    ALOGD("alKD_CheckSum_Update() called");
    return 0;
}

/* Exported Object: ompt_enabled */
extern "C" __attribute__((visibility("default"))) void* ompt_enabled = NULL;

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD0Ev() called");
    return 0;
}

/* Demangled: SVDInverse(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10SVDInversePdS_i(void) {
    ALOGD("_Z10SVDInversePdS_i() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::platform_name_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL18platform_name_lockE = NULL;

/* Exported Object: typeinfo for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDh = NULL;

/* Exported Object: typeinfo for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKb = NULL;

/* Demangled: smooth_curve(unsigned char, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z12smooth_curvehPdS_S_(void) {
    ALOGD("_Z12smooth_curvehPdS_S_() called");
    return 0;
}

/* Demangled: kmpc_set_disp_num_buffers */
extern "C" __attribute__((visibility("default"))) int kmpc_set_disp_num_buffers(void) {
    ALOGD("kmpc_set_disp_num_buffers() called");
    return 0;
}

/* Demangled: __kmp_allocate_cons_stack */
extern "C" __attribute__((visibility("default"))) int fn___kmp_allocate_cons_stack(void) __asm__("__kmp_allocate_cons_stack");
int fn___kmp_allocate_cons_stack(void) {
    ALOGD("__kmp_allocate_cons_stack() called");
    return 0;
}

/* Demangled: __kmp_abort_process */
extern "C" __attribute__((visibility("default"))) int fn___kmp_abort_process(void) __asm__("__kmp_abort_process");
int fn___kmp_abort_process(void) {
    ALOGD("__kmp_abort_process() called");
    return 0;
}

/* Demangled: __kmp_join_barrier(int) */
extern "C" __attribute__((visibility("default"))) int _Z18__kmp_join_barrieri(void) {
    ALOGD("_Z18__kmp_join_barrieri() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDi = NULL;

/* Exported Object: typeinfo for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKc = NULL;

/* Exported Object: typeinfo for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKd = NULL;

/* Demangled: kmp_flag_32::wait(kmp_info*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11kmp_flag_324waitEP8kmp_infoi(void) {
    ALOGD("_ZN11kmp_flag_324waitEP8kmp_infoi() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::get_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE10get_futureEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE10get_futureEv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clBuildProgram */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clBuildProgramE = NULL;

/* Demangled: __kmp_env_get */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_get(void) __asm__("__kmp_env_get");
int fn___kmp_env_get(void) {
    ALOGD("__kmp_env_get() called");
    return 0;
}

/* Demangled: halide_device_free_legacy */
extern "C" __attribute__((visibility("default"))) int halide_device_free_legacy(void) {
    ALOGD("halide_device_free_legacy() called");
    return 0;
}

/* Demangled: __kmp_affinity_bind_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_bind_thread(void) __asm__("__kmp_affinity_bind_thread");
int fn___kmp_affinity_bind_thread(void) {
    ALOGD("__kmp_affinity_bind_thread() called");
    return 0;
}

/* Exported Object: typeinfo for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12domain_error = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: Halide::Runtime::Internal::halide_custom_trace */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal19halide_custom_traceE = NULL;

/* Demangled: __kmpc_dispatch_fini_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_fini_4u(void) __asm__("__kmpc_dispatch_fini_4u");
int fn___kmpc_dispatch_fini_4u(void) {
    ALOGD("__kmpc_dispatch_fini_4u() called");
    return 0;
}

/* Exported Object: __kmp_openmp_version */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_openmp_version __asm__("__kmp_openmp_version") = NULL;

/* Demangled: alKD_PackDataV4Decryption */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataV4Decryption(void) {
    ALOGD("alKD_PackDataV4Decryption() called");
    return 0;
}

/* Exported Object: typeinfo for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKe = NULL;

/* Exported Object: typeinfo for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKa = NULL;

/* Demangled: Halide::Runtime::Internal::ends_with(char const*, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal9ends_withEPKcS3_(void) {
    ALOGD("_ZN6Halide7Runtime8Internal9ends_withEPKcS3_() called");
    return 0;
}

/* Demangled: halide_error_access_out_of_bounds */
extern "C" __attribute__((visibility("default"))) int halide_error_access_out_of_bounds(void) {
    ALOGD("halide_error_access_out_of_bounds() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::word_lock::lock_full() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization9word_lock9lock_fullEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization9word_lock9lock_fullEv() called");
    return 0;
}

/* Exported Object: __kmp_debug_buf_warn_chars */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buf_warn_chars __asm__("__kmp_debug_buf_warn_chars") = NULL;

/* Demangled: halide_error_bad_dimensions */
extern "C" __attribute__((visibility("default"))) int halide_error_bad_dimensions(void) {
    ALOGD("halide_error_bad_dimensions() called");
    return 0;
}

/* Exported Object: __kmp_force_reduction_method */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_force_reduction_method __asm__("__kmp_force_reduction_method") = NULL;

/* Demangled: __kmp_control_tool */
extern "C" __attribute__((visibility("default"))) int fn___kmp_control_tool(void) __asm__("__kmp_control_tool");
int fn___kmp_control_tool(void) {
    ALOGD("__kmp_control_tool() called");
    return 0;
}

/* Demangled: GC_VersionInfo_Get(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18GC_VersionInfo_GetPvi(void) {
    ALOGD("_Z18GC_VersionInfo_GetPvi() called");
    return 0;
}

/* Demangled: __kmp_acquire_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_tas_lock(void) __asm__("__kmp_acquire_tas_lock");
int fn___kmp_acquire_tas_lock(void) {
    ALOGD("__kmp_acquire_tas_lock() called");
    return 0;
}

/* Demangled: operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znwm(void) {
    ALOGD("_Znwm() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_orl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_orl(void) __asm__("__kmpc_atomic_fixed1_orl");
int fn___kmpc_atomic_fixed1_orl(void) {
    ALOGD("__kmpc_atomic_fixed1_orl() called");
    return 0;
}

/* Exported Object: __kmp_sched */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_sched __asm__("__kmp_sched") = NULL;

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC2ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC2ERKS_() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_andb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_andb(void) __asm__("__kmpc_atomic_fixed2_andb");
int fn___kmpc_atomic_fixed2_andb(void) {
    ALOGD("__kmpc_atomic_fixed2_andb() called");
    return 0;
}

/* Demangled: std::bad_exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13bad_exception4whatEv(void) {
    ALOGD("_ZNKSt13bad_exception4whatEv() called");
    return 0;
}

/* Demangled: __kmp_internal_end_atexit */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_atexit(void) __asm__("__kmp_internal_end_atexit");
int fn___kmp_internal_end_atexit(void) {
    ALOGD("__kmp_internal_end_atexit() called");
    return 0;
}

/* Demangled: KMPAffinity::Mask::get_proc_group() const */
extern "C" __attribute__((visibility("default"))) int _ZNK11KMPAffinity4Mask14get_proc_groupEv(void) {
    ALOGD("_ZNK11KMPAffinity4Mask14get_proc_groupEv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_orb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_orb(void) __asm__("__kmpc_atomic_fixed4_orb");
int fn___kmpc_atomic_fixed4_orb(void) {
    ALOGD("__kmpc_atomic_fixed4_orb() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13bad_exception = NULL;

/* Demangled: __kmpc_init_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_init_lock(void) __asm__("__kmpc_init_lock");
int fn___kmpc_init_lock(void) {
    ALOGD("__kmpc_init_lock() called");
    return 0;
}

/* Exported Object: __kmp_indirect_unset */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_unset __asm__("__kmp_indirect_unset") = NULL;

/* Demangled: alKD_PackDataV4Encryption */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataV4Encryption(void) {
    ALOGD("alKD_PackDataV4Encryption() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::set(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask3setEi(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask3setEi() called");
    return 0;
}

/* Demangled: halide_default_buffer_copy */
extern "C" __attribute__((visibility("default"))) int halide_default_buffer_copy(void) {
    ALOGD("halide_default_buffer_copy() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_xor */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_xor(void) __asm__("__kmpc_atomic_fixed4_xor");
int fn___kmpc_atomic_fixed4_xor(void) {
    ALOGD("__kmpc_atomic_fixed4_xor() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: alKD_PackDataDecryption */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataDecryption(void) {
    ALOGD("alKD_PackDataDecryption() called");
    return 0;
}

/* Exported Object: __kmp_env_stksize */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_env_stksize __asm__("__kmp_env_stksize") = NULL;

/* Demangled: __kmpc_test_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_test_lock(void) __asm__("__kmpc_test_lock");
int fn___kmpc_test_lock(void) {
    ALOGD("__kmpc_test_lock() called");
    return 0;
}

/* Exported Object: __kmp_direct_destroy */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_direct_destroy __asm__("__kmp_direct_destroy") = NULL;

/* Demangled: alGLDC_Close_android(GLDC_DATA_STRC_ANDROID*) */
extern "C" __attribute__((visibility("default"))) int _Z20alGLDC_Close_androidP22GLDC_DATA_STRC_ANDROID(void) {
    ALOGD("_Z20alGLDC_Close_androidP22GLDC_DATA_STRC_ANDROID() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKt = NULL;

/* Demangled: std::exception_ptr::operator=(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptraSERKS_(void) {
    ALOGD("_ZNSt13exception_ptraSERKS_() called");
    return 0;
}

/* Exported Object: typeinfo for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKs = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::lib_opencl */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL10lib_openclE = NULL;

/* Demangled: __kmp_str_buf_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_free(void) __asm__("__kmp_str_buf_free");
int fn___kmp_str_buf_free(void) {
    ALOGD("__kmp_str_buf_free() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::current_cache_size */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal18current_cache_sizeE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clFlush */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL7clFlushE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clSetMemObjectDestructorCallback */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL32clSetMemObjectDestructorCallbackE = NULL;

/* Demangled: halide_error_device_interface_no_device */
extern "C" __attribute__((visibility("default"))) int halide_error_device_interface_no_device(void) {
    ALOGD("halide_error_device_interface_no_device() called");
    return 0;
}

/* Exported Object: __kmp_init_serial */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_serial __asm__("__kmp_init_serial") = NULL;

/* Exported Object: typeinfo for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKo = NULL;

/* Demangled: ___kmp_page_allocate */
extern "C" __attribute__((visibility("default"))) int fn____kmp_page_allocate(void) __asm__("___kmp_page_allocate");
int fn____kmp_page_allocate(void) {
    ALOGD("___kmp_page_allocate() called");
    return 0;
}

/* Exported Object: __emutls_t.__kmp_gtid */
extern "C" __attribute__((visibility("default"))) void* obj___emutls_t___kmp_gtid __asm__("__emutls_t.__kmp_gtid") = NULL;

/* Demangled: __kmpc_atomic_fixed8_neqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_neqv(void) __asm__("__kmpc_atomic_fixed8_neqv");
int fn___kmpc_atomic_fixed8_neqv(void) {
    ALOGD("__kmpc_atomic_fixed8_neqv() called");
    return 0;
}

/* Demangled: PackDataDecryptionLDC(unsigned char*, unsigned char*, int, unsigned char*, int, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataDecryptionLDCPhS_iS_itt(void) {
    ALOGD("_Z21PackDataDecryptionLDCPhS_iS_itt() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::allocate_mask() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity13allocate_maskEv(void) {
    ALOGD("_ZN17KMPNativeAffinity13allocate_maskEv() called");
    return 0;
}

/* Exported Object: typeinfo for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKn = NULL;

/* Demangled: __kmpc_atomic_float10_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float10_mul(void) __asm__("__kmpc_atomic_float10_mul");
int fn___kmpc_atomic_float10_mul(void) {
    ALOGD("__kmpc_atomic_float10_mul() called");
    return 0;
}

/* Exported Object: __kmp_thread_pool_active_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_thread_pool_active_nth __asm__("__kmp_thread_pool_active_nth") = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::parking_control_requeue_callback(void*, Halide::Runtime::Internal::Synchronization::validate_action const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization32parking_control_requeue_callbackEPvRKNS2_15validate_actionEbb(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization32parking_control_requeue_callbackEPvRKNS2_15validate_actionEbb() called");
    return 0;
}

/* Demangled: __kmpc_unset_nest_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_unset_nest_lock(void) __asm__("__kmpc_unset_nest_lock");
int fn___kmpc_unset_nest_lock(void) {
    ALOGD("__kmpc_unset_nest_lock() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD1Ev() called");
    return 0;
}

/* Demangled: halide_profiler_report_unlocked */
extern "C" __attribute__((visibility("default"))) int halide_profiler_report_unlocked(void) {
    ALOGD("halide_profiler_report_unlocked() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::unpark_one(unsigned long long, Halide::Runtime::Internal::Synchronization::parking_control&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization10unpark_oneEyRNS2_15parking_controlE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization10unpark_oneEyRNS2_15parking_controlE() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::index_mask_array(KMPAffinity::Mask*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity16index_mask_arrayEPN11KMPAffinity4MaskEi(void) {
    ALOGD("_ZN17KMPNativeAffinity16index_mask_arrayEPN11KMPAffinity4MaskEi() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_2i */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_2i __asm__("__kmp_atomic_lock_2i") = NULL;

/* Exported Object: __kmp_task_team_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_task_team_lock __asm__("__kmp_task_team_lock") = NULL;

/* Demangled: halide_error_fold_factor_too_small */
extern "C" __attribute__((visibility("default"))) int halide_error_fold_factor_too_small(void) {
    ALOGD("halide_error_fold_factor_too_small() called");
    return 0;
}

/* Demangled: CheckSum_Verify(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15CheckSum_VerifyPvi(void) {
    ALOGD("_Z15CheckSum_VerifyPvi() called");
    return 0;
}

/* Exported Object: __kmp_foreign_tp */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_foreign_tp __asm__("__kmp_foreign_tp") = NULL;

/* Demangled: ldc8_gpu */
extern "C" __attribute__((visibility("default"))) int ldc8_gpu(void) {
    ALOGD("ldc8_gpu() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float4_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_div(void) __asm__("__kmpc_atomic_float4_div");
int fn___kmpc_atomic_float4_div(void) {
    ALOGD("__kmpc_atomic_float4_div() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueWriteBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL20clEnqueueWriteBufferE = NULL;

/* Demangled: oaes_key_import_data(void*, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z20oaes_key_import_dataPvPKhm(void) {
    ALOGD("_Z20oaes_key_import_dataPvPKhm() called");
    return 0;
}

/* Demangled: __kmpc_omp_task_begin_if0 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task_begin_if0(void) __asm__("__kmpc_omp_task_begin_if0");
int fn___kmpc_omp_task_begin_if0(void) {
    ALOGD("__kmpc_omp_task_begin_if0() called");
    return 0;
}

/* Demangled: operator delete(void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __cxa_current_exception_type */
extern "C" __attribute__((visibility("default"))) int fn___cxa_current_exception_type(void) __asm__("__cxa_current_exception_type");
int fn___cxa_current_exception_type(void) {
    ALOGD("__cxa_current_exception_type() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx10_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx10_add(void) __asm__("__kmpc_atomic_cmplx10_add");
int fn___kmpc_atomic_cmplx10_add(void) {
    ALOGD("__kmpc_atomic_cmplx10_add() called");
    return 0;
}

/* Demangled: __ompt_lw_taskteam_init(ompt_lw_taskteam_s*, kmp_info*, int, ompt_data_t*, void*) */
extern "C" __attribute__((visibility("default"))) int _Z23__ompt_lw_taskteam_initP18ompt_lw_taskteam_sP8kmp_infoiP11ompt_data_tPv(void) {
    ALOGD("_Z23__ompt_lw_taskteam_initP18ompt_lw_taskteam_sP8kmp_infoiP11ompt_data_tPv() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD1Ev() called");
    return 0;
}

/* Demangled: copy_to_device_already_locked */
extern "C" __attribute__((visibility("default"))) int copy_to_device_already_locked(void) {
    ALOGD("copy_to_device_already_locked() called");
    return 0;
}

/* Demangled: kmpc_aligned_malloc */
extern "C" __attribute__((visibility("default"))) int kmpc_aligned_malloc(void) {
    ALOGD("kmpc_aligned_malloc() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateProgramWithSource */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL25clCreateProgramWithSourceE = NULL;

/* Demangled: halide_error_param_too_small_f64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_small_f64(void) {
    ALOGD("halide_error_param_too_small_f64() called");
    return 0;
}

/* Demangled: __kmpc_serialized_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_serialized_parallel(void) __asm__("__kmpc_serialized_parallel");
int fn___kmpc_serialized_parallel(void) {
    ALOGD("__kmpc_serialized_parallel() called");
    return 0;
}

/* Demangled: halide_set_custom_trace */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_trace(void) {
    ALOGD("halide_set_custom_trace() called");
    return 0;
}

/* Demangled: halide_opencl_device_and_host_free */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_and_host_free(void) {
    ALOGD("halide_opencl_device_and_host_free() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD0Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD0Ev() called");
    return 0;
}

/* Demangled: __kmp_ignore_mppend */
extern "C" __attribute__((visibility("default"))) int fn___kmp_ignore_mppend(void) __asm__("__kmp_ignore_mppend");
int fn___kmp_ignore_mppend(void) {
    ALOGD("__kmp_ignore_mppend() called");
    return 0;
}

/* Demangled: halide_get_trace_file */
extern "C" __attribute__((visibility("default"))) int halide_get_trace_file(void) {
    ALOGD("halide_get_trace_file() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_t(void) {
    ALOGD("_ZdaPvSt11align_val_t() called");
    return 0;
}

/* Demangled: __kmp_install_signals */
extern "C" __attribute__((visibility("default"))) int fn___kmp_install_signals(void) __asm__("__kmp_install_signals");
int fn___kmp_install_signals(void) {
    ALOGD("__kmp_install_signals() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<void, 4>& Halide::Runtime::Buffer<void, 4>::operator=<unsigned char, 4>(Halide::Runtime::Buffer<unsigned char, 4>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIvLi4EEaSIhLi4EEERS2_ONS1_IT_XT0_EEE(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIvLi4EEaSIhLi4EEERS2_ONS1_IT_XT0_EEE() called");
    return 0;
}

/* Exported Object: __kmp_static */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_static __asm__("__kmp_static") = NULL;

/* Demangled: halide_default_load_library */
extern "C" __attribute__((visibility("default"))) int halide_default_load_library(void) {
    ALOGD("halide_default_load_library() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::device_copy_mutex */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal17device_copy_mutexE = NULL;

/* Demangled: __kmpc_atomic_fixed2u_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2u_shr(void) __asm__("__kmpc_atomic_fixed2u_shr");
int fn___kmpc_atomic_fixed2u_shr(void) {
    ALOGD("__kmpc_atomic_fixed2u_shr() called");
    return 0;
}

/* Exported Object: __kmp_indirect_set */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_set __asm__("__kmp_indirect_set") = NULL;

/* Exported Object: __kmp_affinity_masks */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_masks __asm__("__kmp_affinity_masks") = NULL;

/* Demangled: __kmpc_dispatch_next_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_next_8(void) __asm__("__kmpc_dispatch_next_8");
int fn___kmpc_dispatch_next_8(void) {
    ALOGD("__kmpc_dispatch_next_8() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16bad_array_length = NULL;

/* Demangled: __kmpc_atomic_float4_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_add(void) __asm__("__kmpc_atomic_float4_add");
int fn___kmpc_atomic_float4_add(void) {
    ALOGD("__kmpc_atomic_float4_add() called");
    return 0;
}

/* Demangled: CholDcmp_Upper(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z14CholDcmp_UpperPdS_i(void) {
    ALOGD("_Z14CholDcmp_UpperPdS_i() called");
    return 0;
}

/* Demangled: __ieee754_sqrt(double) */
extern "C" __attribute__((visibility("default"))) int _Z14__ieee754_sqrtd(void) {
    ALOGD("_Z14__ieee754_sqrtd() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clReleaseCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL21clReleaseCommandQueueE = NULL;

/* Demangled: OAES_Decrypt(unsigned char*, unsigned long, unsigned char const*, unsigned long, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z12OAES_DecryptPhmPKhmS_Pm(void) {
    ALOGD("_Z12OAES_DecryptPhmPKhmS_Pm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Demangled: GC_calculate_3DPoints_Triangulation(double*, double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z35GC_calculate_3DPoints_TriangulationPdS_S_S_S_i(void) {
    ALOGD("_Z35GC_calculate_3DPoints_TriangulationPdS_S_S_S_i() called");
    return 0;
}

/* Demangled: ompt_post_init */
extern "C" __attribute__((visibility("default"))) int ompt_post_init(void) {
    ALOGD("ompt_post_init() called");
    return 0;
}

/* Demangled: __kmpc_critical */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_critical(void) __asm__("__kmpc_critical");
int fn___kmpc_critical(void) {
    ALOGD("__kmpc_critical() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_next_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_next_4(void) __asm__("__kmpc_dispatch_next_4");
int fn___kmpc_dispatch_next_4(void) {
    ALOGD("__kmpc_dispatch_next_4() called");
    return 0;
}

/* Demangled: __kmp_omp_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_omp_task(void) __asm__("__kmp_omp_task");
int fn___kmp_omp_task(void) {
    ALOGD("__kmp_omp_task() called");
    return 0;
}

/* Demangled: __kmp_run_before_invoked_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_run_before_invoked_task(void) __asm__("__kmp_run_before_invoked_task");
int fn___kmp_run_before_invoked_task(void) {
    ALOGD("__kmp_run_before_invoked_task() called");
    return 0;
}

/* Demangled: __kmp_enable */
extern "C" __attribute__((visibility("default"))) int fn___kmp_enable(void) __asm__("__kmp_enable");
int fn___kmp_enable(void) {
    ALOGD("__kmp_enable() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_next_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_next_4u(void) __asm__("__kmpc_dispatch_next_4u");
int fn___kmpc_dispatch_next_4u(void) {
    ALOGD("__kmpc_dispatch_next_4u() called");
    return 0;
}

/* Demangled: __kmp_init_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_drdpa_lock(void) __asm__("__kmp_init_drdpa_lock");
int fn___kmp_init_drdpa_lock(void) {
    ALOGD("__kmp_init_drdpa_lock() called");
    return 0;
}

/* Demangled: __kmpc_begin */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_begin(void) __asm__("__kmpc_begin");
int fn___kmpc_begin(void) {
    ALOGD("__kmpc_begin() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clSetKernelArg */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clSetKernelArgE = NULL;

/* Demangled: halide_opencl_detach_cl_mem */
extern "C" __attribute__((visibility("default"))) int halide_opencl_detach_cl_mem(void) {
    ALOGD("halide_opencl_detach_cl_mem() called");
    return 0;
}

/* Demangled: std::bad_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt8bad_cast4whatEv(void) {
    ALOGD("_ZNKSt8bad_cast4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC2Ev() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<unsigned char, 4>::Buffer<int, void>(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIhLi4EEC2IJiEvEEiiDpT_(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIhLi4EEC2IJiEvEEiiDpT_() called");
    return 0;
}

/* Demangled: __kmp_invoke_teams_master */
extern "C" __attribute__((visibility("default"))) int fn___kmp_invoke_teams_master(void) __asm__("__kmp_invoke_teams_master");
int fn___kmp_invoke_teams_master(void) {
    ALOGD("__kmp_invoke_teams_master() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_do_par_for */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal17custom_do_par_forE = NULL;

/* Demangled: __kmp_default_tp_capacity(int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z25__kmp_default_tp_capacityiii(void) {
    ALOGD("_Z25__kmp_default_tp_capacityiii() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::find_or_create_pipeline(char const*, int, unsigned long long const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal23find_or_create_pipelineEPKciPKy(void) {
    ALOGD("_ZN6Halide7Runtime8Internal23find_or_create_pipelineEPKciPKy() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_andb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_andb(void) __asm__("__kmpc_atomic_fixed8_andb");
int fn___kmpc_atomic_fixed8_andb(void) {
    ALOGD("__kmpc_atomic_fixed8_andb() called");
    return 0;
}

/* Demangled: __kmp_get_reduce_method */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_reduce_method(void) __asm__("__kmp_get_reduce_method");
int fn___kmp_get_reduce_method(void) {
    ALOGD("__kmp_get_reduce_method() called");
    return 0;
}

/* Exported Object: __kmp_barrier_gather_branch_bits */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_gather_branch_bits __asm__("__kmp_barrier_gather_branch_bits") = NULL;

/* Exported Object: typeinfo name for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDs = NULL;

/* Demangled: ldc_init_cpu */
extern "C" __attribute__((visibility("default"))) int ldc_init_cpu(void) {
    ALOGD("ldc_init_cpu() called");
    return 0;
}

/* Exported Object: __kmp_storage_map_verbose */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_storage_map_verbose __asm__("__kmp_storage_map_verbose") = NULL;

/* Demangled: __kmpc_atomic_fixed1_xor */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_xor(void) __asm__("__kmpc_atomic_fixed1_xor");
int fn___kmpc_atomic_fixed1_xor(void) {
    ALOGD("__kmpc_atomic_fixed1_xor() called");
    return 0;
}

/* Demangled: halide_opencl_get_device_type */
extern "C" __attribute__((visibility("default"))) int halide_opencl_get_device_type(void) {
    ALOGD("halide_opencl_get_device_type() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo name for half */
extern "C" __attribute__((visibility("default"))) void* _ZTSDh = NULL;

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD0Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD2Ev(void) {
    ALOGD("_ZNSt10bad_typeidD2Ev() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_mul_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_mul_float8(void) __asm__("__kmpc_atomic_fixed8_mul_float8");
int fn___kmpc_atomic_fixed8_mul_float8(void) {
    ALOGD("__kmpc_atomic_fixed8_mul_float8() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::deallocate_mask_array(KMPAffinity::Mask*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity21deallocate_mask_arrayEPN11KMPAffinity4MaskE(void) {
    ALOGD("_ZN17KMPNativeAffinity21deallocate_mask_arrayEPN11KMPAffinity4MaskE() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD1Ev() called");
    return 0;
}

/* Demangled: GC_ScaleIntrinsicMatrix(double*, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z23GC_ScaleIntrinsicMatrixPddd(void) {
    ALOGD("_Z23GC_ScaleIntrinsicMatrixPddd() called");
    return 0;
}

/* Exported Object: g_pcOutputPath */
extern "C" __attribute__((visibility("default"))) void* g_pcOutputPath = NULL;

/* Exported Object: typeinfo name for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDi = NULL;

/* Exported Object: typeinfo name for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDn = NULL;

/* Exported Object: __kmp_gtid_mode */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_gtid_mode __asm__("__kmp_gtid_mode") = NULL;

/* Demangled: kmpc_set_stacksize */
extern "C" __attribute__((visibility("default"))) int kmpc_set_stacksize(void) {
    ALOGD("kmpc_set_stacksize() called");
    return 0;
}

/* Demangled: halide_uint64_to_string */
extern "C" __attribute__((visibility("default"))) int halide_uint64_to_string(void) {
    ALOGD("halide_uint64_to_string() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx4_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_mul(void) __asm__("__kmpc_atomic_cmplx4_mul");
int fn___kmpc_atomic_cmplx4_mul(void) {
    ALOGD("__kmpc_atomic_cmplx4_mul() called");
    return 0;
}

/* Exported Object: typeinfo name for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDh = NULL;

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC2Ev() called");
    return 0;
}

/* Demangled: __kmp_debug_printf */
extern "C" __attribute__((visibility("default"))) int fn___kmp_debug_printf(void) __asm__("__kmp_debug_printf");
int fn___kmp_debug_printf(void) {
    ALOGD("__kmp_debug_printf() called");
    return 0;
}

/* Demangled: __kmp_affinity_set_init_mask */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_set_init_mask(void) __asm__("__kmp_affinity_set_init_mask");
int fn___kmp_affinity_set_init_mask(void) {
    ALOGD("__kmp_affinity_set_init_mask() called");
    return 0;
}

/* Demangled: ___kmp_thread_calloc */
extern "C" __attribute__((visibility("default"))) int fn____kmp_thread_calloc(void) __asm__("___kmp_thread_calloc");
int fn____kmp_thread_calloc(void) {
    ALOGD("___kmp_thread_calloc() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_do_task */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal14custom_do_taskE = NULL;

/* Demangled: kmpc_set_stacksize_s */
extern "C" __attribute__((visibility("default"))) int kmpc_set_stacksize_s(void) {
    ALOGD("kmpc_set_stacksize_s() called");
    return 0;
}

/* Demangled: __kmp_error_construct2 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_error_construct2(void) __asm__("__kmp_error_construct2");
int fn___kmp_error_construct2(void) {
    ALOGD("__kmp_error_construct2() called");
    return 0;
}

/* Demangled: halide_string_to_string */
extern "C" __attribute__((visibility("default"))) int halide_string_to_string(void) {
    ALOGD("halide_string_to_string() called");
    return 0;
}

/* Demangled: kmpc_set_blocktime */
extern "C" __attribute__((visibility("default"))) int kmpc_set_blocktime(void) {
    ALOGD("kmpc_set_blocktime() called");
    return 0;
}

/* Demangled: __kmpc_threadprivate_cached */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_threadprivate_cached(void) __asm__("__kmpc_threadprivate_cached");
int fn___kmpc_threadprivate_cached(void) {
    ALOGD("__kmpc_threadprivate_cached() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDi = NULL;

/* Demangled: std::bad_typeid::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt10bad_typeid4whatEv(void) {
    ALOGD("_ZNKSt10bad_typeid4whatEv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateContext */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL15clCreateContextE = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD1Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD1Ev() called");
    return 0;
}

/* Exported Object: __kmp_version_link_type */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_link_type __asm__("__kmp_version_link_type") = NULL;

/* Exported Object: Halide::Runtime::Internal::pixel_type_to_matlab_type_code */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal30pixel_type_to_matlab_type_codeE = NULL;

/* Demangled: alhFPC_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alhFPC_VersionInfo_Get(void) {
    ALOGD("alhFPC_VersionInfo_Get() called");
    return 0;
}

/* Exported Object: __kmp_omp_cancellation */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_omp_cancellation __asm__("__kmp_omp_cancellation") = NULL;

/* Demangled: __kmpc_omp_task_complete_if0 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task_complete_if0(void) __asm__("__kmpc_omp_task_complete_if0");
int fn___kmpc_omp_task_complete_if0(void) {
    ALOGD("__kmpc_omp_task_complete_if0() called");
    return 0;
}

/* Exported Object: std::__ndk1::adopt_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110adopt_lockE = NULL;

/* Demangled: __kmp_get_random */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_random(void) __asm__("__kmp_get_random");
int fn___kmp_get_random(void) {
    ALOGD("__kmp_get_random() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<void, 4>::~Buffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIvLi4EED2Ev(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIvLi4EED2Ev() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::OpenCL::load_libopencl(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal6OpenCL14load_libopenclEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal6OpenCL14load_libopenclEPv() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::get_pointer_to_header(unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal21get_pointer_to_headerEPh(void) {
    ALOGD("_ZN6Halide7Runtime8Internal21get_pointer_to_headerEPh() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD2Ev() called");
    return 0;
}

/* Demangled: __kmp_thread_sleep */
extern "C" __attribute__((visibility("default"))) int fn___kmp_thread_sleep(void) __asm__("__kmp_thread_sleep");
int fn___kmp_thread_sleep(void) {
    ALOGD("__kmp_thread_sleep() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_20c */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_20c __asm__("__kmp_atomic_lock_20c") = NULL;

/* Demangled: Halide::Runtime::Internal::copy_memory_helper(Halide::Runtime::Internal::device_copy const&, int, long long, long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal18copy_memory_helperERKNS1_11device_copyEixx(void) {
    ALOGD("_ZN6Halide7Runtime8Internal18copy_memory_helperERKNS1_11device_copyEixx() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD1Ev(void) {
    ALOGD("_ZNSt8bad_castD1Ev() called");
    return 0;
}

/* Exported Object: g_ViewRatioX */
extern "C" __attribute__((visibility("default"))) void* g_ViewRatioX = NULL;

/* Exported Object: __kmp_dflt_blocktime */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dflt_blocktime __asm__("__kmp_dflt_blocktime") = NULL;

/* Demangled: halide_default_device_crop */
extern "C" __attribute__((visibility("default"))) int halide_default_device_crop(void) {
    ALOGD("halide_default_device_crop() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC1Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC1Ev() called");
    return 0;
}

/* Exported Object: g_ViewRatioY */
extern "C" __attribute__((visibility("default"))) void* g_ViewRatioY = NULL;

/* Exported Object: vtable for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12out_of_range = NULL;

/* Exported Object: __kmp_debug_buf_lines */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buf_lines __asm__("__kmp_debug_buf_lines") = NULL;

/* Demangled: KMPNativeAffinity::Mask::bitwise_not() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask11bitwise_notEv(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask11bitwise_notEv() called");
    return 0;
}

/* Demangled: ldc8_chroma_cpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_cpu_metadata(void) {
    ALOGD("ldc8_chroma_cpu_metadata() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_orl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_orl(void) __asm__("__kmpc_atomic_fixed4_orl");
int fn___kmpc_atomic_fixed4_orl(void) {
    ALOGD("__kmpc_atomic_fixed4_orl() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetSupportedImageFormats */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL26clGetSupportedImageFormatsE = NULL;

/* Demangled: alLDCOnly_ini(void*, void*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z13alLDCOnly_iniPvS_ttttttPt(void) {
    ALOGD("_Z13alLDCOnly_iniPvS_ttttttPt() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __kmp_str_loc_init */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_loc_init(void) __asm__("__kmp_str_loc_init");
int fn___kmp_str_loc_init(void) {
    ALOGD("__kmp_str_loc_init() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryC2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryC2Ev() called");
    return 0;
}

/* Demangled: halide_default_malloc */
extern "C" __attribute__((visibility("default"))) int halide_default_malloc(void) {
    ALOGD("halide_default_malloc() called");
    return 0;
}

/* Demangled: __kmp_msg_error_mesg */
extern "C" __attribute__((visibility("default"))) int fn___kmp_msg_error_mesg(void) __asm__("__kmp_msg_error_mesg");
int fn___kmp_msg_error_mesg(void) {
    ALOGD("__kmp_msg_error_mesg() called");
    return 0;
}

/* Exported Object: __kmp_env_blocktime */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_env_blocktime __asm__("__kmp_env_blocktime") = NULL;

/* Demangled: halide_buffer_copy */
extern "C" __attribute__((visibility("default"))) int halide_buffer_copy(void) {
    ALOGD("halide_buffer_copy() called");
    return 0;
}

/* Exported Object: __kmp_yield_cycle */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_yield_cycle __asm__("__kmp_yield_cycle") = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clReleaseKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL15clReleaseKernelE = NULL;

/* Demangled: halide_can_use_target_features */
extern "C" __attribute__((visibility("default"))) int halide_can_use_target_features(void) {
    ALOGD("halide_can_use_target_features() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clFinish */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL8clFinishE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueReadImage */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL18clEnqueueReadImageE = NULL;

/* Demangled: __kmpc_master */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_master(void) __asm__("__kmpc_master");
int fn___kmpc_master(void) {
    ALOGD("__kmpc_master() called");
    return 0;
}

/* Exported Object: __kmp_sch_map */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_sch_map __asm__("__kmp_sch_map") = NULL;

/* Demangled: __cxa_get_exception_ptr */
extern "C" __attribute__((visibility("default"))) int fn___cxa_get_exception_ptr(void) __asm__("__cxa_get_exception_ptr");
int fn___cxa_get_exception_ptr(void) {
    ALOGD("__cxa_get_exception_ptr() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC2Ev(void) {
    ALOGD("_ZNSt10bad_typeidC2Ev() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD1Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD1Ev() called");
    return 0;
}

/* Demangled: halide_int64_to_string */
extern "C" __attribute__((visibility("default"))) int halide_int64_to_string(void) {
    ALOGD("halide_int64_to_string() called");
    return 0;
}

/* Demangled: __kmp_resume_64 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_resume_64(void) __asm__("__kmp_resume_64");
int fn___kmp_resume_64(void) {
    ALOGD("__kmp_resume_64() called");
    return 0;
}

/* Demangled: __kmp_initialize_fast_memory */
extern "C" __attribute__((visibility("default"))) int fn___kmp_initialize_fast_memory(void) __asm__("__kmp_initialize_fast_memory");
int fn___kmp_initialize_fast_memory(void) {
    ALOGD("__kmp_initialize_fast_memory() called");
    return 0;
}

/* Demangled: __cxa_call_unexpected */
extern "C" __attribute__((visibility("default"))) int fn___cxa_call_unexpected(void) __asm__("__cxa_call_unexpected");
int fn___cxa_call_unexpected(void) {
    ALOGD("__cxa_call_unexpected() called");
    return 0;
}

/* Exported Object: __kmp_yield_init */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_yield_init __asm__("__kmp_yield_init") = NULL;

/* Demangled: halide_device_free_as_destructor */
extern "C" __attribute__((visibility("default"))) int halide_device_free_as_destructor(void) {
    ALOGD("halide_device_free_as_destructor() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: halide_opencl_set_platform_name */
extern "C" __attribute__((visibility("default"))) int halide_opencl_set_platform_name(void) {
    ALOGD("halide_opencl_set_platform_name() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD2Ev() called");
    return 0;
}

/* Demangled: alRectLDC_PV_PackData_Upd_VCM_Dual(alDCAL_PACKDATA_V3*, short, short) */
extern "C" __attribute__((visibility("default"))) int _Z34alRectLDC_PV_PackData_Upd_VCM_DualP18alDCAL_PACKDATA_V3ss(void) {
    ALOGD("_Z34alRectLDC_PV_PackData_Upd_VCM_DualP18alDCAL_PACKDATA_V3ss() called");
    return 0;
}

/* Demangled: halide_shutdown_trace */
extern "C" __attribute__((visibility("default"))) int halide_shutdown_trace(void) {
    ALOGD("halide_shutdown_trace() called");
    return 0;
}

/* Demangled: halide_default_trace */
extern "C" __attribute__((visibility("default"))) int halide_default_trace(void) {
    ALOGD("halide_default_trace() called");
    return 0;
}

/* Demangled: KMPAffinity::Mask::operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity4MasknwEm(void) {
    ALOGD("_ZN11KMPAffinity4MasknwEm() called");
    return 0;
}

/* Demangled: halide_device_and_host_malloc */
extern "C" __attribute__((visibility("default"))) int halide_device_and_host_malloc(void) {
    ALOGD("halide_device_and_host_malloc() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::cache_entries */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal13cache_entriesE = NULL;

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC1Ev() called");
    return 0;
}

/* Demangled: halide_set_custom_get_library_symbol */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_get_library_symbol(void) {
    ALOGD("halide_set_custom_get_library_symbol() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx4_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_add(void) __asm__("__kmpc_atomic_cmplx4_add");
int fn___kmpc_atomic_cmplx4_add(void) {
    ALOGD("__kmpc_atomic_cmplx4_add() called");
    return 0;
}

/* Demangled: halide_opencl_get_cl_mem */
extern "C" __attribute__((visibility("default"))) int halide_opencl_get_cl_mem(void) {
    ALOGD("halide_opencl_get_cl_mem() called");
    return 0;
}

/* Exported Object: __kmp_hot_teams_mode */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hot_teams_mode __asm__("__kmp_hot_teams_mode") = NULL;

/* Exported Object: typeinfo name for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112future_errorE = NULL;

/* Exported Object: typeinfo name for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTSDn = NULL;

/* Demangled: __kmpc_atomic_fixed2u_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2u_div(void) __asm__("__kmpc_atomic_fixed2u_div");
int fn___kmpc_atomic_fixed2u_div(void) {
    ALOGD("__kmpc_atomic_fixed2u_div() called");
    return 0;
}

/* Exported Object: typeinfo name for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9type_info = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueWriteImage */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL19clEnqueueWriteImageE = NULL;

/* Demangled: Halide::Runtime::Internal::CacheEntry::init(unsigned char const*, unsigned long, unsigned int, halide_buffer_t const*, int, halide_buffer_t**) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal10CacheEntry4initEPKhmjPK15halide_buffer_tiPPS5_(void) {
    ALOGD("_ZN6Halide7Runtime8Internal10CacheEntry4initEPKhmjPK15halide_buffer_tiPPS5_() called");
    return 0;
}

/* Exported Object: vtable for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11logic_error = NULL;

/* Demangled: __kmp_init_nested_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_nested_ticket_lock(void) __asm__("__kmp_init_nested_ticket_lock");
int fn___kmp_init_nested_ticket_lock(void) {
    ALOGD("__kmp_init_nested_ticket_lock() called");
    return 0;
}

/* Demangled: std::set_terminate(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt13set_terminatePFvvE(void) {
    ALOGD("_ZSt13set_terminatePFvvE() called");
    return 0;
}

/* Demangled: __kmpc_barrier_master */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_barrier_master(void) __asm__("__kmpc_barrier_master");
int fn___kmpc_barrier_master(void) {
    ALOGD("__kmpc_barrier_master() called");
    return 0;
}

/* Demangled: __kmp_str_buf_print */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_print(void) __asm__("__kmp_str_buf_print");
int fn___kmp_str_buf_print(void) {
    ALOGD("__kmp_str_buf_print() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_init_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_init_8u(void) __asm__("__kmpc_dispatch_init_8u");
int fn___kmpc_dispatch_init_8u(void) {
    ALOGD("__kmpc_dispatch_init_8u() called");
    return 0;
}

/* Demangled: SetViewAutoMode(int) */
extern "C" __attribute__((visibility("default"))) int _Z15SetViewAutoModei(void) {
    ALOGD("_Z15SetViewAutoModei() called");
    return 0;
}

/* Demangled: kmpc_get_poolsize() */
extern "C" __attribute__((visibility("default"))) int _Z17kmpc_get_poolsizev(void) {
    ALOGD("_Z17kmpc_get_poolsizev() called");
    return 0;
}

/* Demangled: __kmp_str_match */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_match(void) __asm__("__kmp_str_match");
int fn___kmp_str_match(void) {
    ALOGD("__kmp_str_match() called");
    return 0;
}

/* Exported Object: vtable for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9exception = NULL;

/* Demangled: __kmpc_atomic_fixed4u_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4u_div(void) __asm__("__kmpc_atomic_fixed4u_div");
int fn___kmpc_atomic_fixed4u_div(void) {
    ALOGD("__kmpc_atomic_fixed4u_div() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::djb_hash(unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal8djb_hashEPKhm(void) {
    ALOGD("_ZN6Halide7Runtime8Internal8djb_hashEPKhm() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::bind_thread(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity11bind_threadEi(void) {
    ALOGD("_ZN17KMPNativeAffinity11bind_threadEi() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvmSt11align_val_t(void) {
    ALOGD("_ZdaPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: __kmp_futex_determine_capable */
extern "C" __attribute__((visibility("default"))) int fn___kmp_futex_determine_capable(void) __asm__("__kmp_futex_determine_capable");
int fn___kmp_futex_determine_capable(void) {
    ALOGD("__kmp_futex_determine_capable() called");
    return 0;
}

/* Demangled: __kmpc_destroy_nest_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_destroy_nest_lock(void) __asm__("__kmpc_destroy_nest_lock");
int fn___kmpc_destroy_nest_lock(void) {
    ALOGD("__kmpc_destroy_nest_lock() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: halide_cond_wait */
extern "C" __attribute__((visibility("default"))) int halide_cond_wait(void) {
    ALOGD("halide_cond_wait() called");
    return 0;
}

/* Demangled: ldc8_chroma_gpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_gpu_argv(void) {
    ALOGD("ldc8_chroma_gpu_argv() called");
    return 0;
}

/* Exported Object: __kmp_hws_tile */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_tile __asm__("__kmp_hws_tile") = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::unpark_requeue(unsigned long long, unsigned long long, Halide::Runtime::Internal::Synchronization::parking_control&, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization14unpark_requeueEyyRNS2_15parking_controlEy(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization14unpark_requeueEyyRNS2_15parking_controlEy() called");
    return 0;
}

/* Demangled: __kmp_str_buf_vprint */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_vprint(void) __asm__("__kmp_str_buf_vprint");
int fn___kmp_str_buf_vprint(void) {
    ALOGD("__kmp_str_buf_vprint() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_init_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_init_4u(void) __asm__("__kmpc_dispatch_init_4u");
int fn___kmpc_dispatch_init_4u(void) {
    ALOGD("__kmpc_dispatch_init_4u() called");
    return 0;
}

/* Demangled: halide_default_device_detach_native */
extern "C" __attribute__((visibility("default"))) int halide_default_device_detach_native(void) {
    ALOGD("halide_default_device_detach_native() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED2Ev() called");
    return 0;
}

/* Demangled: halide_float16_bits_to_float */
extern "C" __attribute__((visibility("default"))) int halide_float16_bits_to_float(void) {
    ALOGD("halide_float16_bits_to_float() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDs = NULL;

/* Exported Object: __kmp_storage_map_verbose_specified */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_storage_map_verbose_specified __asm__("__kmp_storage_map_verbose_specified") = NULL;

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: alPackDataUpdate_CropScale_V3(alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z29alPackDataUpdate_CropScale_V3P18alDCAL_PACKDATA_V3ttPt(void) {
    ALOGD("_Z29alPackDataUpdate_CropScale_V3P18alDCAL_PACKDATA_V3ttPt() called");
    return 0;
}

/* Demangled: halide_profiler_memory_allocate */
extern "C" __attribute__((visibility("default"))) int halide_profiler_memory_allocate(void) {
    ALOGD("halide_profiler_memory_allocate() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD1Ev(void) {
    ALOGD("_ZNSt9bad_allocD1Ev() called");
    return 0;
}

/* Demangled: __ompt_get_state_internal(unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z25__ompt_get_state_internalPm(void) {
    ALOGD("_Z25__ompt_get_state_internalPm() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD2Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_all_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_all_nth __asm__("__kmp_all_nth") = NULL;

/* Exported Object: vtable for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__shared_countE = NULL;

/* Demangled: __kmp_get_user_lock_owner */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_user_lock_owner(void) __asm__("__kmp_get_user_lock_owner");
int fn___kmp_get_user_lock_owner(void) {
    ALOGD("__kmp_get_user_lock_owner() called");
    return 0;
}

/* Exported Object: __kmp_stdio_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_stdio_lock __asm__("__kmp_stdio_lock") = NULL;

/* Demangled: __kmpc_proxy_task_completed_ooo */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_proxy_task_completed_ooo(void) __asm__("__kmpc_proxy_task_completed_ooo");
int fn___kmpc_proxy_task_completed_ooo(void) {
    ALOGD("__kmpc_proxy_task_completed_ooo() called");
    return 0;
}

/* Demangled: __kmp_get_schedule */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_schedule(void) __asm__("__kmp_get_schedule");
int fn___kmp_get_schedule(void) {
    ALOGD("__kmp_get_schedule() called");
    return 0;
}

/* Demangled: __kmpc_ordered */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_ordered(void) __asm__("__kmpc_ordered");
int fn___kmpc_ordered(void) {
    ALOGD("__kmpc_ordered() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clReleaseContext */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL16clReleaseContextE = NULL;

/* Demangled: halide_memoization_cache_store */
extern "C" __attribute__((visibility("default"))) int halide_memoization_cache_store(void) {
    ALOGD("halide_memoization_cache_store() called");
    return 0;
}

/* Demangled: alLDCOnly_ParamGen(LDC_info*, long long*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z18alLDCOnly_ParamGenP8LDC_infoPxttttttPt(void) {
    ALOGD("_Z18alLDCOnly_ParamGenP8LDC_infoPxttttttPt() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::guess_type_and_dimensionality(void*, buffer_t*, halide_buffer_t*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal29guess_type_and_dimensionalityEPvP8buffer_tP15halide_buffer_t(void) {
    ALOGD("_ZN6Halide7Runtime8Internal29guess_type_and_dimensionalityEPvP8buffer_tP15halide_buffer_t() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_10r */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_10r __asm__("__kmp_atomic_lock_10r") = NULL;

/* Demangled: Halide::Runtime::Internal::prune_cache() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal11prune_cacheEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal11prune_cacheEv() called");
    return 0;
}

/* Demangled: __kmp_task_dup_alloc(kmp_info*, kmp_task*) */
extern "C" __attribute__((visibility("default"))) int _Z20__kmp_task_dup_allocP8kmp_infoP8kmp_task(void) {
    ALOGD("_Z20__kmp_task_dup_allocP8kmp_infoP8kmp_task() called");
    return 0;
}

/* Exported Object: __kmp_barrier_gather_pat_dflt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_gather_pat_dflt __asm__("__kmp_barrier_gather_pat_dflt") = NULL;

/* Demangled: __kmpc_atomic_fixed2_xor */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_xor(void) __asm__("__kmpc_atomic_fixed2_xor");
int fn___kmpc_atomic_fixed2_xor(void) {
    ALOGD("__kmpc_atomic_fixed2_xor() called");
    return 0;
}

/* Demangled: halide_cache_cleanup */
extern "C" __attribute__((visibility("default"))) int halide_cache_cleanup(void) {
    ALOGD("halide_cache_cleanup() called");
    return 0;
}

/* Demangled: __kmp_pop_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmp_pop_parallel(void) __asm__("__kmp_pop_parallel");
int fn___kmp_pop_parallel(void) {
    ALOGD("__kmp_pop_parallel() called");
    return 0;
}

/* Demangled: halide_opencl_device_malloc */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_malloc(void) {
    ALOGD("halide_opencl_device_malloc() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: alPackDataUpdate_VCM_V3(alDCAL_PACKDATA_V3*, short) */
extern "C" __attribute__((visibility("default"))) int _Z23alPackDataUpdate_VCM_V3P18alDCAL_PACKDATA_V3s(void) {
    ALOGD("_Z23alPackDataUpdate_VCM_V3P18alDCAL_PACKDATA_V3s() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clRetainMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL17clRetainMemObjectE = NULL;

/* Demangled: __kmp_print_storage_map_gtid */
extern "C" __attribute__((visibility("default"))) int fn___kmp_print_storage_map_gtid(void) __asm__("__kmp_print_storage_map_gtid");
int fn___kmp_print_storage_map_gtid(void) {
    ALOGD("__kmp_print_storage_map_gtid() called");
    return 0;
}

/* Demangled: __kmp_task_alloc */
extern "C" __attribute__((visibility("default"))) int fn___kmp_task_alloc(void) __asm__("__kmp_task_alloc");
int fn___kmp_task_alloc(void) {
    ALOGD("__kmp_task_alloc() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_eqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_eqv(void) __asm__("__kmpc_atomic_fixed1_eqv");
int fn___kmpc_atomic_fixed1_eqv(void) {
    ALOGD("__kmpc_atomic_fixed1_eqv() called");
    return 0;
}

/* Demangled: alKD_GetDecLDCData */
extern "C" __attribute__((visibility("default"))) int alKD_GetDecLDCData(void) {
    ALOGD("alKD_GetDecLDCData() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetImageInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clGetImageInfoE = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: __kmp_elapsed_tick */
extern "C" __attribute__((visibility("default"))) int fn___kmp_elapsed_tick(void) __asm__("__kmp_elapsed_tick");
int fn___kmp_elapsed_tick(void) {
    ALOGD("__kmp_elapsed_tick() called");
    return 0;
}

/* Demangled: __kmp_aux_unset_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_unset_affinity_mask_proc(void) __asm__("__kmp_aux_unset_affinity_mask_proc");
int fn___kmp_aux_unset_affinity_mask_proc(void) {
    ALOGD("__kmp_aux_unset_affinity_mask_proc() called");
    return 0;
}

/* Demangled: halide_cond_signal */
extern "C" __attribute__((visibility("default"))) int halide_cond_signal(void) {
    ALOGD("halide_cond_signal() called");
    return 0;
}

/* Demangled: opencl_device_crop_from_offset */
extern "C" __attribute__((visibility("default"))) int opencl_device_crop_from_offset(void) {
    ALOGD("opencl_device_crop_from_offset() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::lock_bucket_pair(unsigned long long, unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization16lock_bucket_pairEyy(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization16lock_bucket_pairEyy() called");
    return 0;
}

/* Demangled: __kmp_set_schedule */
extern "C" __attribute__((visibility("default"))) int fn___kmp_set_schedule(void) __asm__("__kmp_set_schedule");
int fn___kmp_set_schedule(void) {
    ALOGD("__kmp_set_schedule() called");
    return 0;
}

/* Demangled: ___kmp_thread_free */
extern "C" __attribute__((visibility("default"))) int fn____kmp_thread_free(void) __asm__("___kmp_thread_free");
int fn____kmp_thread_free(void) {
    ALOGD("___kmp_thread_free() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD2Ev(void) {
    ALOGD("_ZNSt15underflow_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex4lockEv() called");
    return 0;
}

/* Demangled: GC_calculateF_DLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17GC_calculateF_DLTPdS_S_i(void) {
    ALOGD("_Z17GC_calculateF_DLTPdS_S_i() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD1Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD1Ev() called");
    return 0;
}

/* Demangled: PackDataEncryption_V3(alDCAL_PACKDATA_V3*, unsigned char*, unsigned char*, int*) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataEncryption_V3P18alDCAL_PACKDATA_V3PhS1_Pi(void) {
    ALOGD("_Z21PackDataEncryption_V3P18alDCAL_PACKDATA_V3PhS1_Pi() called");
    return 0;
}

/* Demangled: halide_profiler_reset */
extern "C" __attribute__((visibility("default"))) int halide_profiler_reset(void) {
    ALOGD("halide_profiler_reset() called");
    return 0;
}

/* Demangled: __ompt_lw_taskteam_unlink(kmp_info*) */
extern "C" __attribute__((visibility("default"))) int _Z25__ompt_lw_taskteam_unlinkP8kmp_info(void) {
    ALOGD("_Z25__ompt_lw_taskteam_unlinkP8kmp_info() called");
    return 0;
}

/* Demangled: __kmp_finalize_bget */
extern "C" __attribute__((visibility("default"))) int fn___kmp_finalize_bget(void) __asm__("__kmp_finalize_bget");
int fn___kmp_finalize_bget(void) {
    ALOGD("__kmp_finalize_bget() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::Synchronization::table_storage */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal15Synchronization13table_storageE = NULL;

/* Demangled: __kmp_le_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_le_4(void) __asm__("__kmp_le_4");
int fn___kmp_le_4(void) {
    ALOGD("__kmp_le_4() called");
    return 0;
}

/* Demangled: halide_set_custom_get_symbol */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_get_symbol(void) {
    ALOGD("halide_set_custom_get_symbol() called");
    return 0;
}

/* Demangled: fpc_scaling_ratio_calculation(alfpc_scaling_calculation_input_t*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z29fpc_scaling_ratio_calculationP33alfpc_scaling_calculation_input_tPd(void) {
    ALOGD("_Z29fpc_scaling_ratio_calculationP33alfpc_scaling_calculation_input_tPd() called");
    return 0;
}

/* Demangled: __kmp_gtid_get_specific */
extern "C" __attribute__((visibility("default"))) int fn___kmp_gtid_get_specific(void) __asm__("__kmp_gtid_get_specific");
int fn___kmp_gtid_get_specific(void) {
    ALOGD("__kmp_gtid_get_specific() called");
    return 0;
}

/* Exported Object: vtable for KMPNativeAffinity */
extern "C" __attribute__((visibility("default"))) void* _ZTV17KMPNativeAffinity = NULL;

/* Demangled: __kmp_init_random */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_random(void) __asm__("__kmp_init_random");
int fn___kmp_init_random(void) {
    ALOGD("__kmp_init_random() called");
    return 0;
}

/* Demangled: CheckSum_Verify_V3(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z18CheckSum_Verify_V3Pvi(void) {
    ALOGD("_Z18CheckSum_Verify_V3Pvi() called");
    return 0;
}

/* Demangled: halide_opencl_device_slice */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_slice(void) {
    ALOGD("halide_opencl_device_slice() called");
    return 0;
}

/* Demangled: GC_getEulerAngles(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z17GC_getEulerAnglesPdS_(void) {
    ALOGD("_Z17GC_getEulerAnglesPdS_() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx4_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_div(void) __asm__("__kmpc_atomic_cmplx4_div");
int fn___kmpc_atomic_cmplx4_div(void) {
    ALOGD("__kmpc_atomic_cmplx4_div() called");
    return 0;
}

/* Demangled: halide_get_gpu_device */
extern "C" __attribute__((visibility("default"))) int halide_get_gpu_device(void) {
    ALOGD("halide_get_gpu_device() called");
    return 0;
}

/* Exported Object: g_mutex */
extern "C" __attribute__((visibility("default"))) void* g_mutex = NULL;

/* Demangled: __kmp_aux_dispatch_fini_chunk_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_fini_chunk_4(void) __asm__("__kmp_aux_dispatch_fini_chunk_4");
int fn___kmp_aux_dispatch_fini_chunk_4(void) {
    ALOGD("__kmp_aux_dispatch_fini_chunk_4() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_eqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_eqv(void) __asm__("__kmpc_atomic_fixed4_eqv");
int fn___kmpc_atomic_fixed4_eqv(void) {
    ALOGD("__kmpc_atomic_fixed4_eqv() called");
    return 0;
}

/* Exported Object: .gomp_critical_user_ */
extern "C" __attribute__((visibility("default"))) void* obj__gomp_critical_user_ __asm__(".gomp_critical_user_") = NULL;

/* Demangled: halide_trace */
extern "C" __attribute__((visibility("default"))) int halide_trace(void) {
    ALOGD("halide_trace() called");
    return 0;
}

/* Demangled: halide_set_num_threads */
extern "C" __attribute__((visibility("default"))) int halide_set_num_threads(void) {
    ALOGD("halide_set_num_threads() called");
    return 0;
}

/* Demangled: GC_ScaleIntrinsicMatrix(double*, double) */
extern "C" __attribute__((visibility("default"))) int _Z23GC_ScaleIntrinsicMatrixPdd(void) {
    ALOGD("_Z23GC_ScaleIntrinsicMatrixPdd() called");
    return 0;
}

/* Demangled: halide_current_time_ns */
extern "C" __attribute__((visibility("default"))) int halide_current_time_ns(void) {
    ALOGD("halide_current_time_ns() called");
    return 0;
}

/* Demangled: halide_error_bad_type */
extern "C" __attribute__((visibility("default"))) int halide_error_bad_type(void) {
    ALOGD("halide_error_bad_type() called");
    return 0;
}

/* Demangled: std::current_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt17current_exceptionv(void) {
    ALOGD("_ZSt17current_exceptionv() called");
    return 0;
}

/* Exported Object: __kmp_msg_null */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_msg_null __asm__("__kmp_msg_null") = NULL;

/* Exported Object: Halide::Runtime::Internal::most_recently_used */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal18most_recently_usedE = NULL;

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc() called");
    return 0;
}

/* Demangled: halide_opencl_get_symbol */
extern "C" __attribute__((visibility("default"))) int halide_opencl_get_symbol(void) {
    ALOGD("halide_opencl_get_symbol() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::halide_trace_file_internally_opened */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal35halide_trace_file_internally_openedE = NULL;

/* Demangled: __kmp_env_blk_sort */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_blk_sort(void) __asm__("__kmp_env_blk_sort");
int fn___kmp_env_blk_sort(void) {
    ALOGD("__kmp_env_blk_sort() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_div_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_div_float8(void) __asm__("__kmpc_atomic_fixed8_div_float8");
int fn___kmpc_atomic_fixed8_div_float8(void) {
    ALOGD("__kmpc_atomic_fixed8_div_float8() called");
    return 0;
}

/* Exported Object: __kmp_next_wait */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_next_wait __asm__("__kmp_next_wait") = NULL;

/* Exported Object: __kmp_indirect_get_flags */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_get_flags __asm__("__kmp_indirect_get_flags") = NULL;

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC2Ev(void) {
    ALOGD("_ZNSt9bad_allocC2Ev() called");
    return 0;
}

/* Demangled: __kmp_i18n_dump_catalog(kmp_str_buf*) */
extern "C" __attribute__((visibility("default"))) int _Z23__kmp_i18n_dump_catalogP11kmp_str_buf(void) {
    ALOGD("_Z23__kmp_i18n_dump_catalogP11kmp_str_buf() called");
    return 0;
}

/* Demangled: halide_device_host_nop_free */
extern "C" __attribute__((visibility("default"))) int halide_device_host_nop_free(void) {
    ALOGD("halide_device_host_nop_free() called");
    return 0;
}

/* Demangled: LDC_PV_CropPincushion2_center(double*, double*, tLDC_STRUCT*, double*, double*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z29LDC_PV_CropPincushion2_centerPdS_P11tLDC_STRUCTS_S_h(void) {
    ALOGD("_Z29LDC_PV_CropPincushion2_centerPdS_P11tLDC_STRUCTS_S_h() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::wait_parking_control_before_sleep(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization33wait_parking_control_before_sleepEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization33wait_parking_control_before_sleepEPv() called");
    return 0;
}

/* Demangled: halide_thread_pool_cleanup */
extern "C" __attribute__((visibility("default"))) int halide_thread_pool_cleanup(void) {
    ALOGD("halide_thread_pool_cleanup() called");
    return 0;
}

/* Demangled: __kmp_test_nested_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_nested_drdpa_lock(void) __asm__("__kmp_test_nested_drdpa_lock");
int fn___kmp_test_nested_drdpa_lock(void) {
    ALOGD("__kmp_test_nested_drdpa_lock() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC2Ev() called");
    return 0;
}

/* Demangled: halide_float16_bits_to_double */
extern "C" __attribute__((visibility("default"))) int halide_float16_bits_to_double(void) {
    ALOGD("halide_float16_bits_to_double() called");
    return 0;
}

/* Exported Object: __kmp_version_major */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_major __asm__("__kmp_version_major") = NULL;

/* Demangled: __kmp_affinity_determine_capable */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_determine_capable(void) __asm__("__kmp_affinity_determine_capable");
int fn___kmp_affinity_determine_capable(void) {
    ALOGD("__kmp_affinity_determine_capable() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_add(void) __asm__("__kmpc_atomic_fixed4_add");
int fn___kmpc_atomic_fixed4_add(void) {
    ALOGD("__kmpc_atomic_fixed4_add() called");
    return 0;
}

/* Demangled: alKD_GetDecLDCPackDataSize */
extern "C" __attribute__((visibility("default"))) int alKD_GetDecLDCPackDataSize(void) {
    ALOGD("alKD_GetDecLDCPackDataSize() called");
    return 0;
}

/* Demangled: __kmp_push_num_teams */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_num_teams(void) __asm__("__kmp_push_num_teams");
int fn___kmp_push_num_teams(void) {
    ALOGD("__kmp_push_num_teams() called");
    return 0;
}

/* Demangled: oaes_free(void**) */
extern "C" __attribute__((visibility("default"))) int _Z9oaes_freePPv(void) {
    ALOGD("_Z9oaes_freePPv() called");
    return 0;
}

/* Demangled: alKD_PackDataToCaliData_DEC */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataToCaliData_DEC(void) {
    ALOGD("alKD_PackDataToCaliData_DEC() called");
    return 0;
}

/* Exported Object: __kmp_debug_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_lock __asm__("__kmp_debug_lock") = NULL;

/* Demangled: __kmp_initial_threads_capacity(int) */
extern "C" __attribute__((visibility("default"))) int _Z30__kmp_initial_threads_capacityi(void) {
    ALOGD("_Z30__kmp_initial_threads_capacityi() called");
    return 0;
}

/* Exported Object: __kmp_reserve_warn */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_reserve_warn __asm__("__kmp_reserve_warn") = NULL;

/* Demangled: alPackDataUpdate_SubCamRectShift_V3(alDCAL_PACKDATA_V3*, double) */
extern "C" __attribute__((visibility("default"))) int _Z35alPackDataUpdate_SubCamRectShift_V3P18alDCAL_PACKDATA_V3d(void) {
    ALOGD("_Z35alPackDataUpdate_SubCamRectShift_V3P18alDCAL_PACKDATA_V3d() called");
    return 0;
}

/* Demangled: __kmp_str_match_false */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_match_false(void) __asm__("__kmp_str_match_false");
int fn___kmp_str_match_false(void) {
    ALOGD("__kmp_str_match_false() called");
    return 0;
}

/* Demangled: __kmp_read_system_info */
extern "C" __attribute__((visibility("default"))) int fn___kmp_read_system_info(void) __asm__("__kmp_read_system_info");
int fn___kmp_read_system_info(void) {
    ALOGD("__kmp_read_system_info() called");
    return 0;
}

/* Exported Object: __kmp_init_gtid */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_gtid __asm__("__kmp_init_gtid") = NULL;

/* Demangled: alReplaceTXT(char*, char*, char*, char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z12alReplaceTXTPcS_S_S_i(void) {
    ALOGD("_Z12alReplaceTXTPcS_S_S_i() called");
    return 0;
}

/* Demangled: __kmp_aux_dispatch_fini_chunk_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_fini_chunk_8(void) __asm__("__kmp_aux_dispatch_fini_chunk_8");
int fn___kmp_aux_dispatch_fini_chunk_8(void) {
    ALOGD("__kmp_aux_dispatch_fini_chunk_8() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::error_handler */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal13error_handlerE = NULL;

/* Demangled: __kmp_release_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_ticket_lock(void) __asm__("__kmp_release_ticket_lock");
int fn___kmp_release_ticket_lock(void) {
    ALOGD("__kmp_release_ticket_lock() called");
    return 0;
}

/* Demangled: __kmp_release_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_queuing_lock(void) __asm__("__kmp_release_queuing_lock");
int fn___kmp_release_queuing_lock(void) {
    ALOGD("__kmp_release_queuing_lock() called");
    return 0;
}

/* Demangled: LDC_PointScaling(double*, double*, double, double, unsigned short, unsigned short, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z16LDC_PointScalingPdS_ddtttt(void) {
    ALOGD("_Z16LDC_PointScalingPdS_ddtttt() called");
    return 0;
}

/* Demangled: PackDataDecryption_V4(unsigned char*, unsigned char*, int, unsigned char*, int) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataDecryption_V4PhS_iS_i(void) {
    ALOGD("_Z21PackDataDecryption_V4PhS_iS_i() called");
    return 0;
}

/* Demangled: halide_device_release_crop */
extern "C" __attribute__((visibility("default"))) int halide_device_release_crop(void) {
    ALOGD("halide_device_release_crop() called");
    return 0;
}

/* Demangled: __kmp_release_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_futex_lock(void) __asm__("__kmp_release_futex_lock");
int fn___kmp_release_futex_lock(void) {
    ALOGD("__kmp_release_futex_lock() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_eqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_eqv(void) __asm__("__kmpc_atomic_fixed2_eqv");
int fn___kmpc_atomic_fixed2_eqv(void) {
    ALOGD("__kmpc_atomic_fixed2_eqv() called");
    return 0;
}

/* Exported Object: __kmp_version_lib_type */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_lib_type __asm__("__kmp_version_lib_type") = NULL;

/* Demangled: halide_spawn_thread */
extern "C" __attribute__((visibility("default"))) int halide_spawn_thread(void) {
    ALOGD("halide_spawn_thread() called");
    return 0;
}

/* Demangled: halide_set_custom_print */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_print(void) {
    ALOGD("halide_set_custom_print() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::opencl_device_interface */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL23opencl_device_interfaceE = NULL;

/* Demangled: Matrix_ludcmp(double*, int*, int*, double*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _Z13Matrix_ludcmpPdPiS0_S_ib(void) {
    ALOGD("_Z13Matrix_ludcmpPdPiS0_S_ib() called");
    return 0;
}

/* Demangled: halide_pointer_to_string */
extern "C" __attribute__((visibility("default"))) int halide_pointer_to_string(void) {
    ALOGD("halide_pointer_to_string() called");
    return 0;
}

/* Demangled: __kmpc_reduce */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_reduce(void) __asm__("__kmpc_reduce");
int fn___kmpc_reduce(void) {
    ALOGD("__kmpc_reduce() called");
    return 0;
}

/* Demangled: __kmp_debug_assert */
extern "C" __attribute__((visibility("default"))) int fn___kmp_debug_assert(void) __asm__("__kmp_debug_assert");
int fn___kmp_debug_assert(void) {
    ALOGD("__kmp_debug_assert() called");
    return 0;
}

/* Demangled: __kmp_fork_call */
extern "C" __attribute__((visibility("default"))) int fn___kmp_fork_call(void) __asm__("__kmp_fork_call");
int fn___kmp_fork_call(void) {
    ALOGD("__kmp_fork_call() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::opencl_device_interface_impl */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL28opencl_device_interface_implE = NULL;

/* Exported Object: typeinfo for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKv = NULL;

/* Demangled: altek::get_wall_time_ms() */
extern "C" __attribute__((visibility("default"))) int _ZN5altek16get_wall_time_msEv(void) {
    ALOGD("_ZN5altek16get_wall_time_msEv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_andl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_andl(void) __asm__("__kmpc_atomic_fixed2_andl");
int fn___kmpc_atomic_fixed2_andl(void) {
    ALOGD("__kmpc_atomic_fixed2_andl() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_local_data() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__thread_local_dataEv(void) {
    ALOGD("_ZNSt6__ndk119__thread_local_dataEv() called");
    return 0;
}

/* Demangled: __kmp_invoke_microtask */
extern "C" __attribute__((visibility("default"))) int fn___kmp_invoke_microtask(void) __asm__("__kmp_invoke_microtask");
int fn___kmp_invoke_microtask(void) {
    ALOGD("__kmp_invoke_microtask() called");
    return 0;
}

/* Demangled: isaac(randctx*) */
extern "C" __attribute__((visibility("default"))) int _Z5isaacP7randctx(void) {
    ALOGD("_Z5isaacP7randctx() called");
    return 0;
}

/* Demangled: __kmp_suspend_oncore */
extern "C" __attribute__((visibility("default"))) int fn___kmp_suspend_oncore(void) __asm__("__kmp_suspend_oncore");
int fn___kmp_suspend_oncore(void) {
    ALOGD("__kmp_suspend_oncore() called");
    return 0;
}

/* Exported Object: __kmp_affin_fullMask */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affin_fullMask __asm__("__kmp_affin_fullMask") = NULL;

/* Exported Object: __kmp_atomic_mode */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_mode __asm__("__kmp_atomic_mode") = NULL;

/* Demangled: GC_enforce_F_rank2(double*) */
extern "C" __attribute__((visibility("default"))) int _Z18GC_enforce_F_rank2Pd(void) {
    ALOGD("_Z18GC_enforce_F_rank2Pd() called");
    return 0;
}

/* Demangled: oaes_decrypt(void*, unsigned char const*, unsigned long, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z12oaes_decryptPvPKhmPhPm(void) {
    ALOGD("_Z12oaes_decryptPvPKhmPhPm() called");
    return 0;
}

/* Demangled: ___kmp_free */
extern "C" __attribute__((visibility("default"))) int fn____kmp_free(void) __asm__("___kmp_free");
int fn____kmp_free(void) {
    ALOGD("___kmp_free() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_sub(void) __asm__("__kmpc_atomic_fixed2_sub");
int fn___kmpc_atomic_fixed2_sub(void) {
    ALOGD("__kmpc_atomic_fixed2_sub() called");
    return 0;
}

/* Demangled: __kmpc_ok_to_fork */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_ok_to_fork(void) __asm__("__kmpc_ok_to_fork");
int fn___kmpc_ok_to_fork(void) {
    ALOGD("__kmpc_ok_to_fork() called");
    return 0;
}

/* Demangled: ldc8_cpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc8_cpu_metadata(void) {
    ALOGD("ldc8_cpu_metadata() called");
    return 0;
}

/* Demangled: __kmp_dephash_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_dephash_free(void) __asm__("__kmp_dephash_free");
int fn___kmp_dephash_free(void) {
    ALOGD("__kmp_dephash_free() called");
    return 0;
}

/* Demangled: SVDReorder(int, int, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z10SVDReorderiiPdS_S_(void) {
    ALOGD("_Z10SVDReorderiiPdS_S_() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::join() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread4joinEv(void) {
    ALOGD("_ZNSt6__ndk16thread4joinEv() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::default_desired_num_threads() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal27default_desired_num_threadsEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal27default_desired_num_threadsEv() called");
    return 0;
}

/* Demangled: halide_error_buffer_argument_is_null */
extern "C" __attribute__((visibility("default"))) int halide_error_buffer_argument_is_null(void) {
    ALOGD("halide_error_buffer_argument_is_null() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::get_system_affinity(bool) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask19get_system_affinityEb(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask19get_system_affinityEb() called");
    return 0;
}

/* Demangled: __kmp_internal_end_fini */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_fini(void) __asm__("__kmp_internal_end_fini");
int fn___kmp_internal_end_fini(void) {
    ALOGD("__kmp_internal_end_fini() called");
    return 0;
}

/* Demangled: __kmp_wait_64 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_wait_64(void) __asm__("__kmp_wait_64");
int fn___kmp_wait_64(void) {
    ALOGD("__kmp_wait_64() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKy = NULL;

/* Demangled: halide_error_buffer_extents_too_large */
extern "C" __attribute__((visibility("default"))) int halide_error_buffer_extents_too_large(void) {
    ALOGD("halide_error_buffer_extents_too_large() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx10_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx10_mul(void) __asm__("__kmpc_atomic_cmplx10_mul");
int fn___kmpc_atomic_cmplx10_mul(void) {
    ALOGD("__kmpc_atomic_cmplx10_mul() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_xor */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_xor(void) __asm__("__kmpc_atomic_fixed8_xor");
int fn___kmpc_atomic_fixed8_xor(void) {
    ALOGD("__kmpc_atomic_fixed8_xor() called");
    return 0;
}

/* Demangled: alGLDC_Points_LDC(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, GLDC_DATA_STRC_ANDROID*) */
extern "C" __attribute__((visibility("default"))) int _Z17alGLDC_Points_LDCPtS_S_S_iP22GLDC_DATA_STRC_ANDROID(void) {
    ALOGD("_Z17alGLDC_Points_LDCPtS_S_S_iP22GLDC_DATA_STRC_ANDROID() called");
    return 0;
}

/* Demangled: GC_ScaleProjectionMatrix(double*, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z24GC_ScaleProjectionMatrixPddd(void) {
    ALOGD("_Z24GC_ScaleProjectionMatrixPddd() called");
    return 0;
}

/* Demangled: __kmp_init_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_queuing_lock(void) __asm__("__kmp_init_queuing_lock");
int fn___kmp_init_queuing_lock(void) {
    ALOGD("__kmp_init_queuing_lock() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKw = NULL;

/* Exported Object: Halide::Runtime::Internal::pixel_type_to_matlab_class_code */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal31pixel_type_to_matlab_class_codeE = NULL;

/* Demangled: __kmp_ignore_mppbeg */
extern "C" __attribute__((visibility("default"))) int fn___kmp_ignore_mppbeg(void) __asm__("__kmp_ignore_mppbeg");
int fn___kmp_ignore_mppbeg(void) {
    ALOGD("__kmp_ignore_mppbeg() called");
    return 0;
}

/* Exported Object: __kmp_monitor */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_monitor __asm__("__kmp_monitor") = NULL;

/* Exported Object: typeinfo for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKx = NULL;

/* Demangled: __kmpc_atomic_float4_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_min(void) __asm__("__kmpc_atomic_float4_min");
int fn___kmpc_atomic_float4_min(void) {
    ALOGD("__kmpc_atomic_float4_min() called");
    return 0;
}

/* Demangled: std::__ndk1::error_code::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110error_code7messageEv(void) {
    ALOGD("_ZNKSt6__ndk110error_code7messageEv() called");
    return 0;
}

/* Demangled: __kmp_register_library_startup() */
extern "C" __attribute__((visibility("default"))) int _Z30__kmp_register_library_startupv(void) {
    ALOGD("_Z30__kmp_register_library_startupv() called");
    return 0;
}

/* Exported Object: __kmp_zero_bt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_zero_bt __asm__("__kmp_zero_bt") = NULL;

/* Demangled: std::__ndk1::generic_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116generic_categoryEv(void) {
    ALOGD("_ZNSt6__ndk116generic_categoryEv() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt8bad_cast = NULL;

/* Exported Object: typeinfo name for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt10bad_typeid = NULL;

/* Demangled: __kmp_end_split_barrier */
extern "C" __attribute__((visibility("default"))) int fn___kmp_end_split_barrier(void) __asm__("__kmp_end_split_barrier");
int fn___kmp_end_split_barrier(void) {
    ALOGD("__kmp_end_split_barrier() called");
    return 0;
}

/* Demangled: __kmp_env_exists */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_exists(void) __asm__("__kmp_env_exists");
int fn___kmp_env_exists(void) {
    ALOGD("__kmp_env_exists() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::make_buffer_copy(halide_buffer_t const*, bool, halide_buffer_t const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal16make_buffer_copyEPK15halide_buffer_tbS4_b(void) {
    ALOGD("_ZN6Halide7Runtime8Internal16make_buffer_copyEPK15halide_buffer_tbS4_b() called");
    return 0;
}

/* Demangled: halide_load_library */
extern "C" __attribute__((visibility("default"))) int halide_load_library(void) {
    ALOGD("halide_load_library() called");
    return 0;
}

/* Exported Object: typeinfo for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt14overflow_error = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD0Ev() called");
    return 0;
}

/* Demangled: permission_deinit() */
extern "C" __attribute__((visibility("default"))) int _Z17permission_deinitv(void) {
    ALOGD("_Z17permission_deinitv() called");
    return 0;
}

/* Exported Object: __kmp_stkpadding */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_stkpadding __asm__("__kmp_stkpadding") = NULL;

/* Demangled: alGLDC_Creat_android(long*, long*, void*, void*, int, GLDC_DATA_STRC_ANDROID*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z20alGLDC_Creat_androidPlS_PvS0_iP22GLDC_DATA_STRC_ANDROIDPdS3_S3_(void) {
    ALOGD("_Z20alGLDC_Creat_androidPlS_PvS0_iP22GLDC_DATA_STRC_ANDROIDPdS3_S3_() called");
    return 0;
}

/* Demangled: __kmp_fatal */
extern "C" __attribute__((visibility("default"))) int fn___kmp_fatal(void) __asm__("__kmp_fatal");
int fn___kmp_fatal(void) {
    ALOGD("__kmp_fatal() called");
    return 0;
}

/* Demangled: ompc_get_ancestor_thread_num */
extern "C" __attribute__((visibility("default"))) int ompc_get_ancestor_thread_num(void) {
    ALOGD("ompc_get_ancestor_thread_num() called");
    return 0;
}

/* Demangled: __kmp_destroy_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_queuing_lock(void) __asm__("__kmp_destroy_queuing_lock");
int fn___kmp_destroy_queuing_lock(void) {
    ALOGD("__kmp_destroy_queuing_lock() called");
    return 0;
}

/* Demangled: halide_device_wrap_native */
extern "C" __attribute__((visibility("default"))) int halide_device_wrap_native(void) {
    ALOGD("halide_device_wrap_native() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_t(void) {
    ALOGD("_ZnwmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: __kmp_msg_format */
extern "C" __attribute__((visibility("default"))) int fn___kmp_msg_format(void) __asm__("__kmp_msg_format");
int fn___kmp_msg_format(void) {
    ALOGD("__kmp_msg_format() called");
    return 0;
}

/* Demangled: __kmp_reap_task_teams */
extern "C" __attribute__((visibility("default"))) int fn___kmp_reap_task_teams(void) __asm__("__kmp_reap_task_teams");
int fn___kmp_reap_task_teams(void) {
    ALOGD("__kmp_reap_task_teams() called");
    return 0;
}

/* Exported Object: __kmp_affinity_gran_levels */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_gran_levels __asm__("__kmp_affinity_gran_levels") = NULL;

/* Demangled: alGLDC_PV_Boundary_Constrain(double*, double*, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _Z28alGLDC_PV_Boundary_ConstrainPdS_tt(void) {
    ALOGD("_Z28alGLDC_PV_Boundary_ConstrainPdS_tt() called");
    return 0;
}

/* Demangled: randinit(randctx*, short) */
extern "C" __attribute__((visibility("default"))) int _Z8randinitP7randctxs(void) {
    ALOGD("_Z8randinitP7randctxs() called");
    return 0;
}

/* Demangled: to_UnitVector(double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z13to_UnitVectorPdi(void) {
    ALOGD("_Z13to_UnitVectorPdi() called");
    return 0;
}

/* Exported Object: __kmp_initz_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_initz_lock __asm__("__kmp_initz_lock") = NULL;

/* Demangled: __kmpc_atomic_cmplx10_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx10_div(void) __asm__("__kmpc_atomic_cmplx10_div");
int fn___kmpc_atomic_cmplx10_div(void) {
    ALOGD("__kmpc_atomic_cmplx10_div() called");
    return 0;
}

/* Demangled: __kmpc_omp_task_alloc */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task_alloc(void) __asm__("__kmpc_omp_task_alloc");
int fn___kmpc_omp_task_alloc(void) {
    ALOGD("__kmpc_omp_task_alloc() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::device_type_initialized */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL23device_type_initializedE = NULL;

/* Demangled: __kmpc_end_ordered */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_ordered(void) __asm__("__kmpc_end_ordered");
int fn___kmpc_end_ordered(void) {
    ALOGD("__kmpc_end_ordered() called");
    return 0;
}

/* Demangled: __kmp_affinity_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_initialize(void) __asm__("__kmp_affinity_initialize");
int fn___kmp_affinity_initialize(void) {
    ALOGD("__kmp_affinity_initialize() called");
    return 0;
}

/* Demangled: __kmp_push_current_task_to_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_current_task_to_thread(void) __asm__("__kmp_push_current_task_to_thread");
int fn___kmp_push_current_task_to_thread(void) {
    ALOGD("__kmp_push_current_task_to_thread() called");
    return 0;
}

/* Exported Object: __kmp_init_user_locks */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_user_locks __asm__("__kmp_init_user_locks") = NULL;

/* Demangled: __kmp_middle_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_middle_initialize(void) __asm__("__kmp_middle_initialize");
int fn___kmp_middle_initialize(void) {
    ALOGD("__kmp_middle_initialize() called");
    return 0;
}

/* Demangled: __cxa_free_dependent_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_free_dependent_exception(void) __asm__("__cxa_free_dependent_exception");
int fn___cxa_free_dependent_exception(void) {
    ALOGD("__cxa_free_dependent_exception() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetMemObjectInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL18clGetMemObjectInfoE = NULL;

/* Exported Object: __kmp_display_env */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_display_env __asm__("__kmp_display_env") = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: __kmpc_atomic_float4_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_mul(void) __asm__("__kmpc_atomic_float4_mul");
int fn___kmpc_atomic_float4_mul(void) {
    ALOGD("__kmpc_atomic_float4_mul() called");
    return 0;
}

/* Demangled: ldc_sharp8_cpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc_sharp8_cpu_argv(void) {
    ALOGD("ldc_sharp8_cpu_argv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: alKD_GetOnePackOfCaliData_V3 */
extern "C" __attribute__((visibility("default"))) int alKD_GetOnePackOfCaliData_V3(void) {
    ALOGD("alKD_GetOnePackOfCaliData_V3() called");
    return 0;
}

/* Exported Object: __kmp_spin_backoff_params */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_spin_backoff_params __asm__("__kmp_spin_backoff_params") = NULL;

/* Demangled: LDC_LDC_HLDCInfo(tH_RectLDCPara*, tLDC_STRUCT*, double*, double*, double*, unsigned char, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z16LDC_LDC_HLDCInfoP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbb(void) {
    ALOGD("_Z16LDC_LDC_HLDCInfoP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbb() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::set_system_affinity(bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity4Mask19set_system_affinityEb(void) {
    ALOGD("_ZNK17KMPNativeAffinity4Mask19set_system_affinityEb() called");
    return 0;
}

/* Demangled: __kmp_aux_dispatch_init_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_init_4(void) __asm__("__kmp_aux_dispatch_init_4");
int fn___kmp_aux_dispatch_init_4(void) {
    ALOGD("__kmp_aux_dispatch_init_4() called");
    return 0;
}

/* Demangled: __kmpc_end */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end(void) __asm__("__kmpc_end");
int fn___kmpc_end(void) {
    ALOGD("__kmpc_end() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::sampling_profiler_thread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal24sampling_profiler_threadEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal24sampling_profiler_threadEPv() called");
    return 0;
}

/* Exported Object: __kmp_duplicate_library_ok */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_duplicate_library_ok __asm__("__kmp_duplicate_library_ok") = NULL;

/* Demangled: __kmp_pop_sync */
extern "C" __attribute__((visibility("default"))) int fn___kmp_pop_sync(void) __asm__("__kmp_pop_sync");
int fn___kmp_pop_sync(void) {
    ALOGD("__kmp_pop_sync() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::thread_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL11thread_lockE = NULL;

/* Demangled: std::bad_alloc::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9bad_alloc4whatEv(void) {
    ALOGD("_ZNKSt9bad_alloc4whatEv() called");
    return 0;
}

/* Demangled: LensDistortionCorrection(void*, void*, unsigned short, unsigned short, unsigned short, unsigned short, long long*, LDC_info) */
extern "C" __attribute__((visibility("default"))) int _Z24LensDistortionCorrectionPvS_ttttPx8LDC_info(void) {
    ALOGD("_Z24LensDistortionCorrectionPvS_ttttPx8LDC_info() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Exported Object: __kmp_handle_signals */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_handle_signals __asm__("__kmp_handle_signals") = NULL;

/* Exported Object: __kmp_determ_red */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_determ_red __asm__("__kmp_determ_red") = NULL;

/* Demangled: std::__ndk1::thread::detach() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread6detachEv(void) {
    ALOGD("_ZNSt6__ndk16thread6detachEv() called");
    return 0;
}

/* Demangled: alKD_GetVCMStep */
extern "C" __attribute__((visibility("default"))) int alKD_GetVCMStep(void) {
    ALOGD("alKD_GetVCMStep() called");
    return 0;
}

/* Exported Object: __kmp_clock_function_param */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_clock_function_param __asm__("__kmp_clock_function_param") = NULL;

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC1Ev() called");
    return 0;
}

/* Demangled: __kmp_aux_set_stacksize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_stacksize(void) __asm__("__kmp_aux_set_stacksize");
int fn___kmp_aux_set_stacksize(void) {
    ALOGD("__kmp_aux_set_stacksize() called");
    return 0;
}

/* Demangled: __kmp_push_sync */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_sync(void) __asm__("__kmp_push_sync");
int fn___kmp_push_sync(void) {
    ALOGD("__kmp_push_sync() called");
    return 0;
}

/* Exported Object: __kmp_affinity_proclist */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_proclist __asm__("__kmp_affinity_proclist") = NULL;

/* Demangled: __kmpc_atomic_cmplx8_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx8_div(void) __asm__("__kmpc_atomic_cmplx8_div");
int fn___kmpc_atomic_cmplx8_div(void) {
    ALOGD("__kmpc_atomic_cmplx8_div() called");
    return 0;
}

/* Demangled: __kmp_task_team_setup */
extern "C" __attribute__((visibility("default"))) int fn___kmp_task_team_setup(void) __asm__("__kmp_task_team_setup");
int fn___kmp_task_team_setup(void) {
    ALOGD("__kmp_task_team_setup() called");
    return 0;
}

/* Demangled: halide_trace_cleanup */
extern "C" __attribute__((visibility("default"))) int halide_trace_cleanup(void) {
    ALOGD("halide_trace_cleanup() called");
    return 0;
}

/* Demangled: std::__ndk1::__get_sp_mut(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__get_sp_mutEPKv(void) {
    ALOGD("_ZNSt6__ndk112__get_sp_mutEPKv() called");
    return 0;
}

/* Demangled: KMPAffinity::Mask::operator new[](unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity4MasknaEm(void) {
    ALOGD("_ZN11KMPAffinity4MasknaEm() called");
    return 0;
}

/* Demangled: __kmp_common_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_common_initialize(void) __asm__("__kmp_common_initialize");
int fn___kmp_common_initialize(void) {
    ALOGD("__kmp_common_initialize() called");
    return 0;
}

/* Demangled: KMPAffinity::Mask::operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity4MaskdlEPv(void) {
    ALOGD("_ZN11KMPAffinity4MaskdlEPv() called");
    return 0;
}

/* Demangled: __kmpc_task_reduction_init */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_task_reduction_init(void) __asm__("__kmpc_task_reduction_init");
int fn___kmpc_task_reduction_init(void) {
    ALOGD("__kmpc_task_reduction_init() called");
    return 0;
}

/* Demangled: std::exception_ptr std::make_exception_ptr<std::__ndk1::future_error>(std::__ndk1::future_error) */
extern "C" __attribute__((visibility("default"))) int _ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_(void) {
    ALOGD("_ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_() called");
    return 0;
}

/* Demangled: __kmp_init_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_tas_lock(void) __asm__("__kmp_init_tas_lock");
int fn___kmp_init_tas_lock(void) {
    ALOGD("__kmp_init_tas_lock() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED1Ev() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_32c */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_32c __asm__("__kmp_atomic_lock_32c") = NULL;

/* Exported Object: __kmp_affinity_offset */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_offset __asm__("__kmp_affinity_offset") = NULL;

/* Demangled: std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: __kmp_release_nested_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_nested_tas_lock(void) __asm__("__kmp_release_nested_tas_lock");
int fn___kmp_release_nested_tas_lock(void) {
    ALOGD("__kmp_release_nested_tas_lock() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_add(void) __asm__("__kmpc_atomic_fixed2_add");
int fn___kmpc_atomic_fixed2_add(void) {
    ALOGD("__kmpc_atomic_fixed2_add() called");
    return 0;
}

/* Exported Object: __kmp_unnamed_critical_addr */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_unnamed_critical_addr __asm__("__kmp_unnamed_critical_addr") = NULL;

/* Demangled: halide_copy_to_device */
extern "C" __attribute__((visibility("default"))) int halide_copy_to_device(void) {
    ALOGD("halide_copy_to_device() called");
    return 0;
}

/* Exported Object: __kmp_direct_set */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_direct_set __asm__("__kmp_direct_set") = NULL;

/* Exported Object: typeinfo name for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12domain_error = NULL;

/* Exported Object: __kmp_env_consistency_check */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_env_consistency_check __asm__("__kmp_env_consistency_check") = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: __kmp_aux_dispatch_init_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_init_8(void) __asm__("__kmp_aux_dispatch_init_8");
int fn___kmp_aux_dispatch_init_8(void) {
    ALOGD("__kmp_aux_dispatch_init_8() called");
    return 0;
}

/* Demangled: GC_calculate_SampsonError(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z25GC_calculate_SampsonErrorPdS_S_S_i(void) {
    ALOGD("_Z25GC_calculate_SampsonErrorPdS_S_S_i() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD2Ev() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::bitwise_and(KMPAffinity::Mask const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask11bitwise_andEPKN11KMPAffinity4MaskE(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask11bitwise_andEPKN11KMPAffinity4MaskE() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD1Ev(void) {
    ALOGD("_ZNSt11logic_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112system_errorE = NULL;

/* Exported Object: typeinfo for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD0Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD0Ev() called");
    return 0;
}

/* Demangled: __kmp_gtid_set_specific */
extern "C" __attribute__((visibility("default"))) int fn___kmp_gtid_set_specific(void) __asm__("__kmp_gtid_set_specific");
int fn___kmp_gtid_set_specific(void) {
    ALOGD("__kmp_gtid_set_specific() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD1Ev() called");
    return 0;
}

/* Exported Object: __kmp_sys_max_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_sys_max_nth __asm__("__kmp_sys_max_nth") = NULL;

/* Demangled: GC_calculateH_DLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z17GC_calculateH_DLTPdS_S_i(void) {
    ALOGD("_Z17GC_calculateH_DLTPdS_S_i() called");
    return 0;
}

/* Demangled: __kmp_aux_dispatch_fini_chunk_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_fini_chunk_8u(void) __asm__("__kmp_aux_dispatch_fini_chunk_8u");
int fn___kmp_aux_dispatch_fini_chunk_8u(void) {
    ALOGD("__kmp_aux_dispatch_fini_chunk_8u() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD0Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD0Ev() called");
    return 0;
}

/* Demangled: halide_mutex_lock */
extern "C" __attribute__((visibility("default"))) int halide_mutex_lock(void) {
    ALOGD("halide_mutex_lock() called");
    return 0;
}

/* Exported Object: __kmp_team_pool */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_team_pool __asm__("__kmp_team_pool") = NULL;

/* Demangled: __kmp_aux_set_blocktime */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_blocktime(void) __asm__("__kmp_aux_set_blocktime");
int fn___kmp_aux_set_blocktime(void) {
    ALOGD("__kmp_aux_set_blocktime() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clCreateBufferE = NULL;

/* Exported Object: __kmp_init_common */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_common __asm__("__kmp_init_common") = NULL;

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Exported Object: __kmp_chunk */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_chunk __asm__("__kmp_chunk") = NULL;

/* Demangled: __kmp_allocate_indirect_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_allocate_indirect_lock(void) __asm__("__kmp_allocate_indirect_lock");
int fn___kmp_allocate_indirect_lock(void) {
    ALOGD("__kmp_allocate_indirect_lock() called");
    return 0;
}

/* Demangled: __kmp_run_after_invoked_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_run_after_invoked_task(void) __asm__("__kmp_run_after_invoked_task");
int fn___kmp_run_after_invoked_task(void) {
    ALOGD("__kmp_run_after_invoked_task() called");
    return 0;
}

/* Exported Object: __kmp_yield_off_count */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_yield_off_count __asm__("__kmp_yield_off_count") = NULL;

/* Demangled: KMPNativeAffinity::Mask::end() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity4Mask3endEv(void) {
    ALOGD("_ZNK17KMPNativeAffinity4Mask3endEv() called");
    return 0;
}

/* Demangled: __kmp_release_64 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_64(void) __asm__("__kmp_release_64");
int fn___kmp_release_64(void) {
    ALOGD("__kmp_release_64() called");
    return 0;
}

/* Demangled: GC_compute_DualRotation_and_BaselineVector(double*, double*, double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z42GC_compute_DualRotation_and_BaselineVectorPdS_S_S_S_S_S_(void) {
    ALOGD("_Z42GC_compute_DualRotation_and_BaselineVectorPdS_S_S_S_S_S_() called");
    return 0;
}

/* Demangled: halide_do_par_for */
extern "C" __attribute__((visibility("default"))) int halide_do_par_for(void) {
    ALOGD("halide_do_par_for() called");
    return 0;
}

/* Exported Object: __kmp_auto */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_auto __asm__("__kmp_auto") = NULL;

/* Demangled: alGLDC_PV_Packdata_Read(GLDC_DATA_STRC_ANDROID*) */
extern "C" __attribute__((visibility("default"))) int _Z23alGLDC_PV_Packdata_ReadP22GLDC_DATA_STRC_ANDROID(void) {
    ALOGD("_Z23alGLDC_PV_Packdata_ReadP22GLDC_DATA_STRC_ANDROID() called");
    return 0;
}

/* Demangled: GC_calculate_Baseline_via_Projection(double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z36GC_calculate_Baseline_via_ProjectionPdS_S_(void) {
    ALOGD("_Z36GC_calculate_Baseline_via_ProjectionPdS_S_() called");
    return 0;
}

/* Exported Object: std::__ndk1::defer_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110defer_lockE = NULL;

/* Demangled: __kmp_str_fname_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_fname_free(void) __asm__("__kmp_str_fname_free");
int fn___kmp_str_fname_free(void) {
    ALOGD("__kmp_str_fname_free() called");
    return 0;
}

/* Demangled: alhLDC_FPC_Init_V1 */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Init_V1(void) {
    ALOGD("alhLDC_FPC_Init_V1() called");
    return 0;
}

/* Exported Object: __kmp_forkjoin_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_forkjoin_lock __asm__("__kmp_forkjoin_lock") = NULL;

/* Demangled: std::__ndk1::recursive_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD2Ev(void) {
    ALOGD("_ZNSt12length_errorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16invalid_argument = NULL;

/* Demangled: ldc8_gpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc8_gpu_metadata(void) {
    ALOGD("ldc8_gpu_metadata() called");
    return 0;
}

/* Demangled: GC_calculate_SymmetricEpipolarError(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z35GC_calculate_SymmetricEpipolarErrorPdS_S_S_i(void) {
    ALOGD("_Z35GC_calculate_SymmetricEpipolarErrorPdS_S_S_i() called");
    return 0;
}

/* Demangled: halide_device_and_host_free */
extern "C" __attribute__((visibility("default"))) int halide_device_and_host_free(void) {
    ALOGD("halide_device_and_host_free() called");
    return 0;
}

/* Demangled: alGLDC_PV_CurveInterpolation(double*, double*, double*, double, int) */
extern "C" __attribute__((visibility("default"))) int _Z28alGLDC_PV_CurveInterpolationPdS_S_di(void) {
    ALOGD("_Z28alGLDC_PV_CurveInterpolationPdS_S_di() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD1Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC1Ev() called");
    return 0;
}

/* Exported Object: __kmp_load_balance_interval */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_load_balance_interval __asm__("__kmp_load_balance_interval") = NULL;

/* Demangled: __kmpc_doacross_post */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_doacross_post(void) __asm__("__kmpc_doacross_post");
int fn___kmpc_doacross_post(void) {
    ALOGD("__kmpc_doacross_post() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: ldc_sharp8_cpu */
extern "C" __attribute__((visibility("default"))) int ldc_sharp8_cpu(void) {
    ALOGD("ldc_sharp8_cpu() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Exported Object: __kmp_threadpriv_cache_list */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_threadpriv_cache_list __asm__("__kmp_threadpriv_cache_list") = NULL;

/* Demangled: al_ldc::init_ldc_info(long*, LDC_info*) */
extern "C" __attribute__((visibility("default"))) int _ZN6al_ldc13init_ldc_infoEPlP8LDC_info(void) {
    ALOGD("_ZN6al_ldc13init_ldc_infoEPlP8LDC_info() called");
    return 0;
}

/* Demangled: __gxx_personality_v0 */
extern "C" __attribute__((visibility("default"))) int fn___gxx_personality_v0(void) __asm__("__gxx_personality_v0");
int fn___gxx_personality_v0(void) {
    ALOGD("__gxx_personality_v0() called");
    return 0;
}

/* Demangled: __kmp_env_blk_init */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_blk_init(void) __asm__("__kmp_env_blk_init");
int fn___kmp_env_blk_init(void) {
    ALOGD("__kmp_env_blk_init() called");
    return 0;
}

/* Demangled: __kmp_test_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_drdpa_lock(void) __asm__("__kmp_test_drdpa_lock");
int fn___kmp_test_drdpa_lock(void) {
    ALOGD("__kmp_test_drdpa_lock() called");
    return 0;
}

/* Demangled: halide_error_host_and_device_dirty */
extern "C" __attribute__((visibility("default"))) int halide_error_host_and_device_dirty(void) {
    ALOGD("halide_error_host_and_device_dirty() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTISt10bad_typeid = NULL;

/* Demangled: __kmp_cleanup_threadprivate_caches */
extern "C" __attribute__((visibility("default"))) int fn___kmp_cleanup_threadprivate_caches(void) __asm__("__kmp_cleanup_threadprivate_caches");
int fn___kmp_cleanup_threadprivate_caches(void) {
    ALOGD("__kmp_cleanup_threadprivate_caches() called");
    return 0;
}

/* Demangled: alRectLDC_PV_PackData_Upd_VCM(alDCAL_PACKDATA_V3*, short) */
extern "C" __attribute__((visibility("default"))) int _Z29alRectLDC_PV_PackData_Upd_VCMP18alDCAL_PACKDATA_V3s(void) {
    ALOGD("_Z29alRectLDC_PV_PackData_Upd_VCMP18alDCAL_PACKDATA_V3s() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16bad_array_length = NULL;

/* Demangled: alDU_RSEParameters_D2(RECTMGR_RECT_QUALITY_INFO*, tH_RectLDCPara*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z21alDU_RSEParameters_D2P25RECTMGR_RECT_QUALITY_INFOP14tH_RectLDCParah(void) {
    ALOGD("_Z21alDU_RSEParameters_D2P25RECTMGR_RECT_QUALITY_INFOP14tH_RectLDCParah() called");
    return 0;
}

/* Demangled: Matrix_svbksb(double*, double*, double*, double*, double*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z13Matrix_svbksbPdS_S_S_S_ii(void) {
    ALOGD("_Z13Matrix_svbksbPdS_S_S_S_ii() called");
    return 0;
}

/* Demangled: __kmp_init_dynamic_user_locks */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_dynamic_user_locks(void) __asm__("__kmp_init_dynamic_user_locks");
int fn___kmp_init_dynamic_user_locks(void) {
    ALOGD("__kmp_init_dynamic_user_locks() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category23default_error_conditionEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category23default_error_conditionEi() called");
    return 0;
}

/* Demangled: kmp_flag_oncore::wait(kmp_info*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN15kmp_flag_oncore4waitEP8kmp_infoi(void) {
    ALOGD("_ZN15kmp_flag_oncore4waitEP8kmp_infoi() called");
    return 0;
}

/* Demangled: __cxa_allocate_dependent_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_allocate_dependent_exception(void) __asm__("__cxa_allocate_dependent_exception");
int fn___cxa_allocate_dependent_exception(void) {
    ALOGD("__cxa_allocate_dependent_exception() called");
    return 0;
}

/* Demangled: alKD_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alKD_VersionInfo_Get(void) {
    ALOGD("alKD_VersionInfo_Get() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: halide_upgrade_buffer_t */
extern "C" __attribute__((visibility("default"))) int halide_upgrade_buffer_t(void) {
    ALOGD("halide_upgrade_buffer_t() called");
    return 0;
}

/* Demangled: GC_calculateP_NormalizedDLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z27GC_calculateP_NormalizedDLTPdS_S_i(void) {
    ALOGD("_Z27GC_calculateP_NormalizedDLTPdS_S_i() called");
    return 0;
}

/* Exported Object: KMPAffinity::picked_api */
extern "C" __attribute__((visibility("default"))) void* _ZN11KMPAffinity10picked_apiE = NULL;

/* Demangled: __kmpc_omp_task_with_deps */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task_with_deps(void) __asm__("__kmpc_omp_task_with_deps");
int fn___kmpc_omp_task_with_deps(void) {
    ALOGD("__kmpc_omp_task_with_deps() called");
    return 0;
}

/* Demangled: alGLDC_PV_CModelParaGen(GLDC_DATA_STRC_ANDROID*, long long*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z23alGLDC_PV_CModelParaGenP22GLDC_DATA_STRC_ANDROIDPxPd(void) {
    ALOGD("_Z23alGLDC_PV_CModelParaGenP22GLDC_DATA_STRC_ANDROIDPxPd() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clRetainCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL20clRetainCommandQueueE = NULL;

/* Demangled: __kmp_push_proc_bind */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_proc_bind(void) __asm__("__kmp_push_proc_bind");
int fn___kmp_push_proc_bind(void) {
    ALOGD("__kmp_push_proc_bind() called");
    return 0;
}

/* Demangled: __kmpc_atomic_32 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_32(void) __asm__("__kmpc_atomic_32");
int fn___kmpc_atomic_32(void) {
    ALOGD("__kmpc_atomic_32() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD2Ev(void) {
    ALOGD("_ZNSt11range_errorD2Ev() called");
    return 0;
}

/* Demangled: halide_default_can_use_target_features */
extern "C" __attribute__((visibility("default"))) int halide_default_can_use_target_features(void) {
    ALOGD("halide_default_can_use_target_features() called");
    return 0;
}

/* Demangled: __kmpc_bound_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_bound_num_threads(void) __asm__("__kmpc_bound_num_threads");
int fn___kmpc_bound_num_threads(void) {
    ALOGD("__kmpc_bound_num_threads() called");
    return 0;
}

/* Demangled: GC_Point3D_Normalization_NonIsotropic(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z37GC_Point3D_Normalization_NonIsotropicPdS_S_S_i(void) {
    ALOGD("_Z37GC_Point3D_Normalization_NonIsotropicPdS_S_S_i() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD1Ev() called");
    return 0;
}

/* Exported Object: __kmp_debug_count */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_count __asm__("__kmp_debug_count") = NULL;

/* Demangled: __kmpc_end_single */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_single(void) __asm__("__kmpc_end_single");
int fn___kmpc_end_single(void) {
    ALOGD("__kmpc_end_single() called");
    return 0;
}

/* Demangled: __cxa_rethrow_primary_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_rethrow_primary_exception(void) __asm__("__cxa_rethrow_primary_exception");
int fn___cxa_rethrow_primary_exception(void) {
    ALOGD("__cxa_rethrow_primary_exception() called");
    return 0;
}

/* Demangled: __kmpc_omp_task */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task(void) __asm__("__kmpc_omp_task");
int fn___kmpc_omp_task(void) {
    ALOGD("__kmpc_omp_task() called");
    return 0;
}

/* Exported Object: g_dFlagCurveStatus */
extern "C" __attribute__((visibility("default"))) void* g_dFlagCurveStatus = NULL;

/* Exported Object: vtable for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112system_errorE = NULL;

/* Demangled: __kmpc_global_thread_num */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_global_thread_num(void) __asm__("__kmpc_global_thread_num");
int fn___kmpc_global_thread_num(void) {
    ALOGD("__kmpc_global_thread_num() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: __kmp_ge_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_ge_4(void) __asm__("__kmp_ge_4");
int fn___kmp_ge_4(void) {
    ALOGD("__kmp_ge_4() called");
    return 0;
}

/* Demangled: alhLDC_Gen_LDC_Table */
extern "C" __attribute__((visibility("default"))) int alhLDC_Gen_LDC_Table(void) {
    ALOGD("alhLDC_Gen_LDC_Table() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC1ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC1ERKS_() called");
    return 0;
}

/* Demangled: __kmp_tasking_barrier */
extern "C" __attribute__((visibility("default"))) int fn___kmp_tasking_barrier(void) __asm__("__kmp_tasking_barrier");
int fn___kmp_tasking_barrier(void) {
    ALOGD("__kmp_tasking_barrier() called");
    return 0;
}

/* Demangled: __ompt_team_assign_id(kmp_team*, ompt_data_t) */
extern "C" __attribute__((visibility("default"))) int _Z21__ompt_team_assign_idP8kmp_team11ompt_data_t(void) {
    ALOGD("_Z21__ompt_team_assign_idP8kmp_team11ompt_data_t() called");
    return 0;
}

/* Demangled: ldc_init_cpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc_init_cpu_metadata(void) {
    ALOGD("ldc_init_cpu_metadata() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::next(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity4Mask4nextEi(void) {
    ALOGD("_ZNK17KMPNativeAffinity4Mask4nextEi() called");
    return 0;
}

/* Demangled: std::__ndk1::error_condition::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115error_condition7messageEv(void) {
    ALOGD("_ZNKSt6__ndk115error_condition7messageEv() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD2Ev(void) {
    ALOGD("_ZNSt9type_infoD2Ev() called");
    return 0;
}

/* Demangled: std::get_new_handler() */
extern "C" __attribute__((visibility("default"))) int _ZSt15get_new_handlerv(void) {
    ALOGD("_ZSt15get_new_handlerv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_sub(void) __asm__("__kmpc_atomic_fixed8_sub");
int fn___kmpc_atomic_fixed8_sub(void) {
    ALOGD("__kmpc_atomic_fixed8_sub() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv() called");
    return 0;
}

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD2Ev(void) {
    ALOGD("_ZNSt13exception_ptrD2Ev() called");
    return 0;
}

/* Exported Object: ompt_callbacks */
extern "C" __attribute__((visibility("default"))) void* ompt_callbacks = NULL;

/* Demangled: __kmp_wait_to_unref_task_teams */
extern "C" __attribute__((visibility("default"))) int fn___kmp_wait_to_unref_task_teams(void) __asm__("__kmp_wait_to_unref_task_teams");
int fn___kmp_wait_to_unref_task_teams(void) {
    ALOGD("__kmp_wait_to_unref_task_teams() called");
    return 0;
}

/* Demangled: __kmp_acquire_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_queuing_lock(void) __asm__("__kmp_acquire_queuing_lock");
int fn___kmp_acquire_queuing_lock(void) {
    ALOGD("__kmp_acquire_queuing_lock() called");
    return 0;
}

/* Exported Object: __kmp_teams_max_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_teams_max_nth __asm__("__kmp_teams_max_nth") = NULL;

/* Demangled: __kmpc_dispatch_init_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_init_4(void) __asm__("__kmpc_dispatch_init_4");
int fn___kmpc_dispatch_init_4(void) {
    ALOGD("__kmpc_dispatch_init_4() called");
    return 0;
}

/* Demangled: __kmp_aux_dispatch_fini_chunk_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_fini_chunk_4u(void) __asm__("__kmp_aux_dispatch_fini_chunk_4u");
int fn___kmp_aux_dispatch_fini_chunk_4u(void) {
    ALOGD("__kmp_aux_dispatch_fini_chunk_4u() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Exported Object: vtable for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16nested_exception = NULL;

/* Demangled: __kmp_aux_get_affinity_max_proc */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_get_affinity_max_proc(void) __asm__("__kmp_aux_get_affinity_max_proc");
int fn___kmp_aux_get_affinity_max_proc(void) {
    ALOGD("__kmp_aux_get_affinity_max_proc() called");
    return 0;
}

/* Demangled: __kmpc_task_reduction_get_th_data */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_task_reduction_get_th_data(void) __asm__("__kmpc_task_reduction_get_th_data");
int fn___kmpc_task_reduction_get_th_data(void) {
    ALOGD("__kmpc_task_reduction_get_th_data() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_init_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_init_8(void) __asm__("__kmpc_dispatch_init_8");
int fn___kmpc_dispatch_init_8(void) {
    ALOGD("__kmpc_dispatch_init_8() called");
    return 0;
}

/* Exported Object: vtable for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13runtime_error = NULL;

/* Exported Object: typeinfo for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114error_categoryE = NULL;

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC2ERKS_() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::zero() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask4zeroEv(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask4zeroEv() called");
    return 0;
}

/* Demangled: __kmp_str_to_size */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_to_size(void) __asm__("__kmp_str_to_size");
int fn___kmp_str_to_size(void) {
    ALOGD("__kmp_str_to_size() called");
    return 0;
}

/* Demangled: __kmp_release_nested_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_nested_futex_lock(void) __asm__("__kmp_release_nested_futex_lock");
int fn___kmp_release_nested_futex_lock(void) {
    ALOGD("__kmp_release_nested_futex_lock() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::copy(KMPAffinity::Mask const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask4copyEPKN11KMPAffinity4MaskE(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask4copyEPKN11KMPAffinity4MaskE() called");
    return 0;
}

/* Demangled: pow(int, int) */
extern "C" __attribute__((visibility("default"))) int _Z3powii(void) {
    ALOGD("_Z3powii() called");
    return 0;
}

/* Demangled: __kmpc_flush */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_flush(void) __asm__("__kmpc_flush");
int fn___kmpc_flush(void) {
    ALOGD("__kmpc_flush() called");
    return 0;
}

/* Demangled: __kmpc_set_nest_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_set_nest_lock(void) __asm__("__kmpc_set_nest_lock");
int fn___kmpc_set_nest_lock(void) {
    ALOGD("__kmpc_set_nest_lock() called");
    return 0;
}

/* Demangled: halide_get_symbol */
extern "C" __attribute__((visibility("default"))) int halide_get_symbol(void) {
    ALOGD("halide_get_symbol() called");
    return 0;
}

/* Demangled: __kmp_user_set_library */
extern "C" __attribute__((visibility("default"))) int fn___kmp_user_set_library(void) __asm__("__kmp_user_set_library");
int fn___kmp_user_set_library(void) {
    ALOGD("__kmp_user_set_library() called");
    return 0;
}

/* Exported Object: _You_must_link_with_Intel_OpenMP_library */
extern "C" __attribute__((visibility("default"))) void* _You_must_link_with_Intel_OpenMP_library = NULL;

/* Demangled: Matrix_MatrixReverse(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z20Matrix_MatrixReversePdS_i(void) {
    ALOGD("_Z20Matrix_MatrixReversePdS_i() called");
    return 0;
}

/* Exported Object: __kmp_global_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_global_lock __asm__("__kmp_global_lock") = NULL;

/* Exported Object: Halide::Runtime::Internal::custom_get_library_symbol */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal25custom_get_library_symbolE = NULL;

/* Demangled: PackDataEncryptionLDC(unsigned char*, unsigned char*, int, unsigned char*, int, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z21PackDataEncryptionLDCPhS_iS_iPtS0_(void) {
    ALOGD("_Z21PackDataEncryptionLDCPhS_iS_iPtS0_() called");
    return 0;
}

/* Demangled: Matrix_lubksb(double*, double*, double*, int, int*) */
extern "C" __attribute__((visibility("default"))) int _Z13Matrix_lubksbPdS_S_iPi(void) {
    ALOGD("_Z13Matrix_lubksbPdS_S_iPi() called");
    return 0;
}

/* Demangled: __kmp_env_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_free(void) __asm__("__kmp_env_free");
int fn___kmp_env_free(void) {
    ALOGD("__kmp_env_free() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::halide_thread_yield() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal19halide_thread_yieldEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal19halide_thread_yieldEv() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1EPKc(void) {
    ALOGD("_ZNSt11logic_errorC1EPKc() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_get_symbol */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal17custom_get_symbolE = NULL;

/* Demangled: __kmpc_unset_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_unset_lock(void) __asm__("__kmpc_unset_lock");
int fn___kmpc_unset_lock(void) {
    ALOGD("__kmpc_unset_lock() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: Halide::Runtime::Internal::halide_use_jit_module() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal21halide_use_jit_moduleEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal21halide_use_jit_moduleEv() called");
    return 0;
}

/* Demangled: ompt_pre_init */
extern "C" __attribute__((visibility("default"))) int ompt_pre_init(void) {
    ALOGD("ompt_pre_init() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<long, 4>::decref_dev() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIlLi4EE10decref_devEv(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIlLi4EE10decref_devEv() called");
    return 0;
}

/* Demangled: al_ldc::alLDCOnly_ini2(void*, void*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _ZN6al_ldc14alLDCOnly_ini2EPvS0_ttttPt(void) {
    ALOGD("_ZN6al_ldc14alLDCOnly_ini2EPvS0_ttttPt() called");
    return 0;
}

/* Demangled: __kmp_teams_master */
extern "C" __attribute__((visibility("default"))) int fn___kmp_teams_master(void) __asm__("__kmp_teams_master");
int fn___kmp_teams_master(void) {
    ALOGD("__kmp_teams_master() called");
    return 0;
}

/* Demangled: halide_error_host_is_null */
extern "C" __attribute__((visibility("default"))) int halide_error_host_is_null(void) {
    ALOGD("halide_error_host_is_null() called");
    return 0;
}

/* Exported Object: __kmp_display_env_verbose */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_display_env_verbose __asm__("__kmp_display_env_verbose") = NULL;

/* Demangled: std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__call_onceERVmPvPFvS2_E(void) {
    ALOGD("_ZNSt6__ndk111__call_onceERVmPvPFvS2_E() called");
    return 0;
}

/* Demangled: alKD_FlowGetDecPackData */
extern "C" __attribute__((visibility("default"))) int alKD_FlowGetDecPackData(void) {
    ALOGD("alKD_FlowGetDecPackData() called");
    return 0;
}

/* Exported Object: __kmp_threads_capacity */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_threads_capacity __asm__("__kmp_threads_capacity") = NULL;

/* Demangled: __kmp_str_format */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_format(void) __asm__("__kmp_str_format");
int fn___kmp_str_format(void) {
    ALOGD("__kmp_str_format() called");
    return 0;
}

/* Exported Object: vtable for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13bad_exception = NULL;

/* Exported Object: omp_state_info */
extern "C" __attribute__((visibility("default"))) void* omp_state_info = NULL;

/* Demangled: __kmp_aux_set_affinity */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_affinity(void) __asm__("__kmp_aux_set_affinity");
int fn___kmp_aux_set_affinity(void) {
    ALOGD("__kmp_aux_set_affinity() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::spawn_thread_helper(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal19spawn_thread_helperEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal19spawn_thread_helperEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: halide_print */
extern "C" __attribute__((visibility("default"))) int halide_print(void) {
    ALOGD("halide_print() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::memoization_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal16memoization_lockE = NULL;

/* Demangled: __kmpc_dispatch_fini_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_fini_4(void) __asm__("__kmpc_dispatch_fini_4");
int fn___kmpc_dispatch_fini_4(void) {
    ALOGD("__kmpc_dispatch_fini_4() called");
    return 0;
}

/* Demangled: __kmp_test_nested_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_nested_queuing_lock(void) __asm__("__kmp_test_nested_queuing_lock");
int fn___kmp_test_nested_queuing_lock(void) {
    ALOGD("__kmp_test_nested_queuing_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::pixel_type_to_tiff_sample_type */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal30pixel_type_to_tiff_sample_typeE = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::broadcast_parking_control_validate(void*, Halide::Runtime::Internal::Synchronization::validate_action&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization34broadcast_parking_control_validateEPvRNS2_15validate_actionE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization34broadcast_parking_control_validateEPvRNS2_15validate_actionE() called");
    return 0;
}

/* Demangled: halide_host_cpu_count */
extern "C" __attribute__((visibility("default"))) int halide_host_cpu_count(void) {
    ALOGD("halide_host_cpu_count() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exceptions */
extern "C" __attribute__((visibility("default"))) int fn___cxa_uncaught_exceptions(void) __asm__("__cxa_uncaught_exceptions");
int fn___cxa_uncaught_exceptions(void) {
    ALOGD("__cxa_uncaught_exceptions() called");
    return 0;
}

/* Demangled: __kmpc_end_master */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_master(void) __asm__("__kmpc_end_master");
int fn___kmpc_end_master(void) {
    ALOGD("__kmpc_end_master() called");
    return 0;
}

/* Demangled: __kmp_launch_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_launch_thread(void) __asm__("__kmp_launch_thread");
int fn___kmp_launch_thread(void) {
    ALOGD("__kmp_launch_thread() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: std::__ndk1::__sp_mut::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut6unlockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut6unlockEv() called");
    return 0;
}

/* Demangled: __kmp_env_blk_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_blk_free(void) __asm__("__kmp_env_blk_free");
int fn___kmp_env_blk_free(void) {
    ALOGD("__kmp_env_blk_free() called");
    return 0;
}

/* Demangled: __kmp_push_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_parallel(void) __asm__("__kmp_push_parallel");
int fn___kmp_push_parallel(void) {
    ALOGD("__kmp_push_parallel() called");
    return 0;
}

/* Demangled: halide_profiler_stack_peak_update */
extern "C" __attribute__((visibility("default"))) int halide_profiler_stack_peak_update(void) {
    ALOGD("halide_profiler_stack_peak_update() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx8_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx8_sub(void) __asm__("__kmpc_atomic_cmplx8_sub");
int fn___kmpc_atomic_cmplx8_sub(void) {
    ALOGD("__kmpc_atomic_cmplx8_sub() called");
    return 0;
}

/* Demangled: halide_opencl_initialize_kernels */
extern "C" __attribute__((visibility("default"))) int halide_opencl_initialize_kernels(void) {
    ALOGD("halide_opencl_initialize_kernels() called");
    return 0;
}

/* Demangled: CholDcmp(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z8CholDcmpPdS_i(void) {
    ALOGD("_Z8CholDcmpPdS_i() called");
    return 0;
}

/* Demangled: __kmp_allocate_team */
extern "C" __attribute__((visibility("default"))) int fn___kmp_allocate_team(void) __asm__("__kmp_allocate_team");
int fn___kmp_allocate_team(void) {
    ALOGD("__kmp_allocate_team() called");
    return 0;
}

/* Demangled: __kmpc_proxy_task_completed */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_proxy_task_completed(void) __asm__("__kmpc_proxy_task_completed");
int fn___kmpc_proxy_task_completed(void) {
    ALOGD("__kmpc_proxy_task_completed() called");
    return 0;
}

/* Demangled: ldc8_gpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc8_gpu_argv(void) {
    ALOGD("ldc8_gpu_argv() called");
    return 0;
}

/* Demangled: __kmp_acquire_nested_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_nested_tas_lock(void) __asm__("__kmp_acquire_nested_tas_lock");
int fn___kmp_acquire_nested_tas_lock(void) {
    ALOGD("__kmp_acquire_nested_tas_lock() called");
    return 0;
}

/* Demangled: Vector_to_CrossForm_R3(double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z22Vector_to_CrossForm_R3PdS_(void) {
    ALOGD("_Z22Vector_to_CrossForm_R3PdS_() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_specific_ptr<std::__ndk1::__thread_struct>::__at_thread_exit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv(void) {
    ALOGD("_ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueCopyBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL19clEnqueueCopyBufferE = NULL;

/* Exported Object: __kmp_tp_cached */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_tp_cached __asm__("__kmp_tp_cached") = NULL;

/* Demangled: __kmpc_threadprivate_register */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_threadprivate_register(void) __asm__("__kmpc_threadprivate_register");
int fn___kmpc_threadprivate_register(void) {
    ALOGD("__kmpc_threadprivate_register() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_4i */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_4i __asm__("__kmp_atomic_lock_4i") = NULL;

/* Demangled: ldc8_chroma_cpu */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_cpu(void) {
    ALOGD("ldc8_chroma_cpu() called");
    return 0;
}

/* Demangled: alKD_SelectKDIndex */
extern "C" __attribute__((visibility("default"))) int alKD_SelectKDIndex(void) {
    ALOGD("alKD_SelectKDIndex() called");
    return 0;
}

/* Demangled: __kmp_release_nested_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_nested_drdpa_lock(void) __asm__("__kmp_release_nested_drdpa_lock");
int fn___kmp_release_nested_drdpa_lock(void) {
    ALOGD("__kmp_release_nested_drdpa_lock() called");
    return 0;
}

/* Exported Object: vtable for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt10bad_typeid = NULL;

/* Demangled: halide_opencl_buffer_copy */
extern "C" __attribute__((visibility("default"))) int halide_opencl_buffer_copy(void) {
    ALOGD("halide_opencl_buffer_copy() called");
    return 0;
}

/* Demangled: __kmp_acquire_nested_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_nested_drdpa_lock(void) __asm__("__kmp_acquire_nested_drdpa_lock");
int fn___kmp_acquire_nested_drdpa_lock(void) {
    ALOGD("__kmp_acquire_nested_drdpa_lock() called");
    return 0;
}

/* Demangled: halide_create_temp_file */
extern "C" __attribute__((visibility("default"))) int halide_create_temp_file(void) {
    ALOGD("halide_create_temp_file() called");
    return 0;
}

/* Demangled: KMPAffinity::pick_api() */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity8pick_apiEv(void) {
    ALOGD("_ZN11KMPAffinity8pick_apiEv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_orl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_orl(void) __asm__("__kmpc_atomic_fixed8_orl");
int fn___kmpc_atomic_fixed8_orl(void) {
    ALOGD("__kmpc_atomic_fixed8_orl() called");
    return 0;
}

/* Demangled: alRectLDC_PV_GetU0Shift(alDCAL_PACKDATA_V3*, double&) */
extern "C" __attribute__((visibility("default"))) int _Z23alRectLDC_PV_GetU0ShiftP18alDCAL_PACKDATA_V3Rd(void) {
    ALOGD("_Z23alRectLDC_PV_GetU0ShiftP18alDCAL_PACKDATA_V3Rd() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114error_categoryE = NULL;

/* Exported Object: __kmp_thread_pool_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_thread_pool_nth __asm__("__kmp_thread_pool_nth") = NULL;

/* Exported Object: __kmp_root_counter */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_root_counter __asm__("__kmp_root_counter") = NULL;

/* Demangled: __kmp_aux_get_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_get_affinity_mask_proc(void) __asm__("__kmp_aux_get_affinity_mask_proc");
int fn___kmp_aux_get_affinity_mask_proc(void) {
    ALOGD("__kmp_aux_get_affinity_mask_proc() called");
    return 0;
}

/* Demangled: __kmp_parallel_deo */
extern "C" __attribute__((visibility("default"))) int fn___kmp_parallel_deo(void) __asm__("__kmp_parallel_deo");
int fn___kmp_parallel_deo(void) {
    ALOGD("__kmp_parallel_deo() called");
    return 0;
}

/* Demangled: OAES_Encrypt(unsigned char*, unsigned long, unsigned char const*, unsigned long, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z12OAES_EncryptPhmPKhmS_Pm(void) {
    ALOGD("_Z12OAES_EncryptPhmPKhmS_Pm() called");
    return 0;
}

/* Demangled: __kmp_cleanup_hierarchy */
extern "C" __attribute__((visibility("default"))) int fn___kmp_cleanup_hierarchy(void) __asm__("__kmp_cleanup_hierarchy");
int fn___kmp_cleanup_hierarchy(void) {
    ALOGD("__kmp_cleanup_hierarchy() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED1Ev() called");
    return 0;
}

/* Demangled: __kmp_free_team */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_team(void) __asm__("__kmp_free_team");
int fn___kmp_free_team(void) {
    ALOGD("__kmp_free_team() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::parking_control_before_sleep(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization28parking_control_before_sleepEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization28parking_control_before_sleepEPv() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_4r */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_4r __asm__("__kmp_atomic_lock_4r") = NULL;

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: alhLDC_FPC_Set_Para */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Set_Para(void) {
    ALOGD("alhLDC_FPC_Set_Para() called");
    return 0;
}

/* Demangled: __kmpc_omp_taskyield */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_taskyield(void) __asm__("__kmpc_omp_taskyield");
int fn___kmpc_omp_taskyield(void) {
    ALOGD("__kmpc_omp_taskyield() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD1Ev(void) {
    ALOGD("_ZNSt12length_errorD1Ev() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_8r */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_8r __asm__("__kmp_atomic_lock_8r") = NULL;

/* Demangled: halide_default_get_library_symbol */
extern "C" __attribute__((visibility("default"))) int halide_default_get_library_symbol(void) {
    ALOGD("halide_default_get_library_symbol() called");
    return 0;
}

/* Demangled: ___kmp_fast_allocate */
extern "C" __attribute__((visibility("default"))) int fn____kmp_fast_allocate(void) __asm__("___kmp_fast_allocate");
int fn____kmp_fast_allocate(void) {
    ALOGD("___kmp_fast_allocate() called");
    return 0;
}

/* Demangled: KMPAffinity::~KMPAffinity() */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinityD2Ev(void) {
    ALOGD("_ZN11KMPAffinityD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_affinity_respect_mask */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_respect_mask __asm__("__kmp_affinity_respect_mask") = NULL;

/* Exported Object: typeinfo name for char */
extern "C" __attribute__((visibility("default"))) void* _ZTSc = NULL;

/* Demangled: oaes_encrypt(void*, unsigned char const*, unsigned long, unsigned char*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z12oaes_encryptPvPKhmPhPm(void) {
    ALOGD("_Z12oaes_encryptPvPKhmPhPm() called");
    return 0;
}

/* Demangled: __kmp_get_ancestor_thread_num */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_ancestor_thread_num(void) __asm__("__kmp_get_ancestor_thread_num");
int fn___kmp_get_ancestor_thread_num(void) {
    ALOGD("__kmp_get_ancestor_thread_num() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD1Ev(void) {
    ALOGD("_ZNSt13runtime_errorD1Ev() called");
    return 0;
}

/* Demangled: __kmp_destroy_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_drdpa_lock(void) __asm__("__kmp_destroy_drdpa_lock");
int fn___kmp_destroy_drdpa_lock(void) {
    ALOGD("__kmp_destroy_drdpa_lock() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112system_errorE = NULL;

/* Demangled: __kmp_init_nested_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_nested_tas_lock(void) __asm__("__kmp_init_nested_tas_lock");
int fn___kmp_init_nested_tas_lock(void) {
    ALOGD("__kmp_init_nested_tas_lock() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTSj = NULL;

/* Exported Object: vtable for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt14overflow_error = NULL;

/* Demangled: __kmp_wait_yield_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_wait_yield_4(void) __asm__("__kmp_wait_yield_4");
int fn___kmp_wait_yield_4(void) {
    ALOGD("__kmp_wait_yield_4() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::word_lock::unlock_full() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization9word_lock11unlock_fullEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization9word_lock11unlock_fullEv() called");
    return 0;
}

/* Demangled: halide_error_failed_to_downgrade_buffer_t */
extern "C" __attribute__((visibility("default"))) int halide_error_failed_to_downgrade_buffer_t(void) {
    ALOGD("halide_error_failed_to_downgrade_buffer_t() called");
    return 0;
}

/* Exported Object: __kmp_version */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version __asm__("__kmp_version") = NULL;

/* Demangled: alKD_ShowDebugInfo */
extern "C" __attribute__((visibility("default"))) int alKD_ShowDebugInfo(void) {
    ALOGD("alKD_ShowDebugInfo() called");
    return 0;
}

/* Demangled: __kmp_acquire_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_futex_lock(void) __asm__("__kmp_acquire_futex_lock");
int fn___kmp_acquire_futex_lock(void) {
    ALOGD("__kmp_acquire_futex_lock() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_uncaught_exception(void) __asm__("__cxa_uncaught_exception");
int fn___cxa_uncaught_exception(void) {
    ALOGD("__cxa_uncaught_exception() called");
    return 0;
}

/* Exported Object: __kmp_init_middle */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_middle __asm__("__kmp_init_middle") = NULL;

/* Exported Object: typeinfo name for long */
extern "C" __attribute__((visibility("default"))) void* _ZTSl = NULL;

/* Demangled: halide_error_debug_to_file_failed */
extern "C" __attribute__((visibility("default"))) int halide_error_debug_to_file_failed(void) {
    ALOGD("halide_error_debug_to_file_failed() called");
    return 0;
}

/* Demangled: std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15alignEmmRPvRm(void) {
    ALOGD("_ZNSt6__ndk15alignEmmRPvRm() called");
    return 0;
}

/* Demangled: __kmp_str_token */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_token(void) __asm__("__kmp_str_token");
int fn___kmp_str_token(void) {
    ALOGD("__kmp_str_token() called");
    return 0;
}

/* Exported Object: typeinfo for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11range_error = NULL;

/* Demangled: KMPNativeAffinity::~KMPNativeAffinity() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinityD0Ev(void) {
    ALOGD("_ZN17KMPNativeAffinityD0Ev() called");
    return 0;
}

/* Demangled: halide_opencl_wrap_cl_mem */
extern "C" __attribute__((visibility("default"))) int halide_opencl_wrap_cl_mem(void) {
    ALOGD("halide_opencl_wrap_cl_mem() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: std::__ndk1::system_error::__init(std::__ndk1::error_code const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_error6__initERKNS_10error_codeENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_error6__initERKNS_10error_codeENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD0Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD0Ev() called");
    return 0;
}

/* Demangled: __kmp_free_cons_stack */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_cons_stack(void) __asm__("__kmp_free_cons_stack");
int fn___kmp_free_cons_stack(void) {
    ALOGD("__kmp_free_cons_stack() called");
    return 0;
}

/* Exported Object: __kmp_align_alloc */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_align_alloc __asm__("__kmp_align_alloc") = NULL;

/* Demangled: halide_msan_annotate_buffer_is_initialized */
extern "C" __attribute__((visibility("default"))) int halide_msan_annotate_buffer_is_initialized(void) {
    ALOGD("halide_msan_annotate_buffer_is_initialized() called");
    return 0;
}

/* Demangled: __kmp_common_destroy */
extern "C" __attribute__((visibility("default"))) int fn___kmp_common_destroy(void) __asm__("__kmp_common_destroy");
int fn___kmp_common_destroy(void) {
    ALOGD("__kmp_common_destroy() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk119__shared_weak_countE = NULL;

/* Exported Object: __kmp_debug_buf_atomic */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buf_atomic __asm__("__kmp_debug_buf_atomic") = NULL;

/* Demangled: alKD_GetEncPackDataFromOTP */
extern "C" __attribute__((visibility("default"))) int alKD_GetEncPackDataFromOTP(void) {
    ALOGD("alKD_GetEncPackDataFromOTP() called");
    return 0;
}

/* Demangled: halide_default_device_slice */
extern "C" __attribute__((visibility("default"))) int halide_default_device_slice(void) {
    ALOGD("halide_default_device_slice() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD0Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112future_errorE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__make_ready() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state12__make_readyEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state12__make_readyEv() called");
    return 0;
}

/* Exported Object: vtable for KMPNativeAffinity::Mask */
extern "C" __attribute__((visibility("default"))) void* _ZTVN17KMPNativeAffinity4MaskE = NULL;

/* Demangled: __kmpc_fork_call */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_fork_call(void) __asm__("__kmpc_fork_call");
int fn___kmpc_fork_call(void) {
    ALOGD("__kmpc_fork_call() called");
    return 0;
}

/* Demangled: __ompt_thread_assign_wait_id(void*) */
extern "C" __attribute__((visibility("default"))) int _Z28__ompt_thread_assign_wait_idPv(void) {
    ALOGD("_Z28__ompt_thread_assign_wait_idPv() called");
    return 0;
}

/* Demangled: alKD_PackDataV4DecTo3in1 */
extern "C" __attribute__((visibility("default"))) int alKD_PackDataV4DecTo3in1(void) {
    ALOGD("alKD_PackDataV4DecTo3in1() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start __asm__("__bss_start") = NULL;

/* Demangled: Matrix_MatrixInverse(double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z20Matrix_MatrixInversePdS_i(void) {
    ALOGD("_Z20Matrix_MatrixInversePdS_i() called");
    return 0;
}

/* Demangled: __kmp_i18n_catopen */
extern "C" __attribute__((visibility("default"))) int fn___kmp_i18n_catopen(void) __asm__("__kmp_i18n_catopen");
int fn___kmp_i18n_catopen(void) {
    ALOGD("__kmp_i18n_catopen() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTSt = NULL;

/* Demangled: __kmpc_atomic_cmplx4_div_cmplx8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_div_cmplx8(void) __asm__("__kmpc_atomic_cmplx4_div_cmplx8");
int fn___kmpc_atomic_cmplx4_div_cmplx8(void) {
    ALOGD("__kmpc_atomic_cmplx4_div_cmplx8() called");
    return 0;
}

/* Demangled: std::__ndk1::__throw_system_error(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__throw_system_errorEiPKc(void) {
    ALOGD("_ZNSt6__ndk120__throw_system_errorEiPKc() called");
    return 0;
}

/* Demangled: __kmp_env_initialize(char const*) */
extern "C" __attribute__((visibility("default"))) int _Z20__kmp_env_initializePKc(void) {
    ALOGD("_Z20__kmp_env_initializePKc() called");
    return 0;
}

/* Exported Object: __kmp_dflt_team_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dflt_team_nth __asm__("__kmp_dflt_team_nth") = NULL;

/* Exported Object: typeinfo name for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSb = NULL;

/* Demangled: LDC_LDC(double*, double*, tLDC_STRUCT*, double*, double*, unsigned char, bool, double*, double*, bool) */
extern "C" __attribute__((visibility("default"))) int _Z7LDC_LDCPdS_P11tLDC_STRUCTS_S_hbS_S_b(void) {
    ALOGD("_Z7LDC_LDCPdS_P11tLDC_STRUCTS_S_hbS_S_b() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE() called");
    return 0;
}

/* Exported Object: typeinfo name for short */
extern "C" __attribute__((visibility("default"))) void* _ZTSs = NULL;

/* Demangled: __kmp_exit_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_exit_thread(void) __asm__("__kmp_exit_thread");
int fn___kmp_exit_thread(void) {
    ALOGD("__kmp_exit_thread() called");
    return 0;
}

/* Demangled: __kmp_free_implicit_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_implicit_task(void) __asm__("__kmp_free_implicit_task");
int fn___kmp_free_implicit_task(void) {
    ALOGD("__kmp_free_implicit_task() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_can_use_target_features */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal30custom_can_use_target_featuresE = NULL;

/* Demangled: ompc_set_max_active_levels */
extern "C" __attribute__((visibility("default"))) int ompc_set_max_active_levels(void) {
    ALOGD("ompc_set_max_active_levels() called");
    return 0;
}

/* Demangled: kmpc_get_poolstat(unsigned long*, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _Z17kmpc_get_poolstatPmS_(void) {
    ALOGD("_Z17kmpc_get_poolstatPmS_() called");
    return 0;
}

/* Exported Object: typeinfo name for double */
extern "C" __attribute__((visibility("default"))) void* _ZTSd = NULL;

/* Exported Object: typeinfo name for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTSa = NULL;

/* Demangled: __kmpc_atomic_fixed8_orb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_orb(void) __asm__("__kmpc_atomic_fixed8_orb");
int fn___kmpc_atomic_fixed8_orb(void) {
    ALOGD("__kmpc_atomic_fixed8_orb() called");
    return 0;
}

/* Exported Object: __kmp_direct_unset */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_direct_unset __asm__("__kmp_direct_unset") = NULL;

/* Demangled: __kmp_release_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_tas_lock(void) __asm__("__kmp_release_tas_lock");
int fn___kmp_release_tas_lock(void) {
    ALOGD("__kmp_release_tas_lock() called");
    return 0;
}

/* Demangled: Matrix_MatrixTranspose(double*, double*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z22Matrix_MatrixTransposePdS_ii(void) {
    ALOGD("_Z22Matrix_MatrixTransposePdS_ii() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateSubBuffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL17clCreateSubBufferE = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::unlock_bucket_pair(Halide::Runtime::Internal::Synchronization::bucket_pair&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization18unlock_bucket_pairERNS2_11bucket_pairE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization18unlock_bucket_pairERNS2_11bucket_pairE() called");
    return 0;
}

/* Exported Object: __kmp_affinity_verbose */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_verbose __asm__("__kmp_affinity_verbose") = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* obj___end__ __asm__("__end__") = NULL;

/* Exported Object: __kmp_xproc */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_xproc __asm__("__kmp_xproc") = NULL;

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc() called");
    return 0;
}

/* Demangled: __cxa_get_globals */
extern "C" __attribute__((visibility("default"))) int fn___cxa_get_globals(void) __asm__("__cxa_get_globals");
int fn___cxa_get_globals(void) {
    ALOGD("__cxa_get_globals() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD2Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD2Ev() called");
    return 0;
}

/* Demangled: __kmp_reap_team */
extern "C" __attribute__((visibility("default"))) int fn___kmp_reap_team(void) __asm__("__kmp_reap_team");
int fn___kmp_reap_team(void) {
    ALOGD("__kmp_reap_team() called");
    return 0;
}

/* Demangled: kmpc_set_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int kmpc_set_affinity_mask_proc(void) {
    ALOGD("kmpc_set_affinity_mask_proc() called");
    return 0;
}

/* Demangled: __kmp_vprintf */
extern "C" __attribute__((visibility("default"))) int fn___kmp_vprintf(void) __asm__("__kmp_vprintf");
int fn___kmp_vprintf(void) {
    ALOGD("__kmp_vprintf() called");
    return 0;
}

/* Demangled: __kmp_cleanup_indirect_user_locks */
extern "C" __attribute__((visibility("default"))) int fn___kmp_cleanup_indirect_user_locks(void) __asm__("__kmp_cleanup_indirect_user_locks");
int fn___kmp_cleanup_indirect_user_locks(void) {
    ALOGD("__kmp_cleanup_indirect_user_locks() called");
    return 0;
}

/* Demangled: halide_error_buffer_extents_negative */
extern "C" __attribute__((visibility("default"))) int halide_error_buffer_extents_negative(void) {
    ALOGD("halide_error_buffer_extents_negative() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC1ERKS_() called");
    return 0;
}

/* Demangled: __kmp_msg */
extern "C" __attribute__((visibility("default"))) int fn___kmp_msg(void) __asm__("__kmp_msg");
int fn___kmp_msg(void) {
    ALOGD("__kmp_msg() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx4_sub_cmplx8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_sub_cmplx8(void) __asm__("__kmpc_atomic_cmplx4_sub_cmplx8");
int fn___kmpc_atomic_cmplx4_sub_cmplx8(void) {
    ALOGD("__kmpc_atomic_cmplx4_sub_cmplx8() called");
    return 0;
}

/* Demangled: std::__ndk1::declare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117declare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk117declare_reachableEPv() called");
    return 0;
}

/* Exported Object: __kmp_stkoffset */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_stkoffset __asm__("__kmp_stkoffset") = NULL;

/* Demangled: halide_error_constraints_make_required_region_smaller */
extern "C" __attribute__((visibility("default"))) int halide_error_constraints_make_required_region_smaller(void) {
    ALOGD("halide_error_constraints_make_required_region_smaller() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<unsigned short, 4>::~Buffer() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferItLi4EED2Ev(void) {
    ALOGD("_ZN6Halide7Runtime6BufferItLi4EED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for float */
extern "C" __attribute__((visibility("default"))) void* _ZTSf = NULL;

/* Demangled: __kmpc_doacross_wait */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_doacross_wait(void) __asm__("__kmpc_doacross_wait");
int fn___kmpc_doacross_wait(void) {
    ALOGD("__kmpc_doacross_wait() called");
    return 0;
}

/* Demangled: halide_error_unaligned_host_ptr */
extern "C" __attribute__((visibility("default"))) int halide_error_unaligned_host_ptr(void) {
    ALOGD("halide_error_unaligned_host_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__release_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count14__release_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count14__release_weakEv() called");
    return 0;
}

/* Exported Object: __kmp_target_offload */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_target_offload __asm__("__kmp_target_offload") = NULL;

/* Demangled: GC_ScaleHomography(double*, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z18GC_ScaleHomographyPddd(void) {
    ALOGD("_Z18GC_ScaleHomographyPddd() called");
    return 0;
}

/* Demangled: __kmp_dephash_free_entries */
extern "C" __attribute__((visibility("default"))) int fn___kmp_dephash_free_entries(void) __asm__("__kmp_dephash_free_entries");
int fn___kmp_dephash_free_entries(void) {
    ALOGD("__kmp_dephash_free_entries() called");
    return 0;
}

/* Exported Object: __kmp_sys_min_stksize */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_sys_min_stksize __asm__("__kmp_sys_min_stksize") = NULL;

/* Demangled: __kmpc_atomic_float10_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float10_sub(void) __asm__("__kmpc_atomic_float10_sub");
int fn___kmpc_atomic_float10_sub(void) {
    ALOGD("__kmpc_atomic_float10_sub() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::OpenCL::get_opencl_error_name(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal6OpenCL21get_opencl_error_nameEi(void) {
    ALOGD("_ZN6Halide7Runtime8Internal6OpenCL21get_opencl_error_nameEi() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::halide_trace_buffer */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal19halide_trace_bufferE = NULL;

/* Exported Object: typeinfo name for int */
extern "C" __attribute__((visibility("default"))) void* _ZTSi = NULL;

/* Exported Object: __kmp_tasking_mode */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_tasking_mode __asm__("__kmp_tasking_mode") = NULL;

/* Exported Object: typeinfo name for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSg = NULL;

/* Demangled: __kmpc_atomic_fixed4_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_shr(void) __asm__("__kmpc_atomic_fixed4_shr");
int fn___kmpc_atomic_fixed4_shr(void) {
    ALOGD("__kmpc_atomic_fixed4_shr() called");
    return 0;
}

/* Demangled: __kmp_acquire_drdpa_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_drdpa_lock(void) __asm__("__kmp_acquire_drdpa_lock");
int fn___kmp_acquire_drdpa_lock(void) {
    ALOGD("__kmp_acquire_drdpa_lock() called");
    return 0;
}

/* Demangled: __kmp_now_nsec */
extern "C" __attribute__((visibility("default"))) int fn___kmp_now_nsec(void) __asm__("__kmp_now_nsec");
int fn___kmp_now_nsec(void) {
    ALOGD("__kmp_now_nsec() called");
    return 0;
}

/* Demangled: halide_error_buffer_is_null */
extern "C" __attribute__((visibility("default"))) int halide_error_buffer_is_null(void) {
    ALOGD("halide_error_buffer_is_null() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD1Ev() called");
    return 0;
}

/* Demangled: __kmp_execute_tasks_64 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_execute_tasks_64(void) __asm__("__kmp_execute_tasks_64");
int fn___kmp_execute_tasks_64(void) {
    ALOGD("__kmp_execute_tasks_64() called");
    return 0;
}

/* Exported Object: __kmp_hot_teams_max_level */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hot_teams_max_level __asm__("__kmp_hot_teams_max_level") = NULL;

/* Demangled: ldc8_chroma_cpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_cpu_argv(void) {
    ALOGD("ldc8_chroma_cpu_argv() called");
    return 0;
}

/* Demangled: GC_ScaleProjectionMatrix(double*, double) */
extern "C" __attribute__((visibility("default"))) int _Z24GC_ScaleProjectionMatrixPdd(void) {
    ALOGD("_Z24GC_ScaleProjectionMatrixPdd() called");
    return 0;
}

/* Demangled: __kmpc_atomic_start() */
extern "C" __attribute__((visibility("default"))) int _Z19__kmpc_atomic_startv(void) {
    ALOGD("_Z19__kmpc_atomic_startv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTSh = NULL;

/* Demangled: kmp_flag_64::release() */
extern "C" __attribute__((visibility("default"))) int _ZN11kmp_flag_647releaseEv(void) {
    ALOGD("_ZN11kmp_flag_647releaseEv() called");
    return 0;
}

/* Demangled: hierarchy_info::resize(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN14hierarchy_info6resizeEj(void) {
    ALOGD("_ZN14hierarchy_info6resizeEj() called");
    return 0;
}

/* Exported Object: typeinfo name for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTSe = NULL;

/* Demangled: std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: __kmp_destroy_nested_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_nested_tas_lock(void) __asm__("__kmp_destroy_nested_tas_lock");
int fn___kmp_destroy_nested_tas_lock(void) {
    ALOGD("__kmp_destroy_nested_tas_lock() called");
    return 0;
}

/* Demangled: alKD_GetEncLDCData */
extern "C" __attribute__((visibility("default"))) int alKD_GetEncLDCData(void) {
    ALOGD("alKD_GetEncLDCData() called");
    return 0;
}

/* Exported Object: typeinfo name for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16nested_exception = NULL;

/* Demangled: GC_Point2D_Normalization_NonIsotropic(double*, double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z37GC_Point2D_Normalization_NonIsotropicPdS_S_S_i(void) {
    ALOGD("_Z37GC_Point2D_Normalization_NonIsotropicPdS_S_S_i() called");
    return 0;
}

/* Demangled: std::__ndk1::__undeclare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__undeclare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk121__undeclare_reachableEPv() called");
    return 0;
}

/* Demangled: __kmp_internal_begin */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_begin(void) __asm__("__kmp_internal_begin");
int fn___kmp_internal_begin(void) {
    ALOGD("__kmp_internal_begin() called");
    return 0;
}

/* Exported Object: __cxa_new_handler */
extern "C" __attribute__((visibility("default"))) void* obj___cxa_new_handler __asm__("__cxa_new_handler") = NULL;

/* Exported Object: std::__ndk1::try_to_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk111try_to_lockE = NULL;

/* Exported Object: __kmp_indirect_init */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_init __asm__("__kmp_indirect_init") = NULL;

/* Demangled: __kmp_str_buf_print_size */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_print_size(void) __asm__("__kmp_str_buf_print_size");
int fn___kmp_str_buf_print_size(void) {
    ALOGD("__kmp_str_buf_print_size() called");
    return 0;
}

/* Demangled: __kmp_register_root */
extern "C" __attribute__((visibility("default"))) int fn___kmp_register_root(void) __asm__("__kmp_register_root");
int fn___kmp_register_root(void) {
    ALOGD("__kmp_register_root() called");
    return 0;
}

/* Demangled: GC_compute_R_relative(double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z21GC_compute_R_relativePdS_S_(void) {
    ALOGD("_Z21GC_compute_R_relativePdS_S_() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__shared_countE = NULL;

/* Demangled: __kmpc_pop_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_pop_num_threads(void) __asm__("__kmpc_pop_num_threads");
int fn___kmpc_pop_num_threads(void) {
    ALOGD("__kmpc_pop_num_threads() called");
    return 0;
}

/* Demangled: halide_set_custom_do_par_for */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_do_par_for(void) {
    ALOGD("halide_set_custom_do_par_for() called");
    return 0;
}

/* Demangled: ompt_start_tool */
extern "C" __attribute__((visibility("default"))) int ompt_start_tool(void) {
    ALOGD("ompt_start_tool() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*, std::__ndk1::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Exported Object: typeinfo for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16nested_exception = NULL;

/* Demangled: halide_msan_annotate_memory_is_initialized */
extern "C" __attribute__((visibility("default"))) int halide_msan_annotate_memory_is_initialized(void) {
    ALOGD("halide_msan_annotate_memory_is_initialized() called");
    return 0;
}

/* Demangled: operator delete(void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_t(void) {
    ALOGD("_ZdlPvSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt20bad_array_new_length = NULL;

/* Demangled: ldc8_cpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc8_cpu_argv(void) {
    ALOGD("ldc8_cpu_argv() called");
    return 0;
}

/* Demangled: __kmpc_get_parent_taskid */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_get_parent_taskid(void) __asm__("__kmpc_get_parent_taskid");
int fn___kmpc_get_parent_taskid(void) {
    ALOGD("__kmpc_get_parent_taskid() called");
    return 0;
}

/* Demangled: __kmp_terminate_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_terminate_thread(void) __asm__("__kmp_terminate_thread");
int fn___kmp_terminate_thread(void) {
    ALOGD("__kmp_terminate_thread() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC1Ev() called");
    return 0;
}

/* Exported Object: __kmp_copyright */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_copyright __asm__("__kmp_copyright") = NULL;

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int fn___cxa_pure_virtual(void) __asm__("__cxa_pure_virtual");
int fn___cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Exported Object: __kmp_version_build_compiler */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_build_compiler __asm__("__kmp_version_build_compiler") = NULL;

/* Exported Object: __kmp_max_task_priority */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_max_task_priority __asm__("__kmp_max_task_priority") = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9__executeEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9__executeEv() called");
    return 0;
}

/* Demangled: ___kmp_thread_realloc */
extern "C" __attribute__((visibility("default"))) int fn____kmp_thread_realloc(void) __asm__("___kmp_thread_realloc");
int fn____kmp_thread_realloc(void) {
    ALOGD("___kmp_thread_realloc() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_max(void) __asm__("__kmpc_atomic_float8_max");
int fn___kmpc_atomic_float8_max(void) {
    ALOGD("__kmpc_atomic_float8_max() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: __kmpc_end_reduce */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_reduce(void) __asm__("__kmpc_end_reduce");
int fn___kmpc_end_reduce(void) {
    ALOGD("__kmpc_end_reduce() called");
    return 0;
}

/* Demangled: __kmp_threadprivate_resize_cache */
extern "C" __attribute__((visibility("default"))) int fn___kmp_threadprivate_resize_cache(void) __asm__("__kmp_threadprivate_resize_cache");
int fn___kmp_threadprivate_resize_cache(void) {
    ALOGD("__kmp_threadprivate_resize_cache() called");
    return 0;
}

/* Demangled: __kmpc_end_barrier_master */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_barrier_master(void) __asm__("__kmpc_end_barrier_master");
int fn___kmpc_end_barrier_master(void) {
    ALOGD("__kmpc_end_barrier_master() called");
    return 0;
}

/* Exported Object: __kmp_avail_proc */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_avail_proc __asm__("__kmp_avail_proc") = NULL;

/* Demangled: __kmpc_atomic_fixed8_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_max(void) __asm__("__kmpc_atomic_fixed8_max");
int fn___kmpc_atomic_fixed8_max(void) {
    ALOGD("__kmpc_atomic_fixed8_max() called");
    return 0;
}

/* Demangled: __kmp_release_nested_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_nested_queuing_lock(void) __asm__("__kmp_release_nested_queuing_lock");
int fn___kmp_release_nested_queuing_lock(void) {
    ALOGD("__kmp_release_nested_queuing_lock() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_sub(void) __asm__("__kmpc_atomic_float8_sub");
int fn___kmpc_atomic_float8_sub(void) {
    ALOGD("__kmpc_atomic_float8_sub() called");
    return 0;
}

/* Exported Object: __kmp_indirect_get_location */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_get_location __asm__("__kmp_indirect_get_location") = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::device_type */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL11device_typeE = NULL;

/* Exported Object: __kmp_debug_buf_chars */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buf_chars __asm__("__kmp_debug_buf_chars") = NULL;

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int fn___cxa_demangle(void) __asm__("__cxa_demangle");
int fn___cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSw = NULL;

/* Demangled: __kmp_runtime_destroy */
extern "C" __attribute__((visibility("default"))) int fn___kmp_runtime_destroy(void) __asm__("__kmp_runtime_destroy");
int fn___kmp_runtime_destroy(void) {
    ALOGD("__kmp_runtime_destroy() called");
    return 0;
}

/* Demangled: halide_opencl_get_platform_name */
extern "C" __attribute__((visibility("default"))) int halide_opencl_get_platform_name(void) {
    ALOGD("halide_opencl_get_platform_name() called");
    return 0;
}

/* Demangled: alKD_FlowGetDecPackDataLDC */
extern "C" __attribute__((visibility("default"))) int alKD_FlowGetDecPackDataLDC(void) {
    ALOGD("alKD_FlowGetDecPackDataLDC() called");
    return 0;
}

/* Demangled: __kmp_str_loc_free */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_loc_free(void) __asm__("__kmp_str_loc_free");
int fn___kmp_str_loc_free(void) {
    ALOGD("__kmp_str_loc_free() called");
    return 0;
}

/* Demangled: __kmp_determine_reduction_method */
extern "C" __attribute__((visibility("default"))) int fn___kmp_determine_reduction_method(void) __asm__("__kmp_determine_reduction_method");
int fn___kmp_determine_reduction_method(void) {
    ALOGD("__kmp_determine_reduction_method() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD1Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_one() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_oneEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_oneEv() called");
    return 0;
}

/* Demangled: __kmpc_for_static_fini */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_for_static_fini(void) __asm__("__kmpc_for_static_fini");
int fn___kmpc_for_static_fini(void) {
    ALOGD("__kmpc_for_static_fini() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD0Ev(void) {
    ALOGD("_ZNSt14overflow_errorD0Ev() called");
    return 0;
}

/* Exported Object: __kmp_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_nth __asm__("__kmp_nth") = NULL;

/* Demangled: halide_device_detach_native */
extern "C" __attribute__((visibility("default"))) int halide_device_detach_native(void) {
    ALOGD("halide_device_detach_native() called");
    return 0;
}

/* Exported Object: __kmp_adjust_gtid_mode */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_adjust_gtid_mode __asm__("__kmp_adjust_gtid_mode") = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_mul(void) __asm__("__kmpc_atomic_fixed8_mul");
int fn___kmpc_atomic_fixed8_mul(void) {
    ALOGD("__kmpc_atomic_fixed8_mul() called");
    return 0;
}

/* Demangled: ompc_get_team_size */
extern "C" __attribute__((visibility("default"))) int ompc_get_team_size(void) {
    ALOGD("ompc_get_team_size() called");
    return 0;
}

/* Demangled: halide_join_thread */
extern "C" __attribute__((visibility("default"))) int halide_join_thread(void) {
    ALOGD("halide_join_thread() called");
    return 0;
}

/* Demangled: GC_ScaleHomography(double*, double, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z18GC_ScaleHomographyPddddd(void) {
    ALOGD("_Z18GC_ScaleHomographyPddddd() called");
    return 0;
}

/* Exported Object: typeinfo name for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSx = NULL;

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD1Ev(void) {
    ALOGD("_ZNSt12domain_errorD1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt20bad_array_new_length4whatEv(void) {
    ALOGD("_ZNKSt20bad_array_new_length4whatEv() called");
    return 0;
}

/* Demangled: __kmp_init_nested_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_nested_futex_lock(void) __asm__("__kmp_init_nested_futex_lock");
int fn___kmp_init_nested_futex_lock(void) {
    ALOGD("__kmp_init_nested_futex_lock() called");
    return 0;
}

/* Demangled: __kmpc_dist_dispatch_init_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dist_dispatch_init_4u(void) __asm__("__kmpc_dist_dispatch_init_4u");
int fn___kmpc_dist_dispatch_init_4u(void) {
    ALOGD("__kmpc_dist_dispatch_init_4u() called");
    return 0;
}

/* Demangled: __kmp_get_schedule_global */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_schedule_global(void) __asm__("__kmp_get_schedule_global");
int fn___kmp_get_schedule_global(void) {
    ALOGD("__kmp_get_schedule_global() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC2EPKc() called");
    return 0;
}

/* Demangled: __kmp_free_fast_memory */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_fast_memory(void) __asm__("__kmp_free_fast_memory");
int fn___kmp_free_fast_memory(void) {
    ALOGD("__kmp_free_fast_memory() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_shl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_shl(void) __asm__("__kmpc_atomic_fixed4_shl");
int fn___kmpc_atomic_fixed4_shl(void) {
    ALOGD("__kmpc_atomic_fixed4_shl() called");
    return 0;
}

/* Demangled: halide_msan_annotate_buffer_is_initialized_as_destructor */
extern "C" __attribute__((visibility("default"))) int halide_msan_annotate_buffer_is_initialized_as_destructor(void) {
    ALOGD("halide_msan_annotate_buffer_is_initialized_as_destructor() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float10_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float10_div(void) __asm__("__kmpc_atomic_float10_div");
int fn___kmpc_atomic_float10_div(void) {
    ALOGD("__kmpc_atomic_float10_div() called");
    return 0;
}

/* Demangled: std::uncaught_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt18uncaught_exceptionv(void) {
    ALOGD("_ZSt18uncaught_exceptionv() called");
    return 0;
}

/* Demangled: halide_opencl_device_interface */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_interface(void) {
    ALOGD("halide_opencl_device_interface() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::begin() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity4Mask5beginEv(void) {
    ALOGD("_ZNK17KMPNativeAffinity4Mask5beginEv() called");
    return 0;
}

/* Demangled: std::bad_array_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16bad_array_length4whatEv(void) {
    ALOGD("_ZNKSt16bad_array_length4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSo = NULL;

/* Demangled: __ompt_get_task_info_internal(int, int*, ompt_data_t**, ompt_frame_t**, ompt_data_t**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z29__ompt_get_task_info_internaliPiPP11ompt_data_tPP12ompt_frame_tS2_S_(void) {
    ALOGD("_Z29__ompt_get_task_info_internaliPiPP11ompt_data_tPP12ompt_frame_tS2_S_() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSn = NULL;

/* Exported Object: __kmp_affinity_type */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_type __asm__("__kmp_affinity_type") = NULL;

/* Demangled: std::uncaught_exceptions() */
extern "C" __attribute__((visibility("default"))) int _ZSt19uncaught_exceptionsv(void) {
    ALOGD("_ZSt19uncaught_exceptionsv() called");
    return 0;
}

/* Demangled: alhLDC_FPC_Sharpen */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Sharpen(void) {
    ALOGD("alhLDC_FPC_Sharpen() called");
    return 0;
}

/* Demangled: __kmp_affinity_entire_machine_mask(KMPAffinity::Mask*) */
extern "C" __attribute__((visibility("default"))) int _Z34__kmp_affinity_entire_machine_maskPN11KMPAffinity4MaskE(void) {
    ALOGD("_Z34__kmp_affinity_entire_machine_maskPN11KMPAffinity4MaskE() called");
    return 0;
}

/* Demangled: __kmp_test_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_ticket_lock(void) __asm__("__kmp_test_ticket_lock");
int fn___kmp_test_ticket_lock(void) {
    ALOGD("__kmp_test_ticket_lock() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTSm = NULL;

/* Demangled: __kmpc_bound_thread_num */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_bound_thread_num(void) __asm__("__kmpc_bound_thread_num");
int fn___kmpc_bound_thread_num(void) {
    ALOGD("__kmpc_bound_thread_num() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_8i */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_8i __asm__("__kmp_atomic_lock_8i") = NULL;

/* Demangled: GC_calculate_RotationMatrix_from_VectorPairs(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z44GC_calculate_RotationMatrix_from_VectorPairsPdS_S_i(void) {
    ALOGD("_Z44GC_calculate_RotationMatrix_from_VectorPairsPdS_S_i() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSy = NULL;

/* Demangled: alKD_CoolpadFailOtpSpecialCaseFlag */
extern "C" __attribute__((visibility("default"))) int alKD_CoolpadFailOtpSpecialCaseFlag(void) {
    ALOGD("alKD_CoolpadFailOtpSpecialCaseFlag() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_min(void) __asm__("__kmpc_atomic_fixed8_min");
int fn___kmpc_atomic_fixed8_min(void) {
    ALOGD("__kmpc_atomic_fixed8_min() called");
    return 0;
}

/* Demangled: halide_error_param_too_small_u64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_small_u64(void) {
    ALOGD("halide_error_param_too_small_u64() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_abort_delay */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_abort_delay __asm__("__kmp_abort_delay") = NULL;

/* Demangled: CrossProduct_R3(double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z15CrossProduct_R3PdS_S_(void) {
    ALOGD("_Z15CrossProduct_R3PdS_S_() called");
    return 0;
}

/* Exported Object: __kmp_global */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_global __asm__("__kmp_global") = NULL;

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2EPKc(void) {
    ALOGD("_ZNSt11logic_errorC2EPKc() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::~Mask() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4MaskD2Ev(void) {
    ALOGD("_ZN17KMPNativeAffinity4MaskD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9bad_alloc = NULL;

/* Demangled: __kmp_dump_debug_buffer */
extern "C" __attribute__((visibility("default"))) int fn___kmp_dump_debug_buffer(void) __asm__("__kmp_dump_debug_buffer");
int fn___kmp_dump_debug_buffer(void) {
    ALOGD("__kmp_dump_debug_buffer() called");
    return 0;
}

/* Exported Object: typeinfo name for void */
extern "C" __attribute__((visibility("default"))) void* _ZTSv = NULL;

/* Demangled: LDC_LDCForPt_InvLDCForPt(double*, double*, double*, double*, int, tLDC_STRUCT*, double*, double*, unsigned char, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _Z24LDC_LDCForPt_InvLDCForPtPdS_S_S_iP11tLDC_STRUCTS_S_hbb(void) {
    ALOGD("_Z24LDC_LDCForPt_InvLDCForPtPdS_S_S_iP11tLDC_STRUCTS_S_hbb() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::worker_thread_already_locked(Halide::Runtime::Internal::work*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal28worker_thread_already_lockedEPNS1_4workE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal28worker_thread_already_lockedEPNS1_4workE() called");
    return 0;
}

/* Demangled: __kmpc_set_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_set_lock(void) __asm__("__kmpc_set_lock");
int fn___kmpc_set_lock(void) {
    ALOGD("__kmpc_set_lock() called");
    return 0;
}

/* Demangled: __kmpc_critical_with_hint */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_critical_with_hint(void) __asm__("__kmpc_critical_with_hint");
int fn___kmpc_critical_with_hint(void) {
    ALOGD("__kmpc_critical_with_hint() called");
    return 0;
}

/* Demangled: __cxa_guard_release */
extern "C" __attribute__((visibility("default"))) int fn___cxa_guard_release(void) __asm__("__cxa_guard_release");
int fn___cxa_guard_release(void) {
    ALOGD("__cxa_guard_release() called");
    return 0;
}

/* Demangled: halide_opencl_device_release_crop */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_release_crop(void) {
    ALOGD("halide_opencl_device_release_crop() called");
    return 0;
}

/* Demangled: __kmp_internal_end_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_thread(void) __asm__("__kmp_internal_end_thread");
int fn___kmp_internal_end_thread(void) {
    ALOGD("__kmp_internal_end_thread() called");
    return 0;
}

/* Exported Object: vtable for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9type_info = NULL;

/* Demangled: alhLDC_Gen_LDC_Table2 */
extern "C" __attribute__((visibility("default"))) int alhLDC_Gen_LDC_Table2(void) {
    ALOGD("alhLDC_Gen_LDC_Table2() called");
    return 0;
}

/* Demangled: ompt_fini */
extern "C" __attribute__((visibility("default"))) int ompt_fini(void) {
    ALOGD("ompt_fini() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_add(void) __asm__("__kmpc_atomic_fixed1_add");
int fn___kmpc_atomic_fixed1_add(void) {
    ALOGD("__kmpc_atomic_fixed1_add() called");
    return 0;
}

/* Demangled: __cxa_allocate_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_allocate_exception(void) __asm__("__cxa_allocate_exception");
int fn___cxa_allocate_exception(void) {
    ALOGD("__cxa_allocate_exception() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Demangled: alKD_GetCaliDataToPackData_ENC_Size */
extern "C" __attribute__((visibility("default"))) int alKD_GetCaliDataToPackData_ENC_Size(void) {
    ALOGD("alKD_GetCaliDataToPackData_ENC_Size() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_div(void) __asm__("__kmpc_atomic_fixed1_div");
int fn___kmpc_atomic_fixed1_div(void) {
    ALOGD("__kmpc_atomic_fixed1_div() called");
    return 0;
}

/* Exported Object: __kmp_dflt_team_nth_ub */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dflt_team_nth_ub __asm__("__kmp_dflt_team_nth_ub") = NULL;

/* Exported Object: __kmp_barrier_release_branch_bits */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_release_branch_bits __asm__("__kmp_barrier_release_branch_bits") = NULL;

/* Demangled: __kmp_env_blk_var */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_blk_var(void) __asm__("__kmp_env_blk_var");
int fn___kmp_env_blk_var(void) {
    ALOGD("__kmp_env_blk_var() called");
    return 0;
}

/* Demangled: halide_default_device_release_crop */
extern "C" __attribute__((visibility("default"))) int halide_default_device_release_crop(void) {
    ALOGD("halide_default_device_release_crop() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::~Mask() */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4MaskD0Ev(void) {
    ALOGD("_ZN17KMPNativeAffinity4MaskD0Ev() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::OpenCL::create_opencl_context(void*, _cl_context**, _cl_command_queue**) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal6OpenCL21create_opencl_contextEPvPP11_cl_contextPP17_cl_command_queue(void) {
    ALOGD("_ZN6Halide7Runtime8Internal6OpenCL21create_opencl_contextEPvPP11_cl_contextPP17_cl_command_queue() called");
    return 0;
}

/* Demangled: halide_error_out_of_memory */
extern "C" __attribute__((visibility("default"))) int halide_error_out_of_memory(void) {
    ALOGD("halide_error_out_of_memory() called");
    return 0;
}

/* Demangled: kmpc_set_poolsize(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Z17kmpc_set_poolsizem(void) {
    ALOGD("_Z17kmpc_set_poolsizem() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__pbase_type_infoE = NULL;

/* Exported Object: __kmp_atomic_lock_8c */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_8c __asm__("__kmp_atomic_lock_8c") = NULL;

/* Demangled: std::__ndk1::promise<void>::set_value_at_thread_exit() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE24set_value_at_thread_exitEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE24set_value_at_thread_exitEv() called");
    return 0;
}

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC1Ev(void) {
    ALOGD("_ZNSt8bad_castC1Ev() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1u_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1u_div(void) __asm__("__kmpc_atomic_fixed1u_div");
int fn___kmpc_atomic_fixed1u_div(void) {
    ALOGD("__kmpc_atomic_fixed1u_div() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__add_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count10__add_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count10__add_weakEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD2Ev() called");
    return 0;
}

/* Demangled: altek::log_level_init() */
extern "C" __attribute__((visibility("default"))) int _ZN5altek14log_level_initEv(void) {
    ALOGD("_ZN5altek14log_level_initEv() called");
    return 0;
}

/* Demangled: __kmp_release_deps */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_deps(void) __asm__("__kmp_release_deps");
int fn___kmp_release_deps(void) {
    ALOGD("__kmp_release_deps() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC2Ev() called");
    return 0;
}

/* Demangled: halide_opencl_device_sync */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_sync(void) {
    ALOGD("halide_opencl_device_sync() called");
    return 0;
}

/* Demangled: halide_set_trace_file */
extern "C" __attribute__((visibility("default"))) int halide_set_trace_file(void) {
    ALOGD("halide_set_trace_file() called");
    return 0;
}

/* Exported Object: kmp_mutex_impl_info */
extern "C" __attribute__((visibility("default"))) void* kmp_mutex_impl_info = NULL;

/* Demangled: LDC_LDC_HLDCInfo_ModeSelect(tH_RectLDCPara*, tLDC_STRUCT*, double*, double*, double*, unsigned char, bool, bool, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z27LDC_LDC_HLDCInfo_ModeSelectP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbbh(void) {
    ALOGD("_Z27LDC_LDC_HLDCInfo_ModeSelectP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbbh() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt20bad_array_new_length = NULL;

/* Demangled: halide_downgrade_buffer_t_device_fields */
extern "C" __attribute__((visibility("default"))) int halide_downgrade_buffer_t_device_fields(void) {
    ALOGD("halide_downgrade_buffer_t_device_fields() called");
    return 0;
}

/* Demangled: __kmp_common_destroy_gtid */
extern "C" __attribute__((visibility("default"))) int fn___kmp_common_destroy_gtid(void) __asm__("__kmp_common_destroy_gtid");
int fn___kmp_common_destroy_gtid(void) {
    ALOGD("__kmp_common_destroy_gtid() called");
    return 0;
}

/* Demangled: __kmpc_taskgroup */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_taskgroup(void) __asm__("__kmpc_taskgroup");
int fn___kmpc_taskgroup(void) {
    ALOGD("__kmpc_taskgroup() called");
    return 0;
}

/* Demangled: PackDataDecryption(alDCAL_PACKDATA*, unsigned char*, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _Z18PackDataDecryptionP15alDCAL_PACKDATAPhS1_(void) {
    ALOGD("_Z18PackDataDecryptionP15alDCAL_PACKDATAPhS1_() called");
    return 0;
}

/* Demangled: alhLDC_Deinit */
extern "C" __attribute__((visibility("default"))) int alhLDC_Deinit(void) {
    ALOGD("alhLDC_Deinit() called");
    return 0;
}

/* Exported Object: __kmp_dispatch_num_buffers */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dispatch_num_buffers __asm__("__kmp_dispatch_num_buffers") = NULL;

/* Demangled: __kmpc_atomic_cmplx8_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx8_add(void) __asm__("__kmpc_atomic_cmplx8_add");
int fn___kmpc_atomic_cmplx8_add(void) {
    ALOGD("__kmpc_atomic_cmplx8_add() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Demangled: set_filed_limitation(double*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _Z20set_filed_limitationPdj(void) {
    ALOGD("_Z20set_filed_limitationPdj() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::bill_func(halide_profiler_state*, int, unsigned long long, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal9bill_funcEP21halide_profiler_stateiyi(void) {
    ALOGD("_ZN6Halide7Runtime8Internal9bill_funcEP21halide_profiler_stateiyi() called");
    return 0;
}

/* Demangled: __kmp_read_cpu_time */
extern "C" __attribute__((visibility("default"))) int fn___kmp_read_cpu_time(void) __asm__("__kmp_read_cpu_time");
int fn___kmp_read_cpu_time(void) {
    ALOGD("__kmp_read_cpu_time() called");
    return 0;
}

/* Exported Object: __kmp_dflt_nested */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dflt_nested __asm__("__kmp_dflt_nested") = NULL;

/* Exported Object: __kmp_hws_core */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_core __asm__("__kmp_hws_core") = NULL;

/* Demangled: __kmp_acquire_nested_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_nested_queuing_lock(void) __asm__("__kmp_acquire_nested_queuing_lock");
int fn___kmp_acquire_nested_queuing_lock(void) {
    ALOGD("__kmp_acquire_nested_queuing_lock() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__array_type_infoE = NULL;

/* Exported Object: __kmp_env_format */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_env_format __asm__("__kmp_env_format") = NULL;

/* Demangled: kmpc_realloc */
extern "C" __attribute__((visibility("default"))) int kmpc_realloc(void) {
    ALOGD("kmpc_realloc() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: __kmp_destroy_nested_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_nested_futex_lock(void) __asm__("__kmp_destroy_nested_futex_lock");
int fn___kmp_destroy_nested_futex_lock(void) {
    ALOGD("__kmp_destroy_nested_futex_lock() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::determine_capable(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity17determine_capableEPKc(void) {
    ALOGD("_ZN17KMPNativeAffinity17determine_capableEPKc() called");
    return 0;
}

/* Demangled: halide_error_bad_extern_fold */
extern "C" __attribute__((visibility("default"))) int halide_error_bad_extern_fold(void) {
    ALOGD("halide_error_bad_extern_fold() called");
    return 0;
}

/* Demangled: __kmp_check_barrier */
extern "C" __attribute__((visibility("default"))) int fn___kmp_check_barrier(void) __asm__("__kmp_check_barrier");
int fn___kmp_check_barrier(void) {
    ALOGD("__kmp_check_barrier() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD2Ev(void) {
    ALOGD("_ZNSt8bad_castD2Ev() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_div(void) __asm__("__kmpc_atomic_float8_div");
int fn___kmpc_atomic_float8_div(void) {
    ALOGD("__kmpc_atomic_float8_div() called");
    return 0;
}

/* Demangled: al_ldc::alLDCOnly_ParamGen2(long*, long*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short*, unsigned short, unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZN6al_ldc19alLDCOnly_ParamGen2EPlS0_ttttPttt(void) {
    ALOGD("_ZN6al_ldc19alLDCOnly_ParamGen2EPlS0_ttttPttt() called");
    return 0;
}

/* Demangled: alPackDataUpdate_HLDCInfo_V3(tH_RectLDCPara*, tH_RectLDCPara*, tH_RectLDCPara*, alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, short, short, unsigned short*, unsigned short*, double, bool) */
extern "C" __attribute__((visibility("default"))) int _Z28alPackDataUpdate_HLDCInfo_V3P14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_db(void) {
    ALOGD("_Z28alPackDataUpdate_HLDCInfo_V3P14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_db() called");
    return 0;
}

/* Demangled: __kmp_suspend_32 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_suspend_32(void) __asm__("__kmp_suspend_32");
int fn___kmp_suspend_32(void) {
    ALOGD("__kmp_suspend_32() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD1Ev(void) {
    ALOGD("_ZNSt10bad_typeidD1Ev() called");
    return 0;
}

/* Demangled: __kmpc_omp_wait_deps */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_wait_deps(void) __asm__("__kmpc_omp_wait_deps");
int fn___kmpc_omp_wait_deps(void) {
    ALOGD("__kmpc_omp_wait_deps() called");
    return 0;
}

/* Exported Object: __kmp_tp_cached_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_tp_cached_lock __asm__("__kmp_tp_cached_lock") = NULL;

/* Exported Object: __kmp_barrier_pattern_env_name */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_pattern_env_name __asm__("__kmp_barrier_pattern_env_name") = NULL;

/* Demangled: __kmpc_atomic_20 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_20(void) __asm__("__kmpc_atomic_20");
int fn___kmpc_atomic_20(void) {
    ALOGD("__kmpc_atomic_20() called");
    return 0;
}

/* Exported Object: typeinfo for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9type_info = NULL;

/* Demangled: __kmpc_atomic_fixed2_div_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_div_float8(void) __asm__("__kmpc_atomic_fixed2_div_float8");
int fn___kmpc_atomic_fixed2_div_float8(void) {
    ALOGD("__kmpc_atomic_fixed2_div_float8() called");
    return 0;
}

/* Demangled: altek::get_cpu_time_ms() */
extern "C" __attribute__((visibility("default"))) int _ZN5altek15get_cpu_time_msEv(void) {
    ALOGD("_ZN5altek15get_cpu_time_msEv() called");
    return 0;
}

/* Demangled: __kmp_save_internal_controls */
extern "C" __attribute__((visibility("default"))) int fn___kmp_save_internal_controls(void) __asm__("__kmp_save_internal_controls");
int fn___kmp_save_internal_controls(void) {
    ALOGD("__kmp_save_internal_controls() called");
    return 0;
}

/* Demangled: __kmp_get_hierarchy */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_hierarchy(void) __asm__("__kmp_get_hierarchy");
int fn___kmp_get_hierarchy(void) {
    ALOGD("__kmp_get_hierarchy() called");
    return 0;
}

/* Demangled: __kmp_set_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmp_set_num_threads(void) __asm__("__kmp_set_num_threads");
int fn___kmp_set_num_threads(void) {
    ALOGD("__kmp_set_num_threads() called");
    return 0;
}

/* Demangled: ldc_init_cpu_argv */
extern "C" __attribute__((visibility("default"))) int ldc_init_cpu_argv(void) {
    ALOGD("ldc_init_cpu_argv() called");
    return 0;
}

/* Demangled: std::__ndk1::__basic_string_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Exported Object: __kmp_thread_pool */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_thread_pool __asm__("__kmp_thread_pool") = NULL;

/* Demangled: __kmp_init_nested_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_nested_queuing_lock(void) __asm__("__kmp_init_nested_queuing_lock");
int fn___kmp_init_nested_queuing_lock(void) {
    ALOGD("__kmp_init_nested_queuing_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_free */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal11custom_freeE = NULL;

/* Demangled: __kmp_get_load_balance */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_load_balance(void) __asm__("__kmp_get_load_balance");
int fn___kmp_get_load_balance(void) {
    ALOGD("__kmp_get_load_balance() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::get_api_type() const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity12get_api_typeEv(void) {
    ALOGD("_ZNK17KMPNativeAffinity12get_api_typeEv() called");
    return 0;
}

/* Demangled: __kmpc_invoke_task_func */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_invoke_task_func(void) __asm__("__kmpc_invoke_task_func");
int fn___kmpc_invoke_task_func(void) {
    ALOGD("__kmpc_invoke_task_func() called");
    return 0;
}

/* Demangled: kmpc_calloc */
extern "C" __attribute__((visibility("default"))) int kmpc_calloc(void) {
    ALOGD("kmpc_calloc() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: __kmp_test_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_tas_lock(void) __asm__("__kmp_test_tas_lock");
int fn___kmp_test_tas_lock(void) {
    ALOGD("__kmp_test_tas_lock() called");
    return 0;
}

/* Exported Object: halide_reference_clock */
extern "C" __attribute__((visibility("default"))) void* halide_reference_clock = NULL;

/* Demangled: __kmpc_end_critical */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_critical(void) __asm__("__kmpc_end_critical");
int fn___kmpc_end_critical(void) {
    ALOGD("__kmpc_end_critical() called");
    return 0;
}

/* Exported Object: g_ViewRatioXY */
extern "C" __attribute__((visibility("default"))) void* g_ViewRatioXY = NULL;

/* Demangled: __kmp_internal_fork */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_fork(void) __asm__("__kmp_internal_fork");
int fn___kmp_internal_fork(void) {
    ALOGD("__kmp_internal_fork() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::signal_parking_control_unpark(void*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization29signal_parking_control_unparkEPvib(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization29signal_parking_control_unparkEPvib() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_andl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_andl(void) __asm__("__kmpc_atomic_fixed8_andl");
int fn___kmpc_atomic_fixed8_andl(void) {
    ALOGD("__kmpc_atomic_fixed8_andl() called");
    return 0;
}

/* Exported Object: __kmp_guided */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_guided __asm__("__kmp_guided") = NULL;

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueUnmapMemObject */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL23clEnqueueUnmapMemObjectE = NULL;

/* Demangled: std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Demangled: __kmp_str_fname_match */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_fname_match(void) __asm__("__kmp_str_fname_match");
int fn___kmp_str_fname_match(void) {
    ALOGD("__kmp_str_fname_match() called");
    return 0;
}

/* Demangled: alhLDC_FPC_Init */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Init(void) {
    ALOGD("alhLDC_FPC_Init() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex4lockEv() called");
    return 0;
}

/* Demangled: SVDSolve(double*, double*, double*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z8SVDSolvePdS_S_ii(void) {
    ALOGD("_Z8SVDSolvePdS_S_ii() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC1Ev(void) {
    ALOGD("_ZNSt10bad_typeidC1Ev() called");
    return 0;
}

/* Demangled: halide_error_extern_stage_failed */
extern "C" __attribute__((visibility("default"))) int halide_error_extern_stage_failed(void) {
    ALOGD("halide_error_extern_stage_failed() called");
    return 0;
}

/* Demangled: alhLDC_FPC_Run */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Run(void) {
    ALOGD("alhLDC_FPC_Run() called");
    return 0;
}

/* Demangled: __kmp_destroy_tas_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_tas_lock(void) __asm__("__kmp_destroy_tas_lock");
int fn___kmp_destroy_tas_lock(void) {
    ALOGD("__kmp_destroy_tas_lock() called");
    return 0;
}

/* Demangled: halide_malloc */
extern "C" __attribute__((visibility("default"))) int halide_malloc(void) {
    ALOGD("halide_malloc() called");
    return 0;
}

/* Demangled: halide_release_cl_context */
extern "C" __attribute__((visibility("default"))) int halide_release_cl_context(void) {
    ALOGD("halide_release_cl_context() called");
    return 0;
}

/* Demangled: __kmp_str_replace */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_replace(void) __asm__("__kmp_str_replace");
int fn___kmp_str_replace(void) {
    ALOGD("__kmp_str_replace() called");
    return 0;
}

/* Demangled: __kmpc_end_taskgroup */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_taskgroup(void) __asm__("__kmpc_end_taskgroup");
int fn___kmpc_end_taskgroup(void) {
    ALOGD("__kmpc_end_taskgroup() called");
    return 0;
}

/* Demangled: __kmp_reap_worker */
extern "C" __attribute__((visibility("default"))) int fn___kmp_reap_worker(void) __asm__("__kmp_reap_worker");
int fn___kmp_reap_worker(void) {
    ALOGD("__kmp_reap_worker() called");
    return 0;
}

/* Exported Object: std::__ndk1::allocator_arg */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk113allocator_argE = NULL;

/* Demangled: PackDataEncryption(unsigned char*, alDCAL_PACKDATA*, unsigned char*, int&) */
extern "C" __attribute__((visibility("default"))) int _Z18PackDataEncryptionPhP15alDCAL_PACKDATAS_Ri(void) {
    ALOGD("_Z18PackDataEncryptionPhP15alDCAL_PACKDATAS_Ri() called");
    return 0;
}

/* Demangled: operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZdlPv(void) {
    ALOGD("_ZdlPv() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD0Ev(void) {
    ALOGD("_ZNSt11range_errorD0Ev() called");
    return 0;
}

/* Demangled: halide_profiler_memory_free */
extern "C" __attribute__((visibility("default"))) int halide_profiler_memory_free(void) {
    ALOGD("halide_profiler_memory_free() called");
    return 0;
}

/* Demangled: kmpc_poolprint() */
extern "C" __attribute__((visibility("default"))) int _Z14kmpc_poolprintv(void) {
    ALOGD("_Z14kmpc_poolprintv() called");
    return 0;
}

/* Demangled: __kmp_affinity_uninitialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_uninitialize(void) __asm__("__kmp_affinity_uninitialize");
int fn___kmp_affinity_uninitialize(void) {
    ALOGD("__kmp_affinity_uninitialize() called");
    return 0;
}

/* Demangled: oaes_set_option(void*, unsigned short, void const*) */
extern "C" __attribute__((visibility("default"))) int _Z15oaes_set_optionPvtPKv(void) {
    ALOGD("_Z15oaes_set_optionPvtPKv() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD0Ev(void) {
    ALOGD("_ZNSt9bad_allocD0Ev() called");
    return 0;
}

/* Demangled: alKD_SelectCalibrationData_V3 */
extern "C" __attribute__((visibility("default"))) int alKD_SelectCalibrationData_V3(void) {
    ALOGD("alKD_SelectCalibrationData_V3() called");
    return 0;
}

/* Demangled: __kmp_change_library(int) */
extern "C" __attribute__((visibility("default"))) int _Z20__kmp_change_libraryi(void) {
    ALOGD("_Z20__kmp_change_libraryi() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_shl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_shl(void) __asm__("__kmpc_atomic_fixed8_shl");
int fn___kmpc_atomic_fixed8_shl(void) {
    ALOGD("__kmpc_atomic_fixed8_shl() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_andb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_andb(void) __asm__("__kmpc_atomic_fixed1_andb");
int fn___kmpc_atomic_fixed1_andb(void) {
    ALOGD("__kmpc_atomic_fixed1_andb() called");
    return 0;
}

/* Demangled: std::terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt9terminatev(void) {
    ALOGD("_ZSt9terminatev() called");
    return 0;
}

/* Demangled: operator new[](unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znam(void) {
    ALOGD("_Znam() called");
    return 0;
}

/* Exported Object: __emutls_v.__kmp_gtid */
extern "C" __attribute__((visibility("default"))) void* obj___emutls_v___kmp_gtid __asm__("__emutls_v.__kmp_gtid") = NULL;

/* Demangled: __cxa_deleted_virtual */
extern "C" __attribute__((visibility("default"))) int fn___cxa_deleted_virtual(void) __asm__("__cxa_deleted_virtual");
int fn___cxa_deleted_virtual(void) {
    ALOGD("__cxa_deleted_virtual() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueWriteBufferRect */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL24clEnqueueWriteBufferRectE = NULL;

/* Demangled: __kmpc_atomic_fixed1_div_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_div_float8(void) __asm__("__kmpc_atomic_fixed1_div_float8");
int fn___kmpc_atomic_fixed1_div_float8(void) {
    ALOGD("__kmpc_atomic_fixed1_div_float8() called");
    return 0;
}

/* Demangled: alKD_SelectCalibrationData */
extern "C" __attribute__((visibility("default"))) int alKD_SelectCalibrationData(void) {
    ALOGD("alKD_SelectCalibrationData() called");
    return 0;
}

/* Exported Object: __kmp_barrier_branch_bit_env_name */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_branch_bit_env_name __asm__("__kmp_barrier_branch_bit_env_name") = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateCommandQueue */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL20clCreateCommandQueueE = NULL;

/* Demangled: halide_default_do_task */
extern "C" __attribute__((visibility("default"))) int halide_default_do_task(void) {
    ALOGD("halide_default_do_task() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD2Ev() called");
    return 0;
}

/* Demangled: halide_memoization_cache_release */
extern "C" __attribute__((visibility("default"))) int halide_memoization_cache_release(void) {
    ALOGD("halide_memoization_cache_release() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::copy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4copyEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4copyEv() called");
    return 0;
}

/* Demangled: std::rethrow_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZSt17rethrow_exceptionSt13exception_ptr(void) {
    ALOGD("_ZSt17rethrow_exceptionSt13exception_ptr() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::is_set(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK17KMPNativeAffinity4Mask6is_setEi(void) {
    ALOGD("_ZNK17KMPNativeAffinity4Mask6is_setEi() called");
    return 0;
}

/* Demangled: halide_set_custom_free */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_free(void) {
    ALOGD("halide_set_custom_free() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float4_mul_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_mul_float8(void) __asm__("__kmpc_atomic_float4_mul_float8");
int fn___kmpc_atomic_float4_mul_float8(void) {
    ALOGD("__kmpc_atomic_float4_mul_float8() called");
    return 0;
}

/* Demangled: kmp_flag_64::wait(kmp_info*, int) */
extern "C" __attribute__((visibility("default"))) int _ZN11kmp_flag_644waitEP8kmp_infoi(void) {
    ALOGD("_ZN11kmp_flag_644waitEP8kmp_infoi() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::wait_parking_control_validate(void*, Halide::Runtime::Internal::Synchronization::validate_action&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization29wait_parking_control_validateEPvRNS2_15validate_actionE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization29wait_parking_control_validateEPvRNS2_15validate_actionE() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_shr(void) __asm__("__kmpc_atomic_fixed8_shr");
int fn___kmpc_atomic_fixed8_shr(void) {
    ALOGD("__kmpc_atomic_fixed8_shr() called");
    return 0;
}

/* Demangled: alKD_SetProjectID */
extern "C" __attribute__((visibility("default"))) int alKD_SetProjectID(void) {
    ALOGD("alKD_SetProjectID() called");
    return 0;
}

/* Demangled: ldc8_chroma_gpu_metadata */
extern "C" __attribute__((visibility("default"))) int ldc8_chroma_gpu_metadata(void) {
    ALOGD("ldc8_chroma_gpu_metadata() called");
    return 0;
}

/* Demangled: __kmp_str_buf_clear */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_clear(void) __asm__("__kmp_str_buf_clear");
int fn___kmp_str_buf_clear(void) {
    ALOGD("__kmp_str_buf_clear() called");
    return 0;
}

/* Demangled: __kmp_task_team_wait */
extern "C" __attribute__((visibility("default"))) int fn___kmp_task_team_wait(void) __asm__("__kmp_task_team_wait");
int fn___kmp_task_team_wait(void) {
    ALOGD("__kmp_task_team_wait() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::worker_thread(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal13worker_threadEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal13worker_threadEPv() called");
    return 0;
}

/* Exported Object: __kmp_taskloop_min_tasks */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_taskloop_min_tasks __asm__("__kmp_taskloop_min_tasks") = NULL;

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD0Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112future_errorE = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_start__ __asm__("__bss_start__") = NULL;

/* Demangled: halide_set_error_handler */
extern "C" __attribute__((visibility("default"))) int halide_set_error_handler(void) {
    ALOGD("halide_set_error_handler() called");
    return 0;
}

/* Demangled: halide_copy_to_host_legacy */
extern "C" __attribute__((visibility("default"))) int halide_copy_to_host_legacy(void) {
    ALOGD("halide_copy_to_host_legacy() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info(void) {
    ALOGD("_ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: __cxa_guard_abort */
extern "C" __attribute__((visibility("default"))) int fn___cxa_guard_abort(void) __asm__("__cxa_guard_abort");
int fn___cxa_guard_abort(void) {
    ALOGD("__cxa_guard_abort() called");
    return 0;
}

/* Demangled: __kmpc_push_num_teams */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_push_num_teams(void) __asm__("__kmpc_push_num_teams");
int fn___kmpc_push_num_teams(void) {
    ALOGD("__kmpc_push_num_teams() called");
    return 0;
}

/* Demangled: __ompt_lw_taskteam_link(ompt_lw_taskteam_s*, kmp_info*, int) */
extern "C" __attribute__((visibility("default"))) int _Z23__ompt_lw_taskteam_linkP18ompt_lw_taskteam_sP8kmp_infoi(void) {
    ALOGD("_Z23__ompt_lw_taskteam_linkP18ompt_lw_taskteam_sP8kmp_infoi() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float4_div_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_div_float8(void) __asm__("__kmpc_atomic_float4_div_float8");
int fn___kmpc_atomic_float4_div_float8(void) {
    ALOGD("__kmpc_atomic_float4_div_float8() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_num_locks_in_block */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_num_locks_in_block __asm__("__kmp_num_locks_in_block") = NULL;

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC1Ev() called");
    return 0;
}

/* Demangled: alhLDC_Init */
extern "C" __attribute__((visibility("default"))) int alhLDC_Init(void) {
    ALOGD("alhLDC_Init() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex8try_lockEv() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: PERMISSION_DATA */
extern "C" __attribute__((visibility("default"))) void* PERMISSION_DATA = NULL;

/* Exported Object: __kmp_version_alt_comp */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_alt_comp __asm__("__kmp_version_alt_comp") = NULL;

/* Exported Object: Halide::Runtime::Internal::least_recently_used */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal19least_recently_usedE = NULL;

/* Exported Object: __kmp_indirect_test */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_test __asm__("__kmp_indirect_test") = NULL;

/* Exported Object: Halide::Runtime::Internal::halide_trace_file_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal22halide_trace_file_lockE = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::broadcast_parking_control_requeue_callback(void*, Halide::Runtime::Internal::Synchronization::validate_action const&, bool, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization42broadcast_parking_control_requeue_callbackEPvRKNS2_15validate_actionEbb(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization42broadcast_parking_control_requeue_callbackEPvRKNS2_15validate_actionEbb() called");
    return 0;
}

/* Demangled: halide_cond_broadcast */
extern "C" __attribute__((visibility("default"))) int halide_cond_broadcast(void) {
    ALOGD("halide_cond_broadcast() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: alPackDataUpdate_IMGScale_Dual_V3(alDCAL_PACKDATA_V3*, int, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z33alPackDataUpdate_IMGScale_Dual_V3P18alDCAL_PACKDATA_V3iiii(void) {
    ALOGD("_Z33alPackDataUpdate_IMGScale_Dual_V3P18alDCAL_PACKDATA_V3iiii() called");
    return 0;
}

/* Demangled: halide_error_param_too_large_i64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_large_i64(void) {
    ALOGD("halide_error_param_too_large_i64() called");
    return 0;
}

/* Demangled: overlay_distortion_curve(double*, double*, double*, float, double*) */
extern "C" __attribute__((visibility("default"))) int _Z24overlay_distortion_curvePdS_S_fS_(void) {
    ALOGD("_Z24overlay_distortion_curvePdS_S_fS_() called");
    return 0;
}

/* Exported Object: __kmp_yield_next */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_yield_next __asm__("__kmp_yield_next") = NULL;

/* Demangled: __cxa_begin_catch */
extern "C" __attribute__((visibility("default"))) int fn___cxa_begin_catch(void) __asm__("__cxa_begin_catch");
int fn___cxa_begin_catch(void) {
    ALOGD("__cxa_begin_catch() called");
    return 0;
}

/* Demangled: __kmp_taskloop_recur(ident*, int, kmp_task*, unsigned long long*, unsigned long long*, long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, void*) */
extern "C" __attribute__((visibility("default"))) int _Z20__kmp_taskloop_recurP5identiP8kmp_taskPyS3_xyyyyyyPv(void) {
    ALOGD("_Z20__kmp_taskloop_recurP5identiP8kmp_taskPyS3_xyyyyyyPv() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::parking_control_unpark(void*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization22parking_control_unparkEPvib(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization22parking_control_unparkEPvib() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD2Ev(void) {
    ALOGD("_ZNSt14overflow_errorD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_nested_proc_bind */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_nested_proc_bind __asm__("__kmp_nested_proc_bind") = NULL;

/* Demangled: LUDSolve(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z8LUDSolvePdS_S_i(void) {
    ALOGD("_Z8LUDSolvePdS_S_i() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_min(void) __asm__("__kmpc_atomic_fixed1_min");
int fn___kmpc_atomic_fixed1_min(void) {
    ALOGD("__kmpc_atomic_fixed1_min() called");
    return 0;
}

/* Exported Object: __kmp_debug_buf */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_debug_buf __asm__("__kmp_debug_buf") = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::lock_bucket(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization11lock_bucketEy(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization11lock_bucketEy() called");
    return 0;
}

/* Demangled: __kmp_env_print_2() */
extern "C" __attribute__((visibility("default"))) int _Z17__kmp_env_print_2v(void) {
    ALOGD("_Z17__kmp_env_print_2v() called");
    return 0;
}

/* Demangled: halide_debug_to_file */
extern "C" __attribute__((visibility("default"))) int halide_debug_to_file(void) {
    ALOGD("halide_debug_to_file() called");
    return 0;
}

/* Demangled: std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(void) {
    ALOGD("_ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE() called");
    return 0;
}

/* Demangled: halide_default_device_wrap_native */
extern "C" __attribute__((visibility("default"))) int halide_default_device_wrap_native(void) {
    ALOGD("halide_default_device_wrap_native() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: alKD_CaliDataToPackData_WithOTP_ENC */
extern "C" __attribute__((visibility("default"))) int alKD_CaliDataToPackData_WithOTP_ENC(void) {
    ALOGD("alKD_CaliDataToPackData_WithOTP_ENC() called");
    return 0;
}

/* Exported Object: __kmp_affinity_dups */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_dups __asm__("__kmp_affinity_dups") = NULL;

/* Demangled: operator delete(void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvmSt11align_val_t(void) {
    ALOGD("_ZdlPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: __kmp_push_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmp_push_num_threads(void) __asm__("__kmp_push_num_threads");
int fn___kmp_push_num_threads(void) {
    ALOGD("__kmp_push_num_threads() called");
    return 0;
}

/* Demangled: __kmp_clear_system_time */
extern "C" __attribute__((visibility("default"))) int fn___kmp_clear_system_time(void) __asm__("__kmp_clear_system_time");
int fn___kmp_clear_system_time(void) {
    ALOGD("__kmp_clear_system_time() called");
    return 0;
}

/* Demangled: __kmp_suspend_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_suspend_initialize(void) __asm__("__kmp_suspend_initialize");
int fn___kmp_suspend_initialize(void) {
    ALOGD("__kmp_suspend_initialize() called");
    return 0;
}

/* Demangled: LDC_CropPincushion2_center_StepTBLR(double*, double*, tLDC_STRUCT*, double*, double*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z35LDC_CropPincushion2_center_StepTBLRPdS_P11tLDC_STRUCTS_S_h(void) {
    ALOGD("_Z35LDC_CropPincushion2_center_StepTBLRPdS_P11tLDC_STRUCTS_S_h() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_sub(void) __asm__("__kmpc_atomic_fixed4_sub");
int fn___kmpc_atomic_fixed4_sub(void) {
    ALOGD("__kmpc_atomic_fixed4_sub() called");
    return 0;
}

/* Demangled: halide_buffer_to_string */
extern "C" __attribute__((visibility("default"))) int halide_buffer_to_string(void) {
    ALOGD("halide_buffer_to_string() called");
    return 0;
}

/* Demangled: __kmp_str_eqf */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_eqf(void) __asm__("__kmp_str_eqf");
int fn___kmp_str_eqf(void) {
    ALOGD("__kmp_str_eqf() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clEnqueueReadBufferRect */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL23clEnqueueReadBufferRectE = NULL;

/* Demangled: __ompt_get_parallel_info_internal(int, ompt_data_t**, int*) */
extern "C" __attribute__((visibility("default"))) int _Z33__ompt_get_parallel_info_internaliPP11ompt_data_tPi(void) {
    ALOGD("_Z33__ompt_get_parallel_info_internaliPP11ompt_data_tPi() called");
    return 0;
}

/* Demangled: kmpc_get_poolmode() */
extern "C" __attribute__((visibility("default"))) int _Z17kmpc_get_poolmodev(void) {
    ALOGD("_Z17kmpc_get_poolmodev() called");
    return 0;
}

/* Demangled: __kmp_init_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_ticket_lock(void) __asm__("__kmp_init_ticket_lock");
int fn___kmp_init_ticket_lock(void) {
    ALOGD("__kmp_init_ticket_lock() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC1Ev(void) {
    ALOGD("_ZNSt9bad_allocC1Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKS_() called");
    return 0;
}

/* Demangled: Matrix_svdcmp(double*, int, int, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z13Matrix_svdcmpPdiiS_S_(void) {
    ALOGD("_Z13Matrix_svdcmpPdiiS_S_() called");
    return 0;
}

/* Demangled: halide_opencl_copy_to_device */
extern "C" __attribute__((visibility("default"))) int halide_opencl_copy_to_device(void) {
    ALOGD("halide_opencl_copy_to_device() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: __kmp_yield_on_count */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_yield_on_count __asm__("__kmp_yield_on_count") = NULL;

/* Demangled: GC_calculate_Baseline_via_Rt(double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z28GC_calculate_Baseline_via_RtPdS_S_S_S_(void) {
    ALOGD("_Z28GC_calculate_Baseline_via_RtPdS_S_S_S_() called");
    return 0;
}

/* Demangled: __kmp_task_team_sync */
extern "C" __attribute__((visibility("default"))) int fn___kmp_task_team_sync(void) __asm__("__kmp_task_team_sync");
int fn___kmp_task_team_sync(void) {
    ALOGD("__kmp_task_team_sync() called");
    return 0;
}

/* Exported Object: __kmp_env_checks */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_env_checks __asm__("__kmp_env_checks") = NULL;

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD0Ev(void) {
    ALOGD("_ZNSt13runtime_errorD0Ev() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<void, 4>::decref_dev() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIvLi4EE10decref_devEv(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIvLi4EE10decref_devEv() called");
    return 0;
}

/* Demangled: halide_error_specialize_fail */
extern "C" __attribute__((visibility("default"))) int halide_error_specialize_fail(void) {
    ALOGD("halide_error_specialize_fail() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetDeviceInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL15clGetDeviceInfoE = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: alPackDataUpdate_HLDCInfo_V3_ModeSelect(tH_RectLDCPara*, tH_RectLDCPara*, tH_RectLDCPara*, alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, short, short, unsigned short*, unsigned short*, double) */
extern "C" __attribute__((visibility("default"))) int _Z39alPackDataUpdate_HLDCInfo_V3_ModeSelectP14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_d(void) {
    ALOGD("_Z39alPackDataUpdate_HLDCInfo_V3_ModeSelectP14tH_RectLDCParaS0_S0_P18alDCAL_PACKDATA_V3ttttttssPtS3_d() called");
    return 0;
}

/* Demangled: __kmpc_reduce_nowait */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_reduce_nowait(void) __asm__("__kmpc_reduce_nowait");
int fn___kmpc_reduce_nowait(void) {
    ALOGD("__kmpc_reduce_nowait() called");
    return 0;
}

/* Demangled: __cxa_free_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_free_exception(void) __asm__("__cxa_free_exception");
int fn___cxa_free_exception(void) {
    ALOGD("__cxa_free_exception() called");
    return 0;
}

/* Demangled: __kmp_read_from_file */
extern "C" __attribute__((visibility("default"))) int fn___kmp_read_from_file(void) __asm__("__kmp_read_from_file");
int fn___kmp_read_from_file(void) {
    ALOGD("__kmp_read_from_file() called");
    return 0;
}

/* Exported Object: __kmp_indirect_destroy */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_indirect_destroy __asm__("__kmp_indirect_destroy") = NULL;

/* Demangled: halide_copy_to_host */
extern "C" __attribute__((visibility("default"))) int halide_copy_to_host(void) {
    ALOGD("halide_copy_to_host() called");
    return 0;
}

/* Demangled: alKD_GetEncLDCPackDataSize */
extern "C" __attribute__((visibility("default"))) int alKD_GetEncLDCPackDataSize(void) {
    ALOGD("alKD_GetEncLDCPackDataSize() called");
    return 0;
}

/* Demangled: std::__ndk1::system_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115system_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115system_categoryEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk119__shared_weak_countE = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetContextInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL16clGetContextInfoE = NULL;

/* Exported Object: __kmp_version_copyright */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_copyright __asm__("__kmp_version_copyright") = NULL;

/* Demangled: alKD_GetPackData3in1 */
extern "C" __attribute__((visibility("default"))) int alKD_GetPackData3in1(void) {
    ALOGD("alKD_GetPackData3in1() called");
    return 0;
}

/* Demangled: __kmp_env_set */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_set(void) __asm__("__kmp_env_set");
int fn___kmp_env_set(void) {
    ALOGD("__kmp_env_set() called");
    return 0;
}

/* Demangled: __kmp_internal_join */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_join(void) __asm__("__kmp_internal_join");
int fn___kmp_internal_join(void) {
    ALOGD("__kmp_internal_join() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: __cxa_decrement_exception_refcount */
extern "C" __attribute__((visibility("default"))) int fn___cxa_decrement_exception_refcount(void) __asm__("__cxa_decrement_exception_refcount");
int fn___cxa_decrement_exception_refcount(void) {
    ALOGD("__cxa_decrement_exception_refcount() called");
    return 0;
}

/* Demangled: __kmpc_doacross_fini */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_doacross_fini(void) __asm__("__kmpc_doacross_fini");
int fn___kmpc_doacross_fini(void) {
    ALOGD("__kmpc_doacross_fini() called");
    return 0;
}

/* Demangled: __kmp_set_max_active_levels */
extern "C" __attribute__((visibility("default"))) int fn___kmp_set_max_active_levels(void) __asm__("__kmp_set_max_active_levels");
int fn___kmp_set_max_active_levels(void) {
    ALOGD("__kmp_set_max_active_levels() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_mul_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_mul_float8(void) __asm__("__kmpc_atomic_fixed1_mul_float8");
int fn___kmpc_atomic_fixed1_mul_float8(void) {
    ALOGD("__kmpc_atomic_fixed1_mul_float8() called");
    return 0;
}

/* Demangled: std::__ndk1::__sp_mut::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut4lockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut4lockEv() called");
    return 0;
}

/* Demangled: __kmp_disable */
extern "C" __attribute__((visibility("default"))) int fn___kmp_disable(void) __asm__("__kmp_disable");
int fn___kmp_disable(void) {
    ALOGD("__kmp_disable() called");
    return 0;
}

/* Exported Object: __kmp_ticks_per_msec */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_ticks_per_msec __asm__("__kmp_ticks_per_msec") = NULL;

/* Exported Object: __kmp_need_register_atfork */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_need_register_atfork __asm__("__kmp_need_register_atfork") = NULL;

/* Demangled: halide_error_constraint_violated */
extern "C" __attribute__((visibility("default"))) int halide_error_constraint_violated(void) {
    ALOGD("halide_error_constraint_violated() called");
    return 0;
}

/* Demangled: kmpc_unset_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int kmpc_unset_affinity_mask_proc(void) {
    ALOGD("kmpc_unset_affinity_mask_proc() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8_add(void) __asm__("__kmpc_atomic_fixed8_add");
int fn___kmpc_atomic_fixed8_add(void) {
    ALOGD("__kmpc_atomic_fixed8_add() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_16r */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_16r __asm__("__kmp_atomic_lock_16r") = NULL;

/* Demangled: altek::AdaptiveSharpness_MainFuncLite_OPT(unsigned char*, unsigned char*, unsigned int, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZN5altek34AdaptiveSharpness_MainFuncLite_OPTEPhS0_jj(void) {
    ALOGD("_ZN5altek34AdaptiveSharpness_MainFuncLite_OPTEPhS0_jj() called");
    return 0;
}

/* Exported Object: __kmp_hws_socket */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_socket __asm__("__kmp_hws_socket") = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::device_type_lock */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL16device_type_lockE = NULL;

/* Demangled: Halide::Runtime::Internal::CacheEntry::destroy() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal10CacheEntry7destroyEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal10CacheEntry7destroyEv() called");
    return 0;
}

/* Demangled: do_multidimensional_copy */
extern "C" __attribute__((visibility("default"))) int do_multidimensional_copy(void) {
    ALOGD("do_multidimensional_copy() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clCreateContextFromType */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL23clCreateContextFromTypeE = NULL;

/* Demangled: SingularValueDecomposition(double**, int, int, double**, double*, double**) */
extern "C" __attribute__((visibility("default"))) int _Z26SingularValueDecompositionPPdiiS0_S_S0_(void) {
    ALOGD("_Z26SingularValueDecompositionPPdiiS0_S_S0_() called");
    return 0;
}

/* Demangled: __kmp_destroy_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_ticket_lock(void) __asm__("__kmp_destroy_ticket_lock");
int fn___kmp_destroy_ticket_lock(void) {
    ALOGD("__kmp_destroy_ticket_lock() called");
    return 0;
}

/* Demangled: __kmp_warn */
extern "C" __attribute__((visibility("default"))) int fn___kmp_warn(void) __asm__("__kmp_warn");
int fn___kmp_warn(void) {
    ALOGD("__kmp_warn() called");
    return 0;
}

/* Exported Object: __kmp_barrier_release_pattern */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_release_pattern __asm__("__kmp_barrier_release_pattern") = NULL;

/* Demangled: __dynamic_cast */
extern "C" __attribute__((visibility("default"))) int fn___dynamic_cast(void) __asm__("__dynamic_cast");
int fn___dynamic_cast(void) {
    ALOGD("__dynamic_cast() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_div(void) __asm__("__kmpc_atomic_fixed2_div");
int fn___kmpc_atomic_fixed2_div(void) {
    ALOGD("__kmpc_atomic_fixed2_div() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD2Ev(void) {
    ALOGD("_ZNSt12domain_errorD2Ev() called");
    return 0;
}

/* Demangled: halide_set_custom_can_use_target_features */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_can_use_target_features(void) {
    ALOGD("halide_set_custom_can_use_target_features() called");
    return 0;
}

/* Demangled: __kmp_finish_implicit_task */
extern "C" __attribute__((visibility("default"))) int fn___kmp_finish_implicit_task(void) __asm__("__kmp_finish_implicit_task");
int fn___kmp_finish_implicit_task(void) {
    ALOGD("__kmp_finish_implicit_task() called");
    return 0;
}

/* Demangled: __kmp_serial_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_serial_initialize(void) __asm__("__kmp_serial_initialize");
int fn___kmp_serial_initialize(void) {
    ALOGD("__kmp_serial_initialize() called");
    return 0;
}

/* Demangled: __kmpc_get_target_offload */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_get_target_offload(void) __asm__("__kmpc_get_target_offload");
int fn___kmpc_get_target_offload(void) {
    ALOGD("__kmpc_get_target_offload() called");
    return 0;
}

/* Demangled: halide_opencl_copy_to_host */
extern "C" __attribute__((visibility("default"))) int halide_opencl_copy_to_host(void) {
    ALOGD("halide_opencl_copy_to_host() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1u_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1u_shr(void) __asm__("__kmpc_atomic_fixed1u_shr");
int fn___kmpc_atomic_fixed1u_shr(void) {
    ALOGD("__kmpc_atomic_fixed1u_shr() called");
    return 0;
}

/* Demangled: __kmp_free_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_thread(void) __asm__("__kmp_free_thread");
int fn___kmp_free_thread(void) {
    ALOGD("__kmp_free_thread() called");
    return 0;
}

/* Exported Object: g_pcLDC_CurveFile */
extern "C" __attribute__((visibility("default"))) void* g_pcLDC_CurveFile = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD0Ev(void) {
    ALOGD("_ZNSt8bad_castD0Ev() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clRetainContext */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL15clRetainContextE = NULL;

/* Demangled: __kmpc_atomic_cmplx4_sub */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_sub(void) __asm__("__kmpc_atomic_cmplx4_sub");
int fn___kmpc_atomic_cmplx4_sub(void) {
    ALOGD("__kmpc_atomic_cmplx4_sub() called");
    return 0;
}

/* Demangled: __kmp_get_team_size */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_team_size(void) __asm__("__kmp_get_team_size");
int fn___kmp_get_team_size(void) {
    ALOGD("__kmp_get_team_size() called");
    return 0;
}

/* Demangled: __kmp_str_split */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_split(void) __asm__("__kmp_str_split");
int fn___kmp_str_split(void) {
    ALOGD("__kmp_str_split() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnwmSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __kmp_aux_set_affinity_mask_proc */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_set_affinity_mask_proc(void) __asm__("__kmp_aux_set_affinity_mask_proc");
int fn___kmp_aux_set_affinity_mask_proc(void) {
    ALOGD("__kmp_aux_set_affinity_mask_proc() called");
    return 0;
}

/* Demangled: oaes_alloc() */
extern "C" __attribute__((visibility("default"))) int _Z10oaes_allocv(void) {
    ALOGD("_Z10oaes_allocv() called");
    return 0;
}

/* Demangled: halide_error_failed_to_upgrade_buffer_t */
extern "C" __attribute__((visibility("default"))) int halide_error_failed_to_upgrade_buffer_t(void) {
    ALOGD("halide_error_failed_to_upgrade_buffer_t() called");
    return 0;
}

/* Demangled: GC_compute_F_from_KRT(double*, double*, double*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z21GC_compute_F_from_KRTPdS_S_S_S_S_S_(void) {
    ALOGD("_Z21GC_compute_F_from_KRTPdS_S_S_S_S_S_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD0Ev() called");
    return 0;
}

/* Demangled: __kmp_init_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_init_futex_lock(void) __asm__("__kmp_init_futex_lock");
int fn___kmp_init_futex_lock(void) {
    ALOGD("__kmp_init_futex_lock() called");
    return 0;
}

/* Demangled: alhLDC_FPC_Deinit */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Deinit(void) {
    ALOGD("alhLDC_FPC_Deinit() called");
    return 0;
}

/* Exported Object: __kmp_barrier_release_bb_dflt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_release_bb_dflt __asm__("__kmp_barrier_release_bb_dflt") = NULL;

/* Demangled: halide_trace_helper */
extern "C" __attribute__((visibility("default"))) int halide_trace_helper(void) {
    ALOGD("halide_trace_helper() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_andl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_andl(void) __asm__("__kmpc_atomic_fixed1_andl");
int fn___kmpc_atomic_fixed1_andl(void) {
    ALOGD("__kmpc_atomic_fixed1_andl() called");
    return 0;
}

/* Demangled: kmp_threadprivate_insert */
extern "C" __attribute__((visibility("default"))) int kmp_threadprivate_insert(void) {
    ALOGD("kmp_threadprivate_insert() called");
    return 0;
}

/* Demangled: std::set_unexpected(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt14set_unexpectedPFvvE(void) {
    ALOGD("_ZSt14set_unexpectedPFvvE() called");
    return 0;
}

/* Demangled: GC_ScaleImagePoints(double*, double*, int, double) */
extern "C" __attribute__((visibility("default"))) int _Z19GC_ScaleImagePointsPdS_id(void) {
    ALOGD("_Z19GC_ScaleImagePointsPdS_id() called");
    return 0;
}

/* Demangled: __kmp_join_call */
extern "C" __attribute__((visibility("default"))) int fn___kmp_join_call(void) __asm__("__kmp_join_call");
int fn___kmp_join_call(void) {
    ALOGD("__kmp_join_call() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::buffer_has_shape(halide_buffer_t const*, halide_dimension_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal16buffer_has_shapeEPK15halide_buffer_tPK18halide_dimension_t(void) {
    ALOGD("_ZN6Halide7Runtime8Internal16buffer_has_shapeEPK15halide_buffer_tPK18halide_dimension_t() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_andb */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_andb(void) __asm__("__kmpc_atomic_fixed4_andb");
int fn___kmpc_atomic_fixed4_andb(void) {
    ALOGD("__kmpc_atomic_fixed4_andb() called");
    return 0;
}

/* Exported Object: __kmp_version_minor */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_minor __asm__("__kmp_version_minor") = NULL;

/* Exported Object: __kmp_atomic_lock_16c */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_16c __asm__("__kmp_atomic_lock_16c") = NULL;

/* Demangled: permission_get_local_time_by_integer() */
extern "C" __attribute__((visibility("default"))) int _Z36permission_get_local_time_by_integerv(void) {
    ALOGD("_Z36permission_get_local_time_by_integerv() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::state_list */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL10state_listE = NULL;

/* Exported Object: __kmp_task_stealing_constraint */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_task_stealing_constraint __asm__("__kmp_task_stealing_constraint") = NULL;

/* Exported Object: vtable for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt10unexpectedv(void) {
    ALOGD("_ZSt10unexpectedv() called");
    return 0;
}

/* Exported Object: __cxa_unexpected_handler */
extern "C" __attribute__((visibility("default"))) void* obj___cxa_unexpected_handler __asm__("__cxa_unexpected_handler") = NULL;

/* Demangled: halide_shutdown_thread_pool */
extern "C" __attribute__((visibility("default"))) int halide_shutdown_thread_pool(void) {
    ALOGD("halide_shutdown_thread_pool() called");
    return 0;
}

/* Exported Object: __kmp_version_build_time */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_version_build_time __asm__("__kmp_version_build_time") = NULL;

/* Demangled: Halide::Runtime::Buffer<long, 4>::Buffer(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIlLi4EEC2Ei(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIlLi4EEC2Ei() called");
    return 0;
}

/* Exported Object: __kmp_hws_proc */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_hws_proc __asm__("__kmp_hws_proc") = NULL;

/* Demangled: LDC_WOIFourCorners_after_LDC(double*, double*, tLDC_STRUCT*, unsigned short, unsigned short, unsigned short*, double*, double*, unsigned char, bool) */
extern "C" __attribute__((visibility("default"))) int _Z28LDC_WOIFourCorners_after_LDCPdS_P11tLDC_STRUCTttPtS_S_hb(void) {
    ALOGD("_Z28LDC_WOIFourCorners_after_LDCPdS_P11tLDC_STRUCTttPtS_S_hb() called");
    return 0;
}

/* Demangled: __kmp_env_print() */
extern "C" __attribute__((visibility("default"))) int _Z15__kmp_env_printv(void) {
    ALOGD("_Z15__kmp_env_printv() called");
    return 0;
}

/* Demangled: KMPNativeAffinity::Mask::clear(int) */
extern "C" __attribute__((visibility("default"))) int _ZN17KMPNativeAffinity4Mask5clearEi(void) {
    ALOGD("_ZN17KMPNativeAffinity4Mask5clearEi() called");
    return 0;
}

/* Demangled: std::__ndk1::declare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119declare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk119declare_no_pointersEPcm() called");
    return 0;
}

/* Demangled: __kmpc_atomic_cmplx4_mul_cmplx8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_mul_cmplx8(void) __asm__("__kmpc_atomic_cmplx4_mul_cmplx8");
int fn___kmpc_atomic_cmplx4_mul_cmplx8(void) {
    ALOGD("__kmpc_atomic_cmplx4_mul_cmplx8() called");
    return 0;
}

/* Exported Object: __kmp_tp_capacity */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_tp_capacity __asm__("__kmp_tp_capacity") = NULL;

/* Demangled: __ompt_get_thread_data_internal() */
extern "C" __attribute__((visibility("default"))) int _Z31__ompt_get_thread_data_internalv(void) {
    ALOGD("_Z31__ompt_get_thread_data_internalv() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_mul(void) __asm__("__kmpc_atomic_fixed1_mul");
int fn___kmpc_atomic_fixed1_mul(void) {
    ALOGD("__kmpc_atomic_fixed1_mul() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9set_valueEv() called");
    return 0;
}

/* Demangled: GC_DisparityToDepth_Baseline(double*, double, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z28GC_DisparityToDepth_BaselinePdddd(void) {
    ALOGD("_Z28GC_DisparityToDepth_BaselinePdddd() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::halide_gpu_device_initialized */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal29halide_gpu_device_initializedE = NULL;

/* Demangled: GC_decompose_ProjectionMatrix(double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z29GC_decompose_ProjectionMatrixPdS_S_S_(void) {
    ALOGD("_Z29GC_decompose_ProjectionMatrixPdS_S_S_() called");
    return 0;
}

/* Demangled: ___kmp_allocate */
extern "C" __attribute__((visibility("default"))) int fn____kmp_allocate(void) __asm__("___kmp_allocate");
int fn____kmp_allocate(void) {
    ALOGD("___kmp_allocate() called");
    return 0;
}

/* Demangled: __kmp_unregister_root_current_thread(int) */
extern "C" __attribute__((visibility("default"))) int _Z36__kmp_unregister_root_current_threadi(void) {
    ALOGD("_Z36__kmp_unregister_root_current_threadi() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk15mutexD1Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13runtime_error4whatEv(void) {
    ALOGD("_ZNKSt13runtime_error4whatEv() called");
    return 0;
}

/* Demangled: alGLDC_PV_DesignedErrCurveGen(double*, double*, double*, int, double, double) */
extern "C" __attribute__((visibility("default"))) int _Z29alGLDC_PV_DesignedErrCurveGenPdS_S_idd(void) {
    ALOGD("_Z29alGLDC_PV_DesignedErrCurveGenPdS_S_idd() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDi = NULL;

/* Exported Object: __kmp_need_register_atfork_specified */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_need_register_atfork_specified __asm__("__kmp_need_register_atfork_specified") = NULL;

/* Exported Object: g_log_level */
extern "C" __attribute__((visibility("default"))) void* g_log_level = NULL;

/* Demangled: Halide::Runtime::Internal::copy_memory(Halide::Runtime::Internal::device_copy const&, void*) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal11copy_memoryERKNS1_11device_copyEPv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal11copy_memoryERKNS1_11device_copyEPv() called");
    return 0;
}

/* Exported Object: typeinfo name for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDh = NULL;

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD1Ev(void) {
    ALOGD("_ZNSt15underflow_errorD1Ev() called");
    return 0;
}

/* Demangled: __kmpc_dist_dispatch_init_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dist_dispatch_init_8(void) __asm__("__kmpc_dist_dispatch_init_8");
int fn___kmpc_dist_dispatch_init_8(void) {
    ALOGD("__kmpc_dist_dispatch_init_8() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Demangled: __kmp_yield */
extern "C" __attribute__((visibility("default"))) int fn___kmp_yield(void) __asm__("__kmp_yield");
int fn___kmp_yield(void) {
    ALOGD("__kmp_yield() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16bad_array_length = NULL;

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD0Ev(void) {
    ALOGD("_ZNSt11logic_errorD0Ev() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD2Ev(void) {
    ALOGD("_ZNSt9exceptionD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_affinity_gran */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_gran __asm__("__kmp_affinity_gran") = NULL;

/* Exported Object: __kmp_gtid_threadprivate_key */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_gtid_threadprivate_key __asm__("__kmp_gtid_threadprivate_key") = NULL;

/* Exported Object: __kmp_task_counter */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_task_counter __asm__("__kmp_task_counter") = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: __kmp_balanced_affinity */
extern "C" __attribute__((visibility("default"))) int fn___kmp_balanced_affinity(void) __asm__("__kmp_balanced_affinity");
int fn___kmp_balanced_affinity(void) {
    ALOGD("__kmp_balanced_affinity() called");
    return 0;
}

/* Demangled: halide_opencl_device_release */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_release(void) {
    ALOGD("halide_opencl_device_release() called");
    return 0;
}

/* Demangled: halide_profiler_shutdown */
extern "C" __attribute__((visibility("default"))) int halide_profiler_shutdown(void) {
    ALOGD("halide_profiler_shutdown() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE() called");
    return 0;
}

/* Demangled: __kmp_create_worker */
extern "C" __attribute__((visibility("default"))) int fn___kmp_create_worker(void) __asm__("__kmp_create_worker");
int fn___kmp_create_worker(void) {
    ALOGD("__kmp_create_worker() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDs = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD1Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD1Ev() called");
    return 0;
}

/* Demangled: GC_calculateF_NormalizedDLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z27GC_calculateF_NormalizedDLTPdS_S_i(void) {
    ALOGD("_Z27GC_calculateF_NormalizedDLTPdS_S_i() called");
    return 0;
}

/* Demangled: __kmp_execute_tasks_32 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_execute_tasks_32(void) __asm__("__kmp_execute_tasks_32");
int fn___kmp_execute_tasks_32(void) {
    ALOGD("__kmp_execute_tasks_32() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: __kmp_pop_workshare */
extern "C" __attribute__((visibility("default"))) int fn___kmp_pop_workshare(void) __asm__("__kmp_pop_workshare");
int fn___kmp_pop_workshare(void) {
    ALOGD("__kmp_pop_workshare() called");
    return 0;
}

/* Demangled: std::logic_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt11logic_error4whatEv(void) {
    ALOGD("_ZNKSt11logic_error4whatEv() called");
    return 0;
}

/* Demangled: __kmp_barrier */
extern "C" __attribute__((visibility("default"))) int fn___kmp_barrier(void) __asm__("__kmp_barrier");
int fn___kmp_barrier(void) {
    ALOGD("__kmp_barrier() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD2Ev(void) {
    ALOGD("_ZNSt9bad_allocD2Ev() called");
    return 0;
}

/* Demangled: __kmp_resume_oncore */
extern "C" __attribute__((visibility("default"))) int fn___kmp_resume_oncore(void) __asm__("__kmp_resume_oncore");
int fn___kmp_resume_oncore(void) {
    ALOGD("__kmp_resume_oncore() called");
    return 0;
}

/* Demangled: __kmp_printf_no_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_printf_no_lock(void) __asm__("__kmp_printf_no_lock");
int fn___kmp_printf_no_lock(void) {
    ALOGD("__kmp_printf_no_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::max_cache_size */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal14max_cache_sizeE = NULL;

/* Demangled: std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >::insert(std::__ndk1::__wrap_iter<unsigned char const*>, unsigned char const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16vectorIhNS_9allocatorIhEEE6insertENS_11__wrap_iterIPKhEERS5_(void) {
    ALOGD("_ZNSt6__ndk16vectorIhNS_9allocatorIhEEE6insertENS_11__wrap_iterIPKhEERS5_() called");
    return 0;
}

/* Demangled: kmpc_set_defaults */
extern "C" __attribute__((visibility("default"))) int kmpc_set_defaults(void) {
    ALOGD("kmpc_set_defaults() called");
    return 0;
}

/* Demangled: __kmpc_omp_task_complete_if0_ompt(ident*, int, kmp_task*) */
extern "C" __attribute__((visibility("default"))) int _Z33__kmpc_omp_task_complete_if0_omptP5identiP8kmp_task(void) {
    ALOGD("_Z33__kmpc_omp_task_complete_if0_omptP5identiP8kmp_task() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDn = NULL;

/* Exported Object: typeinfo name for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt15underflow_error = NULL;

/* Demangled: __kmpc_threadprivate */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_threadprivate(void) __asm__("__kmpc_threadprivate");
int fn___kmpc_threadprivate(void) {
    ALOGD("__kmpc_threadprivate() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD2Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD2Ev() called");
    return 0;
}

/* Demangled: __cxa_rethrow */
extern "C" __attribute__((visibility("default"))) int fn___cxa_rethrow(void) __asm__("__cxa_rethrow");
int fn___cxa_rethrow(void) {
    ALOGD("__cxa_rethrow() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::context */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL7contextE = NULL;

/* Exported Object: __kmp_default_device */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_default_device __asm__("__kmp_default_device") = NULL;

/* Demangled: halide_type_to_string */
extern "C" __attribute__((visibility("default"))) int halide_type_to_string(void) {
    ALOGD("halide_type_to_string() called");
    return 0;
}

/* Demangled: __kmpc_get_taskid */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_get_taskid(void) __asm__("__kmpc_get_taskid");
int fn___kmpc_get_taskid(void) {
    ALOGD("__kmpc_get_taskid() called");
    return 0;
}

/* Demangled: __cxa_increment_exception_refcount */
extern "C" __attribute__((visibility("default"))) int fn___cxa_increment_exception_refcount(void) __asm__("__cxa_increment_exception_refcount");
int fn___cxa_increment_exception_refcount(void) {
    ALOGD("__cxa_increment_exception_refcount() called");
    return 0;
}

/* Demangled: LDC_LDC_HLDCInfo_Init(tH_RectLDCPara*, tLDC_STRUCT*, double*, double*, double*, unsigned char, bool, bool, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z21LDC_LDC_HLDCInfo_InitP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbbh(void) {
    ALOGD("_Z21LDC_LDC_HLDCInfo_InitP14tH_RectLDCParaP11tLDC_STRUCTPdS3_S3_hbbh() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD1Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD1Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed8u_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed8u_shr(void) __asm__("__kmpc_atomic_fixed8u_shr");
int fn___kmpc_atomic_fixed8u_shr(void) {
    ALOGD("__kmpc_atomic_fixed8u_shr() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED2Ev() called");
    return 0;
}

/* Exported Object: __kmp_team_counter */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_team_counter __asm__("__kmp_team_counter") = NULL;

/* Demangled: KMPAffinity::Mask::operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity4MaskdaEPv(void) {
    ALOGD("_ZN11KMPAffinity4MaskdaEPv() called");
    return 0;
}

/* Demangled: __cxa_current_primary_exception */
extern "C" __attribute__((visibility("default"))) int fn___cxa_current_primary_exception(void) __asm__("__cxa_current_primary_exception");
int fn___cxa_current_primary_exception(void) {
    ALOGD("__cxa_current_primary_exception() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD0Ev(void) {
    ALOGD("_ZNSt9type_infoD0Ev() called");
    return 0;
}

/* Exported Object: __kmp_affinity_top_method */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_top_method __asm__("__kmp_affinity_top_method") = NULL;

/* Demangled: __kmp_parallel_dxo */
extern "C" __attribute__((visibility("default"))) int fn___kmp_parallel_dxo(void) __asm__("__kmp_parallel_dxo");
int fn___kmp_parallel_dxo(void) {
    ALOGD("__kmp_parallel_dxo() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed2_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_mul(void) __asm__("__kmpc_atomic_fixed2_mul");
int fn___kmpc_atomic_fixed2_mul(void) {
    ALOGD("__kmpc_atomic_fixed2_mul() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::platform_name */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL13platform_nameE = NULL;

/* Demangled: __kmpc_atomic_fixed4u_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4u_shr(void) __asm__("__kmpc_atomic_fixed4u_shr");
int fn___kmpc_atomic_fixed4u_shr(void) {
    ALOGD("__kmpc_atomic_fixed4u_shr() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Demangled: __kmp_env_unset */
extern "C" __attribute__((visibility("default"))) int fn___kmp_env_unset(void) __asm__("__kmp_env_unset");
int fn___kmp_env_unset(void) {
    ALOGD("__kmp_env_unset() called");
    return 0;
}

/* Demangled: __kmp_str_buf_detach */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_buf_detach(void) __asm__("__kmp_str_buf_detach");
int fn___kmp_str_buf_detach(void) {
    ALOGD("__kmp_str_buf_detach() called");
    return 0;
}

/* Exported Object: __kmp_console_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_console_lock __asm__("__kmp_console_lock") = NULL;

/* Demangled: __kmpc_atomic_fixed4_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_mul(void) __asm__("__kmpc_atomic_fixed4_mul");
int fn___kmpc_atomic_fixed4_mul(void) {
    ALOGD("__kmpc_atomic_fixed4_mul() called");
    return 0;
}

/* Exported Object: __kmp_exit_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_exit_lock __asm__("__kmp_exit_lock") = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clRetainKernel */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL14clRetainKernelE = NULL;

/* Demangled: __kmp_test_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_queuing_lock(void) __asm__("__kmp_test_queuing_lock");
int fn___kmp_test_queuing_lock(void) {
    ALOGD("__kmp_test_queuing_lock() called");
    return 0;
}

/* Demangled: halide_default_device_and_host_malloc */
extern "C" __attribute__((visibility("default"))) int halide_default_device_and_host_malloc(void) {
    ALOGD("halide_default_device_and_host_malloc() called");
    return 0;
}

/* Exported Object: __kmp_dispatch_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_dispatch_lock __asm__("__kmp_dispatch_lock") = NULL;

/* Demangled: __kmpc_atomic_float4_sub_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_sub_float8(void) __asm__("__kmpc_atomic_float4_sub_float8");
int fn___kmpc_atomic_float4_sub_float8(void) {
    ALOGD("__kmpc_atomic_float4_sub_float8() called");
    return 0;
}

/* Demangled: __kmp_test_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_futex_lock(void) __asm__("__kmp_test_futex_lock");
int fn___kmp_test_futex_lock(void) {
    ALOGD("__kmp_test_futex_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_load_library */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal19custom_load_libraryE = NULL;

/* Demangled: halide_profiler_pipeline_start */
extern "C" __attribute__((visibility("default"))) int halide_profiler_pipeline_start(void) {
    ALOGD("halide_profiler_pipeline_start() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD0Ev(void) {
    ALOGD("_ZNSt12length_errorD0Ev() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock __asm__("__kmp_atomic_lock") = NULL;

/* Demangled: std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&, std::__ndk1::unique_lock<std::__ndk1::mutex>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt14overflow_error = NULL;

/* Demangled: halide_device_crop */
extern "C" __attribute__((visibility("default"))) int halide_device_crop(void) {
    ALOGD("halide_device_crop() called");
    return 0;
}

/* Demangled: CholDSolve(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z10CholDSolvePdS_S_i(void) {
    ALOGD("_Z10CholDSolvePdS_S_i() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_min(void) __asm__("__kmpc_atomic_float8_min");
int fn___kmpc_atomic_float8_min(void) {
    ALOGD("__kmpc_atomic_float8_min() called");
    return 0;
}

/* Demangled: SetViewRatioXY(double) */
extern "C" __attribute__((visibility("default"))) int _Z14SetViewRatioXYd(void) {
    ALOGD("_Z14SetViewRatioXYd() called");
    return 0;
}

/* Exported Object: __kmp_init_counter */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_counter __asm__("__kmp_init_counter") = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::wait_parking_control_unpark(void*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization27wait_parking_control_unparkEPvib(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization27wait_parking_control_unparkEPvib() called");
    return 0;
}

/* Demangled: __kmp_destroy_nested_queuing_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_destroy_nested_queuing_lock(void) __asm__("__kmp_destroy_nested_queuing_lock");
int fn___kmp_destroy_nested_queuing_lock(void) {
    ALOGD("__kmp_destroy_nested_queuing_lock() called");
    return 0;
}

/* Exported Object: __kmp_threads */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_threads __asm__("__kmp_threads") = NULL;

/* Demangled: __kmpc_push_proc_bind */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_push_proc_bind(void) __asm__("__kmpc_push_proc_bind");
int fn___kmpc_push_proc_bind(void) {
    ALOGD("__kmpc_push_proc_bind() called");
    return 0;
}

/* Demangled: alDU_RSEParameters_SK1_Rectify(DGMGR_RECT_QUALITY_INFO*, tH_RectLDCPara*) */
extern "C" __attribute__((visibility("default"))) int _Z30alDU_RSEParameters_SK1_RectifyP23DGMGR_RECT_QUALITY_INFOP14tH_RectLDCPara(void) {
    ALOGD("_Z30alDU_RSEParameters_SK1_RectifyP23DGMGR_RECT_QUALITY_INFOP14tH_RectLDCPara() called");
    return 0;
}

/* Demangled: KMPAffinity::destroy_api() */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinity11destroy_apiEv(void) {
    ALOGD("_ZN11KMPAffinity11destroy_apiEv() called");
    return 0;
}

/* Demangled: halide_profiler_report */
extern "C" __attribute__((visibility("default"))) int halide_profiler_report(void) {
    ALOGD("halide_profiler_report() called");
    return 0;
}

/* Demangled: ParseCalibrationData_v3(alDCAL_PACKDATA_V3*, unsigned char*, long, unsigned char*, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z23ParseCalibrationData_v3P18alDCAL_PACKDATA_V3PhlS1_ii(void) {
    ALOGD("_Z23ParseCalibrationData_v3P18alDCAL_PACKDATA_V3PhlS1_ii() called");
    return 0;
}

/* Demangled: alKD_GetPackDataToCaliData_DEC_Size */
extern "C" __attribute__((visibility("default"))) int alKD_GetPackDataToCaliData_DEC_Size(void) {
    ALOGD("alKD_GetPackDataToCaliData_DEC_Size() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC1Ev() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::command_queue */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL13command_queueE = NULL;

/* Demangled: kmpc_free */
extern "C" __attribute__((visibility("default"))) int kmpc_free(void) {
    ALOGD("kmpc_free() called");
    return 0;
}

/* Demangled: KMPAffinity::operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinitynwEm(void) {
    ALOGD("_ZN11KMPAffinitynwEm() called");
    return 0;
}

/* Demangled: __kmp_lt_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_lt_4(void) __asm__("__kmp_lt_4");
int fn___kmp_lt_4(void) {
    ALOGD("__kmp_lt_4() called");
    return 0;
}

/* Demangled: std::runtime_error::operator=(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_erroraSERKS_(void) {
    ALOGD("_ZNSt13runtime_erroraSERKS_() called");
    return 0;
}

/* Demangled: halide_profiler_pipeline_end */
extern "C" __attribute__((visibility("default"))) int halide_profiler_pipeline_end(void) {
    ALOGD("halide_profiler_pipeline_end() called");
    return 0;
}

/* Demangled: alhLDC_Sharpen */
extern "C" __attribute__((visibility("default"))) int alhLDC_Sharpen(void) {
    ALOGD("alhLDC_Sharpen() called");
    return 0;
}

/* Demangled: Halide::Runtime::Buffer<unsigned char, 4>::decref_dev() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime6BufferIhLi4EE10decref_devEv(void) {
    ALOGD("_ZN6Halide7Runtime6BufferIhLi4EE10decref_devEv() called");
    return 0;
}

/* Exported Object: __kmp_barrier_type_name */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_type_name __asm__("__kmp_barrier_type_name") = NULL;

/* Demangled: RQDcmp(double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z6RQDcmpPdS_S_(void) {
    ALOGD("_Z6RQDcmpPdS_S_() called");
    return 0;
}

/* Demangled: __kmpc_init_lock_with_hint */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_init_lock_with_hint(void) __asm__("__kmpc_init_lock_with_hint");
int fn___kmpc_init_lock_with_hint(void) {
    ALOGD("__kmpc_init_lock_with_hint() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvm(void) {
    ALOGD("_ZdaPvm() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD2Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD2Ev() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float8_mul */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float8_mul(void) __asm__("__kmpc_atomic_float8_mul");
int fn___kmpc_atomic_float8_mul(void) {
    ALOGD("__kmpc_atomic_float8_mul() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD2Ev(void) {
    ALOGD("_ZNSt13runtime_errorD2Ev() called");
    return 0;
}

/* Demangled: halide_downgrade_buffer_t */
extern "C" __attribute__((visibility("default"))) int halide_downgrade_buffer_t(void) {
    ALOGD("halide_downgrade_buffer_t() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD0Ev(void) {
    ALOGD("_ZNSt12domain_errorD0Ev() called");
    return 0;
}

/* Demangled: __ompt_get_scheduling_taskinfo(int) */
extern "C" __attribute__((visibility("default"))) int _Z30__ompt_get_scheduling_taskinfoi(void) {
    ALOGD("_Z30__ompt_get_scheduling_taskinfoi() called");
    return 0;
}

/* Exported Object: __kmp_barrier_release_pat_dflt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_release_pat_dflt __asm__("__kmp_barrier_release_pat_dflt") = NULL;

/* Demangled: __kmp_aux_dispatch_init_4u */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_init_4u(void) __asm__("__kmp_aux_dispatch_init_4u");
int fn___kmp_aux_dispatch_init_4u(void) {
    ALOGD("__kmp_aux_dispatch_init_4u() called");
    return 0;
}

/* Demangled: __kmp_print_version_1 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_print_version_1(void) __asm__("__kmp_print_version_1");
int fn___kmp_print_version_1(void) {
    ALOGD("__kmp_print_version_1() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD0Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD0Ev() called");
    return 0;
}

/* Demangled: CheckSum_Gen(void*, int, unsigned short*, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z12CheckSum_GenPviPtS0_(void) {
    ALOGD("_Z12CheckSum_GenPviPtS0_() called");
    return 0;
}

/* Exported Object: __kmp_affinity_warnings */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_warnings __asm__("__kmp_affinity_warnings") = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__shared_countE = NULL;

/* Demangled: Halide::Runtime::Internal::Synchronization::mutex_parking_control_validate(void*, Halide::Runtime::Internal::Synchronization::validate_action&) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization30mutex_parking_control_validateEPvRNS2_15validate_actionE(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization30mutex_parking_control_validateEPvRNS2_15validate_actionE() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDi = NULL;

/* Demangled: alPackDataUpdate_CropScale_Both_V3(alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short*, unsigned short, unsigned short, unsigned short*) */
extern "C" __attribute__((visibility("default"))) int _Z34alPackDataUpdate_CropScale_Both_V3P18alDCAL_PACKDATA_V3ttPtttS1_(void) {
    ALOGD("_Z34alPackDataUpdate_CropScale_Both_V3P18alDCAL_PACKDATA_V3ttPtttS1_() called");
    return 0;
}

/* Demangled: alhLDC_Run */
extern "C" __attribute__((visibility("default"))) int alhLDC_Run(void) {
    ALOGD("alhLDC_Run() called");
    return 0;
}

/* Exported Object: __kmp_barrier_gather_pattern */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_gather_pattern __asm__("__kmp_barrier_gather_pattern") = NULL;

/* Demangled: __kmp_aux_dispatch_init_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmp_aux_dispatch_init_8u(void) __asm__("__kmp_aux_dispatch_init_8u");
int fn___kmp_aux_dispatch_init_8u(void) {
    ALOGD("__kmp_aux_dispatch_init_8u() called");
    return 0;
}

/* Demangled: halide_error */
extern "C" __attribute__((visibility("default"))) int halide_error(void) {
    ALOGD("halide_error() called");
    return 0;
}

/* Demangled: alPackDataUpdate_VCM_Dual_u0Shift_V3(alDCAL_PACKDATA_V3*, short, short, double) */
extern "C" __attribute__((visibility("default"))) int _Z36alPackDataUpdate_VCM_Dual_u0Shift_V3P18alDCAL_PACKDATA_V3ssd(void) {
    ALOGD("_Z36alPackDataUpdate_VCM_Dual_u0Shift_V3P18alDCAL_PACKDATA_V3ssd() called");
    return 0;
}

/* Demangled: __kmp_read_system_time */
extern "C" __attribute__((visibility("default"))) int fn___kmp_read_system_time(void) __asm__("__kmp_read_system_time");
int fn___kmp_read_system_time(void) {
    ALOGD("__kmp_read_system_time() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD0Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* obj___bss_end__ __asm__("__bss_end__") = NULL;

/* Exported Object: typeinfo for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDs = NULL;

/* Demangled: SingularValueDecomposition(double*, int, int, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z26SingularValueDecompositionPdiiS_S_S_(void) {
    ALOGD("_Z26SingularValueDecompositionPdiiS_S_S_() called");
    return 0;
}

/* Demangled: __kmp_remove_signals */
extern "C" __attribute__((visibility("default"))) int fn___kmp_remove_signals(void) __asm__("__kmp_remove_signals");
int fn___kmp_remove_signals(void) {
    ALOGD("__kmp_remove_signals() called");
    return 0;
}

/* Demangled: halide_default_device_and_host_free */
extern "C" __attribute__((visibility("default"))) int halide_default_device_and_host_free(void) {
    ALOGD("halide_default_device_and_host_free() called");
    return 0;
}

/* Demangled: halide_default_get_symbol */
extern "C" __attribute__((visibility("default"))) int halide_default_get_symbol(void) {
    ALOGD("halide_default_get_symbol() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD2Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD2Ev() called");
    return 0;
}

/* Exported Object: __kmp_generate_warnings */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_generate_warnings __asm__("__kmp_generate_warnings") = NULL;

/* Demangled: __kmpc_dispatch_fini_8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_fini_8(void) __asm__("__kmpc_dispatch_fini_8");
int fn___kmpc_dispatch_fini_8(void) {
    ALOGD("__kmpc_dispatch_fini_8() called");
    return 0;
}

/* Exported Object: __kmp_tls_gtid_min */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_tls_gtid_min __asm__("__kmp_tls_gtid_min") = NULL;

/* Demangled: halide_error_requirement_failed */
extern "C" __attribute__((visibility("default"))) int halide_error_requirement_failed(void) {
    ALOGD("halide_error_requirement_failed() called");
    return 0;
}

/* Exported Object: __kmp_thread_pool_insert_pt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_thread_pool_insert_pt __asm__("__kmp_thread_pool_insert_pt") = NULL;

/* Demangled: std::get_terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt13get_terminatev(void) {
    ALOGD("_ZSt13get_terminatev() called");
    return 0;
}

/* Demangled: __kmp_print_version_2 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_print_version_2(void) __asm__("__kmp_print_version_2");
int fn___kmp_print_version_2(void) {
    ALOGD("__kmp_print_version_2() called");
    return 0;
}

/* Demangled: kmp_set_thread_affinity_mask_initial */
extern "C" __attribute__((visibility("default"))) int kmp_set_thread_affinity_mask_initial(void) {
    ALOGD("kmp_set_thread_affinity_mask_initial() called");
    return 0;
}

/* Demangled: __kmp_eq_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_eq_4(void) __asm__("__kmp_eq_4");
int fn___kmp_eq_4(void) {
    ALOGD("__kmp_eq_4() called");
    return 0;
}

/* Demangled: __kmp_str_to_uint */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_to_uint(void) __asm__("__kmp_str_to_uint");
int fn___kmp_str_to_uint(void) {
    ALOGD("__kmp_str_to_uint() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_shr */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_shr(void) __asm__("__kmpc_atomic_fixed1_shr");
int fn___kmpc_atomic_fixed1_shr(void) {
    ALOGD("__kmpc_atomic_fixed1_shr() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114error_categoryE = NULL;

/* Exported Object: __kmp_nested_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_nested_nth __asm__("__kmp_nested_nth") = NULL;

/* Demangled: __kmp_error_construct */
extern "C" __attribute__((visibility("default"))) int fn___kmp_error_construct(void) __asm__("__kmp_error_construct");
int fn___kmp_error_construct(void) {
    ALOGD("__kmp_error_construct() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::halide_trace_file_initialized */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal29halide_trace_file_initializedE = NULL;

/* Demangled: fpc_generate_curve(double, double*, unsigned char) */
extern "C" __attribute__((visibility("default"))) int _Z18fpc_generate_curvedPdh(void) {
    ALOGD("_Z18fpc_generate_curvedPdh() called");
    return 0;
}

/* Exported Object: typeinfo for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPl = NULL;

/* Demangled: __kmp_suspend_64 */
extern "C" __attribute__((visibility("default"))) int fn___kmp_suspend_64(void) __asm__("__kmp_suspend_64");
int fn___kmp_suspend_64(void) {
    ALOGD("__kmp_suspend_64() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKa = NULL;

/* Demangled: CheckSum_Insert(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z15CheckSum_InsertPvi(void) {
    ALOGD("_Z15CheckSum_InsertPvi() called");
    return 0;
}

/* Demangled: GC_calculateH_NormalizedDLT(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z27GC_calculateH_NormalizedDLTPdS_S_i(void) {
    ALOGD("_Z27GC_calculateH_NormalizedDLTPdS_S_i() called");
    return 0;
}

/* Exported Object: typeinfo for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPd = NULL;

/* Demangled: __kmp_affinity_set_place */
extern "C" __attribute__((visibility("default"))) int fn___kmp_affinity_set_place(void) __asm__("__kmp_affinity_set_place");
int fn___kmp_affinity_set_place(void) {
    ALOGD("__kmp_affinity_set_place() called");
    return 0;
}

/* Exported Object: typeinfo for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDh = NULL;

/* Demangled: halide_device_malloc_legacy */
extern "C" __attribute__((visibility("default"))) int halide_device_malloc_legacy(void) {
    ALOGD("halide_device_malloc_legacy() called");
    return 0;
}

/* Exported Object: typeinfo name for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKb = NULL;

/* Exported Object: typeinfo for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPc = NULL;

/* Exported Object: typeinfo for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTIDn = NULL;

/* Exported Object: __kmp_user_lock_kind */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_user_lock_kind __asm__("__kmp_user_lock_kind") = NULL;

/* Exported Object: typeinfo name for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKd = NULL;

/* Demangled: __kmp_is_address_mapped */
extern "C" __attribute__((visibility("default"))) int fn___kmp_is_address_mapped(void) __asm__("__kmp_is_address_mapped");
int fn___kmp_is_address_mapped(void) {
    ALOGD("__kmp_is_address_mapped() called");
    return 0;
}

/* Exported Object: typeinfo for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDn = NULL;

/* Demangled: __kmp_get_max_active_levels */
extern "C" __attribute__((visibility("default"))) int fn___kmp_get_max_active_levels(void) __asm__("__kmp_get_max_active_levels");
int fn___kmp_get_max_active_levels(void) {
    ALOGD("__kmp_get_max_active_levels() called");
    return 0;
}

/* Exported Object: typeinfo name for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKf = NULL;

/* Exported Object: typeinfo for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPo = NULL;

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for half */
extern "C" __attribute__((visibility("default"))) void* _ZTIDh = NULL;

/* Demangled: alhLDC_FPC_Sharpness_Enable */
extern "C" __attribute__((visibility("default"))) int alhLDC_FPC_Sharpness_Enable(void) {
    ALOGD("alhLDC_FPC_Sharpness_Enable() called");
    return 0;
}

/* Demangled: __kmpc_dist_dispatch_init_4 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dist_dispatch_init_4(void) __asm__("__kmpc_dist_dispatch_init_4");
int fn___kmpc_dist_dispatch_init_4(void) {
    ALOGD("__kmpc_dist_dispatch_init_4() called");
    return 0;
}

/* Exported Object: typeinfo name for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKc = NULL;

/* Exported Object: typeinfo for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDi = NULL;

/* Demangled: __kmpc_barrier */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_barrier(void) __asm__("__kmpc_barrier");
int fn___kmpc_barrier(void) {
    ALOGD("__kmpc_barrier() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::custom_print */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal12custom_printE = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: halide_opencl_cleanup */
extern "C" __attribute__((visibility("default"))) int halide_opencl_cleanup(void) {
    ALOGD("halide_opencl_cleanup() called");
    return 0;
}

/* Demangled: std::__ndk1::undeclare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121undeclare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk121undeclare_no_pointersEPcm() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_fini_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_fini_8u(void) __asm__("__kmpc_dispatch_fini_8u");
int fn___kmpc_dispatch_fini_8u(void) {
    ALOGD("__kmpc_dispatch_fini_8u() called");
    return 0;
}

/* Demangled: ldc8_cpu */
extern "C" __attribute__((visibility("default"))) int ldc8_cpu(void) {
    ALOGD("ldc8_cpu() called");
    return 0;
}

/* Demangled: halide_set_custom_malloc */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_malloc(void) {
    ALOGD("halide_set_custom_malloc() called");
    return 0;
}

/* Exported Object: typeinfo name for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKe = NULL;

/* Demangled: halide_device_malloc */
extern "C" __attribute__((visibility("default"))) int halide_device_malloc(void) {
    ALOGD("halide_device_malloc() called");
    return 0;
}

/* Demangled: halide_device_slice */
extern "C" __attribute__((visibility("default"))) int halide_device_slice(void) {
    ALOGD("halide_device_slice() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_div */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_div(void) __asm__("__kmpc_atomic_fixed4_div");
int fn___kmpc_atomic_fixed4_div(void) {
    ALOGD("__kmpc_atomic_fixed4_div() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD1Ev(void) {
    ALOGD("_ZNSt9type_infoD1Ev() called");
    return 0;
}

/* Demangled: alhLDC_Sharpness_Enable */
extern "C" __attribute__((visibility("default"))) int alhLDC_Sharpness_Enable(void) {
    ALOGD("alhLDC_Sharpness_Enable() called");
    return 0;
}

/* Demangled: halide_opencl_set_device_type */
extern "C" __attribute__((visibility("default"))) int halide_opencl_set_device_type(void) {
    ALOGD("halide_opencl_set_device_type() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC2Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Exported Object: typeinfo name for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: ompc_set_dynamic */
extern "C" __attribute__((visibility("default"))) int ompc_set_dynamic(void) {
    ALOGD("ompc_set_dynamic() called");
    return 0;
}

/* Exported Object: g_dKeepAutoMode */
extern "C" __attribute__((visibility("default"))) void* g_dKeepAutoMode = NULL;

/* Demangled: KMPAffinity::operator delete(void*) */
extern "C" __attribute__((visibility("default"))) int _ZN11KMPAffinitydlEPv(void) {
    ALOGD("_ZN11KMPAffinitydlEPv() called");
    return 0;
}

/* Exported Object: typeinfo for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPn = NULL;

/* Demangled: operator delete(void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __kmpc_test_nest_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_test_nest_lock(void) __asm__("__kmpc_test_nest_lock");
int fn___kmpc_test_nest_lock(void) {
    ALOGD("__kmpc_test_nest_lock() called");
    return 0;
}

/* Demangled: __kmpc_threadprivate_register_vec */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_threadprivate_register_vec(void) __asm__("__kmpc_threadprivate_register_vec");
int fn___kmpc_threadprivate_register_vec(void) {
    ALOGD("__kmpc_threadprivate_register_vec() called");
    return 0;
}

/* Demangled: __kmp_check_stack_overlap */
extern "C" __attribute__((visibility("default"))) int fn___kmp_check_stack_overlap(void) __asm__("__kmp_check_stack_overlap");
int fn___kmp_check_stack_overlap(void) {
    ALOGD("__kmp_check_stack_overlap() called");
    return 0;
}

/* Exported Object: __kmp_storage_map */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_storage_map __asm__("__kmp_storage_map") = NULL;

/* Exported Object: typeinfo for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPm = NULL;

/* Demangled: __kmpc_in_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_in_parallel(void) __asm__("__kmpc_in_parallel");
int fn___kmpc_in_parallel(void) {
    ALOGD("__kmpc_in_parallel() called");
    return 0;
}

/* Demangled: halide_memoization_cache_cleanup */
extern "C" __attribute__((visibility("default"))) int halide_memoization_cache_cleanup(void) {
    ALOGD("halide_memoization_cache_cleanup() called");
    return 0;
}

/* Demangled: __kmpc_atomic_16 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_16(void) __asm__("__kmpc_atomic_16");
int fn___kmpc_atomic_16(void) {
    ALOGD("__kmpc_atomic_16() called");
    return 0;
}

/* Demangled: std::get_unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt14get_unexpectedv(void) {
    ALOGD("_ZSt14get_unexpectedv() called");
    return 0;
}

/* Demangled: halide_profiler_get_pipeline_state */
extern "C" __attribute__((visibility("default"))) int halide_profiler_get_pipeline_state(void) {
    ALOGD("halide_profiler_get_pipeline_state() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPw = NULL;

/* Demangled: GC_constructRotationMatrix(double*, double*, double) */
extern "C" __attribute__((visibility("default"))) int _Z26GC_constructRotationMatrixPdS_d(void) {
    ALOGD("_Z26GC_constructRotationMatrixPdS_d() called");
    return 0;
}

/* Demangled: halide_device_and_host_free_as_destructor */
extern "C" __attribute__((visibility("default"))) int halide_device_and_host_free_as_destructor(void) {
    ALOGD("halide_device_and_host_free_as_destructor() called");
    return 0;
}

/* Exported Object: typeinfo for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPx = NULL;

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Demangled: halide_set_custom_do_task */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_do_task(void) {
    ALOGD("halide_set_custom_do_task() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: __kmp_msg_error_code */
extern "C" __attribute__((visibility("default"))) int fn___kmp_msg_error_code(void) __asm__("__kmp_msg_error_code");
int fn___kmp_msg_error_code(void) {
    ALOGD("__kmp_msg_error_code() called");
    return 0;
}

/* Demangled: std::set_new_handler(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt15set_new_handlerPFvvE(void) {
    ALOGD("_ZSt15set_new_handlerPFvvE() called");
    return 0;
}

/* Demangled: __kmp_str_to_int */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_to_int(void) __asm__("__kmp_str_to_int");
int fn___kmp_str_to_int(void) {
    ALOGD("__kmp_str_to_int() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float10_add */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float10_add(void) __asm__("__kmpc_atomic_float10_add");
int fn___kmpc_atomic_float10_add(void) {
    ALOGD("__kmpc_atomic_float10_add() called");
    return 0;
}

/* Demangled: halide_set_custom_load_library */
extern "C" __attribute__((visibility("default"))) int halide_set_custom_load_library(void) {
    ALOGD("halide_set_custom_load_library() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Demangled: halide_default_error */
extern "C" __attribute__((visibility("default"))) int halide_default_error(void) {
    ALOGD("halide_default_error() called");
    return 0;
}

/* Exported Object: vtable for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt15underflow_error = NULL;

/* Demangled: alKD_GetPackData3in1Size */
extern "C" __attribute__((visibility("default"))) int alKD_GetPackData3in1Size(void) {
    ALOGD("alKD_GetPackData3in1Size() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_min */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_min(void) __asm__("__kmpc_atomic_fixed4_min");
int fn___kmpc_atomic_fixed4_min(void) {
    ALOGD("__kmpc_atomic_fixed4_min() called");
    return 0;
}

/* Demangled: __kmpc_dispatch_next_8u */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_dispatch_next_8u(void) __asm__("__kmpc_dispatch_next_8u");
int fn___kmpc_dispatch_next_8u(void) {
    ALOGD("__kmpc_dispatch_next_8u() called");
    return 0;
}

/* Demangled: __kmp_printf */
extern "C" __attribute__((visibility("default"))) int fn___kmp_printf(void) __asm__("__kmp_printf");
int fn___kmp_printf(void) {
    ALOGD("__kmp_printf() called");
    return 0;
}

/* Demangled: kmpc_malloc */
extern "C" __attribute__((visibility("default"))) int kmpc_malloc(void) {
    ALOGD("kmpc_malloc() called");
    return 0;
}

/* Demangled: __kmp_suspend_uninitialize_thread */
extern "C" __attribute__((visibility("default"))) int fn___kmp_suspend_uninitialize_thread(void) __asm__("__kmp_suspend_uninitialize_thread");
int fn___kmp_suspend_uninitialize_thread(void) {
    ALOGD("__kmp_suspend_uninitialize_thread() called");
    return 0;
}

/* Demangled: __kmp_str_match_true */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_match_true(void) __asm__("__kmp_str_match_true");
int fn___kmp_str_match_true(void) {
    ALOGD("__kmp_str_match_true() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_shl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_shl(void) __asm__("__kmpc_atomic_fixed1_shl");
int fn___kmpc_atomic_fixed1_shl(void) {
    ALOGD("__kmpc_atomic_fixed1_shl() called");
    return 0;
}

/* Demangled: Matrix_VersionInfo_Get(void*, int) */
extern "C" __attribute__((visibility("default"))) int _Z22Matrix_VersionInfo_GetPvi(void) {
    ALOGD("_Z22Matrix_VersionInfo_GetPvi() called");
    return 0;
}

/* Demangled: kmpc_set_poolmode(int) */
extern "C" __attribute__((visibility("default"))) int _Z17kmpc_set_poolmodei(void) {
    ALOGD("_Z17kmpc_set_poolmodei() called");
    return 0;
}

/* Demangled: __kmpc_atomic_10 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_10(void) __asm__("__kmpc_atomic_10");
int fn___kmpc_atomic_10(void) {
    ALOGD("__kmpc_atomic_10() called");
    return 0;
}

/* Demangled: halide_acquire_cl_context */
extern "C" __attribute__((visibility("default"))) int halide_acquire_cl_context(void) {
    ALOGD("halide_acquire_cl_context() called");
    return 0;
}

/* Demangled: __kmpc_end_reduce_nowait */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_reduce_nowait(void) __asm__("__kmpc_end_reduce_nowait");
int fn___kmpc_end_reduce_nowait(void) {
    ALOGD("__kmpc_end_reduce_nowait() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: __kmpc_global_num_threads */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_global_num_threads(void) __asm__("__kmpc_global_num_threads");
int fn___kmpc_global_num_threads(void) {
    ALOGD("__kmpc_global_num_threads() called");
    return 0;
}

/* Exported Object: __kmp_atomic_lock_1i */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_atomic_lock_1i __asm__("__kmp_atomic_lock_1i") = NULL;

/* Demangled: __kmp_invoke_task_func */
extern "C" __attribute__((visibility("default"))) int fn___kmp_invoke_task_func(void) __asm__("__kmp_invoke_task_func");
int fn___kmp_invoke_task_func(void) {
    ALOGD("__kmp_invoke_task_func() called");
    return 0;
}

/* Exported Object: typeinfo for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPi = NULL;

/* Demangled: GC_calculateH_Inhomogeneous(double*, double*, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z27GC_calculateH_InhomogeneousPdS_S_i(void) {
    ALOGD("_Z27GC_calculateH_InhomogeneousPdS_S_i() called");
    return 0;
}

/* Demangled: halide_device_release */
extern "C" __attribute__((visibility("default"))) int halide_device_release(void) {
    ALOGD("halide_device_release() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPj = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clRetainProgram */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL15clRetainProgramE = NULL;

/* Demangled: __kmp_release_nested_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_release_nested_ticket_lock(void) __asm__("__kmp_release_nested_ticket_lock");
int fn___kmp_release_nested_ticket_lock(void) {
    ALOGD("__kmp_release_nested_ticket_lock() called");
    return 0;
}

/* Demangled: std::__ndk1::future_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115future_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115future_categoryEv() called");
    return 0;
}

/* Exported Object: __kmp_threadprivate_d_table */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_threadprivate_d_table __asm__("__kmp_threadprivate_d_table") = NULL;

/* Demangled: __kmp_register_atfork */
extern "C" __attribute__((visibility("default"))) int fn___kmp_register_atfork(void) __asm__("__kmp_register_atfork");
int fn___kmp_register_atfork(void) {
    ALOGD("__kmp_register_atfork() called");
    return 0;
}

/* Exported Object: __kmp_affinity_num_places */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_num_places __asm__("__kmp_affinity_num_places") = NULL;

/* Demangled: __kmpc_atomic_fixed2_neqv */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed2_neqv(void) __asm__("__kmpc_atomic_fixed2_neqv");
int fn___kmpc_atomic_fixed2_neqv(void) {
    ALOGD("__kmpc_atomic_fixed2_neqv() called");
    return 0;
}

/* Demangled: halide_error_buffer_allocation_too_large */
extern "C" __attribute__((visibility("default"))) int halide_error_buffer_allocation_too_large(void) {
    ALOGD("halide_error_buffer_allocation_too_large() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::work_queue */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal10work_queueE = NULL;

/* Demangled: __kmp_parallel_initialize */
extern "C" __attribute__((visibility("default"))) int fn___kmp_parallel_initialize(void) __asm__("__kmp_parallel_initialize");
int fn___kmp_parallel_initialize(void) {
    ALOGD("__kmp_parallel_initialize() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc() called");
    return 0;
}

/* Demangled: __kmp_test_nested_futex_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_test_nested_futex_lock(void) __asm__("__kmp_test_nested_futex_lock");
int fn___kmp_test_nested_futex_lock(void) {
    ALOGD("__kmp_test_nested_futex_lock() called");
    return 0;
}

/* Exported Object: typeinfo for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPe = NULL;

/* Demangled: __kmpc_init_nest_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_init_nest_lock(void) __asm__("__kmpc_init_nest_lock");
int fn___kmpc_init_nest_lock(void) {
    ALOGD("__kmpc_init_nest_lock() called");
    return 0;
}

/* Demangled: halide_device_sync */
extern "C" __attribute__((visibility("default"))) int halide_device_sync(void) {
    ALOGD("halide_device_sync() called");
    return 0;
}

/* Demangled: GC_convertRotationMatrix2AxisAngle(double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z34GC_convertRotationMatrix2AxisAnglePdS_S_(void) {
    ALOGD("_Z34GC_convertRotationMatrix2AxisAnglePdS_S_() called");
    return 0;
}

/* Demangled: std::nested_exception::rethrow_nested() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16nested_exception14rethrow_nestedEv(void) {
    ALOGD("_ZNKSt16nested_exception14rethrow_nestedEv() called");
    return 0;
}

/* Demangled: GC_translate_ProjectionMatrix_MainCam_Based(double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z43GC_translate_ProjectionMatrix_MainCam_BasedPdS_S_S_(void) {
    ALOGD("_Z43GC_translate_ProjectionMatrix_MainCam_BasedPdS_S_S_() called");
    return 0;
}

/* Exported Object: typeinfo for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPf = NULL;

/* Exported Object: __kmp_init_wait */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_init_wait __asm__("__kmp_init_wait") = NULL;

/* Demangled: __kmpc_end_serialized_parallel */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_end_serialized_parallel(void) __asm__("__kmpc_end_serialized_parallel");
int fn___kmpc_end_serialized_parallel(void) {
    ALOGD("__kmpc_end_serialized_parallel() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed1_max */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed1_max(void) __asm__("__kmpc_atomic_fixed1_max");
int fn___kmpc_atomic_fixed1_max(void) {
    ALOGD("__kmpc_atomic_fixed1_max() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPh = NULL;

/* Exported Object: typeinfo for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDs = NULL;

/* Demangled: __kmp_check_sync */
extern "C" __attribute__((visibility("default"))) int fn___kmp_check_sync(void) __asm__("__kmp_check_sync");
int fn___kmp_check_sync(void) {
    ALOGD("__kmp_check_sync() called");
    return 0;
}

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD1Ev(void) {
    ALOGD("_ZNSt13exception_ptrD1Ev() called");
    return 0;
}

/* Demangled: halide_start_clock */
extern "C" __attribute__((visibility("default"))) int halide_start_clock(void) {
    ALOGD("halide_start_clock() called");
    return 0;
}

/* Exported Object: typeinfo for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPg = NULL;

/* Exported Object: halide_reference_clock_inited */
extern "C" __attribute__((visibility("default"))) void* halide_reference_clock_inited = NULL;

/* Demangled: std::exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9exception4whatEv(void) {
    ALOGD("_ZNKSt9exception4whatEv() called");
    return 0;
}

/* Exported Object: __kmp_library */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_library __asm__("__kmp_library") = NULL;

/* Demangled: __kmpc_atomic_fixed4_mul_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_mul_float8(void) __asm__("__kmpc_atomic_fixed4_mul_float8");
int fn___kmpc_atomic_fixed4_mul_float8(void) {
    ALOGD("__kmpc_atomic_fixed4_mul_float8() called");
    return 0;
}

/* Exported Object: __kmp_affinity_dispatch */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affinity_dispatch __asm__("__kmp_affinity_dispatch") = NULL;

/* Demangled: alhLDC_Init_V1 */
extern "C" __attribute__((visibility("default"))) int alhLDC_Init_V1(void) {
    ALOGD("alhLDC_Init_V1() called");
    return 0;
}

/* Demangled: __kmp_infinite_loop */
extern "C" __attribute__((visibility("default"))) int fn___kmp_infinite_loop(void) __asm__("__kmp_infinite_loop");
int fn___kmp_infinite_loop(void) {
    ALOGD("__kmp_infinite_loop() called");
    return 0;
}

/* Demangled: alPackDataUpdate_IMGScale_V3(alDCAL_PACKDATA_V3*, int, int, int) */
extern "C" __attribute__((visibility("default"))) int _Z28alPackDataUpdate_IMGScale_V3P18alDCAL_PACKDATA_V3iii(void) {
    ALOGD("_Z28alPackDataUpdate_IMGScale_V3P18alDCAL_PACKDATA_V3iii() called");
    return 0;
}

/* Demangled: __kmpc_atomic_float4_add_float8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_float4_add_float8(void) __asm__("__kmpc_atomic_float4_add_float8");
int fn___kmpc_atomic_float4_add_float8(void) {
    ALOGD("__kmpc_atomic_float4_add_float8() called");
    return 0;
}

/* Demangled: __kmpc_omp_task_parts */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_omp_task_parts(void) __asm__("__kmpc_omp_task_parts");
int fn___kmpc_omp_task_parts(void) {
    ALOGD("__kmpc_omp_task_parts() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD0Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD0Ev() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD1Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD1Ev() called");
    return 0;
}

/* Demangled: __kmp_initialize_bget */
extern "C" __attribute__((visibility("default"))) int fn___kmp_initialize_bget(void) __asm__("__kmp_initialize_bget");
int fn___kmp_initialize_bget(void) {
    ALOGD("__kmp_initialize_bget() called");
    return 0;
}

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD0Ev(void) {
    ALOGD("_ZNSt9exceptionD0Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: halide_opencl_device_crop */
extern "C" __attribute__((visibility("default"))) int halide_opencl_device_crop(void) {
    ALOGD("halide_opencl_device_crop() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: Halide::Runtime::Internal::keys_equal(unsigned char const*, unsigned char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(void) {
    ALOGD("_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m() called");
    return 0;
}

/* Demangled: __kmp_internal_end_library */
extern "C" __attribute__((visibility("default"))) int fn___kmp_internal_end_library(void) __asm__("__kmp_internal_end_library");
int fn___kmp_internal_end_library(void) {
    ALOGD("__kmp_internal_end_library() called");
    return 0;
}

/* Demangled: GC_constructRotationMatrix(double (*) [3], double*, double) */
extern "C" __attribute__((visibility("default"))) int _Z26GC_constructRotationMatrixPA3_dPdd(void) {
    ALOGD("_Z26GC_constructRotationMatrixPA3_dPdd() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKy = NULL;

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetPlatformInfo */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL17clGetPlatformInfoE = NULL;

/* Exported Object: __kmp_barrier_gather_bb_dflt */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_barrier_gather_bb_dflt __asm__("__kmp_barrier_gather_bb_dflt") = NULL;

/* Demangled: std::__ndk1::shared_future<void>::operator=(std::__ndk1::shared_future<void> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvEaSERKS1_(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvEaSERKS1_() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKt = NULL;

/* Demangled: __kmpc_atomic_cmplx4_add_cmplx8 */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_cmplx4_add_cmplx8(void) __asm__("__kmpc_atomic_cmplx4_add_cmplx8");
int fn___kmpc_atomic_cmplx4_add_cmplx8(void) {
    ALOGD("__kmpc_atomic_cmplx4_add_cmplx8() called");
    return 0;
}

/* Exported Object: __kmp_user_lock_seq */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_user_lock_seq __asm__("__kmp_user_lock_seq") = NULL;

/* Demangled: alGLDC_SetCurves(int, double*, int) */
extern "C" __attribute__((visibility("default"))) int _Z16alGLDC_SetCurvesiPdi(void) {
    ALOGD("_Z16alGLDC_SetCurvesiPdi() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::halide_trace_file */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal17halide_trace_fileE = NULL;

/* Exported Object: __kmp_cg_max_nth */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_cg_max_nth __asm__("__kmp_cg_max_nth") = NULL;

/* Exported Object: typeinfo name for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKx = NULL;

/* Demangled: __kmp_i18n_catclose */
extern "C" __attribute__((visibility("default"))) int fn___kmp_i18n_catclose(void) __asm__("__kmp_i18n_catclose");
int fn___kmp_i18n_catclose(void) {
    ALOGD("__kmp_i18n_catclose() called");
    return 0;
}

/* Demangled: __kmpc_atomic_fixed4_andl */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_atomic_fixed4_andl(void) __asm__("__kmpc_atomic_fixed4_andl");
int fn___kmpc_atomic_fixed4_andl(void) {
    ALOGD("__kmpc_atomic_fixed4_andl() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::Synchronization::mutex_parking_control_unpark(void*, int, bool) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal15Synchronization28mutex_parking_control_unparkEPvib(void) {
    ALOGD("_ZN6Halide7Runtime8Internal15Synchronization28mutex_parking_control_unparkEPvib() called");
    return 0;
}

/* Demangled: __kmp_execute_tasks_oncore */
extern "C" __attribute__((visibility("default"))) int fn___kmp_execute_tasks_oncore(void) __asm__("__kmp_execute_tasks_oncore");
int fn___kmp_execute_tasks_oncore(void) {
    ALOGD("__kmp_execute_tasks_oncore() called");
    return 0;
}

/* Exported Object: __kmp_affin_mask_size */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_affin_mask_size __asm__("__kmp_affin_mask_size") = NULL;

/* Demangled: std::__ndk1::get_pointer_safety() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118get_pointer_safetyEv(void) {
    ALOGD("_ZNSt6__ndk118get_pointer_safetyEv() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKw = NULL;

/* Demangled: __kmp_exit_single */
extern "C" __attribute__((visibility("default"))) int fn___kmp_exit_single(void) __asm__("__kmp_exit_single");
int fn___kmp_exit_single(void) {
    ALOGD("__kmp_exit_single() called");
    return 0;
}

/* Demangled: __kmpc_init_nest_lock_with_hint */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_init_nest_lock_with_hint(void) __asm__("__kmpc_init_nest_lock_with_hint");
int fn___kmpc_init_nest_lock_with_hint(void) {
    ALOGD("__kmpc_init_nest_lock_with_hint() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112bad_weak_ptr4whatEv(void) {
    ALOGD("_ZNKSt6__ndk112bad_weak_ptr4whatEv() called");
    return 0;
}

/* Demangled: halide_error_explicit_bounds_too_small */
extern "C" __attribute__((visibility("default"))) int halide_error_explicit_bounds_too_small(void) {
    ALOGD("halide_error_explicit_bounds_too_small() called");
    return 0;
}

/* Exported Object: typeinfo for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt15underflow_error = NULL;

/* Demangled: ompc_set_num_threads */
extern "C" __attribute__((visibility("default"))) int ompc_set_num_threads(void) {
    ALOGD("ompc_set_num_threads() called");
    return 0;
}

/* Demangled: __kmp_free_task_team */
extern "C" __attribute__((visibility("default"))) int fn___kmp_free_task_team(void) __asm__("__kmp_free_task_team");
int fn___kmp_free_task_team(void) {
    ALOGD("__kmp_free_task_team() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex8try_lockEv() called");
    return 0;
}

/* Demangled: __kmpc_barrier_master_nowait */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_barrier_master_nowait(void) __asm__("__kmpc_barrier_master_nowait");
int fn___kmpc_barrier_master_nowait(void) {
    ALOGD("__kmpc_barrier_master_nowait() called");
    return 0;
}

/* Demangled: __kmpc_destroy_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmpc_destroy_lock(void) __asm__("__kmpc_destroy_lock");
int fn___kmpc_destroy_lock(void) {
    ALOGD("__kmpc_destroy_lock() called");
    return 0;
}

/* Exported Object: Halide::Runtime::Internal::OpenCL::clGetPlatformIDs */
extern "C" __attribute__((visibility("default"))) void* _ZN6Halide7Runtime8Internal6OpenCL16clGetPlatformIDsE = NULL;

/* Demangled: halide_profiler_get_state */
extern "C" __attribute__((visibility("default"))) int halide_profiler_get_state(void) {
    ALOGD("halide_profiler_get_state() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::clamp_num_threads(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal17clamp_num_threadsEi(void) {
    ALOGD("_ZN6Halide7Runtime8Internal17clamp_num_threadsEi() called");
    return 0;
}

/* Exported Object: typeinfo name for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKi = NULL;

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC2Ev(void) {
    ALOGD("_ZNSt8bad_castC2Ev() called");
    return 0;
}

/* Demangled: halide_error_param_too_large_u64 */
extern "C" __attribute__((visibility("default"))) int halide_error_param_too_large_u64(void) {
    ALOGD("halide_error_param_too_large_u64() called");
    return 0;
}

/* Demangled: __kmp_str_fname_init */
extern "C" __attribute__((visibility("default"))) int fn___kmp_str_fname_init(void) __asm__("__kmp_str_fname_init");
int fn___kmp_str_fname_init(void) {
    ALOGD("__kmp_str_fname_init() called");
    return 0;
}

/* Demangled: GC_constructRotationMatrix(double (*) [3], double*) */
extern "C" __attribute__((visibility("default"))) int _Z26GC_constructRotationMatrixPA3_dPd(void) {
    ALOGD("_Z26GC_constructRotationMatrixPA3_dPd() called");
    return 0;
}

/* Demangled: alPackDataUpdate_CropScale_Both_HLDCInfo_V3(alDCAL_PACKDATA_V3*, unsigned short, unsigned short, unsigned short*, unsigned short, unsigned short, unsigned short*, double*, double*, double*, double*) */
extern "C" __attribute__((visibility("default"))) int _Z43alPackDataUpdate_CropScale_Both_HLDCInfo_V3P18alDCAL_PACKDATA_V3ttPtttS1_PdS2_S2_S2_(void) {
    ALOGD("_Z43alPackDataUpdate_CropScale_Both_HLDCInfo_V3P18alDCAL_PACKDATA_V3ttPtttS1_PdS2_S2_S2_() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE9set_valueEv() called");
    return 0;
}

/* Demangled: Halide::Runtime::Internal::halide_get_cpu_features() */
extern "C" __attribute__((visibility("default"))) int _ZN6Halide7Runtime8Internal23halide_get_cpu_featuresEv(void) {
    ALOGD("_ZN6Halide7Runtime8Internal23halide_get_cpu_featuresEv() called");
    return 0;
}

/* Exported Object: __kmp_direct_init */
extern "C" __attribute__((visibility("default"))) void* obj___kmp_direct_init __asm__("__kmp_direct_init") = NULL;

/* Demangled: halide_default_print */
extern "C" __attribute__((visibility("default"))) int halide_default_print(void) {
    ALOGD("halide_default_print() called");
    return 0;
}

/* Exported Object: typeinfo name for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKs = NULL;

/* Exported Object: g_eViewRatioX */
extern "C" __attribute__((visibility("default"))) void* g_eViewRatioX = NULL;

/* Exported Object: typeinfo name for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKv = NULL;

/* Exported Object: g_eViewRatioY */
extern "C" __attribute__((visibility("default"))) void* g_eViewRatioY = NULL;

/* Demangled: __cxa_guard_acquire */
extern "C" __attribute__((visibility("default"))) int fn___cxa_guard_acquire(void) __asm__("__cxa_guard_acquire");
int fn___cxa_guard_acquire(void) {
    ALOGD("__cxa_guard_acquire() called");
    return 0;
}

/* Demangled: __kmp_acquire_nested_ticket_lock */
extern "C" __attribute__((visibility("default"))) int fn___kmp_acquire_nested_ticket_lock(void) __asm__("__kmp_acquire_nested_ticket_lock");
int fn___kmp_acquire_nested_ticket_lock(void) {
    ALOGD("__kmp_acquire_nested_ticket_lock() called");
    return 0;
}

/* Demangled: halide_set_gpu_device */
extern "C" __attribute__((visibility("default"))) int halide_set_gpu_device(void) {
    ALOGD("halide_set_gpu_device() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD2Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD2Ev() called");
    return 0;
}

/* Demangled: halide_double_to_string */
extern "C" __attribute__((visibility("default"))) int halide_double_to_string(void) {
    ALOGD("halide_double_to_string() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKo = NULL;

/* Demangled: __kmp_elapsed */
extern "C" __attribute__((visibility("default"))) int fn___kmp_elapsed(void) __asm__("__kmp_elapsed");
int fn___kmp_elapsed(void) {
    ALOGD("__kmp_elapsed() called");
    return 0;
}
