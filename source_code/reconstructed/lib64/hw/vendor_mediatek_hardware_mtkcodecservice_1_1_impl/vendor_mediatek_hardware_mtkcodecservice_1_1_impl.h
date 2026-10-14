/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mtkcodecservice@1.1-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mtkcodecservice@1.1-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN11CAPEWrapper6DeInitEv */
/* Demangled: CAPEWrapper::DeInit() */
int _ZN11CAPEWrapper6DeInitEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService15handleHidlDeathEv */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::handleHidlDeath() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService15handleHidlDeathEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService21apeHidlDeathRecipientE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::apeHidlDeathRecipient */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService21apeHidlDeathRecipientE;

/* Symbol: _ZTV11CAPEWrapper */
/* Demangled: vtable for CAPEWrapper */
extern void* _ZTV11CAPEWrapper;

/* Symbol: checkhw_result */
/* Demangled: checkhw_result */
extern void* checkhw_result;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Decode(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, int, std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DecodeERKNS3_12apeDecParamsEiNSt3__18functionIFvRKNS3_15apeDecRetParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService7DestoryEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Destory(int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService7DestoryEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE8do_splatEPvPKvm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN11CAPEWrapper6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE */
/* Demangled: CAPEWrapper::Create(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams&) */
int _ZN11CAPEWrapper6CreateERN6vendor8mediatek8hardware15mtkcodecservice4V1_115apeCreateParamsE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEEE;

/* Symbol: _ZN11CAPEWrapper5ResetERKN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE */
/* Demangled: CAPEWrapper::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&) */
int _ZN11CAPEWrapper5ResetERKN6vendor8mediatek8hardware15mtkcodecservice4V1_114apeResetParamsE(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DeInitEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::DeInit(int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6DeInitEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_compareEPKvS7_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_compareEPKvS7_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern void* _ZTVN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC2Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::MtkCodecService() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC2Ev(void);

/* Symbol: ape_decoder_reset */
/* Demangled: ape_decoder_reset */
int ape_decoder_reset(void);

/* Symbol: _ZN11CAPEWrapper7DoCodecERKN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS4_15apeDecRetParamsERKN7android2spINSA_4hidl6memory4V1_07IMemoryEEERSG_ */
/* Demangled: CAPEWrapper::DoCodec(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecParams const&, vendor::mediatek::hardware::mtkcodecservice::V1_1::apeDecRetParams&, android::sp<android::hidl::memory::V1_0::IMemory> const&, android::sp<android::hidl::memory::V1_0::IMemory>&) */
int _ZN11CAPEWrapper7DoCodecERKN6vendor8mediatek8hardware15mtkcodecservice4V1_112apeDecParamsERNS4_15apeDecRetParamsERKN7android2spINSA_4hidl6memory4V1_07IMemoryEEERSG_(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC1Ev */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::MtkCodecService() */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE10do_destroyEPvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern void* _ZTTN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE;

/* Symbol: ape_decoder_get_mem_size */
/* Demangled: ape_decoder_get_mem_size */
int ape_decoder_get_mem_size(void);

/* Symbol: HIDL_FETCH_IMtkCodecService */
/* Demangled: HIDL_FETCH_IMtkCodecService */
int HIDL_FETCH_IMtkCodecService(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::setCallback(android::sp<vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecServiceCallback> const&) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService11setCallbackERKN7android2spINS3_24IMtkCodecServiceCallbackEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<int, CAPEWrapper*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIiP11CAPEWrapperEEE12do_constructEPvm(void);

/* Symbol: _ZN11CAPEWrapperC2Ev */
/* Demangled: CAPEWrapper::CAPEWrapper() */
int _ZN11CAPEWrapperC2Ev(void);

/* Symbol: _ZN11CAPEWrapper4InitERKN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE */
/* Demangled: CAPEWrapper::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&) */
int _ZN11CAPEWrapper4InitERKN6vendor8mediatek8hardware15mtkcodecservice4V1_113apeInitParamsE(void);

/* Symbol: _ZN11CAPEWrapperC1Ev */
/* Demangled: CAPEWrapper::CAPEWrapper() */
int _ZN11CAPEWrapperC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Create(std::__1::function<void (vendor::mediatek::hardware::mtkcodecservice::V1_1::apeCreateParams const&)>) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService6CreateENSt3__18functionIFvRKNS3_15apeCreateParamsEEEE(void);

/* Symbol: _ZN11CAPEWrapper7DestoryEv */
/* Demangled: CAPEWrapper::Destory() */
int _ZN11CAPEWrapper7DestoryEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_NS3_16IMtkCodecServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mtkcodecservice::V1_1::IMtkCodecService-in-vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService */
extern void* _ZTCN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecServiceE0_NS3_16IMtkCodecServiceE;

/* Symbol: APEDEPTH */
/* Demangled: APEDEPTH */
extern void* APEDEPTH;

/* Symbol: ape_decoder_get_version */
/* Demangled: ape_decoder_get_version */
int ape_decoder_get_version(void);

/* Symbol: g_count */
/* Demangled: g_count */
extern void* g_count;

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService4InitERKNS3_13apeInitParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Init(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeInitParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService4InitERKNS3_13apeInitParamsEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService5ResetERKNS3_14apeResetParamsEi */
/* Demangled: vendor::mediatek::hardware::mtkcodecservice::V1_1::implementation::MtkCodecService::Reset(vendor::mediatek::hardware::mtkcodecservice::V1_1::apeResetParams const&, int) */
int _ZN6vendor8mediatek8hardware15mtkcodecservice4V1_114implementation15MtkCodecService5ResetERKNS3_14apeResetParamsEi(void);

/* Symbol: ape_decoder_decode */
/* Demangled: ape_decoder_decode */
int ape_decoder_decode(void);

/* Symbol: ape_decoder_init */
/* Demangled: ape_decoder_init */
int ape_decoder_init(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MTKCODECSERVICE_1_1_IMPL_H */
