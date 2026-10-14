/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.bluetooth.audio@2.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.bluetooth.audio@2.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_2_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_2_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, void>(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderEvEENS_2spIT_EESC_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::~Capabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::BpHwBluetoothAudioProvidersFactory(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigERKNS4_13AacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigERKNS4_13AacParametersE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderENS8_23IBluetoothAudioProviderEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderENS8_23IBluetoothAudioProviderEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesERKNS4_14AptxParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesERKNS4_14AptxParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::BnHwBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSEOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSEOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android8hardware11BpInterfaceINS4_19IBluetoothAudioPortEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android8hardware11BpInterfaceINS4_19IBluetoothAudioPortEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEONS4_13PcmParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEONS4_13PcmParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSEOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSEOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::BpHwBluetoothAudioPort(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC2EN7android2spINS4_23IBluetoothAudioProviderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::BsBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC2EN7android2spINS4_23IBluetoothAudioProviderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2EOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2EOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEONS4_13AacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEONS4_13AacParametersE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getProviderCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (android::hardware::hidl_vec<vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory23getProviderCapabilitiesENS4_11SessionTypeENSt3__18functionIFvRKN7android8hardware8hidl_vecINS4_17AudioCapabilitiesEEEEEE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort20_hidl_updateMetadataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_updateMetadata(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort20_hidl_updateMetadataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::~AudioConfiguration() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_enterGameMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration18hidl_destructUnionEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_destructUnion() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration18hidl_destructUnionEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEONS4_14LhdcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEONS4_14LhdcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::~AudioCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::~Capabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificaSERKS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10descriptorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::descriptor */
extern void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigERKNS4_14LdacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigERKNS4_14LdacParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactory13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactory13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigERKNS4_14LhdcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigERKNS4_14LhdcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort4pingEv(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS7_22BpHwBluetoothAudioPortENS7_22BnHwBluetoothAudioPortEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::fromBinder<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS7_22BpHwBluetoothAudioPortENS7_22BnHwBluetoothAudioPortEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEONS4_17CodecCapabilitiesE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEONS4_17CodecCapabilitiesE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEONS4_18CodecConfigurationE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEONS4_18CodecConfigurationE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2ERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2ERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_NS4_19IBluetoothAudioPortE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_getPresentationPosition(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, unsigned long, unsigned long, vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderE0_NS4_23IBluetoothAudioProviderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesaSERKS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2EOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2EOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_streamStartedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamStarted(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_streamStartedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigERKNS4_14AptxParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigERKNS4_14AptxParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_suspendStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_suspendStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_suspendStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS_4hidl4base4V1_05IBaseENS8_22BpHwBluetoothAudioPortEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortENS_4hidl4base4V1_05IBaseENS8_22BpHwBluetoothAudioPortEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortENS8_19IBluetoothAudioPortEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortENS8_19IBluetoothAudioPortEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15streamSuspendedENS4_6StatusE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::streamSuspended(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15streamSuspendedENS4_6StatusE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::_hidl_getProviderCapabilities(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort20_hidl_updateMetadataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_5audio6common4V5_014SourceMetadataE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_updateMetadata(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::audio::common::V5_0::SourceMetadata const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort20_hidl_updateMetadataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_5audio6common4V5_014SourceMetadataE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::BpHwBluetoothAudioPort(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_enterGameMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_enterGameModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKNS6_2spINS4_23IBluetoothAudioProviderEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::_hidl_openProvider(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKNS6_2spINS4_23IBluetoothAudioProviderEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android8hardware11BpInterfaceINS4_31IBluetoothAudioProvidersFactoryEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE0_N7android8hardware11BpInterfaceINS4_31IBluetoothAudioProvidersFactoryEEE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesERKNS4_13AacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesERKNS4_13AacParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort10stopStreamEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::stopStream() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort10stopStreamEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryENS_4hidl4base4V1_05IBaseENS8_34BpHwBluetoothAudioProvidersFactoryEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryENS_4hidl4base4V1_05IBaseENS8_34BpHwBluetoothAudioProvidersFactoryEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::~AudioCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities18hidl_destructUnionEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_destructUnion() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities18hidl_destructUnionEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_getPresentationPosition(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort29_hidl_getPresentationPositionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort17_hidl_startStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_startStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort17_hidl_startStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC1EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::BsBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC1EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1EOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1EOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::~CodecSpecific() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD2Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC1ERKN7android2spINS4_19IBluetoothAudioPortEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::BnHwBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC1ERKN7android2spINS4_19IBluetoothAudioPortEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamSuspended(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider18_hidl_startSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_startSession(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider18_hidl_startSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific16getDiscriminatorEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::getDiscriminator() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific16getDiscriminatorEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2EOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2EOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE */
/* Demangled: construction vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE0_NS4_31IBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10descriptorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::descriptor */
extern void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesERKNS4_14LhdcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesERKNS4_14LhdcParametersE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD0Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEONS4_13PcmParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEONS4_13PcmParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::BpHwBluetoothAudioProvider(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesERKNS4_17CodecCapabilitiesE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesERKNS4_17CodecCapabilitiesE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::BnHwBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryC1ERKN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionC1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10descriptorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::descriptor */
extern void* _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC2ERKN7android2spINS4_23IBluetoothAudioProviderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::BnHwBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC2ERKN7android2spINS4_23IBluetoothAudioProviderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider16_hidl_endSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_endSession(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider16_hidl_endSessionEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1EOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1EOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPort13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPort13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_streamStartedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamStarted(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider19_hidl_streamStartedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesERKNS4_13PcmParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesERKNS4_13PcmParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::~CodecSpecific() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC1EN7android2spINS4_19IBluetoothAudioPortEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::BsBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC1EN7android2spINS4_19IBluetoothAudioPortEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEONS4_14LdacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEONS4_14LdacParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14updateMetadataERKN7android8hardware5audio6common4V5_014SourceMetadataE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::updateMetadata(android::hardware::audio::common::V5_0::SourceMetadata const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort14updateMetadataERKN7android8hardware5audio6common4V5_014SourceMetadataE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1ERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1ERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15aacCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1ERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1ERKS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort16_hidl_stopStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_stopStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort16_hidl_stopStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS7_26BpHwBluetoothAudioProviderENS7_26BnHwBluetoothAudioProviderEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> android::hardware::fromBinder<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider, vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS7_26BpHwBluetoothAudioProviderENS7_26BnHwBluetoothAudioProviderEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort17_hidl_startStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_startStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort17_hidl_startStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13streamStartedENS4_6StatusE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::streamStarted(vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13streamStartedENS4_6StatusE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryENS8_31IBluetoothAudioProvidersFactoryEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory, vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryENS8_31IBluetoothAudioProvidersFactoryEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesERKNS4_13SbcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesERKNS4_13SbcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2EOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2EOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android8hardware11BpInterfaceINS4_23IBluetoothAudioProviderEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE0_N7android8hardware11BpInterfaceINS4_23IBluetoothAudioProviderEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1ERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1ERKS6_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPortE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamSuspended(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::Status) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider21_hidl_streamSuspendedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_6StatusE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider16_hidl_endSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_endSession(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider16_hidl_endSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEONS4_13AacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEONS4_13AacParametersE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities16getDiscriminatorEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::getDiscriminator() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities16getDiscriminatorEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSEOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesaSEOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEONS4_13SbcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigEONS4_13SbcParametersE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD1Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11startStreamEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::startStream() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort11startStreamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProvider13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProvider13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::BpHwBluetoothAudioProvider(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvRKNS7_8hidl_vecINS4_17AudioCapabilitiesEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::_hidl_getProviderCapabilities(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (android::hardware::hidl_vec<vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory29_hidl_getProviderCapabilitiesEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS4_11SessionTypeENSt3__18functionIFvRKNS7_8hidl_vecINS4_17AudioCapabilitiesEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities10hidl_unionC1Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9aacConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEONS4_14LhdcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16lhdcCapabilitiesEONS4_14LhdcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEONS4_14AptxParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10aptxConfigEONS4_14AptxParametersE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC1Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS_4hidl4base4V1_05IBaseENS8_26BpHwBluetoothAudioProviderEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> > android::hardware::details::castInterface<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProviderENS_4hidl4base4V1_05IBaseENS8_26BpHwBluetoothAudioProviderEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::castFrom(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1EOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC1EOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigERKNS4_13SbcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific9sbcConfigERKNS4_13SbcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_123IBluetoothAudioProvider11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider18_hidl_startSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_startSession(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider18_hidl_startSessionEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC1EN7android2spINS4_23IBluetoothAudioProviderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvider::BsBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_124BsBluetoothAudioProviderC1EN7android2spINS4_23IBluetoothAudioProviderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort, void>(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigERKNS4_18CodecConfigurationE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigERKNS4_18CodecConfigurationE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC1ERKN7android2spINS4_23IBluetoothAudioProviderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::BnHwBluetoothAudioProvider(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderC1ERKN7android2spINS4_23IBluetoothAudioProviderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration16getDiscriminatorEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::getDiscriminator() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration16getDiscriminatorEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_suspendStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::_hidl_suspendStream(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort19_hidl_suspendStreamEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC2ERKN7android2spINS4_19IBluetoothAudioPortEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::BnHwBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortC2ERKN7android2spINS4_19IBluetoothAudioPortEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProviderE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesERKNS4_14LdacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesERKNS4_14LdacParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13suspendStreamEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::suspendStream() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13suspendStreamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider10endSessionEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::endSession() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider10endSessionEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13enterGameModeEh */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::enterGameMode(unsigned char) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort13enterGameModeEh(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::BpHwBluetoothAudioProvidersFactory(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactoryE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration11codecConfigEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE */
/* Demangled: VTT for vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort */
extern void* _ZTTN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPortE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSEOS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationaSEOS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10hidl_unionD2Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities17codecCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort23getPresentationPositionENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::getPresentationPosition(std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, unsigned long, unsigned long, vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort23getPresentationPositionENSt3__18functionIFvNS4_6StatusEmmRKNS4_8TimeSpecEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD2Ev(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() */
int _ZThn32_N6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProviderD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21notifySyspropsChangedEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::~BnHwBluetoothAudioProvidersFactory() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities18hidl_destructUnionEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_destructUnion() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities18hidl_destructUnionEv(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10lhdcConfigEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_enterGameMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactoryE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities10hidl_unionD2Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16ldacCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigERKNS4_13PcmParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration9pcmConfigERKNS4_13PcmParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13enterGameModeEh */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::enterGameMode(unsigned char) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider13enterGameModeEh(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2ERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilitiesC2ERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2ERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC2ERKS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS6_8hardware12MQDescriptorIhLNSI_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::startSession(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> const&, vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12startSessionERKN7android2spINS4_19IBluetoothAudioPortEEERKNS4_18AudioConfigurationENSt3__18functionIFvNS4_6StatusERKNS6_8hardware12MQDescriptorIhLNSI_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117AudioCapabilities15pcmCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1EOS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1EOS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort21notifySyspropsChangedEv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::~BnHwBluetoothAudioPort() */
int _ZTv0_n24_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1ERKS5_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationC1ERKS5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEONS4_14LdacParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific10ldacConfigEONS4_14LdacParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort16_hidl_stopStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort::_hidl_stopStream(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPort16_hidl_stopStreamEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_122BnHwBluetoothAudioPortE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEONS4_13SbcParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEONS4_13SbcParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEONS4_14AptxParametersE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEONS4_14AptxParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific18hidl_destructUnionEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_destructUnion() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecific18hidl_destructUnionEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118CodecConfiguration13CodecSpecificC1Ev(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware9bluetooth5audio4V2_122BpHwBluetoothAudioPort15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_131IBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities15sbcCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_119IBluetoothAudioPort17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC2EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory::BsBluetoothAudioProvidersFactory(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvidersFactory>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryC2EN7android2spINS4_31IBluetoothAudioProvidersFactoryEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2ERKS6_ */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities const&) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12CapabilitiesC2ERKS6_(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::~AudioConfiguration() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfigurationD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC2EN7android2spINS4_19IBluetoothAudioPortEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioPort::BsBluetoothAudioPort(android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_120BsBluetoothAudioPortC2EN7android2spINS4_19IBluetoothAudioPortEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider4pingEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::ping() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::openProvider(vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, std::__1::function<void (vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, android::sp<vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12openProviderENS4_11SessionTypeENSt3__18functionIFvNS4_6StatusERKN7android2spINS4_23IBluetoothAudioProviderEEEEEE(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16aptxCapabilitiesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_enterGameMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BnHwBluetoothAudioProvider19_hidl_enterGameModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_126BpHwBluetoothAudioProvider12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvidersFactory::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BpHwBluetoothAudioProvidersFactory14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory */
extern void* _ZTCN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactoryE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD2Ev */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::~hidl_union() */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_118AudioConfiguration10hidl_unionD2Ev(void);

/* Symbol: _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16getDiscriminatorEv */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::getDiscriminator() const */
int _ZNK6vendor8mediatek8hardware9bluetooth5audio4V2_117CodecCapabilities12Capabilities16getDiscriminatorEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvidersFactory::_hidl_openProvider(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9bluetooth5audio4V2_134BnHwBluetoothAudioProvidersFactory18_hidl_openProviderEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE */
/* Demangled: vtable for vendor::mediatek::hardware::bluetooth::audio::V2_1::BsBluetoothAudioProvidersFactory */
extern void* _ZTVN6vendor8mediatek8hardware9bluetooth5audio4V2_132BsBluetoothAudioProvidersFactoryE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_2_1_H */
