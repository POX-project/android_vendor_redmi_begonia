/*
 * Reverse-Engineered Source for: vendor.mediatek.hardware.mtkcodecservice@1.1-impl.so
 * Target: Xiaomi Redmi Note 8 Pro (Begonia / MT6785 - 32-bit)
 */

#define LOG_TAG "vendor_mediatek_hardware_mtkcodecservice_1_1_impl"

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
#include "vendor_mediatek_hardware_mtkcodecservice_1_1_impl.h"


static int g_dev_fd = -1;

static int open_device_node(void) {
    if (g_dev_fd >= 0) return g_dev_fd;
    ALOGW("Operating in native hardware mode");
    return -1;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::setCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE() called");
    return 0;
}

/* Exported Object: aligned_dot_and_add_16 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_add_16 = NULL;

/* Exported Object: unaligned_dot_and_add_64 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_add_64 = NULL;

/* Exported Object: unaligned_dot_and_sub_256 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_sub_256 = NULL;

/* Demangled: __aeabi_memcpy8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy8(void) {
    ALOGD("__aeabi_memcpy8() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::DeInit(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DeInitEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DeInitEi() called");
    return 0;
}

/* Exported Object: aligned_dot_and_sub_64 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_sub_64 = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::handleHidlDeath() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService15handleHidlDeathEv(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService15handleHidlDeathEv() called");
    return 0;
}

/* Demangled: CAPEWrapper::CAPEWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapperC2Ev(void) {
    ALOGD("_ZN11CAPEWrapperC2Ev() called");
    return 0;
}

/* Exported Object: aligned_dot_and_add_1280 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_add_1280 = NULL;

/* Demangled: __aeabi_memset4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset4(void) {
    ALOGD("__aeabi_memset4() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::apeHidlDeathRecipient>::sp(vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::apeHidlDeathRecipient*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService21apeHidlDeathRecipientEEC2EPS8_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService21apeHidlDeathRecipientEEC2EPS8_() called");
    return 0;
}

/* Demangled: ape_decoder_init */
extern "C" __attribute__((visibility("default"))) int ape_decoder_init(void) {
    ALOGD("ape_decoder_init() called");
    return 0;
}

/* Exported Object: aligned_dot_and_sub_256 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_sub_256 = NULL;

/* Demangled: ape_decoder_get_version */
extern "C" __attribute__((visibility("default"))) int ape_decoder_get_version(void) {
    ALOGD("ape_decoder_get_version() called");
    return 0;
}

/* Exported Object: checkhw_result */
extern "C" __attribute__((visibility("default"))) void* checkhw_result = NULL;

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_move_forward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE15do_move_forwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE15do_move_forwardEPvPKvj() called");
    return 0;
}

/* Exported Object: aligned_dot_and_sub_1280 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_sub_1280 = NULL;

/* Exported Object: unaligned_dot_and_add_32 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_add_32 = NULL;

/* Demangled: CAPEWrapper::CAPEWrapper() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapperC1Ev(void) {
    ALOGD("_ZN11CAPEWrapperC1Ev() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Destory(int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService7DestoryEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService7DestoryEi() called");
    return 0;
}

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE = NULL;

/* Demangled: ape_decoder_decode */
extern "C" __attribute__((visibility("default"))) int ape_decoder_decode(void) {
    ALOGD("ape_decoder_decode() called");
    return 0;
}

/* Exported Object: aligned_dot_and_sub_32 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_sub_32 = NULL;

/* Exported Object: unaligned_dot_and_add_16 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_add_16 = NULL;

/* Demangled: predictor_decode_stereo_asm */
extern "C" __attribute__((visibility("default"))) int predictor_decode_stereo_asm(void) {
    ALOGD("predictor_decode_stereo_asm() called");
    return 0;
}

/* Exported Object: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE = NULL;

/* Exported Object: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::apeHidlDeathRecipient */
extern "C" __attribute__((visibility("default"))) void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService21apeHidlDeathRecipientE = NULL;

/* Demangled: ape_decoder_get_mem_size */
extern "C" __attribute__((visibility("default"))) int ape_decoder_get_mem_size(void) {
    ALOGD("ape_decoder_get_mem_size() called");
    return 0;
}

