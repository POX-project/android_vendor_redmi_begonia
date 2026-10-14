/*
 * Reverse-Engineered Source for: libc++_shared.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 64-bit)
 */

#define LOG_TAG "libc++_shared"

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
#include "libc++_shared.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE10do_unshiftERS1_PcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE10do_unshiftERS1_PcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE16do_always_noconvEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_variant_access */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt18bad_variant_access = NULL;

/* Demangled: std::__ndk1::align(unsigned long, unsigned long, void*&, unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15alignEmmRPvRm(void) {
    ALOGD("_ZNSt6__ndk15alignEmmRPvRm() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTSt = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<char32_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IDiLb0EEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::numpunct<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18numpunctIwEE = NULL;

/* Exported Object: typeinfo name for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTSb = NULL;

/* Demangled: std::__ndk1::__libcpp_debug_exception::~__libcpp_debug_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionD1Ev(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionD1Ev() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_get_base::__get_base(std::__ndk1::ios_base&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__num_get_base10__get_baseERNS_8ios_baseE(void) {
    ALOGD("_ZNSt6__ndk114__num_get_base10__get_baseERNS_8ios_baseE() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::moneypunct_byname<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117moneypunct_bynameIwLb0EEE = NULL;

/* Demangled: std::__ndk1::__libcpp_db::unlock() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db6unlockEv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE9do_lengthERS1_PKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE9do_lengthERS1_PKcS5_m() called");
    return 0;
}

/* Demangled: std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwRKNS_12basic_stringIwS3_NS_9allocatorIwEEEE(void) {
    ALOGD("_ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwRKNS_12basic_stringIwS3_NS_9allocatorIwEEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for double */
extern "C" __attribute__((visibility("default"))) void* _ZTSd = NULL;

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC2Ev(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__narrow_to_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk116__narrow_to_utf8ILm16EEE = NULL;

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::numpunct_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcEC1EPKcm() called");
    return 0;
}

