/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.security@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.security@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_SECURITY_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_SECURITY_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_registerCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera22_hidl_registerCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera4openERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::open(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera4openERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_N7android8hardware11BpInterfaceINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback>-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_N7android8hardware11BpInterfaceINS4_27ISecureCameraClientCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera18_hidl_startCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_startCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera18_hidl_startCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraC2EN7android2spINS4_13ISecureCameraEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCamera::BsSecureCamera(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraC2EN7android2spINS4_13ISecureCameraEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15getCameraIdListENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::getCameraIdList(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15getCameraIdListENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera16_hidl_initializeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_initialize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera16_hidl_initializeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera10descriptorE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera11_hidl_closeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_close(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera11_hidl_closeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackC1EN7android2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCameraClientCallback::BsSecureCameraClientCallback(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackC1EN7android2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSecureCameraClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSecureCameraClientCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera10initializeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::initialize(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera10initializeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BsSecureCameraClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback23_hidl_onBufferAvailableEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::_hidl_onBufferAvailable(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback23_hidl_onBufferAvailableEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraE0_NS4_13ISecureCameraE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera-in-vendor::mediatek::hardware::camera::security::V1_0::BsSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraE0_NS4_13ISecureCameraE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback, void>(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackC2EN7android2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCameraClientCallback::BsSecureCameraClientCallback(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackC2EN7android2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraC1EN7android2spINS4_13ISecureCameraEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCamera::BsSecureCamera(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraC1EN7android2spINS4_13ISecureCameraEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera18_hidl_uninitializeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_uninitialize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera18_hidl_uninitializeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21_hidl_getSecureStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_getSecureStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21_hidl_getSecureStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraENS8_13ISecureCameraEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera, vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraENS8_13ISecureCameraEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12uninitializeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::uninitialize(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12uninitializeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackC1ERKN7android2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::BnHwSecureCameraClientCallback(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackC1ERKN7android2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackENS7_30BpHwSecureCameraClientCallbackENS7_30BnHwSecureCameraClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback, vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback, vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackENS7_30BpHwSecureCameraClientCallbackENS7_30BnHwSecureCameraClientCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackC2ERKN7android2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::BnHwSecureCameraClientCallback(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackC2ERKN7android2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_NS4_27ISecureCameraClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_NS4_27ISecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera16registerCallbackERKN7android2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::registerCallback(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera16registerCallbackERKN7android2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera18_hidl_startCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_startCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera18_hidl_startCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera18_hidl_uninitializeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_uninitialize(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera18_hidl_uninitializeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11stopCaptureERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::stopCapture(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11stopCaptureERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISecureCameraClientCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_registerCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera22_hidl_registerCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISecureCameraClientCallbackEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_N7android8hardware11BpInterfaceINS4_13ISecureCameraEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera>-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_N7android8hardware11BpInterfaceINS4_13ISecureCameraEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackENS8_27ISecureCameraClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback, vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackENS8_27ISecureCameraClientCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraC1ERKN7android2spINS4_13ISecureCameraEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::BnHwSecureCamera(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraC1ERKN7android2spINS4_13ISecureCameraEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraC2ERKN7android2spINS4_13ISecureCameraEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::BnHwSecureCamera(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraC2ERKN7android2spINS4_13ISecureCameraEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15getSecureStatusENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::getSecureStatus(std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera15getSecureStatusENSt3__18functionIFvN7android8hardware6camera6common4V1_06StatusERKNS9_8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12startCaptureERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::startCapture(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12startCaptureERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21setHALInstrumentationEv(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera10_hidl_openEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_open(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera10_hidl_openEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::BpHwSecureCamera(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZThn32_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraENS_4hidl4base4V1_05IBaseENS8_16BpHwSecureCameraEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera8security4V1_013ISecureCameraENS_4hidl4base4V1_05IBaseENS8_16BpHwSecureCameraEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackE0_NS4_27ISecureCameraClientCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback-in-vendor::mediatek::hardware::camera::security::V1_0::BsSecureCameraClientCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallbackE0_NS4_27ISecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCamera13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCamera::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCamera13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera21_hidl_getCameraIdListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_getCameraIdList(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera21_hidl_getCameraIdListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera21_hidl_getSecureStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_getSecureStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera21_hidl_getSecureStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::BpHwSecureCameraClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11_hidl_closeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_close(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11_hidl_closeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera17_hidl_stopCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::_hidl_stopCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera17_hidl_stopCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera10_hidl_openEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_open(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera10_hidl_openEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::castFrom(android::sp<vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera5closeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::close(android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera5closeERKN7android8hardware8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera17_hidl_stopCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_stopCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera17_hidl_stopCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BsSecureCameraClientCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_028BsSecureCameraClientCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback23_hidl_onBufferAvailableEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS7_6camera6common4V1_06StatusEmRKNS7_11hidl_handleERKNS4_6StreamE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::_hidl_onBufferAvailable(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::camera::common::V1_0::Status, unsigned long, android::hardware::hidl_handle const&, vendor::mediatek::hardware::camera::security::V1_0::Stream const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback23_hidl_onBufferAvailableEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENS7_6camera6common4V1_06StatusEmRKNS7_11hidl_handleERKNS4_6StreamE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera16_hidl_initializeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_initialize(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera16_hidl_initializeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21_hidl_getCameraIdListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS7_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::_hidl_getCameraIdList(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::camera::common::V1_0::Status, android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCamera21_hidl_getCameraIdListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorENSt3__18functionIFvNS7_6camera6common4V1_06StatusERKNS7_8hidl_vecINS7_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::~BnHwSecureCamera() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_NS4_13ISecureCameraE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE0_NS4_13ISecureCameraE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera */
extern void* _ZTCN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCameraE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCamera::BpHwSecureCamera(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BpHwSecureCameraC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::security::V1_0::BsSecureCamera */
extern void* _ZTVN6vendor8mediatek8hardware6camera8security4V1_014BsSecureCameraE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCameraClientCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_027ISecureCameraClientCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback17onBufferAvailableEN7android8hardware6camera6common4V1_06StatusEmRKNS7_11hidl_handleERKNS4_6StreamE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::onBufferAvailable(android::hardware::camera::common::V1_0::Status, unsigned long, android::hardware::hidl_handle const&, vendor::mediatek::hardware::camera::security::V1_0::Stream const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback17onBufferAvailableEN7android8hardware6camera6common4V1_06StatusEmRKNS7_11hidl_handleERKNS4_6StreamE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::ISecureCamera::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_013ISecureCamera12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCamera::ping() */
int _ZN6vendor8mediatek8hardware6camera8security4V1_016BnHwSecureCamera4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::security::V1_0::BpHwSecureCameraClientCallback::BpHwSecureCameraClientCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera8security4V1_030BpHwSecureCameraClientCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::security::V1_0::BnHwSecureCameraClientCallback::~BnHwSecureCameraClientCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera8security4V1_030BnHwSecureCameraClientCallbackD1Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_SECURITY_1_0_H */
