/*
 * Reverse-Engineered Source for: libmtkcam_calibration_convertor.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "libmtkcam_calibration_convertor"

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
#include "libmtkcam_calibration_convertor.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: android::NSCalibrationConvertor::CalibrationConvertor::convertToGoogleFormat(NSCam::CalibrationResultInGoogleFormat&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22NSCalibrationConvertor20CalibrationConvertor21convertToGoogleFormatERN5NSCam31CalibrationResultInGoogleFormatE(void) {
    ALOGD("_ZN7android22NSCalibrationConvertor20CalibrationConvertor21convertToGoogleFormatERN5NSCam31CalibrationResultInGoogleFormatE() called");
    return 0;
}

/* Demangled: android::NSCalibrationConvertor::CalibrationConvertor::CalibrationConvertor(NSCam::CalibrationQueryParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22NSCalibrationConvertor20CalibrationConvertorC1ERKN5NSCam21CalibrationQueryParamE(void) {
    ALOGD("_ZN7android22NSCalibrationConvertor20CalibrationConvertorC1ERKN5NSCam21CalibrationQueryParamE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vdeallocate() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE13__vdeallocateEv() called");
    return 0;
}

/* Demangled: std::__1::vector<int, std::__1::allocator<int> >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE11__vallocateEj() called");
    return 0;
}

/* Demangled: android::NSCalibrationConvertor::CalibrationConvertor::CalibrationConvertor(NSCam::CalibrationQueryParam const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22NSCalibrationConvertor20CalibrationConvertorC2ERKN5NSCam21CalibrationQueryParamE(void) {
    ALOGD("_ZN7android22NSCalibrationConvertor20CalibrationConvertorC2ERKN5NSCam21CalibrationQueryParamE() called");
    return 0;
}

/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__vallocate(unsigned int) */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE11__vallocateEj() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void) {
    ALOGD("_ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE6assignIPS6_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS6_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_() called");
    return 0;
}

/* Exported Object: vtable for android::NSCalibrationConvertor::CalibrationConvertor */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android22NSCalibrationConvertor20CalibrationConvertorE = NULL;

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: android::NSCalibrationConvertor::CalibrationConvertor::convertToMTKFormat(NSCam::CalibrationResultInMTKFormat&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android22NSCalibrationConvertor20CalibrationConvertor18convertToMTKFormatERN5NSCam28CalibrationResultInMTKFormatE(void) {
    ALOGD("_ZN7android22NSCalibrationConvertor20CalibrationConvertor18convertToMTKFormatERN5NSCam28CalibrationResultInMTKFormatE() called");
    return 0;
}

/* Demangled: std::__1::__vector_base<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::~__vector_base() */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev(void) {
    ALOGD("_ZNSt3__113__vector_baseINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEED2Ev() called");
    return 0;
}

/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
extern "C" __attribute__((visibility("default"))) int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void) {
    ALOGD("_ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_() called");
    return 0;
}

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}
