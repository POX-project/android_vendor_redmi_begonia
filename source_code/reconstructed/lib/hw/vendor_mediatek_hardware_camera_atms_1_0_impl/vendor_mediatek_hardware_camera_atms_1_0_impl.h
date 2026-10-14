/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.atms@1.0-impl.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.atms@1.0-impl.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_IMPL_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_IMPL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap11getInstanceEv */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMsWrap::getInstance() */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap11getInstanceEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap9setFactorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEESD_ */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMsWrap::setFactor(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation8ATMsWrap9setFactorENSt3__112basic_stringIcNS7_11char_traitsIcEENS7_9allocatorIcEEEESD_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_NS4_5IATMsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::atms::V1_0::IATMs-in-vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_NS4_5IATMsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern void* _ZTVN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE;

/* Symbol: __aeabi_memcpy */
/* Demangled: __aeabi_memcpy */
int __aeabi_memcpy(void);

/* Symbol: __aeabi_memcpy8 */
/* Demangled: __aeabi_memcpy8 */
int __aeabi_memcpy8(void);

/* Symbol: HIDL_FETCH_IATMs */
/* Demangled: HIDL_FETCH_IATMs */
int HIDL_FETCH_IATMs(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSB_EEE */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs::get_atms_factor(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15get_atms_factorERKN7android8hardware11hidl_stringENSt3__18functionIFvSB_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEES7_EENS_19__map_value_compareIS7_S8_NS_4lessIS7_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15set_atms_factorERKN7android8hardware11hidl_stringESB_ */
/* Demangled: vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs::set_atms_factor(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMs15set_atms_factorERKN7android8hardware11hidl_stringESB_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern void* _ZTCN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::atms::V1_0::implementation::ATMs */
extern void* _ZTTN6vendor8mediatek8hardware6camera4atms4V1_014implementation4ATMsE;

/* Symbol: __aeabi_memcpy4 */
/* Demangled: __aeabi_memcpy4 */
int __aeabi_memcpy4(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_ATMS_1_0_IMPL_H */
