/*
 * Reverse-Engineered ABI Specification for: vendor.dolby.hardware.dms@2.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.dolby.hardware.dms@2.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_IMPL_H
#define BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks::onDapParamUpdate(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacks16onDapParamUpdateERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_NS3_13IDmsCallbacksE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDmsCallbacks-in-vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_NS3_13IDmsCallbacksE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::onFirstRef() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getActiveDeviceEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getActiveDevice() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getActiveDeviceEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNSA_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getStoredParams(bool, int, std::__1::function<void (bool, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getStoredParamsEbiNSt3__18functionIFvbRKN7android8hardware8hidl_vecIiEERKNSA_INS3_34KeyValue_AudioDevice_DapParamCacheEEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms16unregisterClientERKN7android2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setSelectedTuningDevice(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23setSelectedTuningDeviceEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev(void);

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getIntParamEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getIntParam(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getIntParamEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setActiveDeviceEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setActiveDevice(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setActiveDeviceEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms28getAvailableTuningDevicesLenEi */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getAvailableTuningDevicesLen(int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms28getAvailableTuningDevicesLenEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_DapParameterId_ValueCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache, std::__1::allocator<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache> >::__emplace_back_slow_path<vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache&>(vendor::dolby::hardware::dms::V2_0::KeyValue_DapParameterId_ValueCache&) */
int _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_DapParameterId_ValueCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3DmsE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3DmsE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3DmsE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation3DmsE;

/* Symbol: _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
int _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD1Ev(void);

/* Symbol: _ZTv0_n32_N6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::onFirstRef() */
int _ZTv0_n32_N6vendor5dolby8hardware3dms4V2_014implementation3Dms10onFirstRefEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::unregisterVqeCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IVqeCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms21unregisterVqeCallbackERKN7android2spINS3_13IVqeCallbacksEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getDapParam(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11getDapParamERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setIntParamEjl */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setIntParam(unsigned int, long) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setIntParamEjl(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getChannelCountEv */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getChannelCount() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15getChannelCountEv(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getSelectedTuningDevice(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms23getSelectedTuningDeviceEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setDapParamERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setDapParam(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms11setDapParamERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC1EN7android2spIS5_EE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::DecCallbackDeathRecipient(android::sp<vendor::dolby::hardware::dms::V2_0::implementation::Dms>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC1EN7android2spIS5_EE(void);

/* Symbol: _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev */
/* Demangled: virtual thunk to vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
int _ZTv0_n24_N6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD0Ev(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipient11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipient11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE;

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS8_IlEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setIntParams(android::hardware::hidl_vec<unsigned int> const&, android::hardware::hidl_vec<long> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12setIntParamsERKN7android8hardware8hidl_vecIjEERKNS8_IlEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14registerClientERKN7android2spINS3_13IDmsCallbacksEEEij(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::registerDecCallback(android::sp<vendor::dolby::hardware::dms::V2_0::IDecCallbacks> const&) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms19registerDecCallbackERKN7android2spINS3_13IDecCallbacksEEE(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE0_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientE0_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setChannelCountEj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::setChannelCount(unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms15setChannelCountEj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC2EN7android2spIS5_EE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::DecCallbackDeathRecipient(android::sp<vendor::dolby::hardware::dms::V2_0::implementation::Dms>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientC2EN7android2spIS5_EE(void);

/* Symbol: _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_AudioDevice_DapParamCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache, std::__1::allocator<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache> >::__emplace_back_slow_path<vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache&>(vendor::dolby::hardware::dms::V2_0::KeyValue_AudioDevice_DapParamCache&) */
int _ZNSt3__16vectorIN6vendor5dolby8hardware3dms4V2_034KeyValue_AudioDevice_DapParamCacheENS_9allocatorIS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void);

/* Symbol: _ZTTN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE */
/* Demangled: VTT for vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern void* _ZTTN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getProfileName(int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms14getProfileNameEiNSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getAvailableTuningDevices(int, std::__1::function<void (android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25getAvailableTuningDevicesEiNSt3__18functionIFvRKN7android8hardware8hidl_vecIhEEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_NS3_4IDmsE */
/* Demangled: construction vtable for vendor::dolby::hardware::dms::V2_0::IDms-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_NS3_4IDmsE;

/* Symbol: _ZTVN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE */
/* Demangled: vtable for vendor::dolby::hardware::dms::V2_0::implementation::DmsCallbacks */
extern void* _ZTVN6vendor5dolby8hardware3dms4V2_014implementation12DmsCallbacksE;

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS8_IlEEEEE */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::getIntParams(android::hardware::hidl_vec<unsigned int> const&, std::__1::function<void (android::hardware::hidl_vec<long> const&)>) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms12getIntParamsERKN7android8hardware8hidl_vecIjEENSt3__18functionIFvRKNS8_IlEEEEE(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms22notifyAudioTrackChangeEjjjjjjj */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::notifyAudioTrackChange(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms22notifyAudioTrackChangeEjjjjjjj(void);

/* Symbol: _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD2Ev */
/* Demangled: vendor::dolby::hardware::dms::V2_0::implementation::Dms::DecCallbackDeathRecipient::~DecCallbackDeathRecipient() */
int _ZN6vendor5dolby8hardware3dms4V2_014implementation3Dms25DecCallbackDeathRecipientD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::dolby::hardware::dms::V2_0::implementation::Dms */
extern void* _ZTCN6vendor5dolby8hardware3dms4V2_014implementation3DmsE0_N7android4hidl4base4V1_05IBaseE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_DOLBY_HARDWARE_DMS_2_0_IMPL_H */
