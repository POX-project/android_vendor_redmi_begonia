/*
 * Reverse-Engineered Source for: libalCFR.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libalCFR"

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
#include "libalCFR.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD2Ev(void) {
    ALOGD("_ZNSt11logic_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Exported Object: __cxa_terminate_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_terminate_handler = NULL;

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKS_() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD0Ev(void) {
    ALOGD("_ZNSt10bad_typeidD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC2Ev() called");
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

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC2Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC2Ev() called");
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

/* Demangled: std::__ndk1::recursive_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKl = NULL;

/* Exported Object: typeinfo name for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKm = NULL;

/* Demangled: std::__ndk1::thread::hardware_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread20hardware_concurrencyEv(void) {
    ALOGD("_ZNSt6__ndk16thread20hardware_concurrencyEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKh = NULL;

/* Exported Object: typeinfo name for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKn = NULL;

/* Exported Object: typeinfo for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13bad_exception = NULL;

/* Exported Object: typeinfo name for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKj = NULL;

/* Exported Object: typeinfo for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDs = NULL;

/* Demangled: operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnamSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: vtable for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12length_error = NULL;

/* Exported Object: typeinfo name for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKg = NULL;

/* Exported Object: typeinfo name for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPv = NULL;

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

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Exported Object: typeinfo name for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPh = NULL;

/* Demangled: __cxa_get_globals_fast */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals_fast(void) {
    ALOGD("__cxa_get_globals_fast() called");
    return 0;
}

/* Exported Object: typeinfo name for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPf = NULL;

/* Exported Object: typeinfo name for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPe = NULL;

/* Exported Object: typeinfo for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16invalid_argument = NULL;

/* Exported Object: typeinfo for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTIa = NULL;

/* Exported Object: typeinfo for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTIe = NULL;

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Exported Object: typeinfo for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIg = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo name for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPx = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: typeinfo name for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPw = NULL;

/* Exported Object: typeinfo for float */
extern "C" __attribute__((visibility("default"))) void* _ZTIf = NULL;

