/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.camera.bgservice@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.camera.bgservice@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallback13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onCompleted_1_1Eiijxii */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onCompleted_1_1(int, int, unsigned int, long long, int, int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onCompleted_1_1Eiijxii(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC1EN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC1EN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_NS3_4V1_010IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_NS3_4V1_010IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_4V1_014IEventCallbackENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_4V1_014IEventCallbackENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC1ERKN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::BnHwBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceC2ERKN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC2EN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS_4hidl4base4V1_05IBaseENS8_17BpHwEventCallbackEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setEventCallback(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService16setEventCallbackEiRKN7android2spINS3_4V1_014IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService4pingEv(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, void>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android8hardware11BpInterfaceINS4_14IEventCallbackEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_N7android8hardware11BpInterfaceINS4_14IEventCallbackEEE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE;

/* Symbol: _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::fromBinder<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback>(android::sp<android::hardware::IBinder> const&) */
int _ZN7android8hardware10fromBinderIN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackENS7_17BpHwEventCallbackENS7_17BnHwEventCallbackEEENS_2spIT_EERKNSB_INS0_7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService26_hidl_setEventCallback_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::_hidl_setEventCallback_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService26_hidl_setEventCallback_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE0_NS4_10IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceE0_NS4_10IBGServiceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC2ERKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS4_14IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS4_14IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::BpHwEventCallback(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS3_4V1_014IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE0_NS3_4V1_014IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setEventCallback_1_1(int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService20setEventCallback_1_1EiRKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_ */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> android::hardware::details::wrapPassthrough<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback, void>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback>) */
int _ZN7android8hardware7details15wrapPassthroughIN6vendor8mediatek8hardware6camera9bgservice4V1_014IEventCallbackEvEENS_2spIT_EESC_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android8hardware11BpInterfaceINS4_10IBGServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android8hardware11BpInterfaceINS4_10IBGServiceEEE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void);

/* Symbol: _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD2Ev(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_NS3_4V1_014IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_NS3_4V1_014IEventCallbackE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::BnHwEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackC1ERKN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback21notifySyspropsChangedEv(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10descriptorE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::descriptor */
extern void* _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10descriptorE;

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS7_4V1_010IBGServiceENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService>(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS7_4V1_010IBGServiceENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSE_IT0_EEPKcb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallbackE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback4pingEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::ping() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback4pingEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11onCompletedEiij */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onCompleted(int, int, unsigned int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback11onCompletedEiij(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC2EN7android2spINS4_10IBGServiceEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsBGService::BsBGService(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_111BsBGServiceC2EN7android2spINS4_10IBGServiceEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGService10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService15onLastStrongRefEPKv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackE0_N7android8hardware7IBinderE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS4_10IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS4_10IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback::BsEventCallback(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackC1EN7android2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::BpHwBGService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::~BnHwEventCallback() */
int _ZThn20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallbackD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE */
/* Demangled: VTT for vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService */
extern void* _ZTTN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS3_4V1_010IBGServiceEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spINS3_4V1_010IBGServiceEEEb(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE0_NS4_14IEventCallbackE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BsEventCallback */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_115BsEventCallbackE0_NS4_14IEventCallbackE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback21_hidl_onCompleted_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwEventCallback::_hidl_onCompleted_1_1(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BnHwEventCallback21_hidl_onCompleted_1_1EPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS3_4V1_014IEventCallbackEEEb */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback::castFrom(android::sp<vendor::mediatek::hardware::camera::bgservice::V1_0::IEventCallback> const&, bool) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_114IEventCallback8castFromERKN7android2spINS3_4V1_014IEventCallbackEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD2Ev */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD2Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> > android::hardware::details::castInterface<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGServiceENS_4hidl4base4V1_05IBaseENS8_13BpHwBGServiceEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService, vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceENS8_10IBGServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE */
/* Demangled: vtable for vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTVN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BnHwBGService::~BnHwBGService() */
int _ZTv0_n12_N6vendor8mediatek8hardware6camera9bgservice4V1_113BnHwBGServiceD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21_hidl_onCompleted_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiijxii */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::_hidl_onCompleted_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, unsigned int, long long, int, int) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback21_hidl_onCompleted_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiijxii(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService26_hidl_setEventCallback_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService::_hidl_setEventCallback_1_1(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> const&) */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGService26_hidl_setEventCallback_1_1EPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiRKNS6_2spINS4_14IEventCallbackEEE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallback15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::camera::bgservice::V1_1::IBGService::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware6camera9bgservice4V1_110IBGService21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS3_4V1_010IBGServiceE */
/* Demangled: construction vtable for vendor::mediatek::hardware::camera::bgservice::V1_0::IBGService-in-vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwBGService */
extern void* _ZTCN6vendor8mediatek8hardware6camera9bgservice4V1_113BpHwBGServiceE0_NS3_4V1_010IBGServiceE;

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::camera::bgservice::V1_1::BpHwEventCallback, vendor::mediatek::hardware::camera::bgservice::V1_1::IEventCallback, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware6camera9bgservice4V1_117BpHwEventCallbackENS8_14IEventCallbackEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_CAMERA_BGSERVICE_1_1_H */
