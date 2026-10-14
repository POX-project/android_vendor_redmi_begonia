/*
 * Reverse-Engineered ABI Specification for: libaudiofoundation.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: ARM (32-bit)
 * Type: Shared Hardware Library
 * Soname: libaudiofoundation.so
 */

#ifndef BEGONIA_RE_LIBAUDIOFOUNDATION_H
#define BEGONIA_RE_LIBAUDIOFOUNDATION_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZNK7android15AudioPortConfig17hasGainControllerEb */
/* Demangled: android::AudioPortConfig::hasGainController(bool) const */
int _ZNK7android15AudioPortConfig17hasGainControllerEb(void);

/* Symbol: _ZTVN7android18AudioProfileVectorE */
/* Demangled: vtable for android::AudioProfileVector */
extern void* _ZTVN7android18AudioProfileVectorE;

/* Symbol: _ZN7android22getAudioDeviceInAllSetEv */
/* Demangled: android::getAudioDeviceInAllSet() */
int _ZN7android22getAudioDeviceInAllSetEv(void);

/* Symbol: _ZTTN7android9AudioPortE */
/* Demangled: VTT for android::AudioPort */
extern void* _ZTTN7android9AudioPortE;

/* Symbol: _ZNK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_ */
/* Demangled: android::DeviceDescriptorBase::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
int _ZNK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN7android9AudioGain14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioGain::readFromParcel(android::Parcel const*) */
int _ZN7android9AudioGain14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNK7android18AudioProfileVector4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: android::AudioProfileVector::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) const */
int _ZNK7android18AudioProfileVector4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZN7android12AudioProfileC2E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_ */
/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android12AudioProfileC2E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<android::sp<android::AudioProfile>, std::__1::allocator<android::sp<android::AudioProfile> > >::__append(unsigned int) */
int _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZTCN7android20DeviceDescriptorBaseE0_NS_9AudioPortE */
/* Demangled: construction vtable for android::AudioPort-in-android::DeviceDescriptorBase */
extern void* _ZTCN7android20DeviceDescriptorBaseE0_NS_9AudioPortE;

/* Symbol: _ZTv0_n16_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE */
/* Demangled: virtual thunk to android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
int _ZTv0_n16_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android10AudioGains6equalsERKS0_ */
/* Demangled: android::AudioGains::equals(android::AudioGains const&) const */
int _ZNK7android10AudioGains6equalsERKS0_(void);

/* Symbol: _ZNK7android18AudioProfileVector17hasDynamicProfileEv */
/* Demangled: android::AudioProfileVector::hasDynamicProfile() const */
int _ZNK7android18AudioProfileVector17hasDynamicProfileEv(void);

/* Symbol: _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_ */
/* Demangled: void std::__1::vector<audio_format_t, std::__1::allocator<audio_format_t> >::__push_back_slow_path<audio_format_t>(audio_format_t&&) */
int _ZNSt3__16vectorI14audio_format_tNS_9allocatorIS1_EEE21__push_back_slow_pathIS1_EEvOT_(void);

/* Symbol: _ZThn56_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE */
/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
int _ZThn56_NK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZN7android9AudioGain16getDefaultConfigEP17audio_gain_config */
/* Demangled: android::AudioGain::getDefaultConfig(audio_gain_config*) */
int _ZN7android9AudioGain16getDefaultConfigEP17audio_gain_config(void);

/* Symbol: _ZNK7android10AudioGains13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioGains::writeToParcel(android::Parcel*) const */
int _ZNK7android10AudioGains13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZTVN7android15AudioPortConfigE */
/* Demangled: vtable for android::AudioPortConfig */
extern void* _ZTVN7android15AudioPortConfigE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC1ERKNS_19AudioDeviceTypeAddrE */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(android::AudioDeviceTypeAddr const&) */
int _ZN7android20DeviceDescriptorBaseC1ERKNS_19AudioDeviceTypeAddrE(void);

/* Symbol: _ZN7android9AudioGain11checkConfigEPK17audio_gain_config */
/* Demangled: android::AudioGain::checkConfig(audio_gain_config const*) */
int _ZN7android9AudioGain11checkConfigEPK17audio_gain_config(void);