/* Exported Object: typeinfo for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDn = NULL;

/* Demangled: __cxa_throw */
extern "C" __attribute__((visibility("default"))) int __cxa_throw(void) {
    ALOGD("__cxa_throw() called");
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

/* Demangled: std::__ndk1::__shared_weak_count::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count4lockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count4lockEv() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_t(void) {
    ALOGD("_ZnamSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTIh = NULL;

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_all() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_allEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_allEv() called");
    return 0;
}

/* Exported Object: typeinfo name for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPs = NULL;

/* Demangled: std::__ndk1::mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex6unlockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPt = NULL;

/* Exported Object: vtable for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12domain_error = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD1Ev(void) {
    ALOGD("_ZNSt14overflow_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPo = NULL;

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD2Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD2Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count16__release_sharedEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: __cxa_end_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_end_catch(void) {
    ALOGD("__cxa_end_catch() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::wait() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4waitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4waitEv() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIy = NULL;

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD1Ev(void) {
    ALOGD("_ZNSt9exceptionD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPy = NULL;

/* Demangled: std::__ndk1::future<void>::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvE3getEv(void) {
    ALOGD("_ZNSt6__ndk16futureIvE3getEv() called");
    return 0;
}

/* Exported Object: typeinfo for void */
extern "C" __attribute__((visibility("default"))) void* _ZTIv = NULL;

/* Exported Object: typeinfo for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPs = NULL;

/* Exported Object: typeinfo for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIw = NULL;

/* Exported Object: typeinfo for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPt = NULL;

/* Exported Object: typeinfo name for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPa = NULL;

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

/* Exported Object: typeinfo for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTIj = NULL;

/* Exported Object: typeinfo for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTIm = NULL;

/* Exported Object: typeinfo for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIx = NULL;

/* Exported Object: typeinfo name for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPl = NULL;

/* Demangled: operator delete(void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvm(void) {
    ALOGD("_ZdlPvm() called");
    return 0;
}

/* Exported Object: vtable for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11range_error = NULL;

/* Exported Object: typeinfo name for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11range_error = NULL;

/* Exported Object: typeinfo for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKh = NULL;

/* Exported Object: typeinfo for short */
extern "C" __attribute__((visibility("default"))) void* _ZTIs = NULL;

/* Exported Object: typeinfo for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTIt = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__pbase_type_infoE = NULL;

/* Exported Object: typeinfo for __float128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKg = NULL;

/* Exported Object: typeinfo for double */
extern "C" __attribute__((visibility("default"))) void* _ZTId = NULL;

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD0Ev(void) {
    ALOGD("_ZNSt15underflow_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char */
extern "C" __attribute__((visibility("default"))) void* _ZTIc = NULL;

/* Exported Object: typeinfo for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKi = NULL;

/* Exported Object: typeinfo for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIb = NULL;

/* Exported Object: typeinfo name for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPd = NULL;

/* Exported Object: typeinfo for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKj = NULL;

/* Exported Object: typeinfo for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIn = NULL;

/* Exported Object: typeinfo name for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPc = NULL;

/* Exported Object: typeinfo for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKm = NULL;

/* Exported Object: typeinfo for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKl = NULL;

/* Exported Object: typeinfo for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKf = NULL;

/* Exported Object: typeinfo for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIo = NULL;

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDh = NULL;

/* Exported Object: typeinfo for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKb = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDi = NULL;

/* Exported Object: typeinfo for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKc = NULL;

/* Exported Object: typeinfo for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKd = NULL;

/* Demangled: std::__ndk1::promise<void>::get_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE10get_futureEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE10get_futureEv() called");
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

/* Exported Object: typeinfo for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKe = NULL;

/* Exported Object: typeinfo for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKa = NULL;

/* Demangled: operator new(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znwm(void) {
    ALOGD("_Znwm() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC2ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC2ERKS_() called");
    return 0;
}

/* Demangled: std::bad_exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13bad_exception4whatEv(void) {
    ALOGD("_ZNKSt13bad_exception4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13bad_exception = NULL;

/* Exported Object: vtable for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKt = NULL;

/* Demangled: std::exception_ptr::operator=(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptraSERKS_(void) {
    ALOGD("_ZNSt13exception_ptraSERKS_() called");
    return 0;
}

/* Exported Object: typeinfo for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKs = NULL;

/* Exported Object: typeinfo for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKo = NULL;

/* Exported Object: typeinfo for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKn = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD1Ev() called");
    return 0;
}

/* Demangled: operator delete(void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: __cxa_current_exception_type */
extern "C" __attribute__((visibility("default"))) int __cxa_current_exception_type(void) {
    ALOGD("__cxa_current_exception_type() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD1Ev() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD0Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD0Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_t(void) {
    ALOGD("_ZdaPvSt11align_val_t() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16bad_array_length = NULL;

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

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

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDs = NULL;

/* Demangled: alCFR_Run */
extern "C" __attribute__((visibility("default"))) int alCFR_Run(void) {
    ALOGD("alCFR_Run() called");
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

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDi = NULL;

/* Exported Object: typeinfo name for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDn = NULL;

/* Exported Object: typeinfo name for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDh = NULL;

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDi = NULL;

/* Demangled: std::bad_typeid::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt10bad_typeid4whatEv(void) {
    ALOGD("_ZNKSt10bad_typeid4whatEv() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD1Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::adopt_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110adopt_lockE = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD2Ev() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD1Ev(void) {
    ALOGD("_ZNSt8bad_castD1Ev() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC1Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12out_of_range = NULL;

/* Demangled: alCFR_FaceInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_FaceInfo_Set(void) {
    ALOGD("alCFR_FaceInfo_Set() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryC2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryC2Ev() called");
    return 0;
}

/* Demangled: alCFR_ZoomInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_ZoomInfo_Set(void) {
    ALOGD("alCFR_ZoomInfo_Set() called");
    return 0;
}

/* Demangled: __cxa_get_exception_ptr */
extern "C" __attribute__((visibility("default"))) int __cxa_get_exception_ptr(void) {
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

/* Demangled: __cxa_call_unexpected */
extern "C" __attribute__((visibility("default"))) int __cxa_call_unexpected(void) {
    ALOGD("__cxa_call_unexpected() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112future_errorE = NULL;

/* Exported Object: typeinfo name for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTSDn = NULL;

/* Exported Object: typeinfo name for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9type_info = NULL;

/* Exported Object: vtable for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11logic_error = NULL;

/* Demangled: std::set_terminate(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt13set_terminatePFvvE(void) {
    ALOGD("_ZSt13set_terminatePFvvE() called");
    return 0;
}

/* Exported Object: vtable for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9exception = NULL;

/* Demangled: operator delete[](void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvmSt11align_val_t(void) {
    ALOGD("_ZdaPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDs = NULL;

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD1Ev(void) {
    ALOGD("_ZNSt9bad_allocD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD2Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__shared_countE = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: alCFR_Instance_Run */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_Run(void) {
    ALOGD("alCFR_Instance_Run() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv123__fundamental_type_infoE = NULL;

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

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD1Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD1Ev() called");
    return 0;
}

/* Demangled: std::current_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt17current_exceptionv(void) {
    ALOGD("_ZSt17current_exceptionv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryEPKc() called");
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

/* Exported Object: typeinfo for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKv = NULL;

/* Demangled: std::__ndk1::__thread_local_data() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__thread_local_dataEv(void) {
    ALOGD("_ZNSt6__ndk119__thread_local_dataEv() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::join() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread4joinEv(void) {
    ALOGD("_ZNSt6__ndk16thread4joinEv() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKy = NULL;

/* Exported Object: typeinfo for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKw = NULL;

/* Exported Object: typeinfo for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKx = NULL;

/* Demangled: std::__ndk1::error_code::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110error_code7messageEv(void) {
    ALOGD("_ZNKSt6__ndk110error_code7messageEv() called");
    return 0;
}

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

/* Exported Object: typeinfo for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt14overflow_error = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD0Ev() called");
    return 0;
}

/* Demangled: alCFR_ExposureInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_ExposureInfo_Set(void) {
    ALOGD("alCFR_ExposureInfo_Set() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_t(void) {
    ALOGD("_ZnwmSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: __cxa_free_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_dependent_exception(void) {
    ALOGD("__cxa_free_dependent_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::bad_alloc::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9bad_alloc4whatEv(void) {
    ALOGD("_ZNKSt9bad_alloc4whatEv() called");
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

/* Demangled: std::__ndk1::thread::detach() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread6detachEv(void) {
    ALOGD("_ZNSt6__ndk16thread6detachEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__get_sp_mut(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__get_sp_mutEPKv(void) {
    ALOGD("_ZNSt6__ndk112__get_sp_mutEPKv() called");
    return 0;
}

/* Demangled: std::exception_ptr std::make_exception_ptr<std::__ndk1::future_error>(std::__ndk1::future_error) */
extern "C" __attribute__((visibility("default"))) int _ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_(void) {
    ALOGD("_ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable4waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: alCFR_Instance_Close */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_Close(void) {
    ALOGD("alCFR_Instance_Close() called");
    return 0;
}

/* Exported Object: typeinfo name for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12domain_error = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD2Ev() called");
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

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Exported Object: std::__ndk1::defer_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110defer_lockE = NULL;

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

/* Demangled: std::__ndk1::recursive_timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Demangled: __gxx_personality_v0 */
extern "C" __attribute__((visibility("default"))) int __gxx_personality_v0(void) {
    ALOGD("__gxx_personality_v0() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTISt10bad_typeid = NULL;

/* Exported Object: vtable for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16bad_array_length = NULL;

/* Demangled: std::__ndk1::error_category::default_error_condition(int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category23default_error_conditionEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category23default_error_conditionEi() called");
    return 0;
}

/* Demangled: __cxa_allocate_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_dependent_exception(void) {
    ALOGD("__cxa_allocate_dependent_exception() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD2Ev(void) {
    ALOGD("_ZNSt11range_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD1Ev() called");
    return 0;
}

/* Demangled: __cxa_rethrow_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow_primary_exception(void) {
    ALOGD("__cxa_rethrow_primary_exception() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112system_errorE = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC1ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC1ERKS_() called");
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

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Exported Object: vtable for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16nested_exception = NULL;

/* Exported Object: vtable for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13runtime_error = NULL;

/* Exported Object: typeinfo for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114error_categoryE = NULL;

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC2ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Exported Object: altek_statement */
extern "C" __attribute__((visibility("default"))) void* altek_statement = NULL;

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1EPKc(void) {
    ALOGD("_ZNSt11logic_errorC1EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__call_onceERVmPvPFvS2_E(void) {
    ALOGD("_ZNSt6__ndk111__call_onceERVmPvPFvS2_E() called");
    return 0;
}

/* Exported Object: vtable for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13bad_exception = NULL;

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exceptions */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exceptions(void) {
    ALOGD("__cxa_uncaught_exceptions() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: std::__ndk1::__sp_mut::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut6unlockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_specific_ptr<std::__ndk1::__thread_struct>::__at_thread_exit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv(void) {
    ALOGD("_ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv() called");
    return 0;
}

/* Exported Object: vtable for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt10bad_typeid = NULL;

/* Exported Object: vtable for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD1Ev(void) {
    ALOGD("_ZNSt12length_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for char */
extern "C" __attribute__((visibility("default"))) void* _ZTSc = NULL;

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD1Ev(void) {
    ALOGD("_ZNSt13runtime_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112system_errorE = NULL;

/* Exported Object: typeinfo name for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTSj = NULL;

/* Exported Object: vtable for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt14overflow_error = NULL;

/* Demangled: __sw_bind__ */
extern "C" __attribute__((visibility("default"))) int __sw_bind__(void) {
    ALOGD("__sw_bind__() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exception(void) {
    ALOGD("__cxa_uncaught_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for long */
extern "C" __attribute__((visibility("default"))) void* _ZTSl = NULL;

/* Demangled: std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15alignEmmRPvRm(void) {
    ALOGD("_ZNSt6__ndk15alignEmmRPvRm() called");
    return 0;
}

/* Exported Object: typeinfo for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11range_error = NULL;

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

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk119__shared_weak_countE = NULL;

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

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Exported Object: typeinfo name for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTSt = NULL;

/* Demangled: std::__ndk1::__throw_system_error(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__throw_system_errorEiPKc(void) {
    ALOGD("_ZNSt6__ndk120__throw_system_errorEiPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSb = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE() called");
    return 0;
}

/* Exported Object: typeinfo name for short */
extern "C" __attribute__((visibility("default"))) void* _ZTSs = NULL;

/* Exported Object: typeinfo name for double */
extern "C" __attribute__((visibility("default"))) void* _ZTSd = NULL;

/* Exported Object: typeinfo name for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTSa = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc() called");
    return 0;
}

/* Demangled: __cxa_get_globals */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals(void) {
    ALOGD("__cxa_get_globals() called");
    return 0;
}

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD2Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD2Ev() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC1ERKS_(void) {
    ALOGD("_ZNSt11logic_errorC1ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::declare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117declare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk117declare_reachableEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Exported Object: typeinfo name for float */
extern "C" __attribute__((visibility("default"))) void* _ZTSf = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__release_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count14__release_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count14__release_weakEv() called");
    return 0;
}

/* Exported Object: typeinfo name for int */
extern "C" __attribute__((visibility("default"))) void* _ZTSi = NULL;

/* Exported Object: typeinfo name for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSg = NULL;

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTSh = NULL;

/* Exported Object: typeinfo name for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTSe = NULL;

/* Demangled: std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16nested_exception = NULL;

/* Demangled: std::__ndk1::__undeclare_reachable(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__undeclare_reachableEPv(void) {
    ALOGD("_ZNSt6__ndk121__undeclare_reachableEPv() called");
    return 0;
}

/* Exported Object: __cxa_new_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_new_handler = NULL;

/* Exported Object: std::__ndk1::try_to_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk111try_to_lockE = NULL;

/* Demangled: std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__shared_countE = NULL;

/* Demangled: std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*, std::__ndk1::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Exported Object: typeinfo for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16nested_exception = NULL;

/* Demangled: operator delete(void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_t(void) {
    ALOGD("_ZdlPvSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt20bad_array_new_length = NULL;

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC1Ev() called");
    return 0;
}

/* Demangled: __cxa_pure_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_pure_virtual(void) {
    ALOGD("__cxa_pure_virtual() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9__executeEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9__executeEv() called");
    return 0;
}

/* Demangled: alCFR_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alCFR_VersionInfo_Get(void) {
    ALOGD("alCFR_VersionInfo_Get() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int __cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSw = NULL;

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

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD0Ev(void) {
    ALOGD("_ZNSt14overflow_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutex4lockEv() called");
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

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC2EPKc() called");
    return 0;
}

/* Demangled: std::uncaught_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt18uncaught_exceptionv(void) {
    ALOGD("_ZSt18uncaught_exceptionv() called");
    return 0;
}

/* Demangled: std::bad_array_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16bad_array_length4whatEv(void) {
    ALOGD("_ZNKSt16bad_array_length4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSo = NULL;

/* Exported Object: typeinfo name for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSn = NULL;

/* Demangled: std::uncaught_exceptions() */
extern "C" __attribute__((visibility("default"))) int _ZSt19uncaught_exceptionsv(void) {
    ALOGD("_ZSt19uncaught_exceptionsv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTSm = NULL;

/* Demangled: std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSy = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD2Ev() called");
    return 0;
}

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

/* Exported Object: vtable for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9bad_alloc = NULL;

/* Exported Object: typeinfo name for void */
extern "C" __attribute__((visibility("default"))) void* _ZTSv = NULL;

/* Demangled: __cxa_guard_release */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_release(void) {
    ALOGD("__cxa_guard_release() called");
    return 0;
}

/* Exported Object: vtable for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9type_info = NULL;

/* Demangled: __cxa_allocate_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_exception(void) {
    ALOGD("__cxa_allocate_exception() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Exported Object: vtable for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__pbase_type_infoE = NULL;

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

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt20bad_array_new_length = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD2Ev(void) {
    ALOGD("_ZNSt8bad_castD2Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD1Ev(void) {
    ALOGD("_ZNSt10bad_typeidD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9type_info = NULL;

/* Demangled: alCFR_Init */
extern "C" __attribute__((visibility("default"))) int alCFR_Init(void) {
    ALOGD("alCFR_Init() called");
    return 0;
}

/* Demangled: std::__ndk1::__basic_string_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: alCFR_Instance_Init */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_Init(void) {
    ALOGD("alCFR_Instance_Init() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC1Ev(void) {
    ALOGD("_ZNSt10bad_typeidC1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::allocator_arg */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk113allocator_argE = NULL;

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

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD0Ev(void) {
    ALOGD("_ZNSt9bad_allocD0Ev() called");
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

/* Demangled: __cxa_deleted_virtual */
extern "C" __attribute__((visibility("default"))) int __cxa_deleted_virtual(void) {
    ALOGD("__cxa_deleted_virtual() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD2Ev() called");
    return 0;
}

/* Demangled: alCFR_Instance_FaceInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_FaceInfo_Set(void) {
    ALOGD("alCFR_Instance_FaceInfo_Set() called");
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

/* Demangled: std::bad_array_new_length::~bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthD0Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112future_errorE = NULL;

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info(void) {
    ALOGD("_ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info() called");
    return 0;
}

/* Demangled: __cxa_guard_abort */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_abort(void) {
    ALOGD("__cxa_guard_abort() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC1Ev() called");
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

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: __cxa_begin_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_begin_catch(void) {
    ALOGD("__cxa_begin_catch() called");
    return 0;
}

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD2Ev(void) {
    ALOGD("_ZNSt14overflow_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(void) {
    ALOGD("_ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: operator delete(void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvmSt11align_val_t(void) {
    ALOGD("_ZdlPvmSt11align_val_t() called");
    return 0;
}

/* Exported Object: __cxa_sync_lock */
extern "C" __attribute__((visibility("default"))) void* __cxa_sync_lock = NULL;

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

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD0Ev(void) {
    ALOGD("_ZNSt13runtime_errorD0Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: __cxa_free_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_exception(void) {
    ALOGD("__cxa_free_exception() called");
    return 0;
}

/* Demangled: std::__ndk1::system_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115system_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115system_categoryEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: std::__ndk1::timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: __cxa_decrement_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_decrement_exception_refcount(void) {
    ALOGD("__cxa_decrement_exception_refcount() called");
    return 0;
}

/* Demangled: std::__ndk1::__sp_mut::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut4lockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut4lockEv() called");
    return 0;
}

/* Demangled: alCFR_Close */
extern "C" __attribute__((visibility("default"))) int alCFR_Close(void) {
    ALOGD("alCFR_Close() called");
    return 0;
}

/* Demangled: __dynamic_cast */
extern "C" __attribute__((visibility("default"))) int __dynamic_cast(void) {
    ALOGD("__dynamic_cast() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD2Ev(void) {
    ALOGD("_ZNSt12domain_errorD2Ev() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD0Ev(void) {
    ALOGD("_ZNSt8bad_castD0Ev() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnwmSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD0Ev() called");
    return 0;
}

/* Demangled: std::set_unexpected(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt14set_unexpectedPFvvE(void) {
    ALOGD("_ZSt14set_unexpectedPFvvE() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt10unexpectedv(void) {
    ALOGD("_ZSt10unexpectedv() called");
    return 0;
}

/* Exported Object: __cxa_unexpected_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_unexpected_handler = NULL;

/* Demangled: std::__ndk1::declare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119declare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk119declare_no_pointersEPcm() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9set_valueEv() called");
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

/* Exported Object: typeinfo name for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDi = NULL;

/* Exported Object: typeinfo name for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDh = NULL;

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD1Ev(void) {
    ALOGD("_ZNSt15underflow_errorD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

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

/* Exported Object: typeinfo for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDs = NULL;

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD1Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::logic_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt11logic_error4whatEv(void) {
    ALOGD("_ZNKSt11logic_error4whatEv() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD2Ev(void) {
    ALOGD("_ZNSt9bad_allocD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDn = NULL;

/* Exported Object: typeinfo name for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt15underflow_error = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD2Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD2Ev() called");
    return 0;
}

/* Demangled: __cxa_rethrow */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow(void) {
    ALOGD("__cxa_rethrow() called");
    return 0;
}

/* Demangled: __cxa_increment_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_increment_exception_refcount(void) {
    ALOGD("__cxa_increment_exception_refcount() called");
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

/* Exported Object: typeinfo for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED2Ev() called");
    return 0;
}

/* Demangled: __cxa_current_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_current_primary_exception(void) {
    ALOGD("__cxa_current_primary_exception() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD0Ev(void) {
    ALOGD("_ZNSt9type_infoD0Ev() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD0Ev(void) {
    ALOGD("_ZNSt12length_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&, std::__ndk1::unique_lock<std::__ndk1::mutex>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt14overflow_error = NULL;

/* Demangled: alCFR_Instance_ExposureInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_ExposureInfo_Set(void) {
    ALOGD("alCFR_Instance_ExposureInfo_Set() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC1Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::operator=(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_erroraSERKS_(void) {
    ALOGD("_ZNSt13runtime_erroraSERKS_() called");
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

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD2Ev(void) {
    ALOGD("_ZNSt13runtime_errorD2Ev() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD0Ev(void) {
    ALOGD("_ZNSt12domain_errorD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD0Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__shared_countE = NULL;

/* Exported Object: typeinfo for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDi = NULL;

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD0Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv119__pointer_type_infoE = NULL;

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Exported Object: typeinfo for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDs = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD2Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD2Ev() called");
    return 0;
}

/* Demangled: std::get_terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt13get_terminatev(void) {
    ALOGD("_ZSt13get_terminatev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114error_categoryE = NULL;

/* Exported Object: typeinfo for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPl = NULL;

/* Exported Object: typeinfo name for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKa = NULL;

/* Exported Object: typeinfo for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPd = NULL;

/* Exported Object: typeinfo for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDh = NULL;

/* Exported Object: typeinfo name for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKb = NULL;

/* Exported Object: typeinfo for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPc = NULL;

/* Exported Object: typeinfo for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTIDn = NULL;

/* Exported Object: typeinfo name for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKd = NULL;

/* Exported Object: typeinfo for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDn = NULL;

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

/* Exported Object: typeinfo name for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKc = NULL;

/* Exported Object: typeinfo for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDi = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::undeclare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121undeclare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk121undeclare_no_pointersEPcm() called");
    return 0;
}

/* Exported Object: typeinfo name for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKe = NULL;

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD1Ev(void) {
    ALOGD("_ZNSt9type_infoD1Ev() called");
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

/* Exported Object: typeinfo for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPn = NULL;

/* Demangled: operator delete(void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: alCFR_Instance_ZoomInfo_Set */
extern "C" __attribute__((visibility("default"))) int alCFR_Instance_ZoomInfo_Set(void) {
    ALOGD("alCFR_Instance_ZoomInfo_Set() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPm = NULL;

/* Demangled: std::get_unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt14get_unexpectedv(void) {
    ALOGD("_ZSt14get_unexpectedv() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPw = NULL;

/* Exported Object: typeinfo for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPx = NULL;

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: std::set_new_handler(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt15set_new_handlerPFvvE(void) {
    ALOGD("_ZSt15set_new_handlerPFvvE() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Exported Object: vtable for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt15underflow_error = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__pbase_type_infoE = NULL;

/* Exported Object: typeinfo for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPi = NULL;

/* Exported Object: typeinfo for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPj = NULL;

/* Demangled: std::__ndk1::future_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115future_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115future_categoryEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPe = NULL;

/* Demangled: std::nested_exception::rethrow_nested() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16nested_exception14rethrow_nestedEv(void) {
    ALOGD("_ZNKSt16nested_exception14rethrow_nestedEv() called");
    return 0;
}

/* Exported Object: typeinfo for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPf = NULL;

/* Exported Object: typeinfo for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPh = NULL;

/* Exported Object: typeinfo for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDs = NULL;

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD1Ev(void) {
    ALOGD("_ZNSt13exception_ptrD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPg = NULL;

/* Demangled: std::exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt9exception4whatEv(void) {
    ALOGD("_ZNKSt9exception4whatEv() called");
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

/* Demangled: std::exception::~exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9exceptionD0Ev(void) {
    ALOGD("_ZNSt9exceptionD0Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: vtable for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__assoc_sub_stateE = NULL;

/* Exported Object: typeinfo name for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKy = NULL;

/* Demangled: std::__ndk1::shared_future<void>::operator=(std::__ndk1::shared_future<void> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvEaSERKS1_(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvEaSERKS1_() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKt = NULL;

/* Demangled: alCFR_TuningData_VersionInfo_Get */
extern "C" __attribute__((visibility("default"))) int alCFR_TuningData_VersionInfo_Get(void) {
    ALOGD("alCFR_TuningData_VersionInfo_Get() called");
    return 0;
}

/* Exported Object: typeinfo name for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKx = NULL;

/* Demangled: std::__ndk1::get_pointer_safety() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118get_pointer_safetyEv(void) {
    ALOGD("_ZNSt6__ndk118get_pointer_safetyEv() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKw = NULL;

/* Demangled: std::__ndk1::bad_weak_ptr::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112bad_weak_ptr4whatEv(void) {
    ALOGD("_ZNKSt6__ndk112bad_weak_ptr4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt15underflow_error = NULL;

/* Demangled: std::__ndk1::mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKi = NULL;

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC2Ev(void) {
    ALOGD("_ZNSt8bad_castC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE9set_valueEv() called");
    return 0;
}

/* Exported Object: typeinfo name for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKs = NULL;

/* Exported Object: typeinfo name for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKv = NULL;

/* Demangled: __cxa_guard_acquire */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_acquire(void) {
    ALOGD("__cxa_guard_acquire() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD2Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKo = NULL;
