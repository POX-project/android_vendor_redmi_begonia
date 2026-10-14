/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.pq@2.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.pq@2.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10descriptorE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::descriptor */
extern void* _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setRGBGainEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjji */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setRGBGain(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int, unsigned int, unsigned int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setRGBGainEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEjjji(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_setTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setTDSHPFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_setTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setPQIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16_hidl_setPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_setFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setFeatureSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_setFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setExternalPanelNits(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::castFrom(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setTuningField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getChameleonStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStableStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_0::BsPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setChameleonStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setChameleonStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setChameleonStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setChameleonStrengthEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStableStatus(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23getGlobalPQStableStatusENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality, vendor::mediatek::hardware::pq::V2_0::IPictureQuality, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityENS7_15IPictureQualityEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableBlueLightEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::enableBlueLight(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableBlueLightEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getGlobalPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getGlobalPQIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setColorTransformEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_10hidl_arrayIfLj4EJLj4EEEEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setColorTransform(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setColorTransformEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_10hidl_arrayIfLj4EJLj4EEEEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setPQIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD2Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGammaIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setBlueLightStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_NS3_15IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_NS3_15IPictureQualityE;

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::globalPQIndex_t const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getGlobalPQIndexENSt3__18functionIFvNS3_6ResultERKNS3_15globalPQIndex_tEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setColorTransformEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setColorTransform(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setColorTransformEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTDSHPFlag(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getTDSHPFlagENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_getAshmemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS6_11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getAshmem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_getAshmemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS6_11hidl_memoryEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getColorRegion(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setAmbientLightRGBW(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_execIoctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultESE_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_execIoctl(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_execIoctlEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultESE_EEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getGlobalPQStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableChameleonEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_enableChameleon(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableChameleonEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_setDISPScenarioEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setDISPScenario(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_setDISPScenarioEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setColorRegionEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setColorRegion(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setColorRegionEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setGlobalPQSwitchEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQSwitch(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setGlobalPQSwitchEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getChameleonEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getChameleonEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getChameleonEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGammaIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQSwitch(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17getGlobalPQSwitchENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getChameleonEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getChameleonEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQStableStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC1EN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setBlueLightStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStableStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_getGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGlobalPQSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setExternalPanelNits(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_setExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableChameleonEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::enableChameleon(bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15enableChameleonEbi(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_setPQModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setPQMode(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_setPQModeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setRGBGainEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setRGBGain(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality16_hidl_setRGBGainEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_getTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTDSHPFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_getTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_setDISPScenarioEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setDISPScenario(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_setDISPScenarioEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_setGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setGlobalPQStrengthEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQStrength(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setGlobalPQStrengthEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getMappedColorIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16setFeatureSwitchENS3_11PQFeatureIDEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16setFeatureSwitchENS3_11PQFeatureIDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getBlueLightEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getBlueLightEnabled(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getBlueLightEnabledEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_setTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setTDSHPFlag(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality18_hidl_setTDSHPFlagEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getChameleonEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getChameleonEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getChameleonEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setColorTransform(android::hardware::hidl_array<float, 4u, 4u> const&, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setColorTransformERKN7android8hardware10hidl_arrayIfLj4EJLj4EEEEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setRGBGainEjjji */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setRGBGain(unsigned int, unsigned int, unsigned int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setRGBGainEjjji(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getColorRegion(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getColorRegionENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_setGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setGammaIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_setGammaIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getBlueLightStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getBlueLightStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC1ERKN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableBlueLightEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_enableBlueLight(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, bool, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality21_hidl_enableBlueLightEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEbi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setPQIndexEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setPQIndex(int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality10setPQIndexEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getFeatureSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_getFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getMappedTDSHPIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getBlueLightStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getBlueLightStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setTuningFieldEiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setTuningField(int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14setTuningFieldEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getMappedColorIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedColorIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setAmbientLightRGBWEiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setAmbientLightRGBW(int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19setAmbientLightRGBWEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getChameleonStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getChameleonStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getColorIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setColorRegion(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_setColorRegionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setAmbientLightRGBW(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality25_hidl_setAmbientLightRGBWEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getColorRegion(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQWinParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultERKNS3_15dispPQWinParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setColorRegion(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setColorRegionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getExternalPanelNits(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getExternalPanelNitsENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTDSHPIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_getTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStrengthRange(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9getAshmemENSt3__18functionIFvNS3_6ResultERKN7android8hardware11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getAshmem(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9getAshmemENSt3__18functionIFvNS3_6ResultERKN7android8hardware11hidl_memoryEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE */
/* Demangled: VTT for vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern void* _ZTTN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getMappedColorIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedColorIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setAmbientLightCTEddd */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setAmbientLightCT(double, double, double) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality17setAmbientLightCTEddd(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS3_6ResultEbEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getBlueLightEnabled(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, bool)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getBlueLightEnabledENSt3__18functionIFvNS3_6ResultEbEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_setFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setFeatureSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::pq::V2_0::PQFeatureID, unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality22_hidl_setFeatureSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENS3_11PQFeatureIDEj(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableChameleonEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_enableChameleon(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableChameleonEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getBlueLightEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getBlueLightEnabled(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getBlueLightEnabledEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getMappedTDSHPIndex(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19getMappedTDSHPIndexEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE0_N7android8hardware11BpInterfaceINS3_15IPictureQualityEEE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getMappedTDSHPIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getMappedTDSHPIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getTuningField(int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality14getTuningFieldEiiNSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setAmbientLightCTEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEddd */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setAmbientLightCT(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, double, double, double) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_setAmbientLightCTEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEddd(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableBlueLightEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_enableBlueLight(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality21_hidl_enableBlueLightEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getFeatureSwitchENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getFeatureSwitch(vendor::mediatek::hardware::pq::V2_0::PQFeatureID, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality16getFeatureSwitchENS3_11PQFeatureIDENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getColorIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getColorIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQSwitch(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23_hidl_getGlobalPQSwitchEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::BsPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality>) */
int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityC2EN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setGlobalPQSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getExternalPanelNits(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality26_hidl_getExternalPanelNitsEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getTuningField(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality20_hidl_getTuningFieldEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9execIoctlERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultES7_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::execIoctl(vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIoctlParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9execIoctlERKNS3_17dispPQIoctlParamsENSt3__18functionIFvNS3_6ResultES7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGlobalPQStableStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality29_hidl_setGlobalPQStableStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_getTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTDSHPFlag(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality18_hidl_getTDSHPFlagEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_getAshmemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getAshmem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_getAshmemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGlobalPQStrengthRange(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality24getGlobalPQStrengthRangeENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEjEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getExternalPanelNits(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, unsigned int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getExternalPanelNitsEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setChameleonStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_setChameleonStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9setPQModeEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setPQMode(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality9setPQModeEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTDSHPIndex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, vendor::mediatek::hardware::pq::V2_0::dispPQIndexParams const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality19_hidl_getTDSHPIndexEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultERKNS3_17dispPQIndexParamsEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setBlueLightStrengthEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setBlueLightStrength(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setBlueLightStrengthEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setExternalPanelNitsEj */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setExternalPanelNits(unsigned int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20setExternalPanelNitsEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQStrength(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality25_hidl_getGlobalPQStrengthEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getTuningField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_getTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23setGlobalPQStableStatusEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGlobalPQStableStatus(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality23setGlobalPQStableStatusEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getFeatureSwitch(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getFeatureSwitchEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getGlobalPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_getGlobalPQIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality22_hidl_getGlobalPQIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13setGammaIndexEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setGammaIndex(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13setGammaIndexEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_setPQModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setPQMode(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15_hidl_setPQModeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_setTuningField(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20_hidl_setTuningFieldEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getChameleonStrength(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality20getChameleonStrengthENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getBlueLightStrength(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality26_hidl_getBlueLightStrengthEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> > android::hardware::details::castInterface<vendor::mediatek::hardware::pq::V2_0::IPictureQuality, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware2pq4V2_015IPictureQualityENS_4hidl4base4V1_05IBaseENS7_18BpHwPictureQualityEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE */
/* Demangled: vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality */
extern void* _ZTVN6vendor8mediatek8hardware2pq4V2_015IPictureQualityE;

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12setTDSHPFlagEi */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setTDSHPFlag(int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality12setTDSHPFlagEi(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_setGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setGammaIndex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality19_hidl_setGammaIndexEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::getGammaIndex(std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality13getGammaIndexENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZTv0_n12_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::IPictureQuality::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_015IPictureQuality12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setAmbientLightCTEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_setAmbientLightCT(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality23_hidl_setAmbientLightCTEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::BnHwPictureQuality(android::sp<vendor::mediatek::hardware::pq::V2_0::IPictureQuality> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityC2ERKN7android2spINS3_15IPictureQualityEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::_hidl_getGlobalPQStrengthRange(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (vendor::mediatek::hardware::pq::V2_0::Result, int)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality30_hidl_getGlobalPQStrengthRangeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvNS3_6ResultEiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::BpHwPictureQuality(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQualityC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BsPictureQuality::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware2pq4V2_016BsPictureQuality13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_execIoctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::_hidl_execIoctl(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality15_hidl_execIoctlEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality4pingEv */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::ping() */
int _ZN6vendor8mediatek8hardware2pq4V2_018BnHwPictureQuality4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15setDISPScenarioEii */
/* Demangled: vendor::mediatek::hardware::pq::V2_0::BpHwPictureQuality::setDISPScenario(int, int) */
int _ZN6vendor8mediatek8hardware2pq4V2_018BpHwPictureQuality15setDISPScenarioEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE0_NS3_15IPictureQualityE */
/* Demangled: construction vtable for vendor::mediatek::hardware::pq::V2_0::IPictureQuality-in-vendor::mediatek::hardware::pq::V2_0::BsPictureQuality */
extern void* _ZTCN6vendor8mediatek8hardware2pq4V2_016BsPictureQualityE0_NS3_15IPictureQualityE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::pq::V2_0::BnHwPictureQuality::~BnHwPictureQuality() */
int _ZThn20_N6vendor8mediatek8hardware2pq4V2_018BnHwPictureQualityD0Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_PQ_2_0_H */