/* Symbol: _ZN7androideqERKNS_12AudioProfileES2_ */
/* Demangled: android::operator==(android::AudioProfile const&, android::AudioProfile const&) */
int _ZN7androideqERKNS_12AudioProfileES2_(void);

/* Symbol: _ZN7android12AudioProfileC1E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_ */
/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android12AudioProfileC1E14audio_format_tRKNSt3__13setIjNS2_4lessIjEENS2_9allocatorIjEEEESA_(void);

/* Symbol: _ZTVN7android12AudioProfileE */
/* Demangled: vtable for android::AudioProfile */
extern void* _ZTVN7android12AudioProfileE;

/* Symbol: _ZN7android8toStringERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE */
/* Demangled: android::toString(std::__1::vector<android::sp<android::DeviceDescriptorBase>, std::__1::allocator<android::sp<android::DeviceDescriptorBase> > > const&) */
int _ZN7android8toStringERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE */
/* Demangled: std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::destroy(std::__1::__tree_node<unsigned int, void*>*) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE7destroyEPNS_11__tree_nodeIjPvEE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTTN7android15AudioPortConfigE */
/* Demangled: VTT for android::AudioPortConfig */
extern void* _ZTTN7android15AudioPortConfigE;

/* Symbol: _ZN7android20DeviceDescriptorBase21setEncapsulationModesEj */
/* Demangled: android::DeviceDescriptorBase::setEncapsulationModes(unsigned int) */
int _ZN7android20DeviceDescriptorBase21setEncapsulationModesEj(void);

/* Symbol: _ZTCN7android20DeviceDescriptorBaseE56_NS_15AudioPortConfigE */
/* Demangled: construction vtable for android::AudioPortConfig-in-android::DeviceDescriptorBase */
extern void* _ZTCN7android20DeviceDescriptorBaseE56_NS_15AudioPortConfigE;

/* Symbol: _ZTv0_n20_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE */
/* Demangled: virtual thunk to android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
int _ZTv0_n20_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZN7android19AudioDeviceTypeAddr14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioDeviceTypeAddr::readFromParcel(android::Parcel const*) */
int _ZN7android19AudioDeviceTypeAddr14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZThn8_N7android9AudioGain14readFromParcelEPKNS_6ParcelE */
/* Demangled: non-virtual thunk to android::AudioGain::readFromParcel(android::Parcel const*) */
int _ZThn8_N7android9AudioGain14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNK7android15AudioPortConfig6equalsERKNS_2spIS0_EE */
/* Demangled: android::AudioPortConfig::equals(android::sp<android::AudioPortConfig> const&) const */
int _ZNK7android15AudioPortConfig6equalsERKNS_2spIS0_EE(void);

/* Symbol: _ZN7android12AudioProfileC1E14audio_format_tjj */
/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, unsigned int, unsigned int) */
int _ZN7android12AudioProfileC1E14audio_format_tjj(void);

/* Symbol: _ZN7android25getAudioDeviceInAllUsbSetEv */
/* Demangled: android::getAudioDeviceInAllUsbSet() */
int _ZN7android25getAudioDeviceInAllUsbSetEv(void);

/* Symbol: _ZNK7android18AudioProfileVector16hasDynamicFormatEv */
/* Demangled: android::AudioProfileVector::hasDynamicFormat() const */
int _ZNK7android18AudioProfileVector16hasDynamicFormatEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZNK7android19AudioDeviceTypeAddr6equalsERKS0_ */
/* Demangled: android::AudioDeviceTypeAddr::equals(android::AudioDeviceTypeAddr const&) const */
int _ZNK7android19AudioDeviceTypeAddr6equalsERKS0_(void);

/* Symbol: _ZNK7android9AudioPort3logEPKc */
/* Demangled: android::AudioPort::log(char const*) const */
int _ZNK7android9AudioPort3logEPKc(void);

/* Symbol: _ZTVN7android9AudioPortE */
/* Demangled: vtable for android::AudioPort */
extern void* _ZTVN7android9AudioPortE;

