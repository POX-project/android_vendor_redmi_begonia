/*
 * Reverse-Engineered ABI Specification for: vendor.xiaomi.hardware.mtdservice@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.xiaomi.hardware.mtdservice@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MTDSERVICE_1_1_H
#define BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MTDSERVICE_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService4pingEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::ping() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService20_hidl_runExternalCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_runExternalCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService20_hidl_runExternalCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_enrollV2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_NSt3__18functionIFviSF_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_enrollV2(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_enrollV2EPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_NSt3__18functionIFviSF_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_widevine_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_widevine_load(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_widevine_loadEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_11hidl_stringESE_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceENS6_4V1_010IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService, vendor::xiaomi::hardware::mtdservice::V1_0::IMTService, vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService>(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceENS6_4V1_010IMTServiceENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11_hidl_tuiOnEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_tuiOn(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11_hidl_tuiOnEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::widevine_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16widevine_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20_hidl_persist_removeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_persist_remove(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20_hidl_persist_removeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService22_hidl_widevine_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_widevine_prepare(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService22_hidl_widevine_prepareEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_runTaCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_NSt3__18functionIFviSF_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_runTaCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_runTaCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_NSt3__18functionIFviSF_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::fido_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16fido_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_unloadTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_unloadTa(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_unloadTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14persist_removeEiRKN7android8hardware11hidl_stringE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::persist_remove(int, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14persist_removeEiRKN7android8hardware11hidl_stringE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15checkPermissionERKN7android8hardware8hidl_vecIhEESA_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::checkPermission(android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15checkPermissionERKN7android8hardware8hidl_vecIhEESA_(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> > android::hardware::details::castInterface<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService, android::hidl::base::V1_0::IBase, vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceENS_4hidl4base4V1_05IBaseENS7_13BpHwMTServiceEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceE0_NS3_10IMTServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_1::BsMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceE0_NS3_10IMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService21_hidl_checkPermissionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_checkPermission(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService21_hidl_checkPermissionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_ifaa_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_ifaa_key_dump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_ifaa_key_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceC1EN7android2spINS3_10IMTServiceEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceC1EN7android2spINS3_10IMTServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService18_hidl_persist_readEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_persist_read(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService18_hidl_persist_readEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::updateWhitelist(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15updateWhitelistEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21_hidl_checkPermissionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEESF_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_checkPermission(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21_hidl_checkPermissionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEESF_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13widevine_loadERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::widevine_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13widevine_loadERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSA_NSt3__18functionIFviSA_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::runExternalCmd(int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14runExternalCmdEiRKN7android8hardware8hidl_vecIhEEjSA_NSt3__18functionIFviSA_EEE(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService */
extern void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE;

/* Symbol: _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService18_hidl_persist_readEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_persist_read(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService18_hidl_persist_readEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20ifaa_key_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::ifaa_key_get_version() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20ifaa_key_get_versionEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE16_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE16_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::persist_read(int, android::hardware::hidl_string const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12persist_readEiRKN7android8hardware11hidl_stringENSt3__18functionIFviRKNS6_8hidl_vecIhEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService4pingEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::ping() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6loadTaEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::loadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6loadTaEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::tuiOff(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6tuiOffEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EElEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::enrollV2(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8enrollV2EiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> android::hardware::details::getServiceInternal<vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService, vendor::xiaomi::hardware::mtdservice::V1_1::IMTService, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceENS7_10IMTServiceEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE */
/* Demangled: VTT for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService */
extern void* _ZTTN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE;

/* Symbol: _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12_hidl_tuiOffEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_tuiOff(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12_hidl_tuiOffEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::ifaa_key_prepare(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService16ifaa_key_prepareENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService26_hidl_widevine_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_widevine_get_version(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService26_hidl_widevine_get_versionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mtdservice::V1_1::BsMTService */
extern void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceE;

