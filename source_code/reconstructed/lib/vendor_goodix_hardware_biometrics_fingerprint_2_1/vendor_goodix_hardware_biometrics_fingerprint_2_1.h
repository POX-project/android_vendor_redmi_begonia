/*
 * Reverse-Engineered ABI Specification for: vendor.goodix.hardware.biometrics.fingerprint@2.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.goodix.hardware.biometrics.fingerprint@2.1.so
 */

#ifndef BEGONIA_RE_VENDOR_GOODIX_HARDWARE_BIOMETRICS_FINGERPRINT_2_1_H
#define BEGONIA_RE_VENDOR_GOODIX_HARDWARE_BIOMETRICS_FINGERPRINT_2_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtC1EN7android2spINS4_27IGoodixFingerprintDaemonExtEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExt::BsGoodixFingerprintDaemonExt(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtC1EN7android2spINS4_27IGoodixFingerprintDaemonExtEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13_hidl_dumpCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_dumpCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13_hidl_dumpCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback20_hidl_onEnrollResultEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiii */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onEnrollResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, int, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback20_hidl_onEnrollResultEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiii(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14_hidl_screenOnEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_screenOn(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14_hidl_screenOnEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido4pingEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemon */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback16_hidl_onAcquiredEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onAcquired(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback16_hidl_onAcquiredEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdE0_NS4_27IGoodixFingerprintDaemonHbdE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdE0_NS4_27IGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback9onHbdDataExiiRKN7android8hardware8hidl_vecIiEESB_ */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::onHbdData(long long, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback9onHbdDataExiiRKN7android8hardware8hidl_vecIiEESB_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon13_hidl_testCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::_hidl_testCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon13_hidl_testCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackC2EN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbdCallback::BsGoodixFingerprintDaemonHbdCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackC2EN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackC1ERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::BnHwGoodixFingerprintDaemonHbdCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackC1ERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13cameraCaptureEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::cameraCapture() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13cameraCaptureEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackE0_NS4_35IGoodixFingerprintDaemonExtCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackE0_NS4_35IGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoENS8_28IGoodixFingerprintDaemonFidoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoENS8_28IGoodixFingerprintDaemonFidoEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackC1EN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFidoCallback::BsGoodixFingerprintDaemonFidoCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackC1EN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_NS4_36IGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_NS4_36IGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::BpHwGoodixFingerprintDaemonCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt29_hidl_enableFingerprintModuleEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_enableFingerprintModule(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt29_hidl_enableFingerprintModuleEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12initCallbackERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackENS8_32IGoodixFingerprintDaemonCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackENS8_32IGoodixFingerprintDaemonCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt14_hidl_screenOnEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_screenOn(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt14_hidl_screenOnEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback10descriptorE;

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackENS7_39BpHwGoodixFingerprintDaemonFidoCallbackENS7_39BnHwGoodixFingerprintDaemonFidoCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> android::hardware::fromBinder<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackENS7_39BpHwGoodixFingerprintDaemonFidoCallbackENS7_39BnHwGoodixFingerprintDaemonFidoCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD2Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackENS7_35BpHwGoodixFingerprintDaemonCallbackENS7_35BnHwGoodixFingerprintDaemonCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> android::hardware::fromBinder<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackENS7_35BpHwGoodixFingerprintDaemonCallbackENS7_35BnHwGoodixFingerprintDaemonCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbd13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbd::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbd13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackE0_NS4_32IGoodixFingerprintDaemonCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackE0_NS4_32IGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd4pingEv(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon10descriptorE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback16_hidl_onAcquiredEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExi */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onAcquired(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback16_hidl_onAcquiredEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExi(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtC1ERKN7android2spINS4_27IGoodixFingerprintDaemonExtEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::BnHwGoodixFingerprintDaemonExt(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtC1ERKN7android2spINS4_27IGoodixFingerprintDaemonExtEEE(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFido13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFido::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFido13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtC2EN7android2spINS4_27IGoodixFingerprintDaemonExtEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExt::BsGoodixFingerprintDaemonExt(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtC2EN7android2spINS4_27IGoodixFingerprintDaemonExtEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21notifySyspropsChangedEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt11pauseEnrollEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::pauseEnroll() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt11pauseEnrollEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido15_hidl_isIdValidEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_isIdValid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido15_hidl_isIdValidEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd10descriptorE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackC1ERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::BnHwGoodixFingerprintDaemonCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackC1ERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt13_hidl_dumpCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_dumpCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt13_hidl_dumpCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::BpHwGoodixFingerprintDaemon(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15enableFfFeatureEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::enableFfFeature(unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15enableFfFeatureEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackC1EN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbdCallback::BsGoodixFingerprintDaemonHbdCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackC1EN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback15_hidl_onTestCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onTestCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback15_hidl_onTestCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido23_hidl_invokeFidoCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecIhEENSt3__18functionIFviSG_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_invokeFidoCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido23_hidl_invokeFidoCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS7_8hidl_vecIhEENSt3__18functionIFviSG_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> android::hardware::details::wrapPassthrough<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback, void>(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExt13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExt::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExt13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::BpHwGoodixFingerprintDaemonExtCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido21setHALInstrumentationEv(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback4pingEv(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_NS4_28IGoodixFingerprintDaemonFidoE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_NS4_28IGoodixFingerprintDaemonFidoE;

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::_hidl_initCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt17stopCameraCaptureEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::stopCameraCapture() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt17stopCameraCaptureEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExtCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt23_hidl_stopCameraCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_stopCameraCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt23_hidl_stopCameraCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15_hidl_screenOffEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_screenOff(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15_hidl_screenOffEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback10descriptorE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_initCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackENS_4hidl4base4V1_05IBaseENS8_39BpHwGoodixFingerprintDaemonFidoCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackENS_4hidl4base4V1_05IBaseENS8_39BpHwGoodixFingerprintDaemonFidoCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::BpHwGoodixFingerprintDaemonHbd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackENS7_38BpHwGoodixFingerprintDaemonHbdCallbackENS7_38BnHwGoodixFingerprintDaemonHbdCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> android::hardware::fromBinder<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackENS7_38BpHwGoodixFingerprintDaemonHbdCallbackENS7_38BnHwGoodixFingerprintDaemonHbdCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_N7android8hardware11BpInterfaceINS4_27IGoodixFingerprintDaemonHbdEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_N7android8hardware11BpInterfaceINS4_27IGoodixFingerprintDaemonHbdEEE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt13_hidl_lockoutEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_lockout(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt13_hidl_lockoutEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd13_hidl_stopHbdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::_hidl_stopHbd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd13_hidl_stopHbdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::BpHwGoodixFingerprintDaemonHbdCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::dumpCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt7dumpCmdEjRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15_hidl_getIdListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjNSt3__18functionIFviRKNS7_8hidl_vecIiEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_getIdList(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15_hidl_getIdListEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjNSt3__18functionIFviRKNS7_8hidl_vecIiEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackENS8_35IGoodixFingerprintDaemonHbdCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackENS8_35IGoodixFingerprintDaemonHbdCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackC2EN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExtCallback::BsGoodixFingerprintDaemonExtCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackC2EN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_N7android8hardware11BpInterfaceINS4_24IGoodixFingerprintDaemonEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_N7android8hardware11BpInterfaceINS4_24IGoodixFingerprintDaemonEEE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_NS4_32IGoodixFingerprintDaemonCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_NS4_32IGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt8navigateEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::navigate(unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt8navigateEj(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback12_hidl_onDumpEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::_hidl_onDump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback12_hidl_onDumpEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido22_hidl_authenticateFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEESG_ */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_authenticateFido(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido22_hidl_authenticateFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjRKNS7_8hidl_vecIhEESG_(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12setSafeClassEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::setSafeClass(unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12setSafeClassEj(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon13_hidl_testCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::_hidl_testCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon13_hidl_testCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackC1EN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonCallback::BsGoodixFingerprintDaemonCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackC1EN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackC2EN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFidoCallback::BsGoodixFingerprintDaemonFidoCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackC2EN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::BpHwGoodixFingerprintDaemonCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFido */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFidoCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback6onDumpExiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::onDump(long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback6onDumpExiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdENS_4hidl4base4V1_05IBaseENS8_30BpHwGoodixFingerprintDaemonHbdEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdENS_4hidl4base4V1_05IBaseENS8_30BpHwGoodixFingerprintDaemonHbdEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15_hidl_enumerateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_enumerate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15_hidl_enumerateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD2Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido9getIdListEjNSt3__18functionIFviRKN7android8hardware8hidl_vecIiEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::getIdList(unsigned int, std::__1::function<void (int, android::hardware::hidl_vec<int> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido9getIdListEjNSt3__18functionIFviRKN7android8hardware8hidl_vecIiEEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoE0_NS4_28IGoodixFingerprintDaemonFidoE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoE0_NS4_28IGoodixFingerprintDaemonFidoE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_NS4_35IGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_NS4_35IGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::testCmd(unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon7testCmdEjRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackC2EN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonCallback::BsGoodixFingerprintDaemonCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackC2EN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::BpHwGoodixFingerprintDaemonExt(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtENS8_27IGoodixFingerprintDaemonExtEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtENS8_27IGoodixFingerprintDaemonExtEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido10descriptorE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd14_hidl_startHbdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::_hidl_startHbd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd14_hidl_startHbdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD2Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackC1EN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExtCallback::BsGoodixFingerprintDaemonExtCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackC1EN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackENS_4hidl4base4V1_05IBaseENS8_35BpHwGoodixFingerprintDaemonCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackENS_4hidl4base4V1_05IBaseENS8_35BpHwGoodixFingerprintDaemonCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido20stopAuthenticateFidoEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::stopAuthenticateFido() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido20stopAuthenticateFidoEv(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19_hidl_reset_lockoutEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_reset_lockout(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19_hidl_reset_lockoutEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::BpHwGoodixFingerprintDaemonFido(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_N7android8hardware11BpInterfaceINS4_27IGoodixFingerprintDaemonExtEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_N7android8hardware11BpInterfaceINS4_27IGoodixFingerprintDaemonExtEEE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackC1ERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::BnHwGoodixFingerprintDaemonExtCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackC1ERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonC2ERKN7android2spINS4_24IGoodixFingerprintDaemonEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::BnHwGoodixFingerprintDaemon(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonC2ERKN7android2spINS4_24IGoodixFingerprintDaemonEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback10onAcquiredExi */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onAcquired(long long, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback10onAcquiredExi(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onAuthenticatedExiiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onAuthenticated(long long, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onAuthenticatedExiiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_setSafeClassEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_setSafeClass(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_setSafeClassEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15_hidl_onHbdDataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiiRKNS7_8hidl_vecIiEESG_ */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::_hidl_onHbdData(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, int, android::hardware::hidl_vec<int> const&, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15_hidl_onHbdDataEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiiRKNS7_8hidl_vecIiEESG_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14stopNavigationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::stopNavigation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14stopNavigationEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12_hidl_onDumpEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::_hidl_onDump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12_hidl_onDumpEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido26_hidl_stopAuthenticateFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_stopAuthenticateFido(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido26_hidl_stopAuthenticateFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonC1ERKN7android2spINS4_24IGoodixFingerprintDaemonEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::BnHwGoodixFingerprintDaemon(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonC1ERKN7android2spINS4_24IGoodixFingerprintDaemonEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15_hidl_onTestCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onTestCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15_hidl_onTestCmdEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt20_hidl_stopNavigationEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_stopNavigation(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt20_hidl_stopNavigationEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd27_hidl_enableBioAssayFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::_hidl_enableBioAssayFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd27_hidl_enableBioAssayFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonC1EN7android2spINS4_24IGoodixFingerprintDaemonEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemon::BsGoodixFingerprintDaemon(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonC1EN7android2spINS4_24IGoodixFingerprintDaemonEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_resumeEnrollEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_resumeEnroll(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt18_hidl_resumeEnrollEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> android::hardware::details::wrapPassthrough<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback, void>(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12initCallbackERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback19onAuthenticatedFidoExiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::onAuthenticatedFido(long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback19onAuthenticatedFidoExiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd27_hidl_enableBioAssayFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::_hidl_enableBioAssayFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd27_hidl_enableBioAssayFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::BpHwGoodixFingerprintDaemonHbdCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido17invokeFidoCommandERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::invokeFidoCommand(android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido17invokeFidoCommandERKN7android8hardware8hidl_vecIhEENSt3__18functionIFviSB_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback15_hidl_onHbdDataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::_hidl_onHbdData(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallback15_hidl_onHbdDataEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackC2ERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::BnHwGoodixFingerprintDaemonHbdCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackC2ERKN7android2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt21_hidl_enableFfFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_enableFfFeature(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt21_hidl_enableFfFeatureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon4pingEv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback20_hidl_onEnrollResultEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onEnrollResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback20_hidl_onEnrollResultEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_initCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12initCallbackERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::initCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12initCallbackERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_setSafeClassEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_setSafeClass(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_setSafeClassEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback10descriptorE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt8screenOnEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::screenOn() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt8screenOnEv(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonC2EN7android2spINS4_24IGoodixFingerprintDaemonEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemon::BsGoodixFingerprintDaemon(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemonC2EN7android2spINS4_24IGoodixFingerprintDaemonEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoC2EN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFido::BsGoodixFingerprintDaemonFido(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoC2EN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd14_hidl_startHbdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::_hidl_startHbd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd14_hidl_startHbdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackENS7_38BpHwGoodixFingerprintDaemonExtCallbackENS7_38BnHwGoodixFingerprintDaemonExtCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> android::hardware::fromBinder<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackENS7_38BpHwGoodixFingerprintDaemonExtCallbackENS7_38BnHwGoodixFingerprintDaemonExtCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_NS4_27IGoodixFingerprintDaemonHbdE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_NS4_27IGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback9onRemovedExii */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onRemoved(long long, int, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback9onRemovedExii(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd8startHbdEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::startHbd() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd8startHbdEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19_hidl_cameraCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_cameraCapture(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19_hidl_cameraCaptureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdC1EN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbd::BsGoodixFingerprintDaemonHbd(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdC1EN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::_hidl_initCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt14_hidl_navigateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_navigate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt14_hidl_navigateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoENS_4hidl4base4V1_05IBaseENS8_31BpHwGoodixFingerprintDaemonFidoEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoENS_4hidl4base4V1_05IBaseENS8_31BpHwGoodixFingerprintDaemonFidoEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonENS8_24IGoodixFingerprintDaemonEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonENS8_24IGoodixFingerprintDaemonEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::BpHwGoodixFingerprintDaemonExt(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD0Ev(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFidoE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback14onEnrollResultExiii */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onEnrollResult(long long, int, int, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback14onEnrollResultExiii(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbdCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido26_hidl_stopAuthenticateFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_stopAuthenticateFido(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido26_hidl_stopAuthenticateFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_initCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackE0_NS4_35IGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackE0_NS4_35IGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15_hidl_onRemovedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExii */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onRemoved(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15_hidl_onRemovedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExii(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFidoCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd7stopHbdEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::stopHbd() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd7stopHbdEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD0Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtENS_4hidl4base4V1_05IBaseENS8_30BpHwGoodixFingerprintDaemonExtEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtENS_4hidl4base4V1_05IBaseENS8_30BpHwGoodixFingerprintDaemonExtEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback4pingEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt23enableFingerprintModuleEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::enableFingerprintModule(unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt23enableFingerprintModuleEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::BpHwGoodixFingerprintDaemonFido(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdC2EN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbd::BsGoodixFingerprintDaemonHbd(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdC2EN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21_hidl_enableFfFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_enableFfFeature(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21_hidl_enableFfFeatureEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEh(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::~BnHwGoodixFingerprintDaemonExtCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdC2ERKN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::BnHwGoodixFingerprintDaemonHbd(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdC2ERKN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExi */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onError(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback13_hidl_onErrorEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExi(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackENS8_35IGoodixFingerprintDaemonExtCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackENS8_35IGoodixFingerprintDaemonExtCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12resumeEnrollEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::resumeEnroll() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt12resumeEnrollEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21enableBioAssayFeatureEh */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::enableBioAssayFeature(unsigned char) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21enableBioAssayFeatureEh(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::BpHwGoodixFingerprintDaemonFidoCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback4pingEv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbdCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemon10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13_hidl_lockoutEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_lockout(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13_hidl_lockoutEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackC1ERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::BnHwGoodixFingerprintDaemonFidoCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackC1ERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback4pingEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_NS4_35IGoodixFingerprintDaemonExtCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_NS4_35IGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido22_hidl_authenticateFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_authenticateFido(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido22_hidl_authenticateFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackC2ERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::BnHwGoodixFingerprintDaemonFidoCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackC2ERKN7android2spINS4_36IGoodixFingerprintDaemonFidoCallbackEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback25_hidl_onAuthenticatedFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::_hidl_onAuthenticatedFido(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallback25_hidl_onAuthenticatedFidoEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD2Ev(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware11BpInterfaceINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE0_N7android8hardware11BpInterfaceINS4_35IGoodixFingerprintDaemonHbdCallbackEEE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt17_hidl_pauseEnrollEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_pauseEnroll(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt17_hidl_pauseEnrollEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackENS_4hidl4base4V1_05IBaseENS8_38BpHwGoodixFingerprintDaemonExtCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallbackENS_4hidl4base4V1_05IBaseENS8_38BpHwGoodixFingerprintDaemonExtCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackENS8_36IGoodixFingerprintDaemonFidoCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackENS8_36IGoodixFingerprintDaemonFidoCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt19_hidl_cameraCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_cameraCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt19_hidl_cameraCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware11BpInterfaceINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware11BpInterfaceINS4_35IGoodixFingerprintDaemonExtCallbackEEE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware11BpInterfaceINS4_36IGoodixFingerprintDaemonFidoCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware11BpInterfaceINS4_36IGoodixFingerprintDaemonFidoCallbackEEE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackENS_4hidl4base4V1_05IBaseENS8_38BpHwGoodixFingerprintDaemonHbdCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackENS_4hidl4base4V1_05IBaseENS8_38BpHwGoodixFingerprintDaemonHbdCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::onLastStrongRef(void const*) */
int _ZThn8_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_NS4_24IGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt9enumerateEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::enumerate() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt9enumerateEv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExt */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExtCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_136BsGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::_hidl_initCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt29_hidl_enableFingerprintModuleEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_enableFingerprintModule(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt29_hidl_enableFingerprintModuleEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback::~BnHwGoodixFingerprintDaemonFidoCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackD0Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14_hidl_navigateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_navigate(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14_hidl_navigateEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21_hidl_onAuthenticatedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiiRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::_hidl_onAuthenticated(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback21_hidl_onAuthenticatedEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiiRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdC1ERKN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::BnHwGoodixFingerprintDaemonHbd(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdC1ERKN7android2spINS4_27IGoodixFingerprintDaemonHbdEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdENS8_27IGoodixFingerprintDaemonHbdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd> android::hardware::details::getServiceInternal<vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd, vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdENS8_27IGoodixFingerprintDaemonHbdEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::~BnHwGoodixFingerprintDaemonHbd() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onError(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback13_hidl_onErrorEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt7lockoutEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::lockout() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt7lockoutEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZThn20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt19_hidl_reset_lockoutEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_reset_lockout(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt19_hidl_reset_lockoutEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::_hidl_initCallback(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd18_hidl_initCallbackEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorERKNS6_2spINS4_35IGoodixFingerprintDaemonHbdCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackC2ERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::BnHwGoodixFingerprintDaemonCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackC2ERKN7android2spINS4_32IGoodixFingerprintDaemonCallbackEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13reset_lockoutEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::reset_lockout() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13reset_lockoutEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackC2ERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback::BnHwGoodixFingerprintDaemonExtCallback(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackC2ERKN7android2spINS4_35IGoodixFingerprintDaemonExtCallbackEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback10descriptorE;

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD0Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido23_hidl_invokeFidoCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_invokeFidoCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido23_hidl_invokeFidoCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback15_hidl_onRemovedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onRemoved(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback15_hidl_onRemovedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoC2ERKN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::BnHwGoodixFingerprintDaemonFido(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoC2ERKN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_N7android8hardware11BpInterfaceINS4_28IGoodixFingerprintDaemonFidoEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE0_N7android8hardware11BpInterfaceINS4_28IGoodixFingerprintDaemonFidoEEE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_N7android8hardware11BpInterfaceINS4_32IGoodixFingerprintDaemonCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE0_N7android8hardware11BpInterfaceINS4_32IGoodixFingerprintDaemonCallbackEEE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::BpHwGoodixFingerprintDaemon(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback21_hidl_onAuthenticatedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::_hidl_onAuthenticated(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallback21_hidl_onAuthenticatedEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonHbd */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt15_hidl_screenOffEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_screenOff(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt15_hidl_screenOffEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt4pingEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt10descriptorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::descriptor */
extern void* _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt10descriptorE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt15_hidl_enumerateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_enumerate(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt15_hidl_enumerateEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt9screenOffEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::screenOff() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt9screenOffEv(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::BpHwGoodixFingerprintDaemonExtCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback4pingEv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackE0_NS4_36IGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFidoCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_137BsGoodixFingerprintDaemonFidoCallbackE0_NS4_36IGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFidoCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BnHwGoodixFingerprintDaemonFidoCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback> android::hardware::details::wrapPassthrough<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback, void>(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback7onErrorExi */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onError(long long, int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback7onErrorExi(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt17_hidl_pauseEnrollEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_pauseEnroll(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt17_hidl_pauseEnrollEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_resumeEnrollEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_resumeEnroll(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt18_hidl_resumeEnrollEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbdCallback::~BnHwGoodixFingerprintDaemonHbdCallback() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonHbdCallbackD2Ev(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemonE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback9onTestCmdExiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback::onTestCmd(long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallback9onTestCmdExiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback::~BnHwGoodixFingerprintDaemonCallback() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt21setHALInstrumentationEv(void);

/* Symbol: _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE */
/* Demangled: construction vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonExt */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_128BsGoodixFingerprintDaemonExtE0_NS4_27IGoodixFingerprintDaemonExtE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15_hidl_isIdValidEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::_hidl_isIdValid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15_hidl_isIdValidEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEjj(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonENS_4hidl4base4V1_05IBaseENS8_27BpHwGoodixFingerprintDaemonEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon> > android::hardware::details::castInterface<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon, android::hidl::base::V1_0::IBase, vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemonENS_4hidl4base4V1_05IBaseENS8_27BpHwGoodixFingerprintDaemonEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BnHwGoodixFingerprintDaemonExtCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbdCallback */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonHbdCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemon13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemon::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_125BsGoodixFingerprintDaemon13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemon::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BpHwGoodixFingerprintDaemon12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon::~BnHwGoodixFingerprintDaemon() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonD1Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt20_hidl_stopNavigationEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::_hidl_stopNavigation(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt20_hidl_stopNavigationEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_initCallback(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido18_hidl_initCallbackEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido16authenticateFidoEjRKN7android8hardware8hidl_vecIhEESB_ */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::authenticateFido(unsigned int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido16authenticateFidoEjRKN7android8hardware8hidl_vecIhEESB_(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback> android::hardware::details::wrapPassthrough<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback, void>(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::BpHwGoodixFingerprintDaemonHbd(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbdC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemon */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_127BnHwGoodixFingerprintDaemonE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoC1EN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonFido::BsGoodixFingerprintDaemonFido(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_129BsGoodixFingerprintDaemonFidoC1EN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido15_hidl_getIdListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::_hidl_getIdList(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFido15_hidl_getIdListEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoC1ERKN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::BnHwGoodixFingerprintDaemonFido(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoC1ERKN7android2spINS4_28IGoodixFingerprintDaemonFidoEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::BpHwGoodixFingerprintDaemonFidoCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd13_hidl_stopHbdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd::_hidl_stopHbd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbd13_hidl_stopHbdEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonExt13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFido::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_128IGoodixFingerprintDaemonFido11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD2Ev */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido::~BnHwGoodixFingerprintDaemonFido() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoD2Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback25_hidl_onAuthenticatedFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::_hidl_onAuthenticatedFido(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, long long, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback25_hidl_onAuthenticatedFidoEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorExiRKNS7_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BnHwGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev */
/* Demangled: virtual thunk to vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::~BnHwGoodixFingerprintDaemonExt() */
int _ZTv0_n12_N6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtD0Ev(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbd::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonHbd21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd4pingEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonHbd::ping() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BpHwGoodixFingerprintDaemonHbd4pingEv(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonHbdCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonHbdCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt23_hidl_stopCameraCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::_hidl_stopCameraCapture(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExt23_hidl_stopCameraCaptureEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonFidoCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_136IGoodixFingerprintDaemonFidoCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonExtCallback::onLastStrongRef(void const*) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_138BpHwGoodixFingerprintDaemonExtCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonFido */
extern void* _ZTCN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BnHwGoodixFingerprintDaemonFidoE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonHbd */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonHbdE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_127IGoodixFingerprintDaemonExt21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtC2ERKN7android2spINS4_27IGoodixFingerprintDaemonExtEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BnHwGoodixFingerprintDaemonExt::BnHwGoodixFingerprintDaemonExt(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExt> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_130BnHwGoodixFingerprintDaemonExtC2ERKN7android2spINS4_27IGoodixFingerprintDaemonExtEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonExtCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_135IGoodixFingerprintDaemonExtCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido9isIdValidEjj */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido::isIdValid(unsigned int, unsigned int) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFido9isIdValidEjj(void);

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFido */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_131BpHwGoodixFingerprintDaemonFidoE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon::castFrom(android::sp<vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemon> const&, bool) */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_124IGoodixFingerprintDaemon8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback21notifySyspropsChangedEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::IGoodixFingerprintDaemonCallback::notifySyspropsChanged() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_132IGoodixFingerprintDaemonCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE */
/* Demangled: VTT for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonCallback */
extern void* _ZTTN6vendor6goodix8hardware10biometrics11fingerprint4V2_135BpHwGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackE */
/* Demangled: vtable for vendor::goodix::hardware::biometrics::fingerprint::V2_1::BsGoodixFingerprintDaemonCallback */
extern void* _ZTVN6vendor6goodix8hardware10biometrics11fingerprint4V2_133BsGoodixFingerprintDaemonCallbackE;

/* Symbol: _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback21setHALInstrumentationEv */
/* Demangled: vendor::goodix::hardware::biometrics::fingerprint::V2_1::BpHwGoodixFingerprintDaemonFidoCallback::setHALInstrumentation() */
int _ZN6vendor6goodix8hardware10biometrics11fingerprint4V2_139BpHwGoodixFingerprintDaemonFidoCallback21setHALInstrumentationEv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_GOODIX_HARDWARE_BIOMETRICS_FINGERPRINT_2_1_H */
