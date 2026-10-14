/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.vpu@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.vpu@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VPU_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VPU_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_setPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_memoryE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setPropertyMem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_memory const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_setPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_memoryE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_freeAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_freeAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_freeAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_setPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setPropertyMem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_setPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_createAlgoEiRKN7android8hardware11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbyEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_createAlgo(int, android::hardware::hidl_string const&, android::hardware::hidl_handle const&, unsigned int, unsigned int, std::__1::function<void (bool, unsigned long long)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_createAlgoEiRKN7android8hardware11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbyEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_deInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_deInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_deInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VS_createInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbiRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_createInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VS_createInstanceEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvbiRKNS6_12MQDescriptorIhLNS6_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VS_packRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_packRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VS_packRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VR_setExtraParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_16VpuExtraParam_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setExtraParam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuExtraParam_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VR_setExtraParamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_16VpuExtraParam_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_deInstanceEi */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_deInstance(int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_deInstanceEi(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21notifySyspropsChangedEv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3vpu4V1_04IvpuENS_4hidl4base4V1_05IBaseENS7_7BpHwvpuEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> > android::hardware::details::castInterface<vendor::mediatek::hardware::vpu::V1_0::Ivpu, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::vpu::V1_0::BpHwvpu>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3vpu4V1_04IvpuENS_4hidl4base4V1_05IBaseENS7_7BpHwvpuEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_addBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_addBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_addBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VS_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_createInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VS_createInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu4pingEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::ping() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_flushEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_flush(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_flushEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15_hidl_VS_runReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiib */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_runReq(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15_hidl_VS_runReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiib(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VA_getPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VA_getPort(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VA_getPortEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_freeAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiy */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_freeAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_freeAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::BpHwvpu(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_releaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_release(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_releaseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_getResultEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getResult(int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_getResultEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_addBuffer_V2EiiRKNS3_12VpuBuffer_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_addBuffer_V2(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_addBuffer_V2EiiRKNS3_12VpuBuffer_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu24VR_setPropertyMemImproveEiii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setPropertyMemImprove(int, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu24VR_setPropertyMemImproveEiii(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3vpu4V1_04IvpuE */
/* Demangled: VTT for vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern void* _ZTTN6vendor8mediatek8hardware3vpu4V1_04IvpuE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZThn20_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_setPowerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_setPower(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_setPowerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VA_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VA_getProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VA_getPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_waitReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_waitReq(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_waitReqEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_setPowerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS3_11VpuPower_HDEj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_setPower(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::vpu::V1_0::VpuPower_HD const&, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_setPowerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS3_11VpuPower_HDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_dequeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_deque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_dequeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getResult(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu18_hidl_VR_getResultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getResult(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_getResultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_tryEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_tryEnque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_tryEnqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE */
/* Demangled: VTT for vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTTN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu15_hidl_VS_runReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_runReq(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu15_hidl_VS_runReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_enqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiij */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_enque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_enqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiij(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_tryEnqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_tryEnque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_tryEnqueEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android8hardware11BpInterfaceINS3_4IvpuEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::vpu::V1_0::Ivpu>-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android8hardware11BpInterfaceINS3_4IvpuEEE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_runPackEiRKN7android8hardware8hidl_vecIiEEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_runPack(int, android::hardware::hidl_vec<int> const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_runPackEiRKN7android8hardware8hidl_vecIiEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::BpHwvpu(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_createAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_createAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_createAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_acquire_V3EiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_acquire_V3(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuModuleType_HD, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu13VS_acquire_V3EiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC2EN7android2spINS3_4IvpuEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::Bsvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC2EN7android2spINS3_4IvpuEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VS_getVpuStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbRKNS6_8hidl_vecINS3_12VpuStatus_HDEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_getVpuStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::vpu::V1_0::VpuStatus_HD> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VS_getVpuStatusEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbRKNS6_8hidl_vecINS3_12VpuStatus_HDEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_14VpuProperty_HDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_14VpuProperty_HDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10descriptorE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::descriptor */
extern void* _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VS_packRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_packRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VS_packRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VS_unpackRequestEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_unpackRequest(int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VS_unpackRequestEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_runPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_runPack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_runPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEEb(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZThn20_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_10VpuPort_HDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_10VpuPort_HDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_14VpuProperty_HDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_14VpuProperty_HDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_getPropertyMemEiiiNSt3__18functionIFvbRKN7android8hardware11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getPropertyMem(int, int, int, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_getPropertyMemEiiiNSt3__18functionIFvbRKN7android8hardware11hidl_memoryEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_runPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_runPack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_runPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VS_unpackRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_unpackRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VS_unpackRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3vpu4V1_05BsvpuE */
/* Demangled: vtable for vendor::mediatek::hardware::vpu::V1_0::Bsvpu */
extern void* _ZTVN6vendor8mediatek8hardware3vpu4V1_05BsvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_waitPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_waitPack(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu17_hidl_VS_waitPackEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_acquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_acquire(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_acquireEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_getResult_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getResult_V2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_getResult_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_acquireEiiNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_acquire(int, int, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_acquireEiiNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_tryEnqueEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_tryEnque(int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_tryEnqueEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VA_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VA_getProperty(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VA_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE */
/* Demangled: vtable for vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern void* _ZTVN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VS_getVpuStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_getVpuStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VS_getVpuStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu4pingEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::ping() */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_deInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_deInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_deInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE */
/* Demangled: VTT for vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern void* _ZTTN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_addBuffer_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_addBuffer_V2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu21_hidl_VR_addBuffer_V2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC1ERKN7android2spINS3_4IvpuEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::BnHwvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC1ERKN7android2spINS3_4IvpuEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_freeAlgoEiy */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_freeAlgo(int, unsigned long long) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_freeAlgoEiy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_getResult_V2EiiNSt3__18functionIFvbjEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getResult_V2(int, int, std::__1::function<void (bool, unsigned int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VR_getResult_V2EiiNSt3__18functionIFvbjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19VR_getInferenceInfoEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getInferenceInfo(int, int, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuInferenceInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19VR_getInferenceInfoEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::castFrom(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_setPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setProperty(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu20_hidl_VR_setPropertyEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZTv0_n12_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_12VpuBuffer_HDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_12VpuBuffer_HDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC1EN7android2spINS3_4IvpuEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::Bsvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_05BsvpuC1EN7android2spINS3_4IvpuEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_getProperty(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_getPropertyEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_05BsvpuE0_NS3_4IvpuE */
/* Demangled: construction vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu-in-vendor::mediatek::hardware::vpu::V1_0::Bsvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_05BsvpuE0_NS3_4IvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_12VpuBuffer_HDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_12VpuBuffer_HDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VA_getPortEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VA_getPort(int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VA_getPortEiiRKN7android8hardware11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_releaseEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_release(int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_releaseEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_waitReqEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_waitReq(int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_waitReqEii(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu30_hidl_VR_setPropertyMemImproveEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setPropertyMemImprove(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu30_hidl_VR_setPropertyMemImproveEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD2Ev */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VA_getPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VA_getPort(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VA_getPortEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_10VpuPort_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VS_createInstanceENSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_createInstance(std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VS_createInstanceENSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS8_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu4pingEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::ping() */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::vpu::V1_0::BnHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_getAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_getAlgo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_getAlgoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_waitReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_waitReq(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu16_hidl_VS_waitReqEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_getAlgoEiRKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_getAlgo(int, android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu10VS_getAlgoEiRKN7android8hardware11hidl_stringENSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VA_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VA_getProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VA_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu25_hidl_VR_getInferenceInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getInferenceInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuInferenceInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu25_hidl_VR_getInferenceInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbRKNS3_19VpuInferenceInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu30_hidl_VR_setPropertyMemImproveEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setPropertyMemImprove(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu30_hidl_VR_setPropertyMemImproveEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_11VpuPlane_HDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPlane_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_022readEmbeddedFromParcelERKNS3_11VpuPlane_HDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_addBufferEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_addBuffer(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12VR_addBufferEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_getAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_getAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_getAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_acquire_V3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_acquire_V3(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuModuleType_HD, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_acquire_V3EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNS3_16VpuModuleType_HDENSt3__18functionIFvbiEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_enqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_enque(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_enqueEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_getResult_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbjEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getResult_V2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, unsigned int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_getResult_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VS_unpackRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_unpackRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu22_hidl_VS_unpackRequestEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_dequeEiNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_deque(int, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_dequeEiNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuENS7_4IvpuEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::vpu::V1_0::BpHwvpu, vendor::mediatek::hardware::vpu::V1_0::Ivpu, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuENS7_4IvpuEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_flushEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_flush(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu14_hidl_VS_flushEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VR_setExtraParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_setExtraParam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu22_hidl_VR_setExtraParamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu25_hidl_VR_getInferenceInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getInferenceInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu25_hidl_VR_getInferenceInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_setPropertyMemEiiRKN7android8hardware11hidl_memoryE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setPropertyMem(int, int, android::hardware::hidl_memory const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17VR_setPropertyMemEiiRKN7android8hardware11hidl_memoryE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu9VS_runReqEiib */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_runReq(int, int, bool) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu9VS_runReqEiib(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::~BnHwvpu() */
int _ZTv0_n12_N6vendor8mediatek8hardware3vpu4V1_07BnHwvpuD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_waitPackEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_waitPack(int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_waitPackEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VR_setExtraParamEiiRKNS3_16VpuExtraParam_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setExtraParam(int, int, vendor::mediatek::hardware::vpu::V1_0::VpuExtraParam_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16VR_setExtraParamEiiRKNS3_16VpuExtraParam_HDE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VS_getVpuStatusEiNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS3_12VpuStatus_HDEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_getVpuStatus(int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::vpu::V1_0::VpuStatus_HD> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15VS_getVpuStatusEiNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS3_12VpuStatus_HDEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, std::__1::function<void (bool, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_getPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringENSt3__18functionIFvbRKNS3_14VpuProperty_HDEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_10VpuPort_HDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_10VpuPort_HDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_setPowerEiRKNS3_11VpuPower_HDEj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_setPower(int, vendor::mediatek::hardware::vpu::V1_0::VpuPower_HD const&, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu11VS_setPowerEiRKNS3_11VpuPower_HDEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_createAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbyEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_createAlgo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, android::hardware::hidl_handle const&, unsigned int, unsigned int, std::__1::function<void (bool, unsigned long long)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu19_hidl_VS_createAlgoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_11hidl_handleEjjNSt3__18functionIFvbyEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_flushEi */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_flush(int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_flushEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VS_packRequestEiRKN7android8hardware8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_packRequest(int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VS_packRequestEiRKN7android8hardware8hidl_vecIiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_getPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiNSt3__18functionIFvbRKNS6_11hidl_memoryEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_getPropertyMem(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, int, std::__1::function<void (bool, android::hardware::hidl_memory const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu23_hidl_VR_getPropertyMemEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiiNSt3__18functionIFvbRKNS6_11hidl_memoryEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE */
/* Demangled: vtable for vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTVN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_acquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_acquire(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_acquireEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_releaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_release(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu16_hidl_VS_releaseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEii(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_05Bsvpu13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Bsvpu::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_05Bsvpu13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_setPropertyEiiRKN7android8hardware11hidl_stringERKNS3_14VpuProperty_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VR_setProperty(int, int, android::hardware::hidl_string const&, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14VR_setPropertyEiiRKN7android8hardware11hidl_stringERKNS3_14VpuProperty_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_dequeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_deque(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14_hidl_VS_dequeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_waitPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VS_waitPack(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<int> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu17_hidl_VS_waitPackEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIiEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3vpu4V1_04IvpuE */
/* Demangled: vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern void* _ZTVN6vendor8mediatek8hardware3vpu4V1_04IvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_11VpuPlane_HDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::vpu::V1_0::VpuPlane_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_021writeEmbeddedToParcelERKNS3_11VpuPlane_HDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::Ivpu::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3vpu4V1_04Ivpu21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_getPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VR_getPropertyMem(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu23_hidl_VR_getPropertyMemEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_addBufferEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_addBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuPort_HD const&, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu18_hidl_VR_addBufferEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_10VpuPort_HDERKNS3_12VpuBuffer_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_setPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringERKNS3_14VpuProperty_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_setProperty(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, android::hardware::hidl_string const&, vendor::mediatek::hardware::vpu::V1_0::VpuProperty_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu20_hidl_VR_setPropertyEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS6_11hidl_stringERKNS3_14VpuProperty_HDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_enqueEiij */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::VS_enque(int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu8VS_enqueEiij(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_04IvpuE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::vpu::V1_0::Ivpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_04IvpuE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_NS3_4IvpuE */
/* Demangled: construction vtable for vendor::mediatek::hardware::vpu::V1_0::Ivpu-in-vendor::mediatek::hardware::vpu::V1_0::BpHwvpu */
extern void* _ZTCN6vendor8mediatek8hardware3vpu4V1_07BpHwvpuE0_NS3_4IvpuE;

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_acquire_V3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::_hidl_VS_acquire_V3(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpu19_hidl_VS_acquire_V3EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC2ERKN7android2spINS3_4IvpuEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BnHwvpu::BnHwvpu(android::sp<vendor::mediatek::hardware::vpu::V1_0::Ivpu> const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BnHwvpuC2ERKN7android2spINS3_4IvpuEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_addBuffer_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_12VpuBuffer_HDE */
/* Demangled: vendor::mediatek::hardware::vpu::V1_0::BpHwvpu::_hidl_VR_addBuffer_V2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::vpu::V1_0::VpuBuffer_HD const&) */
int _ZN6vendor8mediatek8hardware3vpu4V1_07BpHwvpu21_hidl_VR_addBuffer_V2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiiRKNS3_12VpuBuffer_HDE(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_VPU_1_0_H */
