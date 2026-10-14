/*
 * Reverse-Engineered ABI Specification for: libdlbdsservice.so
 * Target Device: Xiaomi Redmi Note 8 Pro (Begonia / MT6785)
 * Architecture: AArch64 (64-bit)
 * Type: Shared Hardware Library
 * Soname: libdlbdsservice.so
 */

#ifndef BEGONIA_RE_LIBDLBDSSERVICE_H
#define BEGONIA_RE_LIBDLBDSSERVICE_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <sys/cdefs.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

/* Symbol: _ZN5dolby15ProfileEndpointC2EiNS_8EndpointENS_10PresetTypeE */
/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(int, dolby::Endpoint, dolby::PresetType) */
int _ZN5dolby15ProfileEndpointC2EiNS_8EndpointENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby10DapContext18setProfileEndpointENS_4PortERNS_15ProfileEndpointE */
/* Demangled: dolby::DapContext::setProfileEndpoint(dolby::Port, dolby::ProfileEndpoint&) */
int _ZN5dolby10DapContext18setProfileEndpointENS_4PortERNS_15ProfileEndpointE(void);

/* Symbol: _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5dolby11TagIterator17parseNodeWithNameERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEERSA_ */
/* Demangled: dolby::TagIterator::parseNodeWithName(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > const&, std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN5dolby11TagIterator17parseNodeWithNameERKNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEERSA_(void);

/* Symbol: _ZN5dolby14IeqValueSetter11getNodeNameEv */
/* Demangled: dolby::IeqValueSetter::getNodeName() */
int _ZN5dolby14IeqValueSetter11getNodeNameEv(void);

/* Symbol: _ZN5dolby17ProfileParameters12kValidParamsE */
/* Demangled: dolby::ProfileParameters::kValidParams */
extern void* _ZN5dolby17ProfileParameters12kValidParamsE;

/* Symbol: _ZN5dolby16DeviceParametersD1Ev */
/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
int _ZN5dolby16DeviceParametersD1Ev(void);

/* Symbol: _ZTVN5dolby25AudioOptimizerValueSetterE */
/* Demangled: vtable for dolby::AudioOptimizerValueSetter */
extern void* _ZTVN5dolby25AudioOptimizerValueSetterE;

/* Symbol: _ZN5dolby9DsManagerD0Ev */
/* Demangled: dolby::DsManager::~DsManager() */
int _ZN5dolby9DsManagerD0Ev(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEEE;

/* Symbol: _ZN5dolby14IeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::IeqValueSetter::IeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby14IeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby17SimpleValueSetter11getNodeNameEv */
/* Demangled: dolby::SimpleValueSetter::getNodeName() */
int _ZN5dolby17SimpleValueSetter11getNodeNameEv(void);

/* Symbol: _ZN5dolby22VirtualBassValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::VirtualBassValueSetter::VirtualBassValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby22VirtualBassValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby9DsManager17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE */
/* Demangled: dolby::DsManager::setSelectedTuning(dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby9DsManager17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE(void);

/* Symbol: _ZN7android19DolbyManagerService21isSpeakerPortraitModeEv */
/* Demangled: android::DolbyManagerService::isSpeakerPortraitMode() */
int _ZN7android19DolbyManagerService21isSpeakerPortraitModeEv(void);

/* Symbol: _ZN7android19DolbyManagerService8hasDecCPEv */
/* Demangled: android::DolbyManagerService::hasDecCP() */
int _ZN7android19DolbyManagerService8hasDecCPEv(void);

/* Symbol: _ZN5dolby16DeviceParameters12getIeqPresetEv */
/* Demangled: dolby::DeviceParameters::getIeqPreset() */
int _ZN5dolby16DeviceParameters12getIeqPresetEv(void);

/* Symbol: _ZN5dolby9DsContext18setSelectedProfileEi */
/* Demangled: dolby::DsContext::setSelectedProfile(int) */
int _ZN5dolby9DsContext18setSelectedProfileEi(void);

/* Symbol: _ZN5dolby9DsManagerC1EPNS_13DapControllerEPNS_9DsContextE */
/* Demangled: dolby::DsManager::DsManager(dolby::DapController*, dolby::DsContext*) */
int _ZN5dolby9DsManagerC1EPNS_13DapControllerEPNS_9DsContextE(void);

/* Symbol: _ZN5dolby9DsManagerC1Ev */
/* Demangled: dolby::DsManager::DsManager() */
int _ZN5dolby9DsManagerC1Ev(void);

/* Symbol: _ZN5dolby9DsContext17getSelectedTuningENS_4PortE */
/* Demangled: dolby::DsContext::getSelectedTuning(dolby::Port) */
int _ZN5dolby9DsContext17getSelectedTuningENS_4PortE(void);

/* Symbol: _ZN5dolby9DsContextD1Ev */
/* Demangled: dolby::DsContext::~DsContext() */
int _ZN5dolby9DsContextD1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE12__find_equalIS6_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISF_EERKT_(void);

/* Symbol: _ZN5dolby10DeviceData12setSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DeviceData::setSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby10DeviceData12setSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable16registerObserverEPNS_17OnDsContextChangeE */
/* Demangled: dolby::DsContextChangeObservable::registerObserver(dolby::OnDsContextChange*) */
int _ZN5dolby25DsContextChangeObservable16registerObserverEPNS_17OnDsContextChangeE(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_9IeqPresetE */
/* Demangled: dolby::Provider::create(dolby::IeqPreset*) */
int _ZN5dolby8Provider6createEPNS_9IeqPresetE(void);

/* Symbol: _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5dolby18DeAmountTranslator12getSrcParamsEv */
/* Demangled: dolby::DeAmountTranslator::getSrcParams() */
int _ZN5dolby18DeAmountTranslator12getSrcParamsEv(void);

/* Symbol: _ZTVN5dolby21VirtualBassTranslatorE */
/* Demangled: vtable for dolby::VirtualBassTranslator */
extern void* _ZTVN5dolby21VirtualBassTranslatorE;

/* Symbol: _ZN5dolby10DapContext12setIeqPresetENS_4PortERNS_9IeqPresetE */
/* Demangled: dolby::DapContext::setIeqPreset(dolby::Port, dolby::IeqPreset&) */
int _ZN5dolby10DapContext12setIeqPresetENS_4PortERNS_9IeqPresetE(void);

/* Symbol: _ZN5dolby14GeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::GeqValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby14GeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby14NodeParseUtils12parseDataRowERNS_11TagIteratorE */
/* Demangled: dolby::NodeParseUtils::parseDataRow(dolby::TagIterator&) */
int _ZN5dolby14NodeParseUtils12parseDataRowERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby17SimpleValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::SimpleValueSetter::SimpleValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby17SimpleValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN7android19DolbyManagerService23getDialogEnhancerAmountEv */
/* Demangled: android::DolbyManagerService::getDialogEnhancerAmount() */
int _ZN7android19DolbyManagerService23getDialogEnhancerAmountEv(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby11ValueSetterENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::ValueSetter*, std::__1::less<dolby::ValueSetter*>, std::__1::allocator<dolby::ValueSetter*> >::destroy(std::__1::__tree_node<dolby::ValueSetter*, void*>*) */
int _ZNSt3__16__treeIPN5dolby11ValueSetterENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZTVN5dolby16ParameterAdapter24ProfileParameterStrategyE */
/* Demangled: vtable for dolby::ParameterAdapter::ProfileParameterStrategy */
extern void* _ZTVN5dolby16ParameterAdapter24ProfileParameterStrategyE;

/* Symbol: _ZN7android19DolbyManagerService12EventHandlerD0Ev */
/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
int _ZN7android19DolbyManagerService12EventHandlerD0Ev(void);

/* Symbol: _ZN5dolby20OutputModeTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::OutputModeTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby20OutputModeTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby21VirtualBassTranslatorC2Ev */
/* Demangled: dolby::VirtualBassTranslator::VirtualBassTranslator() */
int _ZN5dolby21VirtualBassTranslatorC2Ev(void);

/* Symbol: _ZN5dolby9DsContext23getSelectedTuningDeviceENS_4PortE */
/* Demangled: dolby::DsContext::getSelectedTuningDevice(dolby::Port) */
int _ZN5dolby9DsContext23getSelectedTuningDeviceENS_4PortE(void);

/* Symbol: _ZN5dolby14DatabaseHelper17queryProfileNamesERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_ */
/* Demangled: dolby::DatabaseHelper::queryProfileNames(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper17queryProfileNamesERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEES8_(void);

/* Symbol: _ZN5dolby14DatabaseHelperD2Ev */
/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
int _ZN5dolby14DatabaseHelperD2Ev(void);

/* Symbol: _ZN5dolby10DeviceData16getFormatVersionEv */
/* Demangled: dolby::DeviceData::getFormatVersion() */
int _ZN5dolby10DeviceData16getFormatVersionEv(void);

/* Symbol: _ZN5dolby16SetterCollectionC1Ev */
/* Demangled: dolby::SetterCollection::SetterCollection() */
int _ZN5dolby16SetterCollectionC1Ev(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable13unregisterAllEv */
/* Demangled: dolby::DsContextChangeObservable::unregisterAll() */
int _ZN5dolby25DsContextChangeObservable13unregisterAllEv(void);

/* Symbol: _ZN5dolby11TagIterator8clearAllEv */
/* Demangled: dolby::TagIterator::clearAll() */
int _ZN5dolby11TagIterator8clearAllEv(void);

/* Symbol: _ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
/* Demangled: _ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_ */
int _ZNSt3__16vectorIPN5dolby16ParameterAdapter17ParameterStrategyENS_9allocatorIS4_EEE6assignIPKS4_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS4_NS_15iterator_traitsISC_E9referenceEEE5valueEvE4typeESC_SC_(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5dolby19BassMbdrcTranslatorC1Ev */
/* Demangled: dolby::BassMbdrcTranslator::BassMbdrcTranslator() */
int _ZN5dolby19BassMbdrcTranslatorC1Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJmEEEvDpOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<unsigned long>(unsigned long&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJmEEEvDpOT_(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable6onLoadERNS_9DsContextE */
/* Demangled: dolby::DsContextChangeObservable::onLoad(dolby::DsContext&) */
int _ZN5dolby25DsContextChangeObservable6onLoadERNS_9DsContextE(void);

/* Symbol: _ZN5dolby14DatabaseHelper13queryIeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9IeqPresetE */
/* Demangled: dolby::DatabaseHelper::queryIeqValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::IeqPreset*) */
int _ZN5dolby14DatabaseHelper13queryIeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9IeqPresetE(void);

/* Symbol: _ZN5dolby18RowDataValueSetter11getNodeNameEv */
/* Demangled: dolby::RowDataValueSetter::getNodeName() */
int _ZN5dolby18RowDataValueSetter11getNodeNameEv(void);

/* Symbol: _ZN5dolby18DeAmountTranslatorC1Ev */
/* Demangled: dolby::DeAmountTranslator::DeAmountTranslator() */
int _ZN5dolby18DeAmountTranslatorC1Ev(void);

/* Symbol: _ZN5dolby21VirtualBassTranslator10kSrcParamsE */
/* Demangled: dolby::VirtualBassTranslator::kSrcParams */
extern void* _ZN5dolby21VirtualBassTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby15SetParamCommand3addENS_12DapParameterEi */
/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, int) */
int _ZN5dolby15SetParamCommand3addENS_12DapParameterEi(void);

/* Symbol: _ZN5dolby8Provider11loadProfileEi */
/* Demangled: dolby::Provider::loadProfile(int) */
int _ZN5dolby8Provider11loadProfileEi(void);

/* Symbol: _ZN5dolby8Provider17commitTransactionEv */
/* Demangled: dolby::Provider::commitTransaction() */
int _ZN5dolby8Provider17commitTransactionEv(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::__find_equal<dolby::DeviceTuning*>(std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, dolby::DeviceTuning* const&) */
int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_(void);

/* Symbol: _ZN5dolby21DrcRowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::DrcRowDataValueSetter::DrcRowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby21DrcRowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby16ParameterAdapter18getParameterLengthEi */
/* Demangled: dolby::ParameterAdapter::getParameterLength(int) */
int _ZN5dolby16ParameterAdapter18getParameterLengthEi(void);

/* Symbol: _ZN5dolby9GeqPreset14getValidParamsEv */
/* Demangled: dolby::GeqPreset::getValidParams() */
int _ZN5dolby9GeqPreset14getValidParamsEv(void);

/* Symbol: _ZN5dolby9DsContext16getNumOfProfilesEv */
/* Demangled: dolby::DsContext::getNumOfProfiles() */
int _ZN5dolby9DsContext16getNumOfProfilesEv(void);

/* Symbol: _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::destroy(std::__1::__tree_node<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, void*>*) */
int _ZNSt3__16__treeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_4lessIS6_EENS4_IS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5dolby29VirtualBassSubgainValueSetter11getNodeNameEv */
/* Demangled: dolby::VirtualBassSubgainValueSetter::getNodeName() */
int _ZN5dolby29VirtualBassSubgainValueSetter11getNodeNameEv(void);

/* Symbol: _ZN7android19DolbyManagerService8setParamE15audio_devices_tN5dolby14DapParameterIdEPKij */
/* Demangled: android::DolbyManagerService::setParam(audio_devices_t, dolby::DapParameterId, int const*, unsigned int) */
int _ZN7android19DolbyManagerService8setParamE15audio_devices_tN5dolby14DapParameterIdEPKij(void);

/* Symbol: _ZN7android19DolbyManagerServiceD2Ev */
/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
int _ZN7android19DolbyManagerServiceD2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5dolby8Provider4initEv */
/* Demangled: dolby::Provider::init() */
int _ZN5dolby8Provider4initEv(void);

/* Symbol: _ZN5dolby26ComplexEqualizerTranslator10kSrcParamsE */
/* Demangled: dolby::ComplexEqualizerTranslator::kSrcParams */
extern void* _ZN5dolby26ComplexEqualizerTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby14ProfileContext5getIdEv */
/* Demangled: dolby::ProfileContext::getId() */
int _ZN5dolby14ProfileContext5getIdEv(void);

/* Symbol: _ZTVN5dolby24AudioOptimizerTranslatorE */
/* Demangled: vtable for dolby::AudioOptimizerTranslator */
extern void* _ZTVN5dolby24AudioOptimizerTranslatorE;

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::ProfileEndpoint*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void);

/* Symbol: _ZN5dolby14DatabaseHelper16beginTransactionEv */
/* Demangled: dolby::DatabaseHelper::beginTransaction() */
int _ZN5dolby14DatabaseHelper16beginTransactionEv(void);

/* Symbol: _ZN5dolby13GeqTranslator12getSrcParamsEv */
/* Demangled: dolby::GeqTranslator::getSrcParams() */
int _ZN5dolby13GeqTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby10DapContext10setProfileERNS_7ProfileE */
/* Demangled: dolby::DapContext::setProfile(dolby::Profile&) */
int _ZN5dolby10DapContext10setProfileERNS_7ProfileE(void);

/* Symbol: _ZN5dolby16DsContextManager19loadOemTuningLockedEv */
/* Demangled: dolby::DsContextManager::loadOemTuningLocked() */
int _ZN5dolby16DsContextManager19loadOemTuningLockedEv(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&>(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRS6_EEEvDpOT_(void);

/* Symbol: _ZN5dolby11TagIteratorD1Ev */
/* Demangled: dolby::TagIterator::~TagIterator() */
int _ZN5dolby11TagIteratorD1Ev(void);

/* Symbol: _ZTVN5dolby9DsManagerE */
/* Demangled: vtable for dolby::DsManager */
extern void* _ZTVN5dolby9DsManagerE;

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strERKNS_12basic_stringIcS2_S4_EE(void);

/* Symbol: _ZN5dolby11TagIteratorC2Ev */
/* Demangled: dolby::TagIterator::TagIterator() */
int _ZN5dolby11TagIteratorC2Ev(void);

/* Symbol: _ZN5dolby20MixMatrixValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::MixMatrixValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby20MixMatrixValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEE9sInstanceE */
/* Demangled: android::Singleton<dolby::DsContextManager>::sInstance */
extern void* _ZN7android9SingletonIN5dolby16DsContextManagerEE9sInstanceE;

/* Symbol: _ZN5dolby14DatabaseHelper21updateSelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_ */
/* Demangled: dolby::DatabaseHelper::updateSelectedProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper21updateSelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void);

/* Symbol: _ZN5dolby25AudioOptimizerValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::AudioOptimizerValueSetter::AudioOptimizerValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby25AudioOptimizerValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby9DsManager17getProfileNameLenEi */
/* Demangled: dolby::DsManager::getProfileNameLen(int) */
int _ZN5dolby9DsManager17getProfileNameLenEi(void);

/* Symbol: _ZN5dolby29VirtualBassSubgainValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::VirtualBassSubgainValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby29VirtualBassSubgainValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby9DsManager7getDsOnEv */
/* Demangled: dolby::DsManager::getDsOn() */
int _ZN5dolby9DsManager7getDsOnEv(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandler4stopEv */
/* Demangled: android::DolbyManagerService::EventHandler::stop() */
int _ZN7android19DolbyManagerService12EventHandler4stopEv(void);

/* Symbol: _ZTVN7android19DolbyManagerService12EventHandlerE */
/* Demangled: vtable for android::DolbyManagerService::EventHandler */
extern void* _ZTVN7android19DolbyManagerService12EventHandlerE;

/* Symbol: _ZN5dolby14ProfileContext13isGeqModifiedEv */
/* Demangled: dolby::ProfileContext::isGeqModified() */
int _ZN5dolby14ProfileContext13isGeqModifiedEv(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby14ProfileContextENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::ProfileContext*, std::__1::less<dolby::ProfileContext*>, std::__1::allocator<dolby::ProfileContext*> >::destroy(std::__1::__tree_node<dolby::ProfileContext*, void*>*) */
int _ZNSt3__16__treeIPN5dolby14ProfileContextENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby6TuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb */
/* Demangled: dolby::Tuning::Tuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool) */
int _ZN5dolby6TuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb(void);

/* Symbol: _ZN5dolby14DatabaseHelper11queryTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_6TuningE */
/* Demangled: dolby::DatabaseHelper::queryTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Tuning*) */
int _ZN5dolby14DatabaseHelper11queryTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_6TuningE(void);

/* Symbol: _ZN5dolby10DeviceDataD0Ev */
/* Demangled: dolby::DeviceData::~DeviceData() */
int _ZN5dolby10DeviceDataD0Ev(void);

/* Symbol: _ZN5dolby16TuningFileParserC2ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TuningFileParser::TuningFileParser(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby16TuningFileParserC2ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::ProfileGeqParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEiNS_8EndpointE */
/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::getParameter(dolby::DsContext*, int, dolby::Endpoint) */
int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEiNS_8EndpointE(void);

/* Symbol: _ZN5dolby9DsManager12setParameterEiiNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::DsManager::setParameter(int, int, std::__1::vector<int, std::__1::allocator<int> >) */
int _ZN5dolby9DsManager12setParameterEiiNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby9DsContext19setProfileParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE */
/* Demangled: dolby::DsContext::setProfileParameter(int, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DsContext19setProfileParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby9DsContext4loadEv */
/* Demangled: dolby::DsContext::load() */
int _ZN5dolby9DsContext4loadEv(void);

/* Symbol: _ZN5dolby16DsContextManager19getChangedSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE */
/* Demangled: dolby::DsContextManager::getChangedSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Provider*) */
int _ZN5dolby16DsContextManager19getChangedSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE(void);

/* Symbol: _ZN5dolby8Provider5resetEPNS_9GeqPresetE */
/* Demangled: dolby::Provider::reset(dolby::GeqPreset*) */
int _ZN5dolby8Provider5resetEPNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby10DeviceData12getSignatureEv */
/* Demangled: dolby::DeviceData::getSignature() */
int _ZN5dolby10DeviceData12getSignatureEv(void);

/* Symbol: _ZN5dolby10DeviceDataC1Ev */
/* Demangled: dolby::DeviceData::DeviceData() */
int _ZN5dolby10DeviceDataC1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZTVN7android19DolbyManagerService18NotificationClientE */
/* Demangled: vtable for android::DolbyManagerService::NotificationClient */
extern void* _ZTVN7android19DolbyManagerService18NotificationClientE;

/* Symbol: _ZN5dolby9DsContext10isSelectedEi */
/* Demangled: dolby::DsContext::isSelected(int) */
int _ZN5dolby9DsContext10isSelectedEi(void);

/* Symbol: _ZN5dolby8Provider12kDefaultNameE */
/* Demangled: dolby::Provider::kDefaultName */
extern void* _ZN5dolby8Provider12kDefaultNameE;

/* Symbol: _ZN5dolby10DeviceData14getToolVersionEv */
/* Demangled: dolby::DeviceData::getToolVersion() */
int _ZN5dolby10DeviceData14getToolVersionEv(void);

/* Symbol: _ZN5dolby12DeviceTuningC1ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_ */
/* Demangled: dolby::DeviceTuning::DeviceTuning(long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby12DeviceTuningC1ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void);

/* Symbol: _ZN5dolby15SetParamCommand3addENS_12DapParameterEiSt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE */
/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, int, std::initializer_list<std::__1::vector<int, std::__1::allocator<int> >*>) */
int _ZN5dolby15SetParamCommand3addENS_12DapParameterEiSt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>, std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZN5dolby14GeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::GeqValueSetter::GeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby14GeqValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby22VirtualBassValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::VirtualBassValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby22VirtualBassValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandler5startEv */
/* Demangled: android::DolbyManagerService::EventHandler::start() */
int _ZN7android19DolbyManagerService12EventHandler5startEv(void);

/* Symbol: _ZN5dolby13IeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::IeqTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby13IeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEEC1Ev */
/* Demangled: android::Singleton<dolby::DsContextManager>::Singleton() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEEC1Ev(void);

/* Symbol: _ZN5dolby16DsContextManagerC1Ev */
/* Demangled: dolby::DsContextManager::DsContextManager() */
int _ZN5dolby16DsContextManagerC1Ev(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::Provider::create(dolby::DeviceTuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider6createEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorINS_3setIPN5dolby15ProfileEndpointENS_4lessIS4_EENS_9allocatorIS4_EEEENS7_IS9_EEE8__appendEm */
/* Demangled: std::__1::vector<std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >, std::__1::allocator<std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> > > >::__append(unsigned long) */
int _ZNSt3__16vectorINS_3setIPN5dolby15ProfileEndpointENS_4lessIS4_EENS_9allocatorIS4_EEEENS7_IS9_EEE8__appendEm(void);

/* Symbol: _ZN5dolby9DsManager15createDapEffectEi */
/* Demangled: dolby::DsManager::createDapEffect(int) */
int _ZN5dolby9DsManager15createDapEffectEi(void);

/* Symbol: _ZN5dolby13GeqTranslatorC2Ev */
/* Demangled: dolby::GeqTranslator::GeqTranslator() */
int _ZN5dolby13GeqTranslatorC2Ev(void);

/* Symbol: _ZN5dolby8Provider8kOemNameE */
/* Demangled: dolby::Provider::kOemName */
extern void* _ZN5dolby8Provider8kOemNameE;

/* Symbol: _ZN5dolby14NodeParseUtils10parseValueERNS_11TagIteratorE */
/* Demangled: dolby::NodeParseUtils::parseValue(dolby::TagIterator&) */
int _ZN5dolby14NodeParseUtils10parseValueERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby26RegulatorTuningValueSetter11getNodeNameEv */
/* Demangled: dolby::RegulatorTuningValueSetter::getNodeName() */
int _ZN5dolby26RegulatorTuningValueSetter11getNodeNameEv(void);

/* Symbol: _ZN5dolby16TuningFileParserC1ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TuningFileParser::TuningFileParser(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby16TuningFileParserC1ERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby8Provider20loadProfileEndpointsEi */
/* Demangled: dolby::Provider::loadProfileEndpoints(int) */
int _ZN5dolby8Provider20loadProfileEndpointsEi(void);

/* Symbol: _ZN5dolby21DrcRowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::DrcRowDataValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby21DrcRowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZTVN5dolby7ProfileE */
/* Demangled: vtable for dolby::Profile */
extern void* _ZTVN5dolby7ProfileE;

/* Symbol: _ZN5dolby9DsContext21getSelectedProfileIeqENS_4PortE */
/* Demangled: dolby::DsContext::getSelectedProfileIeq(dolby::Port) */
int _ZN5dolby9DsContext21getSelectedProfileIeqENS_4PortE(void);

/* Symbol: _ZN7android19DolbyManagerService10onFirstRefEv */
/* Demangled: android::DolbyManagerService::onFirstRef() */
int _ZN7android19DolbyManagerService10onFirstRefEv(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClientD0Ev */
/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
int _ZN7android19DolbyManagerService18NotificationClientD0Ev(void);

/* Symbol: _ZN5dolby9DsManager22restoreCurrentProfilesEv */
/* Demangled: dolby::DsManager::restoreCurrentProfiles() */
int _ZN5dolby9DsManager22restoreCurrentProfilesEv(void);

/* Symbol: _ZN5dolby17ProfileParameters10setProfileERNS_7ProfileE */
/* Demangled: dolby::ProfileParameters::setProfile(dolby::Profile&) */
int _ZN5dolby17ProfileParameters10setProfileERNS_7ProfileE(void);

/* Symbol: _ZN5dolby17ProfileParameters12setGeqPresetERNS_9GeqPresetE */
/* Demangled: dolby::ProfileParameters::setGeqPreset(dolby::GeqPreset&) */
int _ZN5dolby17ProfileParameters12setGeqPresetERNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby15SetParamCommand11setDeviceIdEi */
/* Demangled: dolby::SetParamCommand::setDeviceId(int) */
int _ZN5dolby15SetParamCommand11setDeviceIdEi(void);

/* Symbol: _ZN5dolby8Provider13loadIeqPresetENS_10PresetTypeE */
/* Demangled: dolby::Provider::loadIeqPreset(dolby::PresetType) */
int _ZN5dolby8Provider13loadIeqPresetENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby16TuningFileParser8isParsedEv */
/* Demangled: dolby::TuningFileParser::isParsed() */
int _ZN5dolby16TuningFileParser8isParsedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE12do_constructEPvm(void);

/* Symbol: _ZN5dolby16DsContextManager26getDefaultXmlFormatVersionEv */
/* Demangled: dolby::DsContextManager::getDefaultXmlFormatVersion() */
int _ZN5dolby16DsContextManager26getDefaultXmlFormatVersionEv(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_9GeqPresetE */
/* Demangled: dolby::Provider::create(dolby::GeqPreset*) */
int _ZN5dolby8Provider6createEPNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby16TuningFileParserD1Ev */
/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
int _ZN5dolby16TuningFileParserD1Ev(void);

/* Symbol: _ZN5dolby9GeqPreset12getProfileIdEv */
/* Demangled: dolby::GeqPreset::getProfileId() */
int _ZN5dolby9GeqPreset12getProfileIdEv(void);

/* Symbol: _ZN5dolby16DeviceParametersC1EPNS_19ParamChangeObserverE */
/* Demangled: dolby::DeviceParameters::DeviceParameters(dolby::ParamChangeObserver*) */
int _ZN5dolby16DeviceParametersC1EPNS_19ParamChangeObserverE(void);

/* Symbol: _ZN5dolby8Provider11kCustomNameE */
/* Demangled: dolby::Provider::kCustomName */
extern void* _ZN5dolby8Provider11kCustomNameE;

/* Symbol: _ZTVN5dolby8ProviderE */
/* Demangled: vtable for dolby::Provider */
extern void* _ZTVN5dolby8ProviderE;

/* Symbol: _ZN5dolby20TranslatorCollection13getTranslatorENS_9ParameterE */
/* Demangled: dolby::TranslatorCollection::getTranslator(dolby::Parameter) */
int _ZN5dolby20TranslatorCollection13getTranslatorENS_9ParameterE(void);

/* Symbol: _ZNSt3__16__treeIN5dolby13AndroidDeviceENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<dolby::AndroidDevice, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<dolby::AndroidDevice> >::destroy(std::__1::__tree_node<dolby::AndroidDevice, void*>*) */
int _ZNSt3__16__treeIN5dolby13AndroidDeviceENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_9IeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::IeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_9IeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby16TuningFileParserC2Ev */
/* Demangled: dolby::TuningFileParser::TuningFileParser() */
int _ZN5dolby16TuningFileParserC2Ev(void);

/* Symbol: _ZN5dolby9DsManager21isSpeakerPortraitModeEv */
/* Demangled: dolby::DsManager::isSpeakerPortraitMode() */
int _ZN5dolby9DsManager21isSpeakerPortraitModeEv(void);

/* Symbol: _ZN7android19DolbyManagerService14getProfileNameEi */
/* Demangled: android::DolbyManagerService::getProfileName(int) */
int _ZN7android19DolbyManagerService14getProfileNameEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_compareEPKvS5_(void);

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEEE;

/* Symbol: _ZN5dolby25DsContextChangeObservableC1Ev */
/* Demangled: dolby::DsContextChangeObservable::DsContextChangeObservable() */
int _ZN5dolby25DsContextChangeObservableC1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper15updateDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: dolby::DatabaseHelper::updateDapStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby14DatabaseHelper15updateDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5dolby22VirtualBassValueSetter11getNodeNameEv */
/* Demangled: dolby::VirtualBassValueSetter::getNodeName() */
int _ZN5dolby22VirtualBassValueSetter11getNodeNameEv(void);

/* Symbol: _ZN7android19DolbyManagerService16unregisterClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij */
/* Demangled: android::DolbyManagerService::unregisterClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN7android19DolbyManagerService16unregisterClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void);

/* Symbol: _ZN5dolby7Profile14getValidParamsEv */
/* Demangled: dolby::Profile::getValidParams() */
int _ZN5dolby7Profile14getValidParamsEv(void);

/* Symbol: _ZN5dolby13DapController33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE */
/* Demangled: dolby::DapController::onSelectedProfileParameterChanged(dolby::DsContext&, dolby::Profile&) */
int _ZN5dolby13DapController33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby17OnDsContextChangeENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::OnDsContextChange*, std::__1::less<dolby::OnDsContextChange*>, std::__1::allocator<dolby::OnDsContextChange*> >::destroy(std::__1::__tree_node<dolby::OnDsContextChange*, void*>*) */
int _ZNSt3__16__treeIPN5dolby17OnDsContextChangeENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby10DeviceData19setProfileEndPointsERNSt3__13setIPNS_15ProfileEndpointENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setProfileEndPoints(std::__1::set<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >&) */
int _ZN5dolby10DeviceData19setProfileEndPointsERNSt3__13setIPNS_15ProfileEndpointENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5dolby11TagIterator15isChildrenValidEv */
/* Demangled: dolby::TagIterator::isChildrenValid() */
int _ZN5dolby11TagIterator15isChildrenValidEv(void);

/* Symbol: _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::str() const */
int _ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE3strEv(void);

/* Symbol: _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEi */
/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::getParameter(dolby::DsContext*, int) */
int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12getParameterEPNS_9DsContextEi(void);

/* Symbol: _ZTVN5dolby10DeviceDataE */
/* Demangled: vtable for dolby::DeviceData */
extern void* _ZTVN5dolby10DeviceDataE;

/* Symbol: _ZN7android19DolbyManagerService12EventHandlerC1EPN5dolby9DsManagerEPS0_ */
/* Demangled: android::DolbyManagerService::EventHandler::EventHandler(dolby::DsManager*, android::DolbyManagerService*) */
int _ZN7android19DolbyManagerService12EventHandlerC1EPN5dolby9DsManagerEPS0_(void);

/* Symbol: _ZN5dolby12DeviceTuning5getIdEv */
/* Demangled: dolby::DeviceTuning::getId() */
int _ZN5dolby12DeviceTuning5getIdEv(void);

/* Symbol: _ZN5dolby7Profile5getIdEv */
/* Demangled: dolby::Profile::getId() */
int _ZN5dolby7Profile5getIdEv(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable18unregisterObserverEPNS_17OnDsContextChangeE */
/* Demangled: dolby::DsContextChangeObservable::unregisterObserver(dolby::OnDsContextChange*) */
int _ZN5dolby25DsContextChangeObservable18unregisterObserverEPNS_17OnDsContextChangeE(void);

/* Symbol: _ZN5dolby10DeviceData16setFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DeviceData::setFormatVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby10DeviceData16setFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby6Tuning8toStringEv */
/* Demangled: dolby::Tuning::toString() */
int _ZN5dolby6Tuning8toStringEv(void);

/* Symbol: _ZN5dolby27VirtualBassEnableTranslatorC1Ev */
/* Demangled: dolby::VirtualBassEnableTranslator::VirtualBassEnableTranslator() */
int _ZN5dolby27VirtualBassEnableTranslatorC1Ev(void);

/* Symbol: _ZN5dolby8ProviderD1Ev */
/* Demangled: dolby::Provider::~Provider() */
int _ZN5dolby8ProviderD1Ev(void);

/* Symbol: _ZN5dolby29VirtualBassSubgainValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::VirtualBassSubgainValueSetter::VirtualBassSubgainValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby29VirtualBassSubgainValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN7android19DolbyManagerService21getVolumeLevelerAountEv */
/* Demangled: android::DolbyManagerService::getVolumeLevelerAount() */
int _ZN7android19DolbyManagerService21getVolumeLevelerAountEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5dolby9DsContext19getProfileParameterEiNS_8EndpointENS_9ParameterE */
/* Demangled: dolby::DsContext::getProfileParameter(int, dolby::Endpoint, dolby::Parameter) */
int _ZN5dolby9DsContext19getProfileParameterEiNS_8EndpointENS_9ParameterE(void);

/* Symbol: _ZN5dolby8Provider8setDapOnEb */
/* Demangled: dolby::Provider::setDapOn(bool) */
int _ZN5dolby8Provider8setDapOnEb(void);

/* Symbol: _ZN5dolby15ProfileEndpoint12getProfileIdEv */
/* Demangled: dolby::ProfileEndpoint::getProfileId() */
int _ZN5dolby15ProfileEndpoint12getProfileIdEv(void);

/* Symbol: _ZN5dolby10DapContext14kPortForDeviceE */
/* Demangled: dolby::DapContext::kPortForDevice */
extern void* _ZN5dolby10DapContext14kPortForDeviceE;

/* Symbol: _ZN5dolby13DapControllerD0Ev */
/* Demangled: dolby::DapController::~DapController() */
int _ZN5dolby13DapControllerD0Ev(void);

/* Symbol: _ZN5dolby8ProviderC2Ev */
/* Demangled: dolby::Provider::Provider() */
int _ZN5dolby8ProviderC2Ev(void);

/* Symbol: _ZN5dolby9DapEffectD2Ev */
/* Demangled: dolby::DapEffect::~DapEffect() */
int _ZN5dolby9DapEffectD2Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper24insertConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_ */
/* Demangled: dolby::DatabaseHelper::insertConfigurationValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper24insertConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void);

/* Symbol: _ZN5dolby8Provider18loadDefaultProfileEi */
/* Demangled: dolby::Provider::loadDefaultProfile(int) */
int _ZN5dolby8Provider18loadDefaultProfileEi(void);

/* Symbol: _ZN5dolby14GeqValueSetter11getNodeNameEv */
/* Demangled: dolby::GeqValueSetter::getNodeName() */
int _ZN5dolby14GeqValueSetter11getNodeNameEv(void);

/* Symbol: _ZN5dolby9DsContext17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb */
/* Demangled: dolby::DsContext::setSelectedTuning(dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby9DsContext17setSelectedTuningENS_4PortENSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEb(void);

/* Symbol: _ZN7android19DolbyManagerService11getDapParamEPvjS1_j */
/* Demangled: android::DolbyManagerService::getDapParam(void*, unsigned int, void*, unsigned int) */
int _ZN7android19DolbyManagerService11getDapParamEPvjS1_j(void);

/* Symbol: _ZTVN5dolby6TuningE */
/* Demangled: vtable for dolby::Tuning */
extern void* _ZTVN5dolby6TuningE;

/* Symbol: _ZN5dolby14DatabaseHelper11createTableENS_9TableTypeE */
/* Demangled: dolby::DatabaseHelper::createTable(dolby::TableType) */
int _ZN5dolby14DatabaseHelper11createTableENS_9TableTypeE(void);

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::Tuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby8Provider7isDapOnEv */
/* Demangled: dolby::Provider::isDapOn() */
int _ZN5dolby8Provider7isDapOnEv(void);

/* Symbol: _ZN5dolby11TagIterator13isElementNodeEv */
/* Demangled: dolby::TagIterator::isElementNode() */
int _ZN5dolby11TagIterator13isElementNodeEv(void);

/* Symbol: _ZN5dolby17ProfileParametersC2EPNS_19ParamChangeObserverE */
/* Demangled: dolby::ProfileParameters::ProfileParameters(dolby::ParamChangeObserver*) */
int _ZN5dolby17ProfileParametersC2EPNS_19ParamChangeObserverE(void);

/* Symbol: _ZN5dolby9DsContext19selectDefaultTuningENS_4PortE */
/* Demangled: dolby::DsContext::selectDefaultTuning(dolby::Port) */
int _ZN5dolby9DsContext19selectDefaultTuningENS_4PortE(void);

/* Symbol: _ZN5dolby9DsContext20isProfileGeqModifiedEi */
/* Demangled: dolby::DsContext::isProfileGeqModified(int) */
int _ZN5dolby9DsContext20isProfileGeqModifiedEi(void);

/* Symbol: _ZN5dolby9DsManager18getSelectedProfileEv */
/* Demangled: dolby::DsManager::getSelectedProfile() */
int _ZN5dolby9DsManager18getSelectedProfileEv(void);

/* Symbol: _ZN5dolby16DeviceParameters9getTuningEv */
/* Demangled: dolby::DeviceParameters::getTuning() */
int _ZN5dolby16DeviceParameters9getTuningEv(void);

/* Symbol: _ZN5dolby18RowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::RowDataValueSetter::RowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby18RowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
/* Demangled: _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_ */
int _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE6assignIPS2_EENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIS2_NS_15iterator_traitsIS9_E9referenceEEE5valueEvE4typeES9_S9_(void);

/* Symbol: _ZN5dolby14DatabaseHelperC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::DatabaseHelper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelperC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby6Tuning14getValidParamsEv */
/* Demangled: dolby::Tuning::getValidParams() */
int _ZN5dolby6Tuning14getValidParamsEv(void);

/* Symbol: _ZN5dolby8Provider10kSignatureE */
/* Demangled: dolby::Provider::kSignature */
extern void* _ZN5dolby8Provider10kSignatureE;

/* Symbol: _ZN5dolby17ProfileParametersD1Ev */
/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
int _ZN5dolby17ProfileParametersD1Ev(void);

/* Symbol: _ZN5dolby13IeqTranslator10kSrcParamsE */
/* Demangled: dolby::IeqTranslator::kSrcParams */
extern void* _ZN5dolby13IeqTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby19ParameterTranslatorC2Ev */
/* Demangled: dolby::ParameterTranslator::ParameterTranslator() */
int _ZN5dolby19ParameterTranslatorC2Ev(void);

/* Symbol: _ZN5dolby10DapContextD2Ev */
/* Demangled: dolby::DapContext::~DapContext() */
int _ZN5dolby10DapContextD2Ev(void);

/* Symbol: _ZN5dolby14IeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::IeqValueSetter::IeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby14IeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby12DeviceTuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_ */
/* Demangled: dolby::DeviceTuning::DeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby12DeviceTuningC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void);

/* Symbol: _ZN5dolby16DeviceParameters12setIeqPresetERNS_9IeqPresetE */
/* Demangled: dolby::DeviceParameters::setIeqPreset(dolby::IeqPreset&) */
int _ZN5dolby16DeviceParameters12setIeqPresetERNS_9IeqPresetE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long>, std::__1::__tree_const_iterator<dolby::Tuning*, std::__1::__tree_node<dolby::Tuning*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZN5dolby17ProfileParameters10getProfileEv */
/* Demangled: dolby::ProfileParameters::getProfile() */
int _ZN5dolby17ProfileParameters10getProfileEv(void);

/* Symbol: _ZN5dolby17ProfileParameters12getGeqPresetEv */
/* Demangled: dolby::ProfileParameters::getGeqPreset() */
int _ZN5dolby17ProfileParameters12getGeqPresetEv(void);

/* Symbol: _ZN5dolby10DapContext14kDeviceForPortE */
/* Demangled: dolby::DapContext::kDeviceForPort */
extern void* _ZN5dolby10DapContext14kDeviceForPortE;

/* Symbol: _ZN5dolby8Provider5resetEPNS_15ProfileEndpointE */
/* Demangled: dolby::Provider::reset(dolby::ProfileEndpoint*) */
int _ZN5dolby8Provider5resetEPNS_15ProfileEndpointE(void);

/* Symbol: _ZN5dolby18DeAmountTranslator10kSrcParamsE */
/* Demangled: dolby::DeAmountTranslator::kSrcParams */
extern void* _ZN5dolby18DeAmountTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby19CustomDRCTranslatorC1Ev */
/* Demangled: dolby::CustomDRCTranslator::CustomDRCTranslator() */
int _ZN5dolby19CustomDRCTranslatorC1Ev(void);

/* Symbol: _ZN5dolby20TranslatorCollectionC1Ev */
/* Demangled: dolby::TranslatorCollection::TranslatorCollection() */
int _ZN5dolby20TranslatorCollectionC1Ev(void);

/* Symbol: _ZN5dolby9DapEffect7receiveEiRNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::DapEffect::receive(int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DapEffect7receiveEiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZTVN5dolby16ParameterAdapterE */
/* Demangled: vtable for dolby::ParameterAdapter */
extern void* _ZTVN5dolby16ParameterAdapterE;

/* Symbol: _ZN5dolby13DapController14onDapOnChangedERNS_9DsContextEb */
/* Demangled: dolby::DapController::onDapOnChanged(dolby::DsContext&, bool) */
int _ZN5dolby13DapController14onDapOnChangedERNS_9DsContextEb(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable14onDapOnChangedERNS_9DsContextEb */
/* Demangled: dolby::DsContextChangeObservable::onDapOnChanged(dolby::DsContext&, bool) */
int _ZN5dolby25DsContextChangeObservable14onDapOnChangedERNS_9DsContextEb(void);

/* Symbol: _ZN5dolby14DatabaseHelper17queryProfileValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_7ProfileE */
/* Demangled: dolby::DatabaseHelper::queryProfileValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Profile*) */
int _ZN5dolby14DatabaseHelper17queryProfileValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_7ProfileE(void);

/* Symbol: _ZN5dolby14DatabaseHelperC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::DatabaseHelper(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelperC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby8Provider25reloadCachedDeviceTuningsEv */
/* Demangled: dolby::Provider::reloadCachedDeviceTunings() */
int _ZN5dolby8Provider25reloadCachedDeviceTuningsEv(void);

/* Symbol: _ZN5dolby9DsManager18getTuningParamDHSAENS_4PortE */
/* Demangled: dolby::DsManager::getTuningParamDHSA(dolby::Port) */
int _ZN5dolby9DsManager18getTuningParamDHSAENS_4PortE(void);

/* Symbol: _ZN5dolby7ProfileC2EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: dolby::Profile::Profile(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby7ProfileC2EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5dolby9DsManager22saveDsStateAndSettingsEv */
/* Demangled: dolby::DsManager::saveDsStateAndSettings() */
int _ZN5dolby9DsManager22saveDsStateAndSettingsEv(void);

/* Symbol: _ZN5dolby6Tuning10isReadonlyEv */
/* Demangled: dolby::Tuning::isReadonly() */
int _ZN5dolby6Tuning10isReadonlyEv(void);

/* Symbol: _ZN5dolby16SimpleTranslatorC1ENS_12DapParameterENS_9ParameterE */
/* Demangled: dolby::SimpleTranslator::SimpleTranslator(dolby::DapParameter, dolby::Parameter) */
int _ZN5dolby16SimpleTranslatorC1ENS_12DapParameterENS_9ParameterE(void);

/* Symbol: _ZN5dolby14ProfileContext10getProfileEv */
/* Demangled: dolby::ProfileContext::getProfile() */
int _ZN5dolby14ProfileContext10getProfileEv(void);

/* Symbol: _ZN5dolby8Provider19loadProfileEndpointEiNS_8EndpointE */
/* Demangled: dolby::Provider::loadProfileEndpoint(int, dolby::Endpoint) */
int _ZN5dolby8Provider19loadProfileEndpointEiNS_8EndpointE(void);

/* Symbol: _ZN5dolby8Provider9kDapStateE */
/* Demangled: dolby::Provider::kDapState */
extern void* _ZN5dolby8Provider9kDapStateE;

/* Symbol: _ZN5dolby16ParameterAdapter19VirtualizerStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::VirtualizerStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter19VirtualizerStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby10DeviceData16getDeviceTuningsEv */
/* Demangled: dolby::DeviceData::getDeviceTunings() */
int _ZN5dolby10DeviceData16getDeviceTuningsEv(void);

/* Symbol: _ZN5dolby6Tuning11getEndpointEv */
/* Demangled: dolby::Tuning::getEndpoint() */
int _ZN5dolby6Tuning11getEndpointEv(void);

/* Symbol: _ZN5dolby11TagIterator18parseNodeIntVectorERNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::TagIterator::parseNodeIntVector(std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby11TagIterator18parseNodeIntVectorERNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZN7android19DolbyManagerService17getTuningParamDSAEv */
/* Demangled: android::DolbyManagerService::getTuningParamDSA() */
int _ZN7android19DolbyManagerService17getTuningParamDSAEv(void);

/* Symbol: _ZN5dolby9DapEffect15sendSharedStoreEPvj */
/* Demangled: dolby::DapEffect::sendSharedStore(void*, unsigned int) */
int _ZN5dolby9DapEffect15sendSharedStoreEPvj(void);

/* Symbol: _ZN5dolby9DsContext16reloadAllProfileEv */
/* Demangled: dolby::DsContext::reloadAllProfile() */
int _ZN5dolby9DsContext16reloadAllProfileEv(void);

/* Symbol: _ZN5dolby8Provider4saveEPNS_15ProfileEndpointE */
/* Demangled: dolby::Provider::save(dolby::ProfileEndpoint*) */
int _ZN5dolby8Provider4saveEPNS_15ProfileEndpointE(void);

/* Symbol: _ZN5dolby10DeviceData10getTuningsEv */
/* Demangled: dolby::DeviceData::getTunings() */
int _ZN5dolby10DeviceData10getTuningsEv(void);

/* Symbol: _ZNSt3__16vectorIN5dolby7RowDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_ */
/* Demangled: void std::__1::vector<dolby::RowData, std::__1::allocator<dolby::RowData> >::__emplace_back_slow_path<dolby::RowData&>(dolby::RowData&) */
int _ZNSt3__16vectorIN5dolby7RowDataENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_(void);

/* Symbol: _ZN5dolby25AudioOptimizerValueSetter11getNodeNameEv */
/* Demangled: dolby::AudioOptimizerValueSetter::getNodeName() */
int _ZN5dolby25AudioOptimizerValueSetter11getNodeNameEv(void);

/* Symbol: _ZN7android19DolbyManagerService28getAvailableTuningDevicesLenEi */
/* Demangled: android::DolbyManagerService::getAvailableTuningDevicesLen(int) */
int _ZN7android19DolbyManagerService28getAvailableTuningDevicesLenEi(void);

/* Symbol: _ZN5dolby6Tuning6isMonoEv */
/* Demangled: dolby::Tuning::isMono() */
int _ZN5dolby6Tuning6isMonoEv(void);

/* Symbol: _ZN5dolby15ProfileEndpointC2EliNS_8EndpointENS_10PresetTypeE */
/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(long, int, dolby::Endpoint, dolby::PresetType) */
int _ZN5dolby15ProfileEndpointC2EliNS_8EndpointENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby16DeviceParametersD2Ev */
/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
int _ZN5dolby16DeviceParametersD2Ev(void);

/* Symbol: _ZN5dolby19ParameterTranslator16translatePendingERNS_15SetParamCommandE */
/* Demangled: dolby::ParameterTranslator::translatePending(dolby::SetParamCommand&) */
int _ZN5dolby19ParameterTranslator16translatePendingERNS_15SetParamCommandE(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6insertINS_11__wrap_iterIPiEEEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS9_E9referenceEEE5valueES7_E4typeENS5_IPKiEES9_S9_(void);

/* Symbol: _ZN5dolby9DsContext10getProfileEi */
/* Demangled: dolby::DsContext::getProfile(int) */
int _ZN5dolby9DsContext10getProfileEi(void);

/* Symbol: _ZTVN5dolby21DrcRowDataValueSetterE */
/* Demangled: vtable for dolby::DrcRowDataValueSetter */
extern void* _ZTVN5dolby21DrcRowDataValueSetterE;

/* Symbol: _ZN5dolby9DsManager18setSelectedProfileEi */
/* Demangled: dolby::DsManager::setSelectedProfile(int) */
int _ZN5dolby9DsManager18setSelectedProfileEi(void);

/* Symbol: _ZN5dolby9DsManagerD1Ev */
/* Demangled: dolby::DsManager::~DsManager() */
int _ZN5dolby9DsManagerD1Ev(void);

/* Symbol: _ZN5dolby9GeqPresetC1Ei */
/* Demangled: dolby::GeqPreset::GeqPreset(int) */
int _ZN5dolby9GeqPresetC1Ei(void);

/* Symbol: _ZN5dolby8Provider13loadGeqPresetEi */
/* Demangled: dolby::Provider::loadGeqPreset(int) */
int _ZN5dolby8Provider13loadGeqPresetEi(void);

/* Symbol: _ZN5dolby8Provider14kFormatVersionE */
/* Demangled: dolby::Provider::kFormatVersion */
extern void* _ZN5dolby8Provider14kFormatVersionE;

/* Symbol: _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long>, std::__1::__tree_const_iterator<dolby::IeqPreset*, std::__1::__tree_node<dolby::IeqPreset*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEE11hasInstanceEv */
/* Demangled: android::Singleton<dolby::DsContextManager>::hasInstance() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEE11hasInstanceEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN5dolby16ParameterAdapterD0Ev */
/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
int _ZN5dolby16ParameterAdapterD0Ev(void);

/* Symbol: _ZN5dolby9DsManagerC2Ev */
/* Demangled: dolby::DsManager::DsManager() */
int _ZN5dolby9DsManagerC2Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5dolby9IeqPresetC1ExNS_10PresetTypeE */
/* Demangled: dolby::IeqPreset::IeqPreset(long long, dolby::PresetType) */
int _ZN5dolby9IeqPresetC1ExNS_10PresetTypeE(void);

/* Symbol: _ZN5dolby19BassMbdrcTranslator10kSrcParamsE */
/* Demangled: dolby::BassMbdrcTranslator::kSrcParams */
extern void* _ZN5dolby19BassMbdrcTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby20OutputModeTranslator10kSrcParamsE */
/* Demangled: dolby::OutputModeTranslator::kSrcParams */
extern void* _ZN5dolby20OutputModeTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby24AudioRegulatorTranslatorC1Ev */
/* Demangled: dolby::AudioRegulatorTranslator::AudioRegulatorTranslator() */
int _ZN5dolby24AudioRegulatorTranslatorC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterEPNS2_10TranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Parameter, dolby::Translator*>, std::__1::__map_value_compare<dolby::Parameter, std::__1::__value_type<dolby::Parameter, dolby::Translator*>, std::__1::less<dolby::Parameter>, true>, std::__1::allocator<std::__1::__value_type<dolby::Parameter, dolby::Translator*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Parameter, dolby::Translator*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterEPNS2_10TranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5dolby9DsContextD2Ev */
/* Demangled: dolby::DsContext::~DsContext() */
int _ZN5dolby9DsContextD2Ev(void);

/* Symbol: _ZN5dolby9DsContext22getProfileGeqParameterEiNS_9ParameterE */
/* Demangled: dolby::DsContext::getProfileGeqParameter(int, dolby::Parameter) */
int _ZN5dolby9DsContext22getProfileGeqParameterEiNS_9ParameterE(void);

/* Symbol: _ZN5dolby16DsContextManager16populateDatabaseEPNS_10DeviceDataEPNS_8ProviderE */
/* Demangled: dolby::DsContextManager::populateDatabase(dolby::DeviceData*, dolby::Provider*) */
int _ZN5dolby16DsContextManager16populateDatabaseEPNS_10DeviceDataEPNS_8ProviderE(void);

/* Symbol: _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12getParameterEPNS_9DsContextEi */
/* Demangled: dolby::ParameterAdapter::ProfileParameterStrategy::getParameter(dolby::DsContext*, int) */
int _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12getParameterEPNS_9DsContextEi(void);

/* Symbol: _ZN5dolby9DsManager25getAvailableTuningDevicesENS_4PortE */
/* Demangled: dolby::DsManager::getAvailableTuningDevices(dolby::Port) */
int _ZN5dolby9DsManager25getAvailableTuningDevicesENS_4PortE(void);

/* Symbol: _ZN5dolby14ProfileContext18getProfileEndpointENS_8EndpointE */
/* Demangled: dolby::ProfileContext::getProfileEndpoint(dolby::Endpoint) */
int _ZN5dolby14ProfileContext18getProfileEndpointENS_8EndpointE(void);

/* Symbol: _ZN5dolby15ProfileEndpoint20setSelectedIeqPresetENS_10PresetTypeE */
/* Demangled: dolby::ProfileEndpoint::setSelectedIeqPreset(dolby::PresetType) */
int _ZN5dolby15ProfileEndpoint20setSelectedIeqPresetENS_10PresetTypeE(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandlerD1Ev */
/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
int _ZN7android19DolbyManagerService12EventHandlerD1Ev(void);

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int>(int&&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJiEEEvDpOT_(void);

/* Symbol: _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**>&>::push_back(_xmlNode**&&) */
int _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN5dolby16SetterCollectionC2Ev */
/* Demangled: dolby::SetterCollection::SetterCollection() */
int _ZN5dolby16SetterCollectionC2Ev(void);

/* Symbol: _ZTVN5dolby19BassMbdrcTranslatorE */
/* Demangled: vtable for dolby::BassMbdrcTranslator */
extern void* _ZTVN5dolby19BassMbdrcTranslatorE;

/* Symbol: _ZN5dolby10DeviceData11setProfilesERNSt3__13setIPNS_7ProfileENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setProfiles(std::__1::set<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >&) */
int _ZN5dolby10DeviceData11setProfilesERNSt3__13setIPNS_7ProfileENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEmRKS6_ */
/* Demangled: std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__append(unsigned long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE8__appendEmRKS6_(void);

/* Symbol: _ZN5dolby16TuningFileParser17sSetterCollectionE */
/* Demangled: dolby::TuningFileParser::sSetterCollection */
extern void* _ZN5dolby16TuningFileParser17sSetterCollectionE;

/* Symbol: _ZN5dolby19BassMbdrcTranslatorC2Ev */
/* Demangled: dolby::BassMbdrcTranslator::BassMbdrcTranslator() */
int _ZN5dolby19BassMbdrcTranslatorC2Ev(void);

/* Symbol: _ZTVN5dolby15SetParamCommandE */
/* Demangled: vtable for dolby::SetParamCommand */
extern void* _ZTVN5dolby15SetParamCommandE;

/* Symbol: _ZN5dolby8Provider22getDefaultXmlSignatureEv */
/* Demangled: dolby::Provider::getDefaultXmlSignature() */
int _ZN5dolby8Provider22getDefaultXmlSignatureEv(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_7ProfileE */
/* Demangled: dolby::Provider::create(dolby::Profile*) */
int _ZN5dolby8Provider6createEPNS_7ProfileE(void);

/* Symbol: _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE9push_backEOS3_ */
/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**> >::push_back(_xmlNode**&&) */
int _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE9push_backEOS3_(void);

/* Symbol: _ZN5dolby16TuningFileParser12parseVersionEv */
/* Demangled: dolby::TuningFileParser::parseVersion() */
int _ZN5dolby16TuningFileParser12parseVersionEv(void);

/* Symbol: _ZN5dolby18DeAmountTranslatorC2Ev */
/* Demangled: dolby::DeAmountTranslator::DeAmountTranslator() */
int _ZN5dolby18DeAmountTranslatorC2Ev(void);

/* Symbol: _ZTVN5dolby20OutputModeTranslatorE */
/* Demangled: vtable for dolby::OutputModeTranslator */
extern void* _ZTVN5dolby20OutputModeTranslatorE;

/* Symbol: _ZN5dolby9DsManager21getSelectedTuningNameENS_4PortE */
/* Demangled: dolby::DsManager::getSelectedTuningName(dolby::Port) */
int _ZN5dolby9DsManager21getSelectedTuningNameENS_4PortE(void);

/* Symbol: _ZN7android19DolbyManagerService19packAndReceiveParamEPvjS1_j */
/* Demangled: android::DolbyManagerService::packAndReceiveParam(void*, unsigned int, void*, unsigned int) */
int _ZN7android19DolbyManagerService19packAndReceiveParamEPvjS1_j(void);

/* Symbol: _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::DeviceTuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_12DeviceTuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby25AudioOptimizerValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::AudioOptimizerValueSetter::AudioOptimizerValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby25AudioOptimizerValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_const_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorISA_PNS_11__tree_nodeISA_SJ_EElEERPNS_15__tree_end_nodeISL_EESM_RKT_(void);

/* Symbol: _ZN5dolby7Profile12kValidParamsE */
/* Demangled: dolby::Profile::kValidParams */
extern void* _ZN5dolby7Profile12kValidParamsE;

/* Symbol: _ZN5dolby13DapController24onSelectedProfileChangedERNS_9DsContextE */
/* Demangled: dolby::DapController::onSelectedProfileChanged(dolby::DsContext&) */
int _ZN5dolby13DapController24onSelectedProfileChangedERNS_9DsContextE(void);

/* Symbol: _ZN5dolby9DsContext15resetProfileGeqEi */
/* Demangled: dolby::DsContext::resetProfileGeq(int) */
int _ZN5dolby9DsContext15resetProfileGeqEi(void);

/* Symbol: _ZN5dolby9DsManager16validateDsEffectEv */
/* Demangled: dolby::DsManager::validateDsEffect() */
int _ZN5dolby9DsManager16validateDsEffectEv(void);

/* Symbol: _ZN5dolby15SetParamCommandC1Ei */
/* Demangled: dolby::SetParamCommand::SetParamCommand(int) */
int _ZN5dolby15SetParamCommandC1Ei(void);

/* Symbol: _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_istream<char, std::__1::char_traits<char> >-in-std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_13basic_istreamIcS2_EE;

/* Symbol: _ZN5dolby16TuningFileParser11parsePresetEv */
/* Demangled: dolby::TuningFileParser::parsePreset() */
int _ZN5dolby16TuningFileParser11parsePresetEv(void);

/* Symbol: _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12getParameterEPNS_9DsContextEi */
/* Demangled: dolby::ParameterAdapter::ProfileGeqParameterStrategy::getParameter(dolby::DsContext*, int) */
int _ZN5dolby16ParameterAdapter27ProfileGeqParameterStrategy12getParameterEPNS_9DsContextEi(void);

/* Symbol: _ZN5dolby6TuningC2ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb */
/* Demangled: dolby::Tuning::Tuning(long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool, bool) */
int _ZN5dolby6TuningC2ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb(void);

/* Symbol: _ZN5dolby9DsContext11saveDsStateEv */
/* Demangled: dolby::DsContext::saveDsState() */
int _ZN5dolby9DsContext11saveDsStateEv(void);

/* Symbol: _ZN5dolby14DatabaseHelper15clearOemTuningsEv */
/* Demangled: dolby::DatabaseHelper::clearOemTunings() */
int _ZN5dolby14DatabaseHelper15clearOemTuningsEv(void);

/* Symbol: _ZN5dolby14GeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::GeqValueSetter::GeqValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby14GeqValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby20MixMatrixValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::MixMatrixValueSetter::MixMatrixValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby20MixMatrixValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZTVN5dolby14GeqValueSetterE */
/* Demangled: vtable for dolby::GeqValueSetter */
extern void* _ZTVN5dolby14GeqValueSetterE;

/* Symbol: _ZN5dolby7ProfileC1EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: dolby::Profile::Profile(int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby7ProfileC1EiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5dolby15ProfileEndpointC1EliNS_8EndpointENS_10PresetTypeE */
/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(long, int, dolby::Endpoint, dolby::PresetType) */
int _ZN5dolby15ProfileEndpointC1EliNS_8EndpointENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby9DsContext13getProfileGeqEi */
/* Demangled: dolby::DsContext::getProfileGeq(int) */
int _ZN5dolby9DsContext13getProfileGeqEi(void);

/* Symbol: _ZN5dolby14IeqValueSetter10kAttrNamesE */
/* Demangled: dolby::IeqValueSetter::kAttrNames */
extern void* _ZN5dolby14IeqValueSetter10kAttrNamesE;

/* Symbol: _ZN5dolby14DatabaseHelper20querySelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::querySelectedProfile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper20querySelectedProfileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby11TagIteratorD2Ev */
/* Demangled: dolby::TagIterator::~TagIterator() */
int _ZN5dolby11TagIteratorD2Ev(void);

/* Symbol: _ZN5dolby9DsManager17isProfileModifiedEi */
/* Demangled: dolby::DsManager::isProfileModified(int) */
int _ZN5dolby9DsManager17isProfileModifiedEi(void);

/* Symbol: _ZN5dolby12DeviceTuning7getPortEv */
/* Demangled: dolby::DeviceTuning::getPort() */
int _ZN5dolby12DeviceTuning7getPortEv(void);

/* Symbol: _ZN5dolby14ProfileContext8DefaultsC2EPNS_8ProviderEi */
/* Demangled: dolby::ProfileContext::Defaults::Defaults(dolby::Provider*, int) */
int _ZN5dolby14ProfileContext8DefaultsC2EPNS_8ProviderEi(void);

/* Symbol: _ZN5dolby22VirtualBassValueSetter10kAttrNamesE */
/* Demangled: dolby::VirtualBassValueSetter::kAttrNames */
extern void* _ZN5dolby22VirtualBassValueSetter10kAttrNamesE;

/* Symbol: _ZN5dolby12DeviceTuningC2ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_ */
/* Demangled: dolby::DeviceTuning::DeviceTuning(long long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby12DeviceTuningC2ExNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void);

/* Symbol: _ZN5dolby18DeAmountTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::DeAmountTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby18DeAmountTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby9DsContext21getSelectedProfileGeqEv */
/* Demangled: dolby::DsContext::getSelectedProfileGeq() */
int _ZN5dolby9DsContext21getSelectedProfileGeqEv(void);

/* Symbol: _ZN5dolby11TagIterator11getNodeNameEv */
/* Demangled: dolby::TagIterator::getNodeName() */
int _ZN5dolby11TagIterator11getNodeNameEv(void);

/* Symbol: _ZTVN5dolby17SimpleValueSetterE */
/* Demangled: vtable for dolby::SimpleValueSetter */
extern void* _ZTVN5dolby17SimpleValueSetterE;

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE10do_destroyEPvm(void);

/* Symbol: _ZN5dolby24AudioRegulatorTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::AudioRegulatorTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby24AudioRegulatorTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby14ProfileContext4saveEv */
/* Demangled: dolby::ProfileContext::save() */
int _ZN5dolby14ProfileContext4saveEv(void);

/* Symbol: _ZN5dolby18DeEnableTranslator12getSrcParamsEv */
/* Demangled: dolby::DeEnableTranslator::getSrcParams() */
int _ZN5dolby18DeEnableTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby9DapEffect4sendEiRNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::DapEffect::send(int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DapEffect4sendEiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16__treeIN5dolby4PortENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<dolby::Port, std::__1::less<dolby::Port>, std::__1::allocator<dolby::Port> >::destroy(std::__1::__tree_node<dolby::Port, void*>*) */
int _ZNSt3__16__treeIN5dolby4PortENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_ */
/* Demangled: void std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >::__emplace_back_slow_path<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&&) */
int _ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJS6_EEEvDpOT_(void);

/* Symbol: _ZN5dolby14DatabaseHelperD0Ev */
/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
int _ZN5dolby14DatabaseHelperD0Ev(void);

/* Symbol: _ZN5dolby8Provider5clearEv */
/* Demangled: dolby::Provider::clear() */
int _ZN5dolby8Provider5clearEv(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjj */
/* Demangled: android::DolbyManagerService::EventHandler::sendMessage(void*, unsigned int, unsigned int) */
int _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjj(void);

/* Symbol: _ZTTN7android19DolbyManagerService18NotificationClientE */
/* Demangled: VTT for android::DolbyManagerService::NotificationClient */
extern void* _ZTTN7android19DolbyManagerService18NotificationClientE;

/* Symbol: _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>, std::__1::__tree_const_iterator<dolby::DeviceTuning*, std::__1::__tree_node<dolby::DeviceTuning*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZN5dolby10DapContext19getDeviceParametersENS_4PortE */
/* Demangled: dolby::DapContext::getDeviceParameters(dolby::Port) */
int _ZN5dolby10DapContext19getDeviceParametersENS_4PortE(void);

/* Symbol: _ZN5dolby10DeviceDataD1Ev */
/* Demangled: dolby::DeviceData::~DeviceData() */
int _ZN5dolby10DeviceDataD1Ev(void);

/* Symbol: _ZN5dolby16ParameterAdapter12getParameterEii */
/* Demangled: dolby::ParameterAdapter::getParameter(int, int) */
int _ZN5dolby16ParameterAdapter12getParameterEii(void);

/* Symbol: _ZN5dolby27VirtualBassEnableTranslator12getSrcParamsEv */
/* Demangled: dolby::VirtualBassEnableTranslator::getSrcParams() */
int _ZN5dolby27VirtualBassEnableTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby9DsContext17getDefaultProfileEi */
/* Demangled: dolby::DsContext::getDefaultProfile(int) */
int _ZN5dolby9DsContext17getDefaultProfileEi(void);

/* Symbol: _ZN5dolby10DeviceDataC2Ev */
/* Demangled: dolby::DeviceData::DeviceData() */
int _ZN5dolby10DeviceDataC2Ev(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >::destroy(std::__1::__tree_node<dolby::GeqPreset*, void*>*) */
int _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN7android19DolbyManagerServiceD0Ev */
/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
int _ZN7android19DolbyManagerServiceD0Ev(void);

/* Symbol: _ZN5dolby9IeqPreset5getIdEv */
/* Demangled: dolby::IeqPreset::getId() */
int _ZN5dolby9IeqPreset5getIdEv(void);

/* Symbol: _ZN5dolby13DapController32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE */
/* Demangled: dolby::DapController::onSelectedProfileEndpointChanged(dolby::DsContext&, dolby::Port, dolby::ProfileEndpoint&) */
int _ZN5dolby13DapController32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE(void);

/* Symbol: _ZN5dolby13DapControllerC1EiRNS_9DapEffectE */
/* Demangled: dolby::DapController::DapController(int, dolby::DapEffect&) */
int _ZN5dolby13DapControllerC1EiRNS_9DapEffectE(void);

/* Symbol: _ZN5dolby9DsContext12setParameterERNS_15ParameterValuesENS_9ParameterERNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: dolby::DsContext::setParameter(dolby::ParameterValues&, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DsContext12setParameterERNS_15ParameterValuesENS_9ParameterERNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEED1Ev */
/* Demangled: android::Singleton<dolby::DsContextManager>::~Singleton() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEED1Ev(void);

/* Symbol: _ZN5dolby8Provider15getDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Provider::getDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider15getDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16vectorIPN5dolby9GeqPresetENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<dolby::GeqPreset*, std::__1::allocator<dolby::GeqPreset*> >::__append(unsigned long) */
int _ZNSt3__16vectorIPN5dolby9GeqPresetENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE10push_frontERKS3_ */
/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**>&>::push_front(_xmlNode** const&) */
int _ZNSt3__114__split_bufferIPP8_xmlNodeRNS_9allocatorIS3_EEE10push_frontERKS3_(void);

/* Symbol: _ZN5dolby15SetParamCommand7executeERNS_9DapEffectE */
/* Demangled: dolby::SetParamCommand::execute(dolby::DapEffect&) */
int _ZN5dolby15SetParamCommand7executeERNS_9DapEffectE(void);

/* Symbol: _ZN5dolby9DsContext22setProfileGeqParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE */
/* Demangled: dolby::DsContext::setProfileGeqParameter(int, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DsContext22setProfileGeqParameterEiNS_9ParameterERNSt3__16vectorIiNS2_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby16DsContextManagerD1Ev */
/* Demangled: dolby::DsContextManager::~DsContextManager() */
int _ZN5dolby16DsContextManagerD1Ev(void);

/* Symbol: _ZN5dolby14IeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::IeqValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby14IeqValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN7android19DolbyManagerService11setIntParamEjl */
/* Demangled: android::DolbyManagerService::setIntParam(unsigned int, long) */
int _ZN7android19DolbyManagerService11setIntParamEjl(void);

/* Symbol: _ZN7android19DolbyManagerServiceC1Ev */
/* Demangled: android::DolbyManagerService::DolbyManagerService() */
int _ZN7android19DolbyManagerServiceC1Ev(void);

/* Symbol: _ZN5dolby16DeviceParameters18setProfileEndpointERNS_15ProfileEndpointE */
/* Demangled: dolby::DeviceParameters::setProfileEndpoint(dolby::ProfileEndpoint&) */
int _ZN5dolby16DeviceParameters18setProfileEndpointERNS_15ProfileEndpointE(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEEC2Ev */
/* Demangled: android::Singleton<dolby::DsContextManager>::Singleton() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEEC2Ev(void);

/* Symbol: _ZN5dolby8Provider4saveEPNS_9GeqPresetE */
/* Demangled: dolby::Provider::save(dolby::GeqPreset*) */
int _ZN5dolby8Provider4saveEPNS_9GeqPresetE(void);

/* Symbol: _ZTVN5dolby16TuningFileParserE */
/* Demangled: vtable for dolby::TuningFileParser */
extern void* _ZTVN5dolby16TuningFileParserE;

/* Symbol: _ZN5dolby16ParameterAdapterC2EPNS_9DsContextE */
/* Demangled: dolby::ParameterAdapter::ParameterAdapter(dolby::DsContext*) */
int _ZN5dolby16ParameterAdapterC2EPNS_9DsContextE(void);

/* Symbol: _ZN5dolby9DsManager12getDsVersionEv */
/* Demangled: dolby::DsManager::getDsVersion() */
int _ZN5dolby9DsManager12getDsVersionEv(void);

/* Symbol: _ZN5dolby9DapEffectC1EiN7android8String16E */
/* Demangled: dolby::DapEffect::DapEffect(int, android::String16) */
int _ZN5dolby9DapEffectC1EiN7android8String16E(void);

/* Symbol: _ZN5dolby16DsContextManagerC2Ev */
/* Demangled: dolby::DsContextManager::DsContextManager() */
int _ZN5dolby16DsContextManagerC2Ev(void);

/* Symbol: _ZN5dolby9DsManager28getAvailableTuningDevicesLenENS_4PortE */
/* Demangled: dolby::DsManager::getAvailableTuningDevicesLen(dolby::Port) */
int _ZN5dolby9DsManager28getAvailableTuningDevicesLenENS_4PortE(void);

/* Symbol: _ZN7android19DolbyManagerService20dumpPermissionDenialEi */
/* Demangled: android::DolbyManagerService::dumpPermissionDenial(int) */
int _ZN7android19DolbyManagerService20dumpPermissionDenialEi(void);

/* Symbol: _ZN7android19DolbyManagerService24removeNotificationClientEj */
/* Demangled: android::DolbyManagerService::removeNotificationClient(unsigned int) */
int _ZN7android19DolbyManagerService24removeNotificationClientEj(void);

/* Symbol: _ZN5dolby18DeEnableTranslator10kSrcParamsE */
/* Demangled: dolby::DeEnableTranslator::kSrcParams */
extern void* _ZN5dolby18DeEnableTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby16DsContextManager12getSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DsContextManager::getSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby16DsContextManager12getSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby11TagIterator12parseNodeAllERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE */
/* Demangled: dolby::TagIterator::parseNodeAll(std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >&) */
int _ZN5dolby11TagIterator12parseNodeAllERNSt3__16vectorINS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS6_IS8_EEEE(void);

/* Symbol: _ZN5dolby17SimpleValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::SimpleValueSetter::SimpleValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby17SimpleValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby20OutputModeTranslator12getSrcParamsEv */
/* Demangled: dolby::OutputModeTranslator::getSrcParams() */
int _ZN5dolby20OutputModeTranslator12getSrcParamsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceENS2_4PortEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::Port> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::Port>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceENS2_4PortEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::GeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClient16onDapParamUpdateEPvj */
/* Demangled: android::DolbyManagerService::NotificationClient::onDapParamUpdate(void*, unsigned int) */
int _ZN7android19DolbyManagerService18NotificationClient16onDapParamUpdateEPvj(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClientD1Ev */
/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
int _ZN7android19DolbyManagerService18NotificationClientD1Ev(void);

/* Symbol: _ZN5dolby19BassMbdrcTranslator12getSrcParamsEv */
/* Demangled: dolby::BassMbdrcTranslator::getSrcParams() */
int _ZN5dolby19BassMbdrcTranslator12getSrcParamsEv(void);

/* Symbol: _ZNSt3__16vectorIPN5dolby15ProfileEndpointENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<dolby::ProfileEndpoint*, std::__1::allocator<dolby::ProfileEndpoint*> >::__append(unsigned long) */
int _ZNSt3__16vectorIPN5dolby15ProfileEndpointENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZN7android19DolbyManagerService15getActiveDeviceEv */
/* Demangled: android::DolbyManagerService::getActiveDevice() */
int _ZN7android19DolbyManagerService15getActiveDeviceEv(void);

/* Symbol: _ZN7android19DolbyManagerService4dumpEiRKNS_6VectorINS_8String16EEE */
/* Demangled: android::DolbyManagerService::dump(int, android::Vector<android::String16> const&) */
int _ZN7android19DolbyManagerService4dumpEiRKNS_6VectorINS_8String16EEE(void);

/* Symbol: _ZN5dolby7Profile7getNameEv */
/* Demangled: dolby::Profile::getName() */
int _ZN5dolby7Profile7getNameEv(void);

/* Symbol: _ZN5dolby24AudioOptimizerTranslatorC1Ev */
/* Demangled: dolby::AudioOptimizerTranslator::AudioOptimizerTranslator() */
int _ZN5dolby24AudioOptimizerTranslatorC1Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_16DeviceParametersEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::DeviceParameters*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_16DeviceParametersEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5dolby16DsContextManager12getDsContextEv */
/* Demangled: dolby::DsContextManager::getDsContext() */
int _ZN5dolby16DsContextManager12getDsContextEv(void);

/* Symbol: _ZN5dolby21DrcRowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::DrcRowDataValueSetter::DrcRowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby21DrcRowDataValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby16TuningFileParserD2Ev */
/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
int _ZN5dolby16TuningFileParserD2Ev(void);

/* Symbol: _ZN5dolby9DsManager14getProfileNameEi */
/* Demangled: dolby::DsManager::getProfileName(int) */
int _ZN5dolby9DsManager14getProfileNameEi(void);

/* Symbol: _ZN5dolby7Profile11setMobilityEb */
/* Demangled: dolby::Profile::setMobility(bool) */
int _ZN5dolby7Profile11setMobilityEb(void);

/* Symbol: _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_ */
/* Demangled: void std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >::__emplace_back_slow_path<dolby::Parameter&>(dolby::Parameter&) */
int _ZNSt3__16vectorIN5dolby9ParameterENS_9allocatorIS2_EEE24__emplace_back_slow_pathIJRS2_EEEvDpOT_(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedTuningChanged(dolby::DsContext&, dolby::Port, dolby::Tuning&) */
int _ZN5dolby25DsContextChangeObservable23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE(void);

/* Symbol: _ZTVN5dolby26ComplexEqualizerTranslatorE */
/* Demangled: vtable for dolby::ComplexEqualizerTranslator */
extern void* _ZTVN5dolby26ComplexEqualizerTranslatorE;

/* Symbol: _ZN5dolby11TagIterator4initERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TagIterator::init(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby11TagIterator4initERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE12do_constructEPvm(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::seekoff(long long, std::__1::ios_base::seekdir, unsigned int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE7seekoffExNS_8ios_base7seekdirEj(void);

/* Symbol: _ZTVN5dolby9IeqPresetE */
/* Demangled: vtable for dolby::IeqPreset */
extern void* _ZTVN5dolby9IeqPresetE;

/* Symbol: _ZN5dolby25DsContextChangeObservableC2Ev */
/* Demangled: dolby::DsContextChangeObservable::DsContextChangeObservable() */
int _ZN5dolby25DsContextChangeObservableC2Ev(void);

/* Symbol: _ZN5dolby9DsContext18unregisterObserverEPNS_17OnDsContextChangeE */
/* Demangled: dolby::DsContext::unregisterObserver(dolby::OnDsContextChange*) */
int _ZN5dolby9DsContext18unregisterObserverEPNS_17OnDsContextChangeE(void);

/* Symbol: _ZNSt3__112__deque_baseIP8_xmlNodeNS_9allocatorIS2_EEED2Ev */
/* Demangled: std::__1::__deque_base<_xmlNode*, std::__1::allocator<_xmlNode*> >::~__deque_base() */
int _ZNSt3__112__deque_baseIP8_xmlNodeNS_9allocatorIS2_EEED2Ev(void);

/* Symbol: _ZN5dolby14ProfileContext8DefaultsC1EPNS_8ProviderEi */
/* Demangled: dolby::ProfileContext::Defaults::Defaults(dolby::Provider*, int) */
int _ZN5dolby14ProfileContext8DefaultsC1EPNS_8ProviderEi(void);

/* Symbol: _ZN5dolby13DapController6onLoadERNS_9DsContextE */
/* Demangled: dolby::DapController::onLoad(dolby::DsContext&) */
int _ZN5dolby13DapController6onLoadERNS_9DsContextE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5dolby9IeqPreset12kValidParamsE */
/* Demangled: dolby::IeqPreset::kValidParams */
extern void* _ZN5dolby9IeqPreset12kValidParamsE;

/* Symbol: _ZN5dolby10DeviceData12validateDataEv */
/* Demangled: dolby::DeviceData::validateData() */
int _ZN5dolby10DeviceData12validateDataEv(void);

/* Symbol: _ZN5dolby9GeqPreset8toStringEv */
/* Demangled: dolby::GeqPreset::toString() */
int _ZN5dolby9GeqPreset8toStringEv(void);

/* Symbol: _ZN5dolby16DeviceParameters10getProfileEv */
/* Demangled: dolby::DeviceParameters::getProfile() */
int _ZN5dolby16DeviceParameters10getProfileEv(void);

/* Symbol: _ZN5dolby13DapController12setDapEffectERNS_9DapEffectERNS_9DsContextE */
/* Demangled: dolby::DapController::setDapEffect(dolby::DapEffect&, dolby::DsContext&) */
int _ZN5dolby13DapController12setDapEffectERNS_9DapEffectERNS_9DsContextE(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEE5sLockE */
/* Demangled: android::Singleton<dolby::DsContextManager>::sLock */
extern void* _ZN7android9SingletonIN5dolby16DsContextManagerEE5sLockE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__push_back_slow_path<int const&>(int const&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE21__push_back_slow_pathIRKiEEvOT_(void);

/* Symbol: _ZN5dolby11TagIterator8pushNodeEv */
/* Demangled: dolby::TagIterator::pushNode() */
int _ZN5dolby11TagIterator8pushNodeEv(void);

/* Symbol: _ZN5dolby18RowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::RowDataValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby18RowDataValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN7android19DolbyManagerService14registerClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij */
/* Demangled: android::DolbyManagerService::registerClient(android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN7android19DolbyManagerService14registerClientERKNS_2spIN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void);

/* Symbol: _ZN5dolby27VirtualBassEnableTranslatorC2Ev */
/* Demangled: dolby::VirtualBassEnableTranslator::VirtualBassEnableTranslator() */
int _ZN5dolby27VirtualBassEnableTranslatorC2Ev(void);

/* Symbol: _ZN5dolby9DapEffect10hasControlEv */
/* Demangled: dolby::DapEffect::hasControl() */
int _ZN5dolby9DapEffect10hasControlEv(void);

/* Symbol: _ZN5dolby8ProviderD2Ev */
/* Demangled: dolby::Provider::~Provider() */
int _ZN5dolby8ProviderD2Ev(void);

/* Symbol: _ZN5dolby16TuningFileParser16getNumOfProfilesEv */
/* Demangled: dolby::TuningFileParser::getNumOfProfiles() */
int _ZN5dolby16TuningFileParser16getNumOfProfilesEv(void);

/* Symbol: _ZN5dolby9DsManager18getTuningParamDFSAENS_4PortE */
/* Demangled: dolby::DsManager::getTuningParamDFSA(dolby::Port) */
int _ZN5dolby9DsManager18getTuningParamDFSAENS_4PortE(void);

/* Symbol: _ZN5dolby9DsManager21getVolumeLevelerAountENS_4PortE */
/* Demangled: dolby::DsManager::getVolumeLevelerAount(dolby::Port) */
int _ZN5dolby9DsManager21getVolumeLevelerAountENS_4PortE(void);

/* Symbol: _ZN7android19DolbyManagerService11getIntParamEj */
/* Demangled: android::DolbyManagerService::getIntParam(unsigned int) */
int _ZN7android19DolbyManagerService11getIntParamEj(void);

/* Symbol: _ZN5dolby26ComplexEqualizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::ComplexEqualizerTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby26ComplexEqualizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby26ComplexEqualizerTranslator12getSrcParamsEv */
/* Demangled: dolby::ComplexEqualizerTranslator::getSrcParams() */
int _ZN5dolby26ComplexEqualizerTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby13DapControllerD1Ev */
/* Demangled: dolby::DapController::~DapController() */
int _ZN5dolby13DapControllerD1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper13queryGeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9GeqPresetE */
/* Demangled: dolby::DatabaseHelper::queryGeqValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::GeqPreset*) */
int _ZN5dolby14DatabaseHelper13queryGeqValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_PNS_9GeqPresetE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_destroyEPvm(void);

/* Symbol: _ZN5dolby15ProfileEndpoint11getEndpointEv */
/* Demangled: dolby::ProfileEndpoint::getEndpoint() */
int _ZN5dolby15ProfileEndpoint11getEndpointEv(void);

/* Symbol: _ZN5dolby16DeviceParameters12updateParamsERNS_15ParameterValuesE */
/* Demangled: dolby::DeviceParameters::updateParams(dolby::ParameterValues&) */
int _ZN5dolby16DeviceParameters12updateParamsERNS_15ParameterValuesE(void);

/* Symbol: _ZN5dolby9DsContext24getAvailableTuningDeviceENS_4PortE */
/* Demangled: dolby::DsContext::getAvailableTuningDevice(dolby::Port) */
int _ZN5dolby9DsContext24getAvailableTuningDeviceENS_4PortE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long>, std::__1::__tree_const_iterator<dolby::Profile*, std::__1::__tree_node<dolby::Profile*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::ProfileParameterStrategy::setParameter(dolby::DsContext*, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter24ProfileParameterStrategy12setParameterEPNS_9DsContextEiRNSt3__16vectorIiNS4_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby13GeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::GeqTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby13GeqTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby20OutputModeTranslatorC1Ev */
/* Demangled: dolby::OutputModeTranslator::OutputModeTranslator() */
int _ZN5dolby20OutputModeTranslatorC1Ev(void);

/* Symbol: _ZN5dolby9DsContext12resetProfileEi */
/* Demangled: dolby::DsContext::resetProfile(int) */
int _ZN5dolby9DsContext12resetProfileEi(void);

/* Symbol: _ZN5dolby9DsManager16recreateDsEffectEv */
/* Demangled: dolby::DsManager::recreateDsEffect() */
int _ZN5dolby9DsManager16recreateDsEffectEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_construct(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE12do_constructEPvm(void);

/* Symbol: _ZN5dolby9DsContext4saveEv */
/* Demangled: dolby::DsContext::save() */
int _ZN5dolby9DsContext4saveEv(void);

/* Symbol: _ZN5dolby14ProfileContextC2EPNS_8ProviderEi */
/* Demangled: dolby::ProfileContext::ProfileContext(dolby::Provider*, int) */
int _ZN5dolby14ProfileContextC2EPNS_8ProviderEi(void);

/* Symbol: _ZN5dolby8Provider18getSelectedProfileEv */
/* Demangled: dolby::Provider::getSelectedProfile() */
int _ZN5dolby8Provider18getSelectedProfileEv(void);

/* Symbol: _ZN5dolby26RegulatorTuningValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::RegulatorTuningValueSetter::RegulatorTuningValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby26RegulatorTuningValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN5dolby16SimpleTranslator12getSrcParamsEv */
/* Demangled: dolby::SimpleTranslator::getSrcParams() */
int _ZN5dolby16SimpleTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby8Provider16getNumOfProfilesEv */
/* Demangled: dolby::Provider::getNumOfProfiles() */
int _ZN5dolby8Provider16getNumOfProfilesEv(void);

/* Symbol: _ZN5dolby10DeviceData19getProfileEndpointsEv */
/* Demangled: dolby::DeviceData::getProfileEndpoints() */
int _ZN5dolby10DeviceData19getProfileEndpointsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIiNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIiS8_NS_4lessIiEELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZTVN5dolby18DeEnableTranslatorE */
/* Demangled: vtable for dolby::DeEnableTranslator */
extern void* _ZTVN5dolby18DeEnableTranslatorE;

/* Symbol: _ZN5dolby6Tuning12kValidParamsE */
/* Demangled: dolby::Tuning::kValidParams */
extern void* _ZN5dolby6Tuning12kValidParamsE;

/* Symbol: _ZN5dolby14DatabaseHelper5clearEv */
/* Demangled: dolby::DatabaseHelper::clear() */
int _ZN5dolby14DatabaseHelper5clearEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN5dolby9IeqPreset14getValidParamsEv */
/* Demangled: dolby::IeqPreset::getValidParams() */
int _ZN5dolby9IeqPreset14getValidParamsEv(void);

/* Symbol: _ZN5dolby17ProfileParametersC1EPNS_19ParamChangeObserverE */
/* Demangled: dolby::ProfileParameters::ProfileParameters(dolby::ParamChangeObserver*) */
int _ZN5dolby17ProfileParametersC1EPNS_19ParamChangeObserverE(void);

/* Symbol: _ZN5dolby17ProfileParametersD2Ev */
/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
int _ZN5dolby17ProfileParametersD2Ev(void);

/* Symbol: _ZN5dolby24AudioOptimizerTranslator12getSrcParamsEv */
/* Demangled: dolby::AudioOptimizerTranslator::getSrcParams() */
int _ZN5dolby24AudioOptimizerTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby16ParameterAdapterC1EPNS_9DsContextE */
/* Demangled: dolby::ParameterAdapter::ParameterAdapter(dolby::DsContext*) */
int _ZN5dolby16ParameterAdapterC1EPNS_9DsContextE(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClientC1ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij */
/* Demangled: android::DolbyManagerService::NotificationClient::NotificationClient(android::sp<android::DolbyManagerService> const&, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN7android19DolbyManagerService18NotificationClientC1ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void);

/* Symbol: _ZN5dolby15ProfileEndpoint14getValidParamsEv */
/* Demangled: dolby::ProfileEndpoint::getValidParams() */
int _ZN5dolby15ProfileEndpoint14getValidParamsEv(void);

/* Symbol: _ZN5dolby16DeviceParameters18getProfileEndpointEv */
/* Demangled: dolby::DeviceParameters::getProfileEndpoint() */
int _ZN5dolby16DeviceParameters18getProfileEndpointEv(void);

/* Symbol: _ZN5dolby20TranslatorCollectionD1Ev */
/* Demangled: dolby::TranslatorCollection::~TranslatorCollection() */
int _ZN5dolby20TranslatorCollectionD1Ev(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileGeqChanged(dolby::DsContext&, dolby::GeqPreset&) */
int _ZN5dolby25DsContextChangeObservable27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby14DatabaseHelper26updateProfileEndpointValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::updateProfileEndpointValue(dolby::ProfileEndpoint*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper26updateProfileEndpointValueEPNS_15ProfileEndpointENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS2_13AndroidDeviceEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, dolby::AndroidDevice> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, dolby::AndroidDevice>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS2_13AndroidDeviceEEENS_19__map_value_compareIS3_S5_NS_4lessIS3_EELb1EEENS_9allocatorIS5_EEE7destroyEPNS_11__tree_nodeIS5_PvEE(void);

/* Symbol: _ZTVN5dolby16ParameterAdapter27ProfileGeqParameterStrategyE */
/* Demangled: vtable for dolby::ParameterAdapter::ProfileGeqParameterStrategy */
extern void* _ZTVN5dolby16ParameterAdapter27ProfileGeqParameterStrategyE;

/* Symbol: _ZN5dolby19CustomDRCTranslatorC2Ev */
/* Demangled: dolby::CustomDRCTranslator::CustomDRCTranslator() */
int _ZN5dolby19CustomDRCTranslatorC2Ev(void);

/* Symbol: _ZN5dolby20TranslatorCollectionC2Ev */
/* Demangled: dolby::TranslatorCollection::TranslatorCollection() */
int _ZN5dolby20TranslatorCollectionC2Ev(void);

/* Symbol: _ZN5dolby14ProfileContextD1Ev */
/* Demangled: dolby::ProfileContext::~ProfileContext() */
int _ZN5dolby14ProfileContextD1Ev(void);

/* Symbol: _ZN5dolby16TuningFileParser13getDeviceDataEv */
/* Demangled: dolby::TuningFileParser::getDeviceData() */
int _ZN5dolby16TuningFileParser13getDeviceDataEv(void);

/* Symbol: _ZN5dolby8Provider4saveEPNS_7ProfileE */
/* Demangled: dolby::Provider::save(dolby::Profile*) */
int _ZN5dolby8Provider4saveEPNS_7ProfileE(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::overflow(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE8overflowEi(void);

/* Symbol: _ZN5dolby19CustomDRCTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::CustomDRCTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby19CustomDRCTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZTVN5dolby19ParameterTranslatorE */
/* Demangled: vtable for dolby::ParameterTranslator */
extern void* _ZTVN5dolby19ParameterTranslatorE;

/* Symbol: _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE10push_frontEOS3_ */
/* Demangled: std::__1::__split_buffer<_xmlNode**, std::__1::allocator<_xmlNode**> >::push_front(_xmlNode**&&) */
int _ZNSt3__114__split_bufferIPP8_xmlNodeNS_9allocatorIS3_EEE10push_frontEOS3_(void);

/* Symbol: _ZN5dolby16DeviceParameters14getValidParamsEv */
/* Demangled: dolby::DeviceParameters::getValidParams() */
int _ZN5dolby16DeviceParameters14getValidParamsEv(void);

/* Symbol: _ZN5dolby26ComplexEqualizerTranslatorC1Ev */
/* Demangled: dolby::ComplexEqualizerTranslator::ComplexEqualizerTranslator() */
int _ZN5dolby26ComplexEqualizerTranslatorC1Ev(void);

/* Symbol: _ZN5dolby11TagIterator10isCurValidEv */
/* Demangled: dolby::TagIterator::isCurValid() */
int _ZN5dolby11TagIterator10isCurValidEv(void);

/* Symbol: _ZN5dolby9IeqPresetC1ENS_10PresetTypeE */
/* Demangled: dolby::IeqPreset::IeqPreset(dolby::PresetType) */
int _ZN5dolby9IeqPresetC1ENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileIeqChanged(dolby::DsContext&, dolby::Port, dolby::IeqPreset&) */
int _ZN5dolby25DsContextChangeObservable27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortEPNS2_6TuningEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, dolby::Tuning*>, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, dolby::Tuning*>, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, dolby::Tuning*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, dolby::Tuning*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortEPNS2_6TuningEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper11insertValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx */
/* Demangled: dolby::DatabaseHelper::insertValue(dolby::Profile*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, long long) */
int _ZN5dolby14DatabaseHelper11insertValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEx(void);

/* Symbol: _ZN5dolby19CustomDRCTranslator12getSrcParamsEv */
/* Demangled: dolby::CustomDRCTranslator::getSrcParams() */
int _ZN5dolby19CustomDRCTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby21VirtualBassTranslator12getSrcParamsEv */
/* Demangled: dolby::VirtualBassTranslator::getSrcParams() */
int _ZN5dolby21VirtualBassTranslator12getSrcParamsEv(void);

/* Symbol: _ZTVN5dolby24AudioRegulatorTranslatorE */
/* Demangled: vtable for dolby::AudioRegulatorTranslator */
extern void* _ZTVN5dolby24AudioRegulatorTranslatorE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPKiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS8_E9referenceEEE5valueEvE4typeES8_S8_(void);

/* Symbol: _ZN5dolby8Provider15setDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_ */
/* Demangled: dolby::Provider::setDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider15setDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void);

/* Symbol: _ZN5dolby9DsManager23setProfilePortParameterEiiiNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::DsManager::setProfilePortParameter(int, int, int, std::__1::vector<int, std::__1::allocator<int> >) */
int _ZN5dolby9DsManager23setProfilePortParameterEiiiNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby9DsManager7setDsOnEb */
/* Demangled: dolby::DsManager::setDsOn(bool) */
int _ZN5dolby9DsManager7setDsOnEb(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjij */
/* Demangled: android::DolbyManagerService::EventHandler::sendMessage(void*, unsigned int, int, unsigned int) */
int _ZN7android19DolbyManagerService12EventHandler11sendMessageEPvjij(void);

/* Symbol: _ZN7android19DolbyManagerService25getAvailableTuningDevicesEiPvi */
/* Demangled: android::DolbyManagerService::getAvailableTuningDevices(int, void*, int) */
int _ZN7android19DolbyManagerService25getAvailableTuningDevicesEiPvi(void);

/* Symbol: _ZN5dolby13IeqTranslatorC1Ev */
/* Demangled: dolby::IeqTranslator::IeqTranslator() */
int _ZN5dolby13IeqTranslatorC1Ev(void);

/* Symbol: _ZTVN5dolby18DeAmountTranslatorE */
/* Demangled: vtable for dolby::DeAmountTranslator */
extern void* _ZTVN5dolby18DeAmountTranslatorE;

/* Symbol: _ZN5dolby13DapController23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE */
/* Demangled: dolby::DapController::onSelectedTuningChanged(dolby::DsContext&, dolby::Port, dolby::Tuning&) */
int _ZN5dolby13DapController23onSelectedTuningChangedERNS_9DsContextENS_4PortERNS_6TuningE(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable24onSelectedProfileChangedERNS_9DsContextE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileChanged(dolby::DsContext&) */
int _ZN5dolby25DsContextChangeObservable24onSelectedProfileChangedERNS_9DsContextE(void);

/* Symbol: _ZN5dolby14DatabaseHelper17commitTransactionEv */
/* Demangled: dolby::DatabaseHelper::commitTransaction() */
int _ZN5dolby14DatabaseHelper17commitTransactionEv(void);

/* Symbol: _ZN5dolby12DeviceTuning8setDirtyEb */
/* Demangled: dolby::DeviceTuning::setDirty(bool) */
int _ZN5dolby12DeviceTuning8setDirtyEb(void);

/* Symbol: _ZN5dolby24AudioOptimizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::AudioOptimizerTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby24AudioOptimizerTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby10DapContext12setGeqPresetERNS_9GeqPresetE */
/* Demangled: dolby::DapContext::setGeqPreset(dolby::GeqPreset&) */
int _ZN5dolby10DapContext12setGeqPresetERNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby9DsContext22getDefaultTuningDeviceENS_4PortE */
/* Demangled: dolby::DsContext::getDefaultTuningDevice(dolby::Port) */
int _ZN5dolby9DsContext22getDefaultTuningDeviceENS_4PortE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::destroy(std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*) */
int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper4initEv */
/* Demangled: dolby::DatabaseHelper::init() */
int _ZN5dolby14DatabaseHelper4initEv(void);

/* Symbol: _ZN5dolby10DeviceData13setIeqPresetsERNSt3__13setIPNS_9IeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setIeqPresets(std::__1::set<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >&) */
int _ZN5dolby10DeviceData13setIeqPresetsERNSt3__13setIPNS_9IeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5dolby10DeviceData16setDeviceTuningsERNSt3__13setIPNS_12DeviceTuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setDeviceTunings(std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >&) */
int _ZN5dolby10DeviceData16setDeviceTuningsERNSt3__13setIPNS_12DeviceTuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5dolby26RegulatorTuningValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::RegulatorTuningValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby26RegulatorTuningValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby9GeqPresetC1Exi */
/* Demangled: dolby::GeqPreset::GeqPreset(long long, int) */
int _ZN5dolby9GeqPresetC1Exi(void);

/* Symbol: _ZN5dolby8Provider18setSelectedProfileEi */
/* Demangled: dolby::Provider::setSelectedProfile(int) */
int _ZN5dolby8Provider18setSelectedProfileEi(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >::destroy(std::__1::__tree_node<dolby::Tuning*, void*>*) */
int _ZNSt3__16__treeIPN5dolby6TuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby16ParameterAdapter12setParameterEiiRNSt3__16vectorIiNS1_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::setParameter(int, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter12setParameterEiiRNSt3__16vectorIiNS1_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby9DsManagerD2Ev */
/* Demangled: dolby::DsManager::~DsManager() */
int _ZN5dolby9DsManagerD2Ev(void);

/* Symbol: _ZN5dolby6Tuning7getNameEv */
/* Demangled: dolby::Tuning::getName() */
int _ZN5dolby6Tuning7getNameEv(void);

/* Symbol: _ZN5dolby9GeqPreset6equalsERS0_ */
/* Demangled: dolby::GeqPreset::equals(dolby::GeqPreset&) */
int _ZN5dolby9GeqPreset6equalsERS0_(void);

/* Symbol: _ZN5dolby9GeqPresetC2Ei */
/* Demangled: dolby::GeqPreset::GeqPreset(int) */
int _ZN5dolby9GeqPresetC2Ei(void);

/* Symbol: _ZN5dolby15ProfileEndpoint6equalsERS0_ */
/* Demangled: dolby::ProfileEndpoint::equals(dolby::ProfileEndpoint&) */
int _ZN5dolby15ProfileEndpoint6equalsERS0_(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby10TranslatorENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::Translator*, std::__1::less<dolby::Translator*>, std::__1::allocator<dolby::Translator*> >::destroy(std::__1::__tree_node<dolby::Translator*, void*>*) */
int _ZNSt3__16__treeIPN5dolby10TranslatorENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper20executeInsertCommandEPNS_15ParameterValuesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_x */
/* Demangled: dolby::DatabaseHelper::executeInsertCommand(dolby::ParameterValues*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, long long) */
int _ZN5dolby14DatabaseHelper20executeInsertCommandEPNS_15ParameterValuesERNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEESA_SA_x(void);

/* Symbol: _ZTVN5dolby14IeqValueSetterE */
/* Demangled: vtable for dolby::IeqValueSetter */
extern void* _ZTVN5dolby14IeqValueSetterE;

/* Symbol: _ZN5dolby16ParameterAdapterD1Ev */
/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
int _ZN5dolby16ParameterAdapterD1Ev(void);

/* Symbol: _ZN5dolby12DeviceTuning8toStringEv */
/* Demangled: dolby::DeviceTuning::toString() */
int _ZN5dolby12DeviceTuning8toStringEv(void);

/* Symbol: _ZTVN5dolby12DeviceTuningE */
/* Demangled: vtable for dolby::DeviceTuning */
extern void* _ZTVN5dolby12DeviceTuningE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
/* Demangled: _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_ */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE6assignIPiEENS_9enable_ifIXaasr21__is_forward_iteratorIT_EE5valuesr16is_constructibleIiNS_15iterator_traitsIS7_E9referenceEEE5valueEvE4typeES7_S7_(void);

/* Symbol: _ZN5dolby7Profile6equalsERS0_ */
/* Demangled: dolby::Profile::equals(dolby::Profile&) */
int _ZN5dolby7Profile6equalsERS0_(void);

/* Symbol: _ZN5dolby24AudioRegulatorTranslatorC2Ev */
/* Demangled: dolby::AudioRegulatorTranslator::AudioRegulatorTranslator() */
int _ZN5dolby24AudioRegulatorTranslatorC2Ev(void);

/* Symbol: _ZN5dolby14ProfileContext20getSelectedIeqPresetENS_8EndpointE */
/* Demangled: dolby::ProfileContext::getSelectedIeqPreset(dolby::Endpoint) */
int _ZN5dolby14ProfileContext20getSelectedIeqPresetENS_8EndpointE(void);

/* Symbol: _ZN5dolby29VirtualBassSubgainValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::VirtualBassSubgainValueSetter::VirtualBassSubgainValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby29VirtualBassSubgainValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby9DsManager14getDsSuspendedEv */
/* Demangled: dolby::DsManager::getDsSuspended() */
int _ZN5dolby9DsManager14getDsSuspendedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE16do_move_backwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_move_backward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE16do_move_backwardEPvPKvm(void);

/* Symbol: _ZN5dolby15SetParamCommand3addENS_12DapParameterEPNSt3__16vectorIiNS2_9allocatorIiEEEE */
/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, std::__1::vector<int, std::__1::allocator<int> >*) */
int _ZN5dolby15SetParamCommand3addENS_12DapParameterEPNSt3__16vectorIiNS2_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby19ParameterTranslator12translateAllERNS_15SetParamCommandE */
/* Demangled: dolby::ParameterTranslator::translateAll(dolby::SetParamCommand&) */
int _ZN5dolby19ParameterTranslator12translateAllERNS_15SetParamCommandE(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_15ProfileEndpointE */
/* Demangled: dolby::Provider::create(dolby::ProfileEndpoint*) */
int _ZN5dolby8Provider6createEPNS_15ProfileEndpointE(void);

/* Symbol: _ZN7android19DolbyManagerService18doOnDapParamUpdateEPvj */
/* Demangled: android::DolbyManagerService::doOnDapParamUpdate(void*, unsigned int) */
int _ZN7android19DolbyManagerService18doOnDapParamUpdateEPvj(void);

/* Symbol: _ZN7android19DolbyManagerService23getSelectedTuningDeviceEi */
/* Demangled: android::DolbyManagerService::getSelectedTuningDevice(int) */
int _ZN7android19DolbyManagerService23getSelectedTuningDeviceEi(void);

/* Symbol: _ZTVN5dolby9GeqPresetE */
/* Demangled: vtable for dolby::GeqPreset */
extern void* _ZTVN5dolby9GeqPresetE;

/* Symbol: _ZN5dolby18DeEnableTranslatorC1Ev */
/* Demangled: dolby::DeEnableTranslator::DeEnableTranslator() */
int _ZN5dolby18DeEnableTranslatorC1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper14updateGeqValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::updateGeqValue(dolby::GeqPreset*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper14updateGeqValueEPNS_9GeqPresetENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper18updateTuningDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_ */
/* Demangled: dolby::DatabaseHelper::updateTuningDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper18updateTuningDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void);

/* Symbol: _ZN5dolby8Provider22setDefaultXmlSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Provider::setDefaultXmlSignature(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider22setDefaultXmlSignatureENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby11TagIterator4nextEv */
/* Demangled: dolby::TagIterator::next() */
int _ZN5dolby11TagIterator4nextEv(void);

/* Symbol: _ZN5dolby9DsManager25isMobilityProfileSelectedEv */
/* Demangled: dolby::DsManager::isMobilityProfileSelected() */
int _ZN5dolby9DsManager25isMobilityProfileSelectedEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::underflow() */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9underflowEv(void);

/* Symbol: _ZN5dolby9IeqPreset7getTypeEv */
/* Demangled: dolby::IeqPreset::getType() */
int _ZN5dolby9IeqPreset7getTypeEv(void);

/* Symbol: _ZN5dolby14ProfileContextC1EPNS_8ProviderEi */
/* Demangled: dolby::ProfileContext::ProfileContext(dolby::Provider*, int) */
int _ZN5dolby14ProfileContextC1EPNS_8ProviderEi(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::IeqPreset*, std::__1::less<dolby::IeqPreset*>, std::__1::allocator<dolby::IeqPreset*> >::destroy(std::__1::__tree_node<dolby::IeqPreset*, void*>*) */
int _ZNSt3__16__treeIPN5dolby9IeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby16TuningFileParser15parseTuningFileEv */
/* Demangled: dolby::TuningFileParser::parseTuningFile() */
int _ZN5dolby16TuningFileParser15parseTuningFileEv(void);

/* Symbol: _ZN5dolby16ParameterAdapter27getProfileEndpointParameterEiNS_8EndpointEi */
/* Demangled: dolby::ParameterAdapter::getProfileEndpointParameter(int, dolby::Endpoint, int) */
int _ZN5dolby16ParameterAdapter27getProfileEndpointParameterEiNS_8EndpointEi(void);

/* Symbol: _ZN5dolby9DsManagerC2EPNS_13DapControllerEPNS_9DsContextE */
/* Demangled: dolby::DsManager::DsManager(dolby::DapController*, dolby::DsContext*) */
int _ZN5dolby9DsManagerC2EPNS_13DapControllerEPNS_9DsContextE(void);

/* Symbol: _ZN5dolby17ProfileParameters14getValidParamsEv */
/* Demangled: dolby::ProfileParameters::getValidParams() */
int _ZN5dolby17ProfileParameters14getValidParamsEv(void);

/* Symbol: _ZN5dolby9DapEffect10setEnabledEb */
/* Demangled: dolby::DapEffect::setEnabled(bool) */
int _ZN5dolby9DapEffect10setEnabledEb(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_19ParameterTranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, std::__1::__map_value_compare<dolby::AndroidDevice, std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, std::__1::less<dolby::AndroidDevice>, true>, std::__1::allocator<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*> > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::AndroidDevice, dolby::ParameterTranslator*>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby13AndroidDeviceEPNS2_19ParameterTranslatorEEENS_19__map_value_compareIS3_S6_NS_4lessIS3_EELb1EEENS_9allocatorIS6_EEE7destroyEPNS_11__tree_nodeIS6_PvEE(void);

/* Symbol: _ZN5dolby9DsContext18getProfileEndpointEiNS_8EndpointE */
/* Demangled: dolby::DsContext::getProfileEndpoint(int, dolby::Endpoint) */
int _ZN5dolby9DsContext18getProfileEndpointEiNS_8EndpointE(void);

/* Symbol: _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: vtable for std::__1::basic_ostringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTVNSt3__119basic_ostringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5dolby16TuningFileParser11parseTuningEv */
/* Demangled: dolby::TuningFileParser::parseTuning() */
int _ZN5dolby16TuningFileParser11parseTuningEv(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandlerD2Ev */
/* Demangled: android::DolbyManagerService::EventHandler::~EventHandler() */
int _ZN7android19DolbyManagerService12EventHandlerD2Ev(void);

/* Symbol: _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m */
/* Demangled: std::__1::basic_ostream<char, std::__1::char_traits<char> >& std::__1::__put_character_sequence<char, std::__1::char_traits<char> >(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, char const*, unsigned long) */
int _ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m(void);

/* Symbol: _ZN5dolby9GeqPreset5getIdEv */
/* Demangled: dolby::GeqPreset::getId() */
int _ZN5dolby9GeqPreset5getIdEv(void);

/* Symbol: _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_remove<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__113__tree_removeIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5dolby14ProfileContext10isModifiedEv */
/* Demangled: dolby::ProfileContext::isModified() */
int _ZN5dolby14ProfileContext10isModifiedEv(void);

/* Symbol: _ZN5dolby14DatabaseHelper18updateProfileValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::updateProfileValue(dolby::Profile*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper18updateProfileValueEPNS_7ProfileENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby9DsContext8setDapOnEb */
/* Demangled: dolby::DsContext::setDapOn(bool) */
int _ZN5dolby9DsContext8setDapOnEb(void);

/* Symbol: _ZN5dolby14DatabaseHelper17buildColumnStringENS_9TableTypeE */
/* Demangled: dolby::DatabaseHelper::buildColumnString(dolby::TableType) */
int _ZN5dolby14DatabaseHelper17buildColumnStringENS_9TableTypeE(void);

/* Symbol: _ZN5dolby8Provider19loadTuningForDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Provider::loadTuningForDevice(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider19loadTuningForDeviceENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby8Provider5resetEPNS_7ProfileE */
/* Demangled: dolby::Provider::reset(dolby::Profile*) */
int _ZN5dolby8Provider5resetEPNS_7ProfileE(void);

/* Symbol: _ZN5dolby10DeviceData13getGeqPresetsEv */
/* Demangled: dolby::DeviceData::getGeqPresets() */
int _ZN5dolby10DeviceData13getGeqPresetsEv(void);

/* Symbol: _ZN5dolby9DsManager26getDefaultXmlFormatVersionEv */
/* Demangled: dolby::DsManager::getDefaultXmlFormatVersion() */
int _ZN5dolby9DsManager26getDefaultXmlFormatVersionEv(void);

/* Symbol: _ZN7android19DolbyManagerService18getTuningParamDHSAEv */
/* Demangled: android::DolbyManagerService::getTuningParamDHSA() */
int _ZN7android19DolbyManagerService18getTuningParamDHSAEv(void);

/* Symbol: _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD0Ev */
/* Demangled: virtual thunk to android::DolbyManagerService::NotificationClient::~NotificationClient() */
int _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD0Ev(void);

/* Symbol: _ZN5dolby9DsContext8getDapOnEv */
/* Demangled: dolby::DsContext::getDapOn() */
int _ZN5dolby9DsContext8getDapOnEv(void);

/* Symbol: _ZN5dolby9DsContext12reloadTuningEv */
/* Demangled: dolby::DsContext::reloadTuning() */
int _ZN5dolby9DsContext12reloadTuningEv(void);

/* Symbol: _ZN5dolby10DeviceData13getIeqPresetsEv */
/* Demangled: dolby::DeviceData::getIeqPresets() */
int _ZN5dolby10DeviceData13getIeqPresetsEv(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN5dolby11ValueSetterEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ValueSetter*> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPN5dolby11ValueSetterEEENS_19__map_value_compareIS7_SB_NS_4lessIS7_EELb1EEENS5_ISB_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISM_EERKT_(void);

/* Symbol: _ZTVN7android8AHandlerE */
/* Demangled: vtable for android::AHandler */
extern void* _ZTVN7android8AHandlerE;

/* Symbol: _ZN5dolby6TuningC1ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb */
/* Demangled: dolby::Tuning::Tuning(long, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool, bool) */
int _ZN5dolby6TuningC1ElNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEbb(void);

/* Symbol: _ZN5dolby7ProfileC1ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: dolby::Profile::Profile(long long, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby7ProfileC1ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5dolby14ProfileContext8resetGeqEv */
/* Demangled: dolby::ProfileContext::resetGeq() */
int _ZN5dolby14ProfileContext8resetGeqEv(void);

/* Symbol: _ZN5dolby16SetterCollection14getValueSetterERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::SetterCollection::getValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby16SetterCollection14getValueSetterERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby6TuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb */
/* Demangled: dolby::Tuning::Tuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint, bool) */
int _ZN5dolby6TuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_8EndpointEb(void);

/* Symbol: _ZN5dolby16DeviceParameters12kValidParamsE */
/* Demangled: dolby::DeviceParameters::kValidParams */
extern void* _ZN5dolby16DeviceParameters12kValidParamsE;

/* Symbol: _ZN5dolby14ProfileContext33isProfileSpecificSettingsModifiedEv */
/* Demangled: dolby::ProfileContext::isProfileSpecificSettingsModified() */
int _ZN5dolby14ProfileContext33isProfileSpecificSettingsModifiedEv(void);

/* Symbol: _ZN5dolby9DsContext16registerObserverEPNS_17OnDsContextChangeE */
/* Demangled: dolby::DsContext::registerObserver(dolby::OnDsContextChange*) */
int _ZN5dolby9DsContext16registerObserverEPNS_17OnDsContextChangeE(void);

/* Symbol: _ZN5dolby8Provider6createEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::Provider::create(dolby::Tuning*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider6createEPNS_6TuningENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_ */
/* Demangled: void std::__1::__tree_balance_after_insert<std::__1::__tree_node_base<void*>*>(std::__1::__tree_node_base<void*>*, std::__1::__tree_node_base<void*>*) */
int _ZNSt3__127__tree_balance_after_insertIPNS_16__tree_node_baseIPvEEEEvT_S5_(void);

/* Symbol: _ZN5dolby16DeviceParametersD0Ev */
/* Demangled: dolby::DeviceParameters::~DeviceParameters() */
int _ZN5dolby16DeviceParametersD0Ev(void);

/* Symbol: _ZN5dolby18DeEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::DeEnableTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby18DeEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby15SetParamCommandC2Ei */
/* Demangled: dolby::SetParamCommand::SetParamCommand(int) */
int _ZN5dolby15SetParamCommandC2Ei(void);

/* Symbol: _ZN5dolby16DsContextManager16loadXmlIfChangedENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE */
/* Demangled: dolby::DsContextManager::loadXmlIfChanged(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Provider*) */
int _ZN5dolby16DsContextManager16loadXmlIfChangedENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEPNS_8ProviderE(void);

/* Symbol: _ZN5dolby9DsManager14getParamLengthEi */
/* Demangled: dolby::DsManager::getParamLength(int) */
int _ZN5dolby9DsManager14getParamLengthEi(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjjEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5dolby7ProfileC2ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb */
/* Demangled: dolby::Profile::Profile(long long, int, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, bool) */
int _ZN5dolby7ProfileC2ExiNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb(void);

/* Symbol: _ZN5dolby16DsContextManager7releaseEv */
/* Demangled: dolby::DsContextManager::release() */
int _ZN5dolby16DsContextManager7releaseEv(void);

/* Symbol: _ZN5dolby9DsManager12resetProfileEi */
/* Demangled: dolby::DsManager::resetProfile(int) */
int _ZN5dolby9DsManager12resetProfileEi(void);

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_ostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE16_NS_13basic_ostreamIcS2_EE;

/* Symbol: _ZN5dolby9DsContext13saveDsProfileEv */
/* Demangled: dolby::DsContext::saveDsProfile() */
int _ZN5dolby9DsContext13saveDsProfileEv(void);

/* Symbol: _ZN5dolby9DsContext21saveDsProfileSettingsEv */
/* Demangled: dolby::DsContext::saveDsProfileSettings() */
int _ZN5dolby9DsContext21saveDsProfileSettingsEv(void);

/* Symbol: _ZN5dolby8Provider16kSelectedProfileE */
/* Demangled: dolby::Provider::kSelectedProfile */
extern void* _ZN5dolby8Provider16kSelectedProfileE;

/* Symbol: _ZN7android19DolbyManagerService12EventHandler17parseAndSendParamEPvj */
/* Demangled: android::DolbyManagerService::EventHandler::parseAndSendParam(void*, unsigned int) */
int _ZN7android19DolbyManagerService12EventHandler17parseAndSendParamEPvj(void);

/* Symbol: _ZN7android19DolbyManagerService18getTuningParamDFSAEv */
/* Demangled: android::DolbyManagerService::getTuningParamDFSA() */
int _ZN7android19DolbyManagerService18getTuningParamDFSAEv(void);

/* Symbol: _ZN5dolby7Profile20setSelectedGeqPresetEi */
/* Demangled: dolby::Profile::setSelectedGeqPreset(int) */
int _ZN5dolby7Profile20setSelectedGeqPresetEi(void);

/* Symbol: _ZN5dolby10DeviceData10setTuningsERNSt3__13setIPNS_6TuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setTunings(std::__1::set<dolby::Tuning*, std::__1::less<dolby::Tuning*>, std::__1::allocator<dolby::Tuning*> >&) */
int _ZN5dolby10DeviceData10setTuningsERNSt3__13setIPNS_6TuningENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5dolby25AudioOptimizerValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::AudioOptimizerValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby25AudioOptimizerValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby6Tuning5getIdEv */
/* Demangled: dolby::Tuning::getId() */
int _ZN5dolby6Tuning5getIdEv(void);

/* Symbol: _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi */
/* Demangled: std::__1::basic_stringbuf<char, std::__1::char_traits<char>, std::__1::allocator<char> >::pbackfail(int) */
int _ZNSt3__115basic_stringbufIcNS_11char_traitsIcEENS_9allocatorIcEEE9pbackfailEi(void);

/* Symbol: _ZN5dolby9IeqPresetC2ExNS_10PresetTypeE */
/* Demangled: dolby::IeqPreset::IeqPreset(long long, dolby::PresetType) */
int _ZN5dolby9IeqPresetC2ExNS_10PresetTypeE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterENS_6vectorIiNS_9allocatorIiEEEEEENS_19__map_value_compareIS3_S8_NS_4lessIS3_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, std::__1::__map_value_compare<dolby::Parameter, std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, std::__1::less<dolby::Parameter>, true>, std::__1::allocator<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby9ParameterENS_6vectorIiNS_9allocatorIiEEEEEENS_19__map_value_compareIS3_S8_NS_4lessIS3_EELb1EEENS5_IS8_EEE7destroyEPNS_11__tree_nodeIS8_PvEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_3setIPNS2_12DeviceTuningENS_4lessIS6_EENS_9allocatorIS6_EEEEEENS_19__map_value_compareIS3_SC_NS7_IS3_EELb1EEENS9_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_3setIPNS2_12DeviceTuningENS_4lessIS6_EENS_9allocatorIS6_EEEEEENS_19__map_value_compareIS3_SC_NS7_IS3_EELb1EEENS9_ISC_EEE7destroyEPNS_11__tree_nodeISC_PvEE(void);

/* Symbol: _ZTVN5dolby18RowDataValueSetterE */
/* Demangled: vtable for dolby::RowDataValueSetter */
extern void* _ZTVN5dolby18RowDataValueSetterE;

/* Symbol: _ZN5dolby16TuningFileParser12parseProfileEv */
/* Demangled: dolby::TuningFileParser::parseProfile() */
int _ZN5dolby16TuningFileParser12parseProfileEv(void);

/* Symbol: _ZN5dolby9DsManager19getProfileParameterEiNS_9ParameterE */
/* Demangled: dolby::DsManager::getProfileParameter(int, dolby::Parameter) */
int _ZN5dolby9DsManager19getProfileParameterEiNS_9ParameterE(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandler17onMessageReceivedERKNS_2spINS_8AMessageEEE */
/* Demangled: android::DolbyManagerService::EventHandler::onMessageReceived(android::sp<android::AMessage> const&) */
int _ZN7android19DolbyManagerService12EventHandler17onMessageReceivedERKNS_2spINS_8AMessageEEE(void);

/* Symbol: _ZN5dolby21VirtualBassTranslatorC1Ev */
/* Demangled: dolby::VirtualBassTranslator::VirtualBassTranslator() */
int _ZN5dolby21VirtualBassTranslatorC1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper21clearOemDeviceTuningsEv */
/* Demangled: dolby::DatabaseHelper::clearOemDeviceTunings() */
int _ZN5dolby14DatabaseHelper21clearOemDeviceTuningsEv(void);

/* Symbol: _ZN5dolby14DatabaseHelperD1Ev */
/* Demangled: dolby::DatabaseHelper::~DatabaseHelper() */
int _ZN5dolby14DatabaseHelperD1Ev(void);

/* Symbol: _ZN5dolby21VirtualBassTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::VirtualBassTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby21VirtualBassTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby10DapContextC1ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE */
/* Demangled: dolby::DapContext::DapContext(std::__1::map<dolby::AndroidDevice, dolby::ParameterTranslator*, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<std::__1::pair<dolby::AndroidDevice const, dolby::ParameterTranslator*> > >&) */
int _ZN5dolby10DapContextC1ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE(void);

/* Symbol: _ZN5dolby22VirtualBassValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::VirtualBassValueSetter::VirtualBassValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby22VirtualBassValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZTVN5dolby22VirtualBassValueSetterE */
/* Demangled: vtable for dolby::VirtualBassValueSetter */
extern void* _ZTVN5dolby22VirtualBassValueSetterE;

/* Symbol: _ZN5dolby10DeviceDataD2Ev */
/* Demangled: dolby::DeviceData::~DeviceData() */
int _ZN5dolby10DeviceDataD2Ev(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_ */
/* Demangled: void std::__1::__tree<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >::__assign_multi<std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long> >(std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long>, std::__1::__tree_const_iterator<dolby::GeqPreset*, std::__1::__tree_node<dolby::GeqPreset*, void*>*, long>) */
int _ZNSt3__16__treeIPN5dolby9GeqPresetENS_4lessIS3_EENS_9allocatorIS3_EEE14__assign_multiINS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_PvEElEEEEvT_SG_(void);

/* Symbol: _ZTVN5dolby26RegulatorTuningValueSetterE */
/* Demangled: vtable for dolby::RegulatorTuningValueSetter */
extern void* _ZTVN5dolby26RegulatorTuningValueSetterE;

/* Symbol: _ZTCN7android19DolbyManagerService18NotificationClientE0_NS_8hardware20hidl_death_recipientE */
/* Demangled: construction vtable for android::hardware::hidl_death_recipient-in-android::DolbyManagerService::NotificationClient */
extern void* _ZTCN7android19DolbyManagerService18NotificationClientE0_NS_8hardware20hidl_death_recipientE;

/* Symbol: _ZN5dolby13GeqTranslator10kSrcParamsE */
/* Demangled: dolby::GeqTranslator::kSrcParams */
extern void* _ZN5dolby13GeqTranslator10kSrcParamsE;

/* Symbol: _ZN7android19DolbyManagerService11setDapParamEPvj */
/* Demangled: android::DolbyManagerService::setDapParam(void*, unsigned int) */
int _ZN7android19DolbyManagerService11setDapParamEPvj(void);

/* Symbol: _ZN7android19DolbyManagerServiceD1Ev */
/* Demangled: android::DolbyManagerService::~DolbyManagerService() */
int _ZN7android19DolbyManagerServiceD1Ev(void);

/* Symbol: _ZTVN5dolby15ProfileEndpointE */
/* Demangled: vtable for dolby::ProfileEndpoint */
extern void* _ZTVN5dolby15ProfileEndpointE;

/* Symbol: _ZN5dolby16SimpleTranslatorC2ENS_12DapParameterENS_9ParameterE */
/* Demangled: dolby::SimpleTranslator::SimpleTranslator(dolby::DapParameter, dolby::Parameter) */
int _ZN5dolby16SimpleTranslatorC2ENS_12DapParameterENS_9ParameterE(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEED2Ev */
/* Demangled: android::Singleton<dolby::DsContextManager>::~Singleton() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEED2Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper14queryDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::queryDapStatus(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper14queryDapStatusENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5dolby14DatabaseHelperE */
/* Demangled: vtable for dolby::DatabaseHelper */
extern void* _ZTVN5dolby14DatabaseHelperE;

/* Symbol: _ZN5dolby11TagIterator12childrenNextEv */
/* Demangled: dolby::TagIterator::childrenNext() */
int _ZN5dolby11TagIterator12childrenNextEv(void);

/* Symbol: _ZN5dolby14NodeParseUtils14parseMixMatrixERNS_11TagIteratorE */
/* Demangled: dolby::NodeParseUtils::parseMixMatrix(dolby::TagIterator&) */
int _ZN5dolby14NodeParseUtils14parseMixMatrixERNS_11TagIteratorE(void);

/* Symbol: _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiNS_8EndpointERNSt3__16vectorIiNS5_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::ProfileEndpointParameterStrategy::setParameter(dolby::DsContext*, int, dolby::Endpoint, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter32ProfileEndpointParameterStrategy12setParameterEPNS_9DsContextEiNS_8EndpointERNSt3__16vectorIiNS5_9allocatorIiEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_destroy(void*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE10do_destroyEPvm(void);

/* Symbol: _ZTVN5dolby13GeqTranslatorE */
/* Demangled: vtable for dolby::GeqTranslator */
extern void* _ZTVN5dolby13GeqTranslatorE;

/* Symbol: _ZN5dolby10DapContext13getParametersENS_13AndroidDeviceE */
/* Demangled: dolby::DapContext::getParameters(dolby::AndroidDevice) */
int _ZN5dolby10DapContext13getParametersENS_13AndroidDeviceE(void);

/* Symbol: _ZN5dolby13DapController27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE */
/* Demangled: dolby::DapController::onSelectedProfileGeqChanged(dolby::DsContext&, dolby::GeqPreset&) */
int _ZN5dolby13DapController27onSelectedProfileGeqChangedERNS_9DsContextERNS_9GeqPresetE(void);

/* Symbol: _ZN5dolby16DsContextManagerD2Ev */
/* Demangled: dolby::DsContextManager::~DsContextManager() */
int _ZN5dolby16DsContextManagerD2Ev(void);

/* Symbol: _ZN5dolby8Provider12initDatabaseEv */
/* Demangled: dolby::Provider::initDatabase() */
int _ZN5dolby8Provider12initDatabaseEv(void);

/* Symbol: _ZN5dolby9DsManager23getProfilePortParameterEiii */
/* Demangled: dolby::DsManager::getProfilePortParameter(int, int, int) */
int _ZN5dolby9DsManager23getProfilePortParameterEiii(void);

/* Symbol: _ZN7android19DolbyManagerServiceC2Ev */
/* Demangled: android::DolbyManagerService::DolbyManagerService() */
int _ZN7android19DolbyManagerServiceC2Ev(void);

/* Symbol: _ZN5dolby24AudioRegulatorTranslator10kSrcParamsE */
/* Demangled: dolby::AudioRegulatorTranslator::kSrcParams */
extern void* _ZN5dolby24AudioRegulatorTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby16DsContextManager12initDatabaseEPNS_8ProviderENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE */
/* Demangled: dolby::DsContextManager::initDatabase(dolby::Provider*, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby16DsContextManager12initDatabaseEPNS_8ProviderENSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEE(void);

/* Symbol: _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_ */
/* Demangled: std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > std::__1::operator+<char, std::__1::char_traits<char>, std::__1::allocator<char> >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EERKS9_SB_(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClientC2ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij */
/* Demangled: android::DolbyManagerService::NotificationClient::NotificationClient(android::sp<android::DolbyManagerService> const&, android::sp<vendor::dolby::hardware::dms::V2_0::IDmsCallbacks> const&, int, unsigned int) */
int _ZN7android19DolbyManagerService18NotificationClientC2ERKNS_2spIS0_EERKNS2_IN6vendor5dolby8hardware3dms4V2_013IDmsCallbacksEEEij(void);

/* Symbol: _ZN5dolby8Provider18updateDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_ */
/* Demangled: dolby::Provider::updateDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider18updateDeviceTuningENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_(void);

/* Symbol: _ZN5dolby8Provider24loadDeviceTuningsForPortENS_4PortE */
/* Demangled: dolby::Provider::loadDeviceTuningsForPort(dolby::Port) */
int _ZN5dolby8Provider24loadDeviceTuningsForPortENS_4PortE(void);

/* Symbol: _ZN5dolby11TagIteratorD0Ev */
/* Demangled: dolby::TagIterator::~TagIterator() */
int _ZN5dolby11TagIteratorD0Ev(void);

/* Symbol: _ZN5dolby16TuningFileParser22getIeqPresetTypeByNameERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TuningFileParser::getIeqPresetTypeByName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby16TuningFileParser22getIeqPresetTypeByNameERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby9DsManager17getTuningParamDSAENS_4PortE */
/* Demangled: dolby::DsManager::getTuningParamDSA(dolby::Port) */
int _ZN5dolby9DsManager17getTuningParamDSAENS_4PortE(void);

/* Symbol: _ZN5dolby6Tuning19kEndpNameToEndpointE */
/* Demangled: dolby::Tuning::kEndpNameToEndpoint */
extern void* _ZN5dolby6Tuning19kEndpNameToEndpointE;

/* Symbol: _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE */
/* Demangled: construction vtable for std::__1::basic_iostream<char, std::__1::char_traits<char> >-in-std::__1::basic_stringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTCNSt3__118basic_stringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE0_NS_14basic_iostreamIcS2_EE;

/* Symbol: _ZN7android19DolbyManagerService12commitChangeEv */
/* Demangled: android::DolbyManagerService::commitChange() */
int _ZN7android19DolbyManagerService12commitChangeEv(void);

/* Symbol: _ZN5dolby13DapController27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE */
/* Demangled: dolby::DapController::onSelectedProfileIeqChanged(dolby::DsContext&, dolby::Port, dolby::IeqPreset&) */
int _ZN5dolby13DapController27onSelectedProfileIeqChangedERNS_9DsContextENS_4PortERNS_9IeqPresetE(void);

/* Symbol: _ZN5dolby11TagIteratorC1Ev */
/* Demangled: dolby::TagIterator::TagIterator() */
int _ZN5dolby11TagIteratorC1Ev(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClientD2Ev */
/* Demangled: android::DolbyManagerService::NotificationClient::~NotificationClient() */
int _ZN7android19DolbyManagerService18NotificationClientD2Ev(void);

/* Symbol: _ZN5dolby16DeviceParameters9setTuningERNS_6TuningE */
/* Demangled: dolby::DeviceParameters::setTuning(dolby::Tuning&) */
int _ZN5dolby16DeviceParameters9setTuningERNS_6TuningE(void);

/* Symbol: _ZN5dolby13DapControllerC2EiRNS_9DapEffectE */
/* Demangled: dolby::DapController::DapController(int, dolby::DapEffect&) */
int _ZN5dolby13DapControllerC2EiRNS_9DapEffectE(void);

/* Symbol: _ZN5dolby14DatabaseHelper23queryConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::queryConfigurationValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby14DatabaseHelper23queryConfigurationValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN7android19DolbyManagerService18NotificationClient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE */
/* Demangled: android::DolbyManagerService::NotificationClient::serviceDied(unsigned long, android::wp<android::hidl::base::V1_0::IBase> const&) */
int _ZN7android19DolbyManagerService18NotificationClient11serviceDiedEmRKNS_2wpINS_4hidl4base4V1_05IBaseEEE(void);

/* Symbol: _ZN5dolby12DeviceTuning7isDirtyEv */
/* Demangled: dolby::DeviceTuning::isDirty() */
int _ZN5dolby12DeviceTuning7isDirtyEv(void);

/* Symbol: _ZN5dolby24AudioOptimizerTranslatorC2Ev */
/* Demangled: dolby::AudioOptimizerTranslator::AudioOptimizerTranslator() */
int _ZN5dolby24AudioOptimizerTranslatorC2Ev(void);

/* Symbol: _ZN5dolby27VirtualBassEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::VirtualBassEnableTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby27VirtualBassEnableTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby16TuningFileParser14getProfileNameEi */
/* Demangled: dolby::TuningFileParser::getProfileName(int) */
int _ZN5dolby16TuningFileParser14getProfileNameEi(void);

/* Symbol: _ZN5dolby12DeviceTuning9getTuningEv */
/* Demangled: dolby::DeviceTuning::getTuning() */
int _ZN5dolby12DeviceTuning9getTuningEv(void);

/* Symbol: _ZN7android19DolbyManagerService21isMonoInternalSpeakerEv */
/* Demangled: android::DolbyManagerService::isMonoInternalSpeaker() */
int _ZN7android19DolbyManagerService21isMonoInternalSpeakerEv(void);

/* Symbol: _ZN5dolby20TranslatorCollection15kAllTranslatorsE */
/* Demangled: dolby::TranslatorCollection::kAllTranslators */
extern void* _ZN5dolby20TranslatorCollection15kAllTranslatorsE;

/* Symbol: _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_ */
/* Demangled: void std::__1::vector<int, std::__1::allocator<int> >::__emplace_back_slow_path<int&>(int&) */
int _ZNSt3__16vectorIiNS_9allocatorIiEEE24__emplace_back_slow_pathIJRiEEEvDpOT_(void);

/* Symbol: _ZN5dolby16DsContextManager4initEv */
/* Demangled: dolby::DsContextManager::init() */
int _ZN5dolby16DsContextManager4initEv(void);

/* Symbol: _ZN5dolby14DatabaseHelper7execSQLERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::execSQL(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby14DatabaseHelper7execSQLERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby26RegulatorTuningValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE */
/* Demangled: dolby::RegulatorTuningValueSetter::RegulatorTuningValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::vector<dolby::Parameter, std::__1::allocator<dolby::Parameter> >) */
int _ZN5dolby26RegulatorTuningValueSetterC2ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS1_6vectorINS_9ParameterENS5_IS9_EEEE(void);

/* Symbol: _ZN7android19DolbyManagerService12EventHandlerC2EPN5dolby9DsManagerEPS0_ */
/* Demangled: android::DolbyManagerService::EventHandler::EventHandler(dolby::DsManager*, android::DolbyManagerService*) */
int _ZN7android19DolbyManagerService12EventHandlerC2EPN5dolby9DsManagerEPS0_(void);

/* Symbol: _ZN7android19DolbyManagerService25isMobilityProfileSelectedEv */
/* Demangled: android::DolbyManagerService::isMobilityProfileSelected() */
int _ZN7android19DolbyManagerService25isMobilityProfileSelectedEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE8do_splatEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_splat(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE8do_splatEPvPKvm(void);

/* Symbol: _ZN5dolby9DsContextC2EPNS_8ProviderEPNS_25DsContextChangeObservableE */
/* Demangled: dolby::DsContext::DsContext(dolby::Provider*, dolby::DsContextChangeObservable*) */
int _ZN5dolby9DsContextC2EPNS_8ProviderEPNS_25DsContextChangeObservableE(void);

/* Symbol: _ZN5dolby8Provider26setDefaultXmlFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Provider::setDefaultXmlFormatVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby8Provider26setDefaultXmlFormatVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5dolby16ParameterAdapter19VirtualizerStrategyE */
/* Demangled: vtable for dolby::ParameterAdapter::VirtualizerStrategy */
extern void* _ZTVN5dolby16ParameterAdapter19VirtualizerStrategyE;

/* Symbol: _ZN5dolby18RowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::RowDataValueSetter::RowDataValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby18RowDataValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby9DsManager4initEv */
/* Demangled: dolby::DsManager::init() */
int _ZN5dolby9DsManager4initEv(void);

/* Symbol: _ZN5dolby7Profile12getProfileIdEv */
/* Demangled: dolby::Profile::getProfileId() */
int _ZN5dolby7Profile12getProfileIdEv(void);

/* Symbol: _ZN5dolby9DsContext26getSelectedProfileEndpointENS_4PortE */
/* Demangled: dolby::DsContext::getSelectedProfileEndpoint(dolby::Port) */
int _ZN5dolby9DsContext26getSelectedProfileEndpointENS_4PortE(void);

/* Symbol: _ZN5dolby11TagIterator7popNodeEv */
/* Demangled: dolby::TagIterator::popNode() */
int _ZN5dolby11TagIterator7popNodeEv(void);

/* Symbol: _ZN5dolby16TuningFileParser17parseDeviceTuningERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TuningFileParser::parseDeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby16TuningFileParser17parseDeviceTuningERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby9DsManager13saveDsProfileEv */
/* Demangled: dolby::DsManager::saveDsProfile() */
int _ZN5dolby9DsManager13saveDsProfileEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_move_forward(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE15do_move_forwardEPvPKvm(void);

/* Symbol: _ZN5dolby15ProfileEndpoint12kValidParamsE */
/* Demangled: dolby::ProfileEndpoint::kValidParams */
extern void* _ZN5dolby15ProfileEndpoint12kValidParamsE;

/* Symbol: _ZTVN5dolby27VirtualBassEnableTranslatorE */
/* Demangled: vtable for dolby::VirtualBassEnableTranslator */
extern void* _ZTVN5dolby27VirtualBassEnableTranslatorE;

/* Symbol: _ZN5dolby8Provider26getDefaultXmlFormatVersionEv */
/* Demangled: dolby::Provider::getDefaultXmlFormatVersion() */
int _ZN5dolby8Provider26getDefaultXmlFormatVersionEv(void);

/* Symbol: _ZN5dolby10DeviceData13setGeqPresetsERNSt3__13setIPNS_9GeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE */
/* Demangled: dolby::DeviceData::setGeqPresets(std::__1::set<dolby::GeqPreset*, std::__1::less<dolby::GeqPreset*>, std::__1::allocator<dolby::GeqPreset*> >&) */
int _ZN5dolby10DeviceData13setGeqPresetsERNSt3__13setIPNS_9GeqPresetENS1_4lessIS4_EENS1_9allocatorIS4_EEEE(void);

/* Symbol: _ZN5dolby13GeqTranslatorC1Ev */
/* Demangled: dolby::GeqTranslator::GeqTranslator() */
int _ZN5dolby13GeqTranslatorC1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper10getAllRowsERNSt3__16vectorINS_7RowDataENS1_9allocatorIS3_EEEERNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE */
/* Demangled: dolby::DatabaseHelper::getAllRows(std::__1::vector<dolby::RowData, std::__1::allocator<dolby::RowData> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby14DatabaseHelper10getAllRowsERNSt3__16vectorINS_7RowDataENS1_9allocatorIS3_EEEERNS1_12basic_stringIcNS1_11char_traitsIcEENS4_IcEEEE(void);

/* Symbol: _ZTVN5dolby20MixMatrixValueSetterE */
/* Demangled: vtable for dolby::MixMatrixValueSetter */
extern void* _ZTVN5dolby20MixMatrixValueSetterE;

/* Symbol: _ZN5dolby6Tuning11setEndpointENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Tuning::setEndpoint(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby6Tuning11setEndpointENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby16DeviceParameters10setProfileERNS_7ProfileE */
/* Demangled: dolby::DeviceParameters::setProfile(dolby::Profile&) */
int _ZN5dolby16DeviceParameters10setProfileERNS_7ProfileE(void);

/* Symbol: _ZNSt3__15dequeIP8_xmlNodeNS_9allocatorIS2_EEE19__add_back_capacityEv */
/* Demangled: std::__1::deque<_xmlNode*, std::__1::allocator<_xmlNode*> >::__add_back_capacity() */
int _ZNSt3__15dequeIP8_xmlNodeNS_9allocatorIS2_EEE19__add_back_capacityEv(void);

/* Symbol: _ZN7android19DolbyManagerService26getDefaultXmlFormatVersionEv */
/* Demangled: android::DolbyManagerService::getDefaultXmlFormatVersion() */
int _ZN7android19DolbyManagerService26getDefaultXmlFormatVersionEv(void);

/* Symbol: _ZN5dolby16DeviceParametersC2EPNS_19ParamChangeObserverE */
/* Demangled: dolby::DeviceParameters::DeviceParameters(dolby::ParamChangeObserver*) */
int _ZN5dolby16DeviceParametersC2EPNS_19ParamChangeObserverE(void);

/* Symbol: _ZN5dolby19BassMbdrcTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::BassMbdrcTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby19BassMbdrcTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby13DapControllerD2Ev */
/* Demangled: dolby::DapController::~DapController() */
int _ZN5dolby13DapControllerD2Ev(void);

/* Symbol: _ZN5dolby14ProfileContext20getSelectedGeqPresetEv */
/* Demangled: dolby::ProfileContext::getSelectedGeqPreset() */
int _ZN5dolby14ProfileContext20getSelectedGeqPresetEv(void);

/* Symbol: _ZN5dolby14DatabaseHelper11getRowCountERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DatabaseHelper::getRowCount(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) */
int _ZN5dolby14DatabaseHelper11getRowCountERNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby16TuningFileParser20parseProfileEndpointEi */
/* Demangled: dolby::TuningFileParser::parseProfileEndpoint(int) */
int _ZN5dolby16TuningFileParser20parseProfileEndpointEi(void);

/* Symbol: _ZN5dolby12DeviceTuning9getDeviceEv */
/* Demangled: dolby::DeviceTuning::getDevice() */
int _ZN5dolby12DeviceTuning9getDeviceEv(void);

/* Symbol: _ZN5dolby13IeqTranslator12getSrcParamsEv */
/* Demangled: dolby::IeqTranslator::getSrcParams() */
int _ZN5dolby13IeqTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby9DapEffectC2EiN7android8String16E */
/* Demangled: dolby::DapEffect::DapEffect(int, android::String16) */
int _ZN5dolby9DapEffectC2EiN7android8String16E(void);

/* Symbol: _ZN5dolby9DsManager11saveDsStateEv */
/* Demangled: dolby::DsManager::saveDsState() */
int _ZN5dolby9DsManager11saveDsStateEv(void);

/* Symbol: _ZN7android19DolbyManagerService13getDapEnabledEv */
/* Demangled: android::DolbyManagerService::getDapEnabled() */
int _ZN7android19DolbyManagerService13getDapEnabledEv(void);

/* Symbol: _ZN5dolby15ProfileEndpoint5getIdEv */
/* Demangled: dolby::ProfileEndpoint::getId() */
int _ZN5dolby15ProfileEndpoint5getIdEv(void);

/* Symbol: _ZN5dolby15ProfileEndpointC1EiNS_8EndpointENS_10PresetTypeE */
/* Demangled: dolby::ProfileEndpoint::ProfileEndpoint(int, dolby::Endpoint, dolby::PresetType) */
int _ZN5dolby15ProfileEndpointC1EiNS_8EndpointENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby9DsContext17isProfileModifiedEi */
/* Demangled: dolby::DsContext::isProfileModified(int) */
int _ZN5dolby9DsContext17isProfileModifiedEi(void);

/* Symbol: _ZN5dolby9DsManager14setDsSuspendedEb */
/* Demangled: dolby::DsManager::setDsSuspended(bool) */
int _ZN5dolby9DsManager14setDsSuspendedEb(void);

/* Symbol: _ZN7android19DolbyManagerService15getStoredParamsEPNS_11KeyedVectorI15audio_devices_tPN5dolby13DapParamCacheEEEbPi */
/* Demangled: android::DolbyManagerService::getStoredParams(android::KeyedVector<audio_devices_t, dolby::DapParamCache*>*, bool, int*) */
int _ZN7android19DolbyManagerService15getStoredParamsEPNS_11KeyedVectorI15audio_devices_tPN5dolby13DapParamCacheEEEbPi(void);

/* Symbol: _ZNSt3__16__treeIN5dolby9ParameterENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE */
/* Demangled: std::__1::__tree<dolby::Parameter, std::__1::less<dolby::Parameter>, std::__1::allocator<dolby::Parameter> >::destroy(std::__1::__tree_node<dolby::Parameter, void*>*) */
int _ZNSt3__16__treeIN5dolby9ParameterENS_4lessIS2_EENS_9allocatorIS2_EEE7destroyEPNS_11__tree_nodeIS2_PvEE(void);

/* Symbol: _ZN5dolby20OutputModeTranslatorC2Ev */
/* Demangled: dolby::OutputModeTranslator::OutputModeTranslator() */
int _ZN5dolby20OutputModeTranslatorC2Ev(void);

/* Symbol: _ZN5dolby16TuningFileParserD0Ev */
/* Demangled: dolby::TuningFileParser::~TuningFileParser() */
int _ZN5dolby16TuningFileParserD0Ev(void);

/* Symbol: _ZN5dolby15ProfileEndpoint8toStringEv */
/* Demangled: dolby::ProfileEndpoint::toString() */
int _ZN5dolby15ProfileEndpoint8toStringEv(void);

/* Symbol: _ZN5dolby10DapContext9setTuningENS_4PortERNS_6TuningE */
/* Demangled: dolby::DapContext::setTuning(dolby::Port, dolby::Tuning&) */
int _ZN5dolby10DapContext9setTuningENS_4PortERNS_6TuningE(void);

/* Symbol: _ZN5dolby10DeviceData14setToolVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::DeviceData::setToolVersion(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby10DeviceData14setToolVersionENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_compareEPKvS9_ */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_compare(void const*, void const*) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE10do_compareEPKvS9_(void);

/* Symbol: _ZN5dolby9DsContext19getProfileParameterEiNS_9ParameterE */
/* Demangled: dolby::DsContext::getProfileParameter(int, dolby::Parameter) */
int _ZN5dolby9DsContext19getProfileParameterEiNS_9ParameterE(void);

/* Symbol: _ZN5dolby16TuningFileParserC1Ev */
/* Demangled: dolby::TuningFileParser::TuningFileParser() */
int _ZN5dolby16TuningFileParserC1Ev(void);

/* Symbol: _ZN5dolby14DatabaseHelper18queryEndpointValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_PNS_15ProfileEndpointE */
/* Demangled: dolby::DatabaseHelper::queryEndpointValue(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::ProfileEndpoint*) */
int _ZN5dolby14DatabaseHelper18queryEndpointValueENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_PNS_15ProfileEndpointE(void);

/* Symbol: _ZTVN5dolby15ParameterValuesE */
/* Demangled: vtable for dolby::ParameterValues */
extern void* _ZTVN5dolby15ParameterValuesE;

/* Symbol: _ZN5dolby14ProfileContext5resetEv */
/* Demangled: dolby::ProfileContext::reset() */
int _ZN5dolby14ProfileContext5resetEv(void);

/* Symbol: _ZN5dolby9DsContext33isProfileSpecificSettingsModifiedEi */
/* Demangled: dolby::DsContext::isProfileSpecificSettingsModified(int) */
int _ZN5dolby9DsContext33isProfileSpecificSettingsModifiedEi(void);

/* Symbol: _ZTVN7android19DolbyManagerServiceE */
/* Demangled: vtable for android::DolbyManagerService */
extern void* _ZTVN7android19DolbyManagerServiceE;

/* Symbol: _ZN5dolby15ProfileEndpoint20getSelectedIeqPresetEv */
/* Demangled: dolby::ProfileEndpoint::getSelectedIeqPreset() */
int _ZN5dolby15ProfileEndpoint20getSelectedIeqPresetEv(void);

/* Symbol: _ZN5dolby16DsContextManager13loadOemTuningEv */
/* Demangled: dolby::DsContextManager::loadOemTuning() */
int _ZN5dolby16DsContextManager13loadOemTuningEv(void);

/* Symbol: _ZN5dolby14GeqValueSetter10kAttrNamesE */
/* Demangled: dolby::GeqValueSetter::kAttrNames */
extern void* _ZN5dolby14GeqValueSetter10kAttrNamesE;

/* Symbol: _ZN5dolby9IeqPreset8toStringEv */
/* Demangled: dolby::IeqPreset::toString() */
int _ZN5dolby9IeqPreset8toStringEv(void);

/* Symbol: _ZN5dolby9DsManager12getParameterEii */
/* Demangled: dolby::DsManager::getParameter(int, int) */
int _ZN5dolby9DsManager12getParameterEii(void);

/* Symbol: _ZN5dolby20TranslatorCollectionD2Ev */
/* Demangled: dolby::TranslatorCollection::~TranslatorCollection() */
int _ZN5dolby20TranslatorCollectionD2Ev(void);

/* Symbol: _ZN5dolby9DsManager16getNumOfProfilesEv */
/* Demangled: dolby::DsManager::getNumOfProfiles() */
int _ZN5dolby9DsManager16getNumOfProfilesEv(void);

/* Symbol: _ZN5dolby20MixMatrixValueSetter11getNodeNameEv */
/* Demangled: dolby::MixMatrixValueSetter::getNodeName() */
int _ZN5dolby20MixMatrixValueSetter11getNodeNameEv(void);

/* Symbol: _ZTVN5dolby25DsContextChangeObservableE */
/* Demangled: vtable for dolby::DsContextChangeObservable */
extern void* _ZTVN5dolby25DsContextChangeObservableE;

/* Symbol: _ZN5dolby14ProfileContextD2Ev */
/* Demangled: dolby::ProfileContext::~ProfileContext() */
int _ZN5dolby14ProfileContextD2Ev(void);

/* Symbol: _ZN5dolby16TuningFileParser13setTuningFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::TuningFileParser::setTuningFile(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby16TuningFileParser13setTuningFileENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZN5dolby8ProviderD0Ev */
/* Demangled: dolby::Provider::~Provider() */
int _ZN5dolby8ProviderD0Ev(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::__find_equal<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE12__find_equalIS7_EERPNS_16__tree_node_baseIPvEERPNS_15__tree_end_nodeISL_EERKT_(void);

/* Symbol: _ZN5dolby7Profile10isMobilityEv */
/* Demangled: dolby::Profile::isMobility() */
int _ZN5dolby7Profile10isMobilityEv(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileEndpointChanged(dolby::DsContext&, dolby::Port, dolby::ProfileEndpoint&) */
int _ZN5dolby25DsContextChangeObservable32onSelectedProfileEndpointChangedERNS_9DsContextENS_4PortERNS_15ProfileEndpointE(void);

/* Symbol: _ZN5dolby9DsContext10getContextEi */
/* Demangled: dolby::DsContext::getContext(int) */
int _ZN5dolby9DsContext10getContextEi(void);

/* Symbol: _ZTVN5dolby11TagIteratorE */
/* Demangled: vtable for dolby::TagIterator */
extern void* _ZTVN5dolby11TagIteratorE;

/* Symbol: _ZN5dolby25AudioOptimizerValueSetter10kAttrNamesE */
/* Demangled: dolby::AudioOptimizerValueSetter::kAttrNames */
extern void* _ZN5dolby25AudioOptimizerValueSetter10kAttrNamesE;

/* Symbol: _ZTVN5dolby16ParameterAdapter32ProfileEndpointParameterStrategyE */
/* Demangled: vtable for dolby::ParameterAdapter::ProfileEndpointParameterStrategy */
extern void* _ZTVN5dolby16ParameterAdapter32ProfileEndpointParameterStrategyE;

/* Symbol: _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE */
/* Demangled: vtable for android::SortedVector<android::key_value_pair_t<unsigned int, unsigned int> > */
extern void* _ZTVN7android12SortedVectorINS_16key_value_pair_tIjjEEEE;

/* Symbol: _ZN5dolby24AudioOptimizerTranslator10kSrcParamsE */
/* Demangled: dolby::AudioOptimizerTranslator::kSrcParams */
extern void* _ZN5dolby24AudioOptimizerTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby26ComplexEqualizerTranslatorC2Ev */
/* Demangled: dolby::ComplexEqualizerTranslator::ComplexEqualizerTranslator() */
int _ZN5dolby26ComplexEqualizerTranslatorC2Ev(void);

/* Symbol: _ZN5dolby27VirtualBassEnableTranslator10kSrcParamsE */
/* Demangled: dolby::VirtualBassEnableTranslator::kSrcParams */
extern void* _ZN5dolby27VirtualBassEnableTranslator10kSrcParamsE;

/* Symbol: _ZN5dolby8ProviderC1Ev */
/* Demangled: dolby::Provider::Provider() */
int _ZN5dolby8ProviderC1Ev(void);

/* Symbol: _ZN5dolby10DeviceData11getProfilesEv */
/* Demangled: dolby::DeviceData::getProfiles() */
int _ZN5dolby10DeviceData11getProfilesEv(void);

/* Symbol: _ZN5dolby9DsManager15reloadTuningXmlEv */
/* Demangled: dolby::DsManager::reloadTuningXml() */
int _ZN5dolby9DsManager15reloadTuningXmlEv(void);

/* Symbol: _ZN5dolby9GeqPreset12kValidParamsE */
/* Demangled: dolby::GeqPreset::kValidParams */
extern void* _ZN5dolby9GeqPreset12kValidParamsE;

/* Symbol: _ZTVN5dolby16DeviceParametersE */
/* Demangled: vtable for dolby::DeviceParameters */
extern void* _ZTVN5dolby16DeviceParametersE;

/* Symbol: _ZN5dolby9DapEffectD1Ev */
/* Demangled: dolby::DapEffect::~DapEffect() */
int _ZN5dolby9DapEffectD1Ev(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<unsigned int, android::sp<android::DolbyManagerService::NotificationClient> > >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tIjNS_2spINS_19DolbyManagerService18NotificationClientEEEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5dolby17ProfileParameters12updateParamsERNS_15ParameterValuesE */
/* Demangled: dolby::ProfileParameters::updateParams(dolby::ParameterValues&) */
int _ZN5dolby17ProfileParameters12updateParamsERNS_15ParameterValuesE(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >::destroy(std::__1::__tree_node<dolby::DeviceTuning*, void*>*) */
int _ZNSt3__16__treeIPN5dolby12DeviceTuningENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby26RegulatorTuningValueSetter10kAttrNamesE */
/* Demangled: dolby::RegulatorTuningValueSetter::kAttrNames */
extern void* _ZN5dolby26RegulatorTuningValueSetter10kAttrNamesE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint> > >::destroy(std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Endpoint>, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby8EndpointEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZTVN5dolby17ProfileParametersE */
/* Demangled: vtable for dolby::ProfileParameters */
extern void* _ZTVN5dolby17ProfileParametersE;

/* Symbol: _ZN5dolby13IeqTranslatorC2Ev */
/* Demangled: dolby::IeqTranslator::IeqTranslator() */
int _ZN5dolby13IeqTranslatorC2Ev(void);

/* Symbol: _ZN5dolby9GeqPresetC2Exi */
/* Demangled: dolby::GeqPreset::GeqPreset(long long, int) */
int _ZN5dolby9GeqPresetC2Exi(void);

/* Symbol: _ZN5dolby19CustomDRCTranslator10kSrcParamsE */
/* Demangled: dolby::CustomDRCTranslator::kSrcParams */
extern void* _ZN5dolby19CustomDRCTranslator10kSrcParamsE;

/* Symbol: _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_ */
/* Demangled: std::__1::__tree_iterator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, void*>*, long> std::__1::__tree<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::__map_value_compare<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter> > >::find<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) */
int _ZNSt3__16__treeINS_12__value_typeINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEN5dolby9ParameterEEENS_19__map_value_compareIS7_SA_NS_4lessIS7_EELb1EEENS5_ISA_EEE4findIS7_EENS_15__tree_iteratorISA_PNS_11__tree_nodeISA_PvEElEERKT_(void);

/* Symbol: _ZN5dolby8Provider27loadDefaultProfileEndpointsEi */
/* Demangled: dolby::Provider::loadDefaultProfileEndpoints(int) */
int _ZN5dolby8Provider27loadDefaultProfileEndpointsEi(void);

/* Symbol: _ZN5dolby24AudioRegulatorTranslator12getSrcParamsEv */
/* Demangled: dolby::AudioRegulatorTranslator::getSrcParams() */
int _ZN5dolby24AudioRegulatorTranslator12getSrcParamsEv(void);

/* Symbol: _ZN5dolby9DsContext19setProfileParameterEiNS_8EndpointENS_9ParameterERNSt3__16vectorIiNS3_9allocatorIiEEEE */
/* Demangled: dolby::DsContext::setProfileParameter(int, dolby::Endpoint, dolby::Parameter, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby9DsContext19setProfileParameterEiNS_8EndpointENS_9ParameterERNSt3__16vectorIiNS3_9allocatorIiEEEE(void);

/* Symbol: _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE */
/* Demangled: std::__1::__tree<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::__map_value_compare<dolby::Port, std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::less<dolby::Port>, true>, std::__1::allocator<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > > >::destroy(std::__1::__tree_node<std::__1::__value_type<dolby::Port, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, void*>*) */
int _ZNSt3__16__treeINS_12__value_typeIN5dolby4PortENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEEENS_19__map_value_compareIS3_SA_NS_4lessIS3_EELb1EEENS7_ISA_EEE7destroyEPNS_11__tree_nodeISA_PvEE(void);

/* Symbol: _ZN5dolby14DatabaseHelper18queryDeviceTuningsENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS1_3setIPNS_12DeviceTuningENS1_4lessISA_EENS5_ISA_EEEE */
/* Demangled: dolby::DatabaseHelper::queryDeviceTunings(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::set<dolby::DeviceTuning*, std::__1::less<dolby::DeviceTuning*>, std::__1::allocator<dolby::DeviceTuning*> >&) */
int _ZN5dolby14DatabaseHelper18queryDeviceTuningsENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERNS1_3setIPNS_12DeviceTuningENS1_4lessISA_EENS5_ISA_EEEE(void);

/* Symbol: _ZN5dolby11TagIterator11isNextValidEv */
/* Demangled: dolby::TagIterator::isNextValid() */
int _ZN5dolby11TagIterator11isNextValidEv(void);

/* Symbol: _ZN5dolby7Profile20getSelectedGeqPresetEv */
/* Demangled: dolby::Profile::getSelectedGeqPreset() */
int _ZN5dolby7Profile20getSelectedGeqPresetEv(void);

/* Symbol: _ZN5dolby15SetParamCommand3addENS_12DapParameterESt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE */
/* Demangled: dolby::SetParamCommand::add(dolby::DapParameter, std::initializer_list<std::__1::vector<int, std::__1::allocator<int> >*>) */
int _ZN5dolby15SetParamCommand3addENS_12DapParameterESt16initializer_listIPNSt3__16vectorIiNS3_9allocatorIiEEEEE(void);

/* Symbol: _ZTVN5dolby13IeqTranslatorE */
/* Demangled: vtable for dolby::IeqTranslator */
extern void* _ZTVN5dolby13IeqTranslatorE;

/* Symbol: _ZN5dolby9DsContext18getSelectedProfileEv */
/* Demangled: dolby::DsContext::getSelectedProfile() */
int _ZN5dolby9DsContext18getSelectedProfileEv(void);

/* Symbol: _ZTVN5dolby29VirtualBassSubgainValueSetterE */
/* Demangled: vtable for dolby::VirtualBassSubgainValueSetter */
extern void* _ZTVN5dolby29VirtualBassSubgainValueSetterE;

/* Symbol: _ZN5dolby12DeviceTuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_ */
/* Demangled: dolby::DeviceTuning::DeviceTuning(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby12DeviceTuningC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES7_S7_(void);

/* Symbol: _ZN5dolby19ParameterTranslator18onParameterChangedENS_9ParameterE */
/* Demangled: dolby::ParameterTranslator::onParameterChanged(dolby::Parameter) */
int _ZN5dolby19ParameterTranslator18onParameterChangedENS_9ParameterE(void);

/* Symbol: _ZN5dolby19ParameterTranslator9setSourceEPNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::ParameterTranslator::setSource(dolby::ParameterValues*, dolby::Endpoint, bool) */
int _ZN5dolby19ParameterTranslator9setSourceEPNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN7android9SingletonIN5dolby16DsContextManagerEE11getInstanceEv */
/* Demangled: android::Singleton<dolby::DsContextManager>::getInstance() */
int _ZN7android9SingletonIN5dolby16DsContextManagerEE11getInstanceEv(void);

/* Symbol: _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm */
/* Demangled: android::SortedVector<android::key_value_pair_t<audio_devices_t, dolby::DapParamCache*> >::do_copy(void*, void const*, unsigned long) const */
int _ZNK7android12SortedVectorINS_16key_value_pair_tI15audio_devices_tPN5dolby13DapParamCacheEEEE7do_copyEPvPKvm(void);

/* Symbol: _ZN5dolby6Tuning7setMonoEb */
/* Demangled: dolby::Tuning::setMono(bool) */
int _ZN5dolby6Tuning7setMonoEb(void);

/* Symbol: _ZN5dolby9IeqPresetC2ENS_10PresetTypeE */
/* Demangled: dolby::IeqPreset::IeqPreset(dolby::PresetType) */
int _ZN5dolby9IeqPresetC2ENS_10PresetTypeE(void);

/* Symbol: _ZN5dolby7Profile8toStringEv */
/* Demangled: dolby::Profile::toString() */
int _ZN5dolby7Profile8toStringEv(void);

/* Symbol: _ZN5dolby17ProfileParametersD0Ev */
/* Demangled: dolby::ProfileParameters::~ProfileParameters() */
int _ZN5dolby17ProfileParametersD0Ev(void);

/* Symbol: _ZN5dolby19ParameterTranslatorC1Ev */
/* Demangled: dolby::ParameterTranslator::ParameterTranslator() */
int _ZN5dolby19ParameterTranslatorC1Ev(void);

/* Symbol: _ZN5dolby10DapContextC2ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE */
/* Demangled: dolby::DapContext::DapContext(std::__1::map<dolby::AndroidDevice, dolby::ParameterTranslator*, std::__1::less<dolby::AndroidDevice>, std::__1::allocator<std::__1::pair<dolby::AndroidDevice const, dolby::ParameterTranslator*> > >&) */
int _ZN5dolby10DapContextC2ERNSt3__13mapINS_13AndroidDeviceEPNS_19ParameterTranslatorENS1_4lessIS3_EENS1_9allocatorINS1_4pairIKS3_S5_EEEEEE(void);

/* Symbol: _ZN5dolby10DapContextD1Ev */
/* Demangled: dolby::DapContext::~DapContext() */
int _ZN5dolby10DapContextD1Ev(void);

/* Symbol: _ZN5dolby8Provider16beginTransactionEv */
/* Demangled: dolby::Provider::beginTransaction() */
int _ZN5dolby8Provider16beginTransactionEv(void);

/* Symbol: _ZN5dolby16ParameterAdapterD2Ev */
/* Demangled: dolby::ParameterAdapter::~ParameterAdapter() */
int _ZN5dolby16ParameterAdapterD2Ev(void);

/* Symbol: _ZN5dolby7Profile7setNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE */
/* Demangled: dolby::Profile::setName(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >) */
int _ZN5dolby7Profile7setNameENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE(void);

/* Symbol: _ZTVN5dolby16SimpleTranslatorE */
/* Demangled: vtable for dolby::SimpleTranslator */
extern void* _ZTVN5dolby16SimpleTranslatorE;

/* Symbol: _ZTVN5dolby19CustomDRCTranslatorE */
/* Demangled: vtable for dolby::CustomDRCTranslator */
extern void* _ZTVN5dolby19CustomDRCTranslatorE;

/* Symbol: _ZTVN5dolby13DapControllerE */
/* Demangled: vtable for dolby::DapController */
extern void* _ZTVN5dolby13DapControllerE;

/* Symbol: _ZN5dolby16SetterCollection16kAllValueSettersE */
/* Demangled: dolby::SetterCollection::kAllValueSetters */
extern void* _ZN5dolby16SetterCollection16kAllValueSettersE;

/* Symbol: _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE */
/* Demangled: VTT for std::__1::basic_istringstream<char, std::__1::char_traits<char>, std::__1::allocator<char> > */
extern void* _ZTTNSt3__119basic_istringstreamIcNS_11char_traitsIcEENS_9allocatorIcEEEE;

/* Symbol: _ZN5dolby20MixMatrixValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE */
/* Demangled: dolby::MixMatrixValueSetter::MixMatrixValueSetter(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, dolby::Parameter) */
int _ZN5dolby20MixMatrixValueSetterC1ENSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEENS_9ParameterE(void);

/* Symbol: _ZN5dolby16SimpleTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb */
/* Demangled: dolby::SimpleTranslator::dapTranslate(dolby::SetParamCommand&, dolby::ParameterValues&, dolby::Endpoint, bool) */
int _ZN5dolby16SimpleTranslator12dapTranslateERNS_15SetParamCommandERNS_15ParameterValuesENS_8EndpointEb(void);

/* Symbol: _ZN5dolby18DeEnableTranslatorC2Ev */
/* Demangled: dolby::DeEnableTranslator::DeEnableTranslator() */
int _ZN5dolby18DeEnableTranslatorC2Ev(void);

/* Symbol: _ZN5dolby9DsContextC1EPNS_8ProviderEPNS_25DsContextChangeObservableE */
/* Demangled: dolby::DsContext::DsContext(dolby::Provider*, dolby::DsContextChangeObservable*) */
int _ZN5dolby9DsContextC1EPNS_8ProviderEPNS_25DsContextChangeObservableE(void);

/* Symbol: _ZN5dolby14DatabaseHelper20initParameterNameMapEv */
/* Demangled: dolby::DatabaseHelper::initParameterNameMap() */
int _ZN5dolby14DatabaseHelper20initParameterNameMapEv(void);

/* Symbol: _ZNSt3__16vectorIPN5dolby7ProfileENS_9allocatorIS3_EEE8__appendEm */
/* Demangled: std::__1::vector<dolby::Profile*, std::__1::allocator<dolby::Profile*> >::__append(unsigned long) */
int _ZNSt3__16vectorIPN5dolby7ProfileENS_9allocatorIS3_EEE8__appendEm(void);

/* Symbol: _ZN5dolby16ParameterAdapter27setProfileEndpointParameterEiNS_8EndpointEiRNSt3__16vectorIiNS2_9allocatorIiEEEE */
/* Demangled: dolby::ParameterAdapter::setProfileEndpointParameter(int, dolby::Endpoint, int, std::__1::vector<int, std::__1::allocator<int> >&) */
int _ZN5dolby16ParameterAdapter27setProfileEndpointParameterEiNS_8EndpointEiRNSt3__16vectorIiNS2_9allocatorIiEEEE(void);

/* Symbol: _ZN5dolby25DsContextChangeObservable33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE */
/* Demangled: dolby::DsContextChangeObservable::onSelectedProfileParameterChanged(dolby::DsContext&, dolby::Profile&) */
int _ZN5dolby25DsContextChangeObservable33onSelectedProfileParameterChangedERNS_9DsContextERNS_7ProfileE(void);

/* Symbol: _ZN5dolby9DsContext15kSupportedPortsE */
/* Demangled: dolby::DsContext::kSupportedPorts */
extern void* _ZN5dolby9DsContext15kSupportedPortsE;

/* Symbol: _ZN5dolby8Provider20loadDefaultGeqPresetEi */
/* Demangled: dolby::Provider::loadDefaultGeqPreset(int) */
int _ZN5dolby8Provider20loadDefaultGeqPresetEi(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_ */
/* Demangled: std::__1::__tree_node_base<void*>*& std::__1::__tree<dolby::ProfileEndpoint*, std::__1::less<dolby::ProfileEndpoint*>, std::__1::allocator<dolby::ProfileEndpoint*> >::__find_equal<dolby::ProfileEndpoint*>(std::__1::__tree_const_iterator<dolby::ProfileEndpoint*, std::__1::__tree_node<dolby::ProfileEndpoint*, void*>*, long>, std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>*&, std::__1::__tree_node_base<void*>*&, dolby::ProfileEndpoint* const&) */
int _ZNSt3__16__treeIPN5dolby15ProfileEndpointENS_4lessIS3_EENS_9allocatorIS3_EEE12__find_equalIS3_EERPNS_16__tree_node_baseIPvEENS_21__tree_const_iteratorIS3_PNS_11__tree_nodeIS3_SB_EElEERPNS_15__tree_end_nodeISD_EESE_RKT_(void);

/* Symbol: _ZN5dolby16ParameterAdapter19VirtualizerStrategy12getParameterEPNS_9DsContextEi */
/* Demangled: dolby::ParameterAdapter::VirtualizerStrategy::getParameter(dolby::DsContext*, int) */
int _ZN5dolby16ParameterAdapter19VirtualizerStrategy12getParameterEPNS_9DsContextEi(void);

/* Symbol: _ZN5dolby9DsManager21isMonoInternalSpeakerEv */
/* Demangled: dolby::DsManager::isMonoInternalSpeaker() */
int _ZN5dolby9DsManager21isMonoInternalSpeakerEv(void);

/* Symbol: _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE */
/* Demangled: std::__1::__tree<dolby::Profile*, std::__1::less<dolby::Profile*>, std::__1::allocator<dolby::Profile*> >::destroy(std::__1::__tree_node<dolby::Profile*, void*>*) */
int _ZNSt3__16__treeIPN5dolby7ProfileENS_4lessIS3_EENS_9allocatorIS3_EEE7destroyEPNS_11__tree_nodeIS3_PvEE(void);

/* Symbol: _ZN5dolby9DsManager21saveDsProfileSettingsEv */
/* Demangled: dolby::DsManager::saveDsProfileSettings() */
int _ZN5dolby9DsManager21saveDsProfileSettingsEv(void);

/* Symbol: _ZN5dolby13DapController14sendParametersENS_13AndroidDeviceE */
/* Demangled: dolby::DapController::sendParameters(dolby::AndroidDevice) */
int _ZN5dolby13DapController14sendParametersENS_13AndroidDeviceE(void);

/* Symbol: _ZN5dolby14ProfileContext4loadEv */
/* Demangled: dolby::ProfileContext::load() */
int _ZN5dolby14ProfileContext4loadEv(void);

/* Symbol: _ZN5dolby9DsContext26getSelectedTuningParameterENS_4PortENS_9ParameterE */
/* Demangled: dolby::DsContext::getSelectedTuningParameter(dolby::Port, dolby::Parameter) */
int _ZN5dolby9DsContext26getSelectedTuningParameterENS_4PortENS_9ParameterE(void);

/* Symbol: _ZN7android19DolbyManagerService23setSelectedTuningDeviceEiPvi */
/* Demangled: android::DolbyManagerService::setSelectedTuningDevice(int, void*, int) */
int _ZN7android19DolbyManagerService23setSelectedTuningDeviceEiPvi(void);

/* Symbol: _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD1Ev */
/* Demangled: virtual thunk to android::DolbyManagerService::NotificationClient::~NotificationClient() */
int _ZTv0_n24_N7android19DolbyManagerService18NotificationClientD1Ev(void);

/* Symbol: _ZN5dolby19ParameterTranslator21sTranslatorCollectionE */
/* Demangled: dolby::ParameterTranslator::sTranslatorCollection */
extern void* _ZN5dolby19ParameterTranslator21sTranslatorCollectionE;

/* Symbol: _ZN5dolby9DsContext18getProfileEndpointENS_8EndpointE */
/* Demangled: dolby::DsContext::getProfileEndpoint(dolby::Endpoint) */
int _ZN5dolby9DsContext18getProfileEndpointENS_8EndpointE(void);

/* Symbol: _ZN5dolby17SimpleValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE */
/* Demangled: dolby::SimpleValueSetter::set(dolby::ParameterValues&, dolby::TagIterator&) */
int _ZN5dolby17SimpleValueSetter3setERNS_15ParameterValuesERNS_11TagIteratorE(void);

__END_DECLS

#endif /* BEGONIA_RE_LIBDLBDSSERVICE_H */
