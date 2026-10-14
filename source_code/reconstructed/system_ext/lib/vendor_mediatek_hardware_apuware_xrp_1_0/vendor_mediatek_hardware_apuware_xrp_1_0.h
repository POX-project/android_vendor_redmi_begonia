/*
 * Reverse-Engineered ABI Specification for: vendor.mediatek.hardware.apuware.xrp@1.0.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: vendor.mediatek.hardware.apuware.xrp@1.0.so
 */

#ifndef BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_XRP_1_0_H
#define BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_XRP_1_0_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17PrepareXrpCommandEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::PrepareXrpCommand(int, unsigned long long, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17PrepareXrpCommandEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18FinalizeXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::FinalizeXrpCommand(int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18FinalizeXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_NS4_10INeuronXrpE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_NS4_10INeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10descriptorE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::descriptor */
extern void* _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10descriptorE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21setHALInstrumentationEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_FinalizeXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17DeleteXrpInstanceEi */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::DeleteXrpInstance(int) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17DeleteXrpInstanceEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_DeleteXrpInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEi(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_021writeEmbeddedToParcelERKNS4_17XRP_BufferInfo_HDEPN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::writeEmbeddedToParcel(vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, android::hardware::Parcel*, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_021writeEmbeddedToParcelERKNS4_17XRP_BufferInfo_HDEPN7android8hardware6ParcelEjj(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void);

/* Symbol: _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpENS_4hidl4base4V1_05IBaseENS8_13BpHwNeuronXrpEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb */
/* Demangled: android::hardware::Return<android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> > android::hardware::details::castInterface<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp, android::hidl::base::V1_0::IBase, vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp>(android::sp<android::hidl::base::V1_0::IBase>, char const*, bool) */
int _ZN7android8hardware7details13castInterfaceIN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpENS_4hidl4base4V1_05IBaseENS8_13BpHwNeuronXrpEEENS0_6ReturnINS_2spIT_EEEENSG_IT0_EEPKcb(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrp13addOnewayTaskENSt3__18functionIFvvEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::addOnewayTask(std::__1::function<void ()>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrp13addOnewayTaskENSt3__18functionIFvvEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::castFrom(android::sp<android::hidl::base::V1_0::IBase> const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spINS6_4hidl4base4V1_05IBaseEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC2EN7android2spINS4_10INeuronXrpEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::BsNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC2EN7android2spINS4_10INeuronXrpEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_GetDeviceStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetDeviceStatus(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_GetDeviceStatusEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12GetXrpBufferEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetXrpBuffer(int, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12GetXrpBufferEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC2ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::BpHwNeuronXrp(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC2ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE5eraseENS_21__tree_const_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEE(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::hardware::hidl_binder_death_recipient>, std::__1::allocator<android::sp<android::hardware::hidl_binder_death_recipient> > >::__push_back_slow_path<android::sp<android::hardware::hidl_binder_death_recipient> >(android::sp<android::hardware::hidl_binder_death_recipient>&&) */
int _ZNSt3__16vectorIN7android2spINS1_8hardware27hidl_binder_death_recipientEEENS_9allocatorIS5_EEE21__push_back_slow_pathIS5_EEvOT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware7IBinderE */
/* Demangled: construction vtable for android::hardware::IBinder-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware7IBinderE;

/* Symbol: _ZThn8_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
int _ZThn8_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::onTransact(unsigned int, android::hardware::Parcel const&, android::hardware::Parcel*, unsigned int, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp10onTransactEjRKN7android8hardware6ParcelEPS8_jNSt3__18functionIFvRS8_EEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp10getServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15GetDeviceStatusEiyNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetDeviceStatus(int, unsigned long long, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15GetDeviceStatusEiyNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::debug(android::hardware::hidl_handle const&, android::hardware::hidl_vec<android::hardware::hidl_string> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp5debugERKN7android8hardware11hidl_handleERKNS7_8hidl_vecINS7_11hidl_stringEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::erase(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int>) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE5eraseENS_21__tree_const_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android8hardware11BpInterfaceINS4_10INeuronXrpEEE */
/* Demangled: construction vtable for android::hardware::BpInterface<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android8hardware11BpInterfaceINS4_10INeuronXrpEEE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::ping() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp4pingEv(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_PrepareInternalCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21notifySyspropsChangedEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::notifySyspropsChanged() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21notifySyspropsChangedEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::tryGetService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp13tryGetServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::registerAsService(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp17registerAsServiceERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_GetPreparedRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetPreparedRequest(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp24_hidl_GetPreparedRequestEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_GetPreparedRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetPreparedRequest(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_VpuRequestInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_GetPreparedRequestEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp */
extern void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE;

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::ping() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_SyncXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_SyncXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_SyncXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp22_hidl_CreateXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp22_hidl_CreateXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_FinalizeXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24_hidl_FinalizeXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::registerForNotifications(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, android::sp<android::hidl::manager::V1_0::IServiceNotification> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp24registerForNotificationsERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEERKN7android2spINSF_4hidl7manager4V1_020IServiceNotificationEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp4pingEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::ping() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp4pingEv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::PrepareInternalCommand(int, unsigned int, unsigned int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22PrepareInternalCommandEijjNSt3__18functionIFvbRKN7android8hardware8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_022readEmbeddedFromParcelERKNS4_17XRP_BufferInfo_HDERKN7android8hardware6ParcelEjj */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::readEmbeddedFromParcel(vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, android::hardware::Parcel const&, unsigned int, unsigned int) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_022readEmbeddedFromParcelERKNS4_17XRP_BufferInfo_HDERKN7android8hardware6ParcelEjj(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_RunXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_RunXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_InferenceInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_RunXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbjEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetPreparedRequestsCount(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, unsigned int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbjEEE(void);

/* Symbol: _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev */
/* Demangled: non-virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZThn20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD1Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::getDebugInfo(std::__1::function<void (android::hidl::base::V1_0::DebugInfo const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp12getDebugInfoENSt3__18functionIFvRKN7android4hidl4base4V1_09DebugInfoEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::SyncXrpBuffer(int, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13SyncXrpBufferEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18GetPreparedRequestEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetPreparedRequest(int, unsigned long long, unsigned int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_VpuRequestInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18GetPreparedRequestEiyjNSt3__18functionIFvbRKNS4_21XRP_VpuRequestInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18_hidl_GetXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp18_hidl_GetXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEixNSt3__18functionIFvbRKNS4_17XRP_BufferInfo_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_GetDeviceStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbiEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_GetDeviceStatus(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_GetDeviceStatusEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbiEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_PrepareXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyxNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE */
/* Demangled: VTT for vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTTN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE;

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_SetupXrpDevice(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE4findIS7_EENS_15__tree_iteratorISJ_PNS_11__tree_nodeISJ_SG_EEiEERKT_(void);

/* Symbol: _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE */
/* Demangled: vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern void* _ZTVN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::interfaceChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_string> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp14interfaceChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_11hidl_stringEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_RunXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_RunXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp19_hidl_RunXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD2Ev */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD2Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp16CreateXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpCommand(int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp16CreateXrpCommandEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_CreateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_CreateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21setHALInstrumentationEv */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::setHALInstrumentation() */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21setHALInstrumentationEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, void*>*, int> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE4findIS7_EENS_15__tree_iteratorISH_PNS_11__tree_nodeISH_SE_EEiEERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE0_NS4_10INeuronXrpE */
/* Demangled: construction vtable for vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpE0_NS4_10INeuronXrpE;

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetPreparedRequestsCount(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp30_hidl_GetPreparedRequestsCountEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13RunXrpCommandEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::RunXrpCommand(int, unsigned long long, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_InferenceInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13RunXrpCommandEiyRKNS4_20XRP_InferenceInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::SetupXrpDevice(int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp14SetupXrpDeviceEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22_hidl_CreateXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned long long, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp22_hidl_CreateXrpCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiyNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24GetPreparedRequestsCountEiyNSt3__18functionIFvbjEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::GetPreparedRequestsCount(int, unsigned long long, std::__1::function<void (bool, unsigned int)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp24GetPreparedRequestsCountEiyNSt3__18functionIFvbjEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEijjNSt3__18functionIFvbRKNS7_8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_PrepareInternalCommand(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, unsigned int, unsigned int, std::__1::function<void (bool, android::hardware::hidl_vec<vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp28_hidl_PrepareInternalCommandEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEijjNSt3__18functionIFvbRKNS7_8hidl_vecINS4_17XRP_BufferInfo_HDEEEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hidl::base::V1_0::IBase> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_4hidl4base4V1_05IBaseEEEPvEEEEENS_19__map_value_compareIS7_SJ_NS_4lessIS7_EELb1EEENS5_ISJ_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISG_EERPNS_15__tree_end_nodeIST_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware9BHwBinderE */
/* Demangled: construction vtable for android::hardware::BHwBinder-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android8hardware9BHwBinderE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_SetupXrpDevice(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp20_hidl_SetupXrpDeviceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::function<android::sp<android::hardware::IBinder> (void*)> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_8functionIFN7android2spINS9_8hardware7IBinderEEEPvEEEEENS_19__map_value_compareIS7_SH_NS_4lessIS7_EELb1EEENS5_ISH_EEE12__find_equalIS7_EERPNS_16__tree_node_baseISE_EERPNS_15__tree_end_nodeISR_EERKT_(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE8_N7android8hardware11BpHwRefBaseE */
/* Demangled: construction vtable for android::hardware::BpHwRefBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE8_N7android8hardware11BpHwRefBaseE;

/* Symbol: _ZTv0_n20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::onLastStrongRef(void const*) */
int _ZTv0_n20_N6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15onLastStrongRefEPKv(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_SyncXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_SyncXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp19_hidl_SyncXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiiRKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDEEEE(void);

/* Symbol: _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev */
/* Demangled: virtual thunk to vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::~BnHwNeuronXrp() */
int _ZTv0_n12_N6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpD0Ev(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_UpdateXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::unlinkToDeath(android::sp<android::hardware::hidl_death_recipient> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp13unlinkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpInstance(int, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp17CreateXrpInstanceEiNSt3__18functionIFvbiRKN7android8hardware12MQDescriptorIhLNS9_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE4_N7android8hardware10IInterfaceE */
/* Demangled: construction vtable for android::hardware::IInterface-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpE4_N7android8hardware10IInterfaceE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::getHashChain(std::__1::function<void (android::hardware::hidl_vec<android::hardware::hidl_array<unsigned char, 32u> > const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp12getHashChainENSt3__18functionIFvRKN7android8hardware8hidl_vecINS9_10hidl_arrayIhLj32EJEEEEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_DeleteXrpInstance(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_DeleteXrpInstanceEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_PrepareXrpCommand(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp23_hidl_PrepareXrpCommandEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC1ERKN7android2spINS4_10INeuronXrpEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::BnHwNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC1ERKN7android2spINS4_10INeuronXrpEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::UpdateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15UpdateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_UpdateXrpBuffer(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp21_hidl_UpdateXrpBufferEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESH_EEE(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE0_N7android4hidl4base4V1_05IBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::IBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrpE0_N7android4hidl4base4V1_05IBaseE;

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spIS5_EEb */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::castFrom(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&, bool) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp8castFromERKN7android2spIS5_EEb(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC1EN7android2spINS4_10INeuronXrpEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BsNeuronXrp::BsNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_011BsNeuronXrpC1EN7android2spINS4_10INeuronXrpEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC2ERKN7android2spINS4_10INeuronXrpEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::BnHwNeuronXrp(android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpC2ERKN7android2spINS4_10INeuronXrpEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbiRKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::_hidl_CreateXrpInstance(android::hardware::IInterface*, android::hardware::details::HidlInstrumentor*, int, std::__1::function<void (bool, int, android::hardware::MQDescriptor<unsigned char, (android::hardware::MQFlavor)1> const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp23_hidl_CreateXrpInstanceEPN7android8hardware10IInterfaceEPNS7_7details16HidlInstrumentorEiNSt3__18functionIFvbiRKNS7_12MQDescriptorIhLNS7_8MQFlavorE1EEEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC1ERKN7android2spINS6_8hardware7IBinderEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::BpHwNeuronXrp(android::sp<android::hardware::IBinder> const&) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpC1ERKN7android2spINS6_8hardware7IBinderEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::linkToDeath(android::sp<android::hardware::hidl_death_recipient> const&, unsigned long long) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp11linkToDeathERKN7android2spINS6_8hardware20hidl_death_recipientEEEy(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp18_hidl_GetXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_GetXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp18_hidl_GetXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp::CreateXrpBuffer(int, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BUFFER_KIND_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_ACCESS_FLAGS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&, std::__1::function<void (bool, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_STATUS_HD, vendor::mediatek::hardware::apuware::xrp::V1_0::XRP_BufferInfo_HD const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrp15CreateXrpBufferEiNS4_18XRP_BUFFER_KIND_HDENS4_19XRP_ACCESS_FLAGS_HDERKNS4_17XRP_BufferInfo_HDENSt3__18functionIFvbNS4_13XRP_STATUS_HDESA_EEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp::interfaceDescriptor(std::__1::function<void (android::hardware::hidl_string const&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_010INeuronXrp19interfaceDescriptorENSt3__18functionIFvRKN7android8hardware11hidl_stringEEEE(void);

/* Symbol: _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_CreateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE */
/* Demangled: vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp::_hidl_CreateXrpBuffer(android::hidl::base::V1_0::BnHwBase*, android::hardware::Parcel const&, android::hardware::Parcel*, std::__1::function<void (android::hardware::Parcel&)>) */
int _ZN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrp21_hidl_CreateXrpBufferEPN7android4hidl4base4V1_08BnHwBaseERKNS6_8hardware6ParcelEPSD_NSt3__18functionIFvRSD_EEE(void);

/* Symbol: _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpENS8_10INeuronXrpEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb */
/* Demangled: android::sp<vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp> android::hardware::details::getServiceInternal<vendor::mediatek::hardware::apuware::xrp::V1_0::BpHwNeuronXrp, vendor::mediatek::hardware::apuware::xrp::V1_0::INeuronXrp, void, void>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, bool, bool) */
int _ZN7android8hardware7details18getServiceInternalIN6vendor8mediatek8hardware7apuware3xrp4V1_013BpHwNeuronXrpENS8_10INeuronXrpEvvEENS_2spIT0_EERKNSt3__112basic_stringIcNSE_11char_traitsIcEENSE_9allocatorIcEEEEbb(void);

/* Symbol: _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android4hidl4base4V1_08BnHwBaseE */
/* Demangled: construction vtable for android::hidl::base::V1_0::BnHwBase-in-vendor::mediatek::hardware::apuware::xrp::V1_0::BnHwNeuronXrp */
extern void* _ZTCN6vendor8mediatek8hardware7apuware3xrp4V1_013BnHwNeuronXrpE0_N7android4hidl4base4V1_08BnHwBaseE;

__END_DECLS

#endif /* BEGONIA_RE_VENDOR_MEDIATEK_HARDWARE_APUWARE_XRP_1_0_H */
