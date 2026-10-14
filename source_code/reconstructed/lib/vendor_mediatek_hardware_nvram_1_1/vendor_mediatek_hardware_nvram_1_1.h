/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.nvram@1.1.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.nvram@1.1.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram16AddBackupFileNumEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::AddBackupFileNum(int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram16AddBackupFileNumEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24_hidl_ResetFileToDefaultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_ResetFileToDefault(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24_hidl_ResetFileToDefaultEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram27_hidl_BackupToBinRegion_AllEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_BackupToBinRegion_All(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram27_hidl_BackupToBinRegion_AllEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram30_hidl_BackupToBinRegion_All_ExEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_BackupToBinRegion_All_Ex(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram30_hidl_BackupToBinRegion_All_ExEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEj(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram10descriptorE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::descriptor */
extern void* _ZN6vendor8mediatek8hardware5nvram4V1_16INvram10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram31_hidl_BackupToBinRegion_All_ExxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_BackupToBinRegion_All_Exx(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram31_hidl_BackupToBinRegion_All_ExxEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::nvram::V1_1::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android8hardware7IBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24BackupToBinRegion_All_ExEj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BackupToBinRegion_All_Ex(unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24BackupToBinRegion_All_ExEj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::readFileBylid(int, unsigned short, std::__1::function<void (android::hardware::hidl_string const&, int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram13readFileBylidEitNSt3__18functionIFvRKN7android8hardware11hidl_stringEiaEEE(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_17BsNvramE0_NS3_6INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_1::INvram-in-vendor::mediatek::hardware::nvram::V1_1::BsNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_17BsNvramE0_NS3_6INvramE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram10onTransactEjRKN7android8hardware6ParcelEPS7_jNSt3__18functionIFvRS7_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram24_hidl_ResetFileToDefaultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_ResetFileToDefault(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram24_hidl_ResetFileToDefaultEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::ReadFileVerInfo(int, std::__1::function<void (int, int, int)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15ReadFileVerInfoEiNSt3__18functionIFviiiEEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_17BsNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_1::BsNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_17BsNvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram24registerForNotificationsERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEERKN7android2spINSE_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram19_hidl_readFileBylidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_readFileBylid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram19_hidl_readFileBylidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramC2ERKN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramC2ERKN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18ResetFileToDefaultEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::ResetFileToDefault(int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18ResetFileToDefaultEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21_hidl_BackupAll_NvRamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_BackupAll_NvRam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21_hidl_BackupAll_NvRamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21_hidl_ReadFileVerInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFviiiEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_ReadFileVerInfo(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (int, int, int)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21_hidl_ReadFileVerInfoEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEiNSt3__18functionIFviiiEEE(void);

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvramC1EN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvramC1EN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS8_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BackupData_Special(android::hardware::hidl_vec<unsigned char> const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18BackupData_SpecialERKN7android8hardware8hidl_vecIhEEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramC1ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram10getServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram19_hidl_readFileBylidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEitNSt3__18functionIFvRKNS6_11hidl_stringEiaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_readFileBylid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned short, std::__1::function<void (android::hardware::hidl_string const&, int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram19_hidl_readFileBylidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEitNSt3__18functionIFvRKNS6_11hidl_stringEiaEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BpHwNvram(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramC2ERKN7android2spINS5_8hardware7IBinderEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZThn20_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram5debugERKN7android8hardware11hidl_handleERKNS6_8hidl_vecINS6_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram20_hidl_writeFileBylidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEitRKNS6_8hidl_vecIhEENSt3__18functionIFviaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_writeFileBylid(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned short, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram20_hidl_writeFileBylidEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEitRKNS6_8hidl_vecIhEENSt3__18functionIFviaEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spIS4_EEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::castFrom(android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spIS4_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZThn20_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram20_hidl_writeFileBylidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_writeFileBylid(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram20_hidl_writeFileBylidEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram24_hidl_BackupData_SpecialEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_BackupData_Special(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram24_hidl_BackupData_SpecialEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram22_hidl_AddBackupFileNumEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_AddBackupFileNum(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram22_hidl_AddBackupFileNumEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_16INvramENS6_4V1_06INvramENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> > android::hardware::details::castInterface<vendor::mediatek::hardware::nvram::V1_1::INvram, vendor::mediatek::hardware::nvram::V1_0::INvram, vendor::mediatek::hardware::nvram::V1_1::BpHwNvram>(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_16INvramENS6_4V1_06INvramENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSD_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_N7android8hardware11BpInterfaceINS3_6INvramEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::nvram::V1_1::INvram>-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_N7android8hardware11BpInterfaceINS3_6INvramEEE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_NS3_6INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_1::INvram-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_NS3_6INvramE;

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_16INvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_1::INvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_16INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram13tryGetServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram17registerAsServiceERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spINS5_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram27_hidl_BackupToBinRegion_AllEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_BackupToBinRegion_All(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram27_hidl_BackupToBinRegion_AllEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD2Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::readFileByName(android::hardware::hidl_string const&, unsigned int, std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14readFileByNameERKN7android8hardware11hidl_stringEjNSt3__18functionIFvS9_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_NS2_4V1_06INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE0_NS2_4V1_06INvramE;

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram21_hidl_ReadFileVerInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_ReadFileVerInfo(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram21_hidl_ReadFileVerInfoEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram11linkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::writeFileByNamevec(android::hardware::hidl_string const&, unsigned int, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram18writeFileByNamevecERKN7android8hardware11hidl_stringEjRKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24_hidl_BackupData_SpecialEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEEjj */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_BackupData_Special(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram24_hidl_BackupData_SpecialEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BackupToBinRegion_All_Exx(android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram25BackupToBinRegion_All_ExxERKN7android8hardware8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::nvram::V1_1::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramC1ERKN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::BnHwNvram(android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramC1ERKN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spINS2_4V1_06INvramEEEb */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::castFrom(android::sp<vendor::mediatek::hardware::nvram::V1_0::INvram> const&, bool) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram8castFromERKN7android2spINS2_4V1_06INvramEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram16RestoreAll_NvRamEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::RestoreAll_NvRam() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram16RestoreAll_NvRamEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15BackupAll_NvRamEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BackupAll_NvRam() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15BackupAll_NvRamEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram15onLastStrongRefEPKv(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::nvram::V1_1::BpHwNvram, vendor::mediatek::hardware::nvram::V1_1::INvram, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramENS7_6INvramEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSD_11char_traitsIcEENSD_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram22_hidl_RestoreAll_NvRamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_RestoreAll_NvRam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram22_hidl_RestoreAll_NvRamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21BackupToBinRegion_AllEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::BackupToBinRegion_All() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21BackupToBinRegion_AllEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram31_hidl_BackupToBinRegion_All_ExxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_BackupToBinRegion_All_Exx(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, android::hardware::hidl_vec<unsigned char> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram31_hidl_BackupToBinRegion_All_ExxEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorERKNS6_8hidl_vecIhEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_16INvramE0_NS2_4V1_06INvramE */
/* Demangled: construction vtable for vendor::mediatek::hardware::nvram::V1_0::INvram-in-vendor::mediatek::hardware::nvram::V1_1::INvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_16INvramE0_NS2_4V1_06INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram21_hidl_BackupAll_NvRamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_BackupAll_NvRam(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram21_hidl_BackupAll_NvRamEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_1::BnHwNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_16INvramE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::nvram::V1_1::INvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_16INvramE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::~BnHwNvram() */
int _ZTv0_n12_N6vendor8mediatek8hardware5nvram4V1_19BnHwNvramD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::writeFileBylid(int, unsigned short, android::hardware::hidl_vec<unsigned char> const&, std::__1::function<void (int, signed char)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram14writeFileBylidEitRKN7android8hardware8hidl_vecIhEENSt3__18functionIFviaEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_16INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram> > android::hardware::details::castInterface<vendor::mediatek::hardware::nvram::V1_1::INvram, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::nvram::V1_1::BpHwNvram>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware5nvram4V1_16INvramENS_4hidl4base4V1_05IBaseENS7_9BpHwNvramEEENS0_6ReturnINS_2spIT_EEEENSF_IT0_EEPKcb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::nvram::V1_1::BnHwNvram */
extern void* _ZTCN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE0_N7android4hidl4base4V1_08BnHwBaseE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_16INvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_1::INvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_16INvramE;

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram13unlinkToDeathERKN7android2spINS5_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvram13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BsNvram::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvram13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvramC2EN7android2spINS3_6INvramEEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BsNvram::BsNvram(android::sp<vendor::mediatek::hardware::nvram::V1_1::INvram>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_17BsNvramC2EN7android2spINS3_6INvramEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram30_hidl_BackupToBinRegion_All_ExEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_BackupToBinRegion_All_Ex(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram30_hidl_BackupToBinRegion_All_ExEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_16INvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::INvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_16INvram4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram22_hidl_RestoreAll_NvRamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BpHwNvram::_hidl_RestoreAll_NvRam(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BpHwNvram22_hidl_RestoreAll_NvRamEPN7android8hardware10IInterfaceEPNS6_7details16HidlInstrumentorE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram22_hidl_AddBackupFileNumEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::_hidl_AddBackupFileNum(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram22_hidl_AddBackupFileNumEPN7android4hidl4base4V1_08BnHwBaseERKNS5_8hardware6ParcelEPSC_NSt3__18functionIFvRSC_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram4pingEv */
/* Demangled: vendor::mediatek::hardware::nvram::V1_1::BnHwNvram::ping() */
int _ZN6vendor8mediatek8hardware5nvram4V1_19BnHwNvram4pingEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE */
/* Demangled: VTT for vendor::mediatek::hardware::nvram::V1_1::BnHwNvram */
extern void* _ZTTN6vendor8mediatek8hardware5nvram4V1_19BnHwNvramE;

/* Symbol: _ZTVN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE */
/* Demangled: vtable for vendor::mediatek::hardware::nvram::V1_1::BpHwNvram */
extern void* _ZTVN6vendor8mediatek8hardware5nvram4V1_19BpHwNvramE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_NVRAM_1_1_H */