/* Symbol: _ZNK7android18AudioProfileVector17hasDynamicRateForE14audio_format_t */
/* Demangled: android::AudioProfileVector::hasDynamicRateFor(audio_format_t) const */
int _ZNK7android18AudioProfileVector17hasDynamicRateForE14audio_format_t(void);

/* Symbol: _ZNK7android19AudioDeviceTypeAddrltERKS0_ */
/* Demangled: android::AudioDeviceTypeAddr::operator<(android::AudioDeviceTypeAddr const&) const */
int _ZNK7android19AudioDeviceTypeAddrltERKS0_(void);

/* Symbol: _ZN7android15AudioPortConfig20applyAudioPortConfigEPK17audio_port_configPS1_ */
/* Demangled: android::AudioPortConfig::applyAudioPortConfig(audio_port_config const*, audio_port_config*) */
int _ZN7android15AudioPortConfig20applyAudioPortConfigEPK17audio_port_configPS1_(void);

/* Symbol: _ZN7android9AudioPort14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioPort::readFromParcel(android::Parcel const*) */
int _ZN7android9AudioPort14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZN7android9AudioPort15importAudioPortERKNS_2spIS0_EEb */
/* Demangled: android::AudioPort::importAudioPort(android::sp<android::AudioPort> const&, bool) */
int _ZN7android9AudioPort15importAudioPortERKNS_2spIS0_EEb(void);

/* Symbol: _ZN7android12AudioProfile14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioProfile::readFromParcel(android::Parcel const*) */
int _ZN7android12AudioProfile14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNK7android18AudioProfileVector20getFirstValidProfileEv */
/* Demangled: android::AudioProfileVector::getFirstValidProfile() const */
int _ZNK7android18AudioProfileVector20getFirstValidProfileEv(void);

/* Symbol: _ZN7android30deviceTypeAddrsFromDescriptorsERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE */
/* Demangled: android::deviceTypeAddrsFromDescriptors(std::__1::vector<android::sp<android::DeviceDescriptorBase>, std::__1::allocator<android::sp<android::DeviceDescriptorBase> > > const&) */
int _ZN7android30deviceTypeAddrsFromDescriptorsERKNSt3__16vectorINS_2spINS_20DeviceDescriptorBaseEEENS0_9allocatorIS4_EEEE(void);

/* Symbol: _ZThn56_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE */
/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
int _ZThn56_N7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned int) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_j(void);

/* Symbol: _ZTVN7android9AudioGainE */
/* Demangled: vtable for android::AudioGain */
extern void* _ZTVN7android9AudioGainE;

/* Symbol: _ZNK7android18AudioProfileVector6equalsERKS0_ */
/* Demangled: android::AudioProfileVector::equals(android::AudioProfileVector const&) const */
int _ZNK7android18AudioProfileVector6equalsERKS0_(void);

/* Symbol: _ZNSt3__16__treeI14audio_format_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE */
/* Demangled: std::__1::__tree<audio_format_t, std::__1::less<audio_format_t>, std::__1::allocator<audio_format_t> >::destroy(std::__1::__tree_node<audio_format_t, void*>*) */
int _ZNSt3__16__treeI14audio_format_tNS_4lessIS1_EENS_9allocatorIS1_EEE7destroyEPNS_11__tree_nodeIS1_PvEE(void);

/* Symbol: _ZN7android12AudioProfile5clearEv */
/* Demangled: android::AudioProfile::clear() */
int _ZN7android12AudioProfile5clearEv(void);