/* Demangled: _Unwind_Backtrace */
extern "C" __attribute__((visibility("default"))) int _Unwind_Backtrace(void) {
    ALOGD("_Unwind_Backtrace() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::time */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale4timeE = NULL;

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

/* Exported Object: typeinfo for std::__ndk1::__num_get_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__num_get_baseE = NULL;

/* Exported Object: std::__ndk1::ctype_base::lower */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5lowerE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7reserveEm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7reserveEm() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE10do_unshiftERS1_PcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE10do_unshiftERS1_PcS4_RS4_() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::ate */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3ateE = NULL;

/* Exported Object: VTT for std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__less_than_comparable(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db22__less_than_comparableEPKvS2_(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db22__less_than_comparableEPKvS2_() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERw(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERw() called");
    return 0;
}

/* Demangled: _Unwind_GetRegionStart */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetRegionStart(void) {
    ALOGD("_Unwind_GetRegionStart() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2ERKS0_RKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEi(void) {
    ALOGD("_ZNSt6__ndk16localeC2ERKS0_RKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<int, int>&, int*>(int*, int*, std::__ndk1::__less<int, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<long, long>&, long*>(long*, long*, std::__ndk1::__less<long, long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIllEEPlEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIllEEPlEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115time_get_bynameIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignERKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignERKS5_mm() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::locale::global(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale6globalERKS0_(void) {
    ALOGD("_ZNSt6__ndk16locale6globalERKS0_() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > >) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE(void) {
    ALOGD("_ZNSt6__ndk118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__money_put<wchar_t>::__format(wchar_t*, wchar_t*&, wchar_t*&, unsigned int, wchar_t const*, wchar_t const*, std::__ndk1::ctype<wchar_t> const&, bool, std::__ndk1::money_base::pattern const&, wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_putIwE8__formatEPwRS2_S3_jPKwS5_RKNS_5ctypeIwEEbRKNS_10money_base7patternEwwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNSE_IwNSF_IwEENSH_IwEEEESQ_i(void) {
    ALOGD("_ZNSt6__ndk111__money_putIwE8__formatEPwRS2_S3_jPKwS5_RKNS_5ctypeIwEEbRKNS_10money_base7patternEwwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNSE_IwNSF_IwEENSH_IwEEEESQ_i() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::id::__next_id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale2id9__next_idE = NULL;

/* Demangled: std::__ndk1::__shared_weak_count::__get_deleter(std::type_info const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info(void) {
    ALOGD("_ZNKSt6__ndk119__shared_weak_count13__get_deleterERKSt9type_info() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::in */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base2inE = NULL;

/* Demangled: std::get_unexpected() */
extern "C" __attribute__((visibility("default"))) int _ZSt14get_unexpectedv(void) {
    ALOGD("_ZSt14get_unexpectedv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >& (*)(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRS3_S4_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRS3_S4_E() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::numpunct_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115numpunct_bynameIcEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >& (*)(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRNS_9basic_iosIcS2_EES6_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRNS_9basic_iosIcS2_EES6_E() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKw() called");
    return 0;
}

/* Exported Object: typeinfo name for float */
extern "C" __attribute__((visibility("default"))) void* _ZTSf = NULL;

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRf(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRf() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<char32_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IDiLb0EEE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_monthname(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__get_monthnameERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__get_monthnameERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_white_space(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::ostrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk110ostrstreamE = NULL;

/* Demangled: _Unwind_GetGR */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetGR(void) {
    ALOGD("_Unwind_GetGR() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__num_get<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19__num_getIwEE = NULL;

/* Exported Object: std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

/* Exported Object: construction vtable for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE0_NS_13basic_istreamIcS2_EE = NULL;

/* Demangled: std::__ndk1::locale::operator=(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeaSERKS0_(void) {
    ALOGD("_ZNSt6__ndk16localeaSERKS0_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::moneypunct<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110moneypunctIwLb0EEE = NULL;

/* Demangled: std::experimental::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12experimental19bad_optional_accessD0Ev(void) {
    ALOGD("_ZNSt12experimental19bad_optional_accessD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char */
extern "C" __attribute__((visibility("default"))) void* _ZTSh = NULL;

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk16localeC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex8try_lockEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112codecvt_baseE = NULL;

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwb(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwb() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::id::__get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale2id5__getEv(void) {
    ALOGD("_ZNSt6__ndk16locale2id5__getEv() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<wchar_t, wchar_t>&, wchar_t*>(wchar_t*, wchar_t*, std::__ndk1::__less<wchar_t, wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIwwEEPwEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIwwEEPwEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_percent(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_thousands_sepEv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE16do_always_noconvEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::experimental::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt12experimental19bad_optional_accessE = NULL;

/* Demangled: __cxa_rethrow_primary_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_rethrow_primary_exception(void) {
    ALOGD("__cxa_rethrow_primary_exception() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwd(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwd() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt19bad_optional_access = NULL;

/* Demangled: std::__ndk1::stol(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stolERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk14stolERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype<char>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk15ctypeIcE2idE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubsync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7pubsyncEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7pubsyncEv() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2ERKS0_PKci(void) {
    ALOGD("_ZNSt6__ndk16localeC2ERKS0_PKci() called");
    return 0;
}

/* Exported Object: std::__ndk1::cout */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk14coutE = NULL;

/* Exported Object: typeinfo for std::__ndk1::ios_base::failure */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18ios_base7failureE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_istream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEC1EPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEC1EPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: __cxa_decrement_exception_refcount */
extern "C" __attribute__((visibility("default"))) int __cxa_decrement_exception_refcount(void) {
    ALOGD("__cxa_decrement_exception_refcount() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(char const*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_(void) {
    ALOGD("_ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EEw(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EEw() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_12_hour(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_12_hourERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_12_hourERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::allocator<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_RKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_RKS4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::numpunct_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115numpunct_bynameIwEE = NULL;

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct27__make_ready_at_thread_exitEPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIcE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIcE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIcc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIcc9mbstate_tED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRl(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRl() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1::ctype<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwE4initERKNS_5ctypeIwEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwE4initERKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: vtable for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt8bad_cast = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKwSC_(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKwSC_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: typeinfo for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11range_error = NULL;

/* Exported Object: std::__ndk1::ios_base::app */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3appE = NULL;

/* Demangled: std::__ndk1::ios_base::register_callback(void (*)(std::__ndk1::ios_base::event, std::__ndk1::ios_base&, int), int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base17register_callbackEPFvNS0_5eventERS0_iEi(void) {
    ALOGD("_ZNSt6__ndk18ios_base17register_callbackEPFvNS0_5eventERS0_iEi() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<char>::__time_get_storage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcEC1EPKc(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcEC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcmm() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvmSt11align_val_t(void) {
    ALOGD("_ZdaPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(std::__ndk1::__wrap_iter<char const*>, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertENS_11__wrap_iterIPKcEEc() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::alpha */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5alphaE = NULL;

/* Demangled: std::__ndk1::ctype<char>::do_widen(char const*, char const*, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE8do_widenEPKcS3_Pc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE8do_widenEPKcS3_Pc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::sentry(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC2ERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC2ERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::cerr */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk14cerrE = NULL;

/* Demangled: std::__ndk1::error_code::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110error_code7messageEv(void) {
    ALOGD("_ZNKSt6__ndk110error_code7messageEv() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRd(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRd() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRd(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRd() called");
    return 0;
}

/* Demangled: _Unwind_RaiseException */
extern "C" __attribute__((visibility("default"))) int _Unwind_RaiseException(void) {
    ALOGD("_Unwind_RaiseException() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::locale::facet */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk16locale5facetE = NULL;

/* Exported Object: __cxa_unexpected_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_unexpected_handler = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD1Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find_first_of(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE13find_first_ofEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE13find_first_ofEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, bool&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRb(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRb() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIwE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIwE16do_thousands_sepEv() called");
    return 0;
}

/* Exported Object: typeinfo name for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSx = NULL;

/* Exported Object: typeinfo for std::__ndk1::collate_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114collate_bynameIwEE = NULL;

/* Demangled: std::__ndk1::collate_byname<char>::do_transform(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114collate_bynameIcE12do_transformEPKcS3_(void) {
    ALOGD("_ZNKSt6__ndk114collate_bynameIcE12do_transformEPKcS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, bool&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRb(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRb() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwl(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwl() called");
    return 0;
}

/* Exported Object: vtable for std::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12bad_any_cast = NULL;

/* Demangled: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertIPKwEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPwEEE4typeENSB_IS8_EESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertIPKwEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPwEEE4typeENSB_IS8_EESA_SA_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertIPKwEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPwEEE4typeENSB_IS8_EESA_SA_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1Ev() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<signed char, signed char>&, signed char*>(signed char*, signed char*, std::__ndk1::__less<signed char, signed char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIaaEEPaEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIaaEEPaEEbT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__enum_type_infoE = NULL;

/* Exported Object: std::__ndk1::wclog */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk15wclogE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__libcpp_debug_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk124__libcpp_debug_exceptionE = NULL;

/* Exported Object: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

/* Demangled: std::__ndk1::shared_timed_mutex::lock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex11lock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex11lock_sharedEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::ostrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110ostrstreamE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPclc(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPclc() called");
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

/* Demangled: _Unwind_SetIP */
extern "C" __attribute__((visibility("default"))) int _Unwind_SetIP(void) {
    ALOGD("_Unwind_SetIP() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(long double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERe(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERe() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwx(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwx() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<char, char>&, char*>(char*, char*, std::__ndk1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIccEEPcEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIccEEPcEEvT0_S5_T_() called");
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

/* Demangled: std::__ndk1::to_string(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEl(void) {
    ALOGD("_ZNSt6__ndk19to_stringEl() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwEC1EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRf(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRf() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17codecvtIcc9mbstate_tEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IwLb0EEE = NULL;

/* Demangled: std::__ndk1::ctype<char>::do_widen(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE8do_widenEc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE8do_widenEc() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_timed_mutex::try_lock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex15try_lock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex15try_lock_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEj(void) {
    ALOGD("_ZNSt6__ndk19to_stringEj() called");
    return 0;
}

/* Exported Object: typeinfo name for void */
extern "C" __attribute__((visibility("default"))) void* _ZTSv = NULL;

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE9do_lengthERS1_PKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE9do_lengthERS1_PKcS5_m() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__time_get_c_storage<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk120__time_get_c_storageIcEE = NULL;

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD1Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRt(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRt() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: std::__ndk1::codecvt<char32_t, char, mbstate_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17codecvtIDic9mbstate_tE2idE = NULL;

/* Exported Object: typeinfo for std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::ctype_byname<char>::do_toupper(char*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIcE10do_toupperEPcPKc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIcE10do_toupperEPcPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf9pbackfailEi(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf9pbackfailEi() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, false>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE16do_positive_signEv() called");
    return 0;
}

/* Exported Object: typeinfo for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKv = NULL;

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD1Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRl(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRl() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnwmRKSt9nothrow_t(void) {
    ALOGD("_ZnwmRKSt9nothrow_t() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_sscanf_l(char const*, __locale_t*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__libcpp_sscanf_lEPKcP10__locale_tS1_z(void) {
    ALOGD("_ZNSt6__ndk117__libcpp_sscanf_lEPKcP10__locale_tS1_z() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__time_get_storage<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk118__time_get_storageIwEE = NULL;

/* Demangled: _Unwind_GetLanguageSpecificData */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetLanguageSpecificData(void) {
    ALOGD("_Unwind_GetLanguageSpecificData() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(float) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEf(void) {
    ALOGD("_ZNSt6__ndk19to_stringEf() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__num_put<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19__num_putIcEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE16do_positive_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE10do_unshiftERS1_PcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE10do_unshiftERS1_PcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_year(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE10__get_yearERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE10__get_yearERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: std::__ndk1::adopt_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110adopt_lockE = NULL;

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD2Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEd(void) {
    ALOGD("_ZNSt6__ndk19to_stringEd() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8overflowEi() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<unsigned long long, unsigned long long>&, unsigned long long*>(unsigned long long*, unsigned long long*, std::__ndk1::__less<unsigned long long, unsigned long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIyyEEPyEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIyyEEPyEEvT0_S5_T_() called");
    return 0;
}

/* Exported Object: __bss_start__ */
extern "C" __attribute__((visibility("default"))) void* __bss_start__ = NULL;

/* Demangled: std::__ndk1::ios_base::imbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk18ios_base5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERi(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_streambuf(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1ERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC1ERKS3_() called");
    return 0;
}

/* Exported Object: typeinfo for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKx = NULL;

/* Exported Object: typeinfo for std::__ndk1::money_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110money_baseE = NULL;

/* Exported Object: vtable for std::bad_variant_access */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt18bad_variant_access = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_hour(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE10__get_hourERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE10__get_hourERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: std::__ndk1::collate<wchar_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17collateIwE2idE = NULL;

/* Demangled: operator new[](unsigned long) */
extern "C" __attribute__((visibility("default"))) int _Znam(void) {
    ALOGD("_Znam() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_6 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_6E = NULL;

/* Demangled: std::__ndk1::ios_base::move(std::__ndk1::ios_base&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4moveERS0_(void) {
    ALOGD("_ZNSt6__ndk18ios_base4moveERS0_() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD0Ev(void) {
    ALOGD("_ZNSt9type_infoD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::uflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5uflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5uflowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPcl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::stoi(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::ctype<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk15ctypeIcEE = NULL;

/* Demangled: std::logic_error::logic_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2EPKc(void) {
    ALOGD("_ZNSt11logic_errorC2EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::ctype(unsigned long const*, bool, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcEC1EPKmbm(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcEC1EPKmbm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEmw() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19basic_iosIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::__shared_mutex_base::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base8try_lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::~__codecvt_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__codecvt_utf8IDiED0Ev(void) {
    ALOGD("_ZNSt6__ndk114__codecvt_utf8IDiED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Exported Object: typeinfo for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9bad_alloc = NULL;

/* Demangled: std::__ndk1::__time_get_storage<char>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIcED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base6unlockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base6unlockEv() called");
    return 0;
}

/* Demangled: std::nested_exception::~nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionD0Ev(void) {
    ALOGD("_ZNSt16nested_exceptionD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::do_toupper(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE10do_toupperEc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE10do_toupperEc() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::~ios_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_baseD2Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_baseD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm32EED2Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm32EED2Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::ostrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk110ostrstreamE0_NS_13basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPKcl(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPKcl() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC1EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<char>::__analyze(char, std::__ndk1::ctype<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcE9__analyzeEcRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcE9__analyzeEcRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12out_of_range = NULL;

/* Exported Object: typeinfo name for std::__ndk1::time_put_byname<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115time_put_bynameIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::swap(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4swapERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_value_at_thread_exit() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state24set_value_at_thread_exitEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct_byname<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117moneypunct_bynameIwLb1EEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE6do_outERS1_PKwS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE6do_outERS1_PKwS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIwED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt14overflow_error = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8_utf16<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk120__codecvt_utf8_utf16IwEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::collate_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114collate_bynameIcEE = NULL;

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::basic_iostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__c() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE3__cEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE3__cEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long, std::__ndk1::allocator<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_mmRKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_mmRKS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::clear(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base5clearEj(void) {
    ALOGD("_ZNSt6__ndk18ios_base5clearEj() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_() called");
    return 0;
}

/* Demangled: std::__ndk1::istrstream::~istrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110istrstreamD1Ev(void) {
    ALOGD("_ZNSt6__ndk110istrstreamD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17codecvtIcc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(char&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERc(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8_utf16<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk120__codecvt_utf8_utf16IDsEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERy(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERy() called");
    return 0;
}

/* Demangled: std::__ndk1::valarray<unsigned long>::resize(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18valarrayImE6resizeEmm(void) {
    ALOGD("_ZNSt6__ndk18valarrayImE6resizeEmm() called");
    return 0;
}

/* Demangled: __cxa_vec_cctor */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_cctor(void) {
    ALOGD("__cxa_vec_cctor() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::~strstreambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufD1Ev(void) {
    ALOGD("_ZNSt6__ndk112strstreambufD1Ev() called");
    return 0;
}

/* Demangled: __deregister_frame */
extern "C" __attribute__((visibility("default"))) int __deregister_frame(void) {
    ALOGD("__deregister_frame() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk19strstreamE0_NS_13basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __cxa_vec_cleanup */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_cleanup(void) {
    ALOGD("__cxa_vec_cleanup() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<char, true>::intl */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIcLb1EE4intlE = NULL;

/* Exported Object: std::__ndk1::__rs_default::__c_ */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112__rs_default4__c_E = NULL;

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcx(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcx() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__libcpp_debug_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk124__libcpp_debug_exceptionE = NULL;

/* Demangled: std::__ndk1::locale::facet::~facet() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale5facetD2Ev(void) {
    ALOGD("_ZNSt6__ndk16locale5facetD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112future_errorE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::~__libcpp_debug_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionD2Ev(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8_utf16<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk120__codecvt_utf8_utf16IDiEE = NULL;

/* Exported Object: vtable for std::__ndk1::ios_base */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18ios_baseE = NULL;

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<float, float>&, float*>(float*, float*, std::__ndk1::__less<float, float>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<char, char>&, char*>(char*, char*, char*, char*, char*, std::__ndk1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIccEEPcEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIccEEPcEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPKv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPKv() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwEC2EPKcm() called");
    return 0;
}

/* Demangled: std::experimental::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12experimental19bad_optional_accessD2Ev(void) {
    ALOGD("_ZNSt12experimental19bad_optional_accessD2Ev() called");
    return 0;
}

/* Exported Object: __cxa_new_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_new_handler = NULL;

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcl(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcl() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception(std::__ndk1::__libcpp_debug_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC2ERKNS_19__libcpp_debug_infoE(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC2ERKNS_19__libcpp_debug_infoE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::istrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110istrstreamE = NULL;

/* Exported Object: std::__ndk1::ios_base::eofbit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base6eofbitE = NULL;

/* Demangled: std::__ndk1::moneypunct<char, false>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE14do_curr_symbolEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm16EED2Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm16EED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__do_get_signedIlEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__do_get_signedIlEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::moneypunct_byname<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117moneypunct_bynameIwLb1EEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IDsLb1EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IDsLb1EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE21__grow_by_and_replaceEmmmmmmPKw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE21__grow_by_and_replaceEmmmmmmPKw() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::strstreambuf */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112strstreambufE = NULL;

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

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPKcl(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPKcl() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<wchar_t>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception(std::__ndk1::__libcpp_debug_exception const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC2ERKS0_(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC2ERKS0_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_am_pm(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_am_pmERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_am_pmERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__codecvt_utf8IDiEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(short&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERs(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERs() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_3 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_3E = NULL;

/* Demangled: long std::__ndk1::__num_get_signed_integral<long>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125__num_get_signed_integralIlEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk125__num_get_signed_integralIlEET_PKcS3_Rji() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(unsigned char*, long, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPhlS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPhlS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIcE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIcE16do_decimal_pointEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<signed char, signed char>&, signed char*>(signed char*, signed char*, std::__ndk1::__less<signed char, signed char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIaaEEPaEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIaaEEPaEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned long long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedIyEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedIyEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__num_get<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19__num_getIcEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114codecvt_bynameIDic9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::bad_weak_ptr::~bad_weak_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112bad_weak_ptrD0Ev(void) {
    ALOGD("_ZNSt6__ndk112bad_weak_ptrD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::messages<char>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18messagesIcE2idE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(std::__ndk1::fpos<mbstate_t>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI9mbstate_tEE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI9mbstate_tEE() called");
    return 0;
}

/* Demangled: std::__ndk1::random_device::random_device(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::bad_optional_access::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt19bad_optional_access4whatEv(void) {
    ALOGD("_ZNKSt19bad_optional_access4whatEv() called");
    return 0;
}

/* Demangled: __cxa_allocate_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_exception(void) {
    ALOGD("__cxa_allocate_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9exception = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__libcpp_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_dbC1Ev(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_dbC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, bool) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcb(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcb() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::seekg(long long, std::__ndk1::ios_base::seekdir) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcd(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcd() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::numpunct<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18numpunctIcEE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::reserve(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm16EED2Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm16EED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_put_base::__identify_padding(char*, char*, std::__ndk1::ios_base const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE(void) {
    ALOGD("_ZNSt6__ndk114__num_put_base18__identify_paddingEPcS1_RKNS_8ios_baseE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IwLb1EEE = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_monthname(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__get_monthnameERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__get_monthnameERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::collate_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcEC1EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::locale::__global() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale8__globalEv(void) {
    ALOGD("_ZNSt6__ndk16locale8__globalEv() called");
    return 0;
}

/* Demangled: std::nested_exception::nested_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16nested_exceptionC2Ev(void) {
    ALOGD("_ZNSt16nested_exceptionC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(wchar_t, bool&, char&, char*, char*&, wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIwE19__stage2_float_loopEwRbRcPcRS4_wwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjPw(void) {
    ALOGD("_ZNSt6__ndk19__num_getIwE19__stage2_float_loopEwRbRcPcRS4_wwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjPw() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::strstreambuf */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112strstreambufE = NULL;

/* Exported Object: typeinfo for std::__ndk1::codecvt<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17codecvtIwc9mbstate_tEE = NULL;

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<signed char, signed char>&, signed char*>(signed char*, signed char*, signed char*, signed char*, signed char*, std::__ndk1::__less<signed char, signed char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIaaEEPaEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIaaEEPaEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::numpunct(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIcEC1Em(void) {
    ALOGD("_ZNSt6__ndk18numpunctIcEC1Em() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERm(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERm() called");
    return 0;
}

/* Exported Object: std::__ndk1::cin */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk13cinE = NULL;

/* Demangled: std::__ndk1::ios_base::failure::~failure() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureD0Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbackfail(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pbackfailEi() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::get_new_handler() */
extern "C" __attribute__((visibility("default"))) int _ZSt15get_new_handlerv(void) {
    ALOGD("_ZSt15get_new_handlerv() called");
    return 0;
}

/* Demangled: std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::locale const&, unsigned int, unsigned int&, bool&, std::__ndk1::ctype<wchar_t> const&, std::__ndk1::unique_ptr<wchar_t, void (*)(void*)>&, wchar_t*&, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIwEERNS_10unique_ptrIwPFvPvEEERPwSM_(void) {
    ALOGD("_ZNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIwEERNS_10unique_ptrIwPFvPvEEERPwSM_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::collate_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114collate_bynameIcEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pbump(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5pbumpEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5pbumpEi() called");
    return 0;
}

/* Demangled: std::__ndk1::collate<wchar_t>::do_hash(wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIwE7do_hashEPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIwE7do_hashEPKwS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::badbit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base6badbitE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__narrow_to_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk116__narrow_to_utf8ILm16EEE = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<double, double>&, double*>(double*, double*, std::__ndk1::__less<double, double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIddEEPdEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIddEEPdEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubseekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE10pubseekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE10pubseekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ostrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110ostrstreamE = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD2Ev(void) {
    ALOGD("_ZNSt14overflow_errorD2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19basic_iosIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114codecvt_bynameIDsc9mbstate_tEE = NULL;

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<unsigned short, unsigned short>&, unsigned short*>(unsigned short*, unsigned short*, unsigned short*, unsigned short*, unsigned short*, std::__ndk1::__less<unsigned short, unsigned short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIttEEPtEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIttEEPtEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo name for half const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDh = NULL;

/* Demangled: std::__ndk1::__thread_specific_ptr<std::__ndk1::__thread_struct>::__at_thread_exit(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv(void) {
    ALOGD("_ZNSt6__ndk121__thread_specific_ptrINS_15__thread_structEE16__at_thread_exitEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: _bss_end__ */
extern "C" __attribute__((visibility("default"))) void* _bss_end__ = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::gbump(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5gbumpEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5gbumpEi() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::classic() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale7classicEv(void) {
    ALOGD("_ZNSt6__ndk16locale7classicEv() called");
    return 0;
}

/* Demangled: std::bad_alloc::~bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocD1Ev(void) {
    ALOGD("_ZNSt9bad_allocD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: std::__ndk1::ios_base::Init::~Init() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4InitD2Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base4InitD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12domain_error = NULL;

/* Exported Object: vtable for std::__ndk1::messages<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18messagesIwEE = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<float, float>&, float*>(float*, float*, std::__ndk1::__less<float, float>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIffEEPfEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIffEEPfEEbT0_S5_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__codecvt_utf8IDiEE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find(wchar_t, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEwm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEwm() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::space */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5spaceE = NULL;

/* Exported Object: vtable for std::__ndk1::collate<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17collateIwEE = NULL;

/* Demangled: std::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt19bad_optional_accessD0Ev(void) {
    ALOGD("_ZNSt19bad_optional_accessD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16bad_array_length = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_decimal_pointEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct_byname<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117moneypunct_bynameIwLb0EEE = NULL;

/* Demangled: std::__ndk1::strstreambuf::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf9underflowEv(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf9underflowEv() called");
    return 0;
}

/* Demangled: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertIPKcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPcEEE4typeENSB_IS8_EESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertIPKcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPcEEE4typeENSB_IS8_EESA_SA_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertIPKcEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr38__libcpp_string_gets_noexcept_iteratorISA_EE5valueENS_11__wrap_iterIPcEEE4typeENSB_IS8_EESA_SA_() called");
    return 0;
}

/* Exported Object: _edata */
extern "C" __attribute__((visibility("default"))) void* _edata = NULL;

/* Exported Object: typeinfo name for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKb = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv116__shim_type_infoE = NULL;

/* Exported Object: typeinfo for std::__ndk1::messages_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115messages_bynameIcEE = NULL;

/* Exported Object: typeinfo name for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKd = NULL;

/* Demangled: std::invalid_argument::~invalid_argument() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16invalid_argumentD0Ev(void) {
    ALOGD("_ZNSt16invalid_argumentD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__basic_string_common<true>::__throw_out_of_range() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_out_of_rangeEv(void) {
    ALOGD("_ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_out_of_rangeEv() called");
    return 0;
}

/* Exported Object: typeinfo name for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKf = NULL;

/* Demangled: std::__ndk1::collate<char>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIcED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16invalid_argument = NULL;

/* Exported Object: std::__ndk1::ctype_base::alnum */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5alnumE = NULL;

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC1ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC1ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEPKcmm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setg(wchar_t*, wchar_t*, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4setgEPwS4_S4_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4setgEPwS4_S4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9type_info = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__num_get<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19__num_getIcEE = NULL;

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

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE14do_curr_symbolEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17codecvtIwc9mbstate_tE2idE = NULL;

/* Exported Object: vtable for std::__ndk1::__widen_from_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__widen_from_utf8ILm32EEE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_t(void) {
    ALOGD("_ZdaPvSt11align_val_t() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::numpunct<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18numpunctIcEE = NULL;

/* Exported Object: std::__ndk1::locale::none */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale4noneE = NULL;

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_unsigned<unsigned int>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedIjEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedIjEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::locale const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1ERKS0_S2_i(void) {
    ALOGD("_ZNSt6__ndk16localeC1ERKS0_S2_i() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE10do_tolowerEPwPKw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE10do_tolowerEPwPKw() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_floating_point<float>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC2Ev(void) {
    ALOGD("_ZNSt9bad_allocC2Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::scientific */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base10scientificE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, tm const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_(void) {
    ALOGD("_ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekp(long long, std::__ndk1::ios_base::seekdir) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5seekpExNS_8ios_base7seekdirE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5seekpExNS_8ios_base7seekdirE() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::read(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4readEPwl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4readEPwl() called");
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

/* Demangled: std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm32EED1Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm32EED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_throw_debug_function(std::__ndk1::__libcpp_debug_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk129__libcpp_throw_debug_functionERKNS_19__libcpp_debug_infoE(void) {
    ALOGD("_ZNSt6__ndk129__libcpp_throw_debug_functionERKNS_19__libcpp_debug_infoE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get_monthname(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE16do_get_monthnameES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE16do_get_monthnameES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::resize(unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6resizeEmw() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex6unlockEv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::__ndk1::strstreambuf::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >& (*)(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRNS_9basic_iosIcS2_EES6_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRNS_9basic_iosIcS2_EES6_E() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ios_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18ios_baseE = NULL;

/* Demangled: std::__ndk1::gslice::__init(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16gslice6__initEm(void) {
    ALOGD("_ZNSt6__ndk16gslice6__initEm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::money_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110money_baseE = NULL;

/* Demangled: virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::messages_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk113messages_baseE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(void*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERPv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERPv() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE9do_narrowEPKwS3_cPc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE9do_narrowEPKwS3_cPc() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPc = NULL;

/* Exported Object: typeinfo for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTIDn = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubsetbuf(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9pubsetbufEPwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9pubsetbufEPwl() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__money_put<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk111__money_putIwEE = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<char32_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IDiLb0EEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::swap(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE4swapERS3_() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPo = NULL;

/* Exported Object: typeinfo for std::__ndk1::ctype_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112ctype_bynameIcEE = NULL;

/* Demangled: std::__ndk1::moneypunct<char, true>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: vtable for std::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt19bad_optional_access = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::time_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19time_baseE = NULL;

/* Exported Object: typeinfo for half */
extern "C" __attribute__((visibility("default"))) void* _ZTIDh = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE3putEc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPcl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPcl() called");
    return 0;
}

/* Demangled: std::exception_ptr::operator=(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptraSERKS_(void) {
    ALOGD("_ZNSt13exception_ptraSERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__money_get<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk111__money_getIcEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubimbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8pubimbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8pubimbueERKNS_6localeE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__c_node */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18__c_nodeE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::overflow(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8overflowEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8overflowEj() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD2Ev(void) {
    ALOGD("_ZNSt12length_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::__set_badbit_and_consider_rethrow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base33__set_badbit_and_consider_rethrowEv(void) {
    ALOGD("_ZNSt6__ndk18ios_base33__set_badbit_and_consider_rethrowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4syncEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4syncEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__check_grouping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*, unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__check_groupingERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjS8_Rj(void) {
    ALOGD("_ZNSt6__ndk116__check_groupingERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjS8_Rj() called");
    return 0;
}

/* Demangled: std::__ndk1::__money_get<wchar_t>::__gather_info(bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_getIwE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_SJ_Ri(void) {
    ALOGD("_ZNSt6__ndk111__money_getIwE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_SJ_Ri() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IwLb1EEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >& (*)(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRS3_S4_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRS3_S4_E() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE10do_tolowerEPwPKw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE10do_tolowerEPwPKw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubimbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8pubimbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8pubimbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2ERKS0_(void) {
    ALOGD("_ZNSt6__ndk16localeC2ERKS0_() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::goodbit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base7goodbitE = NULL;

/* Exported Object: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::istrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110istrstreamE = NULL;

/* Demangled: std::__ndk1::__rs_default::~__rs_default() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultD1Ev(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm16EED0Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm16EED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPm = NULL;

/* Demangled: std::__ndk1::error_condition::message() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115error_condition7messageEv(void) {
    ALOGD("_ZNKSt6__ndk115error_condition7messageEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_9 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_9E = NULL;

/* Exported Object: typeinfo for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPw = NULL;

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<char16_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IDsLb0EEE = NULL;

/* Demangled: std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe(void) {
    ALOGD("_ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8_utf16<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk120__codecvt_utf8_utf16IwEE = NULL;

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjS8_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjS8_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__shared_countE = NULL;

/* Exported Object: typeinfo name for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKt = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_istream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEC2EPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEC2EPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >& (*)(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRNS_9basic_iosIwS2_EES6_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRNS_9basic_iosIwS2_EES6_E() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::Init::Init() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4InitC1Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base4InitC1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::numpunct<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18numpunctIwEE = NULL;

/* Demangled: std::__ndk1::collate<wchar_t>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIwED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE5do_inERS1_PKcS5_RS5_PDsS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE5do_inERS1_PKcS5_RS5_PDsS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE11do_encodingEv() called");
    return 0;
}

/* Exported Object: typeinfo name for long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKx = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_positive_signEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::__num_get<char>::__stage2_int_prep(std::__ndk1::ios_base&, char*, char&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIcE17__stage2_int_prepERNS_8ios_baseEPcRc(void) {
    ALOGD("_ZNSt6__ndk19__num_getIcE17__stage2_int_prepERNS_8ios_baseEPcRc() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__months() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE8__monthsEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE8__monthsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::set_exception_at_thread_exit(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE28set_exception_at_thread_exitESt13exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIwE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIwE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm32EED0Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm32EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: _Unwind_GetTextRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetTextRelBase(void) {
    ALOGD("_Unwind_GetTextRelBase() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::unitbuf */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base7unitbufE = NULL;

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__x() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE3__xEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE3__xEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pbackfail(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9pbackfailEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9pbackfailEj() called");
    return 0;
}

/* Exported Object: __bss_end__ */
extern "C" __attribute__((visibility("default"))) void* __bss_end__ = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::unget() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5ungetEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5ungetEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19strstreamE = NULL;

/* Demangled: operator new[](unsigned long, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZnamSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt10bad_typeid = NULL;

/* Exported Object: typeinfo for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPi = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__match_any_but_newline<char>::__exec(std::__ndk1::__state<char>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk123__match_any_but_newlineIcE6__execERNS_7__stateIcEE(void) {
    ALOGD("_ZNKSt6__ndk123__match_any_but_newlineIcE6__execERNS_7__stateIcEE() called");
    return 0;
}

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

/* Demangled: std::__ndk1::ctype<char>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for void const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKv = NULL;

/* Demangled: std::__ndk1::ostrstream::~ostrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110ostrstreamD2Ev(void) {
    ALOGD("_ZNSt6__ndk110ostrstreamD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117moneypunct_bynameIcLb1EE4initEPKc(void) {
    ALOGD("_ZNSt6__ndk117moneypunct_bynameIcLb1EE4initEPKc() called");
    return 0;
}

/* Exported Object: typeinfo for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPe = NULL;

/* Demangled: std::bad_array_new_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt20bad_array_new_length4whatEv(void) {
    ALOGD("_ZNKSt20bad_array_new_length4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE11do_encodingEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::messages_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk113messages_baseE = NULL;

/* Demangled: std::__ndk1::strstreambuf::swap(std::__ndk1::strstreambuf&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf4swapERS0_(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf4swapERS0_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17codecvtIDsc9mbstate_tEE = NULL;

/* Exported Object: VTT for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Exported Object: std::__ndk1::chrono::steady_clock::is_steady */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16chrono12steady_clock9is_steadyE = NULL;

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD1Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: typeinfo for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPg = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc() called");
    return 0;
}

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

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE5do_isEPKwS3_Pm(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE5do_isEPKwS3_Pm() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__r() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE3__rEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE3__rEv() called");
    return 0;
}

/* Exported Object: typeinfo for float */
extern "C" __attribute__((visibility("default"))) void* _ZTIf = NULL;

/* Exported Object: std::__ndk1::codecvt<char, char, mbstate_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17codecvtIcc9mbstate_tE2idE = NULL;

/* Demangled: __cxa_bad_typeid */
extern "C" __attribute__((visibility("default"))) int __cxa_bad_typeid(void) {
    ALOGD("__cxa_bad_typeid() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputbackc(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9sputbackcEw(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9sputbackcEw() called");
    return 0;
}

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

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(unsigned long, unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmmw() called");
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

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE5do_inERS1_PKcS5_RS5_PwS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE5do_inERS1_PKcS5_RS5_PwS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE14do_curr_symbolEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_first_not_of(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE17find_first_not_ofEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE17find_first_not_ofEPKcmm() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IDiLb0EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IDiLb0EED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKh = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__insert_i(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db10__insert_iEPv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db10__insert_iEPv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: __deregister_frame_info_bases */
extern "C" __attribute__((visibility("default"))) int __deregister_frame_info_bases(void) {
    ALOGD("__deregister_frame_info_bases() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKn = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE14do_curr_symbolEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKj = NULL;

/* Exported Object: typeinfo for std::__ndk1::__money_put<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk111__money_putIwEE = NULL;

/* Exported Object: vtable for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt10bad_typeid = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IwLb1EEE = NULL;

/* Demangled: _Unwind_Resume_or_Rethrow */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume_or_Rethrow(void) {
    ALOGD("_Unwind_Resume_or_Rethrow() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<long double, long double>&, long double*>(long double*, long double*, std::__ndk1::__less<long double, long double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIeeEEPeEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIeeEEPeEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::iword(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base5iwordEi(void) {
    ALOGD("_ZNSt6__ndk18ios_base5iwordEi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::collate_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114collate_bynameIwEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IDiLb1EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IDiLb1EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::valarray<unsigned long>::valarray(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18valarrayImEC2Em(void) {
    ALOGD("_ZNSt6__ndk18valarrayImEC2Em() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_set_debug_function(void (*)(std::__ndk1::__libcpp_debug_info const&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__libcpp_set_debug_functionEPFvRKNS_19__libcpp_debug_infoEE(void) {
    ALOGD("_ZNSt6__ndk127__libcpp_set_debug_functionEPFvRKNS_19__libcpp_debug_infoEE() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_tolower(wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE10do_tolowerEw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE10do_tolowerEw() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::istrstream::~istrstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk110istrstreamD0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk110istrstreamD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPv = NULL;

/* Exported Object: vtable for std::__ndk1::ctype_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112ctype_bynameIcEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__num_put<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19__num_putIwEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Exported Object: typeinfo name for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPn = NULL;

/* Demangled: std::__ndk1::strstreambuf::freeze(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf6freezeEb(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf6freezeEb() called");
    return 0;
}

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

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE13do_neg_formatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: typeinfo name for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPj = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<char16_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IDsLb0EEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115time_get_bynameIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__c_node */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18__c_nodeE = NULL;

/* Exported Object: typeinfo for std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo name for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13runtime_error = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sbumpc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6sbumpcEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__addable(void const*, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db9__addableEPKvl(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db9__addableEPKvl() called");
    return 0;
}

/* Exported Object: std::nothrow */
extern "C" __attribute__((visibility("default"))) void* _ZSt7nothrow = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPh = NULL;

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::resize(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__function_type_infoE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__codecvt_utf8IDiEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::swap(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4swapERS3_() called");
    return 0;
}

/* Exported Object: typeinfo name for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPf = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117moneypunct_bynameIwLb0EE4initEPKc(void) {
    ALOGD("_ZNSt6__ndk117moneypunct_bynameIwLb0EE4initEPKc() called");
    return 0;
}

/* Demangled: __cxa_guard_release */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_release(void) {
    ALOGD("__cxa_guard_release() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::__shared_mutex_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_baseC2Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_baseC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__time_get_c_storage<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk120__time_get_c_storageIwEE = NULL;

/* Exported Object: typeinfo name for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12out_of_range = NULL;

/* Exported Object: typeinfo for std::__ndk1::__widen_from_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__widen_from_utf8ILm32EEE = NULL;

/* Demangled: std::__ndk1::ctype<char>::do_narrow(char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE9do_narrowEcc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE9do_narrowEcc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputc(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sputcEw(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sputcEw() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char32_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for signed char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPa = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: typeinfo name for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPx = NULL;

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(unsigned char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPKhl(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPKhl() called");
    return 0;
}

/* Demangled: std::__ndk1::messages<wchar_t>::do_open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::locale const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIwE7do_openERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_6localeE(void) {
    ALOGD("_ZNKSt6__ndk18messagesIwE7do_openERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_6localeE() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::get_terminate() */
extern "C" __attribute__((visibility("default"))) int _ZSt13get_terminatev(void) {
    ALOGD("_ZSt13get_terminatev() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::ostrstream::~ostrstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk110ostrstreamD0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk110ostrstreamD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: std::__ndk1::ctype_byname<char>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Exported Object: std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

/* Exported Object: vtable for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: std::exception_ptr::~exception_ptr() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrD2Ev(void) {
    ALOGD("_ZNSt13exception_ptrD2Ev() called");
    return 0;
}

/* Demangled: __cxa_vec_new2 */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_new2(void) {
    ALOGD("__cxa_vec_new2() called");
    return 0;
}

/* Demangled: std::__ndk1::__do_nothing(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__do_nothingEPv(void) {
    ALOGD("_ZNSt6__ndk112__do_nothingEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::messages<char>::do_get(long, int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIcE6do_getEliiRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNKSt6__ndk18messagesIcE6do_getEliiRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get_time(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned char, unsigned char>&, unsigned char*>(unsigned char*, unsigned char*, std::__ndk1::__less<unsigned char, unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIhhEEPhEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIhhEEPhEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: std::__ndk1::codecvt<char16_t, char, mbstate_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17codecvtIDsc9mbstate_tE2idE = NULL;

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__money_put<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk111__money_putIcEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubseekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_floating_point<float>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, float&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD2Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::~__codecvt_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__codecvt_utf8IDsED0Ev(void) {
    ALOGD("_ZNSt6__ndk114__codecvt_utf8IDsED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::unget() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5ungetEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5ungetEv() called");
    return 0;
}

/* Exported Object: typeinfo for void */
extern "C" __attribute__((visibility("default"))) void* _ZTIv = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE8do_widenEPKcS3_Pw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE8do_widenEPKcS3_Pw() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPt = NULL;

/* Demangled: std::__ndk1::__c_node::~__c_node() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__c_nodeD2Ev(void) {
    ALOGD("_ZNSt6__ndk18__c_nodeD2Ev() called");
    return 0;
}

/* Demangled: std::bad_typeid::~bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidD1Ev(void) {
    ALOGD("_ZNSt10bad_typeidD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(unsigned long, unsigned long, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::tellg() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE5tellgEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char16_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDh = NULL;

/* Exported Object: typeinfo for long */
extern "C" __attribute__((visibility("default"))) void* _ZTIl = NULL;

/* Demangled: std::__ndk1::__widen_from_utf8<32ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm32EED0Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm32EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::init(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4initEPv(void) {
    ALOGD("_ZNSt6__ndk18ios_base4initEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(unsigned char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPKhl(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPKhl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4syncEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4syncEv() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk19strstreamE = NULL;

/* Exported Object: typeinfo for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDn = NULL;

/* Demangled: operator delete(void*, unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvmSt11align_val_t(void) {
    ALOGD("_ZdlPvmSt11align_val_t() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTIj = NULL;

/* Demangled: std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(wchar_t, int, char*, char*&, unsigned int&, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIwE17__stage2_int_loopEwiPcRS2_RjwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_Pw(void) {
    ALOGD("_ZNSt6__ndk19__num_getIwE17__stage2_int_loopEwiPcRS2_RjwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_Pw() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_signed<long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__do_get_signedIlEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__do_get_signedIlEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsputn(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsputnEPKcl() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt20bad_array_new_length = NULL;

/* Exported Object: typeinfo for long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIx = NULL;

/* Exported Object: std::__ndk1::ctype_base::digit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5digitE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::push_back(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9push_backEw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEm() called");
    return 0;
}

/* Exported Object: std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Demangled: __emutls_register_common */
extern "C" __attribute__((visibility("default"))) int __emutls_register_common(void) {
    ALOGD("__emutls_register_common() called");
    return 0;
}

/* Demangled: std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19strstreamD0Ev(void) {
    ALOGD("_ZNSt6__ndk19strstreamD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short */
extern "C" __attribute__((visibility("default"))) void* _ZTIt = NULL;

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(unsigned long, unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmmc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__num_get_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__num_get_baseE = NULL;

/* Exported Object: typeinfo name for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12length_error = NULL;

/* Demangled: std::__ndk1::numpunct_byname<char>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for double */
extern "C" __attribute__((visibility("default"))) void* _ZTId = NULL;

/* Demangled: std::__ndk1::ctype<char>::do_tolower(char*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE10do_tolowerEPcPKc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE10do_tolowerEPcPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::istrstream::~istrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110istrstreamD0Ev(void) {
    ALOGD("_ZNSt6__ndk110istrstreamD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::failure::failure(char const*, std::__ndk1::error_code const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureC2EPKcRKNS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureC2EPKcRKNS_10error_codeE() called");
    return 0;
}

/* Exported Object: typeinfo for bool */
extern "C" __attribute__((visibility("default"))) void* _ZTIb = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(long double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEe(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEe() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*, std::__ndk1::mutex*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE(void) {
    ALOGD("_ZNSt6__ndk115__thread_struct25notify_all_at_thread_exitEPNS_18condition_variableEPNS_5mutexE() called");
    return 0;
}

/* Exported Object: typeinfo for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt9exception = NULL;

/* Exported Object: typeinfo for __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIn = NULL;

/* Demangled: std::__ndk1::stoll(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stollERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk15stollERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11range_error = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_percent(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_percentERS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::__do_put(char*, char*&, tm const*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110__time_put8__do_putEPcRS1_PK2tmcc(void) {
    ALOGD("_ZNKSt6__ndk110__time_put8__do_putEPcRS1_PK2tmcc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator=(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEaSERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEaSERKS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::xalloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base6xallocEv(void) {
    ALOGD("_ZNSt6__ndk18ios_base6xallocEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__insert_ic(void*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db11__insert_icEPvPKv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db11__insert_icEPvPKv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE16do_negative_signEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::numeric */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale7numericE = NULL;

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPKv(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPKv() called");
    return 0;
}

/* Demangled: non-virtual thunk to std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_NSt6__ndk19strstreamD1Ev(void) {
    ALOGD("_ZThn16_NSt6__ndk19strstreamD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEi(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEi() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned long, unsigned long>&, unsigned long*>(unsigned long*, unsigned long*, std::__ndk1::__less<unsigned long, unsigned long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessImmEEPmEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessImmEEPmEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_snprintf_l(char*, unsigned long, __locale_t*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__libcpp_snprintf_lEPcmP10__locale_tPKcz(void) {
    ALOGD("_ZNSt6__ndk119__libcpp_snprintf_lEPcmP10__locale_tPKcz() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(unsigned long, wchar_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKwm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmPKwm() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_weekday(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_weekdayERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_weekdayERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEy() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<short, short>&, short*>(short*, short*, short*, short*, short*, std::__ndk1::__less<short, short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIssEEPsEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIssEEPsEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(signed char*, long, signed char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPalS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPalS1_() called");
    return 0;
}

/* Demangled: _Unwind_GetCFA */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetCFA(void) {
    ALOGD("_Unwind_GetCFA() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIwED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111regex_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk111regex_errorD0Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Exported Object: typeinfo for std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: std::__ndk1::clog */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk14clogE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::basic_ostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: long long std::__ndk1::__num_get_signed_integral<long long>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125__num_get_signed_integralIxEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk125__num_get_signed_integralIxEET_PKcS3_Rji() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::numpunct(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIwEC2Em(void) {
    ALOGD("_ZNSt6__ndk18numpunctIwEC2Em() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >& (*)(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRS3_S4_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRS3_S4_E() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(short) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEs(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEs() called");
    return 0;
}

/* Exported Object: vtable for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13bad_exception = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD1Ev(void) {
    ALOGD("_ZNSt8bad_castD1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::numpunct<char>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18numpunctIcE2idE = NULL;

/* Demangled: std::set_terminate(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt13set_terminatePFvvE(void) {
    ALOGD("_ZSt13set_terminatePFvvE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE3putES4_RNS_8ios_baseEwPK2tmPKwSC_(void) {
    ALOGD("_ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE3putES4_RNS_8ios_baseEwPK2tmPKwSC_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::~__codecvt_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__codecvt_utf8IwED0Ev(void) {
    ALOGD("_ZNSt6__ndk114__codecvt_utf8IwED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPb = NULL;

/* Exported Object: typeinfo for std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

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

/* Demangled: std::__ndk1::ctype_byname<char>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__num_get<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19__num_getIwEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::codecvt<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17codecvtIcc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::ctype<char>::do_tolower(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE10do_tolowerEc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE10do_tolowerEc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setg(char*, char*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4setgEPcS4_S4_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4setgEPcS4_S4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::messages_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115messages_bynameIwEE = NULL;

/* Exported Object: std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPl = NULL;

/* Demangled: _Unwind_ForcedUnwind */
extern "C" __attribute__((visibility("default"))) int _Unwind_ForcedUnwind(void) {
    ALOGD("_Unwind_ForcedUnwind() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(long double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEe(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEe() called");
    return 0;
}

/* Demangled: __cxa_vec_delete3 */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_delete3(void) {
    ALOGD("__cxa_vec_delete3() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEm(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::getloc() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6getlocEv(void) {
    ALOGD("_ZNKSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6getlocEv() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEy(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEy() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__weeks() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE7__weeksEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE7__weeksEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubsync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7pubsyncEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7pubsyncEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_abort_debug_function(std::__ndk1::__libcpp_debug_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk129__libcpp_abort_debug_functionERKNS_19__libcpp_debug_infoE(void) {
    ALOGD("_ZNSt6__ndk129__libcpp_abort_debug_functionERKNS_19__libcpp_debug_infoE() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(signed char*, long, signed char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPalS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPalS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::~condition_variable() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variableD1Ev(void) {
    ALOGD("_ZNSt6__ndk118condition_variableD1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::npos */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4nposE = NULL;

/* Exported Object: typeinfo name for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPd = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__find_c_from_i(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db15__find_c_from_iEPv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db15__find_c_from_iEPv() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDs = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmRKS5_mm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmRKS5_mm() called");
    return 0;
}

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

/* Exported Object: typeinfo for std::__ndk1::time_put_byname<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115time_put_bynameIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDs = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellg() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5tellgEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5tellgEv() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::ctype_byname<char>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__invalidate_all(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db16__invalidate_allEPv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db16__invalidate_allEPv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__time_get */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110__time_getE = NULL;

/* Demangled: std::__ndk1::stoull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(signed char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPKal(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPKal() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_decimal_pointEv() called");
    return 0;
}

/* Demangled: __letf2 */
extern "C" __attribute__((visibility("default"))) int __letf2(void) {
    ALOGD("__letf2() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::~__shared_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk114__shared_countD0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__widen_from_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__widen_from_utf8ILm16EEE = NULL;

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__codecvt_utf8IDsEE = NULL;

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_weekdayname(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_weekdaynameERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_weekdaynameERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDi = NULL;

/* Exported Object: typeinfo for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPy = NULL;

/* Exported Object: typeinfo name for std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::ios_base::pword(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base5pwordEi(void) {
    ALOGD("_ZNSt6__ndk18ios_base5pwordEi() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPs = NULL;

/* Exported Object: typeinfo for std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: construction vtable for std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk19strstreamE0_NS_14basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::codecvt_byname<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114codecvt_bynameIcc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_year4(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_year4ERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_year4ERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: std::__ndk1::wcout */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk15wcoutE = NULL;

/* Demangled: std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm16EED0Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm16EED0Ev() called");
    return 0;
}

/* Demangled: __register_frame_info_table_bases */
extern "C" __attribute__((visibility("default"))) int __register_frame_info_table_bases(void) {
    ALOGD("__register_frame_info_table_bases() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::moneypunct_byname<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117moneypunct_bynameIcLb0EEE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::ignore(long, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6ignoreElj(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6ignoreElj() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::replace(unsigned long, unsigned long, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::sync_with_stdio(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base15sync_with_stdioEb(void) {
    ALOGD("_ZNSt6__ndk18ios_base15sync_with_stdioEb() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<char16_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IDsLb1EEE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_decimal_pointEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ctype<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk15ctypeIwEE = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >& std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__append_forward_unsafe<wchar_t*>(wchar_t*, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE23__append_forward_unsafeIPwEERS5_T_S9_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE23__append_forward_unsafeIPwEERS5_T_S9_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEmw() called");
    return 0;
}

/* Demangled: __cxa_free_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_dependent_exception(void) {
    ALOGD("__cxa_free_dependent_exception() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsgetn(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6xsgetnEPcl() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8_utf16<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk120__codecvt_utf8_utf16IwEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::bad_array_new_length::bad_array_new_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt20bad_array_new_lengthC1Ev(void) {
    ALOGD("_ZNSt20bad_array_new_lengthC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::failure::failure(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::error_code const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_10error_codeE() called");
    return 0;
}

/* Demangled: operator new[](unsigned long, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZnamRKSt9nothrow_t(void) {
    ALOGD("_ZnamRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: std::__ndk1::defer_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110defer_lockE = NULL;

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE10do_toupperEPwPKw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE10do_toupperEPwPKw() called");
    return 0;
}

/* Demangled: std::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt19bad_optional_accessD1Ev(void) {
    ALOGD("_ZNSt19bad_optional_accessD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__get_classname(char const*, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__get_classnameEPKcb(void) {
    ALOGD("_ZNSt6__ndk115__get_classnameEPKcb() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::showpos */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base7showposE = NULL;

/* Demangled: std::__ndk1::locale::id::__init() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale2id6__initEv(void) {
    ALOGD("_ZNSt6__ndk16locale2id6__initEv() called");
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

/* Demangled: std::__ndk1::ctype<wchar_t>::do_tolower(wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE10do_tolowerEw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE10do_tolowerEw() called");
    return 0;
}

/* Demangled: __sfp_handle_exceptions */
extern "C" __attribute__((visibility("default"))) int __sfp_handle_exceptions(void) {
    ALOGD("__sfp_handle_exceptions() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_day_year_num(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE18__get_day_year_numERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE18__get_day_year_numERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIwE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIwE16do_decimal_pointEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, tm const*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPK2tmcc(void) {
    ALOGD("_ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPK2tmcc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::collate<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17collateIcEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(float) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEf(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEf() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEd(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEd() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, true>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::thread::hardware_concurrency() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16thread20hardware_concurrencyEv(void) {
    ALOGD("_ZNSt6__ndk16thread20hardware_concurrencyEv() called");
    return 0;
}

/* Demangled: std::__ndk1::stod(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stodERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm(void) {
    ALOGD("_ZNSt6__ndk14stodERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<wchar_t, false>::intl */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIwLb0EE4intlE = NULL;

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

/* Demangled: std::__ndk1::ctype<wchar_t>::do_widen(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE8do_widenEc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE8do_widenEc() called");
    return 0;
}

/* Demangled: std::__ndk1::__money_put<wchar_t>::__gather_info(bool, bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_putIwE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_Ri(void) {
    ALOGD("_ZNSt6__ndk111__money_putIwE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERwS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS9_IwNSA_IwEENSC_IwEEEESJ_Ri() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<char, false>::intl */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIcLb0EE4intlE = NULL;

/* Demangled: std::__ndk1::recursive_mutex::recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexC1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_1 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_1E = NULL;

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::swap(std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEE4swapERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_count::__add_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count12__add_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count12__add_sharedEv() called");
    return 0;
}

/* Demangled: std::experimental::fundamentals_v1::bad_any_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt12experimental15fundamentals_v112bad_any_cast4whatEv(void) {
    ALOGD("_ZNKSt12experimental15fundamentals_v112bad_any_cast4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE14do_curr_symbolEv() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_unsigned<unsigned short>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedItEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedItEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::Init::Init() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4InitC2Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base4InitC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmRKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmRKS5_mm() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__rs_getEv(void) {
    ALOGD("_ZNSt6__ndk18__rs_getEv() called");
    return 0;
}

/* Demangled: std::length_error::~length_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12length_errorD0Ev(void) {
    ALOGD("_ZNSt12length_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__find_c(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db8__find_cEPv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db8__find_cEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__add_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count10__add_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count10__add_weakEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::numpunct_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115numpunct_bynameIcEE = NULL;

/* Demangled: std::__ndk1::ctype<char>::ctype(unsigned long const*, bool, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcEC2EPKmbm(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcEC2EPKmbm() called");
    return 0;
}

/* Demangled: __cxa_vec_delete */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_delete(void) {
    ALOGD("__cxa_vec_delete() called");
    return 0;
}

/* Demangled: std::__ndk1::__cloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__clocEv(void) {
    ALOGD("_ZNSt6__ndk16__clocEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<unsigned short, unsigned short>&, unsigned short*>(unsigned short*, unsigned short*, std::__ndk1::__less<unsigned short, unsigned short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIttEEPtEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIttEEPtEEvT0_S5_T_() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::oct */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3octE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt11logic_error = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9underflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::bad_alloc::bad_alloc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9bad_allocC1Ev(void) {
    ALOGD("_ZNSt9bad_allocC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115time_get_bynameIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::locale::locale(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2EPKc(void) {
    ALOGD("_ZNSt6__ndk16localeC2EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::__get_const_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__get_const_dbEv(void) {
    ALOGD("_ZNSt6__ndk114__get_const_dbEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::get(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >&, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EEc(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE3getERNS_15basic_streambufIcS2_EEc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEt(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEt() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ctype<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk15ctypeIcEE = NULL;

/* Demangled: std::__ndk1::collate<char>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIcED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::ctype_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcEC2EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__dereferenceable(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db17__dereferenceableEPKv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db17__dereferenceableEPKv() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC2EPKc() called");
    return 0;
}

/* Demangled: __cxa_bad_cast */
extern "C" __attribute__((visibility("default"))) int __cxa_bad_cast(void) {
    ALOGD("__cxa_bad_cast() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(void* (*)(unsigned long), void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPFPvmEPFvS1_E(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPFPvmEPFvS1_E() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::numpunct_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115numpunct_bynameIwEE = NULL;

/* Demangled: std::__ndk1::collate<char>::do_transform(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIcE12do_transformEPKcS3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIcE12do_transformEPKcS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_PKS6_(void) {
    ALOGD("_ZNSt6__ndk1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_PKS6_() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pbase_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__pbase_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::readsome(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE8readsomeEPwl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE8readsomeEPwl() called");
    return 0;
}

/* Demangled: std::__ndk1::__get_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__get_dbEv(void) {
    ALOGD("_ZNSt6__ndk18__get_dbEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt13runtime_error = NULL;

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<long long, long long>&, long long*>(long long*, long long*, long long*, long long*, long long*, std::__ndk1::__less<long long, long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIxxEEPxEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIxxEEPxEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::~__time_put() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putD1Ev(void) {
    ALOGD("_ZNSt6__ndk110__time_putD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEx(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEx() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tEC2Em(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tEC2Em() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__X() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE3__XEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE3__XEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__widen_from_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117__widen_from_utf8ILm16EEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setbuf(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6setbufEPwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6setbufEPwl() called");
    return 0;
}

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

/* Exported Object: vtable for std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::__num_put<char>::__widen_and_group_float(char*, char*, char*, char*, char*&, char*&, std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_putIcE23__widen_and_group_floatEPcS2_S2_S2_RS2_S3_RKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk19__num_putIcE23__widen_and_group_floatEPcS2_S2_S2_RS2_S3_RKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1ERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1ERKS3_() called");
    return 0;
}

/* Exported Object: typeinfo for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKi = NULL;

/* Exported Object: vtable for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112future_errorE = NULL;

/* Demangled: std::__ndk1::__money_get<char>::__gather_info(bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_getIcE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_SF_Ri(void) {
    ALOGD("_ZNSt6__ndk111__money_getIcE13__gather_infoEbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_SF_Ri() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::facet::~facet() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale5facetD1Ev(void) {
    ALOGD("_ZNSt6__ndk16locale5facetD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::operator==(std::__ndk1::locale const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk16localeeqERKS0_(void) {
    ALOGD("_ZNKSt6__ndk16localeeqERKS0_() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<long, long>&, long*>(long*, long*, long*, long*, long*, std::__ndk1::__less<long, long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIllEEPlEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIllEEPlEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::skipws */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base6skipwsE = NULL;

/* Demangled: __cxa_vec_new */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_new(void) {
    ALOGD("__cxa_vec_new() called");
    return 0;
}

/* Demangled: _Unwind_GetIPInfo */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetIPInfo(void) {
    ALOGD("_Unwind_GetIPInfo() called");
    return 0;
}

/* Exported Object: typeinfo name for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDi = NULL;

/* Demangled: std::__ndk1::to_string(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEy(void) {
    ALOGD("_ZNSt6__ndk19to_stringEy() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKm = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<unsigned long long, unsigned long long>&, unsigned long long*>(unsigned long long*, unsigned long long*, unsigned long long*, unsigned long long*, unsigned long long*, std::__ndk1::__less<unsigned long long, unsigned long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIyyEEPyEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIyyEEPyEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE8do_widenEPKcS3_Pw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE8do_widenEPKcS3_Pw() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD1Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRy(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRy() called");
    return 0;
}

/* Exported Object: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Exported Object: typeinfo for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKc = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::~sentry() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::messages<char>::do_open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::locale const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIcE7do_openERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_6localeE(void) {
    ALOGD("_ZNKSt6__ndk18messagesIcE7do_openERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE6do_outER9mbstate_tPKDsS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE9do_narrowEPKwS3_cPc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE9do_narrowEPKwS3_cPc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(short&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERs(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERs() called");
    return 0;
}

/* Exported Object: std::__ndk1::messages<wchar_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18messagesIwE2idE = NULL;

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

/* Demangled: std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: non-virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZThn16_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::numpunct<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18numpunctIcEE = NULL;

/* Exported Object: vtable for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11logic_error = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sbumpc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6sbumpcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6sbumpcEv() called");
    return 0;
}

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

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, void*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(unsigned long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERy(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERy() called");
    return 0;
}

/* Demangled: std::__ndk1::__match_any_but_newline<wchar_t>::__exec(std::__ndk1::__state<wchar_t>&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk123__match_any_but_newlineIwE6__execERNS_7__stateIwEE(void) {
    ALOGD("_ZNKSt6__ndk123__match_any_but_newlineIwE6__execERNS_7__stateIwEE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__narrow_to_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk116__narrow_to_utf8ILm32EEE = NULL;

/* Demangled: std::__ndk1::shared_timed_mutex::unlock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex13unlock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex13unlock_sharedEv() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRm(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRm() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSDs = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::error_category */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114error_categoryE = NULL;

/* Demangled: std::__ndk1::future<void>::get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvE3getEv(void) {
    ALOGD("_ZNSt6__ndk16futureIvE3getEv() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_timed_mutex::shared_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutexC2Ev(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutexC2Ev() called");
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

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEl(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEl() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::strstreambuf */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112strstreambufE = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE10do_toupperEPwPKw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE10do_toupperEPwPKw() called");
    return 0;
}

/* Exported Object: std::__ndk1::try_to_lock */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk111try_to_lockE = NULL;

/* Exported Object: vtable for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112bad_weak_ptrE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::moneypunct_byname<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117moneypunct_bynameIcLb1EEE = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_12_hour(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_12_hourERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13__get_12_hourERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::collate<wchar_t>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIwED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::experimental::fundamentals_v1::bad_any_cast::~bad_any_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12experimental15fundamentals_v112bad_any_castD0Ev(void) {
    ALOGD("_ZNSt12experimental15fundamentals_v112bad_any_castD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_put_base::__format_int(char*, char const*, bool, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__num_put_base12__format_intEPcPKcbj(void) {
    ALOGD("_ZNSt6__ndk114__num_put_base12__format_intEPcPKcbj() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<wchar_t, true>::intl */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIwLb1EE4intlE = NULL;

/* Exported Object: typeinfo for std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKs = NULL;

/* Demangled: std::__ndk1::future<void>::future(std::__ndk1::__assoc_sub_state*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE(void) {
    ALOGD("_ZNSt6__ndk16futureIvEC2EPNS_17__assoc_sub_stateE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEb(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEb() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKw(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKw() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKo = NULL;

/* Demangled: std::__ndk1::chrono::system_clock::from_time_t(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16chrono12system_clock11from_time_tEl(void) {
    ALOGD("_ZNSt6__ndk16chrono12system_clock11from_time_tEl() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDi = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, false>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE11do_groupingEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::__xindex_ */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base9__xindex_E = NULL;

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRy(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRy() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::putback(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7putbackEw(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7putbackEw() called");
    return 0;
}

/* Demangled: std::__ndk1::collate<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIwE12do_transformEPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIwE12do_transformEPKwS3_() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<wchar_t, true>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIwLb1EE2idE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEc() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct_byname<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117moneypunct_bynameIcLb1EEE = NULL;

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__do_date_order() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk118__time_get_storageIwE15__do_date_orderEv(void) {
    ALOGD("_ZNKSt6__ndk118__time_get_storageIwE15__do_date_orderEv() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_floating_point<long double>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIeEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIeEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::bad_weak_ptr */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112bad_weak_ptrE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::~__codecvt_utf8_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__codecvt_utf8_utf16IwED0Ev(void) {
    ALOGD("_ZNSt6__ndk120__codecvt_utf8_utf16IwED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(long double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERe(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERe() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__narrow_to_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk116__narrow_to_utf8ILm32EEE = NULL;

/* Exported Object: VTT for std::__ndk1::istrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk110istrstreamE = NULL;

/* Demangled: __cxa_throw_bad_array_new_length */
extern "C" __attribute__((visibility("default"))) int __cxa_throw_bad_array_new_length(void) {
    ALOGD("__cxa_throw_bad_array_new_length() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsputn(wchar_t const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsputnEPKwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsputnEPKwl() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::messages_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115messages_bynameIcEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: __frame_state_for */
extern "C" __attribute__((visibility("default"))) int __frame_state_for(void) {
    ALOGD("__frame_state_for() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_year4(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_year4ERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_year4ERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERi(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERi() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8_utf16<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk120__codecvt_utf8_utf16IDiEE = NULL;

/* Exported Object: std::__ndk1::ios_base::basefield */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base9basefieldE = NULL;

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEj(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEj() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_is(unsigned long, wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE5do_isEmw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE5do_isEmw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >& std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__append_forward_unsafe<char*>(char*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE23__append_forward_unsafeIPcEERS5_T_S9_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE23__append_forward_unsafeIPcEERS5_T_S9_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPKv(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPKv() called");
    return 0;
}

/* Demangled: __dynamic_cast */
extern "C" __attribute__((visibility("default"))) int __dynamic_cast(void) {
    ALOGD("__dynamic_cast() called");
    return 0;
}

/* Exported Object: vtable for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16nested_exception = NULL;

/* Exported Object: typeinfo for std::__ndk1::time_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19time_baseE = NULL;

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__X() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE3__XEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE3__XEv() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1El(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1El() called");
    return 0;
}

/* Demangled: std::__ndk1::stold(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stoldERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm(void) {
    ALOGD("_ZNSt6__ndk15stoldERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: vtable for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt20bad_array_new_length = NULL;

/* Exported Object: vtable for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_positive_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE10do_unshiftERS1_PcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE10do_unshiftERS1_PcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::collate<char>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIcED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe(void) {
    ALOGD("_ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRe() called");
    return 0;
}

/* Demangled: std::__ndk1::stoull(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16stoullERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk16stoullERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::try_lock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base15try_lock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base15try_lock_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::operator=(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSERKS5_() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_4 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_4E = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED2Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::collate */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale7collateE = NULL;

/* Exported Object: vtable for std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: __cxa_uncaught_exceptions */
extern "C" __attribute__((visibility("default"))) int __cxa_uncaught_exceptions(void) {
    ALOGD("__cxa_uncaught_exceptions() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_7 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_7E = NULL;

/* Demangled: __cxa_vec_ctor */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_ctor(void) {
    ALOGD("__cxa_vec_ctor() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get_weekday(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE14do_get_weekdayES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE14do_get_weekdayES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::do_toupper(char*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE10do_toupperEPcPKc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE10do_toupperEPcPKc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::messages<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18messagesIwEE = NULL;

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

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pubseekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE10pubseekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE10pubseekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setp(char*, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4setpEPcS4_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4setpEPcS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1ERKS0_(void) {
    ALOGD("_ZNSt6__ndk16localeC1ERKS0_() called");
    return 0;
}

/* Demangled: std::bad_variant_access::~bad_variant_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt18bad_variant_accessD0Ev(void) {
    ALOGD("_ZNSt18bad_variant_accessD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE9do_lengthER9mbstate_tPKcS5_m() called");
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

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKw() called");
    return 0;
}

/* Exported Object: typeinfo name for char */
extern "C" __attribute__((visibility("default"))) void* _ZTSc = NULL;

/* Exported Object: typeinfo name for std::__ndk1::locale::facet */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk16locale5facetE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(unsigned long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERm(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERm() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: __cxa_get_globals */
extern "C" __attribute__((visibility("default"))) int __cxa_get_globals(void) {
    ALOGD("__cxa_get_globals() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::internal */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base8internalE = NULL;

/* Demangled: std::__ndk1::valarray<unsigned long>::valarray(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18valarrayImEC1Em(void) {
    ALOGD("_ZNSt6__ndk18valarrayImEC1Em() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv116__enum_type_infoE = NULL;

/* Exported Object: typeinfo for std::bad_typeid */
extern "C" __attribute__((visibility("default"))) void* _ZTISt10bad_typeid = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<long double, long double>&, long double*>(long double*, long double*, std::__ndk1::__less<long double, long double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIeeEEPeEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIeeEEPeEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<wchar_t>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIwED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::operator=(std::__ndk1::shared_future<void> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvEaSERKS1_(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvEaSERKS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt9bad_alloc = NULL;

/* Exported Object: typeinfo for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12length_error = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::copy(char*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4copyEPcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4copyEPcmm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__num_put<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19__num_putIcEE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(unsigned long, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmRKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertEmRKS5_mm() called");
    return 0;
}

/* Exported Object: vtable for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12domain_error = NULL;

/* Demangled: std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm32EED1Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm32EED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERb(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERb() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::ostrstream::~ostrstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk110ostrstreamD1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk110ostrstreamD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjS8_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjS8_() called");
    return 0;
}

/* Exported Object: typeinfo name for short */
extern "C" __attribute__((visibility("default"))) void* _ZTSs = NULL;

/* Demangled: std::__ndk1::__vector_base_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::seekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7seekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::messages_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115messages_bynameIwEE = NULL;

/* Demangled: std::__ndk1::__num_get<char>::__stage2_float_loop(char, bool&, char&, char*, char*&, char, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIcE19__stage2_float_loopEcRbRcPcRS4_ccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjS4_(void) {
    ALOGD("_ZNSt6__ndk19__num_getIcE19__stage2_float_loopEcRbRcPcRS4_ccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSE_RjS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTSa = NULL;

/* Demangled: std::__ndk1::messages<char>::do_close(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIcE8do_closeEl(void) {
    ALOGD("_ZNKSt6__ndk18messagesIcE8do_closeEl() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmRKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmRKS5_mm() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::do_truename() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIwE11do_truenameEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIwE11do_truenameEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_out(mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE6do_outERS1_PKcS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE6do_outERS1_PKcS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16bad_array_length = NULL;

/* Exported Object: std::__ndk1::wcin */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk14wcinE = NULL;

/* Exported Object: typeinfo for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE9do_lengthERS1_PKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE9do_lengthERS1_PKcS5_m() called");
    return 0;
}

/* Demangled: std::underflow_error::~underflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt15underflow_errorD1Ev(void) {
    ALOGD("_ZNSt15underflow_errorD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::allocator<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_RKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_RKS4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114codecvt_bynameIDic9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputbackc(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9sputbackcEc(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9sputbackcEc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendERKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendERKS5_mm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19strstreamE = NULL;

/* Exported Object: vtable for std::experimental::fundamentals_v1::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt12experimental15fundamentals_v112bad_any_castE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::basic_istream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

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

/* Exported Object: typeinfo name for std::__ndk1::time_put_byname<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115time_put_bynameIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::stoul(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stoulERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk15stoulERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<wchar_t, wchar_t>&, wchar_t*>(wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*, std::__ndk1::__less<wchar_t, wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIwwEEPwEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIwwEEPwEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::__time_put(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk110__time_putC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: non-virtual thunk to std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_NSt6__ndk19strstreamD0Ev(void) {
    ALOGD("_ZThn16_NSt6__ndk19strstreamD0Ev() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<long double, long double>&, long double*>(long double*, long double*, long double*, long double*, long double*, std::__ndk1::__less<long double, long double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIeeEEPeEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIeeEEPeEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__shared_countE = NULL;

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::__init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwE6__initEPKc(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwE6__initEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__money_put<char>::__format(char*, char*&, char*&, unsigned int, char const*, char const*, std::__ndk1::ctype<char> const&, bool, std::__ndk1::money_base::pattern const&, char, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_putIcE8__formatEPcRS2_S3_jPKcS5_RKNS_5ctypeIcEEbRKNS_10money_base7patternEccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESL_SL_i(void) {
    ALOGD("_ZNSt6__ndk111__money_putIcE8__formatEPcRS2_S3_jPKcS5_RKNS_5ctypeIcEEbRKNS_10money_base7patternEccRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESL_SL_i() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::swap(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4swapERS3_() called");
    return 0;
}

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD0Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRe(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRe() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::__time_get(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk110__time_getC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_streambuf(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC2ERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEC2ERKS3_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::logic_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt11logic_error = NULL;

/* Demangled: std::__ndk1::__thread_struct::__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structC2Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::~__codecvt_utf8_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__codecvt_utf8_utf16IDsED0Ev(void) {
    ALOGD("_ZNSt6__ndk120__codecvt_utf8_utf16IDsED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for int */
extern "C" __attribute__((visibility("default"))) void* _ZTSi = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_ostream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEC1EPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEC1EPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Demangled: std::bad_array_length::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt16bad_array_length4whatEv(void) {
    ALOGD("_ZNKSt16bad_array_length4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSg = NULL;

/* Demangled: std::__ndk1::numpunct<char>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIcE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIcE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::ostrstream::~ostrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110ostrstreamD1Ev(void) {
    ALOGD("_ZNSt6__ndk110ostrstreamD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, tm const*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPK2tmcc(void) {
    ALOGD("_ZNKSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPK2tmcc() called");
    return 0;
}

/* Exported Object: vtable for std::length_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12length_error = NULL;

/* Demangled: std::bad_any_cast::~bad_any_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12bad_any_castD0Ev(void) {
    ALOGD("_ZNSt12bad_any_castD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_second(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE12__get_secondERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE12__get_secondERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC2ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC2ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo name for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTSe = NULL;

/* Demangled: std::__ndk1::collate_byname<wchar_t>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16nested_exception = NULL;

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE5do_inERS1_PKcS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE5do_inERS1_PKcS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::messages<wchar_t>::do_get(long, int, int, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIwE6do_getEliiRKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEE(void) {
    ALOGD("_ZNKSt6__ndk18messagesIwE6do_getEliiRKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::sentry(std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC1ERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryC1ERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get_date(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_dateES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_dateES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::__rs_default() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultC2Ev(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, long double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwe(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwe() called");
    return 0;
}

/* Demangled: std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&, std::__ndk1::unique_lock<std::__ndk1::mutex>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE(void) {
    ALOGD("_ZNSt6__ndk125notify_all_at_thread_exitERNS_18condition_variableENS_11unique_lockINS_5mutexEEE() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::binary */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base6binaryE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_weekdayname(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_weekdaynameERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_weekdaynameERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::regex_error::regex_error(std::__ndk1::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111regex_errorC2ENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZNSt6__ndk111regex_errorC2ENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Demangled: std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt11logic_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::stoul(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stoulERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk15stoulERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::cntrl */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5cntrlE = NULL;

/* Demangled: std::__ndk1::__time_get_storage<char>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ios_base::failure */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18ios_base7failureE = NULL;

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

/* Demangled: std::__ndk1::codecvt_byname<char16_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::locale::facet */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk16locale5facetE = NULL;

/* Demangled: std::__ndk1::random_device::~random_device() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113random_deviceD1Ev(void) {
    ALOGD("_ZNSt6__ndk113random_deviceD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::stoi(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stoiERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk14stoiERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPmi() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::~__codecvt_utf8_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__codecvt_utf8_utf16IDiED0Ev(void) {
    ALOGD("_ZNSt6__ndk120__codecvt_utf8_utf16IDiED0Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::chrono::system_clock::is_steady */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16chrono12system_clock9is_steadyE = NULL;

/* Demangled: std::__ndk1::strstreambuf::~strstreambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufD0Ev(void) {
    ALOGD("_ZNSt6__ndk112strstreambufD0Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::collate<char>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17collateIcE2idE = NULL;

/* Demangled: std::__ndk1::strstreambuf::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Demangled: std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE(void) {
    ALOGD("_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: __register_frame */
extern "C" __attribute__((visibility("default"))) int __register_frame(void) {
    ALOGD("__register_frame() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC1Ev(void) {
    ALOGD("_ZNSt8bad_castC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__money_get<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk111__money_getIcEE = NULL;

/* Demangled: std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, long double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEce(void) {
    ALOGD("_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEce() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE14do_curr_symbolEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE6do_outERS1_PKDiS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE6do_outERS1_PKDiS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::bad_typeid::bad_typeid() */
extern "C" __attribute__((visibility("default"))) int _ZNSt10bad_typeidC2Ev(void) {
    ALOGD("_ZNSt10bad_typeidC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110moneypunctIwLb0EEE = NULL;

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwEC2EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, true>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE16do_positive_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sputn(wchar_t const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sputnEPKwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sputnEPKwl() called");
    return 0;
}

/* Demangled: std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19strstreamD1Ev(void) {
    ALOGD("_ZNSt6__ndk19strstreamD1Ev() called");
    return 0;
}

/* Demangled: std::set_unexpected(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt14set_unexpectedPFvvE(void) {
    ALOGD("_ZSt14set_unexpectedPFvvE() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::swap(void*, void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db4swapEPvS1_(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db4swapEPvS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIdEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE23__do_get_floating_pointIdEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Exported Object: vtable for std::range_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt11range_error = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubsetbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pubsetbufEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9pubsetbufEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::ctype_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIcEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIcEC1EPKcm() called");
    return 0;
}

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD2Ev(void) {
    ALOGD("_ZNSt8bad_castD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::iostream_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117iostream_categoryEv(void) {
    ALOGD("_ZNSt6__ndk117iostream_categoryEv() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTSw = NULL;

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwm(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwm() called");
    return 0;
}

/* Demangled: unsigned long long std::__ndk1::__num_get_unsigned_integral<unsigned long long>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__num_get_unsigned_integralIyEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk127__num_get_unsigned_integralIyEET_PKcS3_Rji() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD0Ev(void) {
    ALOGD("_ZNSt11logic_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117moneypunct_bynameIcLb0EE4initEPKc(void) {
    ALOGD("_ZNSt6__ndk117moneypunct_bynameIcLb0EE4initEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char32_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcED2Ev() called");
    return 0;
}

/* Demangled: std::set_new_handler(void (*)()) */
extern "C" __attribute__((visibility("default"))) int _ZSt15set_new_handlerPFvvE(void) {
    ALOGD("_ZSt15set_new_handlerPFvvE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ctype_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112ctype_bynameIcEE = NULL;

/* Exported Object: std::__ndk1::ctype<wchar_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk15ctypeIwE2idE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__time_put */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110__time_putE = NULL;

/* Demangled: std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, unsigned long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwy(void) {
    ALOGD("_ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwy() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::uppercase */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base9uppercaseE = NULL;

/* Demangled: std::__ndk1::__vector_base_common<true>::__throw_out_of_range() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_out_of_rangeEv(void) {
    ALOGD("_ZNKSt6__ndk120__vector_base_commonILb1EE20__throw_out_of_rangeEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_positive_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception(std::__ndk1::__libcpp_debug_exception const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC1ERKS0_(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC1ERKS0_() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IwLb1EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IwLb1EED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::out_of_range */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt12out_of_range = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc() called");
    return 0;
}

/* Demangled: std::__ndk1::__widen_from_utf8<16ul>::~__widen_from_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__widen_from_utf8ILm16EED1Ev(void) {
    ALOGD("_ZNSt6__ndk117__widen_from_utf8ILm16EED1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<wchar_t, false>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIwLb0EE2idE = NULL;

/* Exported Object: typeinfo name for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTSo = NULL;

/* Demangled: std::__ndk1::__num_get<char>::__stage2_int_loop(char, int, char*, char*&, unsigned int&, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIcE17__stage2_int_loopEciPcRS2_RjcRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_S2_(void) {
    ALOGD("_ZNSt6__ndk19__num_getIcE17__stage2_int_loopEciPcRS2_RjcRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_S2_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRm(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRm() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::replace(unsigned long, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC2ERS3_b(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC2ERS3_b() called");
    return 0;
}

/* Demangled: std::__ndk1::future_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115future_categoryEv(void) {
    ALOGD("_ZNSt6__ndk115future_categoryEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<short, short>&, short*>(short*, short*, std::__ndk1::__less<short, short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIssEEPsEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIssEEPsEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::experimental::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt12experimental19bad_optional_accessE = NULL;

/* Exported Object: typeinfo name for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTSm = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(unsigned long, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmRKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmRKS5_mm() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::numpunct_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcEC2EPKcm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__money_get<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk111__money_getIwEE = NULL;

/* Demangled: std::__ndk1::to_string(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEm(void) {
    ALOGD("_ZNSt6__ndk19to_stringEm() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTSy = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERd(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERd() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRNS_8ios_baseES5_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsEPFRNS_8ios_baseES5_E() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRe(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRe() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__libcpp_debug_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk124__libcpp_debug_exceptionE = NULL;

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD2Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, void*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRPv() called");
    return 0;
}

/* Demangled: std::__ndk1::__i_node::~__i_node() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__i_nodeD1Ev(void) {
    ALOGD("_ZNSt6__ndk18__i_nodeD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct_byname<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117moneypunct_bynameIcLb0EEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::pbump(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5pbumpEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5pbumpEi() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEi(void) {
    ALOGD("_ZNSt6__ndk19to_stringEi() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_last_of(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE12find_last_ofEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE12find_last_ofEPKcmm() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::~ios_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_baseD0Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_baseD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::__rs_default(std::__ndk1::__rs_default const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultC1ERKS0_(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultC1ERKS0_() called");
    return 0;
}

/* Demangled: operator delete[](void*) */
extern "C" __attribute__((visibility("default"))) int _ZdaPv(void) {
    ALOGD("_ZdaPv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8_utf16<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk120__codecvt_utf8_utf16IDsEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::uflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5uflowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__next_prime(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__next_primeEm(void) {
    ALOGD("_ZNSt6__ndk112__next_primeEm() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<char32_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IDiLb1EEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(float&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERf(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERf() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::collate<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17collateIcEE = NULL;

/* Demangled: std::bad_array_length::~bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthD2Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRNS_8ios_baseES5_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRNS_8ios_baseES5_E() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_array_new_length */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt20bad_array_new_length = NULL;

/* Demangled: std::__ndk1::__libcpp_asprintf_l(char**, __locale_t*, char const*, ...) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__libcpp_asprintf_lEPPcP10__locale_tPKcz(void) {
    ALOGD("_ZNSt6__ndk119__libcpp_asprintf_lEPPcP10__locale_tPKcz() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::lock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base11lock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base11lock_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE16do_decimal_pointEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::fixed */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base5fixedE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKw() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114codecvt_bynameIDic9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, long double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwe(void) {
    ALOGD("_ZNKSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_bRNS_8ios_baseEwe() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::overflow(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf8overflowEi(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf8overflowEi() called");
    return 0;
}

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED2Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<char, true>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIcLb1EE2idE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__am_pm() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE7__am_pmEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE7__am_pmEv() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_widen(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE8do_widenEc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE8do_widenEc() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKy = NULL;

/* Exported Object: typeinfo name for std::__ndk1::ctype<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk15ctypeIcEE = NULL;

/* Demangled: std::__ndk1::locale::facet::~facet() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale5facetD0Ev(void) {
    ALOGD("_ZNSt6__ndk16locale5facetD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(long double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEe(void) {
    ALOGD("_ZNSt6__ndk19to_stringEe() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::write(wchar_t const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5writeEPKwl(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5writeEPKwl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERj(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERj() called");
    return 0;
}

/* Exported Object: typeinfo for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKw = NULL;

/* Exported Object: std::__ndk1::locale::monetary */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale8monetaryE = NULL;

/* Demangled: std::__ndk1::numpunct<char>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIcED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::__time_get(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getC1EPKc(void) {
    ALOGD("_ZNSt6__ndk110__time_getC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::collate<wchar_t>::~collate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17collateIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk17collateIwED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__throw_runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121__throw_runtime_errorEPKc(void) {
    ALOGD("_ZNSt6__ndk121__throw_runtime_errorEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE16do_decimal_pointEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19basic_iosIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKwm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmPKwm() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_signed<long long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__do_get_signedIxEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE15__do_get_signedIxEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::~__shared_weak_count() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_countD0Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_countD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(unsigned char*, long, unsigned char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPhlS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPhlS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_timed_mutex::shared_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: operator delete[](void*, std::align_val_t, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvSt11align_val_tRKSt9nothrow_t(void) {
    ALOGD("_ZdaPvSt11align_val_tRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12bad_any_cast = NULL;

/* Demangled: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeES9_S9_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__num_put_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__num_put_baseE = NULL;

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

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_day(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE9__get_dayERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE9__get_dayERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111regex_errorD1Ev(void) {
    ALOGD("_ZNSt6__ndk111regex_errorD1Ev() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<float, float>&, float*>(float*, float*, float*, float*, float*, std::__ndk1::__less<float, float>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIffEEPfEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIffEEPfEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::left */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base4leftE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekg(std::__ndk1::fpos<mbstate_t>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5seekgENS_4fposI9mbstate_tEE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5seekgENS_4fposI9mbstate_tEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::put(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE3putEw(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE3putEw() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__find_c_and_lock(void*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db17__find_c_and_lockEPv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db17__find_c_and_lockEPv() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__fundamental_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv123__fundamental_type_infoE = NULL;

/* Demangled: std::overflow_error::~overflow_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt14overflow_errorD0Ev(void) {
    ALOGD("_ZNSt14overflow_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::~__libcpp_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_dbD2Ev(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_dbD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ctype_base */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110ctype_baseE = NULL;

/* Demangled: std::bad_cast::~bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castD0Ev(void) {
    ALOGD("_ZNSt8bad_castD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk16localeC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_get<char>::__stage2_float_prep(std::__ndk1::ios_base&, char*, char&, char&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIcE19__stage2_float_prepERNS_8ios_baseEPcRcS5_(void) {
    ALOGD("_ZNSt6__ndk19__num_getIcE19__stage2_float_prepERNS_8ios_baseEPcRcS5_() called");
    return 0;
}

/* Exported Object: std::__ndk1::numpunct<wchar_t>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18numpunctIwE2idE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117moneypunct_bynameIwLb1EE4initEPKc(void) {
    ALOGD("_ZNSt6__ndk117moneypunct_bynameIwLb1EE4initEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::__c_node::~__c_node() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__c_nodeD0Ev(void) {
    ALOGD("_ZNSt6__ndk18__c_nodeD0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::collate<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17collateIcEE = NULL;

/* Demangled: std::__ndk1::__sp_mut::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut6unlockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_month(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_monthERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_monthERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110moneypunctIcLb1EEE = NULL;

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD0Ev(void) {
    ALOGD("_ZNSt11range_errorD0Ev() called");
    return 0;
}

/* Exported Object: _end */
extern "C" __attribute__((visibility("default"))) void* _end = NULL;

/* Demangled: std::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt19bad_optional_accessD2Ev(void) {
    ALOGD("_ZNSt19bad_optional_accessD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::__time_put(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putC2EPKc(void) {
    ALOGD("_ZNSt6__ndk110__time_putC2EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE11do_groupingEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<wchar_t, wchar_t>&, wchar_t*>(wchar_t*, wchar_t*, std::__ndk1::__less<wchar_t, wchar_t>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIwwEEPwEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIwwEEPwEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, false>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<long long, long long>&, long long*>(long long*, long long*, std::__ndk1::__less<long long, long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIxxEEPxEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIxxEEPxEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD2Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::do_tolower(char*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIcE10do_tolowerEPcPKc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIcE10do_tolowerEPcPKc() called");
    return 0;
}

/* Demangled: _Unwind_Find_FDE */
extern "C" __attribute__((visibility("default"))) int _Unwind_Find_FDE(void) {
    ALOGD("_Unwind_Find_FDE() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::basic_ostream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEC2EPNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEC2EPNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<wchar_t>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tEC1Em(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tEC1Em() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERt(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERt() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::messages_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115messages_bynameIcEE = NULL;

/* Demangled: std::__ndk1::numpunct<wchar_t>::numpunct(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIwEC1Em(void) {
    ALOGD("_ZNSt6__ndk18numpunctIwEC1Em() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::messages<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18messagesIcEE = NULL;

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_signed<long long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__do_get_signedIxEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE15__do_get_signedIxEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::~numpunct_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKwm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmPKwm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__time_put */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110__time_putE = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned long long, unsigned long long>&, unsigned long long*>(unsigned long long*, unsigned long long*, std::__ndk1::__less<unsigned long long, unsigned long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIyyEEPyEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIyyEEPyEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, unsigned long long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcy(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcy() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_put_byname<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115time_put_bynameIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_day_year_num(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE18__get_day_year_numERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE18__get_day_year_numERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_positive_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::__time_get(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getC2EPKc(void) {
    ALOGD("_ZNSt6__ndk110__time_getC2EPKc() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1EPKc(void) {
    ALOGD("_ZNSt13runtime_errorC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::peek() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4peekEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE4peekEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERx(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERx() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17codecvtIwc9mbstate_tEE = NULL;

/* Exported Object: construction vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk19strstreamE16_NS_13basic_ostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::numpunct_byname<char>::__init(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcE6__initEPKc(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcE6__initEPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: __register_frame_info_table */
extern "C" __attribute__((visibility("default"))) int __register_frame_info_table(void) {
    ALOGD("__register_frame_info_table() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPKv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPKv() called");
    return 0;
}

/* Demangled: std::runtime_error::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt13runtime_error4whatEv(void) {
    ALOGD("_ZNKSt13runtime_error4whatEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::npos */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4nposE = NULL;

/* Demangled: std::__ndk1::recursive_mutex::~recursive_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutexD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTISt8bad_cast = NULL;

/* Demangled: virtual thunk to std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk19strstreamD1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk19strstreamD1Ev() called");
    return 0;
}

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

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::~recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexD2Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17codecvtIDic9mbstate_tEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: __cxa_terminate_handler */
extern "C" __attribute__((visibility("default"))) void* __cxa_terminate_handler = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryC2Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::__rs_default(std::__ndk1::__rs_default const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultC2ERKS0_(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultC2ERKS0_() called");
    return 0;
}

/* Demangled: __gxx_personality_v0 */
extern "C" __attribute__((visibility("default"))) int __gxx_personality_v0(void) {
    ALOGD("__gxx_personality_v0() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<char16_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IDsLb1EEE = NULL;

/* Demangled: std::__ndk1::__time_put::~__time_put() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putD2Ev(void) {
    ALOGD("_ZNSt6__ndk110__time_putD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::tellp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5tellpEv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5tellpEv() called");
    return 0;
}

/* Demangled: std::exception_ptr::exception_ptr(std::exception_ptr const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13exception_ptrC1ERKS_(void) {
    ALOGD("_ZNSt13exception_ptrC1ERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::promise<void>::promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvEC2Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvEC2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIwc9mbstate_tED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&, std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_putIcE21__widen_and_group_intEPcS2_S2_S2_RS2_S3_RKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk19__num_putIcE21__widen_and_group_intEPcS2_S2_S2_RS2_S3_RKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_timed_mutex::recursive_timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121recursive_timed_mutexC1Ev(void) {
    ALOGD("_ZNSt6__ndk121recursive_timed_mutexC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::~__time_get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getD2Ev(void) {
    ALOGD("_ZNSt6__ndk110__time_getD2Ev() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<unsigned char, unsigned char>&, unsigned char*>(unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned char*, std::__ndk1::__less<unsigned char, unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIhhEEPhEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIhhEEPhEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__num_put<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19__num_putIwEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::showmanyc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9showmanycEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9showmanycEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDsc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDsc9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKw() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, true>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERl() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE6do_outERS1_PKDsS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE6do_outERS1_PKDsS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get_year(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_yearES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11do_get_yearES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE11do_encodingEv() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<int, int>&, int*>(int*, int*, int*, int*, int*, std::__ndk1::__less<int, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIiiEEPiEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIiiEEPiEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__init(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc() called");
    return 0;
}

/* Demangled: std::__ndk1::future_error::~future_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorD0Ev(void) {
    ALOGD("_ZNSt6__ndk112future_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::stold(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stoldERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm(void) {
    ALOGD("_ZNSt6__ndk15stoldERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm() called");
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

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114codecvt_bynameIDsc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::__time_put::__time_put(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk110__time_putC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1::ctype<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwE9__analyzeEcRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwE9__analyzeEcRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__num_get_unsigned_integral<unsigned int>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__num_get_unsigned_integralIjEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk127__num_get_unsigned_integralIjEET_PKcS3_Rji() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112system_errorE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignERKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignERKS5_mm() called");
    return 0;
}

/* Demangled: __deregister_frame_info */
extern "C" __attribute__((visibility("default"))) int __deregister_frame_info(void) {
    ALOGD("__deregister_frame_info() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_10 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders3_10E = NULL;

/* Demangled: std::__ndk1::numpunct<wchar_t>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIwED2Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIwED2Ev() called");
    return 0;
}

/* Demangled: __lttf2 */
extern "C" __attribute__((visibility("default"))) int __lttf2(void) {
    ALOGD("__lttf2() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__subscriptable(void const*, long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db15__subscriptableEPKvl(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db15__subscriptableEPKvl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::readsome(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE8readsomeEPcl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE8readsomeEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<char>::__do_date_order() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk118__time_get_storageIcE15__do_date_orderEv(void) {
    ALOGD("_ZNKSt6__ndk118__time_get_storageIcE15__do_date_orderEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::print */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5printE = NULL;

/* Demangled: std::__ndk1::__time_get_storage<char>::__time_get_storage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcEC2EPKc(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcEC2EPKc() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

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

/* Demangled: std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, char, long double) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEce(void) {
    ALOGD("_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEce() called");
    return 0;
}

/* Demangled: std::runtime_error::~runtime_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorD0Ev(void) {
    ALOGD("_ZNSt13runtime_errorD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::copy(wchar_t*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4copyEPwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4copyEPwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::do_narrow(char const*, char const*, char, char*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIcE9do_narrowEPKcS3_cPc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIcE9do_narrowEPKcS3_cPc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwl() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__enum_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__enum_type_infoE = NULL;

/* Demangled: std::__ndk1::codecvt_byname<char16_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDsc9mbstate_tED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::ctype<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk15ctypeIwEE = NULL;

/* Demangled: std::__ndk1::locale::__install_ctor(std::__ndk1::locale const&, std::__ndk1::locale::facet*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale14__install_ctorERKS0_PNS0_5facetEl(void) {
    ALOGD("_ZNSt6__ndk16locale14__install_ctorERKS0_PNS0_5facetEl() called");
    return 0;
}

/* Exported Object: __end__ */
extern "C" __attribute__((visibility("default"))) void* __end__ = NULL;

/* Exported Object: std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

/* Demangled: virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_unsigned<unsigned long long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedIyEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedIyEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__release_weak() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count14__release_weakEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count14__release_weakEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwEC2EPKc(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwEC2EPKc() called");
    return 0;
}

/* Exported Object: typeinfo for std::experimental::fundamentals_v1::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt12experimental15fundamentals_v112bad_any_castE = NULL;

/* Exported Object: typeinfo for std::__ndk1::moneypunct<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110moneypunctIwLb0EEE = NULL;

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1ERKS0_RKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEi(void) {
    ALOGD("_ZNSt6__ndk16localeC1ERKS0_RKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEi() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex8try_lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE10do_toupperEw(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE10do_toupperEw() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<char32_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IDiLb1EEE = NULL;

/* Demangled: __register_frame_info */
extern "C" __attribute__((visibility("default"))) int __register_frame_info(void) {
    ALOGD("__register_frame_info() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendERKS5_mm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sgetc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sgetcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sgetcEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2EiRKNS_14error_categoryE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: vtable for std::bad_alloc */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9bad_alloc = NULL;

/* Demangled: std::__ndk1::timed_mutex::~timed_mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk111timed_mutexD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::~locale() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeD2Ev(void) {
    ALOGD("_ZNSt6__ndk16localeD2Ev() called");
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

/* Exported Object: std::__ndk1::piecewise_construct */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk119piecewise_constructE = NULL;

/* Demangled: std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, bool, std::__ndk1::locale const&, unsigned int, unsigned int&, bool&, std::__ndk1::ctype<char> const&, std::__ndk1::unique_ptr<char, void (*)(void*)>&, char*&, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIcEERNS_10unique_ptrIcPFvPvEEERPcSM_(void) {
    ALOGD("_ZNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE8__do_getERS4_S4_bRKNS_6localeEjRjRbRKNS_5ctypeIcEERNS_10unique_ptrIcPFvPvEEERPcSM_() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultclEv(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultclEv() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned long>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedImEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedImEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::__init(char*, long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf6__initEPclS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf6__initEPclS1_() called");
    return 0;
}

/* Demangled: std::current_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt17current_exceptionv(void) {
    ALOGD("_ZSt17current_exceptionv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110moneypunctIcLb0EEE = NULL;

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE11do_encodingEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::future_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112future_errorE = NULL;

/* Exported Object: std::__ndk1::ctype_base::punct */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5punctE = NULL;

/* Demangled: __cxa_vec_dtor */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_dtor(void) {
    ALOGD("__cxa_vec_dtor() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::~__assoc_sub_state() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_stateD0Ev(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_stateD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::operator=(wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSEw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEaSEw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: __cxa_begin_catch */
extern "C" __attribute__((visibility("default"))) int __cxa_begin_catch(void) {
    ALOGD("__cxa_begin_catch() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<unsigned int, unsigned int>&, unsigned int*>(unsigned int*, unsigned int*, std::__ndk1::__less<unsigned int, unsigned int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::bad_cast::bad_cast() */
extern "C" __attribute__((visibility("default"))) int _ZNSt8bad_castC2Ev(void) {
    ALOGD("_ZNSt8bad_castC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for signed char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKa = NULL;

/* Demangled: std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIwS3_NS_9allocatorIwEEEE(void) {
    ALOGD("_ZNKSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIwS3_NS_9allocatorIwEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114collate_bynameIwE10do_compareEPKwS3_S3_S3_(void) {
    ALOGD("_ZNKSt6__ndk114collate_bynameIwE10do_compareEPKwS3_S3_S3_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwm() called");
    return 0;
}

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

/* Exported Object: typeinfo name for std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19money_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::imbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputc(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sputcEc(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sputcEc() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk124__libcpp_debug_exception4whatEv(void) {
    ALOGD("_ZNKSt6__ndk124__libcpp_debug_exception4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_floating_point<long double>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIeEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIeEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::facet::__on_zero_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16locale5facet16__on_zero_sharedEv(void) {
    ALOGD("_ZNSt6__ndk16locale5facet16__on_zero_sharedEv() called");
    return 0;
}

/* Exported Object: typeinfo name for char16_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKDs = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_minute(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE12__get_minuteERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE12__get_minuteERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: __bss_start */
extern "C" __attribute__((visibility("default"))) void* __bss_start = NULL;

/* Demangled: std::__ndk1::valarray<unsigned long>::~valarray() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18valarrayImED2Ev(void) {
    ALOGD("_ZNSt6__ndk18valarrayImED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::invalid_argument */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt16invalid_argument = NULL;

/* Demangled: std::__ndk1::stod(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stodERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm(void) {
    ALOGD("_ZNSt6__ndk14stodERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm() called");
    return 0;
}

/* Exported Object: typeinfo name for char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKc = NULL;

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDic9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDic9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::do_falsename() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIcE12do_falsenameEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIcE12do_falsenameEv() called");
    return 0;
}

/* Demangled: __cxa_throw */
extern "C" __attribute__((visibility("default"))) int __cxa_throw(void) {
    ALOGD("__cxa_throw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmRKS5_mm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEmmRKS5_mm() called");
    return 0;
}

/* Exported Object: typeinfo name for long double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKe = NULL;

/* Demangled: std::__ndk1::collate<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIwE10do_compareEPKwS3_S3_S3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIwE10do_compareEPKwS3_S3_S3_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get_year(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_yearES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_yearES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::__execute() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9__executeEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9__executeEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__time_get_storage<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk118__time_get_storageIwEE = NULL;

/* Exported Object: vtable for std::type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9type_info = NULL;

/* Exported Object: std::__ndk1::ios_base::out */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3outE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sungetc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7sungetcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7sungetcEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceIPKcEENS_9enable_ifIXsr19__is_input_iteratorIT_EE5valueERS5_E4typeENS_11__wrap_iterIS8_EESF_SA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceIPKcEENS_9enable_ifIXsr19__is_input_iteratorIT_EE5valueERS5_E4typeENS_11__wrap_iterIS8_EESF_SA_SA_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceIPKcEENS_9enable_ifIXsr19__is_input_iteratorIT_EE5valueERS5_E4typeENS_11__wrap_iterIS8_EESF_SA_SA_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tEC2EPKcm() called");
    return 0;
}

/* Demangled: __register_frame_info_bases */
extern "C" __attribute__((visibility("default"))) int __register_frame_info_bases(void) {
    ALOGD("__register_frame_info_bases() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE9do_narrowEwc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE9do_narrowEwc() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::snextc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6snextcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6snextcEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >& (*)(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEPFRS3_S4_E() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17codecvtIDic9mbstate_tEE = NULL;

/* Demangled: std::rethrow_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZSt17rethrow_exceptionSt13exception_ptr(void) {
    ALOGD("_ZSt17rethrow_exceptionSt13exception_ptr() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::__do_put(wchar_t*, wchar_t*&, tm const*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110__time_put8__do_putEPwRS1_PK2tmcc(void) {
    ALOGD("_ZNKSt6__ndk110__time_put8__do_putEPwRS1_PK2tmcc() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::blank */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5blankE = NULL;

/* Demangled: std::__ndk1::undeclare_no_pointers(char*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk121undeclare_no_pointersEPcm(void) {
    ALOGD("_ZNSt6__ndk121undeclare_no_pointersEPcm() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get_date(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_dateES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_dateES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Exported Object: vtable for std::experimental::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt12experimental19bad_optional_accessE = NULL;

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::locale const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2ERKS0_S2_i(void) {
    ALOGD("_ZNSt6__ndk16localeC2ERKS0_S2_i() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE14do_curr_symbolEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sungetc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7sungetcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE7sungetcEv() called");
    return 0;
}

/* Exported Object: typeinfo for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTIN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDic9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDic9mbstate_tED2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<char16_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IDsLb1EEE = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<short, short>&, short*>(short*, short*, std::__ndk1::__less<short, short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIssEEPsEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIssEEPsEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__shared_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__shared_countE = NULL;

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__x() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE3__xEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE3__xEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ctype_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112ctype_bynameIwEE = NULL;

/* Exported Object: std::__ndk1::ios_base::hex */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3hexE = NULL;

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<unsigned char, unsigned char>&, unsigned char*>(unsigned char*, unsigned char*, std::__ndk1::__less<unsigned char, unsigned char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIhhEEPhEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIhhEEPhEEvT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ostrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110ostrstreamE = NULL;

/* Exported Object: typeinfo for long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPl = NULL;

/* Demangled: operator delete(void*, std::nothrow_t const&) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvRKSt9nothrow_t(void) {
    ALOGD("_ZdlPvRKSt9nothrow_t() called");
    return 0;
}

/* Exported Object: typeinfo for double* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPd = NULL;

/* Demangled: std::__ndk1::__get_collation_name(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__get_collation_nameEPKc(void) {
    ALOGD("_ZNSt6__ndk120__get_collation_nameEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale(std::__ndk1::locale const&, char const*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1ERKS0_PKci(void) {
    ALOGD("_ZNSt6__ndk16localeC1ERKS0_PKci() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::str() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambuf3strEv(void) {
    ALOGD("_ZNSt6__ndk112strstreambuf3strEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__weeks() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE7__weeksEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE7__weeksEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned long, std::__ndk1::allocator<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_mmRKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_mmRKS4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::time_put_byname<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115time_put_bynameIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::collate<char>::do_hash(char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIcE7do_hashEPKcS3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIcE7do_hashEPKcS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__function_type_infoE = NULL;

/* Exported Object: vtable for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt14overflow_error = NULL;

/* Demangled: std::__ndk1::locale::locale(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1EPKc(void) {
    ALOGD("_ZNSt6__ndk16localeC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2ERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEC2ERKS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17codecvtIDsc9mbstate_tEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD0Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >& (*)(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRNS_9basic_iosIwS2_EES6_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRNS_9basic_iosIwS2_EES6_E() called");
    return 0;
}

/* Demangled: std::domain_error::~domain_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12domain_errorD0Ev(void) {
    ALOGD("_ZNSt12domain_errorD0Ev() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::istrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk110istrstreamE0_NS_13basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDi = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IwLb0EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IwLb0EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find_last_of(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE12find_last_ofEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE12find_last_ofEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::~error_category() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114error_categoryD0Ev(void) {
    ALOGD("_ZNSt6__ndk114error_categoryD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__narrow_to_utf8<32ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm32EED2Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm32EED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::basic_istream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_second(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE12__get_secondERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE12__get_secondERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::~__codecvt_utf16() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__codecvt_utf16IDsLb0EED0Ev(void) {
    ALOGD("_ZNSt6__ndk115__codecvt_utf16IDsLb0EED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char32_t, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIDic9mbstate_tED0Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::adjustfield */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base11adjustfieldE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE2atEm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE2atEm() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::pcount() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112strstreambuf6pcountEv(void) {
    ALOGD("_ZNKSt6__ndk112strstreambuf6pcountEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__time_get_storage<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk118__time_get_storageIcEE = NULL;

/* Exported Object: typeinfo name for std::nested_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt16nested_exception = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIwED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE6do_outER9mbstate_tPKDiS5_RS5_PcS7_RS7_() called");
    return 0;
}

/* Exported Object: typeinfo for __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPn = NULL;

/* Demangled: _Unwind_Resume */
extern "C" __attribute__((visibility("default"))) int _Unwind_Resume(void) {
    ALOGD("_Unwind_Resume() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_minute(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE12__get_minuteERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE12__get_minuteERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::istrstream */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110istrstreamE = NULL;

/* Demangled: std::__ndk1::promise<void>::set_exception(std::exception_ptr) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr(void) {
    ALOGD("_ZNSt6__ndk17promiseIvE13set_exceptionESt13exception_ptr() called");
    return 0;
}

/* Demangled: __cxa_current_exception_type */
extern "C" __attribute__((visibility("default"))) int __cxa_current_exception_type(void) {
    ALOGD("__cxa_current_exception_type() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::do_truename() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIcE11do_truenameEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIcE11do_truenameEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKy = NULL;

/* Demangled: std::__ndk1::__c_node::~__c_node() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__c_nodeD1Ev(void) {
    ALOGD("_ZNSt6__ndk18__c_nodeD1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPx = NULL;

/* Demangled: std::__ndk1::__num_put_base::__format_float(char*, char const*, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__num_put_base14__format_floatEPcPKcj(void) {
    ALOGD("_ZNSt6__ndk114__num_put_base14__format_floatEPcPKcj() called");
    return 0;
}

/* Demangled: std::__ndk1::ostrstream::~ostrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110ostrstreamD0Ev(void) {
    ALOGD("_ZNSt6__ndk110ostrstreamD0Ev() called");
    return 0;
}

/* Demangled: std::bad_variant_access::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt18bad_variant_access4whatEv(void) {
    ALOGD("_ZNKSt18bad_variant_access4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::moneypunct<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110moneypunctIcLb0EEE = NULL;

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_unsigned<unsigned long>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedImEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__do_get_unsignedImEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<long long, long long>&, long long*>(long long*, long long*, std::__ndk1::__less<long long, long long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIxxEEPxEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIxxEEPxEEvT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKw = NULL;

/* Exported Object: typeinfo name for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt15underflow_error = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__shim_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv116__shim_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long, std::__ndk1::allocator<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_mmRKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC2ERKS5_mmRKS4_() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_optional_access */
extern "C" __attribute__((visibility("default"))) void* _ZTISt19bad_optional_access = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<char, char>&, char*>(char*, char*, std::__ndk1::__less<char, char>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIccEEPcEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIccEEPcEEbT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPj = NULL;

/* Exported Object: typeinfo name for int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKi = NULL;

/* Exported Object: vtable for std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIcc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIcc9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::in_avail() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8in_availEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE8in_availEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE13do_pos_formatEv() called");
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

/* Demangled: std::__ndk1::collate_byname<wchar_t>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5imbueERKNS_6localeE() called");
    return 0;
}

/* Demangled: operator new(unsigned long, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZnwmSt11align_val_t(void) {
    ALOGD("_ZnwmSt11align_val_t() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sgetc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sgetcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sgetcEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::wcerr */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk15wcerrE = NULL;

/* Demangled: std::__ndk1::moneypunct<char, true>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE14do_frac_digitsEv() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKo = NULL;

/* Exported Object: typeinfo for float* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPf = NULL;

/* Demangled: unsigned long std::__ndk1::__num_get_unsigned_integral<unsigned long>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__num_get_unsigned_integralImEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk127__num_get_unsigned_integralImEET_PKcS3_Rji() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPh = NULL;

/* Exported Object: typeinfo for char16_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIDs = NULL;

/* Exported Object: typeinfo for signed char */
extern "C" __attribute__((visibility("default"))) void* _ZTIa = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__time_get_c_storage<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk120__time_get_c_storageIwEE = NULL;

/* Exported Object: typeinfo for long double */
extern "C" __attribute__((visibility("default"))) void* _ZTIe = NULL;

/* Exported Object: typeinfo for __float128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIg = NULL;

/* Demangled: std::__ndk1::shared_timed_mutex::unlock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex6unlockEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex6unlockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIcc9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIcc9mbstate_tED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112codecvt_baseE = NULL;

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIwc9mbstate_tEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk17codecvtIwc9mbstate_tEC1EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC1ERKS5_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sgetn(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sgetnEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sgetnEPcl() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::runtime_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKS_(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKS_() called");
    return 0;
}

/* Exported Object: typeinfo for int */
extern "C" __attribute__((visibility("default"))) void* _ZTIi = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__widen_from_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__widen_from_utf8ILm32EEE = NULL;

/* Exported Object: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE2idE = NULL;

/* Demangled: std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__money_putIcE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_Ri(void) {
    ALOGD("_ZNSt6__ndk111__money_putIcE13__gather_infoEbbRKNS_6localeERNS_10money_base7patternERcS8_RNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEESF_SF_Ri() called");
    return 0;
}

/* Demangled: _Unwind_FindEnclosingFunction */
extern "C" __attribute__((visibility("default"))) int _Unwind_FindEnclosingFunction(void) {
    ALOGD("_Unwind_FindEnclosingFunction() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_2 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_2E = NULL;

/* Demangled: _Unwind_GetIP */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetIP(void) {
    ALOGD("_Unwind_GetIP() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPKm = NULL;

/* Exported Object: vtable for __cxxabiv1::__si_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv120__si_class_type_infoE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::wait() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4waitEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4waitEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekg(long long, std::__ndk1::ios_base::seekdir) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5seekgExNS_8ios_base7seekdirE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE5seekgExNS_8ios_base7seekdirE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::collate<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17collateIwEE = NULL;

/* Demangled: std::__ndk1::ios_base::failure::~failure() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureD2Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE10do_scan_isEmPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE10do_scan_isEmPKwS3_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt_byname<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114codecvt_bynameIcc9mbstate_tEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::moneypunct<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110moneypunctIwLb1EEE = NULL;

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

/* Demangled: std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::equivalent(std::__ndk1::error_code const&, int) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentERKNS_10error_codeEi() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt_byname<char, char, mbstate_t>::~codecvt_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk114codecvt_bynameIcc9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::logic_error::operator=(std::logic_error const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_erroraSERKS_(void) {
    ALOGD("_ZNSt11logic_erroraSERKS_() called");
    return 0;
}

/* Demangled: std::__ndk1::regex_error::~regex_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111regex_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk111regex_errorD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::condition_variable::notify_one() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118condition_variable10notify_oneEv(void) {
    ALOGD("_ZNSt6__ndk118condition_variable10notify_oneEv() called");
    return 0;
}

/* Demangled: std::__ndk1::chrono::steady_clock::now() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16chrono12steady_clock3nowEv(void) {
    ALOGD("_ZNSt6__ndk16chrono12steady_clock3nowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::~system_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorD2Ev(void) {
    ALOGD("_ZNSt6__ndk112system_errorD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::future<void>::~future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16futureIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk16futureIvED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*, wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_putIwE23__widen_and_group_floatEPcS2_S2_PwRS3_S4_RKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk19__num_putIwE23__widen_and_group_floatEPcS2_S2_PwRS3_S4_RKNS_6localeE() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPm = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::rfind(wchar_t, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEwm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5rfindEwm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::do_toupper(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIcE10do_toupperEc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIcE10do_toupperEc() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE5do_inERS1_PKcS5_RS5_PDiS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE5do_inERS1_PKcS5_RS5_PDiS7_RS7_() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned long long* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPy = NULL;

/* Demangled: std::__ndk1::regex_error::regex_error(std::__ndk1::regex_constants::error_type) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111regex_errorC1ENS_15regex_constants10error_typeE(void) {
    ALOGD("_ZNSt6__ndk111regex_errorC1ENS_15regex_constants10error_typeE() called");
    return 0;
}

/* Exported Object: typeinfo name for int* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPi = NULL;

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<unsigned long, unsigned long>&, unsigned long*>(unsigned long*, unsigned long*, std::__ndk1::__less<unsigned long, unsigned long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessImmEEPmEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessImmEEPmEEvT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo name for __float128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPg = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__time_get_storage<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk118__time_get_storageIcEE = NULL;

/* Demangled: std::__ndk1::moneypunct<char, true>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE16do_decimal_pointEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_white_space(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__pointer_to_member_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv129__pointer_to_member_type_infoE = NULL;

/* Exported Object: vtable for std::__ndk1::__shared_weak_count */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk119__shared_weak_countE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekp(std::__ndk1::fpos<mbstate_t>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5seekpENS_4fposI9mbstate_tEE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5seekpENS_4fposI9mbstate_tEE() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, false>::do_positive_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb0EE16do_positive_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb0EE16do_positive_signEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__narrow_to_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk116__narrow_to_utf8ILm16EEE = NULL;

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

/* Exported Object: std::__ndk1::ios_base::boolalpha */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base9boolalphaE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__init(wchar_t const*, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::seekp(long long, std::__ndk1::ios_base::seekdir) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpExNS_8ios_base7seekdirE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpExNS_8ios_base7seekdirE() called");
    return 0;
}

/* Exported Object: typeinfo name for long double* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPe = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::in_avail() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8in_availEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE8in_availEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct_byname<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117moneypunct_bynameIcLb1EEE = NULL;

/* Exported Object: vtable for std::__ndk1::moneypunct_byname<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117moneypunct_bynameIwLb1EEE = NULL;

/* Demangled: std::__ndk1::__i_node::~__i_node() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__i_nodeD2Ev(void) {
    ALOGD("_ZNSt6__ndk18__i_nodeD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC2ERS3_b(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6sentryC2ERS3_b() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, false>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: typeinfo for bool* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPb = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<char16_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IDsLb0EEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::seekp(std::__ndk1::fpos<mbstate_t>) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE16do_always_noconvEv() called");
    return 0;
}

/* Exported Object: typeinfo name for wchar_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPw = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__codecvt_utf8IwEE = NULL;

/* Exported Object: typeinfo for std::bad_variant_access */
extern "C" __attribute__((visibility("default"))) void* _ZTISt18bad_variant_access = NULL;

/* Exported Object: typeinfo for std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19basic_iosIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::flush() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5flushEv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5flushEv() called");
    return 0;
}

/* Demangled: __cxa_vec_new3 */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_new3(void) {
    ALOGD("__cxa_vec_new3() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ios_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18ios_baseE = NULL;

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC2ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::swap(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE4swapERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(void*&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERPv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsERPv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base4lockEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base4lockEv() called");
    return 0;
}

/* Exported Object: typeinfo for char32_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDi = NULL;

/* Demangled: std::__ndk1::thread::~thread() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16threadD1Ev(void) {
    ALOGD("_ZNSt6__ndk16threadD1Ev() called");
    return 0;
}

/* Exported Object: std::__ndk1::moneypunct<char, false>::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110moneypunctIcLb0EE2idE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::messages_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115messages_bynameIwEE = NULL;

/* Demangled: std::__ndk1::moneypunct<char, false>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE14do_frac_digitsEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::all */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale3allE = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__erase_i(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db9__erase_iEPv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db9__erase_iEPv() called");
    return 0;
}

/* Exported Object: typeinfo for char16_t* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPDs = NULL;

/* Demangled: std::__ndk1::moneypunct<char, true>::do_curr_symbol() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE14do_curr_symbolEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE14do_curr_symbolEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::numpunct<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18numpunctIwEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19basic_iosIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: vtable for std::__ndk1::messages<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18messagesIcEE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::seekpos(std::__ndk1::fpos<mbstate_t>, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7seekposENS_4fposI9mbstate_tEEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE7seekposENS_4fposI9mbstate_tEEj() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned long long */
extern "C" __attribute__((visibility("default"))) void* _ZTIy = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEd(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEd() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(char, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm() called");
    return 0;
}

/* Exported Object: typeinfo name for short* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPs = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_day(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE9__get_dayERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE9__get_dayERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::ctype_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110ctype_baseE = NULL;

/* Exported Object: typeinfo for wchar_t */
extern "C" __attribute__((visibility("default"))) void* _ZTIw = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::failure::failure(char const*, std::__ndk1::error_code const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureC1EPKcRKNS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureC1EPKcRKNS_10error_codeE() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk19strstreamD0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk19strstreamD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::~ios_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_baseD1Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_baseD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get_weekday(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE14do_get_weekdayES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE14do_get_weekdayES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::upper */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5upperE = NULL;

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<long, long>&, long*>(long*, long*, std::__ndk1::__less<long, long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIllEEPlEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIllEEPlEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(unsigned long, unsigned long, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7compareEmmPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, false>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb0EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb0EE13do_max_lengthEv() called");
    return 0;
}

/* Demangled: unsigned short std::__ndk1::__num_get_unsigned_integral<unsigned short>(char const*, char const*, unsigned int&, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__num_get_unsigned_integralItEET_PKcS3_Rji(void) {
    ALOGD("_ZNSt6__ndk127__num_get_unsigned_integralItEET_PKcS3_Rji() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned __int128* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPo = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_date_order() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13do_date_orderEv(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13do_date_orderEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(unsigned long, char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE4findEPKwmm() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::floatfield */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base10floatfieldE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEl(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEl() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::__time_get(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk110__time_getC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

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

/* Exported Object: vtable for std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114codecvt_bynameIDsc9mbstate_tEE = NULL;

/* Exported Object: typeinfo for unsigned long */
extern "C" __attribute__((visibility("default"))) void* _ZTIm = NULL;

/* Demangled: std::__ndk1::chrono::system_clock::now() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16chrono12system_clock3nowEv(void) {
    ALOGD("_ZNSt6__ndk16chrono12system_clock3nowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000000l> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(void) {
    ALOGD("_ZNSt6__ndk111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_first_of(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13find_first_ofEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE13find_first_ofEPKcmm() called");
    return 0;
}

/* Exported Object: std::__ndk1::ctype_base::xdigit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base6xdigitE = NULL;

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__time_get */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110__time_getE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::at(unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE2atEm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE2atEm() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::ios_base::failure */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18ios_base7failureE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find_first_not_of(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE17find_first_not_ofEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE17find_first_not_ofEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<char>::classic_table() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIcE13classic_tableEv(void) {
    ALOGD("_ZNSt6__ndk15ctypeIcE13classic_tableEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_unshift(mbstate_t&, char*, char*, char*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE10do_unshiftER9mbstate_tPcS4_RS4_(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE10do_unshiftER9mbstate_tPcS4_RS4_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::time_get_byname<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115time_get_bynameIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Exported Object: typeinfo for short */
extern "C" __attribute__((visibility("default"))) void* _ZTIs = NULL;

/* Demangled: std::range_error::~range_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11range_errorD1Ev(void) {
    ALOGD("_ZNSt11range_errorD1Ev() called");
    return 0;
}

/* Demangled: _Unwind_SetGR */
extern "C" __attribute__((visibility("default"))) int _Unwind_SetGR(void) {
    ALOGD("_Unwind_SetGR() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sgetn(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sgetnEPwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sgetnEPwl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE9__grow_byEmmmmmm() called");
    return 0;
}

/* Exported Object: typeinfo for char */
extern "C" __attribute__((visibility("default"))) void* _ZTIc = NULL;

/* Exported Object: std::__ndk1::locale::messages */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale8messagesE = NULL;

/* Demangled: std::__ndk1::to_wstring(double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEd(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEd() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110moneypunctIcLb0EEE = NULL;

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(void* (*)(unsigned long), void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPFPvmEPFvS1_E(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPFPvmEPFvS1_E() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, false>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb0EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb0EE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEmc() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned __int128 */
extern "C" __attribute__((visibility("default"))) void* _ZTIo = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sputn(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sputnEPKcl() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__codecvt_utf8IwEE = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::at(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDic9mbstate_tE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDic9mbstate_tE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::basic_string(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::allocator<wchar_t> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_RKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEC1ERKS5_RKS4_() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__r() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE3__rEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE3__rEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::__libcpp_debug_function */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk123__libcpp_debug_functionE = NULL;

/* Exported Object: std::__ndk1::ctype_base::graph */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk110ctype_base5graphE = NULL;

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8_utf16<char32_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk120__codecvt_utf8_utf16IDiEE = NULL;

/* Demangled: std::__ndk1::stof(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stofERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm(void) {
    ALOGD("_ZNSt6__ndk14stofERKNS_12basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEEEPm() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_year(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE10__get_yearERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE10__get_yearERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo name for std::experimental::fundamentals_v1::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt12experimental15fundamentals_v112bad_any_castE = NULL;

/* Demangled: std::__ndk1::to_wstring(float) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEf(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEf() called");
    return 0;
}

/* Exported Object: std::__ndk1::locale::ctype */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk16locale5ctypeE = NULL;

/* Exported Object: std::__ndk1::placeholders::_5 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_5E = NULL;

/* Exported Object: typeinfo name for std::__ndk1::time_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: __cxa_allocate_dependent_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_allocate_dependent_exception(void) {
    ALOGD("__cxa_allocate_dependent_exception() called");
    return 0;
}

/* Demangled: std::__ndk1::random_device::entropy() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk113random_device7entropyEv(void) {
    ALOGD("_ZNKSt6__ndk113random_device7entropyEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::sync() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE4syncEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::messages<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18messagesIwEE = NULL;

/* Exported Object: typeinfo name for std::bad_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt8bad_cast = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE5do_isEPKwS3_Pm(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE5do_isEPKwS3_Pm() called");
    return 0;
}

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

/* Demangled: std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::copyfmt(std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEE7copyfmtERKS3_(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEE7copyfmtERKS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEj(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEj() called");
    return 0;
}

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

/* Demangled: std::__ndk1::ios_base::__set_failbit_and_consider_rethrow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base34__set_failbit_and_consider_rethrowEv(void) {
    ALOGD("_ZNSt6__ndk18ios_base34__set_failbit_and_consider_rethrowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__iterator_copy(void*, void const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db15__iterator_copyEPvPKv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db15__iterator_copyEPvPKv() called");
    return 0;
}

/* Demangled: operator delete[](void*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZdaPvm(void) {
    ALOGD("_ZdaPvm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned short) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEt(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEt() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIwEC1EPKc(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIwEC1EPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get_time(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11do_get_timeES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Exported Object: typeinfo name for __cxxabiv1::__pointer_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv119__pointer_type_infoE = NULL;

/* Demangled: std::__ndk1::ios_base::swap(std::__ndk1::ios_base&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4swapERS0_(void) {
    ALOGD("_ZNSt6__ndk18ios_base4swapERS0_() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::~strstreambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufD2Ev(void) {
    ALOGD("_ZNSt6__ndk112strstreambufD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::operator=(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEaSERKS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEEaSERKS3_() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::trunc */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base5truncE = NULL;

/* Exported Object: vtable for std::__ndk1::moneypunct<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110moneypunctIcLb1EEE = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__decrementable(void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk111__libcpp_db15__decrementableEPKv(void) {
    ALOGD("_ZNKSt6__ndk111__libcpp_db15__decrementableEPKv() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::~__libcpp_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_dbD1Ev(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_dbD1Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__array_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__array_type_infoE = NULL;

/* Demangled: std::__ndk1::__shared_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114__shared_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk114__shared_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::push_back(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc() called");
    return 0;
}

/* Demangled: std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt13runtime_errorC1ERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned int>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned int&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedIjEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedIjEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_any_cast */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt12bad_any_cast = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::rfind(char, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEcm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE10do_toupperEw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE10do_toupperEw() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_get<wchar_t>::__stage2_float_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&, wchar_t&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIwE19__stage2_float_prepERNS_8ios_baseEPwRwS5_(void) {
    ALOGD("_ZNSt6__ndk19__num_getIwE19__stage2_float_prepERNS_8ios_baseEPwRwS5_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<char>::~numpunct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk18numpunctIcED1Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk112system_errorE = NULL;

/* Demangled: __cxa_vec_delete2 */
extern "C" __attribute__((visibility("default"))) int __cxa_vec_delete2(void) {
    ALOGD("__cxa_vec_delete2() called");
    return 0;
}

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

/* Demangled: std::__ndk1::__thread_struct::~__thread_struct() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115__thread_structD1Ev(void) {
    ALOGD("_ZNSt6__ndk115__thread_structD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_storage<char>::init(std::__ndk1::ctype<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118__time_get_storageIcE4initERKNS_5ctypeIcEE(void) {
    ALOGD("_ZNSt6__ndk118__time_get_storageIcE4initERKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::~__libcpp_debug_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionD0Ev(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC1Ev(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::to_wstring(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEl(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEl() called");
    return 0;
}

/* Demangled: __emutls_get_address */
extern "C" __attribute__((visibility("default"))) int __emutls_get_address(void) {
    ALOGD("__emutls_get_address() called");
    return 0;
}

/* Demangled: std::__ndk1::random_device::operator()() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113random_deviceclEv(void) {
    ALOGD("_ZNSt6__ndk113random_deviceclEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(float) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEf() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::getloc() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6getlocEv(void) {
    ALOGD("_ZNKSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6getlocEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__am_pm() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE7__am_pmEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE7__am_pmEv() called");
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

/* Demangled: std::__ndk1::to_wstring(long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110to_wstringEx(void) {
    ALOGD("_ZNSt6__ndk110to_wstringEx() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_getIwE17__stage2_int_prepERNS_8ios_baseEPwRw(void) {
    ALOGD("_ZNSt6__ndk19__num_getIwE17__stage2_int_prepERNS_8ios_baseEPwRw() called");
    return 0;
}

/* Exported Object: std::__ndk1::placeholders::_8 */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk112placeholders2_8E = NULL;

/* Demangled: virtual thunk to std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_istreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEj(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEj() called");
    return 0;
}

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

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwlw(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwlw() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setp(wchar_t*, wchar_t*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4setpEPwS4_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4setpEPwS4_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk111regex_errorE = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::assign(wchar_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKwm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6assignEPKwm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::tellp() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5tellpEv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE5tellpEv() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::locale() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC1Ev(void) {
    ALOGD("_ZNSt6__ndk16localeC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for decltype(nullptr)* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDn = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getEPwl() called");
    return 0;
}

/* Exported Object: vtable for std::runtime_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt13runtime_error = NULL;

/* Exported Object: typeinfo name for half* */
extern "C" __attribute__((visibility("default"))) void* _ZTSPDh = NULL;

/* Demangled: std::__ndk1::collate_byname<wchar_t>::collate_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwEC2EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7replaceEmmmw() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<unsigned int, unsigned int>&, unsigned int*>(unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, std::__ndk1::__less<unsigned int, unsigned int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIjjEEPjEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIjjEEPjEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::swap(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4swapERS3_(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE4swapERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::istrstream::~istrstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110istrstreamD2Ev(void) {
    ALOGD("_ZNSt6__ndk110istrstreamD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcED1Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjP2tmcc(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjP2tmcc() called");
    return 0;
}

/* Demangled: operator delete(void*, std::align_val_t) */
extern "C" __attribute__((visibility("default"))) int _ZdlPvSt11align_val_t(void) {
    ALOGD("_ZdlPvSt11align_val_t() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114__codecvt_utf8IDsEE = NULL;

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::getline(char*, long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPclc(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7getlineEPclc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114codecvt_bynameIwc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE11do_scan_notEmPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE11do_scan_notEmPKwS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcED2Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDsc9mbstate_tED2Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDsc9mbstate_tED2Ev() called");
    return 0;
}

/* Demangled: std::logic_error::~logic_error() */
extern "C" __attribute__((visibility("default"))) int _ZNSt11logic_errorD1Ev(void) {
    ALOGD("_ZNSt11logic_errorD1Ev() called");
    return 0;
}

/* Demangled: void std::__ndk1::__sort<std::__ndk1::__less<double, double>&, double*>(double*, double*, std::__ndk1::__less<double, double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16__sortIRNS_6__lessIddEEPdEEvT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk16__sortIRNS_6__lessIddEEPdEEvT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::~ctype_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112ctype_bynameIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk112ctype_bynameIwED0Ev() called");
    return 0;
}

/* Exported Object: vtable for std::exception */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt9exception = NULL;

/* Exported Object: typeinfo name for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEx(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEx() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::strstream */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19strstreamE = NULL;

/* Demangled: std::__ndk1::random_device::random_device(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113random_deviceC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE(void) {
    ALOGD("_ZNSt6__ndk113random_deviceC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get::~__time_get() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_getD1Ev(void) {
    ALOGD("_ZNSt6__ndk110__time_getD1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114codecvt_bynameIwc9mbstate_tEE = NULL;

/* Exported Object: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::id */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE = NULL;

/* Exported Object: typeinfo for unsigned short* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPt = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8<char32_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDiE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDiE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::try_lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex8try_lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex8try_lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<wchar_t, true>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIwLb1EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIwLb1EE16do_decimal_pointEv() called");
    return 0;
}

/* Exported Object: typeinfo for void* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPv = NULL;

/* Exported Object: vtable for std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115time_get_bynameIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::future_error::future_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112future_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112future_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::compare(wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEPKw(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE7compareEPKw() called");
    return 0;
}

/* Exported Object: construction vtable for std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTCNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE16_NS_13basic_ostreamIcS2_EE = NULL;

/* Demangled: std::__ndk1::numpunct<char>::numpunct(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18numpunctIcEC2Em(void) {
    ALOGD("_ZNSt6__ndk18numpunctIcEC2Em() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIwNS_11char_traitsIwEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<char>::do_tolower(char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIcE10do_tolowerEc(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIcE10do_tolowerEc() called");
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

/* Demangled: std::__ndk1::ios_base::getloc() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18ios_base6getlocEv(void) {
    ALOGD("_ZNKSt6__ndk18ios_base6getlocEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::putback(char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7putbackEc(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE7putbackEc() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::numpunct_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115numpunct_bynameIwEE = NULL;

/* Exported Object: typeinfo for decltype(nullptr) const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKDn = NULL;

/* Demangled: _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESA_SA_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESA_SA_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9enable_ifIXsr21__is_forward_iteratorIT_EE5valueEvE4typeESA_SA_() called");
    return 0;
}

/* Demangled: std::__ndk1::recursive_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115recursive_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk115recursive_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(unsigned long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEy(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEy() called");
    return 0;
}

/* Demangled: std::__ndk1::__sp_mut::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__sp_mut4lockEv(void) {
    ALOGD("_ZNSt6__ndk18__sp_mut4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::system_error::system_error(std::__ndk1::error_code) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112system_errorC2ENS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk112system_errorC2ENS_10error_codeE() called");
    return 0;
}

/* Demangled: std::__ndk1::__narrow_to_utf8<16ul>::~__narrow_to_utf8() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk116__narrow_to_utf8ILm16EED1Ev(void) {
    ALOGD("_ZNSt6__ndk116__narrow_to_utf8ILm16EED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5eraseEmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE5eraseEmm() called");
    return 0;
}

/* Demangled: std::__ndk1::stof(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm(void) {
    ALOGD("_ZNSt6__ndk14stofERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPm() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_put::__time_put(char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk110__time_putC1EPKc(void) {
    ALOGD("_ZNSt6__ndk110__time_putC1EPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk114codecvt_bynameIwc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::valarray<unsigned long>::~valarray() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18valarrayImED1Ev(void) {
    ALOGD("_ZNSt6__ndk18valarrayImED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, false>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE13do_neg_formatEv() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(long double) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEe(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEe() called");
    return 0;
}

/* Demangled: std::__ndk1::stoll(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk15stollERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcEC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::ignore(long, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_future<void>::~shared_future() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113shared_futureIvED2Ev(void) {
    ALOGD("_ZNSt6__ndk113shared_futureIvED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::strstream::~strstream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19strstreamD2Ev(void) {
    ALOGD("_ZNSt6__ndk19strstreamD2Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__time_get_c_storage<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk120__time_get_c_storageIcEE = NULL;

/* Demangled: std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__do_get_floating_point<double>(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, double&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIdEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIdEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char, char, mbstate_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIcc9mbstate_tE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIcc9mbstate_tE16do_always_noconvEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc() called");
    return 0;
}

/* Exported Object: typeinfo name for std::overflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt14overflow_error = NULL;

/* Exported Object: typeinfo for std::__ndk1::moneypunct<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk110moneypunctIwLb1EEE = NULL;

/* Demangled: std::__ndk1::__assoc_sub_state::copy() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state4copyEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state4copyEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__c_node */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18__c_nodeE = NULL;

/* Exported Object: std::__ndk1::__num_get_base::__src */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk114__num_get_base5__srcE = NULL;

/* Exported Object: vtable for std::__ndk1::ctype_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112ctype_bynameIwEE = NULL;

/* Demangled: std::bad_any_cast::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt12bad_any_cast4whatEv(void) {
    ALOGD("_ZNKSt12bad_any_cast4whatEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE13do_pos_formatEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__money_put<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk111__money_putIcEE = NULL;

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

/* Demangled: std::__ndk1::ctype<wchar_t>::do_is(unsigned long, wchar_t) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE5do_isEmw(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE5do_isEmw() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::right */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base5rightE = NULL;

/* Demangled: std::__ndk1::chrono::system_clock::to_time_t(std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000l> > > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE(void) {
    ALOGD("_ZNSt6__ndk16chrono12system_clock9to_time_tERKNS0_10time_pointIS1_NS0_8durationIxNS_5ratioILl1ELl1000000EEEEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEElsEb() called");
    return 0;
}

/* Demangled: std::bad_array_length::bad_array_length() */
extern "C" __attribute__((visibility("default"))) int _ZNSt16bad_array_lengthC1Ev(void) {
    ALOGD("_ZNSt16bad_array_lengthC1Ev() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf16<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk115__codecvt_utf16IwLb0EEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::time_get_byname<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115time_get_bynameIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get_monthname(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE16do_get_monthnameES4_S4_RNS_8ios_baseERjP2tm(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE16do_get_monthnameES4_S4_RNS_8ios_baseERjP2tm() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*, char, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjP2tmcc(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjP2tmcc() called");
    return 0;
}

/* Demangled: std::__ndk1::error_category::equivalent(int, std::__ndk1::error_condition const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE(void) {
    ALOGD("_ZNKSt6__ndk114error_category10equivalentEiRKNS_15error_conditionE() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_debug_exception::__libcpp_debug_exception(std::__ndk1::__libcpp_debug_info const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk124__libcpp_debug_exceptionC1ERKNS_19__libcpp_debug_infoE(void) {
    ALOGD("_ZNSt6__ndk124__libcpp_debug_exceptionC1ERKNS_19__libcpp_debug_infoE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::~sentry() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEE6sentryD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::~mutex() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutexD1Ev(void) {
    ALOGD("_ZNSt6__ndk15mutexD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t, char) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE9do_narrowEwc(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE9do_narrowEwc() called");
    return 0;
}

/* Demangled: std::type_info::~type_info() */
extern "C" __attribute__((visibility("default"))) int _ZNSt9type_infoD2Ev(void) {
    ALOGD("_ZNSt9type_infoD2Ev() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<int, int>&, int*>(int*, int*, std::__ndk1::__less<int, int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIiiEEPiEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIiiEEPiEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::name() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk16locale4nameEv(void) {
    ALOGD("_ZNKSt6__ndk16locale4nameEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__thread_local_data() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__thread_local_dataEv(void) {
    ALOGD("_ZNSt6__ndk119__thread_local_dataEv() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_am_pm(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_am_pmERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE11__get_am_pmERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::time_put_byname<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115time_put_bynameIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::collate_byname<wchar_t>::do_transform(wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114collate_bynameIwE12do_transformEPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk114collate_bynameIwE12do_transformEPKwS3_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::__get_weekday(int&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >&, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, unsigned int&, std::__ndk1::ctype<char> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_weekdayERiRS4_S4_RjRKNS_5ctypeIcEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE13__get_weekdayERiRS4_S4_RjRKNS_5ctypeIcEE() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(short) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEs(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEs() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt<char32_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17codecvtIDic9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::__c_node::__add(std::__ndk1::__i_node*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18__c_node5__addEPNS_8__i_nodeE(void) {
    ALOGD("_ZNSt6__ndk18__c_node5__addEPNS_8__i_nodeE() called");
    return 0;
}

/* Demangled: __register_frame_table */
extern "C" __attribute__((visibility("default"))) int __register_frame_table(void) {
    ALOGD("__register_frame_table() called");
    return 0;
}

/* Exported Object: typeinfo for std::bad_array_length */
extern "C" __attribute__((visibility("default"))) void* _ZTISt16bad_array_length = NULL;

/* Exported Object: typeinfo for std::__ndk1::codecvt<char16_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17codecvtIDsc9mbstate_tEE = NULL;

/* Demangled: __cxa_demangle */
extern "C" __attribute__((visibility("default"))) int __cxa_demangle(void) {
    ALOGD("__cxa_demangle() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::domain_error */
extern "C" __attribute__((visibility("default"))) void* _ZTISt12domain_error = NULL;

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::__init(unsigned long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEmw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initEmw() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned char const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKh = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__insert_c(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db10__insert_cEPv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db10__insert_cEPv() called");
    return 0;
}

/* Exported Object: std::__ndk1::__start_std_streams */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk119__start_std_streamsE = NULL;

/* Exported Object: typeinfo for std::__ndk1::time_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: std::__ndk1::collate_byname<wchar_t>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwED1Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<wchar_t>::__months() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIwE8__monthsEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIwE8__monthsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<wchar_t>::collate_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIwEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIwEC1EPKcm() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<char>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Demangled: std::__ndk1::ctype_byname<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112ctype_bynameIwE10do_scan_isEmPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk112ctype_bynameIwE10do_scan_isEmPKwS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt_byname<char, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114codecvt_bynameIcc9mbstate_tEE = NULL;

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

/* Exported Object: typeinfo name for std::__ndk1::moneypunct<char, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk110moneypunctIcLb1EEE = NULL;

/* Demangled: std::__ndk1::ios_base::failure::~failure() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureD1Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(signed char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPKal(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPKal() called");
    return 0;
}

/* Exported Object: typeinfo name for half */
extern "C" __attribute__((visibility("default"))) void* _ZTSDh = NULL;

/* Demangled: std::__ndk1::__shared_mutex_base::unlock_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_base13unlock_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_base13unlock_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::to_string(long long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19to_stringEx(void) {
    ALOGD("_ZNSt6__ndk19to_stringEx() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned int const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKj = NULL;

/* Demangled: std::__ndk1::promise<void>::~promise() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17promiseIvED1Ev(void) {
    ALOGD("_ZNSt6__ndk17promiseIvED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, false>::do_pos_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb0EE13do_pos_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb0EE13do_pos_formatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::sentry::sentry(std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >&, bool) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC1ERS3_b(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE6sentryC1ERS3_b() called");
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

/* Demangled: std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIcS3_NS_9allocatorIcEEEE(void) {
    ALOGD("_ZNKSt6__ndk19money_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_bRNS_8ios_baseERjRNS_12basic_stringIcS3_NS_9allocatorIcEEEE() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_hour(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE10__get_hourERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE10__get_hourERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Exported Object: typeinfo for long const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKl = NULL;

/* Demangled: std::__ndk1::__libcpp_db::__erase_c(void*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_db9__erase_cEPv(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_db9__erase_cEPv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsgetn(wchar_t*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsgetnEPwl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE6xsgetnEPwl() called");
    return 0;
}

/* Demangled: std::__ndk1::__libcpp_db::__libcpp_db() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__libcpp_dbC2Ev(void) {
    ALOGD("_ZNSt6__ndk111__libcpp_dbC2Ev() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Exported Object: typeinfo for float const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKf = NULL;

/* Exported Object: vtable for std::__ndk1::__codecvt_utf16<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk115__codecvt_utf16IwLb0EEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk111regex_errorE = NULL;

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2El(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2El() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char16_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDsE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDsE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv117__class_type_infoE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::erase(unsigned long, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char32_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDic9mbstate_tED1Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDic9mbstate_tED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertENS_11__wrap_iterIPKwEEw(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6insertENS_11__wrap_iterIPKwEEw() called");
    return 0;
}

/* Exported Object: typeinfo for bool const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKb = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_always_noconv() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE16do_always_noconvEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE16do_always_noconvEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__widen_from_utf8<16ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__widen_from_utf8ILm16EEE = NULL;

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::~codecvt() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17codecvtIDsc9mbstate_tED0Ev(void) {
    ALOGD("_ZNSt6__ndk17codecvtIDsc9mbstate_tED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_neg_format() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE13do_neg_formatEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE13do_neg_formatEv() called");
    return 0;
}

/* Exported Object: typeinfo for double const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKd = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::showmanyc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9showmanycEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::pubseekoff(long long, std::__ndk1::ios_base::seekdir, unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekoffExNS_8ios_base7seekdirEj(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekoffExNS_8ios_base7seekdirEj() called");
    return 0;
}

/* Demangled: std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__do_get_unsigned<unsigned short>(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedItEES4_S4_S4_RNS_8ios_baseERjRT_(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE17__do_get_unsignedItEES4_S4_S4_RNS_8ios_baseERjRT_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::append(wchar_t const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6appendEPKwm() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<char, false>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb0EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb0EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(unsigned short&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERt(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERt() called");
    return 0;
}

/* Demangled: std::__ndk1::random_device::~random_device() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113random_deviceD2Ev(void) {
    ALOGD("_ZNSt6__ndk113random_deviceD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::failure::failure(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::error_code const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7failureC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_10error_codeE(void) {
    ALOGD("_ZNSt6__ndk18ios_base7failureC2ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERKNS_10error_codeE() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct<char, true>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_frac_digits() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE14do_frac_digitsEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE14do_frac_digitsEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRNS_8ios_baseES5_E(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEErsEPFRNS_8ios_baseES5_E() called");
    return 0;
}

/* Exported Object: VTT for std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTTNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__codecvt_utf8_utf16<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk120__codecvt_utf8_utf16IDsEE = NULL;

/* Exported Object: typeinfo name for decltype(nullptr) */
extern "C" __attribute__((visibility("default"))) void* _ZTSDn = NULL;

/* Demangled: std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::gbump(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5gbumpEi(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5gbumpEi() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::__call_callbacks(std::__ndk1::ios_base::event) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base16__call_callbacksENS0_5eventE(void) {
    ALOGD("_ZNSt6__ndk18ios_base16__call_callbacksENS0_5eventE() called");
    return 0;
}

/* Exported Object: std::__ndk1::allocator_arg */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk113allocator_argE = NULL;

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf16<char16_t, true>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDsLb1EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDsLb1EE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct<wchar_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk110moneypunctIwLb1EEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk117__assoc_sub_stateE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::ctype_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk112ctype_bynameIwEE = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk15ctypeIwE11do_scan_notEmPKwS3_(void) {
    ALOGD("_ZNKSt6__ndk15ctypeIwE11do_scan_notEmPKwS3_() called");
    return 0;
}

/* Demangled: std::experimental::bad_optional_access::~bad_optional_access() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12experimental19bad_optional_accessD1Ev(void) {
    ALOGD("_ZNSt12experimental19bad_optional_accessD1Ev() called");
    return 0;
}

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

/* Demangled: std::__ndk1::moneypunct<char, false>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE16do_negative_signEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(long long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERx(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERx() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRx(void) {
    ALOGD("_ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRx() called");
    return 0;
}

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, unsigned short&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRt(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRt() called");
    return 0;
}

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(char*, long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC2EPclS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC2EPclS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115numpunct_bynameIwEC1EPKcm(void) {
    ALOGD("_ZNSt6__ndk115numpunct_bynameIwEC1EPKcm() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::__narrow_to_utf8<32ul> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk116__narrow_to_utf8ILm32EEE = NULL;

/* Demangled: std::__ndk1::ctype<wchar_t>::~ctype() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15ctypeIwED0Ev(void) {
    ALOGD("_ZNSt6__ndk15ctypeIwED0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find_last_not_of(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16find_last_not_ofEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE16find_last_not_ofEPKcmm() called");
    return 0;
}

/* Demangled: std::bad_typeid::what() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt10bad_typeid4whatEv(void) {
    ALOGD("_ZNKSt10bad_typeid4whatEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::~__rs_default() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultD2Ev(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4readEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::numpunct<wchar_t>::do_falsename() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18numpunctIwE12do_falsenameEv(void) {
    ALOGD("_ZNKSt6__ndk18numpunctIwE12do_falsenameEv() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEE = NULL;

/* Exported Object: typeinfo name for std::__ndk1::messages<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk18messagesIcEE = NULL;

/* Demangled: std::__ndk1::locale::~locale() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeD1Ev(void) {
    ALOGD("_ZNSt6__ndk16localeD1Ev() called");
    return 0;
}

/* Demangled: std::out_of_range::~out_of_range() */
extern "C" __attribute__((visibility("default"))) int _ZNSt12out_of_rangeD2Ev(void) {
    ALOGD("_ZNSt12out_of_rangeD2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::flush() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5flushEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk19money_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEEE = NULL;

/* Demangled: non-virtual thunk to std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZThn16_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZThn16_NSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::use_facet(std::__ndk1::locale::id&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk16locale9use_facetERNS0_2idE(void) {
    ALOGD("_ZNKSt6__ndk16locale9use_facetERNS0_2idE() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_max_length() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIwc9mbstate_tE13do_max_lengthEv(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIwc9mbstate_tE13do_max_lengthEv() called");
    return 0;
}

/* Exported Object: typeinfo for unsigned short const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKt = NULL;

/* Demangled: std::__ndk1::collate<char>::do_compare(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17collateIcE10do_compareEPKcS3_S3_S3_(void) {
    ALOGD("_ZNKSt6__ndk17collateIcE10do_compareEPKcS3_S3_S3_() called");
    return 0;
}

/* Demangled: std::__ndk1::stol(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long*, int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(void) {
    ALOGD("_ZNSt6__ndk14stolERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi() called");
    return 0;
}

/* Demangled: std::__ndk1::codecvt<char16_t, char, mbstate_t>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17codecvtIDsc9mbstate_tE9do_lengthERS1_PKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk17codecvtIDsc9mbstate_tE9do_lengthERS1_PKcS5_m() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::collate_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114collate_bynameIcEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, true>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb1EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb1EE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::moneypunct_byname<wchar_t, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117moneypunct_bynameIwLb0EEE = NULL;

/* Exported Object: typeinfo name for __cxxabiv1::__function_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTSN10__cxxabiv120__function_type_infoE = NULL;

/* Demangled: std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, long long&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRx(void) {
    ALOGD("_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_getES4_S4_RNS_8ios_baseERjRx() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__money_get<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk111__money_getIwEE = NULL;

/* Exported Object: vtable for std::__ndk1::basic_ios<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk19basic_iosIwNS_11char_traitsIwEEEE = NULL;

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

/* Demangled: std::__ndk1::__codecvt_utf16<char32_t, false>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IDiLb0EE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IDiLb0EE11do_encodingEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::numpunct_byname<char> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115numpunct_bynameIcEE = NULL;

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk111timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE5do_inER9mbstate_tPKcS5_RS5_PDsS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_weak_count::__release_shared() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_weak_count16__release_sharedEv(void) {
    ALOGD("_ZNSt6__ndk119__shared_weak_count16__release_sharedEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__rs_default::__rs_default() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112__rs_defaultC1Ev(void) {
    ALOGD("_ZNSt6__ndk112__rs_defaultC1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE11do_groupingEv() called");
    return 0;
}

/* Exported Object: typeinfo for __int128 const* */
extern "C" __attribute__((visibility("default"))) void* _ZTIPKn = NULL;

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::rfind(char const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEPKcmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5rfindEPKcmm() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__num_put_base */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__num_put_baseE = NULL;

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEm(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEm() called");
    return 0;
}

/* Demangled: std::__ndk1::__assoc_sub_state::set_value() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk117__assoc_sub_state9set_valueEv(void) {
    ALOGD("_ZNSt6__ndk117__assoc_sub_state9set_valueEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE5do_inER9mbstate_tPKcS5_RS5_PwS7_RS7_() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<unsigned long, unsigned long>&, unsigned long*>(unsigned long*, unsigned long*, unsigned long*, unsigned long*, unsigned long*, std::__ndk1::__less<unsigned long, unsigned long>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessImmEEPmEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessImmEEPmEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::Init::~Init() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base4InitD1Ev(void) {
    ALOGD("_ZNSt6__ndk18ios_base4InitD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(double&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERd(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERd() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::system_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk112system_errorE = NULL;

/* Demangled: std::__ndk1::locale::locale() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk16localeC2Ev(void) {
    ALOGD("_ZNSt6__ndk16localeC2Ev() called");
    return 0;
}

/* Exported Object: vtable for std::underflow_error */
extern "C" __attribute__((visibility("default"))) void* _ZTVSt15underflow_error = NULL;

/* Demangled: std::uncaught_exception() */
extern "C" __attribute__((visibility("default"))) int _ZSt18uncaught_exceptionv(void) {
    ALOGD("_ZSt18uncaught_exceptionv() called");
    return 0;
}

/* Demangled: std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&, wchar_t*&, std::__ndk1::locale const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19__num_putIwE21__widen_and_group_intEPcS2_S2_PwRS3_S4_RKNS_6localeE(void) {
    ALOGD("_ZNSt6__ndk19__num_putIwE21__widen_and_group_intEPcS2_S2_PwRS3_S4_RKNS_6localeE() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::showbase */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base8showbaseE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<char, true>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIcLb1EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIcLb1EE11do_groupingEv() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::showpoint */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base9showpointE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<char32_t>::do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IDiE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IDiE5do_inER9mbstate_tPKcS5_RS5_PDiS7_RS7_() called");
    return 0;
}

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_negative_sign() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_negative_signEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_negative_signEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::replace(unsigned long, unsigned long, unsigned long, char) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmmc(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmmc() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__assoc_sub_state */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk117__assoc_sub_stateE = NULL;

/* Demangled: __cxa_call_unexpected */
extern "C" __attribute__((visibility("default"))) int __cxa_call_unexpected(void) {
    ALOGD("__cxa_call_unexpected() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEE = NULL;

/* Demangled: std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > >::get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&, unsigned int&, tm*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_(void) {
    ALOGD("_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE3getES4_S4_RNS_8ios_baseERjP2tmPKcSC_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(float&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERf(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERf() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEi(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEi() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::ctype<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk15ctypeIwEE = NULL;

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::__get_month(int&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&, std::__ndk1::ctype<wchar_t> const&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_monthERiRS4_S4_RjRKNS_5ctypeIwEE(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE11__get_monthERiRS4_S4_RjRKNS_5ctypeIwEE() called");
    return 0;
}

/* Demangled: std::__ndk1::mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk15mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk15mutex4lockEv() called");
    return 0;
}

/* Exported Object: typeinfo name for std::bad_exception */
extern "C" __attribute__((visibility("default"))) void* _ZTSSt13bad_exception = NULL;

/* Exported Object: std::__ndk1::ios_base::failbit */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base7failbitE = NULL;

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::snextc() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6snextcEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6snextcEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__throw_system_error(int, char const*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk120__throw_system_errorEiPKc(void) {
    ALOGD("_ZNSt6__ndk120__throw_system_errorEiPKc() called");
    return 0;
}

/* Demangled: std::__ndk1::locale::has_facet(std::__ndk1::locale::id&) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk16locale9has_facetERNS0_2idE(void) {
    ALOGD("_ZNKSt6__ndk16locale9has_facetERNS0_2idE() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::__codecvt_utf8<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114__codecvt_utf8IwEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::regex_error */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk111regex_errorE = NULL;

/* Demangled: std::__ndk1::__basic_string_common<true>::__throw_length_error() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv(void) {
    ALOGD("_ZNKSt6__ndk121__basic_string_commonILb1EE20__throw_length_errorEv() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> > */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115basic_streambufIwNS_11char_traitsIwEEEE = NULL;

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

/* Demangled: std::__ndk1::__codecvt_utf16<wchar_t, true>::do_length(mbstate_t&, char const*, char const*, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk115__codecvt_utf16IwLb1EE9do_lengthER9mbstate_tPKcS5_m(void) {
    ALOGD("_ZNKSt6__ndk115__codecvt_utf16IwLb1EE9do_lengthER9mbstate_tPKcS5_m() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::peek() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4peekEv(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEE4peekEv() called");
    return 0;
}

/* Demangled: std::__ndk1::get_pointer_safety() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118get_pointer_safetyEv(void) {
    ALOGD("_ZNSt6__ndk118get_pointer_safetyEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE16find_last_not_ofEPKwmm(void) {
    ALOGD("_ZNKSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE16find_last_not_ofEPKwmm() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(long&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERl(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERl() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::codecvt<wchar_t, char, mbstate_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk17codecvtIwc9mbstate_tEE = NULL;

/* Demangled: std::__ndk1::__codecvt_utf8_utf16<wchar_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__codecvt_utf8_utf16IwE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk120__codecvt_utf8_utf16IwE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::bad_exception::~bad_exception() */
extern "C" __attribute__((visibility("default"))) int _ZNSt13bad_exceptionD0Ev(void) {
    ALOGD("_ZNSt13bad_exceptionD0Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::sentry::sentry(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE6sentryC2ERS3_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf16<char32_t, true> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk115__codecvt_utf16IDiLb1EEE = NULL;

/* Exported Object: typeinfo for std::__ndk1::__codecvt_utf8<char16_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk114__codecvt_utf8IDsEE = NULL;

/* Demangled: std::__ndk1::moneypunct_byname<wchar_t, true>::do_thousands_sep() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_thousands_sepEv(void) {
    ALOGD("_ZNKSt6__ndk117moneypunct_bynameIwLb1EE16do_thousands_sepEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__time_get_c_storage<char>::__c() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk120__time_get_c_storageIcE3__cEv(void) {
    ALOGD("_ZNKSt6__ndk120__time_get_c_storageIcE3__cEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::basic_iostream(std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE(void) {
    ALOGD("_ZNSt6__ndk114basic_iostreamIcNS_11char_traitsIcEEEC1EPNS_15basic_streambufIcS2_EE() called");
    return 0;
}

/* Demangled: virtual thunk to std::__ndk1::istrstream::~istrstream() */
extern "C" __attribute__((visibility("default"))) int _ZTv0_n24_NSt6__ndk110istrstreamD1Ev(void) {
    ALOGD("_ZTv0_n24_NSt6__ndk110istrstreamD1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(char const*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::underflow() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9underflowEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(bool&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERb(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERb() called");
    return 0;
}

/* Demangled: std::__ndk1::shared_timed_mutex::lock() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk118shared_timed_mutex4lockEv(void) {
    ALOGD("_ZNSt6__ndk118shared_timed_mutex4lockEv() called");
    return 0;
}

/* Demangled: std::__ndk1::__shared_mutex_base::__shared_mutex_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk119__shared_mutex_baseC1Ev(void) {
    ALOGD("_ZNSt6__ndk119__shared_mutex_baseC1Ev() called");
    return 0;
}

/* Exported Object: vtable for __cxxabiv1::__vmi_class_type_info */
extern "C" __attribute__((visibility("default"))) void* _ZTVN10__cxxabiv121__vmi_class_type_infoE = NULL;

/* Demangled: __cxa_free_exception */
extern "C" __attribute__((visibility("default"))) int __cxa_free_exception(void) {
    ALOGD("__cxa_free_exception() called");
    return 0;
}

/* Exported Object: typeinfo name for std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> > > */
extern "C" __attribute__((visibility("default"))) void* _ZTSNSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEEE = NULL;

/* Demangled: std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::copyfmt(std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> > const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_(void) {
    ALOGD("_ZNSt6__ndk19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::collate_byname<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk114collate_bynameIwEE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::~basic_istream() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED1Ev(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEED1Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator<<(std::__ndk1::ios_base& (*)(std::__ndk1::ios_base&)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRNS_8ios_baseES5_E(void) {
    ALOGD("_ZNSt6__ndk113basic_ostreamIwNS_11char_traitsIwEEElsEPFRNS_8ios_baseES5_E() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::setbuf(char*, long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl(void) {
    ALOGD("_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE6setbufEPcl() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::collate_byname(char const*, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcEC2EPKcm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcEC2EPKcm() called");
    return 0;
}

/* Demangled: _Unwind_DeleteException */
extern "C" __attribute__((visibility("default"))) int _Unwind_DeleteException(void) {
    ALOGD("_Unwind_DeleteException() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned int, unsigned int>&, unsigned int*>(unsigned int*, unsigned int*, std::__ndk1::__less<unsigned int, unsigned int>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIjjEEPjEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIjjEEPjEEbT0_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> > >::do_date_order() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13do_date_orderEv(void) {
    ALOGD("_ZNKSt6__ndk18time_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE13do_date_orderEv() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::do_compare(char const*, char const*, char const*, char const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114collate_bynameIcE10do_compareEPKcS3_S3_S3_(void) {
    ALOGD("_ZNKSt6__ndk114collate_bynameIcE10do_compareEPKcS3_S3_S3_() called");
    return 0;
}

/* Demangled: std::exception_ptr std::make_exception_ptr<std::__ndk1::future_error>(std::__ndk1::future_error) */
extern "C" __attribute__((visibility("default"))) int _ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_(void) {
    ALOGD("_ZSt18make_exception_ptrINSt6__ndk112future_errorEESt13exception_ptrT_() called");
    return 0;
}

/* Exported Object: vtable for std::__ndk1::moneypunct_byname<char, false> */
extern "C" __attribute__((visibility("default"))) void* _ZTVNSt6__ndk117moneypunct_bynameIcLb0EEE = NULL;

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

/* Demangled: std::__ndk1::moneypunct<char, false>::do_decimal_point() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb0EE16do_decimal_pointEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb0EE16do_decimal_pointEv() called");
    return 0;
}

/* Demangled: std::__ndk1::messages<wchar_t>::do_close(long) const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk18messagesIwE8do_closeEl(void) {
    ALOGD("_ZNKSt6__ndk18messagesIwE8do_closeEl() called");
    return 0;
}

/* Demangled: bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<unsigned short, unsigned short>&, unsigned short*>(unsigned short*, unsigned short*, std::__ndk1::__less<unsigned short, unsigned short>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIttEEPtEEbT0_S5_T_(void) {
    ALOGD("_ZNSt6__ndk127__insertion_sort_incompleteIRNS_6__lessIttEEPtEEbT0_S5_T_() called");
    return 0;
}

/* Exported Object: typeinfo for std::__ndk1::collate<wchar_t> */
extern "C" __attribute__((visibility("default"))) void* _ZTINSt6__ndk17collateIwEE = NULL;

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::operator>>(unsigned int&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERj(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEErsERj() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::getline(wchar_t*, long, wchar_t) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwlw(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE7getlineEPwlw() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::~collate_byname() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcED0Ev(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcED0Ev() called");
    return 0;
}

/* Demangled: __cxa_thread_atexit */
extern "C" __attribute__((visibility("default"))) int __cxa_thread_atexit(void) {
    ALOGD("__cxa_thread_atexit() called");
    return 0;
}

/* Demangled: __cxa_guard_acquire */
extern "C" __attribute__((visibility("default"))) int __cxa_guard_acquire(void) {
    ALOGD("__cxa_guard_acquire() called");
    return 0;
}

/* Exported Object: typeinfo name for unsigned int */
extern "C" __attribute__((visibility("default"))) void* _ZTSj = NULL;

/* Demangled: std::__ndk1::moneypunct<char, true>::do_grouping() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk110moneypunctIcLb1EE11do_groupingEv(void) {
    ALOGD("_ZNKSt6__ndk110moneypunctIcLb1EE11do_groupingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::collate_byname<char>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk114collate_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm(void) {
    ALOGD("_ZNSt6__ndk114collate_bynameIcEC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEm() called");
    return 0;
}

/* Exported Object: std::__ndk1::ios_base::dec */
extern "C" __attribute__((visibility("default"))) void* _ZNSt6__ndk18ios_base3decE = NULL;

/* Demangled: std::__ndk1::strstreambuf::strstreambuf(char*, long, char*) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112strstreambufC1EPclS1_(void) {
    ALOGD("_ZNSt6__ndk112strstreambufC1EPclS1_() called");
    return 0;
}

/* Demangled: std::__ndk1::ios_base::copyfmt(std::__ndk1::ios_base const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk18ios_base7copyfmtERKS0_(void) {
    ALOGD("_ZNSt6__ndk18ios_base7copyfmtERKS0_() called");
    return 0;
}

/* Exported Object: typeinfo name for long */
extern "C" __attribute__((visibility("default"))) void* _ZTSl = NULL;

/* Demangled: _Unwind_GetDataRelBase */
extern "C" __attribute__((visibility("default"))) int _Unwind_GetDataRelBase(void) {
    ALOGD("_Unwind_GetDataRelBase() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::get(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EE(void) {
    ALOGD("_ZNSt6__ndk113basic_istreamIwNS_11char_traitsIwEEE3getERNS_15basic_streambufIwS2_EE() called");
    return 0;
}

/* Demangled: std::__ndk1::__codecvt_utf8<wchar_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IwE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IwE11do_encodingEv() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::allocator<char> const&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_RKS4_(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_RKS4_() called");
    return 0;
}

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

/* Demangled: std::__ndk1::__codecvt_utf8<char16_t>::do_encoding() const */
extern "C" __attribute__((visibility("default"))) int _ZNKSt6__ndk114__codecvt_utf8IDsE11do_encodingEv(void) {
    ALOGD("_ZNKSt6__ndk114__codecvt_utf8IDsE11do_encodingEv() called");
    return 0;
}

/* Demangled: unsigned int std::__ndk1::__sort5<std::__ndk1::__less<double, double>&, double*>(double*, double*, double*, double*, double*, std::__ndk1::__less<double, double>&) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk17__sort5IRNS_6__lessIddEEPdEEjT0_S5_S5_S5_S5_T_(void) {
    ALOGD("_ZNSt6__ndk17__sort5IRNS_6__lessIddEEPdEEjT0_S5_S5_S5_S5_T_() called");
    return 0;
}

/* Demangled: std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::~basic_string() */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(void) {
    ALOGD("_ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev() called");
    return 0;
}

/* Demangled: std::__ndk1::__call_once(unsigned long volatile&, void*, void (*)(void*)) */
extern "C" __attribute__((visibility("default"))) int _ZNSt6__ndk111__call_onceERVmPvPFvS2_E(void) {
    ALOGD("_ZNSt6__ndk111__call_onceERVmPvPFvS2_E() called");
    return 0;
}