/* Exported Object: aligned_dot_and_sub_16 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_sub_16 = NULL;

/* Exported Object: unaligned_dot_and_sub_64 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_sub_64 = NULL;

/* Demangled: __aeabi_memset8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset8(void) {
    ALOGD("__aeabi_memset8() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService4InitERKNS3_13apeInitParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService4InitERKNS3_13apeInitParamsEi() called");
    return 0;
}

/* Demangled: dot_16by16_arm9m */
extern "C" __attribute__((visibility("default"))) int dot_16by16_arm9m(void) {
    ALOGD("dot_16by16_arm9m() called");
    return 0;
}

/* Demangled: __aeabi_uidiv */
extern "C" __attribute__((visibility("default"))) int __aeabi_uidiv(void) {
    ALOGD("__aeabi_uidiv() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_splat(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE8do_splatEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE8do_splatEPvPKvj() called");
    return 0;
}

/* Demangled: dot_aligned_16by16_arm9m */
extern "C" __attribute__((visibility("default"))) int dot_aligned_16by16_arm9m(void) {
    ALOGD("dot_aligned_16by16_arm9m() called");
    return 0;
}

/* Demangled: __aeabi_memclr4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr4(void) {
    ALOGD("__aeabi_memclr4() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_construct(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE12do_constructEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE12do_constructEPvj() called");
    return 0;
}

/* Demangled: __aeabi_memmove */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove(void) {
    ALOGD("__aeabi_memmove() called");
    return 0;
}

/* Exported Object: unaligned_dot_and_add_1280 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_add_1280 = NULL;

/* Exported Object: g_count */
extern "C" __attribute__((visibility("default"))) void* g_count = NULL;

/* Exported Object: unaligned_dot_and_sub_32 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_sub_32 = NULL;

/* Demangled: __udivsi3 */
extern "C" __attribute__((visibility("default"))) int __udivsi3(void) {
    ALOGD("__udivsi3() called");
    return 0;
}

/* Demangled: __aeabi_memmove4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove4(void) {
    ALOGD("__aeabi_memmove4() called");
    return 0;
}

/* Demangled: CAPEWrapper::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper5ResetERKN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE(void) {
    ALOGD("_ZN11CAPEWrapper5ResetERKN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE() called");
    return 0;
}

/* Demangled: CAPEWrapper::Destory() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper7DestoryEv(void) {
    ALOGD("_ZN11CAPEWrapper7DestoryEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Create(std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::MtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC2Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC2Ev() called");
    return 0;
}

/* Exported Object: unaligned_dot_and_sub_1280 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_sub_1280 = NULL;

/* Exported Object: unaligned_dot_and_sub_16 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_sub_16 = NULL;

/* Demangled: __aeabi_memcpy */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy(void) {
    ALOGD("__aeabi_memcpy() called");
    return 0;
}

/* Demangled: ape_decoder_reset */
extern "C" __attribute__((visibility("default"))) int ape_decoder_reset(void) {
    ALOGD("ape_decoder_reset() called");
    return 0;
}

/* Demangled: __aeabi_memclr8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr8(void) {
    ALOGD("__aeabi_memclr8() called");
    return 0;
}

/* Demangled: HIDL_FETCH_IMtkCodecService */
extern "C" __attribute__((visibility("default"))) int HIDL_FETCH_IMtkCodecService(void) {
    ALOGD("HIDL_FETCH_IMtkCodecService() called");
    return 0;
}

/* Demangled: CAPEWrapper::DeInit() */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper6DeInitEv(void) {
    ALOGD("_ZN11CAPEWrapper6DeInitEv() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Decode(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE() called");
    return 0;
}