/* Symbol: _ZThn8_N7android12AudioProfile14readFromParcelEPKNS_6ParcelE */
/* Demangled: non-virtual thunk to android::AudioProfile::readFromParcel(android::Parcel const*) */
int _ZThn8_N7android12AudioProfile14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__find_equal<unsigned int>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, unsigned int const&) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE12__find_equalIjEERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIjPNS_11__tree_nodeIjS8_EEiEERPNS_15__tree_end_nodeISA_EESB_RKT_(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZThn8_NK7android9AudioGain13writeToParcelEPNS_6ParcelE */
/* Demangled: non-virtual thunk to android::AudioGain::writeToParcel(android::Parcel*) const */
int _ZThn8_NK7android9AudioGain13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android9AudioPort6equalsERKNS_2spIS0_EE */
/* Demangled: android::AudioPort::equals(android::sp<android::AudioPort> const&) const */
int _ZNK7android9AudioPort6equalsERKNS_2spIS0_EE(void);

/* Symbol: _ZNK7android12AudioProfile6equalsERKNS_2spIS0_EE */
/* Demangled: android::AudioProfile::equals(android::sp<android::AudioProfile> const&) const */
int _ZNK7android12AudioProfile6equalsERKNS_2spIS0_EE(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__assign_multiINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEEvT_SD_ */
/* Demangled: void std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__assign_multi<std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int> >(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE14__assign_multiINS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEEvT_SD_(void);

/* Symbol: _ZN7android12AudioProfile17createFullDynamicE14audio_format_t */
/* Demangled: android::AudioProfile::createFullDynamic(audio_format_t) */
int _ZN7android12AudioProfile17createFullDynamicE14audio_format_t(void);

/* Symbol: _ZNK7android19AudioDeviceTypeAddr13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioDeviceTypeAddr::writeToParcel(android::Parcel*) const */
int _ZNK7android19AudioDeviceTypeAddr13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android15AudioPortConfig17toAudioPortConfigEP17audio_port_configPKS1_ */
/* Demangled: android::AudioPortConfig::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
int _ZNK7android15AudioPortConfig17toAudioPortConfigEP17audio_port_configPKS1_(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase8toStringEv */
/* Demangled: android::DeviceDescriptorBase::toString() const */
int _ZNK7android20DeviceDescriptorBase8toStringEv(void);

/* Symbol: _ZN7android10AudioGains14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioGains::readFromParcel(android::Parcel const*) */
int _ZN7android10AudioGains14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE8_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN7android19AudioDeviceTypeAddr5resetEv */
/* Demangled: android::AudioDeviceTypeAddr::reset() */
int _ZN7android19AudioDeviceTypeAddr5resetEv(void);

/* Symbol: _ZNK7android19AudioDeviceTypeAddr10getAddressEv */
/* Demangled: android::AudioDeviceTypeAddr::getAddress() const */
int _ZNK7android19AudioDeviceTypeAddr10getAddressEv(void);

/* Symbol: _ZTVN7android10AudioGainsE */
/* Demangled: vtable for android::AudioGains */
extern void* _ZTVN7android10AudioGainsE;

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_ */
/* Demangled: void std::__1::vector<android::sp<android::AudioProfile>, std::__1::allocator<android::sp<android::AudioProfile> > >::__push_back_slow_path<android::sp<android::AudioProfile> const&>(android::sp<android::AudioProfile> const&) */
int _ZNSt3__16vectorIN7android2spINS1_12AudioProfileEEENS_9allocatorIS4_EEE21__push_back_slow_pathIRKS4_EEvOT_(void);

/* Symbol: _ZNK7android9AudioGain13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioGain::writeToParcel(android::Parcel*) const */
int _ZNK7android9AudioGain13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android9AudioPort13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioPort::writeToParcel(android::Parcel*) const */
int _ZNK7android9AudioPort13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZN7android8toStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE */
/* Demangled: android::toString(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android8toStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE(void);

/* Symbol: _ZTv0_n20_N7android9AudioPort14readFromParcelEPKNS_6ParcelE */
/* Demangled: virtual thunk to android::AudioPort::readFromParcel(android::Parcel const*) */
int _ZTv0_n20_N7android9AudioPort14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZN7android12AudioProfileC2E14audio_format_tjj */
/* Demangled: android::AudioProfile::AudioProfile(audio_format_t, unsigned int, unsigned int) */
int _ZN7android12AudioProfileC2E14audio_format_tjj(void);

/* Symbol: _ZNK7android18AudioProfileVector21hasDynamicChannelsForE14audio_format_t */
/* Demangled: android::AudioProfileVector::hasDynamicChannelsFor(audio_format_t) const */
int _ZNK7android18AudioProfileVector21hasDynamicChannelsForE14audio_format_t(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC2EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android20DeviceDescriptorBaseC2EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android9AudioGain6equalsERKNS_2spIS0_EE */
/* Demangled: android::AudioGain::equals(android::sp<android::AudioGain> const&) const */
int _ZNK7android9AudioGain6equalsERKNS_2spIS0_EE(void);

/* Symbol: _ZN7android12AudioProfile11setChannelsERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE */
/* Demangled: android::AudioProfile::setChannels(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android12AudioProfile11setChannelsERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase6equalsERKNS_2spIS0_EE */
/* Demangled: android::DeviceDescriptorBase::equals(android::sp<android::DeviceDescriptorBase> const&) const */
int _ZNK7android20DeviceDescriptorBase6equalsERKNS_2spIS0_EE(void);

/* Symbol: _ZN7android26getAudioDeviceOutAllScoSetEv */
/* Demangled: android::getAudioDeviceOutAllScoSet() */
int _ZN7android26getAudioDeviceOutAllScoSetEv(void);

/* Symbol: _ZN7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::DeviceDescriptorBase::readFromParcel(android::Parcel const*) */
int _ZN7android20DeviceDescriptorBase14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZN7android20DeviceDescriptorBase29setEncapsulationMetadataTypesEj */
/* Demangled: android::DeviceDescriptorBase::setEncapsulationMetadataTypes(unsigned int) */
int _ZN7android20DeviceDescriptorBase29setEncapsulationMetadataTypesEj(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC1EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZN7android20DeviceDescriptorBaseC1EjRKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioPortConfig::readFromParcel(android::Parcel const*) */
int _ZN7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNK7android9AudioPort4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEib */
/* Demangled: android::AudioPort::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, bool) const */
int _ZNK7android9AudioPort4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEib(void);

/* Symbol: _ZTv0_n20_N7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE */
/* Demangled: virtual thunk to android::AudioPortConfig::readFromParcel(android::Parcel const*) */
int _ZTv0_n20_N7android15AudioPortConfig14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZNK7android18AudioProfileVector19getSupportedFormatsEv */
/* Demangled: android::AudioProfileVector::getSupportedFormats() const */
int _ZNK7android18AudioProfileVector19getSupportedFormatsEv(void);

/* Symbol: _ZN7android26getAudioDeviceOutAllUsbSetEv */
/* Demangled: android::getAudioDeviceOutAllUsbSet() */
int _ZN7android26getAudioDeviceOutAllUsbSetEv(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZTVN7android19AudioDeviceTypeAddrE */
/* Demangled: vtable for android::AudioDeviceTypeAddr */
extern void* _ZTVN7android19AudioDeviceTypeAddrE;

/* Symbol: _ZNSt3__16vectorIN7android19AudioDeviceTypeAddrENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_ */
/* Demangled: void std::__1::vector<android::AudioDeviceTypeAddr, std::__1::allocator<android::AudioDeviceTypeAddr> >::__push_back_slow_path<android::AudioDeviceTypeAddr const&>(android::AudioDeviceTypeAddr const&) */
int _ZNSt3__16vectorIN7android19AudioDeviceTypeAddrENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_(void);

/* Symbol: _ZNK7android9AudioPort11toAudioPortEP10audio_port */
/* Demangled: android::AudioPort::toAudioPort(audio_port*) const */
int _ZNK7android9AudioPort11toAudioPortEP10audio_port(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC1Ej */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int) */
int _ZN7android20DeviceDescriptorBaseC1Ej(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE */
/* Demangled: android::DeviceDescriptorBase::writeToParcel(android::Parcel*) const */
int _ZNK7android20DeviceDescriptorBase13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZTVN7android20DeviceDescriptorBaseE */
/* Demangled: vtable for android::DeviceDescriptorBase */
extern void* _ZTVN7android20DeviceDescriptorBaseE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZN7android12AudioProfile14setSampleRatesERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE */
/* Demangled: android::AudioProfile::setSampleRates(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android12AudioProfile14setSampleRatesERKNSt3__13setIjNS1_4lessIjEENS1_9allocatorIjEEEE(void);

/* Symbol: _ZNK7android18AudioProfileVector13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioProfileVector::writeToParcel(android::Parcel*) const */
int _ZNK7android18AudioProfileVector13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android18AudioProfileVector23getFirstValidProfileForE14audio_format_t */
/* Demangled: android::AudioProfileVector::getFirstValidProfileFor(audio_format_t) const */
int _ZNK7android18AudioProfileVector23getFirstValidProfileForE14audio_format_t(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC2Ej */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(unsigned int) */
int _ZN7android20DeviceDescriptorBaseC2Ej(void);

/* Symbol: _ZN7android19getAudioDeviceTypesERKNSt3__16vectorINS_19AudioDeviceTypeAddrENS0_9allocatorIS2_EEEE */
/* Demangled: android::getAudioDeviceTypes(std::__1::vector<android::AudioDeviceTypeAddr, std::__1::allocator<android::AudioDeviceTypeAddr> > const&) */
int _ZN7android19getAudioDeviceTypesERKNSt3__16vectorINS_19AudioDeviceTypeAddrENS0_9allocatorIS2_EEEE(void);

/* Symbol: _ZN7android9AudioGainC2Eib */
/* Demangled: android::AudioGain::AudioGain(int, bool) */
int _ZN7android9AudioGainC2Eib(void);

/* Symbol: _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE26__emplace_hint_unique_implIJRiEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEEiEENS_21__tree_const_iteratorIjSC_iEEDpOT_ */
/* Demangled: std::__1::__tree_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int> std::__1::__tree<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> >::__emplace_hint_unique_impl<int&>(std::__1::__tree_const_iterator<unsigned int, std::__1::__tree_node<unsigned int, void*>*, int>, int&) */
int _ZNSt3__16__treeIjNS_4lessIjEENS_9allocatorIjEEE26__emplace_hint_unique_implIJRiEEENS_15__tree_iteratorIjPNS_11__tree_nodeIjPvEEiEENS_21__tree_const_iteratorIjSC_iEEDpOT_(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase11toAudioPortEP10audio_port */
/* Demangled: android::DeviceDescriptorBase::toAudioPort(audio_port*) const */
int _ZNK7android20DeviceDescriptorBase11toAudioPortEP10audio_port(void);

/* Symbol: _ZN7android19deviceTypesToStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS4_IcEEEE */
/* Demangled: android::deviceTypesToString(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN7android19deviceTypesToStringERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEERNS0_12basic_stringIcNS0_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZN7android9AudioGainC1Eib */
/* Demangled: android::AudioGain::AudioGain(int, bool) */
int _ZN7android9AudioGainC1Eib(void);

/* Symbol: _ZNSt3__16vectorIN7android2spINS1_9AudioGainEEENS_9allocatorIS4_EEE8__appendEj */
/* Demangled: std::__1::vector<android::sp<android::AudioGain>, std::__1::allocator<android::sp<android::AudioGain> > >::__append(unsigned int) */
int _ZNSt3__16vectorIN7android2spINS1_9AudioGainEEENS_9allocatorIS4_EEE8__appendEj(void);

/* Symbol: _ZTv0_n16_NK7android9AudioPort13writeToParcelEPNS_6ParcelE */
/* Demangled: virtual thunk to android::AudioPort::writeToParcel(android::Parcel*) const */
int _ZTv0_n16_NK7android9AudioPort13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZThn8_NK7android12AudioProfile13writeToParcelEPNS_6ParcelE */
/* Demangled: non-virtual thunk to android::AudioProfile::writeToParcel(android::Parcel*) const */
int _ZThn8_NK7android12AudioProfile13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZN7android18AudioProfileVector13clearProfilesEv */
/* Demangled: android::AudioProfileVector::clearProfiles() */
int _ZN7android18AudioProfileVector13clearProfilesEv(void);

/* Symbol: _ZN7android18AudioProfileVector14readFromParcelEPKNS_6ParcelE */
/* Demangled: android::AudioProfileVector::readFromParcel(android::Parcel const*) */
int _ZN7android18AudioProfileVector14readFromParcelEPKNS_6ParcelE(void);

/* Symbol: _ZTVN7android10ParcelableE */
/* Demangled: vtable for android::Parcelable */
extern void* _ZTVN7android10ParcelableE;

/* Symbol: _ZN7android27getAudioDeviceOutAllA2dpSetEv */
/* Demangled: android::getAudioDeviceOutAllA2dpSet() */
int _ZN7android27getAudioDeviceOutAllA2dpSetEv(void);

/* Symbol: _ZNK7android9AudioGain4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEii */
/* Demangled: android::AudioGain::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, int) const */
int _ZNK7android9AudioGain4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEii(void);

/* Symbol: _ZNK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioPortConfig::writeToParcel(android::Parcel*) const */
int _ZNK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZN7android23getAudioDeviceOutAllSetEv */
/* Demangled: android::getAudioDeviceOutAllSet() */
int _ZN7android23getAudioDeviceOutAllSetEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN7android20DeviceDescriptorBaseC2ERKNS_19AudioDeviceTypeAddrE */
/* Demangled: android::DeviceDescriptorBase::DeviceDescriptorBase(android::AudioDeviceTypeAddr const&) */
int _ZN7android20DeviceDescriptorBaseC2ERKNS_19AudioDeviceTypeAddrE(void);

/* Symbol: _ZTTN7android20DeviceDescriptorBaseE */
/* Demangled: VTT for android::DeviceDescriptorBase */
extern void* _ZTTN7android20DeviceDescriptorBaseE;

/* Symbol: _ZN7android18AudioProfileVector3addERKNS_2spINS_12AudioProfileEEE */
/* Demangled: android::AudioProfileVector::add(android::sp<android::AudioProfile> const&) */
int _ZN7android18AudioProfileVector3addERKNS_2spINS_12AudioProfileEEE(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiPKcb */
/* Demangled: android::DeviceDescriptorBase::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int, int, char const*, bool) const */
int _ZNK7android20DeviceDescriptorBase4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEiiPKcb(void);

/* Symbol: _ZN7android15dumpDeviceTypesERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE */
/* Demangled: android::dumpDeviceTypes(std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > const&) */
int _ZN7android15dumpDeviceTypesERKNSt3__13setIjNS0_4lessIjEENS0_9allocatorIjEEEE(void);

/* Symbol: _ZTv0_n16_NK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE */
/* Demangled: virtual thunk to android::AudioPortConfig::writeToParcel(android::Parcel*) const */
int _ZTv0_n16_NK7android15AudioPortConfig13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android12AudioProfile13writeToParcelEPNS_6ParcelE */
/* Demangled: android::AudioProfile::writeToParcel(android::Parcel*) const */
int _ZNK7android12AudioProfile13writeToParcelEPNS_6ParcelE(void);

/* Symbol: _ZNK7android12AudioProfile4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi */
/* Demangled: android::AudioProfile::dump(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*, int) const */
int _ZNK7android12AudioProfile4dumpEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEi(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE */
int _ZNSt3__16vectorIiNS_9allocatorIiEEEC2INS_21__tree_const_iteratorIjPNS_11__tree_nodeIjPvEEiEEEET_NS_9enable_ifIXaasr21__is_forward_iteratorISB_EE5valuesr16is_constructibleIiNS_15iterator_traitsISB_E9referenceEEE5valueESB_E4typeE(void);

/* Symbol: _ZNK7android20DeviceDescriptorBase3logEv */
/* Demangled: android::DeviceDescriptorBase::log() const */
int _ZNK7android20DeviceDescriptorBase3logEv(void);

/* Symbol: _ZThn56_NK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_ */
/* Demangled: non-virtual thunk to android::DeviceDescriptorBase::toAudioPortConfig(audio_port_config*, audio_port_config const*) const */
int _ZThn56_NK7android20DeviceDescriptorBase17toAudioPortConfigEP17audio_port_configPKS1_(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBAUDIOFOUNDATION_H */
