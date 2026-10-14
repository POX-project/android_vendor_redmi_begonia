/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.mms@1.3.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.mms@1.3.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_3_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_3_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::copybit(vendor::mediatek::hardware::mms::V1_0::HwCopybitParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7copybitERKNS2_4V1_014HwCopybitParamE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_04IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_04IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_24IMmsEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_24IMmsEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegencode(vendor::mediatek::hardware::mms::V1_0::HwJpegEncoderConfig const&, std::__1::function<void (unsigned long long, int)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10jpegencodeERKNS2_4V1_019HwJpegEncoderConfigENSt3__18functionIFvyiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD2Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_04IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_0::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_04IMmsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_35BsMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_3::BsMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_35BsMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_35BsMms13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware3mms4V1_35BsMms13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_37BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::mms::V1_3::BpHwMms, vendor::mediatek::hardware::mms::V1_3::IMms, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware3mms4V1_37BpHwMmsENS7_4IMmsEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_321writeEmbeddedToParcelERKNS3_10MDPParamFDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::writeEmbeddedToParcel(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_321writeEmbeddedToParcelERKNS3_10MDPParamFDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::mdp_run(vendor::mediatek::hardware::mms::V1_1::HwMDPParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms7mdp_runERKNS2_4V1_110HwMDPParamE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms26getCopybitDefaultOutFormatEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getCopybitDefaultOutFormat() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms26getCopybitDefaultOutFormatEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_34IMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_34IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC2EN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms>) */
int _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC2EN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15jpegCloseClientEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegCloseClient() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15jpegCloseClientEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18_hidl_BlitStreamFDEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_10MDPParamFDE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::_hidl_BlitStreamFD(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18_hidl_BlitStreamFDEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS3_10MDPParamFDE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms27isCopybitSupportedOutFormatEi */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::isCopybitSupportedOutFormat(int) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms27isCopybitSupportedOutFormatEi(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_0::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_04IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_322readEmbeddedFromParcelERKNS3_10MDPParamFDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::readEmbeddedFromParcel(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_322readEmbeddedFromParcelERKNS3_10MDPParamFDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC1ERKN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC1ERKN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_1::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_14IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD1Ev(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14jpegOpenClientEjj */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::jpegOpenClient(unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14jpegOpenClientEjj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android8hardware11BpInterfaceINS3_4IMmsEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::mms::V1_3::IMms>-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_N7android8hardware11BpInterfaceINS3_4IMmsEEE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZThn20_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_35BsMmsE0_NS3_4IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_3::IMms-in-vendor::mediatek::hardware::mms::V1_3::BsMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_35BsMmsE0_NS3_4IMmsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS_4hidl4base4V1_05IBaseENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_24IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_24IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms4pingEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::ping() */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18getCopybitOutUsageEj */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::getCopybitOutUsage(unsigned int) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms18getCopybitOutUsageEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZTv0_n12_N6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC1EN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BsMms::BsMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms>) */
int _ZN6vendor8mediatek8hardware3mms4V1_35BsMmsC1EN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms18_hidl_BlitStreamFDEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::_hidl_BlitStreamFD(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMms18_hidl_BlitStreamFDEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_24IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> > android::hardware::details::castInterface<vendor::mediatek::hardware::mms::V1_3::IMms, vendor::mediatek::hardware::mms::V1_2::IMms, vendor::mediatek::hardware::mms::V1_3::BpHwMms>(android::sp<vendor::mediatek::hardware::mms::V1_2::IMms>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware3mms4V1_34IMmsENS6_4V1_24IMmsENS7_7BpHwMmsEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_24IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_2::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_24IMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BpHwMms(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMmsC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10BlitStreamERKNS2_4V1_28MDPParamE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BlitStream(vendor::mediatek::hardware::mms::V1_2::MDPParam const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms10BlitStreamERKNS2_4V1_28MDPParamE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_14IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_34IMmsE0_NS2_4V1_14IMmsE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_0::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_04IMmsEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12BlitStreamFDERKNS3_10MDPParamFDE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::BlitStreamFD(vendor::mediatek::hardware::mms::V1_3::MDPParamFD const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms12BlitStreamFDERKNS3_10MDPParamFDE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms10descriptorE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::descriptor */
extern void* _ZN6vendor8mediatek8hardware3mms4V1_34IMms10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_14IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_1::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS2_4V1_14IMmsE;

/* Symbol: _ZTTN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE */
/* Demangled: VTT for vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern void* _ZTTN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE;

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::IMms::castFrom(android::sp<vendor::mediatek::hardware::mms::V1_1::IMms> const&, bool) */
int _ZN6vendor8mediatek8hardware3mms4V1_34IMms8castFromERKN7android2spINS2_4V1_14IMmsEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC2ERKN7android2spINS3_4IMmsEEE */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::BnHwMms(android::sp<vendor::mediatek::hardware::mms::V1_3::IMms> const&) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsC2ERKN7android2spINS3_4IMmsEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BnHwMms::~BnHwMms() */
int _ZN6vendor8mediatek8hardware3mms4V1_37BnHwMmsD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::mms::V1_3::BnHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BnHwMmsE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS3_4IMmsE */
/* Demangled: construction vtable for vendor::mediatek::hardware::mms::V1_3::IMms-in-vendor::mediatek::hardware::mms::V1_3::BpHwMms */
extern void* _ZTCN6vendor8mediatek8hardware3mms4V1_37BpHwMmsE0_NS3_4IMmsE;

/* Symbol: _ZTVN6vendor8mediatek8hardware3mms4V1_34IMmsE */
/* Demangled: vtable for vendor::mediatek::hardware::mms::V1_3::IMms */
extern void* _ZTVN6vendor8mediatek8hardware3mms4V1_34IMmsE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::mms::V1_3::BpHwMms::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware3mms4V1_37BpHwMms15onLastStrongRefEPKv(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_MMS_1_3_H */
