/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.audio@6.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.audio@6.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AUDIO_6_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AUDIO_6_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23setBtScoWidebandEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtScoWidebandEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23setBtScoWidebandEnabledEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::_hidl_setupParametersCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setTtyMode(android::hardware::audio::V6_0::IPrimaryDevice::TtyMode) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10setTtyModeEN7android8hardware5audio4V6_014IPrimaryDevice7TtyModeE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::_hidl_setAudioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::_hidl_setParametersCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::SetParameters const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::BnHwMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackENS_4hidl4base4V1_05IBaseENS7_28BpHwMTKPrimaryDeviceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackENS_4hidl4base4V1_05IBaseENS7_28BpHwMTKPrimaryDeviceCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getMasterMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getMasterMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::_hidl_audioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setHacEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setHacEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setHacEnabledEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10setMicMuteEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setMicMute(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10setMicMuteEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::BpHwMTKPrimaryDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setScreenStateEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setScreenState(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setScreenStateEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDevice */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackENS_4hidl4base4V1_05IBaseENS7_33BpHwAudioParameterChangedCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackENS_4hidl4base4V1_05IBaseENS7_33BpHwAudioParameterChangedCallbackEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setVoiceVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setVoiceVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setVoiceVolumeEf(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::_hidl_clearAudioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackENS6_33BpHwAudioParameterChangedCallbackENS6_33BnHwAudioParameterChangedCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> android::hardware::fromBinder<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackENS6_33BpHwAudioParameterChangedCallbackENS6_33BnHwAudioParameterChangedCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceC1ERKN7android2spINS3_17IMTKPrimaryDeviceEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::BnHwMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceC1ERKN7android2spINS3_17IMTKPrimaryDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice10descriptorE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::descriptor */
extern void* _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDeviceCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS6_5audio6common4V6_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V6_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::createAudioPatch(android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16createAudioPatchERKN7android8hardware8hidl_vecINS6_5audio6common4V6_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V6_06ResultEiEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceE0_NS3_17IMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback4pingEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackC1ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::BnHwAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackC1ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceC1EN7android2spINS3_17IMTKPrimaryDeviceEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDevice::BsMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice>) */
int _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceC1EN7android2spINS3_17IMTKPrimaryDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice32setAudioParameterChangedCallbackERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS0_5audio4V6_07IDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice, android::hardware::audio::V6_0::IDevice, vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice>(android::sp<android::hardware::audio::V6_0::IDevice>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS0_5audio4V6_07IDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS6_5audio6common4V6_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V6_06ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::updateAudioPatch(int, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, android::hardware::hidl_vec<android::hardware::audio::common::V6_0::AudioPortConfig> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16updateAudioPatchEiRKN7android8hardware8hidl_vecINS6_5audio6common4V6_015AudioPortConfigEEESE_NSt3__18functionIFvNS8_4V6_06ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDevice13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDevice::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDevice13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getMicMute(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10getMicMuteENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getHacEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getHacEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackC2ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::BnHwAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackC2ERKN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BsAudioParameterChangedCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setConnectedState(android::hardware::audio::common::V6_0::DeviceAddress const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice17setConnectedStateERKN7android8hardware5audio6common4V6_013DeviceAddressEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setMode(android::hardware::audio::common::V6_0::AudioMode) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice7setModeEN7android8hardware5audio6common4V6_09AudioModeE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware11BpInterfaceINS3_17IMTKPrimaryDeviceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice>-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware11BpInterfaceINS3_17IMTKPrimaryDeviceEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackC2EN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsAudioParameterChangedCallback::BsAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>) */
int _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackC2EN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::BpHwAudioParameterChangedCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS_4hidl4base4V1_05IBaseENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS_4hidl4base4V1_05IBaseENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21setParametersCallbackERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::setParametersCallback(vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::SetParameters const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21setParametersCallbackERKNS3_25IMTKPrimaryDeviceCallback13SetParametersE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceC2ERKN7android2spINS3_17IMTKPrimaryDeviceEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::BnHwMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceC2ERKN7android2spINS3_17IMTKPrimaryDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19setBtScoNrecEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtScoNrecEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19setBtScoNrecEnabledEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback-in-vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS6_5audio4V6_014ParameterValueEEESD_ */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setParametersERKN7android8hardware8hidl_vecINS6_5audio4V6_014ParameterValueEEESD_(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::BpHwMTKPrimaryDeviceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setMasterMuteEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setMasterMute(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13setMasterMuteEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setupParametersCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23setupParametersCallbackERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_14SourceMetadataENSt3__18functionIFvNS7_4V6_06ResultERKNS5_2spINSL_10IStreamOutEEESF_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::openOutputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SourceMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamOut> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice16openOutputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_14SourceMetadataENSt3__18functionIFvNS7_4V6_06ResultERKNS5_2spINSL_10IStreamOutEEESF_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::_hidl_setAudioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice38_hidl_setAudioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15setBtHfpEnabledEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtHfpEnabled(bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15setBtHfpEnabledEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::castFrom(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice34clearAudioParameterChangedCallbackEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::clearAudioParameterChangedCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice34clearAudioParameterChangedCallbackEv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback, void>(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::_hidl_audioParameterChangedCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback35_hidl_audioParameterChangedCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackENS7_30IAudioParameterChangedCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback, vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackENS7_30IAudioParameterChangedCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getBtScoWidebandEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice23getBtScoWidebandEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtScoHeadsetDebugName(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice24setBtScoHeadsetDebugNameERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setBtHfpVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtHfpVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14setBtHfpVolumeEf(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setAudioPortConfig(android::hardware::audio::common::V6_0::AudioPortConfig const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18setAudioPortConfigERKN7android8hardware5audio6common4V6_015AudioPortConfigE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V6_09IStreamInEvEENS_2spIT_EES8_ */
/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamIn> android::hardware::details::wrapPassthrough<android::hardware::audio::V6_0::IStreamIn, void>(android::sp<android::hardware::audio::V6_0::IStreamIn>) */
int _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V6_09IStreamInEvEENS_2spIT_EES8_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDeviceCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceC2EN7android2spINS3_17IMTKPrimaryDeviceEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDevice::BsMTKPrimaryDevice(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice>) */
int _ZN6vendor8mediatek8hardware5audio4V6_118BsMTKPrimaryDeviceC2EN7android2spINS3_17IMTKPrimaryDeviceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice17releaseAudioPatchEi */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::releaseAudioPatch(int) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice17releaseAudioPatchEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback10descriptorE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::_hidl_setupParametersCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice29_hidl_setupParametersCallbackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback, void>(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IPrimaryDevice-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V6_014IPrimaryDeviceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackC1EN7android2spINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsAudioParameterChangedCallback::BsAudioParameterChangedCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>) */
int _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackC1EN7android2spINS3_30IAudioParameterChangedCallbackEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18setBtHfpSampleRateEj */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setBtHfpSampleRate(unsigned int) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18setBtHfpSampleRateEj(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevice-in-vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE */
/* Demangled: construction vtable for android::hardware::audio::V6_0::IDevice-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android8hardware5audio4V6_07IDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::updateRotation(android::hardware::audio::V6_0::IPrimaryDevice::Rotation) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14updateRotationEN7android8hardware5audio4V6_014IPrimaryDevice8RotationE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V6_07IDeviceEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::castFrom(android::sp<android::hardware::audio::V6_0::IDevice> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V6_07IDeviceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSA_14IPrimaryDevice7TtyModeEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getTtyMode(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::V6_0::IPrimaryDevice::TtyMode)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice10getTtyModeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultENSA_14IPrimaryDevice7TtyModeEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_N7android8hardware11BpInterfaceINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback>-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_N7android8hardware11BpInterfaceINS3_25IMTKPrimaryDeviceCallbackEEE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD2Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::BpHwMTKPrimaryDevice(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V6_010IStreamOutEvEENS_2spIT_EES8_ */
/* Demangled: android::sp<android::hardware::audio::V6_0::IStreamOut> android::hardware::details::wrapPassthrough<android::hardware::audio::V6_0::IStreamOut, void>(android::sp<android::hardware::audio::V6_0::IStreamOut>) */
int _ZN7android8hardware7details15wrapPassthroughINS0_5audio4V6_010IStreamOutEvEENS_2spIT_EES8_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackENS6_28BpHwMTKPrimaryDeviceCallbackENS6_28BnHwMTKPrimaryDeviceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackENS6_28BpHwMTKPrimaryDeviceCallbackENS6_28BnHwMTKPrimaryDeviceCallbackEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsAudioParameterChangedCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getHwAvSync(std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice11getHwAvSyncENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEjEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::BpHwAudioParameterChangedCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS8_8hidl_vecINSA_14MicrophoneInfoEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getMicrophones(std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::MicrophoneInfo> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14getMicrophonesENSt3__18functionIFvN7android8hardware5audio4V6_06ResultERKNS8_8hidl_vecINSA_14MicrophoneInfoEEEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS0_5audio4V6_014IPrimaryDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> > android::hardware::details::castInterface<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice, android::hardware::audio::V6_0::IPrimaryDevice, vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice>(android::sp<android::hardware::audio::V6_0::IPrimaryDevice>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceENS0_5audio4V6_014IPrimaryDeviceENS7_20BpHwMTKPrimaryDeviceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getBtHfpEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15getBtHfpEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDeviceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice9initCheckEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::initCheck() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice9initCheckEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZThn32_N6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback-in-vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackE0_NS3_25IMTKPrimaryDeviceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15addDeviceEffectEim */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::addDeviceEffect(int, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15addDeviceEffectEim(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::~BnHwMTKPrimaryDeviceCallback() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18removeDeviceEffectEim */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::removeDeviceEffect(int, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18removeDeviceEffectEim(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS7_4V6_06ResultEmEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getInputBufferSize(android::hardware::audio::common::V6_0::AudioConfig const&, std::__1::function<void (android::hardware::audio::V6_0::Result, unsigned long)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice18getInputBufferSizeERKN7android8hardware5audio6common4V6_011AudioConfigENSt3__18functionIFvNS7_4V6_06ResultEmEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice20supportsAudioPatchesEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::supportsAudioPatches() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice20supportsAudioPatchesEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback-in-vendor::mediatek::hardware::audio::V6_1::BsAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_131BsAudioParameterChangedCallbackE0_NS3_30IAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::BpHwMTKPrimaryDeviceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::castFrom(android::sp<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice5closeEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::close() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice5closeEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackC1EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDeviceCallback::BsMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback>) */
int _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackC1EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackC2EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BsMTKPrimaryDeviceCallback::BsMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback>) */
int _ZN6vendor8mediatek8hardware5audio4V6_126BsMTKPrimaryDeviceCallbackC2EN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackENS7_25IMTKPrimaryDeviceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback, vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackENS7_25IMTKPrimaryDeviceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallback4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15setMasterVolumeEf */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setMasterVolume(float) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15setMasterVolumeEf(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_130IAudioParameterChangedCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback::castFrom(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallback8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback */
extern void* _ZTTN6vendor8mediatek8hardware5audio4V6_125IMTKPrimaryDeviceCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_12SinkMetadataENSt3__18functionIFvNS7_4V6_06ResultERKNS5_2spINSL_9IStreamInEEESF_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::openInputStream(int, android::hardware::audio::common::V6_0::DeviceAddress const&, android::hardware::audio::common::V6_0::AudioConfig const&, int, android::hardware::audio::common::V6_0::SinkMetadata const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::sp<android::hardware::audio::V6_0::IStreamIn> const&, android::hardware::audio::common::V6_0::AudioConfig const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15openInputStreamEiRKN7android8hardware5audio6common4V6_013DeviceAddressERKNS9_11AudioConfigEiRKNS9_12SinkMetadataENSt3__18functionIFvNS7_4V6_06ResultERKNS5_2spINSL_9IStreamInEEESF_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback29audioParameterChangedCallbackERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback::audioParameterChangedCallback(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallback29audioParameterChangedCallbackERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_N7android8hardware11BpInterfaceINS3_30IAudioParameterChangedCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::audio::V6_1::IAudioParameterChangedCallback>-in-vendor::mediatek::hardware::audio::V6_1::BpHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BpHwAudioParameterChangedCallbackE0_N7android8hardware11BpInterfaceINS3_30IAudioParameterChangedCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::~BnHwMTKPrimaryDevice() */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDeviceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback::ping() */
int _ZN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::audio::V6_1::BnHwAudioParameterChangedCallback::~BnHwAudioParameterChangedCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware5audio4V6_133BnHwAudioParameterChangedCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS6_5audio4V6_014ParameterValueEEERKNS7_INS6_11hidl_stringEEENSt3__18functionIFvNS9_6ResultESD_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getParameters(android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::hidl_vec<android::hardware::audio::V6_0::ParameterValue> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice13getParametersERKN7android8hardware8hidl_vecINS6_5audio4V6_014ParameterValueEEERKNS7_INS6_11hidl_stringEEENSt3__18functionIFvNS9_6ResultESD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getBtScoNrecEnabled(std::__1::function<void (android::hardware::audio::V6_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice19getBtScoNrecEnabledENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEbEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceENS7_17IMTKPrimaryDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice, vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceENS7_17IMTKPrimaryDeviceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::_hidl_setParametersCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallback27_hidl_setParametersCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V6_014IPrimaryDeviceEEEb */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDevice::castFrom(android::sp<android::hardware::audio::V6_0::IPrimaryDevice> const&, bool) */
int _ZN6vendor8mediatek8hardware5audio4V6_117IMTKPrimaryDevice8castFromERKN7android2spINS5_8hardware5audio4V6_014IPrimaryDeviceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDevice::_hidl_clearAudioParameterChangedCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BnHwMTKPrimaryDevice40_hidl_clearAudioParameterChangedCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS7_4V6_06ResultESC_EEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getAudioPort(android::hardware::audio::common::V6_0::AudioPort const&, std::__1::function<void (android::hardware::audio::V6_0::Result, android::hardware::audio::common::V6_0::AudioPort const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice12getAudioPortERKN7android8hardware5audio6common4V6_09AudioPortENSt3__18functionIFvNS7_4V6_06ResultESC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice::getMasterVolume(std::__1::function<void (android::hardware::audio::V6_0::Result, float)>) */
int _ZN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDevice15getMasterVolumeENSt3__18functionIFvN7android8hardware5audio4V6_06ResultEfEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDevice */
extern void* _ZTCN6vendor8mediatek8hardware5audio4V6_120BpHwMTKPrimaryDeviceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::audio::V6_1::BnHwMTKPrimaryDeviceCallback::BnHwMTKPrimaryDeviceCallback(android::sp<vendor::mediatek::hardware::audio::V6_1::IMTKPrimaryDeviceCallback> const&) */
int _ZN6vendor8mediatek8hardware5audio4V6_128BnHwMTKPrimaryDeviceCallbackC1ERKN7android2spINS3_25IMTKPrimaryDeviceCallbackEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::audio::V6_1::BpHwMTKPrimaryDeviceCallback */
extern void* _ZTVN6vendor8mediatek8hardware5audio4V6_128BpHwMTKPrimaryDeviceCallbackE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_AUDIO_6_1_H */
