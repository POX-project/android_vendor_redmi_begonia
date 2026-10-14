/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.wifi.supplicant@2.2.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.wifi.supplicant@2.2.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_2_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_2_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19doSupplicantCommandERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESA_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::doSupplicantCommand(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19doSupplicantCommandERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface21setHALInstrumentationEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_119ISupplicantStaIfaceEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_119ISupplicantStaIfaceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD2Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::_hidl_doSupplicantCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface4pingEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getFeatureMask(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface17_hidl_setScanModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEbNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::_hidl_setScanMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface17_hidl_setScanModeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEbNSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_119ISupplicantStaIfaceE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getNetwork(unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS3_4V2_127ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::registerCallback_2_1(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS3_4V2_127ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE;

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface17_hidl_setScanModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::_hidl_setScanMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface17_hidl_setScanModeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11setScanModeEbNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setScanMode(bool, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface11setScanModeEbNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10descriptorE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::descriptor */
extern void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setWapiCertAliasList(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESF_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::_hidl_doSupplicantCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface25_hidl_doSupplicantCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusESF_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_119ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceENS7_4V2_119ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BsSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_220BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_219ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_2::ISupplicantStaIface> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_2::BpHwSupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_222BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_2::BnHwSupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_222BnHwSupplicantStaIfaceE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_2_H */
