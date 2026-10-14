/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.wifi.supplicant@2.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.wifi.supplicant@2.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD2Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD2Ev(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback18onAssocFreqChangedEj */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onAssocFreqChanged(unsigned int) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback18onAssocFreqChangedEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::BpHwSupplicantStaIfaceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIface::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIface13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface>-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_N7android8hardware11BpInterfaceINS4_19ISupplicantStaIfaceEEE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS7_4V2_027ISupplicantStaIfaceCallbackENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS7_4V2_027ISupplicantStaIfaceCallbackENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface26_hidl_registerCallback_2_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::_hidl_registerCallback_2_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface26_hidl_registerCallback_2_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getType(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::wifi::supplicant::V1_0::IfaceType)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface7getTypeENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusENSC_9IfaceTypeEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceC2ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE0_NS3_4V2_027ISupplicantStaIfaceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE0_NS3_4V2_027ISupplicantStaIfaceCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_NS4_27ISupplicantStaIfaceCallbackE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface26_hidl_registerCallback_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::_hidl_registerCallback_2_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface26_hidl_registerCallback_2_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::registerCallback_2_1(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface20registerCallback_2_1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback23_hidl_onDataStallNoticeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::_hidl_onDataStallNotice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback23_hidl_onDataStallNoticeEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_NS3_4V2_027ISupplicantStaIfaceCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_NS3_4V2_027ISupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceC2EN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::BpHwSupplicantStaIface(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback27onEssDisassocImminentNoticeERKN7android8hardware10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onEssDisassocImminentNotice(android::hardware::hidl_array<unsigned char, 6ul> const&, unsigned int, unsigned int, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback27onEssDisassocImminentNoticeERKN7android8hardware10hidl_arrayIhLm6EJEEEjjRKNS7_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback24_hidl_onAssocFreqChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::_hidl_onAssocFreqChanged(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback24_hidl_onAssocFreqChangedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback24_hidl_onAssocFreqChangedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::_hidl_onAssocFreqChanged(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback24_hidl_onAssocFreqChangedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_N7android8hardware11BpInterfaceINS4_27ISupplicantStaIfaceCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE0_N7android8hardware11BpInterfaceINS4_27ISupplicantStaIfaceCallbackEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS7_4V2_016ISupplicantIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getNetwork(unsigned int, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface10getNetworkEjNSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS8_2spINS3_4V2_018ISupplicantNetworkEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
int _ZThn16_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface4pingEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS7_30BpHwSupplicantStaIfaceCallbackENS7_30BnHwSupplicantStaIfaceCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> android::hardware::fromBinder<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS7_30BpHwSupplicantStaIfaceCallbackENS7_30BnHwSupplicantStaIfaceCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIfaceCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::registerCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface16registerCallbackERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEENSt3__18functionIFvRKNS6_8hardware4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback17onDataStallNoticeEj */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onDataStallNotice(unsigned int) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback17onDataStallNoticeEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface10descriptorE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::descriptor */
extern void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface10descriptorE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::BnHwSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceC1ERKN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackC2ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::BnHwSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackC2ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIface::BsSupplicantStaIface(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceC1EN7android2spINS4_19ISupplicantStaIfaceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackC2EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIfaceCallback::BsSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackC2EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_027ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIfaceCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spINS3_4V2_027ISupplicantStaIfaceCallbackEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE;

/* Symbol: _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZThn32_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceENS8_19ISupplicantStaIfaceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::~BnHwSupplicantStaIface() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceD1Ev(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_NS3_4V2_016ISupplicantIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getName(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface7getNameENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusERKNS9_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIfaceCallback */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS3_4V2_016ISupplicantIfaceEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback10descriptorE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS_4hidl4base4V1_05IBaseENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::setWapiCertAliasList(android::hardware::hidl_string const&, std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface20setWapiCertAliasListERKN7android8hardware11hidl_stringENSt3__18functionIFvRKNS7_4wifi10supplicant4V1_016SupplicantStatusEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::BpHwSupplicantStaIfaceCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIfaceE0_NS3_4V2_019ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackC1EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIfaceCallback::BsSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_128BsSupplicantStaIfaceCallbackC1EN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackENS_4hidl4base4V1_05IBaseENS8_30BpHwSupplicantStaIfaceCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getFeatureMask(std::__1::function<void (android::hardware::wifi::supplicant::V1_0::SupplicantStatus const&, unsigned int)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface14getFeatureMaskENSt3__18functionIFvRKN7android8hardware4wifi10supplicant4V1_016SupplicantStatusEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZTv0_n24_N6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::castFrom(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface> const&, bool) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface8castFromERKN7android2spINS3_4V2_019ISupplicantStaIfaceEEEb(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface> > android::hardware::details::castInterface<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface, vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantStaIface>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceENS7_4V2_019ISupplicantStaIfaceENS8_22BpHwSupplicantStaIfaceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackC1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::BnHwSupplicantStaIfaceCallback(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackC1ERKN7android2spINS4_27ISupplicantStaIfaceCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BsSupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_120BsSupplicantStaIfaceE0_NS4_19ISupplicantStaIfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallback4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback23_hidl_onDataStallNoticeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::_hidl_onDataStallNotice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback23_hidl_onDataStallNoticeEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIface::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BpHwSupplicantStaIface12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIfaceCallback::~BnHwSupplicantStaIfaceCallback() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BnHwSupplicantStaIfaceCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIface19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface4pingEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BnHwSupplicantStaIface::ping() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_122BnHwSupplicantStaIface4pingEv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork, void>(android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_0::ISupplicantNetwork>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4wifi10supplicant4V2_018ISupplicantNetworkEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback */
extern void* _ZTVN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallbackE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIface */
extern void* _ZTCN6vendor8mediatek8hardware4wifi10supplicant4V2_119ISupplicantStaIfaceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback */
extern void* _ZTTN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4wifi10supplicant4V2_127ISupplicantStaIfaceCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackENS8_27ISupplicantStaIfaceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::wifi::supplicant::V2_1::BpHwSupplicantStaIfaceCallback, vendor::mediatek::hardware::wifi::supplicant::V2_1::ISupplicantStaIfaceCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4wifi10supplicant4V2_130BpHwSupplicantStaIfaceCallbackENS8_27ISupplicantStaIfaceCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_WIFI_SUPPLICANT_2_1_H */
