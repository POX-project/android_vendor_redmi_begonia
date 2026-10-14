/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.atci@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.atci@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ATCI_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ATCI_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::BpHwAtcidResponse(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_N7android8hardware11BpInterfaceINS3_6IAtcidEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::atci::V1_0::IAtcid>-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_N7android8hardware11BpInterfaceINS3_6IAtcidEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::BpHwAtcidCommandHandler(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandler13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidCommandHandler::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandler13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerC1ERKN7android2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::BnHwAtcidCommandHandler(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerC1ERKN7android2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerE0_NS3_20IAtcidCommandHandlerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler-in-vendor::mediatek::hardware::atci::V1_0::BsAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerE0_NS3_20IAtcidCommandHandlerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_NS3_20IAtcidCommandHandlerE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_NS3_20IAtcidCommandHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19setResponseFunctionERKN7android2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::setResponseFunction(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19setResponseFunctionERKN7android2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android8hardware7IBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_06IAtcidE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::IAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_06IAtcidE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_07BsAtcidE0_NS3_6IAtcidE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcid-in-vendor::mediatek::hardware::atci::V1_0::BsAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_07BsAtcidE0_NS3_6IAtcidE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid25_hidl_sendCommandResponseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::_hidl_sendCommandResponse(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid25_hidl_sendCommandResponseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid10descriptorE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::descriptor */
extern void* _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid10descriptorE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseENS_4hidl4base4V1_05IBaseENS7_17BpHwAtcidResponseEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> > android::hardware::details::castInterface<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseENS_4hidl4base4V1_05IBaseENS7_17BpHwAtcidResponseEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD2Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD2Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BsAtcidCommandHandler */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse4pingEv(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid17setCommandHandlerERKN7android2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::setCommandHandler(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid17setCommandHandlerERKN7android2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BnHwAtcid */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerC1EN7android2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidCommandHandler::BsAtcidCommandHandler(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler>) */
int _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerC1EN7android2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse10descriptorE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::descriptor */
extern void* _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE;

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerENS_4hidl4base4V1_05IBaseENS7_23BpHwAtcidCommandHandlerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> > android::hardware::details::castInterface<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerENS_4hidl4base4V1_05IBaseENS7_23BpHwAtcidCommandHandlerEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::castFrom(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseE0_NS3_14IAtcidResponseE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidResponse-in-vendor::mediatek::hardware::atci::V1_0::BsAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseE0_NS3_14IAtcidResponseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid21notifySyspropsChangedEv(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid4pingEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerENS6_23BpHwAtcidCommandHandlerENS6_23BnHwAtcidCommandHandlerEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> android::hardware::fromBinder<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler, vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler, vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerENS6_23BpHwAtcidCommandHandlerENS6_23BnHwAtcidCommandHandlerEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19sendCommandResponseERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::sendCommandResponse(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid19sendCommandResponseERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_NS3_6IAtcidE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcid-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE0_NS3_6IAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD1Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::IAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid17_hidl_sendCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::_hidl_sendCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid17_hidl_sendCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_06IAtcidE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::IAtcid */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_06IAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_06IAtcidE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::IAtcid */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_06IAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler4pingEv(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse4pingEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BnHwAtcid */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD2Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::~BnHwAtcidResponse() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD2Ev */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler17_hidl_sendCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::_hidl_sendCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler17_hidl_sendCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse25_hidl_sendCommandResponseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::_hidl_sendCommandResponse(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse25_hidl_sendCommandResponseEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidC2ERKN7android2spINS3_6IAtcidEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::BnHwAtcid(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidC2ERKN7android2spINS3_6IAtcidEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::IAtcidResponse */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::BpHwAtcid(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcid13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcid::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcid13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid23_hidl_setCommandHandlerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::_hidl_setCommandHandler(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid23_hidl_setCommandHandlerEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler, void>(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD0Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_N7android8hardware11BpInterfaceINS3_20IAtcidCommandHandlerEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler>-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_N7android8hardware11BpInterfaceINS3_20IAtcidCommandHandlerEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_09BpHwAtcid15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler17_hidl_sendCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::_hidl_sendCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler17_hidl_sendCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid25_hidl_sendCommandResponseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::_hidl_sendCommandResponse(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid25_hidl_sendCommandResponseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::castFrom(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseC2EN7android2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidResponse::BsAtcidResponse(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse>) */
int _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseC2EN7android2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::BpHwAtcidResponse(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::~BnHwAtcid() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_09BnHwAtcidD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BsAtcidResponse */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseE;

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler11sendCommandERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::sendCommand(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler11sendCommandERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::BpHwAtcidCommandHandler(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse19sendCommandResponseERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::sendCommandResponse(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse19sendCommandResponseERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseC1EN7android2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidResponse::BsAtcidResponse(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse>) */
int _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponseC1EN7android2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidResponse */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcidC2EN7android2spINS3_6IAtcidEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcid::BsAtcid(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid>) */
int _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcidC2EN7android2spINS3_6IAtcidEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_06IAtcidENS_4hidl4base4V1_05IBaseENS7_9BpHwAtcidEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid> > android::hardware::details::castInterface<vendor::mediatek::hardware::atci::V1_0::IAtcid, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::atci::V1_0::BpHwAtcid>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware4atci4V1_06IAtcidENS_4hidl4base4V1_05IBaseENS7_9BpHwAtcidEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerC2ERKN7android2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::BnHwAtcidCommandHandler(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerC2ERKN7android2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid25_hidl_setResponseFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::_hidl_setResponseFunction(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid25_hidl_setResponseFunctionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse25_hidl_sendCommandResponseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::_hidl_sendCommandResponse(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse25_hidl_sendCommandResponseEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseENS7_14IAtcidResponseEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse, vendor::mediatek::hardware::atci::V1_0::IAtcidResponse, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseENS7_14IAtcidResponseEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_N7android8hardware11BpInterfaceINS3_14IAtcidResponseEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse>-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_N7android8hardware11BpInterfaceINS3_14IAtcidResponseEEE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid4pingEv(void);

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseENS6_17BpHwAtcidResponseENS6_17BnHwAtcidResponseEEENS_2spIT_EERKNSA_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> android::hardware::fromBinder<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse, vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse, vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseENS6_17BpHwAtcidResponseENS6_17BnHwAtcidResponseEEENS_2spIT_EERKNSA_INS0_7IBinderEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseEvEENS_2spIT_EESB_ */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse, void>(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware4atci4V1_014IAtcidResponseEvEENS_2spIT_EESB_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponse13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidResponse::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware4atci4V1_015BsAtcidResponse13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_07BsAtcidE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BsAtcid */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_07BsAtcidE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler4pingEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::ping() */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseC1ERKN7android2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::BnHwAtcidResponse(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseC1ERKN7android2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcidC1EN7android2spINS3_6IAtcidEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcid::BsAtcid(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid>) */
int _ZN6vendor8mediatek8hardware4atci4V1_07BsAtcidC1EN7android2spINS3_6IAtcidEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandlerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerENS7_20IAtcidCommandHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler, vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerENS7_20IAtcidCommandHandlerEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse21setHALInstrumentationEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_NS3_14IAtcidResponseE */
/* Demangled: construction vtable for vendor::mediatek::hardware::atci::V1_0::IAtcidResponse-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE0_NS3_14IAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid11sendCommandERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::sendCommand(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid11sendCommandERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandler12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidENS7_6IAtcidEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::atci::V1_0::BpHwAtcid, vendor::mediatek::hardware::atci::V1_0::IAtcid, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidENS7_6IAtcidEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid25_hidl_setResponseFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::_hidl_setResponseFunction(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcid25_hidl_setResponseFunctionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::BpHwAtcid(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandler10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZTv0_n12_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::atci::V1_0::BnHwAtcidCommandHandler::~BnHwAtcidCommandHandler() */
int _ZThn20_N6vendor8mediatek8hardware4atci4V1_023BnHwAtcidCommandHandlerD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler10descriptorE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::descriptor */
extern void* _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcid::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_06IAtcid13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid17_hidl_sendCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::_hidl_sendCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid17_hidl_sendCommandEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler::castFrom(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> const&, bool) */
int _ZN6vendor8mediatek8hardware4atci4V1_020IAtcidCommandHandler8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseC2ERKN7android2spINS3_14IAtcidResponseEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse::BnHwAtcidResponse(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidResponse> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseC2ERKN7android2spINS3_14IAtcidResponseEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidC1ERKN7android2spINS3_6IAtcidEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BnHwAtcid::BnHwAtcid(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcid> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BnHwAtcidC1ERKN7android2spINS3_6IAtcidEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::IAtcidResponse::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware4atci4V1_014IAtcidResponse14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponse11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE */
/* Demangled: VTT for vendor::mediatek::hardware::atci::V1_0::BpHwAtcidResponse */
extern void* _ZTTN6vendor8mediatek8hardware4atci4V1_017BpHwAtcidResponseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid23_hidl_setCommandHandlerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BpHwAtcid::_hidl_setCommandHandler(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler> const&) */
int _ZN6vendor8mediatek8hardware4atci4V1_09BpHwAtcid23_hidl_setCommandHandlerEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS5_2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::atci::V1_0::BpHwAtcid */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_09BpHwAtcidE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerC2EN7android2spINS3_20IAtcidCommandHandlerEEE */
/* Demangled: vendor::mediatek::hardware::atci::V1_0::BsAtcidCommandHandler::BsAtcidCommandHandler(android::sp<vendor::mediatek::hardware::atci::V1_0::IAtcidCommandHandler>) */
int _ZN6vendor8mediatek8hardware4atci4V1_021BsAtcidCommandHandlerC2EN7android2spINS3_20IAtcidCommandHandlerEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE */
/* Demangled: vtable for vendor::mediatek::hardware::atci::V1_0::BpHwAtcidCommandHandler */
extern void* _ZTVN6vendor8mediatek8hardware4atci4V1_023BpHwAtcidCommandHandlerE;

/* Symbol: _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::atci::V1_0::BnHwAtcidResponse */
extern void* _ZTCN6vendor8mediatek8hardware4atci4V1_017BnHwAtcidResponseE0_N7android8hardware7IBinderE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_ATCI_1_0_H */
