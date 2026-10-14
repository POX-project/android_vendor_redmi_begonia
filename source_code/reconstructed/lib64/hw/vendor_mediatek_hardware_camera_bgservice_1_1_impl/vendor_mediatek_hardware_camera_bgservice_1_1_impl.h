/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.bgservice@1.1-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.bgservice@1.1-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS4_14IEventCallbackEEERNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::setEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS4_14IEventCallbackEEERNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEE(void);

/* Symbol: HIDL_FETCH_IBGService */
/* Demangled: HIDL_FETCH_IBGService */
int HIDL_FETCH_IBGService(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap13resetCallbackEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::resetCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap13resetCallbackEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::setEventCallback_1_1(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE8_N7android8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE8_N7android8hardware20hidl_death_recipientE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_NS4_14IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_NS4_14IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getInstanceEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getInstance() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getInstanceEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService11serviceDiedEmRKN7android2wpINS7_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService::setEventCallback(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap15requestCallbackEiijm */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::requestCallback(int, int, unsigned int, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap15requestCallbackEiijm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS3_4V1_010IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS3_4V1_010IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS3_4V1_014IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::getCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap11getCallbackERN7android2spINS3_4V1_014IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS3_4V1_014IEventCallbackEEERNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::setEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap16setEventCallbackERKN7android2spINS3_4V1_014IEventCallbackEEERNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap17onRequestCallbackEiijm */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGServiceWrap::onRequestCallback(int, int, unsigned int, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation13BGServiceWrap17onRequestCallbackEiijm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS4_10IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::implementation::BGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114implementation9BGServiceE0_NS4_10IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallback11onCompletedEiij */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback::onCompleted(int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallback11onCompletedEiij(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::implementation::EventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_014implementation13EventCallbackE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_IMPL_H */