/* Symbol: _ZThn16_N6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::onLastStrongRef(void const*) */
int _ZThn16_N6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12_hidl_tuiOffEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_tuiOff(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12_hidl_tuiOffEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15soter_set_stateEi */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::soter_set_state(int) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15soter_set_stateEi(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21notifySyspropsChangedEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::soter_generate(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14soter_generateENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_N7android8hardware11BpInterfaceINS3_10IMTServiceEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService>-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_N7android8hardware11BpInterfaceINS3_10IMTServiceEEE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceC1ERKN7android2spINS3_10IMTServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEERKT_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android8hardware7IBinderE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_NS2_4V1_010IMTServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_NS2_4V1_010IMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService4pingEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::ping() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService4pingEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::unInstallTa(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService11unInstallTaEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::widevine_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13widevine_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15soter_get_stateEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::soter_get_state() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15soter_get_stateEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::enroll(android::hardware::hidl_string const&, int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6enrollERKN7android8hardware11hidl_stringEiNSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::eccSign(unsigned int, android::hardware::hidl_string const&, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService7eccSignEjRKN7android8hardware11hidl_stringENSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService10descriptorE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::descriptor */
extern void* _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService10descriptorE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_persist_writeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_persist_write(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_persist_writeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::getFid(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6getFidENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::reload(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService6reloadERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_runTaCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_runTaCmd(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_runTaCmdEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD2Ev */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD2Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::ifaa_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13ifaa_key_loadERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_unloadTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_unloadTa(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService14_hidl_unloadTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21_hidl_updateWhitelistEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_updateWhitelist(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21_hidl_updateWhitelistEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::runTaCmd(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8runTaCmdEiRKN7android8hardware8hidl_vecIhEESA_NSt3__18functionIFviSA_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20fido_key_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::fido_key_get_version() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20fido_key_get_versionEv(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_NS3_10IMTServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_NS3_10IMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService17_hidl_unInstallTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_unInstallTa(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService17_hidl_unInstallTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_enrollV2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_enrollV2(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService14_hidl_enrollV2EPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::onLastStrongRef(void const*) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv(void);

/* Symbol: _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev */
/* Demangled: non-virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZThn32_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> const&, bool) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService15_hidl_installTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_installTa(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService15_hidl_installTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE8_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE8_N7android8hardware10IInterfaceE;

/* Symbol: _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService */
extern void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService25_hidl_getWhitelistVersionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_getWhitelistVersion(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService25_hidl_getWhitelistVersionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::fido_key_load(android::hardware::hidl_string const&, android::hardware::hidl_string const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13fido_key_loadERKN7android8hardware11hidl_stringES9_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::tuiOn(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService5tuiOnEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService9installTaEiRKN7android8hardware8hidl_vecIhEESA_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::installTa(int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService9installTaEiRKN7android8hardware8hidl_vecIhEESA_(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTService13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BsMTService::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTService13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService20_hidl_persist_removeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_persist_remove(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService20_hidl_persist_removeEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12_hidl_loadTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_loadTa(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12_hidl_loadTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceC2EN7android2spINS3_10IMTServiceEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BsMTService::BsMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_111BsMTServiceC2EN7android2spINS3_10IMTServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_persist_writeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_8hidl_vecIhEEj */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_persist_write(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&, unsigned int) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_persist_writeEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_11hidl_stringERKNS6_8hidl_vecIhEEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, long>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EElEE(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mtdservice::V1_1::IMTService */
extern void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService21_hidl_updateWhitelistEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_updateWhitelist(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService21_hidl_updateWhitelistEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20_hidl_runExternalCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEEjSF_NSt3__18functionIFviSF_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_runExternalCmd(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, android::hardware::hidl_vec<unsigned char> const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20_hidl_runExternalCmdEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEEjSF_NSt3__18functionIFviSF_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_ifaa_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_ifaa_key_dump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_ifaa_key_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_widevine_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_widevine_dump(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_widevine_dumpEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_widevine_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_widevine_dump(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19_hidl_widevine_dumpEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorENSt3__18functionIFvRKNS6_11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19getWhitelistVersionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::getWhitelistVersion() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService19getWhitelistVersionEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20widevine_get_versionEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::widevine_get_version() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService20widevine_get_versionEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService25_hidl_getWhitelistVersionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_getWhitelistVersion(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService25_hidl_getWhitelistVersionEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spINS2_4V1_010IMTServiceEEEb */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::castFrom(android::sp<vendor::xiaomi::hardware::mtdservice::V1_0::IMTService> const&, bool) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService8castFromERKN7android2spINS2_4V1_010IMTServiceEEEb(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService11_hidl_tuiOnEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_tuiOn(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService11_hidl_tuiOnEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService17_hidl_unInstallTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_unInstallTa(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService17_hidl_unInstallTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService26_hidl_widevine_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_widevine_get_version(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService26_hidl_widevine_get_versionEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::BnHwMTService(android::sp<vendor::xiaomi::hardware::mtdservice::V1_1::IMTService> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceC2ERKN7android2spINS3_10IMTServiceEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15_hidl_installTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_ */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::_hidl_installTa(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, android::hardware::hidl_vec<unsigned char> const&, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15_hidl_installTaEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiRKNS6_8hidl_vecIhEESF_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21setHALInstrumentationEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::setHALInstrumentation() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService21setHALInstrumentationEv(void);

/* Symbol: _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE */
/* Demangled: vtable for vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService */
extern void* _ZTVN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12_hidl_loadTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_loadTa(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService12_hidl_loadTaEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_widevine_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_widevine_load(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService19_hidl_widevine_loadEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD1Ev(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::BpHwMTService(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTServiceC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::xiaomi::hardware::mtdservice::V1_1::IMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService21notifySyspropsChangedEv */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::IMTService::notifySyspropsChanged() */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_110IMTService21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService22_hidl_widevine_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::_hidl_widevine_prepare(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTService22_hidl_widevine_prepareEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::ifaa_key_dump(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13ifaa_key_dumpENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE0_NS2_4V1_010IMTServiceE */
/* Demangled: construction vtable for vendor::xiaomi::hardware::mtdservice::V1_0::IMTService-in-vendor::xiaomi::hardware::mtdservice::V1_1::IMTService */
extern void* _ZTCN6vendor6xiaomi8hardware10mtdservice4V1_110IMTServiceE0_NS2_4V1_010IMTServiceE;

/* Symbol: _ZTv0_n40_N6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::onLastStrongRef(void const*) */
int _ZTv0_n40_N6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::unloadTa(int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService8unloadTaEiRKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32ul> > const&)>) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLm32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS6_8hidl_vecIhEEj */
/* Demangled: vendor::xiaomi::hardware::mtdservice::V1_1::BpHwMTService::persist_write(int, android::hardware::hidl_string const&, android::hardware::hidl_vec<unsigned char> const&, unsigned int) */
int _ZN6vendor6xiaomi8hardware10mtdservice4V1_113BpHwMTService13persist_writeEiRKN7android8hardware11hidl_stringERKNS6_8hidl_vecIhEEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EElEERKT_(void);

/* Symbol: _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev */
/* Demangled: virtual thunk to vendor::xiaomi::hardware::mtdservice::V1_1::BnHwMTService::~BnHwMTService() */
int _ZTv0_n24_N6vendor6xiaomi8hardware10mtdservice4V1_113BnHwMTServiceD0Ev(void);

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_XIAOMI_HARDWARE_MTDSERVICE_1_1_H */