/* Exported Object: vtable for CAPEWrapper */
extern "C" __attribute__((visibility("default"))) void* _ZTV11CAPEWrapper = NULL;

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::MtkCodecService() */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC1Ev(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC1Ev() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService>::sp(vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceEEC2EPS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceEEC2EPS7_() called");
    return 0;
}

/* Exported Object: vtable for android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> > */
extern "C" __attribute__((visibility("default"))) void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEEE = NULL;

/* Demangled: dot_16by16_arm9m_opt */
extern "C" __attribute__((visibility("default"))) int dot_16by16_arm9m_opt(void) {
    ALOGD("dot_16by16_arm9m_opt() called");
    return 0;
}

/* Demangled: predictor_decode_mono_asm */
extern "C" __attribute__((visibility("default"))) int predictor_decode_mono_asm(void) {
    ALOGD("predictor_decode_mono_asm() called");
    return 0;
}

/* Demangled: __aeabi_memmove8 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memmove8(void) {
    ALOGD("__aeabi_memmove8() called");
    return 0;
}

/* Demangled: CAPEWrapper::DoCodec(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams&, android::sp<android::hidl::memory::V1_0::IMemory> const&, android::sp<android::hidl::memory::V1_0::IMemory>&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper7DoCodecERKN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS4_15apeDecRetParamsERKN7android2spINSA_4hidl6memory4V1_07IMemoryEEERSG_(void) {
    ALOGD("_ZN11CAPEWrapper7DoCodecERKN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS4_15apeDecRetParamsERKN7android2spINSA_4hidl6memory4V1_07IMemoryEEERSG_() called");
    return 0;
}

/* Demangled: android::sp<android::hidl::memory::V1_0::IMemory>::operator=(android::sp<android::hidl::memory::V1_0::IMemory>&&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_(void) {
    ALOGD("_ZN7android2spINS_4hidl6memory4V1_07IMemoryEEaSEOS5_() called");
    return 0;
}

/* Exported Object: unaligned_dot_and_add_256 */
extern "C" __attribute__((visibility("default"))) void* unaligned_dot_and_add_256 = NULL;

/* Exported Object: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE = NULL;

/* Exported Object: aligned_dot_and_add_64 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_add_64 = NULL;

/* Demangled: __aeabi_memset */
extern "C" __attribute__((visibility("default"))) int __aeabi_memset(void) {
    ALOGD("__aeabi_memset() called");
    return 0;
}

/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
extern "C" __attribute__((visibility("default"))) int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService5ResetERKNS3_14apeResetParamsEi(void) {
    ALOGD("_ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService5ResetERKNS3_14apeResetParamsEi() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>::operator=(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEEaSERKS7_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEEaSERKS7_() called");
    return 0;
}

/* Exported Object: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern "C" __attribute__((visibility("default"))) void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_NS3_16IMtkCodecServiceE = NULL;

/* Demangled: __aeabi_memcpy4 */
extern "C" __attribute__((visibility("default"))) int __aeabi_memcpy4(void) {
    ALOGD("__aeabi_memcpy4() called");
    return 0;
}

/* Exported Object: aligned_dot_and_add_256 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_add_256 = NULL;

/* Demangled: CAPEWrapper::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper4InitERKN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE(void) {
    ALOGD("_ZN11CAPEWrapper4InitERKN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE() called");
    return 0;
}

/* Demangled: CAPEWrapper::Create(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams&) */
extern "C" __attribute__((visibility("default"))) int _ZN11CAPEWrapper6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE(void) {
    ALOGD("_ZN11CAPEWrapper6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_compare(void const*, void const*) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_compareEPKvS7_(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_compareEPKvS7_() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_destroy(void*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_destroyEPvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_destroyEPvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_move_backward(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE16do_move_backwardEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE16do_move_backwardEPvPKvj() called");
    return 0;
}

/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_copy(void*, void const*, unsigned int) const */
extern "C" __attribute__((visibility("default"))) int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE7do_copyEPvPKvj(void) {
    ALOGD("_ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE7do_copyEPvPKvj() called");
    return 0;
}

/* Demangled: android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback>::operator=(vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback*) */
extern "C" __attribute__((visibility("default"))) int _ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEEaSEPS6_(void) {
    ALOGD("_ZN7android2spIN6vendor8mediatek8hardware15mtkcodecservice4V1_124IMtkCodecServiceCallbackEEaSEPS6_() called");
    return 0;
}

/* Demangled: __aeabi_memclr */
extern "C" __attribute__((visibility("default"))) int __aeabi_memclr(void) {
    ALOGD("__aeabi_memclr() called");
    return 0;
}

/* Exported Object: aligned_dot_and_add_32 */
extern "C" __attribute__((visibility("default"))) void* aligned_dot_and_add_32 = NULL;

/* Exported Object: APEDEPTH */
extern "C" __attribute__((visibility("default"))) void* APEDEPTH = NULL;
