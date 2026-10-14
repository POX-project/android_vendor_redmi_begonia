/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.netdagent@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.netdagent@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NETDAGENT_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NETDAGENT_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE */
/* Demangled: vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent4pingEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::ping() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC2EN7android2spINS3_10INetdagentEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::BsNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC2EN7android2spINS3_10INetdagentEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC1ERKN7android2spINS3_10INetdagentEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::BnHwNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC1ERKN7android2spINS3_10INetdagentEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android8hardware11BpInterfaceINS3_10INetdagentEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android8hardware11BpInterfaceINS3_10INetdagentEEE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent4pingEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::ping() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_NS3_10INetdagentE */
/* Demangled: construction vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_NS3_10INetdagentE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagent13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagent13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::_hidl_dispatchNetdagentCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent21notifySyspropsChangedEv(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE */
/* Demangled: vtable for vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE */
/* Demangled: vtable for vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::BpHwNetdagent(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE */
/* Demangled: VTT for vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE;

/* Symbol: _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE */
/* Demangled: VTT for vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentENS7_10INetdagentEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent, vendor::mediatek::hardware::netdagent::V1_0::INetdagent, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentENS7_10INetdagentEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent20dispatchNetdagentCmdERKN7android8hardware11hidl_stringE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::dispatchNetdagentCmd(android::hardware::hidl_string const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent20dispatchNetdagentCmdERKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10descriptorE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::descriptor */
extern void* _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::_hidl_dispatchNetdagentCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagent26_hidl_dispatchNetdagentCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent4pingEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::ping() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD2Ev */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagent15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentENS_4hidl4base4V1_05IBaseENS7_13BpHwNetdagentEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> > android::hardware::details::castInterface<vendor::mediatek::hardware::netdagent::V1_0::INetdagent, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware9netdagent4V1_010INetdagentENS_4hidl4base4V1_05IBaseENS7_13BpHwNetdagentEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE */
/* Demangled: VTT for vendor::mediatek::hardware::netdagent::V1_0::INetdagent */
extern void* _ZTTN6vendor8mediatek8hardware9netdagent4V1_010INetdagentE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC1EN7android2spINS3_10INetdagentEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent::BsNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentC1EN7android2spINS3_10INetdagentEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC2ERKN7android2spINS3_10INetdagentEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::BnHwNetdagent(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentC2ERKN7android2spINS3_10INetdagentEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentE0_N7android8hardware7IBinderE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZTv0_n12_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::INetdagent::castFrom(android::sp<vendor::mediatek::hardware::netdagent::V1_0::INetdagent> const&, bool) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_010INetdagent8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::netdagent::V1_0::BpHwNetdagent::BpHwNetdagent(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware9netdagent4V1_013BpHwNetdagentC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE0_NS3_10INetdagentE */
/* Demangled: construction vtable for vendor::mediatek::hardware::netdagent::V1_0::INetdagent-in-vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent */
extern void* _ZTCN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE0_NS3_10INetdagentE;

/* Symbol: _ZTVN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE */
/* Demangled: vtable for vendor::mediatek::hardware::netdagent::V1_0::BsNetdagent */
extern void* _ZTVN6vendor8mediatek8hardware9netdagent4V1_011BsNetdagentE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::netdagent::V1_0::BnHwNetdagent::~BnHwNetdagent() */
int _ZThn20_N6vendor8mediatek8hardware9netdagent4V1_013BnHwNetdagentD0Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NETDAGENT_1_0_H */
