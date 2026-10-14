/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.lomoeffect@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.lomoeffect@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC2EN7android2spINS4_11ILomoEffectEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::BsLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC2EN7android2spINS4_11ILomoEffectEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjiRKNS7_10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_allocLomoDstImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjiRKNS7_10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageEnqueEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_lomoImageEnque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageEnqueEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC1EN7android2spINS4_11ILomoEffectEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::BsLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectC1EN7android2spINS4_11ILomoEffectEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoDstImageEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::freeLomoDstImage() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoDstImageEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::allocLomoDstImage(unsigned int, int, android::hardware::hidl_array<unsigned int, 3ul> const&, android::hardware::hidl_handle const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoDstImageEjiRKN7android8hardware10hidl_arrayIjLm3EJEEERKNS7_11hidl_handleE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::uploadLomoSrcImage(android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect18uploadLomoSrcImageERKN7android8hardware11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::lomoImageEnque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageEnqueEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect */
extern void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoSrcImageEjjjjj */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::allocLomoSrcImage(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect17allocLomoSrcImageEjjjjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageDequeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_lomoImageDeque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect20_hidl_lomoImageDequeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::ping() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_NS4_11ILomoEffectE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_NS4_11ILomoEffectE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4initEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::init() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect4initEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::BpHwLomoEffect(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::ping() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_uninit(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12_hidl_uninitEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_uploadLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC1ERKN7android2spINS4_11ILomoEffectEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::BnHwLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC1ERKN7android2spINS4_11ILomoEffectEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_init(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect10_hidl_initEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_init(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect10_hidl_initEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectENS_4hidl4base4V1_05IBaseENS8_14BpHwLomoEffectEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectENS_4hidl4base4V1_05IBaseENS8_14BpHwLomoEffectEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::lomoImageDeque(unsigned int, android::hardware::hidl_array<unsigned int, 3ul> const&, int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect14lomoImageDequeEjRKN7android8hardware10hidl_arrayIjLm3EJEEEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjjjjj */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_allocLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect23_hidl_allocLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjjjjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect6uninitEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::uninit() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect6uninitEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_uninit(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect12_hidl_uninitEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE0_NS4_11ILomoEffectE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffectE0_NS4_11ILomoEffectE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffect13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BsLomoEffect::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_012BsLomoEffect13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_lomoImageEnque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::ping() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZTv0_n24_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::castFrom(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageDequeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_lomoImageDeque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect20_hidl_lomoImageDequeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC2ERKN7android2spINS4_11ILomoEffectEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::BnHwLomoEffect(android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectC2ERKN7android2spINS4_11ILomoEffectEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android8hardware11BpInterfaceINS4_11ILomoEffectEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect>-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android8hardware11BpInterfaceINS4_11ILomoEffectEEE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect */
extern void* _ZTTN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_freeLomoDstImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_freeLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect22_hidl_freeLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_freeLomoDstImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoDstImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_uploadLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_handle const&, android::hardware::hidl_array<unsigned int, 3ul> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect24_hidl_uploadLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_handleERKNS7_10hidl_arrayIjLm3EJEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTCN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::~BnHwLomoEffect() */
int _ZThn32_N6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffectD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::_hidl_freeLomoSrcImage(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect22_hidl_freeLomoSrcImageEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::BpHwLomoEffect(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect */
extern void* _ZTVN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_011ILomoEffect24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_allocLomoDstImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoDstImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BnHwLomoEffect::_hidl_allocLomoSrcImage(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BnHwLomoEffect23_hidl_allocLomoSrcImageEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoSrcImageEv */
/* Demangled: vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect::freeLomoSrcImage() */
int _ZN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffect16freeLomoSrcImageEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectENS8_11ILomoEffectEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::lomoeffect::V1_0::BpHwLomoEffect, vendor::mediatek::hardware::camera::lomoeffect::V1_0::ILomoEffect, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera10lomoeffect4V1_014BpHwLomoEffectENS8_11ILomoEffectEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_LOMOEFFECT_1_0_H */
